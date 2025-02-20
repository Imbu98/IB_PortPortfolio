#include "Axe_Weapon.h"

#include "IDetailTreeNode.h"
#include "../Structure/Structure_WeaponProperty.h"
#include "Components\StaticMeshComponent.h"


struct FStructure_WeaponProperty;

AAxe_Weapon::AAxe_Weapon()
{
	
}

void AAxe_Weapon::BeginPlay()
{
	Super::BeginPlay();
}

void AAxe_Weapon::InitializeItem(E_ItemRarity ItemRarity)
{
	
	FName RowName = RarityToRowMap.Contains(ItemRarity) ? RarityToRowMap[ItemRarity] : FName("DefaultItem");
	
	FStructure_WeaponProperty* Str_WeaponProperty = AxeDataTableRow.DataTable->FindRow<FStructure_WeaponProperty>(RowName,FString(""));

	if (Str_WeaponProperty==nullptr)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("[ Axe_Weapon::BeginPlay] : WeaponProperty Is Nullptr"));
		return;
	}
	
	FItemStruct* ItemStruct= DT_Item->FindRow<FItemStruct>(TEXT("Axe"),TEXT(""));
	if (ItemStruct==nullptr)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("[ABaseEquippable::SetAppearance] : Axe Raw is null"));
		return;
	}
	if (ItemSKeletalMesh!=nullptr)
	{
		ItemSKeletalMesh->SetMaterial(0,Str_WeaponProperty->ItemMaterial);
	}
	
	
	Damage=Str_WeaponProperty->Damage;
	Weight=Str_WeaponProperty->Weight;
	ItemInfo.Thumnail=Str_WeaponProperty->ItemThumbnail;
	ItemInfo.Weight=Str_WeaponProperty->Weight;
	
	ItemInfo.ItemRarity=ItemRarity;
	ItemInfo.WeaponType=E_Weapon::Axe;
	ItemInfo.ItemType=E_ItemType::Weapon;

	ItemInfo.WeaponNumber=ItemStruct->WeaponNumber;
	ItemInfo.Stackable = ItemStruct->Stackable;
	ItemInfo.ItemQuantity=ItemStruct->ItemQuantity;


	
	
	
}

