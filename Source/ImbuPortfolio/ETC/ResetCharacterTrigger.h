#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ImbuPortfolio/Character/IBCharBase.h"
#include "ResetCharacterTrigger.generated.h"

UCLASS()
class IMBUPORTFOLIO_API AResetCharacterTrigger : public AActor
{
	GENERATED_BODY()
	
public:	
	AResetCharacterTrigger();
	virtual void Tick(float DeltaTime) override;

protected:
	virtual void BeginPlay() override;

public:
	UPROPERTY(EditAnywhere)
	USceneComponent* Root;
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	class UBoxComponent* TriggerBox;
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	TSubclassOf<AIBCharBase> IBCharClass;

public:
	UFUNCTION(BlueprintCallable)
	void ResetCharacter(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult);
	

};
