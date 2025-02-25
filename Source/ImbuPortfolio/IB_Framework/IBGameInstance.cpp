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
		IGI_Initialize();
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
		IBSaveGame->SavedInventorySize =IGI_InventorySize;
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
		IGI_InventoryItem.Empty();
		IGI_InventoryItem = IBSaveGame->SavedInventoryInfo;
		IGI_EquippedWeapon=IBSaveGame->SavedEquippedWeapon;
		IGI_InventorySize=IBSaveGame->SavedInventorySize;
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
	IGI_InventoryItem.SetNum(IBChar->InventoryComponents->InventorySize);
	
	 for(FItemStruct InventoryItem : IGI_InventoryItem )
	{
		InventoryItem.Reset();
	}
	
	IGI_EquippedWeapon.Reset();
	
	IGI_InventoryGold= 0;
	
	IGI_DungeonCurrentClearCount=0;
	
	IGI_DungeonMaxClearCount=0;
	
	IGI_DungeonTicket=0;
}

