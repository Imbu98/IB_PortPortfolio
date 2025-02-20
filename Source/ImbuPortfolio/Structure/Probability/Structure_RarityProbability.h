#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ImbuPortfolio/Item/EItems.h"
#include "Structure_RarityProbability.generated.h"


class IMBUPORTFOLIO_API Structure_RarityProbability
{

};

USTRUCT(Atomic,BlueprintType)
struct FStructure_RarityProbability : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()
	
public:
	UPROPERTY(EditAnywhere)
	E_ItemRarity Rarity;
	UPROPERTY(EditAnywhere)
	float RarityProbability;
};
