#include "ANS_Block.h"

#include "ImbuPortfolio/Character/IBCharBase.h"
#include "ImbuPortfolio/Components/DamageSystemComponent.h"
#include "ImbuPortfolio/Components/StateComponent.h"

void UANS_Block::NotifyBegin(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration,
                             const FAnimNotifyEventReference& EventReference)
{
	Super::NotifyBegin(MeshComp, Animation, TotalDuration, EventReference);
	AIBCharBase* IBChar = Cast<AIBCharBase>( MeshComp->GetOwner());
	if (IBChar!=nullptr)
	{
		if (IBChar->DamageSystemComponent==nullptr)
		{
			return;
		}
		if (IBChar->StateComponent==nullptr)
		{
			return;
		}
		IBChar->DamageSystemComponent->IsBlocking=true;
		IBChar->StateComponent->SetState(TAG_StatusActionBlock);
		
	}
}

void UANS_Block::NotifyEnd(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation,
	const FAnimNotifyEventReference& EventReference)
{
	Super::NotifyEnd(MeshComp, Animation, EventReference);
}
