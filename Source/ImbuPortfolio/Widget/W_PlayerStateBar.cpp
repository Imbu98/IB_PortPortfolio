#include "W_PlayerStateBar.h"

#include "ImbuPortfolio/Character/IBCharBase.h"

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
			if (PlayerHealthBar)
			{
				PlayerHealthBar->SetPercent(HealthPercent);
			}
		}
		AIBCharBase* IBChar = Cast<AIBCharBase>(Owner);
		if (IBChar)
		{
			if (PlayerAngerGaugeBar)
			{
				float PlayerMaxAnger = IBChar->MaxAngerAmount;
				float PlayerCurrentAnger = IBChar->CurrentAngerAmount;
				float AngerPercent= PlayerCurrentAnger/PlayerMaxAnger;
				PlayerAngerGaugeBar->SetPercent(AngerPercent);
				
				if (PlayerAngerGaugeBar->GetPercent()>=1)
				{
					PlayerAngerGaugeBar->SetFillColorAndOpacity(FColor::Red);
				}
				else if (PlayerAngerGaugeBar->GetPercent()==0)
				{
					PlayerAngerGaugeBar->SetFillColorAndOpacity(FColor::Silver);
				}
			}
		}
	}
}
