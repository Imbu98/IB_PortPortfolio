#include "BTT_SetMovementSpeed.h"
#include "AIController.h"
#include "../Interface/AI_Interface.h"


UBTT_SetMovementSpeed::UBTT_SetMovementSpeed()
{
	NodeName=TEXT("SetMovementSpeed");
}

EBTNodeResult::Type UBTT_SetMovementSpeed::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
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
	
	if (AIPawn->GetClass()->ImplementsInterface(UAI_Interface::StaticClass()))
	{
		IAI_Interface* AI_Interface = Cast<IAI_Interface>(AIPawn);
		if (AI_Interface==nullptr)
		{
			return EBTNodeResult::Failed;
		}
		else
		{
			AI_Interface->SetMovementSpeed(MovementSpeed);
			return EBTNodeResult::Succeeded;
		}
	}
	return EBTNodeResult::Failed;
}
