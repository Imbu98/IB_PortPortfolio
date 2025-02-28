#include "AN_Jump.h"
#include "../Character/IBCharBase.h"
#include "ImbuPortfolio/Components/StateComponent.h"


void UAN_Jump::Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation,
                                         const FAnimNotifyEventReference& EventReference) 
{
	
	AIBCharBase* IBChar =  Cast<AIBCharBase>(MeshComp->GetOwner());
	if (IBChar==nullptr)
	{
		return;
	}
	IBChar->StateComponent->SetState(TAG_StatusIdle);
}
