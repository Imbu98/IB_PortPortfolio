#include "TempleDragon_GameMode.h"
#include "../IB_Framework/IBGameInstance.h"
#include "Engine/TargetPoint.h"
#include "ImbuPortfolio/Character/IBCharBase.h"
#include "ImbuPortfolio/Components/InventoryComponent.h"
#include "ImbuPortfolio/EnemyChar/Enemy_Base.h"
#include "ImbuPortfolio/ETC/Portal.h"
#include "Kismet/GameplayStatics.h"


void ATempleDragon_GameMode::BeginPlay()
{
	Super::BeginPlay();
}

void ATempleDragon_GameMode::SpawnPortal()
{
	Super::SpawnPortal();
	
	IBGameInstance =Cast<UIBGameInstance>(GetGameInstance());
	if (IBGameInstance)
	{
		IBGameInstance->IGI_IsClearTempleDragon=true;
	}
	
}

