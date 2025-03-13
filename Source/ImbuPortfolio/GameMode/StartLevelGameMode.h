#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "ImbuPortfolio/IB_Framework/IBGameModeBase.h"
#include "StartLevelGameMode.generated.h"

UCLASS()
class IMBUPORTFOLIO_API AStartLevelGameMode : public AIBGameModeBase
{
	GENERATED_BODY()

	public:
	virtual void BeginPlay() override;

public:
	UFUNCTION(BlueprintCallable)
	void ShowCannon();
	UFUNCTION(BlueprintCallable)
	void SpawnTutorialItem();
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	bool IsFirstCrossBridge=true;
	
	
};
