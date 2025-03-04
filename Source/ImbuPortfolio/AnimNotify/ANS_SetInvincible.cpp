#include "ANS_SetInvincible.h"

#include "ImbuPortfolio/Character/IBCharBase.h"
#include "ImbuPortfolio/Components/DamageSystemComponent.h"

void UANS_SetInvincible::NotifyBegin(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation,
                                     float TotalDuration, const FAnimNotifyEventReference& EventReference)
{
	Super::NotifyBegin(MeshComp, Animation, TotalDuration, EventReference);

	AIBCharBase* IBCharBase = Cast<AIBCharBase>( MeshComp->GetOwner());
	if (IBCharBase)
	{
		IBCharBase->DamageSystemComponent->IsInvincible = true;
	}
}

void UANS_SetInvincible::NotifyEnd(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation,
	const FAnimNotifyEventReference& EventReference)
{
	Super::NotifyEnd(MeshComp, Animation, EventReference);
	AIBCharBase* IBCharBase = Cast<AIBCharBase>( MeshComp->GetOwner());
	if (IBCharBase)
	{
		IBCharBase->DamageSystemComponent->IsInvincible = false;
	}
}
