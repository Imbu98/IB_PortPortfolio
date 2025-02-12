#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "BTS_UpdateDistanceToTarget.generated.h"

UCLASS()
class IMBUPORTFOLIO_API UBTS_UpdateDistanceToTarget : public UBTService
{
	GENERATED_BODY()
public:
	UBTS_UpdateDistanceToTarget();
protected:
	virtual void TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds) override;
};

