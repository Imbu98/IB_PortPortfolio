#include "W_UpgradeInventory.h"

#include "W_Inventory.h"
#include "../Components/StateComponent.h"
#include "Components/Button.h"
#include "Components/TextBlock.h"
#include "ImbuPortfolio/Character/IBCharBase.h"
#include "ImbuPortfolio/Components/InventoryComponent.h"
#include "Kismet/GameplayStatics.h"

void UW_UpgradeInventory::NativeConstruct()
{
	Super::NativeConstruct();

	IBChar =Cast<AIBCharBase>(UGameplayStatics::GetPlayerCharacter(GetWorld(), 0));
	
	InventoryComponent = IBChar->InventoryComponents;

	UpdateGoldAmount();

	UIBGameInstance* IBGameInstance = Cast<UIBGameInstance>( GetWorld()->GetGameInstance());
	if (IBGameInstance!=nullptr)
	{
		if (IBGameInstance->IBSaveGame==nullptr)
		{
			GEngine->AddOnScreenDebugMessage(-1,1.0f,FColor::Red,TEXT("[UInventoryComponent::SaveInventory] : IBSaveGame Is Nullptr"));
			return;
		}
	}
	UpgradeCost = IBGameInstance->IGI_UpgradeInventoryCost;
	
	if (BTN_Close)
	{
		BTN_Close->OnClicked.Clear();
		BTN_Close->OnClicked.AddDynamic(this,&ThisClass::CloseWidget);
	}
	if (BTN_UpgradeInventory)
	{
		BTN_UpgradeInventory->OnClicked.Clear();
		BTN_UpgradeInventory->OnClicked.AddDynamic(this,&ThisClass::UpgradeInventory);
	}
	
}

void UW_UpgradeInventory::UpdateGoldAmount()
{
	if (IBChar==nullptr)
	{
		return;
	}
	if (InventoryComponent==nullptr)
	{
		return;
	}
	
	if (TXT_UpgradeInventoryGoldAmount)
	{
		FString CostAmountString = FString::Printf(TEXT("%.0fG"), UpgradeCost);
		FText CostAmountText = FText::FromString(CostAmountString);
		TXT_UpgradeInventoryGoldAmount->SetText(CostAmountText);
	}
	if (TXT_InventoryGold)
	{
		FString InventoryGoldAmountString = FString::Printf(TEXT("%.0fG"), InventoryComponent->InventoryGoldAmount);
		FText InventoryGoldText = FText::FromString(InventoryGoldAmountString);
		TXT_InventoryGold->SetText(InventoryGoldText);
	}
}

void UW_UpgradeInventory::CloseWidget()
{
	IBChar =Cast<AIBCharBase>( GetOwningPlayer()->GetCharacter());
	if (IBChar!=nullptr)
	{
		IBChar->StateComponent->SetState(TAG_StatusIdle);
		GetOwningPlayer()->bShowMouseCursor=false;
		RemoveFromParent();
	}
	
}

void UW_UpgradeInventory::UpgradeInventory()
{
	
	if (IBChar==nullptr)
	{
		return;
	}
	if (InventoryComponent==nullptr)
	{
		return;
	}
	UIBGameInstance* IBGameInstance = Cast<UIBGameInstance>( GetWorld()->GetGameInstance());
	if (IBGameInstance!=nullptr)
	{
		if (IBGameInstance->IBSaveGame==nullptr)
		{
			GEngine->AddOnScreenDebugMessage(-1,1.0f,FColor::Red,TEXT("[UInventoryComponent::SaveInventory] : IBSaveGame Is Nullptr"));
			return;
		}
	}
		
	
	if (InventoryComponent->InventoryGoldAmount>=UpgradeCost)
	{
		IBChar->InventoryComponents->InventorySize+=5;
		IBChar->InventoryComponents->InventoryGoldAmount-=UpgradeCost;
		UpgradeCost+=500;
		IBGameInstance->IGI_UpgradeInventoryCost = UpgradeCost;
		IBChar->InventoryComponents->UpdateInventorySize();
		UpdateGoldAmount();
	}
	
}
