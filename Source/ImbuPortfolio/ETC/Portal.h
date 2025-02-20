#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Portal.generated.h"

UCLASS()
class IMBUPORTFOLIO_API APortal : public AActor
{
	GENERATED_BODY()
	
public:	
	APortal();
	virtual void Tick(float DeltaTime) override;
public:
	UPROPERTY(EditAnywhere)
	USceneComponent* Root;
	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* StaticMesh;
	UPROPERTY(EditAnywhere)
	UMaterialInstance* StartLevelPortalMaterial;
	UPROPERTY(EditAnywhere)
	UMaterialInstance* BossLevelPortalMaterial;

public:
	UPROPERTY(EditAnywhere,Category="Levels")
	FName LevelName;
	
protected:
	virtual void BeginPlay() override;

public:
	UFUNCTION()
	virtual void NotifyActorBeginOverlap(AActor* OtherActor) override;
	UFUNCTION()
	void OpenPortal(FName OpenLevelName);


};
