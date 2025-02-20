#pragma once

#include "CoreMinimal.h"
#include "BaseEquippable.h"
#include "Axe_Weapon.generated.h"

UCLASS()
class IMBUPORTFOLIO_API AAxe_Weapon : public ABaseEquippable
{
	GENERATED_BODY()

public:
	AAxe_Weapon();
	protected:
	virtual void BeginPlay() override;

public:
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category=ItemInfo)
	class UTexture2D* AxeThumbnail;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = ItemInfo)
	class UStaticMesh* AxeStaticMesh;
	

public:
	TMap<E_ItemRarity, FName> RarityToRowMap = {
		{E_ItemRarity::Common, FName("Axe_Common")},
		{E_ItemRarity::Rare, FName("Axe_Rare")},
		{E_ItemRarity::Epic, FName("Axe_Epic")},
		{E_ItemRarity::Legendary, FName("Axe_Legendary")}
	};

public:
	void InitializeItem(E_ItemRarity ItemRarity);
	
	



};
