#include "W_EnemyHealthBar.h"

#include "Components/ProgressBar.h"


void UW_EnemyHealthBar::UpdateHealthBar(AActor* Owner)
{
	
	if (Owner!=nullptr)
	{
		DamageSystemComponent=Owner->FindComponentByClass<UDamageSystemComponent>();
		if (DamageSystemComponent!=nullptr)
		{
			float MaxHealth = DamageSystemComponent->MaxHealth;
			float CurrentHealth=DamageSystemComponent->CurrentHealth;
			float HealthPercentage = CurrentHealth/MaxHealth;
			EnemyHealthBar->SetPercent(HealthPercentage);
		}
	}
}
