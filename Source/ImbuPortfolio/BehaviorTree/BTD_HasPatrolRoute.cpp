#include "BTD_HasPatrolRoute.h"
#include "AIController.h"
#include "../Interface/AI_Interface.h"

UBTD_HasPatrolRoute::UBTD_HasPatrolRoute()
{
	NodeName=(TEXT("HasPatrolRoute"));
}

bool UBTD_HasPatrolRoute::CalculateRawConditionValue(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) const
{

	AAIController* AIController = Cast<AAIController>(OwnerComp.GetOwner());
	if (AIController==nullptr)
	{
		return false;
	}
	APawn* AIPawn = AIController->GetPawn();
	if (AIPawn==nullptr)
	{
		return false;
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
				return true;
			}
		}
	}
	return false;
}
