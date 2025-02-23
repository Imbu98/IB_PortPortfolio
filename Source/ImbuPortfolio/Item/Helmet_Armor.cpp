#include "Helmet_Armor.h"

#include "ImbuPortfolio/Structure/Structure_ArmorProperty.h"

void AHelmet_Armor::InitializeItem(E_ItemRarity ItemRarity)
{
	FName RowName = RarityToRowMap.Contains(ItemRarity) ? RarityToRowMap[ItemRarity] : FName("DefaultItem");

	if (!HelmetDataTableRow.DataTable)
	{
		UE_LOG(LogTemp, Error, TEXT("HelmetDataTableRow.DataTable is NULL!"));
		return;
	}
	FStructure_ArmorProperty* Str_ArmorProperty = HelmetDataTableRow.DataTable->FindRow<FStructure_ArmorProperty>(RowName,FString(""));

	
	if (Str_ArmorProperty==nullptr)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("[ Axe_Weapon::BeginPlay] : WeaponProperty Is Nullptr"));
		return;
	}
	
	FItemStruct* ItemStruct= DT_Item->FindRow<FItemStruct>(TEXT("Helmet"),TEXT(""));
	if (ItemStruct==nullptr)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("[ABaseEquippable::SetAppearance] : Axe Raw is null"));
		return;
	}
	if (ItemSKeletalMesh!=nullptr)
	{
		ItemSKeletalMesh->SetMaterial(0,Str_ArmorProperty->ItemMaterial);
	}

	Weight=Str_ArmorProperty->Weight;
	Defense=Str_ArmorProperty->Defense;
	ItemInfo.Weight=Str_ArmorProperty->Weight;
	ItemInfo.Thumnail=Str_ArmorProperty->ItemThumbnail;
	
	ItemInfo.ItemRarity=ItemRarity;
	ItemInfo.ItemType=E_ItemType::Armor;
	ItemInfo.ArmorType= E_Armor::Top;
	

	ItemInfo.WeaponNumber=ItemStruct->WeaponNumber;
	ItemInfo.Stackable = ItemStruct->Stackable;
	ItemInfo.ItemQuantity=ItemStruct->ItemQuantity;
}
