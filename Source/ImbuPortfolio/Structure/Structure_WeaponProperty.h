#pragma once
#include "CoreMinimal.h"
#include "../item/EItems.h"
#include "Engine/DataTable.h"
#include "Structure_WeaponProperty.generated.h"

class IMBUPORTFOLIO_API Structure_WeaponProperty
{
public:
	
};



USTRUCT(Atomic,BlueprintType)
struct FStructure_WeaponProperty : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()
	
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Damage;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Weight;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UTexture2D* ItemThumbnail;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UMaterial* ItemMaterial;
	

	
	FStructure_WeaponProperty():
	Damage(0)
	,Weight(0)
	,ItemThumbnail(nullptr)
	,ItemMaterial(nullptr)
	{
		
	}
};