#include "Enemy_Base_AIController.h"

#include "BehaviorTree/BlackboardComponent.h"
#include "GameFramework/Character.h"
#include "ImbuPortfolio/Enum/E_Enemy.h"
#include "Kismet/GameplayStatics.h"
#include "Perception/AIPerceptionComponent.h"
#include "Perception/AISense_Damage.h"
#include "Perception/AISense_Hearing.h"
#include "Perception/AISense_Sight.h"

AEnemy_Base_AIController::AEnemy_Base_AIController()
{
	AIPerceptionComponent=CreateDefaultSubobject<UAIPerceptionComponent>(TEXT("AIPerceptionComponent"));
}


bool AEnemy_Base_AIController::RunBehaviorTree(UBehaviorTree* BTAsset)
{
	Super::RunBehaviorTree(BTAsset);
	
	return false;
}

void AEnemy_Base_AIController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);

	RunBehaviorTree(EnemyBehaviorTree);
	BlackboardComponent= this->Blackboard;
}


void AEnemy_Base_AIController::SetStateAsPassive()
{
	if (BlackboardComponent)
	{
		int8 EnemyState = static_cast<int8>(E_EnemyState::Passive);
		BlackboardComponent->SetValueAsEnum(TEXT("EnemyStateKey"),EnemyState);
	}
	
}

void AEnemy_Base_AIController::SetStateAsAttacking(AActor* AttackTarget)
{
	EnemyAttackTarget=AttackTarget;
	if (BlackboardComponent)
	{
		BlackboardComponent->SetValueAsObject(TEXT("AttackTargetKey"),EnemyAttackTarget);
	}
}

void AEnemy_Base_AIController::HandleSensedSight(AActor* Actor)
{
	if (GetCurrentState()==E_EnemyState::Investigating||GetCurrentState()==E_EnemyState::Passive)
	{
		if (Actor==UGameplayStatics::GetPlayerCharacter(GetWorld(),0)->GetOwner())
		{
			SetStateAsAttacking(Actor);
		}
	}
	
}

E_EnemyState AEnemy_Base_AIController::GetCurrentState()
{
	if (BlackboardComponent)
	{
		return static_cast<E_EnemyState>(BlackboardComponent->GetValueAsEnum("EnemyStateKey"));
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1,2.0f,FColor::Red,TEXT("Blackboard does not exist"));
		return E_EnemyState::Dead;
	}
	
}

void AEnemy_Base_AIController::HandleSensedSound(FVector Location)
{
	if (GetCurrentState()==E_EnemyState::Passive||GetCurrentState()==E_EnemyState::Investigating)
	{
		SetStateAsInvestigating(Location);
	}
}

void AEnemy_Base_AIController::SetStateAsInvestigating(FVector Location)
{
	if (BlackboardComponent)
	{
		int8 EnemyState = static_cast<int8>(E_EnemyState::Investigating);
		BlackboardComponent->SetValueAsEnum("EnemyStateKey",EnemyState);

		BlackboardComponent->SetValueAsVector("PointOfInterestKey",Location);
	}
}

void AEnemy_Base_AIController::HandleSensedDamage(AActor* Actor)
{
	if (GetCurrentState()==E_EnemyState::Passive||GetCurrentState()==E_EnemyState::Investigating)
	{
		SetStateAsAttacking(Actor);
	}
}

void AEnemy_Base_AIController::CanSenseActor(AActor* Actor, E_AiSense Sense,bool& Sensed,FAIStimulus& Stimuls)
{
	FActorPerceptionBlueprintInfo Info;
	PerceptionComponent->GetActorsPerception(Actor,Info);
	
	for ( FAIStimulus AIStimulus : Info.LastSensedStimuli)
	{
		TSubclassOf<UAISense> SenseClass;
		
		if (Sense==E_AiSense::Sight)
		{
			SenseClass= UAISense_Sight::StaticClass();
		}
		else if (Sense==E_AiSense::Damage)
		{
			SenseClass= UAISense_Damage::StaticClass();
		}
		else if (Sense==E_AiSense::Hearing)
		{
			SenseClass= UAISense_Hearing::StaticClass();
		}

		if (SenseClass==UAIPerceptionSystem::GetSenseClassForStimulus(GetWorld(),AIStimulus))
		{
			Sensed=AIStimulus.WasSuccessfullySensed();
			Stimuls=AIStimulus;
		}
	}
}
