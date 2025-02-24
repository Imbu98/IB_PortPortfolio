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
	int32 IGI_DungeonCurrentClearCount;
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	int32 IGI_DungeonMaxClearCount=10;
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	int32 IGI_DungeonTicket;

	FCriticalSection SaveLoadLock;

public:
	UFUNCTION()
	void IncreaseDungeonClearCounting();
};
