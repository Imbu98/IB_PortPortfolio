#include "BTT_BattleCry.h"

#include "AIController.h"
#include "ImbuPortfolio/EnemyChar/Enemy_Boss.h"

UBTT_BattleCry::UBTT_BattleCry()
{
}

EBTNodeResult::Type UBTT_BattleCry::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	OwnerCompRef=&OwnerComp;
	
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
	AEnemy_Boss* Enemy_Boss = Cast<AEnemy_Boss>(AIPawn);
	
	if (Enemy_Boss)
	{
		Enemy_Boss->BattleCry();
		return EBTNodeResult::Succeeded;
	}
	return EBTNodeResult::Failed;
	
}
