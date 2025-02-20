#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ImbuPortfolio/Item/EItems.h"
#include "Structure_ArmorTypeProbability.generated.h"


class IMBUPORTFOLIO_API Structure_ArmorTypeProbability
{

};

USTRUCT(Atomic,BlueprintType)
struct FStructure_ArmorTypeProbability : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()
	
public:
	UPROPERTY(EditAnywhere)
	E_Armor ArmorType;
	UPROPERTY(EditAnywhere)
	float ArmorTypeProbability;

	
};
