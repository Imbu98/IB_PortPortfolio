#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "ImbuPortfolio/Enum/E_Enemy.h"
#include "BTT_SetMovementSpeed.generated.h"

UCLASS()
class IMBUPORTFOLIO_API UBTT_SetMovementSpeed : public UBTTaskNode
{
	GENERATED_BODY()

public:
	UBTT_SetMovementSpeed();
protected:
	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
public:
	UPROPERTY(EditAnywhere)
	E_MovementSpeed MovementSpeed;
	

	
};
