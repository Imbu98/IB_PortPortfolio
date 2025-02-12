#include "BTT_SetFocus.h"
#include "AIController.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "BehaviorTree/BTFunctionLibrary.h"

UBTT_SetFocus::UBTT_SetFocus()
{
	NodeName=TEXT("SetFocus");
}

EBTNodeResult::Type UBTT_SetFocus::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	
	AAIController* AIController= Cast<AAIController>(OwnerComp.GetOwner());
	if (AIController)
	{
		AActor* NewFocus = Cast<AActor>(AIController->GetBlackboardComponent()->GetValueAsObject("AttackTargetKey"));
		AIController->SetFocus(NewFocus);
		
		return EBTNodeResult::Succeeded;
	}
	return EBTNodeResult::Failed;
}
	
