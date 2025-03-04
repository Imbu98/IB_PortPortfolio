#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "ANS_Landing.generated.h"

UCLASS()
class IMBUPORTFOLIO_API UANS_Landing : public UAnimNotifyState
{
	GENERATED_BODY()

	public:
	UFUNCTION()
	virtual void NotifyBegin(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration,const FAnimNotifyEventReference& EventReference) override;
	
};
