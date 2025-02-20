#include "W_Inventory.h"
#include "Components\WrapBox.h"
#include "Components/Image.h"
#include "Components/TextBlock.h"
#include "W_EquippedSlot.h"
#include "../Components/InventoryComponent.h"
#include "W_Slot.h"
#include "Kismet/KismetTextLibrary.h"

void UW_Inventory::LoadInventory(UInventoryComponent* Inventory)
{
	Inventory->InventoryWeightAmount=0;
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

				Inventory->InventoryWeightAmount+=Inventory->Items[ArrayIndex].Weight;
				
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

			// add equippedweapon weight
			Inventory->InventoryWeightAmount+=EquippedWeapon1->EquippedItemInfo.Weight;
		}
		// add armor and make function all of this


		//
	if (T_GoldAmount)
	{
		FText GoldAmountText = UKismetTextLibrary::Conv_DoubleToText(Inventory->InventoryGoldAmount,HalfToEven);
		T_GoldAmount->SetText(GoldAmountText);
	}
	if (T_WeightAmount)
	{
		FText TextAmountText = UKismetTextLibrary::Conv_DoubleToText(Inventory->InventoryWeightAmount,HalfToEven);
		T_WeightAmount->SetText(TextAmountText);
	}
	

}

