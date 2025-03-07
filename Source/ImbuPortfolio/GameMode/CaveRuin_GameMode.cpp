#include "CaveRuin_GameMode.h"
#include "../IB_Framework/IBGameInstance.h"
#include "ImbuPortfolio/EnemyChar/Enemy_Base.h"
#include "Kismet/GameplayStatics.h"

void ACaveRuin_GameMode::BeginPlay()
{
	Super::BeginPlay();
	
}

void ACaveRuin_GameMode::SpawnPortal()
{
	Super::SpawnPortal();
	
	IBGameInstance =Cast<UIBGameInstance>(GetGameInstance());
	if (IBGameInstance)
	{
		IBGameInstance->IGI_IsClearCaveRuins=true;
	}
}


