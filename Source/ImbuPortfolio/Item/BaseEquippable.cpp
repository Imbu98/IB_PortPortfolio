#include "BaseEquippable.h"

#include "Axe_Weapon.h"
#include "GameFramework/Character.h"
#include "Components/CapsuleComponent.h"
#include "Components\SkeletalMeshComponent.h"
#include "../Components/CombatComponent.h"
#include "Components/BoxComponent.h"
#include "NiagaraComponent.h"
#include "../Structure/DamageInfo.h"
#include "Camera/CameraComponent.h"
#include "Components/WidgetComponent.h"
#include "ImbuPortfolio/Character/IBCharBase.h"
#include "ImbuPortfolio/Components/StateComponent.h"
#include "ImbuPortfolio/Structure/Structure_ArmorProperty.h"
#include "ImbuPortfolio/Structure/Structure_WeaponProperty.h"
#include "ImbuPortfolio/Structure/Struct_ItemProperty.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetMathLibrary.h"
#include "Perception/AISense_Damage.h"


struct FStructure_WeaponProperty;

ABaseEquippable::ABaseEquippable()
{
	PrimaryActorTick.bCanEverTick = true;

	ItemSKeletalMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("ItemSkeletalMesh"));
	SetRootComponent(ItemSKeletalMesh);

	NiagaraComponent = CreateDefaultSubobject<UNiagaraComponent>(TEXT("NiagaraComponent"));
	NiagaraComponent->SetupAttachment(ItemSKeletalMesh);

	CapsuleComponent = CreateDefaultSubobject<UCapsuleComponent>(TEXT("CapsuleComponent"));
	CapsuleComponent->SetupAttachment(ItemSKeletalMesh);

	WidgetComponent= CreateDefaultSubobject<UWidgetComponent>(TEXT("WidgetComponent"));
	WidgetComponent->SetupAttachment(ItemSKeletalMesh);
	
	
	CapsuleComponent->OnComponentBeginOverlap.AddDynamic(this,&ThisClass::NearItem);
	CapsuleComponent->OnComponentEndOverlap.AddDynamic(this,&ThisClass::OnComponentEndOverlap);

	
	
	
	CollisionComponent = CreateDefaultSubobject<UCollisionComponent>(TEXT("CollisionComponent"));

	
	CollisionComponent->Onhit.AddDynamic(this,&ThisClass::OnHitActor);

}

void ABaseEquippable::BeginPlay()
{
	Super::BeginPlay();

	if (WidgetComponent)
	{
		WidgetComponent->SetVisibility(false);
		ItemSKeletalMesh->SetOverlayMaterial(nullptr);
	}
	
}

void ABaseEquippable::OnConstruction(const FTransform& Transform)
{
	Super::OnConstruction(Transform);
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
	AIBCharBase* IBChar = Cast<AIBCharBase>(GetOwner());
	if (IBChar == nullptr)
	{
		return;
	}
		IBChar->HitCameraShake();
		IBChar->IncreaseAngerGauge(HitAngerGauge);
	
	if (IBChar->StateComponent->CurrentState==TAG_StatusActionSkill1)
	{
		UGameplayStatics::SetGlobalTimeDilation(GetWorld(),0.0f);
		IBChar->MoveCameraToImpact(HitResult.ImpactPoint);
		FTimerHandle TimerHandle;
		GetWorldTimerManager().SetTimer(TimerHandle, [this,IBChar]()
		{
			IBChar->ReturnCamera();
			UGameplayStatics::SetGlobalTimeDilation(GetWorld(),1.0f);
		}, 0.1, false);
	}
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
			DamageInfo.DamageAmount=ItemInfo.Damage;
			DamageInfo.DamageType=E_DamageType::Melee;
			DamageInfo.DamageResponse=E_DamageResponse::HitReaction;
			DamageInterface->TakeDamage(DamageInfo,HitResult.GetActor());
			UAISense_Damage::ReportDamageEvent(GetWorld(),HitResult.GetActor(),GetOwner(),Damage,HitResult.Location,HitResult.ImpactPoint);
			if (HitEffects!=nullptr)
			{
				UGameplayStatics::SpawnEmitterAtLocation(GetWorld(),HitEffects,HitResult.Location,FRotator::ZeroRotator,FVector::ZeroVector,true);
			
			}
			UGameplayStatics::SetGlobalTimeDilation(GetWorld(),0.2f);
			FTimerHandle TimerHandle;
			GetWorldTimerManager().SetTimer(TimerHandle, [this]()
			{
				UGameplayStatics::SetGlobalTimeDilation(GetWorld(),1.0f);
			}, 0.02f, false);
		}
	}
}

