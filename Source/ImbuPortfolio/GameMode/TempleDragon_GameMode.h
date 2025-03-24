#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "ImbuPortfolio/IB_Framework/IBGameModeBase.h"
#include "ImbuPortfolio/Interface/GameMode_Interface.h"
#include "TempleDragon_GameMode.generated.h"

UCLASS()
class IMBUPORTFOLIO_API ATempleDragon_GameMode : public AIBGameModeBase
{
	GENERATED_BODY()

protected:
	virtual void BeginPlay() override;

public:
	
	virtual void SpawnPortal() override;
	
};


