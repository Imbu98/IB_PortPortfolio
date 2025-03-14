#include "IBGameModeBase.h"

#include "IBGameInstance.h"
#include "IB_PlayerController.h"
#include "Engine/TargetPoint.h"
#include "ImbuPortfolio/EnemyChar/Enemy_Base.h"
#include "ImbuPortfolio/ETC/Portal.h"
#include "Kismet/GameplayStatics.h"

AIBGameModeBase::AIBGameModeBase()
{
	
}

void AIBGameModeBase::BeginPlay()
{
	Super::BeginPlay();

	RodingScreen();

	RewardGold=0;

	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AEnemy_Base::StaticClass(), GetEnemyChar);
	
	IBGameInstance = Cast<UIBGameInstance>(GetGameInstance());
	
	
		IBGameInstance->LoadGame();
	
	
}

void AIBGameModeBase::SpawnPortal()
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
			float TotalProbability = StartLevelProbability+BossLevelProbability;
			float LevelProbability= FMath::RandRange(0.0f,TotalProbability);
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

void AIBGameModeBase::RodingScreen()
{
	AIB_PlayerController* InGamePC = Cast<AIB_PlayerController>(UGameplayStatics::GetPlayerController(GetWorld(),0));
	if (InGamePC)
	{
		InGamePC->OpenRodingScreen();
		FTimerHandle TimerHandle;
		GetWorld()->GetTimerManager().SetTimer(TimerHandle, [InGamePC,this]()
			{
			InGamePC->CloseRodingScreen();
			}, 2.0f, false);
		
	}
}

void AIBGameModeBase::RemoveEnemyChar(AActor* EnemyActor)
{
	if (EnemyActor)
	{
		GetEnemyChar.Remove(EnemyActor);
		EnemyActor->SetLifeSpan(7.0f);
		if (GetEnemyChar.IsEmpty())
		{
			IBGameInstance->IncreaseDungeonClearCounting();
			SpawnPortal();
			
		}				
		
	}

	else
	{
		
	}
}

void AIBGameModeBase::SaveReward_Gold(float EnemyReward_Gold)
{
	RewardGold+=EnemyReward_Gold;
}

