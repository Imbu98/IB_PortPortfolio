#pragma once

#include "CoreMinimal.h"
#include "../Item/EItems.h"
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
	FGuid UniqueId;
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	int64 ItemID;
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
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item Info")
	E_Armor ArmorType;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	E_ItemRarity ItemRarity;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	E_PotionSize PotionSize;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Weight;
	

	FItemStruct():ItemName(FText::FromString(TEXT("")))
	, Stackable(false)
	, ItemQuantity(0)
	,Thumnail(nullptr)
	, Mesh(nullptr)
	,WeaponNumber(0)
	,ItemType(E_ItemType::None)
	,WeaponType(E_Weapon::None)
	,ArmorType(E_Armor::None)
	,ItemRarity(E_ItemRarity::None)
	,PotionSize(E_PotionSize::None)
	,Weight(0)
	{
		
	}

void Reset()
	{
		ItemName = FText::FromString(TEXT(""));
		Stackable = false;
		ItemQuantity = 0;
		Thumnail = nullptr;
		Mesh = nullptr;
		WeaponNumber=0;
		ItemType = E_ItemType::None;
		WeaponType=E_Weapon::None;
		ItemRarity=E_ItemRarity::None;
		PotionSize=E_PotionSize::None;
		Weight=0;
	}

};