#include "Enemy_Base.h"

#include "AIController.h"
#include "Enemy_Base_AIController.h"
#include "MovieSceneTracksComponentTypes.h"
#include "../DefineDelegate.h"
#include "Components/CapsuleComponent.h"
#include "EntitySystem/MovieSceneEntitySystemRunner.h"
#include "NiagaraComponent.h"
#include "NiagaraFunctionLibrary.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "ImbuPortfolio/BehaviorTree/BTT_EnemyBossAttack.h"
#include "ImbuPortfolio/Character/IBCharBase.h"
#include "ImbuPortfolio/Enum/E_Enemy.h"
#include "ImbuPortfolio/GameMode/CaveRuin_GameMode.h"
#include "ImbuPortfolio/Interface/GameMode_Interface.h"
#include "ImbuPortfolio/Item/BaseEquippable.h"
#include "kismet/GameplayStatics.h"

UE_DEFINE_GAMEPLAY_TAG_COMMENT(TAG_EnemyStatusIdle, "Enemy.Status.Idle", "Tag Enemy In Idle")
UE_DEFINE_GAMEPLAY_TAG_COMMENT(TAG_EnemyStatusDie,"Enemy.Status.Die","Tag Enemy In Die")
UE_DEFINE_GAMEPLAY_TAG_COMMENT(TAG_EnemyStatusAction,"Enemy.Status.Action","Tag Enemy In Action")
UE_DEFINE_GAMEPLAY_TAG_COMMENT(TAG_EnemyStatusActionAttack,"Enemy.Status.Action.Attack","Tag when Enemy Attacking")


AEnemy_Base::AEnemy_Base()
{
	PrimaryActorTick.bCanEverTick = true;

	DamageSystemComponent=CreateDefaultSubobject<UDamageSystemComponent>(TEXT("DamageSystemComponent"));

	StateComponent=CreateDefaultSubobject<UStateComponent>(TEXT("StateComponent"));

	
	EnemyAttackEnded.BindUObject(this,&ThisClass::OnEnemyAttackEnded);

	

	

}

void AEnemy_Base::BeginPlay()
{
	Super::BeginPlay();

	StateComponent->SetState(TAG_EnemyStatusIdle);

	if (WBP_HealthBar!=nullptr)
	{
		EnemyHealthBar=CreateWidget<UW_EnemyHealthBar>(GetWorld(),WBP_HealthBar);
		if (EnemyHealthBar!=nullptr)
		{
			if (Widget==nullptr)
			{
				return;
			}
			Widget->SetWidget(EnemyHealthBar);
			Widget->SetVisibility(false);
		}
	}
	AEnemy_Base_AIController* EnemyAIController = Cast<AEnemy_Base_AIController>(GetController());
	if (EnemyAIController)
	{	
		EnemyAIController->EnemySearchDelegate.AddUObject(this,&AEnemy_Base::VisibleHealthBar);
	}
	
}

void AEnemy_Base::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);
}

void AEnemy_Base::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);


	

}

void AEnemy_Base::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AEnemy_Base::OnDeath()
{
	if (Widget)
	{
		Widget->SetVisibility(false);
	}
	// PlayerGoldReward
	 AGameModeBase* GameMode = GetWorld()->GetAuthGameMode();
	if (GameMode!=nullptr)
	{
		if (GameMode->GetClass()->ImplementsInterface(UGameMode_Interface::StaticClass()))
		{
			IGameMode_Interface* GameMode_Interface = Cast<IGameMode_Interface>(GameMode);
			if (GameMode_Interface==nullptr)
			{
				GEngine->AddOnScreenDebugMessage(-1,1.0f,FColor::Red,TEXT("[EnemyBase::OnDeath] : GameMode_Interface Is Nullptr"));
				return;
			}
			float RewardGold=0.0f;
			RewardGold = FMath::RandRange(Reward_GoldMax,Reward_GoldMin);
			GameMode_Interface->SaveReward_Gold(RewardGold);
			GameMode_Interface->RemoveEnemyChar(this);
		}
	}
	
	// Death Animation
	if (DeathMontage)
	{
		PlayAnimMontage(DeathMontage);
	}
	if (EnemyHealthBar)
	{
		EnemyHealthBar->UpdateHealthBar(this);
	}

	DropItem();
	
	// Increase Player AngerGague
	AIBCharBase* IBChar = Cast<AIBCharBase>(GetWorld()->GetFirstPlayerController()->GetCharacter());
	if (IBChar!=nullptr)
	{
		IBChar->IncreaseAngerGauge(AngerPoint);
	}

	// stop Ai Logic
	AAIController* AIController=Cast<AAIController>(GetController());
	if (AIController)
	{
		AEnemy_Base_AIController* Enemy_AIController = Cast<AEnemy_Base_AIController>(AIController);
		if (Enemy_AIController!=nullptr)
		{
			GetMesh()->SetCollisionEnabled(ECollisionEnabled::Type::NoCollision);
			GetCapsuleComponent()->SetCollisionEnabled(ECollisionEnabled::Type::NoCollision);
			Enemy_AIController->GetBrainComponent()->StopLogic(TEXT("Dead"));
			Enemy_AIController->ClearFocus(EAIFocusPriority::LastFocusPriority);
			IBChar->TargetSystemComponent->TargetLockOff();
			
			
		}
	}
}

