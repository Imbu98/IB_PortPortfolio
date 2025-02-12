#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTT_SetFocus.generated.h"

UCLASS()
class IMBUPORTFOLIO_API UBTT_SetFocus : public UBTTaskNode
{
	GENERATED_BODY()

public:
	UBTT_SetFocus();
public:
	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;


};
