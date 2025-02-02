#include "StateComponent.h"
#include "GameplayTagContainer.h"

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
	// 나중에 StateEnd, StateBegin Event Call도 필요하다면 해줄 것
}

void UStateComponent::ResetState()
{
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

