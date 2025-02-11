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
				MaxHealth=DamageInterface->SetHealth();
				CurrentHealth=MaxHealth;
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
	
	if (this->GetOwner()->GetClass()->ImplementsInterface(UDamageInterface::StaticClass())==true)
	{
		IDamageInterface* DamageInterface = Cast<IDamageInterface>(this->GetOwner());
		
	
		switch (DamageDetermine)
		{
		case E_DamageDetermine::BlockedDamage:
			{
				if (DamageInterface==nullptr)
				{
					GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Red, "DamageInterface Is Null");
					return false;;
				}
			
				DamageInterface->OnBlocked(DamageInfo.CanBeParried,DamageCursor);
				return false;
			
			}
		case E_DamageDetermine::DoDamage:
			{
				if (DamageInterface==nullptr)
				{
					GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Red, "DamageInterface Is Null");
					return false;;
				}
				
				CurrentHealth= CurrentHealth-DamageInfo.DamageAmount;
				if (CurrentHealth<=0)
				{
					IsDead=true;
					DamageInterface->OnDeath();
				}
				else
				{
					DamageInterface->DamageResponse(DamageInfo.DamageResponse);
				}
				return true;
			
			}
		case E_DamageDetermine::NoDamage:
			{
				if (DamageInterface==nullptr)
				{
					GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Red, "DamageInterface Is Null");
					return false;
				}
				DamageInterface->OnDeath();
				return false;
			}
		default:
			return false;
		}
	}
	return false;
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



