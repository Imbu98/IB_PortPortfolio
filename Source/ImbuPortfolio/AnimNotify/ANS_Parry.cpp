#include "ANS_Parry.h"

#include "ImbuPortfolio/Character/IBCharBase.h"
#include "ImbuPortfolio/Components/StateComponent.h"

void UANS_Parry::NotifyBegin(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration,
                             const FAnimNotifyEventReference& EventReference)
{
	Super::NotifyBegin(MeshComp, Animation, TotalDuration, EventReference);

	AIBCharBase* IBChar = Cast<AIBCharBase>( MeshComp->GetOwner());
	if (IBChar!=nullptr)
	{
		IBChar->IsWithinParry=true;
	}
	
}

void UANS_Parry::NotifyEnd(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation,
	const FAnimNotifyEventReference& EventReference)
{
	Super::NotifyEnd(MeshComp, Animation, EventReference);

	AIBCharBase* IBChar = Cast<AIBCharBase>( MeshComp->GetOwner());
	if (IBChar!=nullptr)
	{
		IBChar->IsWithinParry=false;
		if (IBChar->StateComponent==nullptr)
		{
			return;
		}
		IBChar->StateComponent->ResetState();
		
	}
}
