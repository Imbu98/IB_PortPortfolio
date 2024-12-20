#include "W_Slot.h"
#include "Kismet\KismetTextLibrary.h"
#include "Kismet/GameplayStatics.h"
#include "../IB_Framework/IB_PlayerController.h"
#include "../Components/InventoryComponent.h"
#include "../Item/ItemStructure.h"
#include "../Character/IBCharBase.h"
#include "W_Inventory.h"
#include "Components\Button.h"
#include "Components/TextBlock.h"
#include "Widgets\Images\SImage.h"



void UW_Slot::NativePreConstruct()
{
	if (ItemImage!=nullptr &&Item.Thumnail != nullptr)
	{
		ItemImage->SetBrushFromTexture(Item.Thumnail, false);
	}
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
}

void UW_Slot::NativeConstruct()
{
	Super::NativeConstruct();
	
	// 중복 바인딩 방지
	if (ItemSlot)
	{
		// 바인딩 제거후 
		ItemSlot->OnClicked.RemoveDynamic(this, &UW_Slot::OnButtonClicked);

		// 다시 바인딩
		ItemSlot->OnClicked.AddDynamic(this, &UW_Slot::OnButtonClicked);
	}
	
	
}

void UW_Slot::OnButtonClicked()
{
	
	FText TextItemQuantity = UKismetTextLibrary::Conv_IntToText(Item.ItemQuantity);
	FString StringItemQuantity = TextItemQuantity.ToString();
	GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Red, FString::Printf(TEXT("%s"), *StringItemQuantity));

	AIBCharBase* PlayerCharacter = Cast<AIBCharBase>(UGameplayStatics::GetPlayerCharacter(GetWorld(), 0));
	InventoryComponent = PlayerCharacter->InventoryComponent;
	W_Inventory = InventoryComponent->PlayerInventory;

	PlayerCharacter->Equip(InventoryComponent->Items[Index].WeaponNumber,PlayerCharacter);

	ClearSlot();
	W_Inventory->LoadInventory(InventoryComponent);
	
	

}

void UW_Slot::ClearSlot()
{
	FItemStruct& InventoryItem = InventoryComponent->Items[Index];

	if (InventoryItem.ItemQuantity > 1)
	{
		InventoryItem.ItemQuantity -= 1;
	}
	else
	{
		// 슬롯 인덱스에 해당하는 인벤토리컴포넌트의 아이템 배열의 아이템 초기화
		InventoryItem.ItemName = FText::FromString(TEXT(""));
		InventoryItem.Stackable = false;
		InventoryItem.ItemQuantity = 0;
		InventoryItem.Thumnail = nullptr;
		InventoryItem.Mesh = nullptr;
		InventoryItem.WeaponNumber = 0;
	}

}
