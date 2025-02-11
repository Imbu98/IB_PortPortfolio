#pragma once

#include "CoreMinimal.h"
#include "IBCharBase.h"
#include "Animation/AnimInstance.h"
#include "Animation/AnimInstanceProxy.h"
#include "../Enum/E_IBEnum.h"
#include "ImbuPortfolio/Interface/ABP_Interface.h"
#include "Kismet/KismetMathLibrary.h"
#include "IBCharAnimInstance.generated.h"

USTRUCT()
struct FIBAnimInstanceProxy :public FAnimInstanceProxy
{
	GENERATED_BODY()

	virtual void InitializeObjects(UAnimInstance* InAnimInstance) override;
	virtual void PreUpdate(UAnimInstance* InAnimInstance, float DeltaSeconds) override;
	virtual void Update(float DeltaSeconds) override;
	virtual void PostUpdate(UAnimInstance* InAnimInstance) const override;

public:
	UPROPERTY(Transient)
	TObjectPtr<class APawn> Owner;
	UPROPERTY(Transient)
	TObjectPtr<class UCharacterMovementComponent> MovementComponent;
	UPROPERTY(Transient)
	TObjectPtr<class UCapsuleComponent> CapsuleComponent;

	UPROPERTY(Transient)
	AIBCharBase* IBChar;

	UPROPERTY(Transient)
	float CapsuleHeight;


	UPROPERTY(Transient)
	FVector ActorLocation;

	UPROPERTY(Transient)
	FRotator ActorRotation;

	UPROPERTY(Transient)
	float AimRotationPitch;

	UPROPERTY(Transient)
	FVector Velocity;
	
	UPROPERTY(Transient)
	FVector CurrentAcceleration;
	
	UPROPERTY(Transient)
	TEnumAsByte<enum EMovementMode> MovementMode;
	


	
	
};

UCLASS()
class IMBUPORTFOLIO_API UIBCharAnimInstance : public UAnimInstance , public IABP_Interface
{
	GENERATED_BODY()

public:
	virtual void NativeThreadSafeUpdateAnimation(float DeltaSecond) override;
	
	virtual void NativeUpdateAnimation(float DeltaSeconds) override;

protected:
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category=Character)
	bool IBIsAiming;
	
 protected:
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category=IBVelocityData)
	FVector IBCharVelocity;
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category=IBVelocityData)
	FVector IBCharVelocity2D;
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category=IBVelocityData)
	float IBVelocityZ;
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category=IBVelocityData)
	float IBVelocity2DLength;
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category=IBVelocityData)
	float IBVelocityLocomotionAngle;

	protected:
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category=IBAccelerationData)
	FVector IBAcceleration;
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category=IBAccelerationData)
	FVector IBAcceleration2D;
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category=IBAccelerationData)
	bool IBIsAcceleration;
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category=IBAccelerationData)
	FVector IBPivotAcceleration2D;

	protected:
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category=IBJump)
	bool IBIsJumping;
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category=IBJump)
	bool IBIsFalling;
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category=IBJump)
	bool IBIsOnAir;
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category=IBJump)
	float IBTimeToJumpApex;
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category=IBJump)
	float IBTimeFalling;
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category=IBJump)
	float IBGroundDistance;

protected:
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category=IBLocationData)
	FVector IBWorldLocation;
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category=IBLocationData)
	FVector IBLastFrameWorldLocation;
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category=IBLocationData)
	float IBDeltaLocation;

protected:
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category=IBRotationData)
	FRotator IBWorldRotation;
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category=IBRotationData)
	float IBActorYaw;
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category=IBRotationData)
	float IBLastFrameActorYaw;
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category=IBRotationData)
	float IBDeltaActorYaw;
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category=IBRotationData)
	float IBLeanAngle;
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category=IBRotationData)
	float IBAccelerationLocomotionAngle;
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category=IBRotationData)
	float IBAimPitch;

protected:
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category=IBLocomotion)
	E_LocomotionDirection IBVelocityLocomotionDirection;
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category=IBLocomotion)
	E_LocomotionDirection IBLastFrameVelocityLocomotionDirection;
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category=IBLocomotion)
	E_LocomotionDirection IBAccelerationLocomotionDirection;
	
protected:
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category=IBRootYawOffset)
	float IBRootYawOffset;
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category=IBRootYawOffset)
	float IBVelocityLocomotionAngleWithOffset;
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category=IBRootYawOffset)
	FFloatSpringState IBRootYawOffsetSpringState;
	
public:
	UFUNCTION(BlueprintCallable,meta=(BlueprintThreadSafe))
	void IBGetVelocity();
	UFUNCTION(BlueprintCallable,meta=(BlueprintThreadSafe))
	void IBGetAcceleration();
	UFUNCTION(BlueprintCallable,meta=(BlueprintThreadSafe))
	void IBGetLocationData();
	UFUNCTION(BlueprintCallable,meta=(BlueprintThreadSafe))
	void IBGetCharacterStates(float DeltaSecond);
	UFUNCTION(BlueprintCallable,meta=(BlueprintThreadSafe))
	void SphereTrace();
	UFUNCTION(BlueprintCallable,meta=(BlueprintThreadSafe))
	void IBUpdateOrientationData();
	UFUNCTION(BlueprintCallable,meta=(BlueprintThreadSafe))
	E_LocomotionDirection IBCalculateLocomotionDirection(float CurrentLocomotionAngle,E_LocomotionDirection CurrentDirection,
		float BackwardMin=-130.f,float BackwardMax=130.f,float ForwardMin=-50.f,float ForwardMax=50.f,float DeadZone=20.f);
	UFUNCTION(BlueprintCallable,meta=(BlueprintThreadSafe))
	void IBGetRotationData(float DeltaSecond);
	UFUNCTION(BlueprintCallable,meta=(BlueprintThreadSafe))
	void IBSetRootYawOffset(float Angle);
	UFUNCTION(BlueprintCallable,meta=(BlueprintThreadSafe))
	void IBUpdateRootYawOffset(float DeltaSecond);
	

	
	
public:
	
	virtual void ReceiveIBIsAiming(bool IsAiming)override{IBIsAiming=IsAiming;} 
	
	


private:
	UPROPERTY(Transient)
	FIBAnimInstanceProxy IBProxy;

	virtual FAnimInstanceProxy* CreateAnimInstanceProxy() override
	{
		return &IBProxy;
	}
	virtual void DestroyAnimInstanceProxy(FAnimInstanceProxy* InProxy) override
	{
		
	}
};