void AEnemy_Base::DamageResponse(E_DamageResponse DamageResponse)
{
	switch (DamageResponse)
	{
		case E_DamageResponse::None:
			{
				
			}break;
		case E_DamageResponse::Stagger:
			{
				PlayAnimMontage(AM_Stagger);
			}break;
		case E_DamageResponse::HitReaction:
			{
				if (!GetMesh()->GetAnimInstance()->IsAnyMontagePlaying())
				{
					PlayAnimMontage(AM_HitReaction);
				}
			
			}break;
	default:
			{
				
			}break;
			
	}
	//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red,FString::Printf(TEXT( "EnemyHp:%f is Remain"),DamageSystemComponent->CurrentHealth));
	if (EnemyHealthBar)
	{
		EnemyHealthBar->UpdateHealthBar(this);
	}
	
}

bool AEnemy_Base::TakeDamage(FDamageInfo& DamageInfo, AActor* Cursor)
{
	if (DamageSystemComponent==nullptr)
	{
		GEngine->AddOnScreenDebugMessage(-1,2.0f,FColor::Red,TEXT("DamageSystemComponent is Null"));
		return false;
	}
	
	return DamageSystemComponent->TakeDamage(DamageInfo, Cursor);
}

float AEnemy_Base::SetHealth()
{
	return EnemyMaxHealth;
}

ASpline* AEnemy_Base::GetSpline()
{
	return Spline;
}

void AEnemy_Base::EnemyAttack(UBTT_EnemyAttack* AttackTask)
{
	EnemyAttackTask= AttackTask;
	
	StateComponent->SetState(TAG_EnemyStatusActionAttack);
	FVector StartLocation = GetActorLocation();
	FVector EndLocation = StartLocation + (GetActorForwardVector()*AttackRange);
	TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes;
	ObjectTypes.Add(UEngineTypes::ConvertToObjectType(ECollisionChannel::ECC_Pawn));
	TArray<AActor*> ActorsToIgnore;
	ActorsToIgnore.Add(this);
	TArray<AActor*> FoundEnemies;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), StaticClass(), FoundEnemies);
	ActorsToIgnore.Append(FoundEnemies);
	
	FHitResult OutHit;
	bool hit =UKismetSystemLibrary::SphereTraceSingleForObjects(GetWorld(), StartLocation, EndLocation, AttackSize, ObjectTypes, false, ActorsToIgnore,
		EDrawDebugTrace::ForDuration, OutHit, true, FLinearColor::Red, FLinearColor::Green,2.0f);
	if (hit)
	{
		if (OutHit.GetActor()->GetClass()->ImplementsInterface(UDamageInterface::StaticClass()))
		{
			IDamageInterface* DamageInterface = Cast<IDamageInterface>(OutHit.GetActor());
			if (DamageInterface==nullptr)
			{
				GEngine->AddOnScreenDebugMessage(-1,1.0f,FColor::Red,TEXT("EnemyAttack:DamageInterface is Null"));
				return;
			}
			FDamageInfo DamageInfo;
			DamageInfo.DamageAmount= AttackDamage;
			DamageInfo.DamageType=E_DamageType::Melee;
			DamageInfo.DamageResponse=E_DamageResponse::HitReaction;
			DamageInfo.ShouldDamageInvincible=false;
			DamageInfo.CanBeBlocked=true;
			DamageInfo.CanBeParried=true;
			DamageInfo.ShouldForceInterrupt=false;
			DamageInterface->TakeDamage(DamageInfo,this);
		}
	}
	if (AttackMontage)
	{
		PlayMontageOnCompleted(AttackMontage,EnemyAttackEnded);
	}
}

