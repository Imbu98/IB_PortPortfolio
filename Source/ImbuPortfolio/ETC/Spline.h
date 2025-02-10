#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Spline.generated.h"

UCLASS()
class IMBUPORTFOLIO_API ASpline : public AActor
{
	GENERATED_BODY()
	
public:	
	ASpline();
	virtual void Tick(float DeltaTime) override;

protected:
	virtual void BeginPlay() override;

public:	
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	USceneComponent* Root;
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	class USplineComponent* Spline;

public:
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="Patrol")
	int PatrolIndex;
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="Patrol")
	int Direction;
public:
	UFUNCTION()
	void IncrementPatrolRoute();
	UFUNCTION()
	FVector GetSplinePointAsWorldPosition();
	
};
