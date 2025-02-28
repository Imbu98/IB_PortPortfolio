#include "Enemy_Boss.h"

#include "Enemy_Base_AIController.h"
#include "../BehaviorTree/BTT_BattleCry.h"
#include "ImbuPortfolio/Widget/W_BossHealthBar.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetSystemLibrary.h"


AEnemy_Boss::AEnemy_Boss()
{
	PrimaryActorTick.bCanEverTick = true;

	
	EnemyAttackEnded.BindUObject(this,&ThisClass::BossAttackEnded);
}

void AEnemy_Boss::BeginPlay()
{
	Super::BeginPlay();

	APlayerController* PC = GetWorld()->GetFirstPlayerController();
	if (PC)
	{
		BossHealthBar = CreateWidget<UW_BossHealthBar>(PC, WBP_BossHealthBar);
	}
	OnBattleCryEnded.BindUObject(this,&ThisClass::BattleCryEnded);

}

void AEnemy_Boss::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (BossHealthBar)
	{
		BossHealthBar->UpdateBossHealthBar(this);
	}
}

void AEnemy_Boss::EnemyBossAttack(UBTT_EnemyBossAttack* AttackTask)
{
	EnemyBossAttackTask = AttackTask;
	
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

FString AEnemy_Boss::GetBossName()
{
	return EnemyBossName;
}

void AEnemy_Boss::OnDeath()
{
	Super::OnDeath();
	
	if (BossHealthBar)
	{
		BossHealthBar->RemoveFromParent();
	}
	
}

void AEnemy_Boss::EnemySpecialAttack1(AActor* JumpTarget,UBTT_EnemyBossAttack* AttackTask)
{
	EnemyBossAttackTask=AttackTask;
	StateComponent->SetState(TAG_EnemyStatusActionAttack);

	FVector OutLaunchVector=FVector(0.0f,0.0f,0.0f);
	FVector CalculateVector = CalculateFutureActorLocation(JumpTarget,1.0f);
	FVector NewCalculateVector = FVector(CalculateVector.X,CalculateVector.Y,CalculateVector.Z+50.f);
	bool LaunchVelocity= UGameplayStatics::SuggestProjectileVelocity_CustomArc(GetWorld(),OutLaunchVector,GetActorLocation(),NewCalculateVector);
	if (LaunchVelocity)
	{
		LaunchCharacter(OutLaunchVector,true,true);
	}
	
	if (AM_SpecialAttack1)
	{
		PlayMontageOnCompleted(AM_SpecialAttack1,EnemyAttackEnded);
	}
	
	
	
}

void AEnemy_Boss::BossAttackEnded(UAnimMontage* Montage, bool bInterrupted)
{
	if (StateComponent)
	{
		StateComponent->SetState(TAG_EnemyStatusIdle);
	}
	if (EnemyBossAttackTask)
	{
		EnemyBossAttackTask->FinishLatentTask(*EnemyBossAttackTask->OwnerCompRef,EBTNodeResult::Succeeded);
	}
	
}

void AEnemy_Boss::BattleCry()
{
	if (AM_BattleCry)
	{
		IsFirstEnemySearch=false;
		PlayMontageOnCompleted(AM_BattleCry,OnBattleCryEnded);
		
	}
	if (BossHealthBar)
	{
		BossHealthBar->AddToViewport(0);
		
		BossHealthBar->UpdateBossHealthBar(this);
		
	}
}

void AEnemy_Boss::BattleCryEnded(UAnimMontage* Montage, bool bInterrupted)
{
		if (BattleCryTaskNode)
		{
			BattleCryTaskNode->FinishLatentTask(*BattleCryTaskNode->OwnerCompRef,EBTNodeResult::Succeeded);
			
		}
	
}

FVector AEnemy_Boss::CalculateFutureActorLocation(AActor* TargetActor,float Time)
{
	return TargetActor->GetActorLocation()+TargetActor->GetVelocity()*FVector(1.0f,1.0f,0.0f)*Time;
}


void AEnemy_Boss::DamageResponse(E_DamageResponse DamageResponse)
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
			PlayAnimMontage(AM_HitReaction);
		}break;
	default:
		{
				
		}break;
			
	}
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red,FString::Printf(TEXT( "BossHp:%f is Remain"),DamageSystemComponent->CurrentHealth));
	if (BossHealthBar)
	{
		//BossHealthBar->UpdateBossHealthBar(this);
	}
	
}




