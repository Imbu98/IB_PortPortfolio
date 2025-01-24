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

void UStateComponent::SetState()
{
}

void UStateComponent::ResetState()
{
}

bool UStateComponent::IsCurrentStateEqualtoAny(FGameplayTagContainer StateToCheck)
{
	return StateToCheck.HasTag(CurrentState);
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

