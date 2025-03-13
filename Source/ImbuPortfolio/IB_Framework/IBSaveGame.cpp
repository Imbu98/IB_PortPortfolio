#include "IBSaveGame.h"

void UIBSaveGame::ISG_Initialize()
{

	SavedInventorySize=5;
	
	SavedInventoryInfo.SetNum(SavedInventorySize);
	
	for(FItemStruct InventoryItem : SavedInventoryInfo )
	{
		InventoryItem.Reset();
	}
	
	SavedEquippedWeapon.Reset();
	
	SavedInventoryGold= 0;
	
	SavedDungeonClearCount=0;
	
	SavedDungeonTicket=0;

	SavedUpgradeInventoryCost=500.0f;
	
	SavedAngerGauge=0.0f;
	
	SavedIsClearTempleDragon=false;
	
	SavedIsClearCaveRuins=false;

	SavedIsFirstGameStart=true;
	
	SavedIsNewGame=true;
}
