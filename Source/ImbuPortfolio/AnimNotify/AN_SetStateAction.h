#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "AN_SetStateAction.generated.h"

UCLASS()
class IMBUPORTFOLIO_API UAN_SetStateAction : public UAnimNotify
{
	GENERATED_BODY()

	UFUNCTION()
	virtual void Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, const FAnimNotifyEventReference& EventReference) override;
	
};
