#include "W_Inventory.h"
#include "Components\WrapBox.h"
#include "Components/Image.h"
#include "Engine.h"
#include "W_EquippedSlot.h"
#include "../Components/InventoryComponent.h"
#include "W_Slot.h"

void UW_Inventory::LoadInventory(UInventoryComponent* Inventory)
{
	if (InventoryWrapBox==nullptr)
	{
		return;
	}
	InventoryWrapBox->ClearChildren();
	
	if (ItemSlotWidgetClass != nullptr&& Inventory!=nullptr)
	{
		for (int ArrayIndex = 0; ArrayIndex < Inventory->Items.Num(); ArrayIndex++)
		{
			UUserWidget* ItemSlotWidget = CreateWidget(this, ItemSlotWidgetClass);
			UW_Slot* ItemSlot = Cast<UW_Slot>(ItemSlotWidget);
			if (ItemSlot)
			{
				ItemSlot->Index = ArrayIndex;
				ItemSlot->InventoryComponent = Inventory;
				ItemSlot->Item = Inventory->Items[ArrayIndex];
				
				
				InventoryWrapBox->AddChild(ItemSlot);
			}
			
		}
	}
		// Equipped Weapon Texture Update
		if (EquippedWeapon1!=nullptr&&EquippedWeapon2!=nullptr&&Inventory!=nullptr)
		{
			EquippedWeapon1->EquippedItemInfo=Inventory->EquippedWeaponInfo;
			EquippedWeapon1->SetEquippedItemThumnail();
			EquippedWeapon2->EquippedItemInfo=Inventory->EquippedWeaponInfo;
			EquippedWeapon2->SetEquippedItemThumnail();
			
		}
		// add armor and make function all of this 

}

