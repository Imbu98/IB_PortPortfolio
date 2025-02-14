#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "MainMenu_GameMode.generated.h"

UCLASS()
class IMBUPORTFOLIO_API AMainMenu_GameMode : public AGameModeBase
{
	GENERATED_BODY()

	protected:
	virtual void BeginPlay() override;
	
};
