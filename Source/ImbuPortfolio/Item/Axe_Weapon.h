#pragma once

#include "CoreMinimal.h"
#include "BaseEquippable.h"
#include "Components/TimelineComponent.h"
#include "ImbuPortfolio/Character/IBCharBase.h"
#include "Axe_Weapon.generated.h"

DECLARE_DELEGATE(FOnAxeMoveComplete);

UCLASS()
class IMBUPORTFOLIO_API AAxe_Weapon : public ABaseEquippable
{
	GENERATED_BODY()

protected:
	AAxe_Weapon();
	virtual void BeginPlay() override;
public:
	virtual void Tick(float DeltaTime) override;
	
	

public:
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category=ItemInfo)
	class UTexture2D* AxeThumbnail;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = ItemInfo)
	class UStaticMesh* AxeStaticMesh;
	

public:
	TMap<E_ItemRarity, FName> RarityToRowMap = {
		{E_ItemRarity::Common, FName("Axe_Common")},
		{E_ItemRarity::Rare, FName("Axe_Rare")},
		{E_ItemRarity::Epic, FName("Axe_Epic")},
		{E_ItemRarity::Legendary, FName("Axe_Legendary")}
	};

public:
	void InitializeItem(E_ItemRarity ItemRarity);

	
private:
	UPROPERTY()
	FVector StartLocation;
	UPROPERTY()
	FVector TargetLocation;
	UPROPERTY()
	FVector AxeStartLocation;
	UPROPERTY()
	FVector NewLocation;


	UPROPERTY()
	ACharacter* OwnerCharacter;
	UPROPERTY()
	AActor* TargetActor;
	
	UPROPERTY(EditAnywhere, Category = "Timeline")
	UCurveFloat* MoveCurve;  
	UPROPERTY(EditAnywhere, Category = "Timeline")
	UTimelineComponent* MoveTimeline;
	UPROPERTY(EditAnywhere, Category = "Timeline")
	class URotatingMovementComponent* RotatingMovement;
	
public:
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	float MoveSpeed=0.0f;
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	bool IsToActor=false;

public:
	UFUNCTION()
	void ThrowToTarget(AActor* InTargetActor,float AttackRate);
	UFUNCTION()
	void UpdateMovement(float Value);
	UFUNCTION()
	void OnReachedTarget();
	
	
	

};

