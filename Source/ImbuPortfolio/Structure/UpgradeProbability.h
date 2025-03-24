#pragma once

struct UpgradeProbability
{
	
};

USTRUCT(Atomic,BlueprintType)
struct FStruct_UpgradeProbability
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