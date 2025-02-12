#include "BTT_ClearFocus.h"
#include "AIController.h"

UBTT_ClearFocus::UBTT_ClearFocus()
{
	NodeName=TEXT("ClearFocus");
}

EBTNodeResult::Type UBTT_ClearFocus::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	AAIController* AIController= Cast<AAIController>(OwnerComp.GetOwner());
	if (AIController)
	{
		AIController->ClearFocus(EAIFocusPriority::Default);
		
		return EBTNodeResult::Succeeded;
	}
	return EBTNodeResult::Failed;
	
}
