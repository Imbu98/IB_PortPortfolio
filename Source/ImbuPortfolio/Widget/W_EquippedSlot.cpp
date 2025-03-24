#include "W_EquippedSlot.h"

#include "W_ItemInfo.h"
#include "../Character/IBCharBase.h"
#include "Kismet/GameplayStatics.h"
#include "../Components/InventoryComponent.h"
#include "../Widget/W_Inventory.h"
#include "Components/Image.h"
#include "Components\Button.h"
#include "ImbuPortfolio/Components/CombatComponent.h"

void UW_EquippedSlot::NativePreConstruct()
{
	if (EquippedItemImage)
	{
		EquippedItemImage->SetBrushFromTexture(EquippedItemInfo.Thumnail);
	}
}

void UW_EquippedSlot::NativeConstruct()
{
	Super::NativeConstruct();

	if (EquippedItemSlot)
	{
		
		EquippedItemSlot->OnClicked.RemoveDynamic(this, &UW_EquippedSlot::ButtonOnClicked);
		EquippedItemSlot->OnClicked.AddDynamic(this, &UW_EquippedSlot::ButtonOnClicked);

		EquippedItemSlot->OnHovered.RemoveDynamic(this, &UW_EquippedSlot::ButtonOnHovered);
		EquippedItemSlot->OnHovered.AddDynamic(this, &UW_EquippedSlot::ButtonOnHovered);
		
		EquippedItemSlot->OnUnhovered.RemoveDynamic(this, &UW_EquippedSlot::ButtonOnUnHovered);
		EquippedItemSlot->OnUnhovered.AddDynamic(this, &UW_EquippedSlot::ButtonOnUnHovered);
	}
}

void UW_EquippedSlot::ButtonOnClicked()
{
	
}

void UW_EquippedSlot::ButtonOnHovered()
{
	AIBCharBase* PlayerCharacter = Cast<AIBCharBase>(UGameplayStatics::GetPlayerCharacter(GetWorld(), 0));
	if (PlayerCharacter == nullptr)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Red, "PlayerCharacter is null");
		return;
	}
	
	InventoryComponent = PlayerCharacter->InventoryComponents;
	if (InventoryComponent)
	{
		if (InventoryComponent->PlayerInventory->WBP_ItemInfo)
		{
			if (EquippedItemInfo.ItemQuantity<=0)
			{
				return;
			}
			InventoryComponent->PlayerInventory->WBP_ItemInfo->UpdateItemInfo(EquippedItemInfo);
			InventoryComponent->PlayerInventory->WBP_ItemInfo->SetVisibility(ESlateVisibility::Visible);
		}
	}
}

void UW_EquippedSlot::ButtonOnUnHovered()
{
	AIBCharBase* PlayerCharacter = Cast<AIBCharBase>(UGameplayStatics::GetPlayerCharacter(GetWorld(), 0));
	if (PlayerCharacter == nullptr)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Red, "PlayerCharacter is null");
		return;
	}
	
	InventoryComponent = PlayerCharacter->InventoryComponents;
	if (InventoryComponent)
	{
		if (InventoryComponent->PlayerInventory->WBP_ItemInfo)
		{
			InventoryComponent->PlayerInventory->WBP_ItemInfo->SetVisibility(ESlateVisibility::Collapsed);
		}
	}
}


void UW_EquippedSlot::ClearSlot()
{
	// 각각 무기, 머리, 몸통, 다리에 대한 FItemStruct을 만들어서 따로 관리해줘야 될 것 같음 ( 하나의 배열로 관리하는것이 아니기 때문에)
	if (InventoryComponent!=nullptr)
	{
		InventoryComponent->EquippedWeaponInfo.ItemName = FText::FromString(TEXT(""));
		InventoryComponent->EquippedWeaponInfo.Stackable = false;
		InventoryComponent->EquippedWeaponInfo.ItemQuantity = 0;
		InventoryComponent->EquippedWeaponInfo.Thumnail = nullptr;
		InventoryComponent->EquippedWeaponInfo.Mesh = nullptr;
		InventoryComponent->EquippedWeaponInfo.WeaponNumber = 0;
		InventoryComponent->EquippedWeaponInfo.ItemType=E_ItemType::None;
		InventoryComponent->EquippedWeaponInfo.WeaponType=E_Weapon::None;
		InventoryComponent->EquippedWeaponInfo.ArmorType=E_Armor::None;
		InventoryComponent->EquippedWeaponInfo.ItemRarity=E_ItemRarity::None;
		InventoryComponent->EquippedWeaponInfo.Weight=0;
		InventoryComponent->EquippedWeaponInfo.Damage=0;
	}
}

void UW_EquippedSlot::SetEquippedItemThumnail()
{
	
		EquippedItemImage->SetBrushFromTexture(EquippedItemInfo.Thumnail);
	
}