void ABaseEquippable::SelectItemType()
{
	// if (!DT_ItemTypeProbability||!DT_WeaponTypeProbability||!DT_ArmorTypeProbability||!DT_RarityProbability||!DT_PotionSizeProbability)
	// {
	// 	GEngine->AddOnScreenDebugMessage(-1,5.f,FColor::Red,TEXT("AbaseEquippable:SelectItemType"));
	// 	return;
	// }
	//
	// // choose item type
	// float ItemTypeTotalProbability =0.0f;
	// TArray<FStructure_ItemTypeProbability*> ItemTypeProbabilities;
	// DT_ItemTypeProbability->GetAllRows<FStructure_ItemTypeProbability>(TEXT(""),ItemTypeProbabilities);
	// for (FStructure_ItemTypeProbability* Row : ItemTypeProbabilities)
	// {
	// 	ItemTypeTotalProbability+=Row->ItemTypeProbability;
	// }
	// float ItemTypeRandomValue= FMath::FRandRange(0,ItemTypeTotalProbability);
	// float ItemTypeAccumulatedProbability =0.0f;
	// for (FStructure_ItemTypeProbability* Row : ItemTypeProbabilities)
	// {
	// 	ItemTypeAccumulatedProbability+=Row->ItemTypeProbability;
	// 	if (ItemTypeRandomValue <= ItemTypeAccumulatedProbability)
	// 	{
	// 		ItemInfo.ItemType=Row->ItemType;
	// 		break;
	// 	}
	// }
	//
	// // choose weapon type
	// if (ItemInfo.ItemType==E_ItemType::Weapon)
	// {
	// 	float WeaponTypeTotalProbability =0.0f;
	// 	TArray<FStructure_WeaponTypeProbability*> WeaponTypeProbabilities;
	// 	DT_WeaponTypeProbability->GetAllRows<FStructure_WeaponTypeProbability>(TEXT(""),WeaponTypeProbabilities);
	// 	for (FStructure_WeaponTypeProbability* Row : WeaponTypeProbabilities)
	// 	{
	// 		WeaponTypeTotalProbability+=Row->WeaponTypeProbability;
	// 	}
	// 	float WeaponTypeRandomValue= FMath::FRandRange(0,WeaponTypeTotalProbability);
	// 	float WeaponTypeAccumulatedProbability =0.0f;
	// 	for (FStructure_WeaponTypeProbability* Row : WeaponTypeProbabilities)
	// 	{
	// 		WeaponTypeAccumulatedProbability+=Row->WeaponTypeProbability;
	// 		if (WeaponTypeRandomValue <= WeaponTypeAccumulatedProbability)
	// 		{
	// 			ItemInfo.WeaponType=Row->WeaponType;
	// 			break;
	// 		}
	// 	}
	// }
	// // choose Armor type
	// else if (ItemInfo.ItemType==E_ItemType::Armor)
	// {
	// 	float ArmorTypeTotalProbability =0.0f;
	// 	TArray<FStructure_ArmorTypeProbability*> ArmorTypeProbabilities;
	// 	DT_ArmorTypeProbability->GetAllRows<FStructure_ArmorTypeProbability>(TEXT(""),ArmorTypeProbabilities);
	// 	for (FStructure_ArmorTypeProbability* Row : ArmorTypeProbabilities)
	// 	{
	// 		ArmorTypeTotalProbability+=Row->ArmorTypeProbability;
	// 	}
	// 	float ArmorTypeRandomValue= FMath::FRandRange(0,ArmorTypeTotalProbability);
	// 	float ArmorTypeAccumulatedProbability =0.0f;
	// 	for (FStructure_ArmorTypeProbability* Row : ArmorTypeProbabilities)
	// 	{
	// 		ArmorTypeAccumulatedProbability+=Row->ArmorTypeProbability;
	// 		if (ArmorTypeRandomValue <= ArmorTypeAccumulatedProbability)
	// 		{
	// 			ItemInfo.ArmorType=Row->ArmorType;
	// 			break;
	// 		}
	// 	}
	// }
	// // choose potion size
	// else if (ItemInfo.ItemType==E_ItemType::Potion)
	// {
	// 	float PotionSizeTotalProbability =0.0f;
	// 	TArray<FStructure_PotionSizeProbability*> PotionSizeProbabilities;
	// 	DT_PotionSizeProbability->GetAllRows<FStructure_PotionSizeProbability>(TEXT(""),PotionSizeProbabilities);
	// 	for (FStructure_PotionSizeProbability* Row : PotionSizeProbabilities)
	// 	{
	// 		PotionSizeTotalProbability+=Row->PotionSizeProbability;
	// 	}
	// 	float PotionSizeRandomValue= FMath::FRandRange(0,PotionSizeTotalProbability);
	// 	float PotionSizeAccumulatedProbability =0.0f;
	// 	for (FStructure_PotionSizeProbability* Row : PotionSizeProbabilities)
	// 	{
	// 		PotionSizeAccumulatedProbability+=Row->PotionSizeProbability;
	// 		if (PotionSizeRandomValue <= PotionSizeAccumulatedProbability)
	// 		{
	// 			ItemInfo.PotionSize=Row->PotionSize;
	// 			break;
	// 		}
	// 	}
	// }
	//
	// // choose rarity
	// if (ItemInfo.ItemType==E_ItemType::Armor || ItemInfo.ItemType==E_ItemType::Weapon)
	// {
	// 	float RarityTotalProbability =0.0f;
	// 	TArray<FStructure_RarityProbability*> RarirtyProbabilities;
	// 	DT_RarityProbability->GetAllRows<FStructure_RarityProbability>(TEXT(""),RarirtyProbabilities);
	// 	for (FStructure_RarityProbability* Row : RarirtyProbabilities)
	// 	{
	// 		RarityTotalProbability+=Row->RarityProbability;
	// 	}
	// 	float RarityRandomValue= FMath::FRandRange(0,RarityTotalProbability);
	// 	float RarityAccumulatedProbability =0.0f;
	// 	for (FStructure_RarityProbability* Row : RarirtyProbabilities)
	// 	{
	// 		RarityAccumulatedProbability+=Row->RarityProbability;
	// 		if (RarityRandomValue <= RarityAccumulatedProbability)
	// 		{
	// 			ItemInfo.ItemRarity=Row->Rarity;
	// 			break;
	// 		}
	// 	}
	// }
	
}

