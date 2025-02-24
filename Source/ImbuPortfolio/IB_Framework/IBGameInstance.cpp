#include "IBGameInstance.h"

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
	}
	else
	{
		LoadGame();
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
		IBSaveGame->SavedInventoryGold=IGI_InventoryGold;
		IBSaveGame->SavedDungeonClearCount=IGI_DungeonCurrentClearCount;
		IBSaveGame->SavedDungeonTicket=IGI_DungeonTicket;
		
		UGameplayStatics::SaveGameToSlot(IBSaveGame, "Save1", 0);
	}
	
}

void UIBGameInstance::LoadItems()
{
	if (IBSaveGame != nullptr)
	{
		IGI_InventoryItem = IBSaveGame->SavedInventoryInfo;
		IGI_EquippedWeapon=IBSaveGame->SavedEquippedWeapon;
		IGI_InventoryGold=IBSaveGame->SavedInventoryGold;
		IGI_DungeonCurrentClearCount = IBSaveGame->SavedDungeonClearCount;
		IGI_DungeonTicket=IBSaveGame->SavedDungeonTicket;
		
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

