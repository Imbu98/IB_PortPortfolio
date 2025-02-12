#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "../ETC/Spline.h"
#include "../Enum/E_Enemy.h"
#include "BehaviorTree/BTTaskNode.h"
#include "ImbuPortfolio/BehaviorTree/BTT_EnemyAttack.h"
#include "UObject/Interface.h"
#include "AI_Interface.generated.h"

UINTERFACE(MinimalAPI)
class UAI_Interface : public UInterface
{
	GENERATED_BODY()
};

class IMBUPORTFOLIO_API IAI_Interface
{
	GENERATED_BODY()

public:
	virtual ASpline* GetSpline() { return nullptr; }
	virtual void EnemyAttack(UBTT_EnemyAttack* AttackTask){}
	virtual FGameplayTag GetCurrentState(){return FGameplayTag::EmptyTag;};
	virtual float SetMovementSpeed(E_MovementSpeed MovementSpeed){return 0.0f;};
	virtual void GetIdealRange(float &GetAttackRange, float &GetDefendRadius){};
};
