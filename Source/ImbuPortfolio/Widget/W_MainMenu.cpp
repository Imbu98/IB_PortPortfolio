#include "W_MainMenu.h"

#include "W_PopUp.h"
#include "Blueprint/UserWidget.h"
#include "Animation/WidgetAnimation.h"
#include "Components/Button.h"
#include "Components/WidgetSwitcher.h"
#include "kismet/GameplayStatics.h"

void UW_MainMenu::NativeConstruct()
{
	Super::NativeConstruct();

	if (BTN_ExitGame)
	{
		BTN_ExitGame->OnClicked.AddDynamic(this, &ThisClass::OnClickExit);
	}

	if (BTN_StartNewGame)
	{
		BTN_StartNewGame->OnClicked.AddDynamic(this, &ThisClass::OnClickStartButton);
	}
}

void UW_MainMenu::OnClickExit()
{
	APlayerController* PlayerController = GetWorld()->GetFirstPlayerController();
	if (PlayerController)
	{
		UKismetSystemLibrary::QuitGame(GetWorld(), PlayerController, EQuitPreference::Quit, false);
	}
}

void UW_MainMenu::OnClickStartButton()
{
	if (WBP_PopUp)
	{
		CreatePopup(FText::FromString("Are you sure you want to start new game? (All data will be deleted)"), 
			FText::FromString("OK"), 
			FText::FromString("Cancel"));

		PopUpMenu->ButtonOKDelegate.AddDynamic(this,&ThisClass::StartGame_Confirm);
		PopUpMenu->ButtonCancelDelegate.AddDynamic(this,&ThisClass::StartGame_Cancel);
	}
	
	
	
}

UW_PopUp* UW_MainMenu::CreatePopup(const FText& PopUpMessage,const FText& LeftButtonText,const FText& RightButtonText)
{
	APlayerController* PlayerController = GetWorld()->GetFirstPlayerController();
	if (PlayerController)
	{
		if (PlayerController->IsLocalController())
		{
			PopUpMenu= CreateWidget<UW_PopUp>(GetWorld(),WBP_PopUp);
			if (PopUpMenu)
			{
				PopUpMenu->Text_Popup=PopUpMessage;
				PopUpMenu->Text_OKBtn=LeftButtonText;
				PopUpMenu->Text_CancelBtn=RightButtonText;
				PopUpMenu->AddToViewport(0);

				return PopUpMenu;
			}
		}
	}
	return nullptr;
		
	
}

void UW_MainMenu::StartGame_Confirm()
{
	UGameplayStatics::OpenLevelBySoftObjectPtr(GetWorld(),L_Start);
}

void UW_MainMenu::StartGame_Cancel()
{
	
}


