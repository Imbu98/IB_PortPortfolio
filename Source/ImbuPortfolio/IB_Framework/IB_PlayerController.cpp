#include "IB_PlayerController.h"
#include "Blueprint\UserWidget.h"
#include "Blueprint\WidgetBlueprintLibrary.h"
#include "../Widget/W_Inventory.h"
#include "kismet/GameplayStatics.h"

void AIB_PlayerController::BeginPlay()
{
	// InventoryWidget ����
	if (InventoryWidgetClass != nullptr)
	{
		Inventory = CreateWidget<UUserWidget>(this, InventoryWidgetClass);
		
	}
}

void AIB_PlayerController::OpenInventory()
{
	if (Inventory != nullptr)
	{
		// �������� ����
		if (Inventory->IsVisible() == true)
		{
			bShowMouseCursor = false;
			Inventory->RemoveFromParent();
			UWidgetBlueprintLibrary::SetInputMode_GameOnly(this, false);
		}
		// �������� �ѱ�
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
