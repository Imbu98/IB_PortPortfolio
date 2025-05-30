#include "W_MainMenu.h"

#include "W_PopUp.h"
#include "Blueprint/UserWidget.h"
#include "Animation/WidgetAnimation.h"
#include "Components/Button.h"
#include "Components/WidgetSwitcher.h"
#include "ImbuPortfolio/IB_Framework/IBGameInstance.h"
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

	if (BTN_StartLoadGame)
	{
		BTN_StartLoadGame->OnClicked.AddDynamic(this, &ThisClass::OnClickLoadGameButton);
	}
}

void UW_MainMenu::OnClickExit()
{
	APlayerController* PlayerController = GetWorld()->GetFirstPlayerController();
	if (PlayerController)
	{
		UIBGameInstance* GameInstance = Cast<UIBGameInstance>(GetGameInstance());
		if (GameInstance)
		{
			GameInstance->LoadGame();
			GameInstance->SaveGame();
		}
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

void UW_MainMenu::OnClickLoadGameButton()
{
	UIBGameInstance* IBGameInstance = Cast<UIBGameInstance>( GetGameInstance());
	if (IBGameInstance)
	{
		IBGameInstance->LoadGame();
		UGameplayStatics::OpenLevel(GetWorld(),L_StartName);
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
	if (UGameplayStatics::DoesSaveGameExist(TEXT("Save1"),0))
	{
		UIBGameInstance* IBGameInstance = Cast<UIBGameInstance>(GetWorld()->GetGameInstance());
		if (IBGameInstance)
		{
			IBGameInstance->IsNewGame=true;
			UGameplayStatics::DeleteGameInSlot("Save1", 0);
			IBGameInstance->NewGame();
		}
	}
	UGameplayStatics::OpenLevel(GetWorld(), L_StartName);
	// FTimerHandle TimerHandle;
	// GetWorld()->GetTimerManager().SetTimer(TimerHandle, [this]()
	// {
	// 	
	// }, 1.0f, false);
	
}

void UW_MainMenu::StartGame_Cancel()
{
	
}


