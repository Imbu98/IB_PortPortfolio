#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "ImbuPortfolio/Interface/GameMode_Interface.h"
#include "IBGameModeBase.generated.h"

UCLASS()
class IMBUPORTFOLIO_API AIBGameModeBase : public AGameModeBase ,  public IGameMode_Interface
{
	GENERATED_BODY()

public:
	AIBGameModeBase();
	
protected:
	virtual void BeginPlay() override;

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
	UPROPERTY()
	class UIBGameInstance* IBGameInstance;
public:
	UPROPERTY()
	bool IsClearTempleDragon=false;
	UPROPERTY()
	bool IsClearCaveRuins=false;

public:
	UFUNCTION(BlueprintCallable)
	virtual void SpawnPortal();
	UFUNCTION(BlueprintCallable)
	void RodingScreen();
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
