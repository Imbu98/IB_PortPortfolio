#include "Axe_Weapon.h"
#include "Components\StaticMeshComponent.h"



AAxe_Weapon::AAxe_Weapon()
{
	ItemInfo.ItemName = FText::FromString(TEXT("Axe"));
	ItemInfo.Stackable = false;
	ItemInfo.ItemQuantity = 1;
	ItemInfo.Thumnail = AxeThumnail;
	ItemInfo.Mesh = AxeStaticMesh;
	ItemInfo.WeaponNumber = 1;
}
