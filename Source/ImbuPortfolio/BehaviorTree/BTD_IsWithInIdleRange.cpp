#include "BTD_IsWithInIdleRange.h"

#include "AIController.h"
#include "BehaviorTree/BlackboardComponent.h"

UBTD_IsWithInIdleRange::UBTD_IsWithInIdleRange()
{
	NodeName=(TEXT("BDT_IsWithInIdleRange"));
}

bool UBTD_IsWithInIdleRange::CalculateRawConditionValue(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) const
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
	
	UBlackboardComponent* BlackboardComponent = OwnerComp.GetBlackboardComponent();
	if (BlackboardComponent != nullptr)
	{
		FName AttackTargetName = AttackTarget.SelectedKeyName;
		AActor* Actor = Cast<AActor>( BlackboardComponent->GetValueAsObject(AttackTargetName));
		if (Actor != nullptr)
		{
			float ErrorMargin=50.0f;
			FName AttackRangeKeyName = IdealRange.SelectedKeyName;
			float AttackRange = BlackboardComponent->GetValueAsFloat(AttackRangeKeyName);
			return Actor->GetDistanceTo(AIPawn)- ErrorMargin<=AttackRange;
				
		}
	}
	return false;
}
