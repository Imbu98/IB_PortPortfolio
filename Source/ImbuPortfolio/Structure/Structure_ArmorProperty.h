#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "Structure_ArmorProperty.generated.h"

class IMBUPORTFOLIO_API Structure_ArmorProperty
{
public:
	
};



USTRUCT(Atomic,BlueprintType)
struct FStructure_ArmorProperty : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()
	
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Defense;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Weight;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UTexture2D* ItemThumbnail;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UMaterialInstance* ItemMaterial;
	

	
	FStructure_ArmorProperty():
	Defense(0)
	,Weight(0)
	,ItemThumbnail(nullptr)
	,ItemMaterial(nullptr)
	{
		
	}
};