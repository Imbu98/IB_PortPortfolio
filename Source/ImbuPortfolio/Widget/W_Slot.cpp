#include "W_Slot.h"
#include "Kismet\KismetTextLibrary.h"
#include "Kismet/GameplayStatics.h"
#include "../IB_Framework/IB_PlayerController.h"
#include "../Components/InventoryComponent.h"
#include "../Item/ItemStructure.h"
#include "../Character/IBCharBase.h"
#include "W_Inventory.h"
#include "Components/Image.h"
#include "Components\Button.h"
#include "Components/TextBlock.h"
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
		
		ItemSlot->OnClicked.RemoveDynamic(this, &UW_Slot::OnButtonClicked);

		
		ItemSlot->OnClicked.AddDynamic(this, &UW_Slot::OnButtonClicked);
	}
}

void UW_Slot::OnButtonClicked()
{
	FText TextItemQuantity = UKismetTextLibrary::Conv_IntToText(Item.ItemQuantity);
	FString StringItemQuantity = TextItemQuantity.ToString();

	AIBCharBase* PlayerCharacter = Cast<AIBCharBase>(UGameplayStatics::GetPlayerCharacter(GetWorld(), 0));
	if (PlayerCharacter == nullptr)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Red, "PlayerCharacter is null");
		return;
	}
	
	InventoryComponent = PlayerCharacter->InventoryComponent;
	
	if (InventoryComponent==nullptr)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Red, "InventoryComponent is null");
		return;
	}
	
	W_Inventory = InventoryComponent->PlayerInventory;

	if (Item.ItemType==E_ItemType::Weapon)
	{
		PlayerCharacter->Equip(InventoryComponent->Items[Index].WeaponNumber, PlayerCharacter);

	}
	
	ClearSlot();
	W_Inventory->LoadInventory(InventoryComponent);
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
			}
		}
	}
}
