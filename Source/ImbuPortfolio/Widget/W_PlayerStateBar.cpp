#include "W_PlayerStateBar.h"

#include "ImbuPortfolio/Character/IBCharBase.h"

void UW_PlayerStateBar::UpdatePlayerStateBar(AActor* Owner)
{
	if (Owner!=nullptr)
	{
		AIBCharBase* IBChar = Cast<AIBCharBase>(Owner);
		if (IBChar==nullptr)
		{
			return;
		}
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
			float PlayerMaxStamina = IBChar->CharMaxStamina;
			float PlayerCurrentStamina = IBChar->CharCurrentStamina;
			float StaminaPercent= PlayerCurrentStamina/PlayerMaxStamina;
			if (PlayerStaminaBar)
			{
				PlayerStaminaBar->SetPercent(StaminaPercent);
			}
		}
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
		if (TEXT_AngerState)
		{
			if (IBChar->CurrentAngerAmount<IBChar->MaxAngerAmount)
			{
				TEXT_AngerState->SetVisibility(ESlateVisibility::Collapsed);
			}
		}
	}
}

void UW_PlayerStateBar::BlinkBar()
{
	if (PlayerStaminaBar)
	{
		FLinearColor CurrentColor= PlayerStaminaBar->GetFillColorAndOpacity();
		FTimerHandle TimerHandle;
		PlayerStaminaBar->SetFillColorAndOpacity(FColor::Red);
		GetWorld()->GetTimerManager().SetTimer(TimerHandle,[this,CurrentColor]()
		{
			PlayerStaminaBar->SetFillColorAndOpacity(FLinearColor::Yellow);
		},0.1f,false);
	}
	
	
	
}

void UW_PlayerStateBar::BlinkAngerTEXT()
{
	TEXT_AngerState->SetVisibility(ESlateVisibility::Visible);
}
