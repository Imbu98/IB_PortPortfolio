#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "ImbuPortfolio/Enum/E_Enemy.h"
#include "Enemy_Base_AIController.generated.h"

UCLASS()
class IMBUPORTFOLIO_API AEnemy_Base_AIController : public AAIController
{
	GENERATED_BODY()

public:
	AEnemy_Base_AIController();
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI")
	TObjectPtr<UBehaviorTree> EnemyBehaviorTree;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI")
	UAIPerceptionComponent* AIPerceptionComponent;
	
public:
	UPROPERTY()
	UBlackboardComponent* BlackboardComponent;
	UPROPERTY(EditAnywhere,BluePrintReadWrite)
	AActor* EnemyAttackTarget;
	
public:
	UFUNCTION(BlueprintCallable)
	void SetStateAsPassive();
	UFUNCTION(BlueprintCallable)
	void SetStateAsAttacking(AActor* AttackTarget);
	UFUNCTION(BlueprintCallable)
	void HandleSensedSight(AActor* Actor);
	UFUNCTION(BlueprintCallable)
	E_EnemyState GetCurrentState();
	UFUNCTION(BlueprintCallable)
	void HandleSensedSound(FVector Location);
	UFUNCTION(BlueprintCallable)
	void SetStateAsInvestigating(FVector Location);
	UFUNCTION(BlueprintCallable)
	void HandleSensedDamage(AActor* Actor);
	UFUNCTION(BlueprintCallable)
	void CanSenseActor(AActor* Actor, E_AiSense Sense,bool& Sensed,FAIStimulus& Stimuls);
	
public:
	
	virtual bool RunBehaviorTree(UBehaviorTree* BTAsset) override;

	virtual void OnPossess(APawn* InPawn) override;

	virtual void ActorsPerceptionUpdated(const TArray<AActor*>& UpdatedActors);
	
};



