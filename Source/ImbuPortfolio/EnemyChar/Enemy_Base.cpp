#include "Enemy_Base.h"

#include "AIController.h"
#include "Enemy_Base_AIController.h"
#include "MovieSceneTracksComponentTypes.h"
#include "../DefineDelegate.h"
#include "Components/CapsuleComponent.h"
#include "EntitySystem/MovieSceneEntitySystemRunner.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "ImbuPortfolio/BehaviorTree/BTT_EnemyAttack.h"
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

	Widget=CreateDefaultSubobject<UWidgetComponent>(TEXT("Widget"));
	Widget->SetupAttachment(GetMesh());

	

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
			Widget->SetWidget(EnemyHealthBar);
			EnemyHealthBar->SetVisibility(ESlateVisibility::Visible);
		}
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
			GameMode_Interface->RemoveEnemyChar(this);
			
		}
	}
	

	if (DeathMontage)
	{
		PlayAnimMontage(DeathMontage);
	}
	if (EnemyHealthBar)
	{
		EnemyHealthBar->UpdateHealthBar(this);
	}

	// Drop item
	FTransform SpawnTransfrom = GetActorTransform();
	FActorSpawnParameters SpawnParams;
	SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
	SpawnParams.TransformScaleMethod = ESpawnActorScaleMethod::MultiplyWithRoot;
	
	for (int32 i=0;i<NumberOfDropItem;i++)
	{
		ABaseEquippable* SpawnedItem = GetWorld()->SpawnActor<ABaseEquippable>(SpawnItem,SpawnTransfrom,SpawnParams);
		if (SpawnedItem!=nullptr)
		{
			SpawnedItem->SelectItemType();
			SpawnedItem->SetAppearance();
			SpawnedItem->ItemImpulse();
			
		}
		
	}
	
	
	AAIController* AIController=Cast<AAIController>(GetController());
	if (AIController)
	{
		AEnemy_Base_AIController* Enemy_AIController = Cast<AEnemy_Base_AIController>(AIController);
		if (Enemy_AIController!=nullptr)
		{
			Enemy_AIController->GetBrainComponent()->StopLogic(TEXT("Dead"));
			Enemy_AIController->ClearFocus(EAIFocusPriority::LastFocusPriority);
			GetMesh()->SetCollisionEnabled(ECollisionEnabled::Type::NoCollision);
			GetCapsuleComponent()->SetCollisionEnabled(ECollisionEnabled::Type::NoCollision);
			
		}
	}
}

void AEnemy_Base::DamageResponse(E_DamageResponse DamageResponse)
{
	if (DamageResponseMontage)
	{
		PlayAnimMontage(DamageResponseMontage);
	}
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red,FString::Printf(TEXT( "EnemyHp:%f is Remain"),DamageSystemComponent->CurrentHealth));
	EnemyHealthBar->UpdateHealthBar(this);
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

void AEnemy_Base::GetIdealRange(float& GetAttackRange, float& GetDefendRadius)
{
	GetAttackRange=AttackMoveRange;
	GetDefendRadius=DefendRadius;
}


