#pragma once

#include "CoreMinimal.h"
#include "NativeGameplayTags.h"
#include "Components/SplineComponent.h"
#include "Components/WidgetComponent.h"
#include "GameFramework/Character.h"
#include "ImbuPortfolio/BehaviorTree/BTT_EnemyAttack.h"
#include "ImbuPortfolio/Components/DamageSystemComponent.h"
#include "ImbuPortfolio/Components/StateComponent.h"
#include "ImbuPortfolio/ETC/Spline.h"
#include "ImbuPortfolio/Interface/AI_Interface.h"
#include "ImbuPortfolio/Interface/DamageInterface.h"
#include "ImbuPortfolio/Item/BaseEquippable.h"
#include "ImbuPortfolio/Widget/W_EnemyHealthBar.h"

#include "Enemy_Base.generated.h"

UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_EnemyStatusIdle)
UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_EnemyStatusDie)
UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_EnemyStatusAction)
UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_EnemyStatusActionAttack)

UCLASS()
class IMBUPORTFOLIO_API AEnemy_Base : public ACharacter, public IDamageInterface, public IAI_Interface
{
	GENERATED_BODY()

public:
	AEnemy_Base();

protected:
	virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
protected:
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="Components")
	UDamageSystemComponent* DamageSystemComponent;
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="Components")
	UStateComponent* StateComponent;
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category=Components)
	UWidgetComponent* Widget;

	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category=Components)
	TSubclassOf<UUserWidget> WBP_HealthBar;
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category=Health)
	UW_EnemyHealthBar* EnemyHealthBar;

	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category=DropItem)
	TSubclassOf<ABaseEquippable> SpawnItem;
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category=DropItem)
	int32 NumberOfDropItem;

protected:
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="Character")
	float EnemyMaxHealth;
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="Character")
	float AttackRange=130.f;
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="Character")
	float AttackSize=20.f;
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="Character")
	float AttackDamage=18.f;
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="Character")
	float AttackMoveRange;
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="Character")
	float DefendRadius;

	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="AI")
	TObjectPtr<ASpline> Spline;

public:	
	virtual void Tick(float DeltaTime) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

public:
	UFUNCTION(BlueprintCallable)
	virtual void OnDeath() override;
	UFUNCTION(BlueprintCallable)
	virtual void DamageResponse(E_DamageResponse DamageResponse) override;

public:
	UFUNCTION(BlueprintCallable)
	virtual bool TakeDamage(FDamageInfo& DamageInfo, AActor* Cursor) override;
	UFUNCTION(BlueprintCallable)
	virtual float SetHealth() override;
	UFUNCTION(BlueprintCallable)
	virtual ASpline* GetSpline() override;
	UFUNCTION(BlueprintCallable)
	virtual void EnemyAttack(UBTT_EnemyAttack* AttackTask) override;
	UFUNCTION(BlueprintCallable)
	virtual float SetMovementSpeed(E_MovementSpeed MovementSpeed) override;
	UFUNCTION(BlueprintCallable)
	virtual void GetIdealRange(float &GetAttackRange, float &GetDefendRadius) override;

public:
	FDelegateHandle Delegate;

protected:
	FOnMontageEnded EnemyAttackEnded;
	
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="Montages")
	TObjectPtr<UAnimMontage> DamageResponseMontage;
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="Montages")
	TObjectPtr<UAnimMontage> AttackMontage;
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="Montages")
	TObjectPtr<UAnimMontage> DeathMontage;
	UPROPERTY()
	UBTT_EnemyAttack* EnemyAttackTask;

public:
	void PlayMontageOnCompleted(UAnimMontage* Montage,FOnMontageEnded MontageEndDelegate) const;
	UFUNCTION(BlueprintCallable)
	void OnEnemyAttackEnded(UAnimMontage* Montage, bool bInterrupted);
	
	

};

