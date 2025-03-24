#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ImbuPortfolio/Structure/ItemStructure.h"
#include "W_ItemInfo.generated.h"

UCLASS()
class IMBUPORTFOLIO_API UW_ItemInfo : public UUserWidget
{
	GENERATED_BODY()

public:
	virtual void NativeConstruct() override;

public:
	UPROPERTY(meta = (BindWidget = "Widget"))
	class UTextBlock* TXT_ItemType;
	UPROPERTY(meta = (BindWidget = "Widget"))
	UTextBlock* TXT_WeaponTypeOrArmorType;
	UPROPERTY(meta = (BindWidget = "Widget"))
	UTextBlock* TXT_Rarity;
	UPROPERTY(meta = (BindWidget = "Widget"))
	UTextBlock* TXT_DamageOrDefense;
	UPROPERTY(meta = (BindWidget = "Widget"))
	UTextBlock* TXT_Weight;
	UPROPERTY()
	FItemStruct SavedItemInfo;

public:
	void UpdateItemInfo(FItemStruct ItemInfo);
	
	
};
