#pragma once

#include "CoreMinimal.h"
#include "Components/SplineComponent.h"
#include "GameFramework/Character.h"
#include "ImbuPortfolio/Components/DamageSystemComponent.h"
#include "ImbuPortfolio/ETC/Spline.h"
#include "ImbuPortfolio/Interface/AI_Interface.h"
#include "ImbuPortfolio/Interface/DamageInterface.h"
#include "Enemy_Base.generated.h"

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

protected:
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="Character")
	float EnemyMaxHealth;

	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="AI")
	TObjectPtr<ASpline> Spline;

public:	
	virtual void Tick(float DeltaTime) override;

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UFUNCTION(BlueprintCallable)
	virtual void OnDeath() override;
	UFUNCTION(BlueprintCallable)
	virtual void DamageResponse(E_DamageResponse DamageResponse) override;

public:
	virtual bool TakeDamage(FDamageInfo& DamageInfo, AActor* Cursor) override;
	virtual float SetHealth() override;
	virtual ASpline* GetSpline() override;

public:
	FDelegateHandle Delegate;

protected:
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="Montages")
	TObjectPtr<UAnimMontage> DamageResponseMontage;
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="Montages")
	TObjectPtr<UAnimMontage> DeathMontage;

};
