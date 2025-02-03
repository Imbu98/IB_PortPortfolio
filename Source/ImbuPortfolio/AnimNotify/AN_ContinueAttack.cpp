#include "AN_ContinueAttack.h"
#include "../Character/IBCharBase.h"
#include "ImbuPortfolio/Components/StateComponent.h"


void UAN_ContinueAttack::Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation,
                                         const FAnimNotifyEventReference& EventReference) 
{
	
	AIBCharBase* IBChar =  Cast<AIBCharBase>(MeshComp->GetOwner());
	if (IBChar==nullptr)
	{
		return;
	}
	IBChar->StateComponent->SetState(TAG_StatusIdle);
}
