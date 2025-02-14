#include "W_BootScreen.h"
#include "Blueprint/UserWidget.h"
#include "Animation/WidgetAnimation.h"
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
	if (GetWorld())
	{
		GetWorld()->GetTimerManager().SetTimer(TimerHandle, this, &ThisClass::OpenMainMenuLevel, 3.0f, false);
	}
	
}

void UW_BootScreen::OpenMainMenuLevel()
{
	if (L_MainMenu)
	{
		UGameplayStatics::OpenLevelBySoftObjectPtr(this,L_MainMenu);
	}
}