#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "../Item/EItems.h"
#include "Struct_UpgradeWeaponValue.generated.h"


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
	float EnhancedDamage;
	UPROPERTY(EditAnywhere)
	float EnhancedWeight;

	FStruct_UpgradeWeaponValue():
	ItemRarity(E_ItemRarity::None),
	WeaponType(E_Weapon::None),
	WeaponUpgradeValue(0),
	EnhancedDamage(0),
	EnhancedWeight(0)
	{
		
	}
	
	
};