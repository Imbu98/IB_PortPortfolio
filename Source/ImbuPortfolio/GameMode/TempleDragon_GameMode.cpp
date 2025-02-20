#include "TempleDragon_GameMode.h"
#include "../IB_Framework/IBGameInstance.h"
#include "Engine/TargetPoint.h"
#include "ImbuPortfolio/Character/IBCharBase.h"
#include "ImbuPortfolio/Components/InventoryComponent.h"
#include "ImbuPortfolio/EnemyChar/Enemy_Base.h"
#include "ImbuPortfolio/ETC/Portal.h"
#include "Kismet/GameplayStatics.h"

void ATempleDragon_GameMode::BeginPlay()
{
	Super::BeginPlay();

	RewardGold=0;

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
			SpawnPortal();
			
		}				
		
	}

	else
	{
		
	}
}

void ATempleDragon_GameMode::SpawnPortal()
{	
	ATargetPoint* SpawnPoint= Cast<ATargetPoint>(UGameplayStatics::GetActorOfClass(GetWorld(),ATargetPoint::StaticClass()));
	if (SpawnPoint)
	{
		FActorSpawnParameters SpawnParameters;
		SpawnParameters.Owner = this;
		SpawnParameters.SpawnCollisionHandlingOverride=ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
		FTransform SpawnTransform = SpawnPoint->GetActorTransform();
		APortal* SpawnedPortal =  GetWorld()->SpawnActor<APortal>(Portal,SpawnTransform,SpawnParameters);
		if (SpawnedPortal!=nullptr)
		{
			float TotalPorobability = StartLevelProbability+BossLevelProbability;
			float LevelProbability= FMath::RandRange(0.0f,TotalPorobability);
			if (LevelProbability<=StartLevelProbability)
			{
				SpawnedPortal->OpenPortal(LevelToStart);
				if (SpawnedPortal->StartLevelPortalMaterial!=nullptr)
				{
					SpawnedPortal->StaticMesh->SetMaterial(0,SpawnedPortal->StartLevelPortalMaterial);
				}
			}
			else if (LevelProbability<=StartLevelProbability+BossLevelProbability)
			{
				SpawnedPortal->OpenPortal(LevelToBoss);
				if (SpawnedPortal->BossLevelPortalMaterial!=nullptr)
				{
					SpawnedPortal->StaticMesh->SetMaterial(0,SpawnedPortal->BossLevelPortalMaterial);
				}
				
			}
			
		}
	}
	
	
	
}

void ATempleDragon_GameMode::SaveReward_Gold(float EnemyReward_Gold)
{
	RewardGold=+EnemyReward_Gold;
}