float AEnemy_Base::SetMovementSpeed(E_MovementSpeed MovementSpeed)
{
	float AiSpeed=0.0f;
	switch (MovementSpeed)
	{
	case E_MovementSpeed::Idle:
		{
			AiSpeed = 0.0f;
			GetCharacterMovement()->MaxWalkSpeed=AiSpeed;
			return	AiSpeed = 0.0f;
		}
	case E_MovementSpeed::Walking:
		{
			AiSpeed = 100.0f;
			GetCharacterMovement()->MaxWalkSpeed=AiSpeed;
			return	AiSpeed = 100.0f;
		}
	case E_MovementSpeed::Jogging:
		{
			AiSpeed = 300.0f;
			GetCharacterMovement()->MaxWalkSpeed=AiSpeed;
			return	AiSpeed = 300.0f;
		}
	case E_MovementSpeed::Sprinting:
		{
			AiSpeed = 500.0f;
			GetCharacterMovement()->MaxWalkSpeed=AiSpeed;
			return	AiSpeed = 500.0f;
		}
	}
	
	
	
	return AiSpeed;
}

void AEnemy_Base::PlayMontageOnCompleted(UAnimMontage* Montage, FOnMontageEnded MontageEndDelegate) const
{
	if (Montage)
		{
		GetMesh()->GetAnimInstance()->Montage_Play(Montage);
		GetMesh()->GetAnimInstance()->Montage_SetEndDelegate(MontageEndDelegate,Montage);
		}
	
}

void AEnemy_Base::OnEnemyAttackEnded(UAnimMontage* Montage, bool bInterrupted)
{
	if (StateComponent)
	{
		StateComponent->SetState(TAG_EnemyStatusIdle);
	}
	if (EnemyAttackTask)
	{
		EnemyAttackTask->FinishLatentTask(*EnemyAttackTask->OwnerCompRef,EBTNodeResult::Succeeded);
	}
	
}

void AEnemy_Base::DropItem()
{
	if (!DT_ItemTypeProbability||!DT_WeaponTypeProbability||!DT_ArmorTypeProbability||!DT_RarityProbability)
	{
	 	//GEngine->AddOnScreenDebugMessage(-1,5.f,FColor::Red,TEXT("AbaseEquippable:SelectItemType"));
	 	return;
	}
	// Drop item
	FTransform SpawnTransfrom = GetActorTransform();
	FActorSpawnParameters SpawnParams;
	SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
	SpawnParams.TransformScaleMethod = ESpawnActorScaleMethod::MultiplyWithRoot;

	E_ItemType SpawnItemType = E_ItemType::None;
	E_Weapon SpawnWeapon=E_Weapon::None;
	E_Armor SpawnArmor=E_Armor::None;
	
	for (int32 i=0;i<NumberOfDropItem;i++)
	{
		ABaseEquippable* SpawnedItem = GetWorld()->SpawnActor<ABaseEquippable>(SpawnItem,SpawnTransfrom,SpawnParams);
		if (SpawnedItem!=nullptr)
		{
			if (SetItemType(SpawnedItem)==E_ItemType::Weapon)
			{
				SpawnWeapon=SetWeaponType(SpawnedItem);
				SetRarity(SpawnedItem);
			}
			if (SetItemType(SpawnedItem)==E_ItemType::Armor)
			{
				SpawnArmor=SetArmorType(SpawnedItem);
				SetRarity(SpawnedItem);
			}
			
			//SpawnedItem->SelectItemType();
			SpawnedItem->SetAppearance();
			//SpawnedItem->ItemImpulse();
			
		}
		if (SpawnedItem->ItemInfo.ItemRarity==E_ItemRarity::Legendary)
		{
			if (SpawnEffectSystem)
			{
				FVector SpawnLocation = GetActorLocation(); // 현재 액터 위치
				FRotator SpawnRotation = GetActorRotation();
				UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), SpawnEffectSystem, SpawnLocation, SpawnRotation, true);
			}
		}
		
	}
	
}