void ABaseEquippable::SetAppearance()
{
	
	FName ItemRowName = DT_ItemProperty.RowName;
	
	if (DT_ItemProperty.DataTable==nullptr)
	{
		
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("[ABaseEquippable::OnConstruction] : DT.Item is null"));
		return;
		
	}
	FStruct_ItemProperty* ItemProperty = DT_ItemProperty.DataTable->FindRow<FStruct_ItemProperty>(ItemRowName,FString(""));
	
	if (ItemProperty==nullptr)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("ItemStruct Is Null"));
		return;
		
	}


	// Set Weapon Appearance
	if (ItemInfo.ItemType==E_ItemType::Weapon)
	{
		switch (ItemInfo.WeaponType)
		{
		case E_Weapon::Axe:
			{
				
				if (DT_Item==nullptr)
				{
					GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("[ABaseEquippable::SetAppearance] : DT_Item is null"));
					return;
				}
				FItemStruct* ItemStruct= DT_Item->FindRow<FItemStruct>(TEXT("Axe"),TEXT(""));
				if (ItemStruct==nullptr)
				{
					GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("[ABaseEquippable::SetAppearance] : Axe Raw is null"));
					return;
				}
				ItemInfo.WeaponNumber=ItemStruct->WeaponNumber;
				ItemInfo.Stackable = ItemStruct->Stackable;
				ItemInfo.ItemQuantity=ItemStruct->ItemQuantity;
				SetAxeWeight();
				
				ItemSKeletalMesh->SetSkeletalMesh(ItemProperty->AxeSkeletalMesh);
				// switch by axe rarity
				switch (ItemInfo.ItemRarity)
				{
				case E_ItemRarity::Common:
					{
						ItemInfo.Thumnail = ItemProperty->Common_Axe_Texture;
						ItemDropEffect=ItemProperty->Common_Drop_Effect;
						
						
						break;
					}
				case E_ItemRarity::Rare:
					{
						ItemInfo.Thumnail = ItemProperty->Rare_Axe_Texture;
						ItemDropEffect=ItemProperty->Rare_Drop_Effect;
						break;
					}
				case E_ItemRarity::Epic:
					{
						ItemInfo.Thumnail = ItemProperty->Epic_Axe_Texture;
						ItemDropEffect=ItemProperty->Epic_Drop_Effect;
						break;
					}
				case E_ItemRarity::Legendary:
					{
						ItemInfo.Thumnail = ItemProperty->Legendary_Axe_Texture;
						ItemDropEffect=ItemProperty->Legendary_Drop_Effect;
						break;
					}
				default:
					break;
				}
				
			}break;
		case E_Weapon::Sword:
			{
				if (DT_Item==nullptr)
				{
					GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("[ABaseEquippable::SetAppearance] : DT_Item is null"));
					return;
				}
				FItemStruct* ItemStruct= DT_Item->FindRow<FItemStruct>(TEXT("Sword"),TEXT(""));
				if (ItemStruct==nullptr)
				{
					GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("[ABaseEquippable::SetAppearance] : Sword Raw is null"));
					return;
				}
				ItemInfo.WeaponNumber=ItemStruct->WeaponNumber;
				ItemInfo.Stackable = ItemStruct->Stackable;
				ItemInfo.ItemQuantity=ItemStruct->ItemQuantity;
				
				ItemSKeletalMesh->SetSkeletalMesh(ItemProperty->SwordSkeletalMesh);
				// switch by sword rarity
				switch (ItemInfo.ItemRarity)
				{
				case E_ItemRarity::Common:
					{
						ItemInfo.Thumnail = ItemProperty->Common_Sword_Texture;
						break;
					}
				case E_ItemRarity::Rare:
					{
						ItemInfo.Thumnail = ItemProperty->Rare_Sword_Texture;
						break;
					}
				case E_ItemRarity::Epic:
					{
						ItemInfo.Thumnail = ItemProperty->Epic_Sword_Texture;
						break;
					}
				case E_ItemRarity::Legendary:
					{
						ItemInfo.Thumnail = ItemProperty->Legendary_Sword_Texture;
						break;
					}
				default:
					break;
				}
			
			}break;
		default:
			break;
		}
	}
	// Set armor Appearance
	else if (ItemInfo.ItemType==E_ItemType::Armor)
	{
		if (DT_Item==nullptr)
		{
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("[ABaseEquippable::SetAppearance] : DT_Item is null"));
			return;
		}
		FItemStruct* ItemStruct= DT_Item->FindRow<FItemStruct>(TEXT("Helmet"),TEXT(""));
		if (ItemStruct==nullptr)
		{
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("[ABaseEquippable::SetAppearance] : Sword Raw is null"));
			return;
		}
		ItemInfo.WeaponNumber=ItemStruct->WeaponNumber;
		ItemInfo.Stackable = ItemStruct->Stackable;
		ItemInfo.ItemQuantity=ItemStruct->ItemQuantity;
		SetHelmetWeight();
		
		switch (ItemInfo.ArmorType)
		{
		case E_Armor::Top:
			{
				ItemSKeletalMesh->SetSkeletalMesh(ItemProperty->HelemetSkeletalMesh);
		
				// switch by Helmet rarity
				switch (ItemInfo.ItemRarity)
				{
				case E_ItemRarity::Common:
					{
						ItemInfo.Thumnail = ItemProperty->Common_Helmet_Texture;
						ItemDropEffect=ItemProperty->Common_Drop_Effect;
						break;
					}
				case E_ItemRarity::Rare:
					{
						ItemInfo.Thumnail = ItemProperty->Rare_Helmet_Texture;
						ItemDropEffect=ItemProperty->Rare_Drop_Effect;
						break;
					}
				case E_ItemRarity::Epic:
					{
						ItemInfo.Thumnail = ItemProperty->Epic_Helmet_Texture;
						ItemDropEffect=ItemProperty->Epic_Drop_Effect;
						break;
					}
				case E_ItemRarity::Legendary:
					{
						ItemInfo.Thumnail = ItemProperty->Legendary_Helmet_Texture;
						ItemDropEffect=ItemProperty->Legendary_Drop_Effect;
						break;
					}
				default:
					break;
				}
				case E_Armor::Middle:
					{
				
					}
			}
		default:
			break;
		}
	
		
		//스폰시에 스켈레탈 메쉬 구하면 활성화하기
	}
	
	if (ItemDropEffect)
	{
		NiagaraComponent->SetAsset(ItemDropEffect);
		NiagaraComponent->Activate(true);
	}
	
}

