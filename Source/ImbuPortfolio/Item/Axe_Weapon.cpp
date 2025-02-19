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
	
	if (DT_Item.DataTable==nullptr)
	{
		
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("DataTable Is Null"));
		return;
		
	}
	FName RowName = RarityToRowMap.Contains(ItemRarity) ? RarityToRowMap[ItemRarity] : FName("DefaultItem");
	
	FStructure_WeaponProperty* Str_WeaponProperty = AxeDataTableRow.DataTable->FindRow<FStructure_WeaponProperty>(RowName,FString(""));

	if (Str_WeaponProperty==nullptr)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("[ Axe_Weapon::BeginPlay] : WeaponProperty Is Nullptr"));
		return;
	}
	Damage=Str_WeaponProperty->Damage;
	Weight=Str_WeaponProperty->Weight;
	ItemInfo.Thumnail=Str_WeaponProperty->ItemThumbnail;
	ItemInfo.ItemRarity=ItemRarity;
		
	
}

