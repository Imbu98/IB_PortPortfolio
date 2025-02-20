#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ImbuPortfolio/Item/EItems.h"
#include "Structure_WeaponTypeProbability.generated.h"


class IMBUPORTFOLIO_API Structure_WeaponTypeProbability
{

};

USTRUCT(Atomic,BlueprintType)
struct FStructure_WeaponTypeProbability : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()
	
public:
	UPROPERTY(EditAnywhere)
	E_Weapon WeaponType;
	UPROPERTY(EditAnywhere)
	float WeaponTypeProbability;
	
	
};
