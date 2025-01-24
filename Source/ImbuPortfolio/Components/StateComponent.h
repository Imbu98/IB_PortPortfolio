#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Components/ActorComponent.h"
#include "StateComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class IMBUPORTFOLIO_API UStateComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	UStateComponent();
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
protected:
	virtual void BeginPlay() override;
	
public:
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category=GamePlayTag)
	FGameplayTag CurrentState;
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category=GamePlayTag)
	FGameplayTag CurrentAction;

public:
	UFUNCTION(BlueprintCallable)
	FGameplayTag GetCurrentState();
	UFUNCTION(BlueprintCallable)
	void SetState();
	UFUNCTION(BlueprintCallable)
	void ResetState();
	UFUNCTION(BlueprintCallable)
	bool IsCurrentStateEqualtoAny(FGameplayTagContainer StateToCheck);
	UFUNCTION(BlueprintCallable)
	void SetCurrentAction(FGameplayTag NewCharacterAction);
	
	

		
};
