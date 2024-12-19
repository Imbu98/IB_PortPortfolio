#include "W_Inventory.h"
#include "Components\WrapBox.h"
#include "Components/Image.h"
#include "Engine.h"
#include "../Components/InventoryComponent.h"
#include "W_Slot.h"

void UW_Inventory::LoadInventory(UInventoryComponent* Inventory)
{
	InventoryWrapBox->ClearChildren();
	
	
	if (ItemSlotWidgetClass != nullptr&& Inventory!=nullptr)
	{

		for (int ArrayIndex = 0; ArrayIndex < Inventory->Items.Num(); ArrayIndex++)
		{
			UUserWidget* ItemSlotWidget = CreateWidget(this, ItemSlotWidgetClass);
			UW_Slot* ItemSlot = Cast<UW_Slot>(ItemSlotWidget);
			if (ItemSlot)
			{
				// Item, ArrayIndex, Inventorycomponent 초기화 해주기
				ItemSlot->Index = ArrayIndex;
				ItemSlot->InventoryComponent = Inventory;
				ItemSlot->Item = Inventory->Items[ArrayIndex];
				
				
				InventoryWrapBox->AddChild(ItemSlot);
			}
			
		}
	}

}
