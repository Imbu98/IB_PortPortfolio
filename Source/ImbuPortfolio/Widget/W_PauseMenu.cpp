#include "W_PauseMenu.h"

#include "W_PopUp.h"
#include "Components/Button.h"
#include "EntitySystem/MovieSceneEntityManager.h"
#include "ImbuPortfolio/IB_Framework/IBGameInstance.h"
#include "Kismet/GameplayStatics.h"

void UW_PauseMenu::NativeConstruct()
{
	Super::NativeConstruct();

	if (BTN_ExitGame)
	{
		BTN_ExitGame->OnClicked.Clear();
		BTN_ExitGame->OnClicked.AddDynamic(this, &ThisClass::OnClickExit);
	}

	if (BTN_MainMenu)
	{
		BTN_MainMenu->OnClicked.Clear();
		BTN_MainMenu->OnClicked.AddDynamic(this, &ThisClass::OnClickMainMenuButton);
	}

	if (BTN_Resume)
	{
		BTN_Resume->OnClicked.Clear();
		BTN_Resume->OnClicked.AddDynamic(this, &ThisClass::OnClickResume);
	}
}

void UW_PauseMenu::OnClickResume()
{
	this->RemoveFromParent();
	
	APlayerController* PlayerController=Cast<APlayerController>( GetOwningPlayer());
	if (PlayerController)
	{
		PlayerController->SetPause(false);
		PlayerController->bShowMouseCursor = false;
	}
}

void UW_PauseMenu::OnClickMainMenuButton()
{
	if (WBP_PopUp)
	{
		CreatePopup(FText::FromString("Are you sure to go MainMenu?"), 
			FText::FromString("OK"), 
			FText::FromString("Cancel"));

		PopUpMenu->ButtonOKDelegate.AddDynamic(this,&ThisClass::MainMenu_Confirm);
		PopUpMenu->ButtonCancelDelegate.AddDynamic(this,&ThisClass::MainMenu_Cancel);
	}
}

void UW_PauseMenu::OnClickExit()
{
	if (WBP_PopUp)
	{
		CreatePopup(FText::FromString("Are you sure to ExitGame?"), 
			FText::FromString("OK"), 
			FText::FromString("Cancel"));

		PopUpMenu->ButtonOKDelegate.AddDynamic(this,&ThisClass::ExitGame_Confirm);
		PopUpMenu->ButtonCancelDelegate.AddDynamic(this,&ThisClass::ExitGame_Cancel);
	}
}

void UW_PauseMenu::MainMenu_Confirm()
{
	APlayerController* PlayerController = GetWorld()->GetFirstPlayerController();
	if (PlayerController)
	{
		UIBGameInstance* GameInstance = Cast<UIBGameInstance>(GetGameInstance());
		if (GameInstance)
		{
			GameInstance->SaveGame();
		}

		PlayerController->SetPause(false);
		UGameplayStatics::OpenLevel(GetWorld(), L_MainMenuName);
		
	}
}

void UW_PauseMenu::MainMenu_Cancel()
{
	if (PopUpMenu)
	{
		PopUpMenu->ButtonOKDelegate.Clear();
		PopUpMenu->ButtonCancelDelegate.Clear();
		PopUpMenu->RemoveFromParent();
	}
}

void UW_PauseMenu::ExitGame_Confirm()
{
	APlayerController* PlayerController = GetWorld()->GetFirstPlayerController();
	if (PlayerController)
	{
		UIBGameInstance* GameInstance = Cast<UIBGameInstance>(GetGameInstance());
		if (GameInstance)
		{
			GameInstance->SaveGame();
		}
		UKismetSystemLibrary::QuitGame(GetWorld(), PlayerController, EQuitPreference::Quit, false);
	}
}

void UW_PauseMenu::ExitGame_Cancel()
{
	if (PopUpMenu)
	{
		PopUpMenu->ButtonOKDelegate.Clear();
		PopUpMenu->ButtonCancelDelegate.Clear();
		PopUpMenu->RemoveFromParent();
	}
}

UW_PopUp* UW_PauseMenu::CreatePopup(const FText& PopUpMessage,const FText& LeftButtonText,const FText& RightButtonText)
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


