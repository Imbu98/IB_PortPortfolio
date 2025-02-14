#include "MainMenu_GameMode.h"

#include "ImbuPortfolio/IB_Framework/IB_PlayerController.h"
#include "ImbuPortfolio/IB_Framework/OutGamePlayerController.h"

class AIB_PlayerController;

void AMainMenu_GameMode::BeginPlay()
{
	Super::BeginPlay();

	AOutGamePlayerController* OutGamePlayerController=Cast<AOutGamePlayerController>( GetWorld()->GetFirstPlayerController());
	{
		if (OutGamePlayerController)
		{
			OutGamePlayerController->OpenMainMenu();
			OutGamePlayerController->bShowMouseCursor=true;
		}
	}
	
}
