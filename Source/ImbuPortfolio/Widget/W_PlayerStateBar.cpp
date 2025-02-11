#include "W_PlayerStateBar.h"

void UW_PlayerStateBar::UpdatePlayerStateBar(AActor* Owner)
{
	if (Owner!=nullptr)
	{
		DamageSystemComponent = Owner->FindComponentByClass<UDamageSystemComponent>();
		if (DamageSystemComponent!=nullptr)
		{
			float PlayerMaxHealth = DamageSystemComponent->MaxHealth;
			float PlayerCurrentHealth = DamageSystemComponent->CurrentHealth;
			float HealthPercent= PlayerCurrentHealth/PlayerMaxHealth;
			PlayerHealthBar->SetPercent(HealthPercent);
		}
	}
}
