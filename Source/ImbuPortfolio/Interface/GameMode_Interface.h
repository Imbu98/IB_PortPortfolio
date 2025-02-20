#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "GameMode_Interface.generated.h"

UINTERFACE(MinimalAPI)
class UGameMode_Interface : public UInterface
{
	GENERATED_BODY()
};

class IMBUPORTFOLIO_API IGameMode_Interface
{
	GENERATED_BODY()

public:
	
	 virtual void RemoveEnemyChar(AActor* EnemyActor){};
	virtual void SaveReward_Gold(float EnemyReward_Gold){};
	virtual float GetSaveReward_Gold(){	return 0.0f;}
};
