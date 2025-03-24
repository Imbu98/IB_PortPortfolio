#include "OutGamePlayerController.h"
#include "Blueprint\UserWidget.h"
#include "ImbuPortfolio/Widget/W_MainMenu.h"
#include "ImbuPortfolio/Widget/W_BootScreen.h"
#include "Kismet/GameplayStatics.h"

void AOutGamePlayerController::BeginPlay()
{
	Super::BeginPlay();
	
	
}

void AOutGamePlayerController::OpenBootScreen()
{
	if (WBP_BootScreen!=nullptr)
	{
		BootScreen=CreateWidget<UW_BootScreen>(this, WBP_BootScreen);
		if (BootScreen!=nullptr)
		{
			BootScreen->AddToViewport(0);
			
		}
	}
}

void AOutGamePlayerController::OpenMainMenu()
{
	if (WBP_MainMenu!=nullptr)
	{
		MainMenu=CreateWidget<UW_MainMenu>(this, WBP_MainMenu);
		if (MainMenu!=nullptr)
		{
			MainMenu->AddToViewport(0);
			
		}
	}
}

void AOutGamePlayerController::OpenRodingScreen()
{
	if (WBP_RodingScreen)
	{
		WidgetRodingScreen = CreateWidget<UUserWidget>(this,WBP_RodingScreen);
		if (WidgetRodingScreen)
		{
			WidgetRodingScreen->AddToViewport();
		}
	}
}
