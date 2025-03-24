#include "W_Slot.h"
#include "Kismet\KismetTextLibrary.h"
#include "Kismet/GameplayStatics.h"
#include "../IB_Framework/IB_PlayerController.h"
#include "../Components/InventoryComponent.h"
#include "../Structure/ItemStructure.h"
#include "../Character/IBCharBase.h"
#include "W_Inventory.h"
#include "Blueprint/WidgetBlueprintLibrary.h"
#include "Components/Image.h"
#include "Components\Button.h"
#include "Components/TextBlock.h"
#include "Kismet/KismetInputLibrary.h"
#include "Widgets\Images\SImage.h"


void UW_Slot::NativePreConstruct()
{
	FText TextItemQuantity = FText::AsNumber(Item.ItemQuantity);


	ItemQuantity->SetText(TextItemQuantity);
	if (Item.ItemQuantity > 1)
	{
		ItemQuantity->SetVisibility(ESlateVisibility::Visible);
	}
	else
	{
		ItemQuantity->SetVisibility(ESlateVisibility::Hidden);
	}
		if (ItemImage != nullptr )
		{
			if (Item.Thumnail == nullptr)
			{
				return;
			}
			else if (Item.Thumnail != nullptr)
			{
				ItemImage->SetBrushFromTexture(Item.Thumnail, false);
			}
			
		}
}

void UW_Slot::NativeConstruct()
{
	Super::NativeConstruct();

	
	if (ItemSlot)
	{
	
		ItemSlot->OnHovered.Clear();
		ItemSlot->OnHovered.AddDynamic(this,&UW_Slot::OnButtonHovered);

		ItemSlot->OnUnhovered.Clear();
		ItemSlot->OnUnhovered.AddDynamic(this,&UW_Slot::OnButtonUnHovered);
	}
	
	if (ItemSlot)
	{
		ItemSlot->OnClicked.RemoveDynamic(this, &UW_Slot::OnButtonClicked);
		ItemSlot->OnClicked.AddDynamic(this,&UW_Slot::OnButtonClicked);
	}
}

void UW_Slot::NativeDestruct()
{
	Super::NativeDestruct();

	if (InventorySlotDelegate.IsBound())
	{
		InventorySlotDelegate.Unbind();
	}
	
}

void UW_Slot::OnButtonClicked()
{
	// 
	//if ()
	// OnEquip();
	// else
	// {
	// 	OnUpgradeSlot();
	// }
	if (InventorySlotDelegate.IsBound())
	{
		InventorySlotDelegate.Execute(this);
	}
	
}

void UW_Slot::OnButtonHovered()
{
	if (InventoryComponent)
	{
		if (InventoryComponent->PlayerInventory->WBP_ItemInfo)
		{
			if (Item.ItemQuantity<=0)
			{
				return;
			}
			InventoryComponent->PlayerInventory->WBP_ItemInfo->UpdateItemInfo(Item);
			InventoryComponent->PlayerInventory->WBP_ItemInfo->SetVisibility(ESlateVisibility::Visible);
		}
	}
}

void UW_Slot::OnButtonUnHovered()
{
	
	if (InventoryComponent)
	{
		if (InventoryComponent->PlayerInventory->WBP_ItemInfo)
		{
			InventoryComponent->PlayerInventory->WBP_ItemInfo->SetVisibility(ESlateVisibility::Collapsed);
		}
	}
}

void UW_Slot::ClearSlot()
{
	if (InventoryComponent!=nullptr)
	{
		FItemStruct& InventoryItem = InventoryComponent->Items[Index];
		if (InventoryItem.WeaponNumber != 0)
		{

			if (InventoryItem.ItemQuantity > 1)
			{
				InventoryItem.ItemQuantity -= 1;
			}
			else
			{
			
				InventoryItem.ItemName = FText::FromString(TEXT(""));
				InventoryItem.Stackable = false;
				InventoryItem.ItemQuantity = 0;
				InventoryItem.Thumnail = nullptr;
				InventoryItem.Mesh = nullptr;
				InventoryItem.WeaponNumber = 0;
				InventoryItem.ItemType=E_ItemType::None;
				InventoryItem.WeaponType=E_Weapon::None;
				InventoryItem.ItemRarity=E_ItemRarity::None;
				InventoryItem.Weight=0;
				InventoryItem.Damage=0;
			}
		}
	}
}

void UW_Slot::OnEquip()
{
	// FText TextItemQuantity = UKismetTextLibrary::Conv_IntToText(Item.ItemQuantity);
	// FString StringItemQuantity = TextItemQuantity.ToString();
	//
	// AIBCharBase* PlayerCharacter = Cast<AIBCharBase>(UGameplayStatics::GetPlayerCharacter(GetWorld(), 0));
	// if (PlayerCharacter == nullptr)
	// {
	// 	GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Red, "PlayerCharacter is null");
	// 	return;
	// }
	//
	// InventoryComponent = PlayerCharacter->InventoryComponents;
	//
	// if (InventoryComponent==nullptr)
	// {
	// 	GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Red, "InventoryComponent is null");
	// 	return;
	// }
	//
	// W_Inventory = InventoryComponent->PlayerInventory;
	//
	// if (W_Inventory==nullptr)
	// {
	// 	GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Red, "W_Inventory is null");
	// 	return;
	// }
	//
	// if (Item.ItemType==E_ItemType::Weapon||Item.ItemType==E_ItemType::Armor)
	// {
	// 	PlayerCharacter->Equip(Item, PlayerCharacter);
	// }
	//
	// ClearSlot();
	// W_Inventory->LoadInventory(InventoryComponent);
	// InventoryComponent->OnInventoryUpdate.Broadcast();
}

void UW_Slot::OnUpgradeSlot()
{
}

FEventReply UW_Slot::OnMouseButtonDown(FGeometry const& MyGeometry, FPointerEvent const& MouseEvent)
{
	if (MouseEvent.GetEffectingButton() == EKeys::LeftMouseButton)
	{
		GEngine->AddOnScreenDebugMessage(-1,1.0f,FColor::Yellow,"Clicked");
		return UWidgetBlueprintLibrary::Handled();
	}
	else if (MouseEvent.GetEffectingButton() == EKeys::RightMouseButton)
	{
		UE_LOG(LogTemp, Log, TEXT("Right Mouse Button Down"));
		return UWidgetBlueprintLibrary::Handled();
	}

	return Super::OnMouseButtonDown(MyGeometry, MouseEvent);
}
