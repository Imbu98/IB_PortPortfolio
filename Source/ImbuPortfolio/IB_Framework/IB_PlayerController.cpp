#include "IB_PlayerController.h"
#include "Blueprint\UserWidget.h"
#include "Blueprint\WidgetBlueprintLibrary.h"
#include "../Widget/W_Inventory.h"
#include "GameFramework/SpringArmComponent.h"
#include "ImbuPortfolio/Character/IBCharBase.h"
#include "ImbuPortfolio/Widget/W_Cannon.h"
#include "ImbuPortfolio/Widget/W_MainMenu.h"
#include "ImbuPortfolio/Widget/W_PauseMenu.h"
#include "kismet/GameplayStatics.h"

void AIB_PlayerController::BeginPlay()
{
	OpenPlayerWidget();

	// Cannon Widget
		if (WBP_Cannon)
		{
			CannonWidget= CreateWidget<UW_Cannon>(this,WBP_Cannon);
		
		}

	// PauseMenu
	if (WBP_PauseMenu != nullptr)
	{
		PauseWidget = CreateWidget<UW_PauseMenu>(this, WBP_PauseMenu);
	}
	
}

void AIB_PlayerController::OpenInventory()
{
	if (Inventory != nullptr)
	{
		
		if (Inventory->IsVisible() == true)
		{
			bShowMouseCursor = false;
			Inventory->RemoveFromParent();
			UWidgetBlueprintLibrary::SetInputMode_GameOnly(this, false);
		}
		
		else if (Inventory->IsVisible() == false)
		{
			bShowMouseCursor = true;
			UWidgetBlueprintLibrary::SetInputMode_GameAndUIEx(this, nullptr, EMouseLockMode::DoNotLock, true, false);
			Inventory->AddToViewport(0);
			
		}
	}
	else
	{
		return;
	}

}

UW_Inventory* AIB_PlayerController::GetInventoryWidget()
{

	return Cast<UW_Inventory>(Inventory);
}

void AIB_PlayerController::UpdatePlayerStateBar()
{
	
	PlayerStateBar->UpdatePlayerStateBar(GetCharacter());
}

void AIB_PlayerController::VisibleCannonWidget()
{
	if (CannonWidget != nullptr && CannonWidget->IsInViewport()!=true)
	{
		
			CannonWidget->SetWidgetProperty();
			CannonWidget->AddToViewport(0);
			bShowMouseCursor=true;
		
	}
	
}

void AIB_PlayerController::CollapsedCannonWidget()
{
	if (CannonWidget != nullptr&&CannonWidget->IsInViewport()==true)
	{
		
			CannonWidget->RemoveFromParent();
			bShowMouseCursor=false;
	}

}

void AIB_PlayerController::OpenPause()
{
	if (PauseWidget != nullptr)
	{
		
		if (PauseWidget->IsVisible() == true)
		{
			bShowMouseCursor = false;
			PauseWidget->RemoveFromParent();
			UWidgetBlueprintLibrary::SetInputMode_GameOnly(this, false);
			SetPause(false);
		}
		
		else if (PauseWidget->IsVisible() == false)
		{
			bShowMouseCursor = true;
			UWidgetBlueprintLibrary::SetInputMode_GameAndUIEx(this, nullptr, EMouseLockMode::DoNotLock, true, false);
			PauseWidget->AddToViewport(0);
			SetPause(true);
			
		}
	}
}

void AIB_PlayerController::OpenPlayerWidget()
{
	// InventoryWidget 
	if (InventoryWidgetClass != nullptr)
	{
		Inventory = CreateWidget<UW_Inventory>(this, InventoryWidgetClass);
	}

	//Player State Bar Widget
	if (WBP_PlayerStateBar!=nullptr)
	{
		PlayerStateBar=CreateWidget<UW_PlayerStateBar>(this, WBP_PlayerStateBar);
		if (PlayerStateBar!=nullptr)
		{
			PlayerStateBar->AddToViewport(0);
			
		}
	}
}

void AIB_PlayerController::ClosePlayerWidget()
{
	if (PlayerStateBar != nullptr)
	{
		PlayerStateBar->RemoveFromParent();
	}
	if (Inventory != nullptr)
	{
		Inventory->RemoveFromParent();
	}
}

void AIB_PlayerController::OpenRodingScreen()
{
	if (WBP_RodingScreen)
	{
		WidgetRodingScreen=CreateWidget<UUserWidget>(this,WBP_RodingScreen);
		if (WidgetRodingScreen)
		{
			WidgetRodingScreen->AddToViewport(1);
		}
	}
}

void AIB_PlayerController::CloseRodingScreen()
{
	if (WidgetRodingScreen)
	{
		WidgetRodingScreen->RemoveFromParent();
	}
}






