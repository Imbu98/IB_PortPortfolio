#include "BTT_EnemyAttack.h"
#include "AIController.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "ImbuPortfolio/EnemyChar/Enemy_Base.h"
#include "ImbuPortfolio/Interface/AI_Interface.h"

UBTT_EnemyAttack::UBTT_EnemyAttack()
{
	NodeName=TEXT("EnemyAttack");

	IsAttacking=false;
}

EBTNodeResult::Type UBTT_EnemyAttack::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
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
				AI_Interface->EnemyAttack(this);
				return EBTNodeResult::InProgress;
		}
		
		
	}
	return EBTNodeResult::Failed;
	
	 
	
}
