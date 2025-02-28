#include "W_BossHealthBar.h"
#include "Components/ProgressBar.h"
#include "Components/TextBlock.h"
#include "ImbuPortfolio/Components/DamageSystemComponent.h"
#include "ImbuPortfolio/Interface/AI_Interface.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetMathLibrary.h"

void UW_BossHealthBar::NativeConstruct()
{
	Super::NativeConstruct();

	AActor* Actor=UGameplayStatics::GetActorOfClass(GetWorld(),AEnemy_Boss::StaticClass());
	if (Actor)
	{
		 Enemy_Boss = Cast<AEnemy_Boss>(Actor);
		if (Enemy_Boss)
		{
			if (DamageSystemComponent)
			{
				InterpolatedHP = Enemy_Boss->DamageSystemComponent->CurrentHealth;
			}
			
		}
	}
	
	
}


void UW_BossHealthBar::UpdateBossHealthBar(AActor* Owner)
{
	if (Owner!=nullptr)
	{
		DamageSystemComponent=Owner->FindComponentByClass<UDamageSystemComponent>();
		if (DamageSystemComponent!=nullptr)
		{
			float MaxHealth = DamageSystemComponent->MaxHealth;
			float CurrentHealth=DamageSystemComponent->CurrentHealth;
			float HealthPercentage = MaxHealth/MaxHealth;
			float DeltaTime=  GetWorld()->DeltaTimeSeconds;
			
			
			InterpolatedHP=UKismetMathLibrary::FInterpTo(InterpolatedHP,CurrentHealth,DeltaTime,1.0f);

			float ClampedHp = UKismetMathLibrary::MapRangeClamped(InterpolatedHP,0.0f,MaxHealth,0.0f,1.0f);

			
			BossHealth->SetPercent(ClampedHp);
		}
		if (Owner->GetClass()->ImplementsInterface(UAI_Interface::StaticClass()))
		{	
			IAI_Interface* AI_Interface = Cast<IAI_Interface>(Owner);
			if (AI_Interface!=nullptr)
			{
				if (BossName)
				{
					BossName->SetText(FText::FromString(AI_Interface->GetBossName()));
				}
				
			}
		}

		
	}
	
}
