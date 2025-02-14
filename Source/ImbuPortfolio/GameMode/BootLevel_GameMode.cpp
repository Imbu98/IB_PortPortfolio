#include "BootLevel_GameMode.h"
#include "Blueprint/UserWidget.h"
#include "../IB_Framework/IB_PlayerController.h"
#include "kismet/GameplayStatics.h"
#include "../Widget/W_BootScreen.h"
#include "ImbuPortfolio/IB_Framework/OutGamePlayerController.h"

class AOutGamePlayerController;

void ABootLevel_GameMode::BeginPlay()
{
	Super::BeginPlay();

	AOutGamePlayerController* OutGamePlayerController=Cast<AOutGamePlayerController>( GetWorld()->GetFirstPlayerController());
	{
		if (OutGamePlayerController)
		{
			OutGamePlayerController->OpenBootScreen();
			OutGamePlayerController->bShowMouseCursor=true;
		}
	}
}



