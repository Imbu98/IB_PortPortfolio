#include "ANS_CollisionTrace.h"
#include "../Item/BaseEquippable.h"
#include "../Components/CombatComponent.h"
#include "../Components/CollisionComponent.h"


void UANS_CollisionTrace::NotifyBegin(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration,const FAnimNotifyEventReference& EventReference) 
{
	if (MeshComp!=nullptr)
	{
		UCollisionComponent* CollisionComponent = GetValidWeaponCollisionRef(MeshComp);
		if (CollisionComponent!=nullptr)
		{
			CollisionComponent->EnableCollision();
		}
		
			
		
	}
	
	
}

void UANS_CollisionTrace::NotifyEnd(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation,
	const FAnimNotifyEventReference& EventReference) 
{
	if (MeshComp!=nullptr)
	{
		UCollisionComponent* CollisionComponent = GetValidWeaponCollisionRef(MeshComp);
		if (CollisionComponent!=nullptr)
		{
			CollisionComponent->DisableCollision();
		}
	}
	
}

UCollisionComponent* UANS_CollisionTrace::GetValidWeaponCollisionRef(USkeletalMeshComponent* MeshComponent) 
{
	if (MeshComponent->GetOwner()==nullptr)
	{
		return nullptr;
	}
	UCombatComponent* CombatComponent =MeshComponent->GetOwner()->FindComponentByClass<UCombatComponent>();
	if (CombatComponent!=nullptr)
	{
		ABaseEquippable* BaseEquippable = CombatComponent->GetMainWeapon();
		if (BaseEquippable!=nullptr)
		{
			UCollisionComponent* CollisionComponent = BaseEquippable->CollisionComponent;
			if (CollisionComponent!=nullptr)
			{

				return CollisionComponent;
			}
		}
	}
	else
	{
		return nullptr;
	}
	return nullptr;
	
}
