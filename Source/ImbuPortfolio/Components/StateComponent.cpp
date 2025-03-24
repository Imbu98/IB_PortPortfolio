#include "StateComponent.h"
#include "GameplayTagContainer.h"
#include "ImbuPortfolio/Character/IBCharBase.h"

UStateComponent::UStateComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
}


// Called when the game starts
void UStateComponent::BeginPlay()
{
	Super::BeginPlay();

	
}

FGameplayTag UStateComponent::GetCurrentState()
{
	return CurrentState;
}

void UStateComponent::SetState(FGameplayTag NewState)
{
	if (NewState!=CurrentState)
	{
		CurrentState=NewState;
	}
}

void UStateComponent::ResetState()
{
	SetState(TAG_StatusIdle);
}

bool UStateComponent::IsCurrentStateEqualtoAny(TArray<FGameplayTag> StateToCheck)
{
	return StateToCheck.Contains(CurrentState);
}

void UStateComponent::SetCurrentAction(FGameplayTag NewCharacterAction)
{
	if (NewCharacterAction !=CurrentAction)
	{
		
	}
		
}


// Called every frame
void UStateComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}

