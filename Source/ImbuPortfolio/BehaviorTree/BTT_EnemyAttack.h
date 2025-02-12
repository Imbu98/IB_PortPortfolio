#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTT_EnemyAttack.generated.h"

UCLASS()
class IMBUPORTFOLIO_API UBTT_EnemyAttack : public UBTTaskNode
{
	GENERATED_BODY()
public:
	UBTT_EnemyAttack();

public:
	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;

public:
	UPROPERTY(EditAnywhere)
	UBehaviorTreeComponent* OwnerCompRef; 
};
