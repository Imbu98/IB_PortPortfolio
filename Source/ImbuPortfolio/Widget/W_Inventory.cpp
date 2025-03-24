#include "W_Inventory.h"
#include "Components\WrapBox.h"
#include "Components/Image.h"
#include "Components/TextBlock.h"
#include "W_EquippedSlot.h"
#include "W_InventoryItem.h"
#include "../Components/InventoryComponent.h"
#include "W_Slot.h"
#include "Components/Button.h"
#include "ImbuPortfolio/Character/IBCharBase.h"
#include "ImbuPortfolio/Components/CombatComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetTextLibrary.h"

class AIBCharBase;

void UW_Inventory::NativeConstruct()
{
	Super::NativeConstruct();

	if (EquippedArmor_Head)
	{
		EquippedArmor_Head->EquippedItemSlot->OnClicked.Clear();
		EquippedArmor_Head->EquippedItemSlot->OnClicked.AddDynamic(this,&ThisClass::UnEquipHelmet);
	}
	if (EquippedWeapon1)
	{
		EquippedWeapon1->EquippedItemSlot->OnClicked.Clear();
		EquippedWeapon1->EquippedItemSlot->OnClicked.AddDynamic(this,&ThisClass::UnEquipWeapon);
	}
	if (EquippedWeapon2)
	{
		EquippedWeapon2->EquippedItemSlot->OnClicked.Clear();
		EquippedWeapon2->EquippedItemSlot->OnClicked.AddDynamic(this,&ThisClass::UnEquipWeapon);
	}
	
	if (WBP_ItemInfo)
	{
		WBP_ItemInfo->SetVisibility(ESlateVisibility::Collapsed);
	}

	if (InventoryItem)
	{
		InventoryItem->SlotDelegate.BindUObject(this,&ThisClass::OnEquip);
	}
	
	AIBCharBase* PlayerCharacter = Cast<AIBCharBase>(UGameplayStatics::GetPlayerCharacter(GetWorld(), 0));
	if (PlayerCharacter)
	{
		InventoryComponent = PlayerCharacter->InventoryComponents;
	}
	
}


void UW_Inventory::LoadInventory(UInventoryComponent* Inventory)
{
	//Inventory->InventoryWeightAmount=0;
	if (InventoryItem)
	{
		InventoryItem->UpdateInventory(Inventory);
	}
	// if (InventoryWrapBox==nullptr)
	// {
	// 	return;
	// }
	// InventoryWrapBox->ClearChildren();
	//
	// if (ItemSlotWidgetClass != nullptr&& Inventory!=nullptr)
	// {
	// 	for (int ArrayIndex = 0; ArrayIndex < Inventory->Items.Num(); ArrayIndex++)
	// 	{
	// 		UUserWidget* ItemSlotWidget = CreateWidget(this, ItemSlotWidgetClass);
	// 		UW_Slot* ItemSlot = Cast<UW_Slot>(ItemSlotWidget);
	// 		if (ItemSlot)
	// 		{
	// 			ItemSlot->Index = ArrayIndex;
	// 			ItemSlot->InventoryComponent = Inventory;
	// 			ItemSlot->Item = Inventory->Items[ArrayIndex];
	//
	// 			Inventory->InventoryWeightAmount+=Inventory->Items[ArrayIndex].Weight;
	// 			
	// 			InventoryWrapBox->AddChild(ItemSlot);
	// 		}
	// 	}
	// }
		// Equipped Weapon Texture Update
		if (EquippedWeapon1!=nullptr&&EquippedWeapon2!=nullptr&&EquippedArmor_Head!=nullptr&&Inventory!=nullptr)
		{
			EquippedWeapon1->EquippedItemInfo=Inventory->EquippedWeaponInfo;
			EquippedWeapon1->SetEquippedItemThumnail();
			EquippedWeapon2->EquippedItemInfo=Inventory->EquippedWeaponInfo;
			EquippedWeapon2->SetEquippedItemThumnail();
			
			EquippedArmor_Head->EquippedItemInfo=Inventory->EquippedHelmetInfo;
			EquippedArmor_Head->SetEquippedItemThumnail();

			// add equippedweapon weight
			Inventory->InventoryWeightAmount+=EquippedWeapon1->EquippedItemInfo.Weight;
			Inventory->InventoryWeightAmount+=EquippedArmor_Head->EquippedItemInfo.Weight;
		}
		// add armor and make function all of this


		//
	if (T_GoldAmount)
	{
		FString GoldAmountString = FString::Printf(TEXT("%.0fG"), Inventory->InventoryGoldAmount);
		FText GoldAmountText = FText::FromString(GoldAmountString);
		T_GoldAmount->SetText(GoldAmountText);
	}
	if (T_WeightAmount)
	{
		FString WeightAmount = FString::Printf(TEXT("%.0fKG"), Inventory->InventoryWeightAmount);
		FText WeightAmountText = FText::FromString(WeightAmount);
		T_WeightAmount->SetText(WeightAmountText);
	}
	

}

