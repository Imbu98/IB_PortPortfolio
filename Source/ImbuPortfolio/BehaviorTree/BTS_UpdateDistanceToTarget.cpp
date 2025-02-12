#include "BTS_UpdateDistanceToTarget.h"

#include "AIController.h"
#include "BehaviorTree/BlackboardComponent.h"


UBTS_UpdateDistanceToTarget::UBTS_UpdateDistanceToTarget()
{
	NodeName = TEXT("UpdateDistanceToTarget");
}

void UBTS_UpdateDistanceToTarget::TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	AAIController* AIController = Cast<AAIController>(OwnerComp.GetAIOwner());
	if (AIController)
	{
		APawn* AIPawn = AIController->GetPawn();
		UBlackboardComponent* BlackboardComponent = OwnerComp.GetBlackboardComponent();
		if (AIPawn && BlackboardComponent)
		{
			AActor* Actor = Cast<AActor>(BlackboardComponent->GetValueAsObject(TEXT("AttackTargetKey")));
			if (Actor)
			{
				FVector AIPawnLocation = AIPawn->GetActorLocation();
				FVector ActorLocation = Actor->GetActorLocation();
				float DistanceToAttack= FVector::Distance(AIPawnLocation,ActorLocation);
				BlackboardComponent->SetValueAsFloat(TEXT("DistanceToTargetKey"), DistanceToAttack);
			}
		}
	}
}
