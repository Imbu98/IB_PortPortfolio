#include "AN_SetStateAction.h"

#include "ImbuPortfolio/Character/IBCharBase.h"
#include "ImbuPortfolio/Components/StateComponent.h"

void UAN_SetStateAction::Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation,
                                const FAnimNotifyEventReference& EventReference)
{
	Super::Notify(MeshComp, Animation, EventReference);

	AIBCharBase* IBChar =  Cast<AIBCharBase>(MeshComp->GetOwner());
	if (IBChar==nullptr)
	{
		return;
	}
	IBChar->StateComponent->SetState(TAG_StatusAction);
	
}
