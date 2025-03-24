#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CannonVisibleTriggerBox.generated.h"

UCLASS()
class IMBUPORTFOLIO_API ACannonVisibleTriggerBox : public AActor
{
	GENERATED_BODY()
	
public:	
	ACannonVisibleTriggerBox();
	virtual void Tick(float DeltaTime) override;

public:
	UPROPERTY(EditAnywhere)
	USceneComponent* Root;
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	class UBoxComponent* TriggerBox;

protected:
	virtual void BeginPlay() override;

public:
	UFUNCTION(BlueprintCallable)
	void VisibleCannon(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult);
	

};
