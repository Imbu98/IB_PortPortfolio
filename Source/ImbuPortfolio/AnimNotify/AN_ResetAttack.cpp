#include "AN_ResetAttack.h"
#include "../Character/IBCharBase.h"

void UAN_ResetAttack::Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation,
	const FAnimNotifyEventReference& EventReference)
{
	
	AIBCharBase* IBChar =  Cast<AIBCharBase>(MeshComp->GetOwner());
	if (IBChar==nullptr)
	{
		return;
	}
	IBChar->ResetAttack();
	
}
