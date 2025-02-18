#include "StartLevelGameMode.h"

#include "ImbuPortfolio/IB_Framework/IBGameInstance.h"

void AStartLevelGameMode::BeginPlay()
{
	Super::BeginPlay();

	UIBGameInstance* IBGameInstance = Cast<UIBGameInstance>(GetGameInstance());
	if (IBGameInstance)
	{
		IBGameInstance->LoadGame();
	}
}
