#pragma once

#include "CoreMinimal.h"
#include "Enemy_Base.h"
#include "Enemy_Boss.generated.h"

UCLASS()
class IMBUPORTFOLIO_API AEnemy_Boss : public AEnemy_Base
{
	GENERATED_BODY()

private:
	AEnemy_Boss();

	virtual void BeginPlay() override;

	virtual void Tick(float DeltaTime) override;

public:
	virtual void EnemyBossAttack(UBTT_EnemyBossAttack* AttackTask) override ;
	
	virtual FString GetBossName() override;

	virtual void OnDeath() override ;

	
	virtual void DamageResponse(E_DamageResponse DamageResponse) override;
	
	virtual void EnemySpecialAttack1(AActor* JumpTarget,UBTT_EnemyBossAttack* AttackTask) override;
	
	UFUNCTION()
	void BossAttackEnded(UAnimMontage* Montage, bool bInterrupted);
	UFUNCTION()
	void BattleCry();
	UFUNCTION()
	void BattleCryEnded(UAnimMontage* Montage, bool bInterrupted);
	UFUNCTION()
	FVector CalculateFutureActorLocation(AActor* TargetActor,float Time);
	
public:

	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	FString EnemyBossName;
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	bool IsFirstEnemySearch=true;
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	class AEnemy_Base_AIController* Enemy_Base_AIController;
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	TSubclassOf<UUserWidget> WBP_BossHealthBar;
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	class UW_BossHealthBar* BossHealthBar;
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	float JumpAttackDamage;

	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category=Montage)
	UAnimMontage* AM_BattleCry;
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category=Montage)
	UAnimMontage* AM_SpecialAttack1;

	FOnMontageEnded OnBattleCryEnded;

	UPROPERTY()
	class UBTT_BattleCry* BattleCryTaskNode;
	UPROPERTY()
	UBTT_EnemyBossAttack* EnemyBossAttackTask;
	
};


