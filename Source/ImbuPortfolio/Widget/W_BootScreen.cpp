#include "W_BootScreen.h"
#include "Blueprint/UserWidget.h"
#include "Animation/WidgetAnimation.h"
#include "ImbuPortfolio/IB_Framework/OutGamePlayerController.h"
#include "kismet/GameplayStatics.h"

void UW_BootScreen::NativeConstruct()
{
	Super::NativeConstruct();
	
    
	
	if (Load_In)
	{
		FWidgetAnimationDynamicEvent WidgetAnimFinishedDelegate;
		
		WidgetAnimFinishedDelegate.BindUFunction(this,TEXT("OnAnimationFinishedFunction"));
		BindToAnimationFinished(Load_In,WidgetAnimFinishedDelegate);
		
		

		PlayAnimationForward(Load_In);
	}
}

void UW_BootScreen::OnAnimationFinishedFunction()
{
	AOutGamePlayerController* OutGamePC = Cast<AOutGamePlayerController>(UGameplayStatics::GetPlayerController(GetWorld(),0));
	if (OutGamePC)
	{
		OutGamePC->OpenRodingScreen();
	}
	
	if (GetWorld())
	{
		GetWorld()->GetTimerManager().SetTimer(TimerHandle, this, &ThisClass::OpenMainMenuLevel, 3.0f, false);
	}
	
}

void UW_BootScreen::OpenMainMenuLevel()
{
	AOutGamePlayerController* OutGamePC = Cast<AOutGamePlayerController>(UGameplayStatics::GetPlayerController(GetWorld(),0));
	if (OutGamePC)
	{
		if (OutGamePC->WidgetRodingScreen)
		{
			OutGamePC->WidgetRodingScreen->RemoveFromParent();
		}
	}
	UGameplayStatics::OpenLevel(GetWorld(),L_MainMenuName);
}