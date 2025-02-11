#include "BTT_MoveToIdealRange.h"
#include "AIController.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "../EnemyChar/Enemy_Base_AIController.h"
#include "Navigation/PathFollowingComponent.h"

UBTT_MoveToIdealRange::UBTT_MoveToIdealRange()
{
	NodeName=TEXT("MoveToIdealRange");
}

EBTNodeResult::Type UBTT_MoveToIdealRange::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	AAIController* AIController = Cast<AAIController>(OwnerComp.GetOwner());
	if (AIController==nullptr)
	{
		return EBTNodeResult::Failed;
	}
	APawn* AIPawn = AIController->GetPawn();
	if (AIPawn==nullptr)
	{
		return EBTNodeResult::Failed;
	}

	AEnemy_Base_AIController* Enemy_Base_AIController = Cast<AEnemy_Base_AIController>(OwnerComp.GetOwner());
	if (Enemy_Base_AIController==nullptr)
	{
		GEngine->AddOnScreenDebugMessage(-1,1.0f,FColor::Red,TEXT("EnemyAIController Is Null"));
		return EBTNodeResult::Failed;
	}
	else
	{
		AActor* AttackTarget = Cast<AActor>(AIController->GetBlackboardComponent()->GetValueAsObject("AttackTargetKey"));
		float IdealRange = AIController->GetBlackboardComponent()->GetValueAsFloat("IdealRangeKey");
		FVector TargetLocation = AttackTarget->GetActorLocation();
		EPathFollowingRequestResult::Type Result= Enemy_Base_AIController->MoveToActor(AttackTarget,IdealRange);
		
		if (Result==EPathFollowingRequestResult::AlreadyAtGoal||Result==EPathFollowingRequestResult::Failed)
		{
			return EBTNodeResult::Succeeded;
		}
	}
	return EBTNodeResult::Failed;
	
}
