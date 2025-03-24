#include "W_UpgradeItem.h"

#include "Components/Button.h"
#include "Components/Image.h"
#include "ImbuPortfolio/Character/IBCharBase.h"
#include "Kismet/GameplayStatics.h"

void UW_UpgradeItem::NativeConstruct()
{
	Super::NativeConstruct();

	if (InventoryItem)
	{
		InventoryItem->SlotDelegate.BindUObject(this,&ThisClass::UpdateSlot);
	}

	if (BTN_UpgradeBtn)
	{
		BTN_UpgradeBtn->OnClicked.Clear();
		BTN_UpgradeBtn->OnClicked.AddDynamic(this,&ThisClass::UpgradeItem);
	}
}

void UW_UpgradeItem::NativeDestruct()
{
	Super::NativeDestruct();

	if (InventoryItem)
	{
		InventoryItem->SlotDelegate.Unbind();
	}
}

void UW_UpgradeItem::UpgradeItem()
{
	AIBCharBase* IBChar = Cast<AIBCharBase>(UGameplayStatics::GetPlayerCharacter(GetWorld(),0));
	if (IBChar&&IBChar->InventoryComponents)
	{
		UInventoryComponent* InventoryComponent= IBChar->InventoryComponents;
		if (InventoryComponent==nullptr)
		{
			return;
		}
		InventoryComponent->Items[InventorySlotIndex].Reset();
		if (InventoryItem)
		{
			InventoryItem->UpdateInventory(InventoryComponent);
		}
	}
	
}

void UW_UpgradeItem::UpdateSlot(UW_Slot* InventorySlot)
{
	InventorySlotIndex=InventorySlot->Index;
	UpgradeReadyItemInfo = InventorySlot->Item;
	
	if (UpgradeReadyItemSlot)
	{
		UpgradeReadyItemSlot->ItemImage->SetBrushFromTexture(UpgradeReadyItemInfo.Thumnail);
	}
}
