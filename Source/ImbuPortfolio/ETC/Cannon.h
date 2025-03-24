#pragma once

#include "CoreMinimal.h"
#include "InputAction.h"
#include "GameFramework/Pawn.h"
#include "Cannon.generated.h"

UCLASS()
class IMBUPORTFOLIO_API ACannon : public APawn
{
	GENERATED_BODY()

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* CameraBoom;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* FollowCamera;

	
public:
	ACannon();

	virtual void Tick(float DeltaTime) override;

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;


protected:
	virtual void BeginPlay() override;

public:
	FORCEINLINE  USpringArmComponent* GetCameraBoom() const { return CameraBoom; }
	FORCEINLINE  UCameraComponent* GetFollowCamera() const { return FollowCamera; }

public:
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category="Components")
	class USceneComponent* DefaultSceneRoot;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category="Components")
	class UStaticMeshComponent* CannonBody;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category="Components")
	UStaticMeshComponent* Cart;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category="Components")
	USceneComponent* CannonMuzzle;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category="Components")
	class UBoxComponent* BoardingTriggerBox;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category="Components")
	class UParticleSystemComponent* ParticleSystemComponent;


public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite )
	FVector NearCannonOffset;
	UPROPERTY(EditAnywhere, BlueprintReadWrite )
	float CannonRotationSpeed;
	UPROPERTY(EditAnywhere, BlueprintReadWrite )
	float ChargePowerSpeed;
	UPROPERTY(EditAnywhere, BlueprintReadWrite )
	bool IsOnCharging=false;
	UPROPERTY(EditAnywhere, BlueprintReadWrite )
	AActor* BoardingActor=nullptr;

public:
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category="Controller")
	class APlayerController* PlayerController;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category="Controller")
	class AIB_PlayerController* IBPlayerController;
	
	
public:
	UFUNCTION()
	void GetIBPlayerController();
	

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite,Category="CannonProperty" )
	float MaxCannonPower;
	UPROPERTY(EditAnywhere, BlueprintReadWrite,Category="CannonProperty" )
	float CurrentCannonPower=0;
	
public:
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category="Input")
	class UInputMappingContext* IMC_Cannon;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category="Input")
	class UInputAction* IA_CannonCameraMove;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category="Input")
	class UInputAction* IA_CannonRotation;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category="Input")
	class UInputAction* IA_CannonShoot;

public:
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category="CameraInputPropety")
	float CameraMoveSpeed;
	
public:
	UFUNCTION()
	void CannonRotation(const FInputActionValue& Value);
	UFUNCTION()
	void CannonCameraMove(const FInputActionValue& Value );
	UFUNCTION()
	void ChargeCannonPower();
	UFUNCTION()
	void ShootChar();
UFUNCTION()
	void UpdateChargeBar();
	UFUNCTION()
	void OverlapCannonTrigger(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
	UFUNCTION()
	void EndOverlapCannonTrigger( UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	
	

};


