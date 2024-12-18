#include "W_Inventory.h"
#include "Components\WrapBox.h"
#include "Components/Image.h"
#include "Engine.h"
#include "../Components/InventoryComponent.h"

void UW_Inventory::LoadInventory(UInventoryComponent* Inventory)
{
	InventoryWrapBox->ClearChildren();
	
	
	if (ItemSlotWidgetClass != nullptr)
	{

		for (int i = 0; i < Inventory->Items.Num(); i++)
		{
			UUserWidget* ItemSlotWidget = CreateWidget(this, ItemSlotWidgetClass);
			if (ItemSlotWidget)
			{
				InventoryWrapBox->AddChild(ItemSlotWidget);
			}
			
		}
	}

}
