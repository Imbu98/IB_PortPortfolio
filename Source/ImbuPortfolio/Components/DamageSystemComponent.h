#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ImbuPortfolio/Enum/E_DamageSystem.h"
#include "ImbuPortfolio/Structure/DamageInfo.h"
#include "../DefineDelegate.h"
#include "ImbuPortfolio/Interface/DamageInterface.h"
#include "DamageSystemComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class IMBUPORTFOLIO_API UDamageSystemComponent : public UActorComponent, public IDamageInterface
{
	GENERATED_BODY()

public:	
	UDamageSystemComponent();
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

protected:
	virtual void BeginPlay() override;

protected:
	bool IsInvincible;
	bool IsDead;
	bool IsInterruptible=true;
	bool IsBlocking;
	
public:
	UFUNCTION(BlueprintCallable)
	bool TakeDamage(FDamageInfo& DamageInfo,AActor* DamageCursor);
	UFUNCTION(BlueprintCallable)
	E_DamageDetermine CanBeDamaged(bool ShouldDamageInvincible,bool CanBeBlocked);

public:
	
	
	

public:
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	float CurrentHealth;
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	float MaxHealth;

		
};
