#include "IBGameInstance.h"

#include "ImbuPortfolio/Character/IBCharBase.h"
#include "ImbuPortfolio/Components/InventoryComponent.h"
#include "Kismet/GameplayStatics.h"

UIBGameInstance::UIBGameInstance()
{
	
}

void UIBGameInstance::Init()
{
	Super::Init();

	if(!UGameplayStatics::DoesSaveGameExist("Save1",0))
	{
		CreateSaveFile();
		IGI_Initialize();
		
	}
	else
	{
		//LoadGame();
	}
}

void UIBGameInstance::Shutdown()
{
	Super::Shutdown();
	
	if(!UGameplayStatics::DoesSaveGameExist("Save1",0))
	{
		CreateSaveFile();
		SaveGame();
	}
	else
	{
		
		SaveGame();
	}
	
}

void UIBGameInstance::CreateSaveFile()
{
	FScopeLock Lock(&SaveLoadLock);
	IBSaveGame = Cast<UIBSaveGame>(UGameplayStatics::CreateSaveGameObject(UIBSaveGame::StaticClass()));
	UGameplayStatics::SaveGameToSlot(IBSaveGame, "Save1", 0);
}

void UIBGameInstance::SaveGame()
{
	FScopeLock Lock(&SaveLoadLock);
	IBSaveGame = Cast<UIBSaveGame>(UGameplayStatics::LoadGameFromSlot("Save1", 0));

	if (IBSaveGame!=nullptr)
	{
		SaveItems();
	}
	
	
	if(!UGameplayStatics::DoesSaveGameExist("Save1",0))
	{
		CreateSaveFile();
	}
}

void UIBGameInstance::LoadGame()
{
	IBSaveGame = Cast<UIBSaveGame>(UGameplayStatics::LoadGameFromSlot("Save1", 0));
	FScopeLock Lock(&SaveLoadLock);
	if (IBSaveGame != nullptr)
	{
		LoadItems();
		
	}
	else if (!UGameplayStatics::DoesSaveGameExist("Save1", 0))
	{
		CreateSaveFile();
	}
}

void UIBGameInstance::SaveItems()
{
	if (IBSaveGame != nullptr)
	{
		IBSaveGame->SavedInventoryInfo = IGI_InventoryItem;
		IBSaveGame->SavedEquippedWeapon=IGI_EquippedWeapon;
		IBSaveGame->SavedInventorySize =IGI_InventorySize;
		IBSaveGame->SavedInventoryGold=IGI_InventoryGold;
		IBSaveGame->SavedUpgradeInventoryCost=IGI_UpgradeInventoryCost;
		
		IBSaveGame->SavedDungeonClearCount=IGI_DungeonCurrentClearCount;
		IBSaveGame->SavedDungeonTicket=IGI_DungeonTicket;
		IBSaveGame->SavedIsClearCaveRuins=IGI_IsClearCaveRuins;
		IBSaveGame->SavedIsClearTempleDragon=IGI_IsClearTempleDragon;
		IBSaveGame->SavedAngerGauge=IGI_AngerGauge;
		
		UGameplayStatics::SaveGameToSlot(IBSaveGame, "Save1", 0);
	}
	
}

void UIBGameInstance::LoadItems()
{
	if (IBSaveGame != nullptr)
	{
		IGI_InventoryItem.Empty();
		IGI_InventoryItem = IBSaveGame->SavedInventoryInfo;
		IGI_EquippedWeapon=IBSaveGame->SavedEquippedWeapon;
		IGI_InventorySize=IBSaveGame->SavedInventorySize;
		IGI_InventoryGold=IBSaveGame->SavedInventoryGold;
		
		IGI_DungeonCurrentClearCount = IBSaveGame->SavedDungeonClearCount;
		IGI_DungeonTicket=IBSaveGame->SavedDungeonTicket;
		IGI_UpgradeInventoryCost=IBSaveGame->SavedUpgradeInventoryCost;
		
		IGI_AngerGauge=IBSaveGame->SavedAngerGauge;
		IGI_IsClearCaveRuins=IBSaveGame->SavedIsClearCaveRuins;
		IGI_IsClearTempleDragon=IBSaveGame->SavedIsClearTempleDragon;
		
		
	}
}

void UIBGameInstance::IncreaseDungeonClearCounting()
{
	IGI_DungeonCurrentClearCount++;
	if (IGI_DungeonCurrentClearCount==IGI_DungeonMaxClearCount)
	{
		IGI_DungeonTicket++;
		IGI_DungeonCurrentClearCount=0;
	}
}

void UIBGameInstance::IGI_Initialize()
{
	AIBCharBase* IBChar = Cast<AIBCharBase>(UGameplayStatics::GetPlayerCharacter(GetWorld(),0));
	
	if (IBChar==nullptr)
	{
		return;
	}
	if (IBChar->InventoryComponents==nullptr)
	{
		return;
	}

	IGI_InventorySize=5;
	
	IGI_InventoryItem.SetNum(IGI_InventorySize);
	
	 for(FItemStruct InventoryItem : IGI_InventoryItem )
	{
		InventoryItem.Reset();
	}
	
	IGI_EquippedWeapon.Reset();
	
	IGI_InventoryGold= 0;
	
	IGI_DungeonCurrentClearCount=0;
	
	IGI_DungeonMaxClearCount=0;
	
	IGI_DungeonTicket=0;

	IGI_UpgradeInventoryCost=500.0f;

	IGI_AngerGauge=0.0f;

	IGI_IsClearCaveRuins=false;

	IGI_IsClearTempleDragon=false;

	IBSaveGame->ISG_Initialize();
}

