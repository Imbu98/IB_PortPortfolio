#include "CaveRuin_GameMode.h"
#include "../IB_Framework/IBGameInstance.h"
#include "ImbuPortfolio/EnemyChar/Enemy_Base.h"
#include "Kismet/GameplayStatics.h"

void ACaveRuin_GameMode::BeginPlay()
{
	Super::BeginPlay();

	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AEnemy_Base::StaticClass(), GetEnemyChar);

	UIBGameInstance* IBGameInstance = Cast<UIBGameInstance>(GetGameInstance());
	if (IBGameInstance)
	{
		IBGameInstance->LoadGame();
	}
	
	
}

void ACaveRuin_GameMode::RemoveEnemyChar(AActor* EnemyActor)
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("FuncTionCalled")));
	if (EnemyActor)
	{
		GetEnemyChar.Remove(EnemyActor);
		EnemyActor->SetLifeSpan(7.0f);
		
		if (GetEnemyChar.IsEmpty())
		{
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("StageCleared"));
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
