#include "W_Inventory.h"
#include "Components\WrapBox.h"
#include "Components/Image.h"
#include "Engine.h"
#include "W_EquippedSlot.h"
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
				// Item, ArrayIndex, Inventorycomponent �ʱ�ȭ ���ֱ�
				ItemSlot->Index = ArrayIndex;
				ItemSlot->InventoryComponent = Inventory;
				ItemSlot->Item = Inventory->Items[ArrayIndex];
				
				
				InventoryWrapBox->AddChild(ItemSlot);
			}
			
		}
		// Equipped Weapon Texture Update
		if (!Inventory->EquippedWeapon.IsEmpty())
		{
			EquippedWeapon1->EquippedItemImage->SetBrushFromTexture(Inventory->EquippedWeapon[0]->ItemInfo.Thumnail);
			EquippedWeapon2->EquippedItemImage->SetBrushFromTexture(Inventory->EquippedWeapon[1]->ItemInfo.Thumnail);
		}
		// add armor and make function all of this 
			
		
	}

	

}
