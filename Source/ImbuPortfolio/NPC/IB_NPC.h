#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "ImbuPortfolio/Interface/Action_Interface.h"
#include "IB_NPC.generated.h"

UCLASS()
class IMBUPORTFOLIO_API AIB_NPC : public ACharacter , public IAction_Interface
{
	GENERATED_BODY()

public:
	AIB_NPC();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

public:
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category=Interaction)
	class UWidgetComponent* WBP_Interact;
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category=Interaction)
	class UMaterialInstance* InteractOverlayMaterial;

	UFUNCTION(BlueprintCallable)
	void OnComponentBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult);
	UFUNCTION(BlueprintCallable)
	void OnComponentEndOverlap(UPrimitiveComponent* OverlappedComponent ,AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

	
};


