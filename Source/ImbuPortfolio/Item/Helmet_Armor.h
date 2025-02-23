#pragma once

#include "CoreMinimal.h"
#include "BaseEquippable.h"
#include "Helmet_Armor.generated.h"

UCLASS()
class IMBUPORTFOLIO_API AHelmet_Armor : public ABaseEquippable
{
	GENERATED_BODY()


public:
	void InitializeItem(E_ItemRarity ItemRarity);
	
	TMap<E_ItemRarity, FName> RarityToRowMap = {
		{E_ItemRarity::Common, FName("Helmet_Common")},
		{E_ItemRarity::Rare, FName("Helmet_Rare")},
		{E_ItemRarity::Epic, FName("Helmet_Epic")},
		{E_ItemRarity::Legendary, FName("Helmet_Legendary")}
	};
};
