#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BTD_IsWithInIdleRange.generated.h"

UCLASS()
class IMBUPORTFOLIO_API UBTD_IsWithInIdleRange : public UBTDecorator
{
	GENERATED_BODY()

public:
	UBTD_IsWithInIdleRange();

protected:
	virtual bool CalculateRawConditionValue(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) const override;

public:
	UPROPERTY(EditAnywhere)
	FBlackboardKeySelector IdealRange;
	UPROPERTY(EditAnywhere)
	FBlackboardKeySelector AttackTarget;
	
};
