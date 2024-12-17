#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CombatComponent.generated.h"

class ABaseEquippable;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class IMBUPORTFOLIO_API UCombatComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	UCombatComponent();
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

protected:
	virtual void BeginPlay() override;

public:	
	ABaseEquippable* MainWeapon;
	bool IsCombatEnabled;
	bool IsAttackSaved;
	int32 AttackCount;

public:
	ABaseEquippable* GetMainWeapon() { return MainWeapon; }
	void SetCombatEnabled(bool IsEnable);

	void ResetAttack();
	bool IsCombatEnable();
	void SetMainWeapon(ABaseEquippable* NewWeapon);

	
	
};