void ABaseEquippable::SetAxeWeight()
{
	FName RowName;
	if (AxeDataTableRow.DataTable!=nullptr)
	{
		
		switch (ItemInfo.ItemRarity)
		{
		case E_ItemRarity::None:
			{
				RowName =TEXT("");
				break;
			}
			case E_ItemRarity::Common:
				{
				 RowName =TEXT("Axe_Common");
					break;
				}
		case E_ItemRarity::Rare:
				{
				RowName =TEXT("Axe_Rare");
					break;
				}
		case E_ItemRarity::Epic:
				{
				 RowName =TEXT("Axe_Epic");
					break;
				}
		case E_ItemRarity::Legendary:
				{
				 RowName =TEXT("Axe_Legendary");
					break;
				}
		}
	}
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
	ItemInfo.Weight=Str_WeaponProperty->Weight;
	ItemInfo.Damage=Str_WeaponProperty->Damage;

}

void ABaseEquippable::SetHelmetWeight()
{
	FName RowName;
	if (HelmetDataTableRow.DataTable!=nullptr)
	{
		
		switch (ItemInfo.ItemRarity)
		{
		case E_ItemRarity::None:
			{
				RowName =TEXT("");
				break;
			}
		case E_ItemRarity::Common:
			{
				RowName =TEXT("Helmet_Common");
				break;
			}
		case E_ItemRarity::Rare:
			{
				RowName =TEXT("Helmet_Rare");
				break;
			}
		case E_ItemRarity::Epic:
			{
				RowName =TEXT("Helmet_Epic");
				break;
			}
		case E_ItemRarity::Legendary:
			{
				RowName =TEXT("Helmet_Legendary");
				break;
			}
		}
	}
	FStructure_ArmorProperty* Str_ArmorProperty = HelmetDataTableRow.DataTable->FindRow<FStructure_ArmorProperty>(RowName,FString(""));

	if (Str_ArmorProperty==nullptr)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("[ BaseEquippable::SetHelmetWeight] : Str_ArmorProperty Is Nullptr"));
		return;
	}
	
	FItemStruct* ItemStruct= DT_Item->FindRow<FItemStruct>(TEXT("Axe"),TEXT(""));
	if (ItemStruct==nullptr)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("[ABaseEquippable::SetAppearance] : Axe Raw is null"));
		return;
	}
	ItemInfo.Weight=Str_ArmorProperty->Weight;
	ItemInfo.Defense=Str_ArmorProperty->Defense;

}

