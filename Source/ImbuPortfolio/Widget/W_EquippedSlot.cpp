#include "W_EquippedSlot.h"
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
	}
}

void UW_EquippedSlot::ButtonOnClicked()
{
	// 장착 해체를 의미, 다시 인벤토리에 넣어주어야 함
	
	
	AIBCharBase* PlayerCharacter = Cast<AIBCharBase>(UGameplayStatics::GetPlayerCharacter(GetWorld(), 0));
	if (PlayerCharacter==nullptr)
	{
		return;
	}

	
	UCombatComponent* CombatComponent =PlayerCharacter->CombatComponent;
	
	InventoryComponent = PlayerCharacter->InventoryComponent;


	// 이 아래로는 나중에 방어구 등을 추가하면 따로 함수를 만들어 무기와 방어구 해제를 한번에 관리하기 
	if (CombatComponent!=nullptr)
	{
		CombatComponent->MainWeapon=nullptr;
	}
	
	if (InventoryComponent!=nullptr)
	{
		InventoryComponent->UnEquip();
		UW_Inventory* W_Inventory= InventoryComponent->PlayerInventory;
		if (W_Inventory!=nullptr)
		{
			ClearSlot();
			W_Inventory->LoadInventory(InventoryComponent);
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
	}
}

void UW_EquippedSlot::SetEquippedItemThumnail()
{
	
		EquippedItemImage->SetBrushFromTexture(EquippedItemInfo.Thumnail);
	
}
