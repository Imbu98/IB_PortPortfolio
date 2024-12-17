#include "CombatComponent.h"
#include "InventoryComponent.h"
#include "../Character/IBCharBase.h"
#include "../Item/BaseEquippable.h"
#include "Kismet\GameplayStatics.h"

UCombatComponent::UCombatComponent()
{
	PrimaryComponentTick.bCanEverTick = true;

}


void UCombatComponent::BeginPlay()
{
	Super::BeginPlay();

	
}


void UCombatComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

}

void UCombatComponent::SetCombatEnabled(bool IsEnable)
{
	IsCombatEnabled = IsEnable;
}

void UCombatComponent::ResetAttack()
{
	AttackCount = 0;
	IsAttackSaved = false;
}

bool UCombatComponent::IsCombatEnable()
{
	return IsCombatEnabled;
}

void UCombatComponent::SetMainWeapon(ABaseEquippable* NewWeapon)
{
	
	// MainWeapon이 이미 있으면 Weapon을 바꾸고 파괴
	if (MainWeapon)
	{
		MainWeapon->OnUnEquipped();

		AIBCharBase* PlayerCharacter = Cast<AIBCharBase>(UGameplayStatics::GetPlayerCharacter(GetWorld(),0));
		UInventoryComponent* InventoryComponent = PlayerCharacter->FindComponentByClass <UInventoryComponent>();
		//Change Weapon
		if (InventoryComponent)
		{
			InventoryComponent->ChangeWeapon(MainWeapon);
		}
		MainWeapon->Destroy();

		MainWeapon = NewWeapon;
	}
	// MainWeapon이 없으면 NewWeapon을 바로 MainWeapon으로 설정
	else if (MainWeapon == nullptr)
	{
		MainWeapon = NewWeapon;
	}
	
}

