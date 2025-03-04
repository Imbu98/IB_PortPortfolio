#include "Enemy_Base_AIController.h"

#include "BehaviorTree/BlackboardComponent.h"
#include "GameFramework/Character.h"
#include "ImbuPortfolio/Enum/E_Enemy.h"
#include "ImbuPortfolio/Interface/AI_Interface.h"
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

	if (InPawn==nullptr)
	{
		return;
	}
	if (InPawn->GetClass()->ImplementsInterface(UAI_Interface::StaticClass()))
	{
		IAI_Interface* AI_Interface = Cast<IAI_Interface>(InPawn);
		if (AI_Interface)
		{
			float IdealAttackRange;
			float DefendRadiusRange;
			AI_Interface->GetIdealRange(IdealAttackRange,DefendRadiusRange);
			BlackboardComponent->SetValueAsFloat(TEXT("DefendRadiusKey"),DefendRadiusRange);
			BlackboardComponent->SetValueAsFloat(TEXT("IdealRangeKey"),IdealAttackRange);
		}
	}
}

void AEnemy_Base_AIController::ActorsPerceptionUpdated(const TArray<AActor*>& UpdatedActors)
{
	Super::ActorsPerceptionUpdated(UpdatedActors);
	bool sensed;
	FAIStimulus Stimulus;
	

	for (AActor* UpdatedActor : UpdatedActors)
	{
		
			CanSenseActor(UpdatedActor,E_AiSense::Sight,sensed,Stimulus);
			if (sensed==true)
			{
				HandleSensedSight(UpdatedActor);
			}
	}
	for (AActor* UpdatedActor : UpdatedActors)
	{
		
		CanSenseActor(UpdatedActor,E_AiSense::Hearing,sensed,Stimulus);
		if (sensed==true)
		{
			HandleSensedSound(Stimulus.StimulusLocation);
		}
	}
	for (AActor* UpdatedActor : UpdatedActors)
	{
		
		CanSenseActor(UpdatedActor,E_AiSense::Damage,sensed,Stimulus);
		if (sensed==true)
		{
			HandleSensedDamage(UpdatedActor);
		}
	}
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
		int8 EnemyState = static_cast<int8>(E_EnemyState::Attacking);
		BlackboardComponent->SetValueAsEnum(TEXT("EnemyStateKey"),EnemyState);
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

void AEnemy_Base_AIController::CanSenseActor(AActor* Actor, E_AiSense Sense,bool &Sensed,FAIStimulus &Stimuls)
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
