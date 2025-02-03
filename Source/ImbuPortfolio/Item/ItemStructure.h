#pragma once

#include "CoreMinimal.h"
#include "EItems.h"
#include "Engine/DataTable.h"
#include "ItemStructure.generated.h"

class IMBUPORTFOLIO_API ItemStructure
{
public:
	ItemStructure();
	~ItemStructure();
};

USTRUCT(Atomic,BlueprintType)
struct FItemStruct : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()
public:
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	FText ItemName;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool Stackable;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 ItemQuantity; 
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UTexture2D* Thumnail;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UStaticMesh* Mesh;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int WeaponNumber;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	E_ItemType ItemType;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	E_Weapon WeaponType;

	FItemStruct():ItemName(FText::FromString(TEXT("")))
	, Stackable(false)
	, ItemQuantity(0)
	,Thumnail(nullptr)
	, Mesh(nullptr)
	,WeaponNumber(0)
	,ItemType(E_ItemType::None)
	,WeaponType(E_Weapon::None)
	{
		
	}

};