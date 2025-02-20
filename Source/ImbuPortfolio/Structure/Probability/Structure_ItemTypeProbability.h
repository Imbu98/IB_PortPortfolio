#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "../Source/ImbuPortfolio/Item/EItems.h"
#include "Structure_ItemTypeProbability.generated.h"


class IMBUPORTFOLIO_API Structure_ItemTypeProbability
{

};

USTRUCT(Atomic,BlueprintType)
struct FStructure_ItemTypeProbability : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()
	
public:
	UPROPERTY(EditAnywhere)
	E_ItemType ItemType;
	UPROPERTY(EditAnywhere)
	float ItemTypeProbability;
};