E_ItemType AEnemy_Base::SetItemType(ABaseEquippable* SpawnedItem)
{
	// choose item type
	float ItemTypeTotalProbability =0.0f;
	TArray<FStructure_ItemTypeProbability*> ItemTypeProbabilities;
	DT_ItemTypeProbability->GetAllRows<FStructure_ItemTypeProbability>(TEXT(""),ItemTypeProbabilities);
	for (FStructure_ItemTypeProbability* Row : ItemTypeProbabilities)
	{
		ItemTypeTotalProbability+=Row->ItemTypeProbability;
	}
	float ItemTypeRandomValue= FMath::FRandRange(0,ItemTypeTotalProbability);
	float ItemTypeAccumulatedProbability =0.0f;
	for (FStructure_ItemTypeProbability* Row : ItemTypeProbabilities)
	{
		ItemTypeAccumulatedProbability+=Row->ItemTypeProbability;
		if (ItemTypeRandomValue <= ItemTypeAccumulatedProbability)
		{
			return SpawnedItem->ItemInfo.ItemType=Row->ItemType;
		}
	}
	return SpawnedItem->ItemInfo.ItemType=E_ItemType::None;
	
}

E_Weapon AEnemy_Base::SetWeaponType(ABaseEquippable* SpawnedItem)
{
		float WeaponTypeTotalProbability =0.0f;
		TArray<FStructure_WeaponTypeProbability*> WeaponTypeProbabilities;
		DT_WeaponTypeProbability->GetAllRows<FStructure_WeaponTypeProbability>(TEXT(""),WeaponTypeProbabilities);
		for (FStructure_WeaponTypeProbability* Row : WeaponTypeProbabilities)
		{
			WeaponTypeTotalProbability+=Row->WeaponTypeProbability;
		}
		float WeaponTypeRandomValue= FMath::FRandRange(0,WeaponTypeTotalProbability);
		float WeaponTypeAccumulatedProbability =0.0f;
		for (FStructure_WeaponTypeProbability* Row : WeaponTypeProbabilities)
		{
			WeaponTypeAccumulatedProbability+=Row->WeaponTypeProbability;
			if (WeaponTypeRandomValue <= WeaponTypeAccumulatedProbability)
			{
				return SpawnedItem->ItemInfo.WeaponType=Row->WeaponType;
				
			}
		}
	return SpawnedItem->ItemInfo.WeaponType=E_Weapon::None;
}

E_Armor AEnemy_Base::SetArmorType(ABaseEquippable* SpawnedItem)
{
		float ArmorTypeTotalProbability =0.0f;
		TArray<FStructure_ArmorTypeProbability*> ArmorTypeProbabilities;
		DT_ArmorTypeProbability->GetAllRows<FStructure_ArmorTypeProbability>(TEXT(""),ArmorTypeProbabilities);
		for (FStructure_ArmorTypeProbability* Row : ArmorTypeProbabilities)
		{
			ArmorTypeTotalProbability+=Row->ArmorTypeProbability;
		}
		float ArmorTypeRandomValue= FMath::FRandRange(0,ArmorTypeTotalProbability);
		float ArmorTypeAccumulatedProbability =0.0f;
		for (FStructure_ArmorTypeProbability* Row : ArmorTypeProbabilities)
		{
			ArmorTypeAccumulatedProbability+=Row->ArmorTypeProbability;
			if (ArmorTypeRandomValue <= ArmorTypeAccumulatedProbability)
			{
				return SpawnedItem->ItemInfo.ArmorType=Row->ArmorType;
				
			}
		}
	return SpawnedItem->ItemInfo.ArmorType=E_Armor::None;
				
	
}

E_ItemRarity AEnemy_Base::SetRarity(ABaseEquippable* SpawnedItem)
{
	
		float RarityTotalProbability =0.0f;
		TArray<FStructure_RarityProbability*> RarirtyProbabilities;
		DT_RarityProbability->GetAllRows<FStructure_RarityProbability>(TEXT(""),RarirtyProbabilities);
		for (FStructure_RarityProbability* Row : RarirtyProbabilities)
		{
			RarityTotalProbability+=Row->RarityProbability;
		}
		float RarityRandomValue= FMath::FRandRange(0,RarityTotalProbability);
		float RarityAccumulatedProbability =0.0f;
		for (FStructure_RarityProbability* Row : RarirtyProbabilities)
		{
			RarityAccumulatedProbability+=Row->RarityProbability;
			if (RarityRandomValue <= RarityAccumulatedProbability)
			{
				return SpawnedItem->ItemInfo.ItemRarity=Row->Rarity;
				break;
			}
		}
	return SpawnedItem->ItemInfo.ItemRarity=E_ItemRarity::None;
	
}

void AEnemy_Base::VisibleHealthBar()
{
	if (Widget)
	{
		Widget->SetVisibility(true);
	}
}

void AEnemy_Base::GetIdealRange(float& GetAttackRange, float& GetDefendRadius)
{
	GetAttackRange=AttackMoveRange;
	GetDefendRadius=DefendRadius;
}


