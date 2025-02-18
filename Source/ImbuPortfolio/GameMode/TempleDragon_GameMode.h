#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "ImbuPortfolio/Interface/GameMode_Interface.h"
#include "TempleDragon_GameMode.generated.h"

UCLASS()
class IMBUPORTFOLIO_API ATempleDragon_GameMode : public AGameModeBase, public IGameMode_Interface
{
	GENERATED_BODY()

protected:
	virtual void BeginPlay() override;

public:
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Enemy")
	TArray<AActor*> GetEnemyChar;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Maps)
	class APortal* Portal;

public:
	UFUNCTION()
	virtual void RemoveEnemyChar(AActor* EnemyActor) override;
};
