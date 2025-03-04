#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTT_BattleCry.generated.h"

UCLASS()
class IMBUPORTFOLIO_API UBTT_BattleCry : public UBTTaskNode
{
	GENERATED_BODY()
	
public:
	UBTT_BattleCry();
protected:
	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;

public:
	UPROPERTY(EditAnywhere)
	UBehaviorTreeComponent* OwnerCompRef; 
};
