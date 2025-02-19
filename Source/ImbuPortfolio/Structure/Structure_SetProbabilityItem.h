#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "Structure_SetProbabilityItem.generated.h"


class IMBUPORTFOLIO_API Structure_SetProbabilityItem
{

};

USTRUCT(Atomic,BlueprintType)
struct FStructure_SetProbabilityItem : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()
	
public:
	UPROPERTY(EditAnywhere)
	float ItemType_WeaponProbability;
	UPROPERTY(EditAnywhere)
	float ItemType_ArmorProbability;
	UPROPERTY(EditAnywhere)
	float ItemType_PotionProbability;

	UPROPERTY(EditAnywhere)
	float WeaponType_AxeProbability;
	UPROPERTY(EditAnywhere)
	float WeaponType_SwordProbability;

	UPROPERTY(EditAnywhere)
	float ArmorType_ArmorHeadProbability;
	UPROPERTY(EditAnywhere)
	float ArmorType_ArmorTopProbability;
	UPROPERTY(EditAnywhere)
	float ArmorType_ArmorBottomProbability;

	UPROPERTY(EditAnywhere)
	float Rarity_CommonProbability;
	UPROPERTY(EditAnywhere)
	float Rarity_RareProbability;
	UPROPERTY(EditAnywhere)
	float Rarity_EpicProbability;
	UPROPERTY(EditAnywhere)
	float Rarity_LegendaryProbability;
	
	UPROPERTY(EditAnywhere)
	float PotionType_HpPotionProbability;
	
	UPROPERTY(EditAnywhere)
	float PotionSize_SmallProbability;
	UPROPERTY(EditAnywhere)
	float PotionSize_MediumProbability;
	UPROPERTY(EditAnywhere)
	float PotionSize_LargeProbability;

	UPROPERTY(EditAnywhere)
	float IncreasingProbability;
};
