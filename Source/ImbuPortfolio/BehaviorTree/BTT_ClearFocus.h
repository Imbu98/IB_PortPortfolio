#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTT_ClearFocus.generated.h"

UCLASS()
class IMBUPORTFOLIO_API UBTT_ClearFocus : public UBTTaskNode
{
	GENERATED_BODY()

public:
	UBTT_ClearFocus();
public:
	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;

	
};
