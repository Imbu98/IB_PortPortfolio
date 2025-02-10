#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTT_MoveAlong.generated.h"

UCLASS()
class IMBUPORTFOLIO_API UBTT_MoveAlong : public UBTTaskNode
{
	GENERATED_BODY()

public:
	UBTT_MoveAlong();

public:
	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
	
};
