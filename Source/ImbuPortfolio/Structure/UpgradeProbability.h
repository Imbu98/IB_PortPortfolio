#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "UpgradeProbability.generated.h"

struct UpgradeProbability
{
	
};

USTRUCT(Atomic,BlueprintType)
struct FStruct_UpgradeProbability : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere)
	int32 UpgradeValue;
	UPROPERTY(EditAnywhere)
	float UpgradeProbability;

	FStruct_UpgradeProbability():
	UpgradeValue(0),
	UpgradeProbability(0)
	{
		
	}
};