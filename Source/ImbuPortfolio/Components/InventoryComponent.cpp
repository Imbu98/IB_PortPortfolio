#include "InventoryComponent.h"
#include "../Character/IBCharBase.h"
#include "../Item/BaseEquippable.h"
#include "../IB_Framework/IB_PlayerController.h"
#include "../Widget/W_Inventory.h"
#include "ImbuPortfolio/IB_Framework/IBGameInstance.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet\KismetArrayLibrary.h"
#include "Kismet/KismetTextLibrary.h"


UInventoryComponent::UInventoryComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
}


void UInventoryComponent::BeginPlay()
{
	Super::BeginPlay();

	LoadInventory();
	
	Items.SetNum(InventorySize);
	
	
	
	

	// InventoryWidget�� LoadInventory�� �� �� �ʿ��� InventoryComponent�� �־��ش�
	AIB_PlayerController* PlayerController = Cast<AIB_PlayerController>(UGameplayStatics::GetPlayerController(GetWorld(), 0));
	PlayerInventory = PlayerController->GetInventoryWidget();
	PlayerInventory->LoadInventory(this);

	OnInventoryUpdate.AddDynamic(this, &UInventoryComponent::SaveInventory);
	
}


void UInventoryComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

}

void UInventoryComponent::UnEquip()
{
	UnEquipWeapon();
}


void UInventoryComponent::ChangeWeapon(ABaseEquippable* MainWeapon)
{
	if (MainWeapon != nullptr)
	{
		
		
		AIB_PlayerController* PlayerController = Cast<AIB_PlayerController>(UGameplayStatics::GetPlayerController(GetWorld(), 0));
		PlayerInventory = PlayerController->GetInventoryWidget();
		PlayerInventory->LoadInventory(this);
	}
}

void UInventoryComponent::InteractionItem(AActor* Actor)
{
	
	if (Actor)
	{
		ABaseEquippable* RootedItem = Cast<ABaseEquippable>(Actor);

		if (RootedItem!=nullptr)
		{
			ItemToInventory(RootedItem);
		
			AIB_PlayerController* PlayerController = Cast<AIB_PlayerController>(UGameplayStatics::GetPlayerController(GetWorld(), 0));
			PlayerInventory = PlayerController->GetInventoryWidget();
			PlayerInventory->LoadInventory(this);
			RootedItem->Destroy();
		}
			
	}
	
}


void UInventoryComponent::ItemToInventory(ABaseEquippable* RootedItem)
{
	if (RootedItem != nullptr)
	{
		for (FItemStruct& InventoryItem : Items)
		{
			bool IsSameItem = UKismetTextLibrary::EqualEqual_TextText(InventoryItem.ItemName, RootedItem->ItemInfo.ItemName);
			bool IsNotFull = (Item.ItemQuantity + RootedItem->ItemInfo.ItemQuantity) <= 64;
			bool IsStackableItem = RootedItem->ItemInfo.Stackable;

			// 같은아이템, 아이템개수가 64개이하, 스택형 아이템일때 
			if (IsSameItem && IsNotFull && IsStackableItem)
			{
				InventoryItem.ItemQuantity += RootedItem->ItemInfo.ItemQuantity;
					
				break;
			}
			else
			{
				
				if (InventoryItem.ItemQuantity == 0)
				{
					InventoryItem = RootedItem->ItemInfo;
					break;
				}

			}
		}
		OnInventoryUpdate.Broadcast();
	}
}

void UInventoryComponent::SaveInventory()
{
	UIBGameInstance* IBGameInstance = Cast<UIBGameInstance>( GetWorld()->GetGameInstance());
	if (IBGameInstance!=nullptr)
	{
		if (IBGameInstance->IBSaveGame==nullptr)
		{
			GEngine->AddOnScreenDebugMessage(-1,1.0f,FColor::Red,TEXT("[UInventoryComponent::SaveInventory] : IBSaveGame Is Nullptr"));
			return;
		}
		IBGameInstance->IGI_InventoryItem = Items;
		IBGameInstance->IGI_EquippedWeapon=EquippedWeaponInfo;
		IBGameInstance->IGI_InventoryGold=InventoryGoldAmount;
		
		IBGameInstance->SaveGame();
		
	}
}

void UInventoryComponent::LoadInventory()
{
	UIBGameInstance* IBGameInstance = Cast<UIBGameInstance>( GetWorld()->GetGameInstance());
	if (IBGameInstance!=nullptr)
	{
		if (IBGameInstance->IBSaveGame==nullptr)
		{
			GEngine->AddOnScreenDebugMessage(-1,1.0f,FColor::Red,TEXT("[UInventoryComponent::SaveInventory] : IBSaveGame Is Nullptr"));
			return;
		}
		if (IBGameInstance->IsNewGame==true)
		{
			IBGameInstance->IGI_Initialize();
			IBGameInstance->IBSaveGame->ISG_Initialize();
			IBGameInstance->IsNewGame = false;
		}
		
		Items=IBGameInstance->IGI_InventoryItem;
		EquippedWeaponInfo=IBGameInstance->IGI_EquippedWeapon;
		InventoryGoldAmount=IBGameInstance->IGI_InventoryGold;
		
	}
}

void UInventoryComponent::GetGold(float Gold)
{
	InventoryGoldAmount+=Gold;
	PlayerInventory->LoadInventory(this);
	OnInventoryUpdate.Broadcast();
	
}

void UInventoryComponent::UnEquipWeapon()
{
	if (EquippedWeapon.IsEmpty())
	{
		return;
	}
	
	TArray<ABaseEquippable*> WeaponsToDestroy = EquippedWeapon;
	
	for (ABaseEquippable* Equipable : WeaponsToDestroy)
	{
		if (Equipable)
		{
			Equipable->Destroy();
		}
	}
	
	if (EquippedWeapon[RetrieveWeaponIndex]!=nullptr)
	{
		ItemToInventory(EquippedWeapon[RetrieveWeaponIndex]);
	}
	AIBCharBase* IBChar = Cast<AIBCharBase>(GetOwner());
	if (IBChar!=nullptr)
	{
		IBChar->UnEquip();
	}
	
	EquippedWeapon.Empty();
	EquippedWeaponInfo.Reset();

	OnInventoryUpdate.Broadcast();
	
	
}

void UInventoryComponent::UnEquipHelmet()
{
	if (!EquippedHelmet)
	{
		return;
	}
	
	if (EquippedHelmet)
	{
		EquippedHelmet->Destroy();
		ItemToInventory(EquippedHelmet);
	}
	
	EquippedHelmet=nullptr;
	EquippedHelmetInfo.Reset();

	OnInventoryUpdate.Broadcast();
	
}

void UInventoryComponent::UnEquipMiddle()
{
}

void UInventoryComponent::UnEquipBottmo()
{
}
