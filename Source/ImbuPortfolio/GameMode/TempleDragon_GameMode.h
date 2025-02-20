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
	TSubclassOf<class APortal> Portal;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Maps)
	FName LevelToStart;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Maps)
	FName LevelToBoss;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Maps)
	float StartLevelProbability;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Maps)
	float BossLevelProbability;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Reward)
	float RewardGold=0;

public:
	UFUNCTION(BlueprintCallable)
	void SpawnPortal();
public:
	UFUNCTION()
	virtual void RemoveEnemyChar(AActor* EnemyActor) override;
	UFUNCTION()
	virtual void SaveReward_Gold(float EnemyReward_Gold) override;
	UFUNCTION()
	virtual float GetSaveReward_Gold()override
	{
		return RewardGold;
	} 
	
};


