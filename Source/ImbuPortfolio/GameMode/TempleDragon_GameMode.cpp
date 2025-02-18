#include "TempleDragon_GameMode.h"
#include "../IB_Framework/IBGameInstance.h"
#include "ImbuPortfolio/EnemyChar/Enemy_Base.h"
#include "ImbuPortfolio/ETC/Portal.h"
#include "Kismet/GameplayStatics.h"

void ATempleDragon_GameMode::BeginPlay()
{
	Super::BeginPlay();

	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AEnemy_Base::StaticClass(), GetEnemyChar);
	
	UIBGameInstance* IBGameInstance = Cast<UIBGameInstance>(GetGameInstance());
	if (IBGameInstance)
	{
		IBGameInstance->LoadGame();
	}
}

void ATempleDragon_GameMode::RemoveEnemyChar(AActor* EnemyActor)
{
	if (EnemyActor)
	{
		GetEnemyChar.Remove(EnemyActor);
		EnemyActor->SetLifeSpan(7.0f);
		if (GetEnemyChar.IsEmpty())
		{
			if (Portal!=nullptr)
			{
				Portal->OpenPortal();
			}
			
		}				
		
	}

	else
	{
		
	}
}
