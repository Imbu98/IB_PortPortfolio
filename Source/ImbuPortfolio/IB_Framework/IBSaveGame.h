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
	
	
};