void ABaseEquippable::ItemImpulse()
{
	if (ItemSKeletalMesh!=nullptr)
	{
		ItemSKeletalMesh->SetSimulatePhysics(true);
		ItemSKeletalMesh->SetCollisionEnabled(ECollisionEnabled::PhysicsOnly);
		FVector RandomImpulseVector = FVector(FMath::RandRange(30.f,60.f),FMath::RandRange(30.f,60.f),FMath::RandRange(30.f,30.f));
		FVector Location = GetActorLocation();
		//ItemSKeletalMesh->AddImpulseAtLocation(RandomImpulseVector,Location);
	}
	
}


void ABaseEquippable::NearItem(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
                               UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	
	if (OtherActor==UGameplayStatics::GetPlayerCharacter(GetWorld(),0))
	{
		if (ItemOverlayMaterial)
			{
			ItemSKeletalMesh->SetOverlayMaterial(ItemOverlayMaterial);
			}
		if (WidgetComponent)
		{
			WidgetComponent->SetVisibility(true);
		}
		
	}
}

void ABaseEquippable::OnComponentEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	
	if (OtherActor==UGameplayStatics::GetPlayerCharacter(GetWorld(),0))
	{
		if (ItemSKeletalMesh)
		{
			ItemSKeletalMesh->SetOverlayMaterial(nullptr);
		}
			
		
		if (WidgetComponent)
		{
			WidgetComponent->SetVisibility(false);
		}
		
	}
}


