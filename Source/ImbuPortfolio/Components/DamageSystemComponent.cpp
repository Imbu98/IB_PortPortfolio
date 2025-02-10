#include "DamageSystemComponent.h"
#include "ImbuPortfolio/Interface/DamageInterface.h"

UDamageSystemComponent::UDamageSystemComponent()
{
	PrimaryComponentTick.bCanEverTick = true;

}


void UDamageSystemComponent::BeginPlay()
{
	Super::BeginPlay();

	if (this->GetOwner()->GetClass()->ImplementsInterface(UDamageInterface::StaticClass())==true)
	{
		IDamageInterface* DamageInterface = Cast<IDamageInterface>(this->GetOwner());
		{
			if (DamageInterface==NULL)
			{
				GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Red, "DamageInterface Is Null");
			}
			else
			{
				CurrentHealth = DamageInterface->SetHealth();
			}
		}
	}

	
}

void UDamageSystemComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

}


bool UDamageSystemComponent::TakeDamage(FDamageInfo& DamageInfo, AActor* DamageCursor)
{
	E_DamageDetermine DamageDetermine=CanBeDamaged(DamageInfo.ShouldDamageInvincible,DamageInfo.CanBeBlocked);
	switch (DamageDetermine)
	{
	case E_DamageDetermine::BlockedDamage:
		{
			OnBlocked.Broadcast(DamageInfo.CanBeParried,DamageCursor);
			return false;
		}
	case E_DamageDetermine::DoDamage:
		{
			CurrentHealth= CurrentHealth-DamageInfo.DamageAmount;
			if (CurrentHealth<=0)
			{
				IsDead=true;
				OnDeath.Broadcast();
			}
			else
			{
				if (DamageInfo.ShouldForceInterrupt||IsInterruptible)
				{
					if (OnDamageResponse.IsBound())
					{
						OnDamageResponse.Broadcast(DamageInfo.DamageResponse);
					}
					else
					{
						
						GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, "DamageResponse Is not bound");
					}
					
				}
			}
			return true;
			
		}
	case E_DamageDetermine::NoDamage:
		{
			OnDodge.Broadcast();
			return false;
		}
	default:
		return false;
	}
	
}

E_DamageDetermine UDamageSystemComponent::CanBeDamaged(bool ShouldDamageInvincible, bool CanBeBlocked)
{
	if (!IsDead&&!IsInvincible)
	{
		if (CanBeBlocked&&IsBlocking)
		{
			return E_DamageDetermine::BlockedDamage;
		}
		else
		{
			return E_DamageDetermine::DoDamage;
		}
	}
	else
	{
		return E_DamageDetermine::NoDamage;
	}
}



