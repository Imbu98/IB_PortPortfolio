#include "W_ItemInfo.h"

#include "Components/TextBlock.h"
#include "Kismet/KismetTextLibrary.h"

void UW_ItemInfo::NativeConstruct()
{
	Super::NativeConstruct();
}

void UW_ItemInfo::UpdateItemInfo(FItemStruct ItemInfo)
{
	if (TXT_ItemType)
	{
		FText ItemTypeText = UEnum::GetDisplayValueAsText(ItemInfo.ItemType);
		TXT_ItemType->SetText(ItemTypeText);
	}

	if (TXT_WeaponTypeOrArmorType)
	{
		if (ItemInfo.ItemType==E_ItemType::Weapon)
		{
			FString String= FString::Printf(TEXT("WeaponType:%s"), *UEnum::GetDisplayValueAsText(ItemInfo.WeaponType).ToString());
			FText WeaponTypeText = FText::FromString(String);
			TXT_WeaponTypeOrArmorType->SetText(WeaponTypeText);
		}
		else if (ItemInfo.ItemType==E_ItemType::Armor)
		{
			FString String= FString::Printf(TEXT("ArmorType:%s"),  *UEnum::GetDisplayValueAsText(ItemInfo.ArmorType).ToString());
			FText ArmorTypeText = FText::FromString(String);
			TXT_WeaponTypeOrArmorType->SetText(ArmorTypeText);
		}
		
	}
	
	if (TXT_Rarity)
	{
		FText RarityText = UEnum::GetDisplayValueAsText(ItemInfo.ItemRarity);
		TXT_Rarity->SetText(RarityText);
	}

	if (TXT_DamageOrDefense)
	{
		if (ItemInfo.ItemType==E_ItemType::Weapon)
		{
			FString String= FString::Printf(TEXT("Damage:%0.f"), ItemInfo.Damage);
			FText DamageText = FText::FromString(String);
			TXT_DamageOrDefense->SetText(DamageText);
		}
		else if (ItemInfo.ItemType==E_ItemType::Armor)
		{
			FString String= FString::Printf(TEXT("Defense:%0.f"), ItemInfo.Defense);
			FText DefenseText = FText::FromString(String);
			TXT_DamageOrDefense->SetText(DefenseText);
		}
		
	}

	if (TXT_Weight)
	{
		FText WeightText=  FText::AsNumber(ItemInfo.Weight);
		TXT_Weight->SetText(WeightText);
	}
	
}

