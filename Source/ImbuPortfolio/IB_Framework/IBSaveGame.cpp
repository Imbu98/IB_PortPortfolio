#include "IBSaveGame.h"

void UIBSaveGame::ISG_Initialize()
{
	SavedInventoryInfo.Empty();
	
	SavedEquippedWeapon.Reset();
	
	SavedInventoryGold= 0;
	
	SavedDungeonClearCount=0;
	
	SavedDungeonTicket=0;
}
