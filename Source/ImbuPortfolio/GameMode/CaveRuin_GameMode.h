#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "ImbuPortfolio/ETC/Portal.h"
#include "CaveRuin_GameMode.generated.h"

UCLASS()
class IMBUPORTFOLIO_API ACaveRuin_GameMode : public AGameModeBase
{
	GENERATED_BODY()

	protected:
	virtual void BeginPlay() override;
	
public:
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Enemy")
	TArray<AActor*> GetEnemyChar;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Maps)
	APortal* Portal;
	
public:
	void RemoveEnemyChar(AActor* EnemyActor);
	
};
