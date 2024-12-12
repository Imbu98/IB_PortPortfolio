#include "IBCharAnimInstance.h"
#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Kismet/KismetMathLibrary.h"

void UIBCharAnimInstance::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);

	APawn* Pawn = TryGetPawnOwner();
	if (Pawn != nullptr)
	{
		ACharacter* IBCharacter = Cast<ACharacter>(Pawn);
		{
			bIsAccelerating = IBCharacter->GetCharacterMovement()->GetCurrentAcceleration().Size() > 0;
		}
		
	}
}
