#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "IBCharAnimInstance.generated.h"

UCLASS()
class IMBUPORTFOLIO_API UIBCharAnimInstance : public UAnimInstance
{
	GENERATED_BODY()

public:
	void NativeUpdateAnimation(float DeltaSeconds) override;

public:
	UPROPERTY(BlueprintReadWrite)
	bool bIsAccelerating;
};
