#pragma once

#include "../Item/EItems.h"

struct Struct_UpgradeWeaponValue
{
	
};

USTRUCT(Atomic,BlueprintType)
struct FStruct_UpgradeWeaponValue : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere)
	E_ItemRarity ItemRarity;
	UPROPERTY(EditAnywhere)
	E_Weapon WeaponType;
	UPROPERTY(EditAnywhere)
	int32 WeaponUpgradeValue;
	UPROPERTY(EditAnywhere)
	float Damage;
	UPROPERTY(EditAnywhere)
	float Weight;

	FStruct_UpgradeWeaponValue():
	ItemRarity(E_ItemRarity::None),
	WeaponType(E_Weapon::None),
	WeaponUpgradeValue(0),
	Damage(0),
	Weight(0)
	{
		
	}
	
	
};