#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "ANS_CollisionTrace.generated.h"

class UCollisionComponent;

UCLASS()
class IMBUPORTFOLIO_API UANS_CollisionTrace : public UAnimNotifyState
{
	GENERATED_BODY()

public:
	UFUNCTION()
	virtual void NotifyBegin(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration,const FAnimNotifyEventReference& EventReference) override;
	UFUNCTION()
	virtual void NotifyEnd(USkeletalMeshComponent * MeshComp, UAnimSequenceBase * Animation, const FAnimNotifyEventReference& EventReference) override ;
	UFUNCTION()
	UCollisionComponent* GetValidWeaponCollisionRef(USkeletalMeshComponent* MeshComponent) ;

};
