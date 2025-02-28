#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "AN_Jump.generated.h"

UCLASS()
class IMBUPORTFOLIO_API UAN_Jump : public UAnimNotify
{
	GENERATED_BODY()

	UFUNCTION()
	virtual void Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, const FAnimNotifyEventReference& EventReference) override;
};


