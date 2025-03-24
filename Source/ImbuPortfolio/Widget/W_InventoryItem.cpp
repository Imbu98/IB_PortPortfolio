#include "W_InventoryItem.h"

#include "W_Slot.h"
#include "Components/Button.h"

void UW_InventoryItem::NativeConstruct()
{
	Super::NativeConstruct();
	
	
}

void UW_InventoryItem::NativeDestruct()
{
	Super::NativeDestruct();

	SlotDelegate.Unbind();
}

void UW_InventoryItem::UpdateInventory(UInventoryComponent* Inventory)
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
				
				ItemSlot->InventorySlotDelegate.BindUObject(this, &ThisClass::OnSlotClicked);

				Inventory->InventoryWeightAmount+=Inventory->Items[ArrayIndex].Weight;
				
				InventoryWrapBox->AddChild(ItemSlot);
			}
		}
	}
}

void UW_InventoryItem::OnSlotClicked(UW_Slot* SlotWidget)
{
	if (SlotWidget&&SlotDelegate.IsBound())
	{
		SlotDelegate.Execute(SlotWidget);
	}
}