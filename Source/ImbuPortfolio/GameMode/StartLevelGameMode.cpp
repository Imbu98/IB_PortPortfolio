#include "StartLevelGameMode.h"

#include "ImbuPortfolio/IB_Framework/IBGameInstance.h"
#include "Kismet/GameplayStatics.h"

void AStartLevelGameMode::BeginPlay()
{
	Super::BeginPlay();

	UIBGameInstance* IBGameInstance = Cast<UIBGameInstance>(GetGameInstance());
	if (IBGameInstance)
	{
		IBGameInstance->LoadGame();

		if (IBGameInstance->IGI_IsClearTempleDragon)
		{
			TArray<AActor*> CaveRuinGate;
			UGameplayStatics::GetAllActorsWithTag(GetWorld(),TEXT("CaveRuinGate"),CaveRuinGate);

			for(AActor* Actors :CaveRuinGate)
			{
				Actors->Destroy();
			}
		}
		
		if (IBGameInstance->IGI_IsClearCaveRuins)
		{
			TArray<AActor*> NextLevelGate;
			UGameplayStatics::GetAllActorsWithTag(GetWorld(),TEXT("NextLevelGate"),NextLevelGate);

			for(AActor* Actors :NextLevelGate)
			{
				Actors->Destroy();
			}
		}
	}
}
