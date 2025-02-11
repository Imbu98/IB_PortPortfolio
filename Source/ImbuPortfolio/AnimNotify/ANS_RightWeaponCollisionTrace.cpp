#include "ANS_RightWeaponCollisionTrace.h"
#include "../Item/BaseEquippable.h"
#include "../Components/CombatComponent.h"
#include "../Components/CollisionComponent.h"
#include "ImbuPortfolio/Components/InventoryComponent.h"


void UANS_RightWeaponCollisionTrace::NotifyBegin(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration,const FAnimNotifyEventReference& EventReference)
{
	// if (MeshComp!=nullptr)
	// {
	// 	//UCollisionComponent* CollisionComponent = GetValidWeaponCollisionRef(MeshComp);
	//
	// 	// if (CollisionComponent!=nullptr)
	// 	// {
	// 	// 	CollisionComponent->EnableCollision();
	// 	// }
	// }
		
	if (MeshComp != nullptr)
	{
		UInventoryComponent* InventoryComponent =MeshComp->GetOwner()->FindComponentByClass<UInventoryComponent>();

		if (InventoryComponent==nullptr)
		{
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, "InventoryComponent is Null");
			return;
		}
		ABaseEquippable* Equippable =InventoryComponent->RightWeapon;
		if (Equippable==nullptr||Equippable->CollisionComponent==nullptr)
		{
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, "BaseEquippable or CollisionComponent is Null");
		}
		Equippable->CollisionComponent->EnableCollision();	
	}
}

void UANS_RightWeaponCollisionTrace::NotifyEnd(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation,
	const FAnimNotifyEventReference& EventReference) 
{
	// if (MeshComp!=nullptr)
	// {
	// 	UCollisionComponent* CollisionComponent = GetValidWeaponCollisionRef(MeshComp);
	// 	if (CollisionComponent!=nullptr)
	// 	{
	// 		CollisionComponent->DisableCollision();
	// 	}
	// }

	UInventoryComponent* InventoryComponent =MeshComp->GetOwner()->FindComponentByClass<UInventoryComponent>();

	if (InventoryComponent==nullptr)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, "InventoryComponent is Null");
		return;
	}
	ABaseEquippable* Equippable =InventoryComponent->RightWeapon;
		if (Equippable==nullptr||Equippable->CollisionComponent==nullptr)
		{
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, "BaseEquippable or CollisionComponent is Null");
		}
		Equippable->CollisionComponent->DisableCollision();	
}

UCollisionComponent* UANS_RightWeaponCollisionTrace::GetValidWeaponCollisionRef(USkeletalMeshComponent* MeshComponent) 
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
