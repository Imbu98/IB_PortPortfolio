#pragma once

UENUM(BlueprintType)
enum class E_Weapon:uint8
{
	None=0,
	Axe=1,
	Sword=2,
};

UENUM(BlueprintType)
enum class E_ItemType:uint8
{
	None=0,
	Weapon=1,
	Armor=2,
	Potion=3,
	Others=4,
};

