#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BTD_FirstEnemySearch.generated.h"

UCLASS()
class IMBUPORTFOLIO_API UBTD_FirstEnemySearch : public UBTDecorator
{
	GENERATED_BODY()

	protected:
	UBTD_FirstEnemySearch();

public:
	virtual bool CalculateRawConditionValue(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) const override;
	
};
