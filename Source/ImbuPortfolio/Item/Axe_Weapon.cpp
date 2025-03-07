#include "Axe_Weapon.h"

#include "../Structure/Structure_WeaponProperty.h"
#include "Components\StaticMeshComponent.h"
#include "GameFramework/RotatingMovementComponent.h"


struct FStructure_WeaponProperty;

AAxe_Weapon::AAxe_Weapon()
{

	MoveTimeline = CreateDefaultSubobject<UTimelineComponent>(TEXT("MoveTimeline"));

	RotatingMovement = CreateDefaultSubobject<URotatingMovementComponent>(TEXT("RotatingMovement"));

	
}

void AAxe_Weapon::BeginPlay()
{
	Super::BeginPlay();
	
	if (MoveCurve)
	{
		if (MoveTimeline)
		{
	
			FOnTimelineFloat ProgressFunction;
			ProgressFunction.BindUFunction(this, FName("UpdateMovement"));
			MoveTimeline->AddInterpFloat(MoveCurve, ProgressFunction);
			

			 FOnTimelineEvent FinishFunction;
			 FinishFunction.BindUFunction(this, FName("OnReachedTarget"));
			 MoveTimeline->SetTimelineFinishedFunc(FinishFunction);
		
	
		}

	
	}
}

void AAxe_Weapon::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
	
}



void AAxe_Weapon::InitializeItem(E_ItemRarity ItemRarity)
{
	
	FName RowName = RarityToRowMap.Contains(ItemRarity) ? RarityToRowMap[ItemRarity] : FName("DefaultItem");
	
	FStructure_WeaponProperty* Str_WeaponProperty = AxeDataTableRow.DataTable->FindRow<FStructure_WeaponProperty>(RowName,FString(""));

	if (Str_WeaponProperty==nullptr)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("[ Axe_Weapon::BeginPlay] : WeaponProperty Is Nullptr"));
		return;
	}
	
	FItemStruct* ItemStruct= DT_Item->FindRow<FItemStruct>(TEXT("Axe"),TEXT(""));
	if (ItemStruct==nullptr)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("[ABaseEquippable::SetAppearance] : Axe Raw is null"));
		return;
	}
	if (ItemSKeletalMesh!=nullptr)
	{
		ItemSKeletalMesh->SetMaterial(0,Str_WeaponProperty->ItemMaterial);
	}
	
	
	Damage=Str_WeaponProperty->Damage;
	Weight=Str_WeaponProperty->Weight;
	ItemInfo.Thumnail=Str_WeaponProperty->ItemThumbnail;
	ItemInfo.Weight=Str_WeaponProperty->Weight;
	
	ItemInfo.ItemRarity=ItemRarity;
	ItemInfo.WeaponType=E_Weapon::Axe;
	ItemInfo.ItemType=E_ItemType::Weapon;

	ItemInfo.WeaponNumber=ItemStruct->WeaponNumber;
	ItemInfo.Stackable = ItemStruct->Stackable;
	ItemInfo.ItemQuantity=ItemStruct->ItemQuantity;


	
	
	
}

void AAxe_Weapon::ThrowToTarget(AActor* InTargetActor,float AttackRate)
{
	if (!InTargetActor || !MoveCurve )
	{
		return;
	}
	MoveSpeed=AttackRate;
	IsToActor=false;
	
	TargetActor = InTargetActor;
	OwnerCharacter = Cast<ACharacter>(GetOwner());

	StartLocation = OwnerCharacter->GetMesh()->GetSocketLocation(TEXT("HandR_Axe"));
	AxeStartLocation = StartLocation;
	TargetLocation = TargetActor->GetActorLocation();

	DetachFromActor(FDetachmentTransformRules::KeepWorldTransform);

	MoveTimeline->SetPlayRate(MoveSpeed);
	MoveTimeline->PlayFromStart();

	if (CollisionComponent)
	{
		CollisionComponent->EnableCollision();
	}
	
}

void AAxe_Weapon::UpdateMovement(float Value)
{
	if (IsToActor)
	{
		return;
	}
	NewLocation = FMath::Lerp(StartLocation, TargetLocation, Value);
	SetActorLocation(NewLocation);
	RotatingMovement->RotationRate = FRotator(0.0f	,0.0f, 720.0f);

	if (StartLocation.Equals(TargetLocation, 150.0f) && !IsToActor)
	{
		AIBCharBase* IBChar = Cast<AIBCharBase>(OwnerCharacter);
		if (IBChar)
		{
			IsToActor=true;
			RotatingMovement->RotationRate = FRotator(0.0f, 0.0f, 0.0f);
			IBChar->Skill1End();
			if (CollisionComponent)
			{
				CollisionComponent->DisableCollision();
			}
			
		}
		
	}
}

void AAxe_Weapon::OnReachedTarget()
{
	if (!OwnerCharacter||IsToActor==true) return;
	
	StartLocation = GetActorLocation();
	TargetLocation = OwnerCharacter->GetMesh()->GetSocketLocation(TEXT("HandR_Axe"));
	
	MoveTimeline->PlayFromStart();
	
}


