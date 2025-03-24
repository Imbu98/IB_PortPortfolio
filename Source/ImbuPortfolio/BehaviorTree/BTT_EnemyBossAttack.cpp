#include "BTT_EnemyBossAttack.h"
#include "AIController.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "ImbuPortfolio/EnemyChar/Enemy_Base.h"
#include "ImbuPortfolio/Interface/AI_Interface.h"

UBTT_EnemyBossAttack::UBTT_EnemyBossAttack()
{
	NodeName=TEXT("EnemyBossAttack");

	IsAttacking=false;
}

EBTNodeResult::Type UBTT_EnemyBossAttack::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	OwnerCompRef = &OwnerComp;
	AAIController* AIController=OwnerComp.GetAIOwner();
	APawn* AIPawn=AIController->GetPawn();
	if (AIController==nullptr)
	{
		GEngine->AddOnScreenDebugMessage(-1,1.0f,FColor::Red,TEXT("BTT_EnemyAttack :AI_Controller is Null"));
		return EBTNodeResult::Failed;
	}
	if (AIPawn==nullptr)
	{
		GEngine->AddOnScreenDebugMessage(-1,1.0f,FColor::Red,TEXT("BTT_EnemyAttack :Pawn is Null"));
		return EBTNodeResult::Failed;
	}
	
	if (AIPawn->GetClass()->ImplementsInterface(UAI_Interface::StaticClass())==true)
	{
		IAI_Interface* AI_Interface = Cast<IAI_Interface>(AIPawn);
		if (AI_Interface==nullptr)
		{
			GEngine->AddOnScreenDebugMessage(-1,1.0f,FColor::Red,TEXT("BTT_EnemyAttack :AI_Interface is Null"));
			return EBTNodeResult::Failed;
		}
		UBlackboardComponent* BlackboardComponent = OwnerComp.GetBlackboardComponent();
		if (BlackboardComponent != nullptr)
		{
			FName DistanceToTargetName = DistanceToTargetRange.SelectedKeyName;
			
			float AttackRange = BlackboardComponent->GetValueAsFloat(DistanceToTargetName);
			float EnemyAttackProbability=50.0f;
			float SpecialAttack1Probability=30.0f;
			float RandomAttackProbability = FMath::RandRange(0.0f,EnemyAttackProbability+SpecialAttack1Probability);
			
			if (RandomAttackProbability<=EnemyAttackProbability)
			{
				AI_Interface->EnemyBossAttack(this);
				return EBTNodeResult::InProgress;
			}
			else if (RandomAttackProbability<=SpecialAttack1Probability+EnemyAttackProbability)
			{
				FName AttackTargetName = AttackTarget.SelectedKeyName;
				AActor* AttackActor = Cast<AActor>(BlackboardComponent->GetValueAsObject(AttackTargetName));
				AI_Interface->EnemySpecialAttack1(AttackActor,this);
				return EBTNodeResult::InProgress;
			}
		}
		
		
	}
	return EBTNodeResult::Failed;
	
	 
	
}
