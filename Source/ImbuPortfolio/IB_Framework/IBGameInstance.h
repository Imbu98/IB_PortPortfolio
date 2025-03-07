#pragma once

#include "CoreMinimal.h"
#include "IBSaveGame.h"
#include "Engine/GameInstance.h"
#include "../Item/BaseEquippable.h"
#include "IBGameInstance.generated.h"

UCLASS()
class IMBUPORTFOLIO_API UIBGameInstance : public UGameInstance
{
	GENERATED_BODY()

public:
	UIBGameInstance();

	virtual void Init() override;
	
	virtual void Shutdown() override;

	UFUNCTION()
	void CreateSaveFile();
	UFUNCTION()
	void SaveGame();
	UFUNCTION()
	void LoadGame();
	UFUNCTION()
	void SaveItems();
	UFUNCTION()
	void LoadItems();

public:
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	UIBSaveGame* IBSaveGame;
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	TArray<FItemStruct> IGI_InventoryItem;
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	FItemStruct IGI_EquippedWeapon;
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	float IGI_InventoryGold;
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	int32 IGI_InventorySize;
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	int32 IGI_DungeonCurrentClearCount;
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	int32 IGI_DungeonMaxClearCount=2;
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	int32 IGI_DungeonTicket;
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	float IGI_UpgradeInventoryCost;

	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	float IGI_AngerGauge;
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	bool IGI_IsClearTempleDragon;
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	bool IGI_IsClearCaveRuins;
	
	

	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	bool IsNewGame;

	FCriticalSection SaveLoadLock;

public:
	UFUNCTION()
	void IncreaseDungeonClearCounting();
	UFUNCTION()
	void IGI_Initialize();
};
