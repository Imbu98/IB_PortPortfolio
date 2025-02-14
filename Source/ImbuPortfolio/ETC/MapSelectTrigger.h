#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MapSelectTrigger.generated.h"

UCLASS()
class IMBUPORTFOLIO_API AMapSelectTrigger : public AActor
{
	GENERATED_BODY()
	
public:	
	AMapSelectTrigger();
	virtual void Tick(float DeltaTime) override;

protected:
	virtual void BeginPlay() override;

public:
	UPROPERTY(EditAnywhere)
	USceneComponent* Root;
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	class UBoxComponent* TriggerBox;

public:
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category = "Levels")
	FName LevelName;

public:
	UFUNCTION(BlueprintCallable)
	void MapSelect(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult);
	

	

};
