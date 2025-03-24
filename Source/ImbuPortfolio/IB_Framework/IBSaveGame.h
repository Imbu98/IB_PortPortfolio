#pragma once

#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "ImbuPortfolio/Structure/ItemStructure.h"
#include "../Item/BaseEquippable.h"
#include "IBSaveGame.generated.h"

UCLASS()
class IMBUPORTFOLIO_API UIBSaveGame : public USaveGame
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="SaveProperty")
	TArray<FItemStruct> SavedInventoryInfo;
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="SaveProperty")
	FItemStruct SavedEquippedWeapon;
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="SaveProperty")
	int32 SavedInventorySize=5;
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="SaveProperty")
	float SavedInventoryGold;
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="SaveProperty")
	float SavedUpgradeInventoryCost=500.f;
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="SaveProperty")
	int32 SavedDungeonClearCount;
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="SaveProperty")
	int32 SavedDungeonTicket;

	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	float SavedAngerGauge;
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	bool SavedIsClearTempleDragon;
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	bool SavedIsClearCaveRuins;
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	bool SavedIsFirstGameStart=true;
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	bool SavedIsNewGame;
	
	
public:
	UFUNCTION()
	void ISG_Initialize();
	
};
