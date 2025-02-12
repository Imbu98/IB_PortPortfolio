#include "CaveRuin_GameMode.h"

#include "ImbuPortfolio/EnemyChar/Enemy_Base.h"
#include "Kismet/GameplayStatics.h"

void ACaveRuin_GameMode::BeginPlay()
{
	Super::BeginPlay();

	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AEnemy_Base::StaticClass(), GetEnemyChar);
	
	
}

void ACaveRuin_GameMode::RemoveEnemyChar(AActor* EnemyActor)
{
	if (EnemyActor)
	{
		GetEnemyChar.Remove(EnemyActor);
		EnemyActor->SetLifeSpan(7.0f);
		if (GetEnemyChar.IsEmpty())
		{
			if (Portal)
			{
				Portal->OpenPortal();
			}
			
		}				
		
	}

	else
	{
		
	}
}
