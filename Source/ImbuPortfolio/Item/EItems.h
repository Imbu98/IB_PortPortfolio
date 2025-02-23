#pragma once

UENUM(BlueprintType)
enum class E_ItemType:uint8
{
	None=0,
	Weapon=1,
	Armor=2,
	Potion=3,
	Others=4,
};

UENUM(BlueprintType)
enum class E_Weapon:uint8
{
	None=0,
	Axe=1,
	Sword=2,
};

UENUM(BlueprintType)
enum class E_Armor : uint8
{
	None=0 UMETA(DisplayName = "None"),
	Top=1 UMETA(DisplayName = "Top"),
	Middle=2 UMETA(DisplayName = "Middle"),
	Bottom=3 UMETA(DisplayName = "Bottom"),
	
	
};

UENUM(BlueprintType)
enum class E_ItemRarity:uint8
{
	None=0,
	Common=1,
	Rare=2,
	Epic=3,
	Legendary=4,
};

UENUM(BlueprintType)
enum class E_PotionSize:uint8
{
	None=0,
	S=1,
	M=2,
	L=3,
};

UENUM(BlueprintType)
enum class E_ItemSlotType:uint8
{
	NotUsing,  // 슬롯을 사용하지않음
	SingleSlot, // 아이템 하나당 단일 슬롯
	Stackable, // 단일 슬롯에 동일아이템을 여러개를 쌓을 수 있음
};