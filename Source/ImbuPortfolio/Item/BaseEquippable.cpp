#include "BaseEquippable.h"
#include "GameFramework/Character.h"
#include "Components/CapsuleComponent.h"
#include "Components\SkeletalMeshComponent.h"
#include "../Components/CombatComponent.h"
#include "Components/BoxComponent.h"
#include "../Structure/DamageInfo.h"
#include "ImbuPortfolio/Character/IBCharBase.h"
#include "Kismet/GameplayStatics.h"
#include "Perception/AISense_Damage.h"


ABaseEquippable::ABaseEquippable()
{
	PrimaryActorTick.bCanEverTick = true;

	DefaultSceneRoot = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultSceneRoot"));
	SetRootComponent(DefaultSceneRoot);

	/*ItemStaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ItemStaticMesh"));
	SetRootComponent(ItemStaticMesh);*/

	ItemSKeletalMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("ItemSkeletalMesh"));
	ItemSKeletalMesh->SetupAttachment(DefaultSceneRoot);

	CapsuleComponent = CreateDefaultSubobject<UCapsuleComponent>(TEXT("CapsuleComponent"));
	CapsuleComponent->SetupAttachment(DefaultSceneRoot);

	CollisionComponent = CreateDefaultSubobject<UCollisionComponent>(TEXT("CollisionComponent"));

	OnHit.AddDynamic(this,&ThisClass::OnHitActor);
	

}

void ABaseEquippable::BeginPlay()
{
	Super::BeginPlay();

	if (CollisionComponent!=nullptr)
	{
		CollisionComponent->Onhit.AddDynamic(this,&ThisClass::OnHitActor);
	}
	
}

void ABaseEquippable::OnConstruction(const FTransform& Transform)
{
	Super::OnConstruction(Transform);

	FName ItemRowName = Item.RowName;
	
	if (Item.DataTable==nullptr)
	{
		
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("DataTable Is Null"));
		return;
		
	}
	FItemStruct* ItemStruct = Item.DataTable->FindRow<FItemStruct>(ItemRowName,FString(""));
	
	if (ItemStruct==nullptr)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("ItemStruct Is Null"));
		return;
		
	}

	switch (ItemStruct->WeaponType)
	{
	case E_Weapon::Axe:
		{
			if (AxeAsset!=nullptr)
			{
				ItemSKeletalMesh->SetSkeletalMesh(AxeAsset);
			}
		}break;
	case E_Weapon::Sword:
		{
			if (SwordAsset!=nullptr)
			{
				ItemSKeletalMesh->SetSkeletalMesh(SwordAsset);
			}
		}break;
	default:
		break;
	}
	
	ItemInfo.ItemName = ItemStruct->ItemName;
	ItemInfo.Stackable = ItemStruct->Stackable;
	ItemInfo.ItemQuantity = ItemStruct->ItemQuantity;
	ItemInfo.Thumnail = ItemStruct->Thumnail;
	ItemInfo.Mesh = ItemStruct->Mesh;
	ItemInfo.WeaponNumber = ItemStruct->WeaponNumber;
	ItemInfo.ItemType=ItemStruct->ItemType;
	ItemInfo.WeaponType=ItemStruct->WeaponType;

	
	
}


void ABaseEquippable::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

UPrimitiveComponent* ABaseEquippable::GetItemMesh()
{

	if (ItemSKeletalMesh != nullptr)
	{
		return ItemSKeletalMesh;
	}

	return nullptr;
}

void ABaseEquippable::AttachActor(FName SocketName)
{
	ACharacter* Character = Cast<ACharacter>(GetOwner());
	if (Character != nullptr) // 
	{
		FAttachmentTransformRules Rules(EAttachmentRule::SnapToTarget, true);
		AttachToComponent(Character->GetMesh(), Rules, SocketName);
	}
}

void ABaseEquippable::OnEquipped()
{
	IsEquipped = true;
	IsAttachtoHand=true;
	CombatComponent = this->GetOwner()->FindComponentByClass<UCombatComponent>();
	if (CombatComponent != nullptr)
	{
		CombatComponent->SetMainWeapon(this);
	}
	if (CollisionComponent!=nullptr)
	{
		CollisionComponent->SetCollisionMesh(GetItemMesh());
		CollisionComponent->AddActorsToIgnore(this->GetOwner());
	}


		//나중에 저장기능 생성 후 넣기
		//SaveEquippedWeapon();
}


void ABaseEquippable::OnUnEquipped()
{
	SetIsEquipped(false);
	IsAttachtoHand=false;
}

void ABaseEquippable::SaveEquippedWeapon(ABaseEquippable* Weapon)
{
	/*UImbuGameInstance* IGI = Cast<UImbuGameInstance>(GetWorld()->GetGameInstance());
	if (IGI != nullptr)
	{
		IGI->CurrentWeaponNumber = this->WeaponNumber;
		IGI->SaveGame();
	}*/
}

void ABaseEquippable::OnHitActor(FHitResult HitResult)
{
	// AIBCharBase* IBCharBase = Cast<AIBCharBase>( this->GetOwner());
	// if (IBCharBase == nullptr)
	// {
	// 	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("IBChar Is Null"));
	// 	return;
	// }
if (HitResult.GetActor()->GetClass()->ImplementsInterface(UDamageInterface::StaticClass())==true)
{
	IDamageInterface* DamageInterface=Cast<IDamageInterface>(HitResult.GetActor());
	if (DamageInterface==nullptr)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("DamageInterface Is Null"));
		return;
	}
	else
	{
		FDamageInfo DamageInfo;
		DamageInfo.DamageAmount=Damage;
		DamageInterface->TakeDamage(DamageInfo,HitResult.GetActor());
		UAISense_Damage::ReportDamageEvent(GetWorld(),HitResult.GetActor(),GetOwner(),Damage,HitResult.Location,HitResult.ImpactPoint);
		if (HitEffects!=nullptr)
		{
			UGameplayStatics::SpawnEmitterAtLocation(GetWorld(),HitEffects,HitResult.Location,FRotator::ZeroRotator,FVector::ZeroVector,true);
			
		}
		
	}
}
	
	
	
}



