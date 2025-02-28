#include "BTD_FirstEnemySearch.h"
#include "AIController.h"
#include "ImbuPortfolio/EnemyChar/Enemy_Boss.h"

UBTD_FirstEnemySearch::UBTD_FirstEnemySearch()
{
	NodeName=TEXT("BTD_FirstEnemySearch");
}

bool UBTD_FirstEnemySearch::CalculateRawConditionValue(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) const
{
	Super::CalculateRawConditionValue(OwnerComp, NodeMemory);
	
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
	AEnemy_Boss* Enemy_Boss = Cast<AEnemy_Boss>(AIPawn);
	if (Enemy_Boss)
	{
		return Enemy_Boss->IsFirstEnemySearch;
	}
	return false;
}
