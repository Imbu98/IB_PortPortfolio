#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ImbuPortfolio/Item/EItems.h"
#include "Structure_PotionSizeProbability.generated.h"


class IMBUPORTFOLIO_API Structure_PotionSizeProbability
{

};

USTRUCT(Atomic,BlueprintType)
struct FStructure_PotionSizeProbability : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()
	
public:
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	E_PotionSize PotionSize;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float PotionSizeProbability;

};