void UW_Inventory::UnEquipWeapon()
{
	// 장착 해체를 의미, 다시 인벤토리에 넣어주어야 함
	AIBCharBase* PlayerCharacter = Cast<AIBCharBase>(UGameplayStatics::GetPlayerCharacter(GetWorld(), 0));
	if (PlayerCharacter==nullptr)
	{
		return;
	}

	
	UCombatComponent* CombatComponent =PlayerCharacter->CombatComponent;
	//InventoryComponent = PlayerCharacter->InventoryComponents;
	
	// 이 아래로는 나중에 방어구 등을 추가하면 따로 함수를 만들어 무기와 방어구 해제를 한번에 관리하기
		if (CombatComponent!=nullptr)
		{
			CombatComponent->MainWeapon=nullptr;
		}
	
		if (InventoryComponent!=nullptr)
		{
			InventoryComponent->UnEquipWeapon();
			UW_Inventory* W_Inventory= InventoryComponent->PlayerInventory;
			if (W_Inventory!=nullptr)
			{
				EquippedWeapon1->ClearSlot();
				EquippedWeapon2->ClearSlot();
				W_Inventory->LoadInventory(InventoryComponent);
			}
		}
}


void UW_Inventory::UnEquipHelmet()
{
	AIBCharBase* PlayerCharacter = Cast<AIBCharBase>(UGameplayStatics::GetPlayerCharacter(GetWorld(), 0));
	if (PlayerCharacter==nullptr)
	{
		return;
	}
	UCombatComponent* CombatComponent =PlayerCharacter->CombatComponent;
	//InventoryComponent = PlayerCharacter->InventoryComponents;
	if (InventoryComponent!=nullptr)
	{
		InventoryComponent->UnEquipHelmet();
		UW_Inventory* W_Inventory= InventoryComponent->PlayerInventory;
		if (W_Inventory!=nullptr)
		{
			EquippedArmor_Head->ClearSlot();
			W_Inventory->LoadInventory(InventoryComponent);
		}
		
		
	}
}

void UW_Inventory::OnEquip(UW_Slot* SlotWidget)
{
	if (SlotWidget==nullptr)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Red, "SlotWidget is null");
		return;
	}
	FItemStruct Item = SlotWidget->Item;
	
	FText TextItemQuantity = UKismetTextLibrary::Conv_IntToText(Item.ItemQuantity);
	FString StringItemQuantity = TextItemQuantity.ToString();

	AIBCharBase* PlayerCharacter = Cast<AIBCharBase>(UGameplayStatics::GetPlayerCharacter(GetWorld(), 0));
	if (PlayerCharacter == nullptr)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Red, "PlayerCharacter is null");
		return;
	}
	
	InventoryComponent = PlayerCharacter->InventoryComponents;
	
	if (InventoryComponent==nullptr)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Red, "InventoryComponent is null");
		return;
	}

	if (Item.ItemType==E_ItemType::Weapon||Item.ItemType==E_ItemType::Armor)
	{
		PlayerCharacter->Equip(Item, PlayerCharacter);
	}
	
	SlotWidget->ClearSlot();
	LoadInventory(InventoryComponent);
	InventoryComponent->OnInventoryUpdate.Broadcast();
}


