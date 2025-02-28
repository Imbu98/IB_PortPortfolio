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
	OwnerCompRef=&OwnerComp;
	
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
		if (AttackTarget==nullptr)
		{
			return EBTNodeResult::Failed;
		}
		FAIRequestID MoveRequestID = AIController->MoveToActor(AttackTarget, IdealRange, false);

		// 이동 완료 이벤트 바인딩
		//AIController->ReceiveMoveCompleted.BindUObject(&ThisClass::OnMoveCompleted);

		return EBTNodeResult::InProgress;
	}
}

	void UBTT_MoveToIdealRange::OnMoveCompleted(FAIRequestID RequestID, const FPathFollowingResult& Result)
	{
		if (Result.IsSuccess())
		{
			FinishLatentTask(*OwnerCompRef, EBTNodeResult::Succeeded);
		}
		else
		{
			FinishLatentTask(*OwnerCompRef, EBTNodeResult::Failed);
		}
	}
