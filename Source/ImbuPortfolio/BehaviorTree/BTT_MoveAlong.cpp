#include "BTT_MoveAlong.h"

#include "ImbuPortfolio/EnemyChar/Enemy_Base_AIController.h"
#include "ImbuPortfolio/ETC/Spline.h"
#include "ImbuPortfolio/Interface/AI_Interface.h"




UBTT_MoveAlong::UBTT_MoveAlong()
{
	NodeName=TEXT("MoveAlong");
}

EBTNodeResult::Type UBTT_MoveAlong::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	Super::ExecuteTask(OwnerComp, NodeMemory);
	
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
	
	if (AIPawn->GetClass()->ImplementsInterface(UAI_Interface::StaticClass()))
	{
		IAI_Interface* AI_Interface = Cast<IAI_Interface>(AIPawn);
		if (AI_Interface==nullptr)
		{
			return EBTNodeResult::Failed;
		}
		else
		{
			ASpline* Spline = AI_Interface->GetSpline();
			if (Spline!=nullptr)
			{
				FVector AiMoveLocation = Spline->GetSplinePointAsWorldPosition();
				AEnemy_Base_AIController* Enemy_Base_AIController = Cast<AEnemy_Base_AIController>(OwnerComp.GetOwner());
				if (Enemy_Base_AIController==nullptr)
				{
					GEngine->AddOnScreenDebugMessage(-1,1.0f,FColor::Red,TEXT("EnemyAIController Is Null"));
					return EBTNodeResult::Failed;
				}
				else
				{
					Enemy_Base_AIController->MoveToLocation(AiMoveLocation);
					Spline->IncrementPatrolRoute();
					return EBTNodeResult::Succeeded;
				}
			}
		}
	}

	return EBTNodeResult::Failed;
}
