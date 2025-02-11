#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BehaviorTree/Blackboard/BlackboardKeyType_Float.h"
#include "BehaviorTree/Blackboard/BlackboardKeyType_Object.h"
#include "BTT_MoveToIdealRange.generated.h"

UCLASS()
class IMBUPORTFOLIO_API UBTT_MoveToIdealRange : public UBTTaskNode
{
	GENERATED_BODY()

public:
	UBTT_MoveToIdealRange();
protected:
	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;

	
};
