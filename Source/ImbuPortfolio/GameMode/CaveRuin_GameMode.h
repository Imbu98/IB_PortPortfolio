#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "ImbuPortfolio/ETC/Portal.h"
#include "ImbuPortfolio/IB_Framework/IBGameModeBase.h"
#include "CaveRuin_GameMode.generated.h"

UCLASS()
class IMBUPORTFOLIO_API ACaveRuin_GameMode : public AIBGameModeBase
{
	GENERATED_BODY()

protected:
	virtual void BeginPlay() override;
	
	
	virtual void SpawnPortal() override;
};
