#include "IBCharAnimInstance.h"

#include "KismetAnimationLibrary.h"
#include "KismetAnimationLibrary.h"
#include "KismetAnimationLibrary.h"
#include "GameFramework/Character.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Kismet/KismetMathLibrary.h"
#include "Kismet/KismetSystemLibrary.h"

void FIBAnimInstanceProxy::InitializeObjects(UAnimInstance* InAnimInstance)
 {
 	FAnimInstanceProxy::InitializeObjects(InAnimInstance);
 
 	Owner = InAnimInstance->TryGetPawnOwner();
 	if (Owner==nullptr)
 	{
 		return;
 	}
 
 	MovementComponent=Cast<UCharacterMovementComponent>(Owner->GetMovementComponent());
 	
 	ACharacter* Character =Cast<ACharacter>(Owner);
 	IBChar = Cast<AIBCharBase>(Character);
 	CapsuleComponent=IBChar->GetCapsuleComponent();
 }
 
 void FIBAnimInstanceProxy::PreUpdate(UAnimInstance* InAnimInstance, float DeltaSeconds)
 {
 	FAnimInstanceProxy::PreUpdate(InAnimInstance, DeltaSeconds);
 
 	if (::IsValid(Owner))
 	{
 		ActorLocation= Owner->GetActorLocation();
 		ActorRotation=Owner->GetActorRotation();
 		AimRotationPitch= Owner->GetBaseAimRotation().Pitch;
 		
 	}
 
 	if (::IsValid(MovementComponent))
 	{
 		Velocity= MovementComponent->Velocity;
 		CurrentAcceleration = MovementComponent->GetCurrentAcceleration();
 		
 		MovementMode=MovementComponent->MovementMode;
 		
 	}

	if (IsValid(CapsuleComponent))
		 	{
		CapsuleHeight= CapsuleComponent->GetScaledCapsuleHalfHeight();
			 }
 
 	
 }

 void FIBAnimInstanceProxy::Update(float DeltaSeconds)
 {
 	FAnimInstanceProxy::Update(DeltaSeconds);
 }
 
 void FIBAnimInstanceProxy::PostUpdate(UAnimInstance* InAnimInstance) const
 {
 	FAnimInstanceProxy::PostUpdate(InAnimInstance);
 }


///////////////////////////////////////////////////////////////////////////////////////////////////

 void UIBCharAnimInstance::NativeThreadSafeUpdateAnimation(float DeltaSecond)
 {
 	Super::NativeThreadSafeUpdateAnimation(DeltaSecond);

 	IBGetVelocity();
	IBGetAcceleration();
	IBGetLocationData();
	IBGetCharacterStates(DeltaSecond);
	IBGetRotationData(DeltaSecond);
	IBUpdateOrientationData();
	IBUpdateRootYawOffset(DeltaSecond);
 	
 	
 }

void UIBCharAnimInstance::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);

	
	SphereTrace();
	
}

void UIBCharAnimInstance::IBGetVelocity()
{
	IBCharVelocity= IBProxy.Velocity;
	IBCharVelocity2D = FVector(IBCharVelocity.X,IBCharVelocity.Y,0);
	IBVelocity2DLength = IBCharVelocity2D.Size();
	
}

void UIBCharAnimInstance::IBGetAcceleration()
{
	IBAcceleration = IBProxy.CurrentAcceleration;
	IBAcceleration2D=FVector(IBAcceleration.X,IBAcceleration.Y,0);
	float Length = IBAcceleration2D.Size2D();
	bool IsNearly = FMath::IsNearlyEqual(Length,0.0f,0.0000001f);
	IBIsAcceleration=!IsNearly;
}

void UIBCharAnimInstance::IBGetLocationData()
{
	IBLastFrameWorldLocation=IBWorldLocation;
	IBWorldLocation= IBProxy.ActorLocation;
	FVector Delta = IBWorldLocation-IBLastFrameWorldLocation;
	IBDeltaLocation=Delta.Length();
	
}

void UIBCharAnimInstance::IBGetCharacterStates(float DeltaSecond)
{

	// 점프관련
	IBVelocityZ = IBCharVelocity.Z;
	
	if (IBProxy.MovementMode==MOVE_Falling)
	{
		IBIsOnAir=true;
	}
	else
	{
		IBIsOnAir=false;
	}
	
	if(IBIsOnAir==true&& IBVelocityZ > 0.0f)
	{
		IBIsJumping=true;
	}
	else 
	{
		IBIsJumping=false;
	}
	
	if (IBIsOnAir==true&& IBVelocityZ <0.0f)
	{
		IBIsFalling=true;
	}
	else
	{
		IBIsFalling=false;
	}
	
	// 캐릭터가 정점 또는 최대 높이에 도달 했을 때
	if (IBIsJumping==true)
	{
		float GravityZ = IBProxy.MovementComponent->GetGravityZ(); 
		IBTimeToJumpApex=(0-IBVelocityZ)/(GravityZ*IBProxy.MovementComponent->GravityScale);
	}
	else
	{
		IBTimeToJumpApex=0;
	}
	
	// 떨어지는 시간
	if (IBIsFalling==true)
	{
		IBTimeFalling = IBTimeFalling+DeltaSecond;
	}
	else
	{
		if (IBIsJumping==true)
		{
			IBTimeFalling=0;
		}
	}
	
}

void UIBCharAnimInstance::IBGetRotationData(float DeltaSecond)
{
	IBLastFrameActorYaw = IBActorYaw;
	IBWorldRotation=IBProxy.ActorRotation;
	IBActorYaw=IBWorldRotation.Yaw;
	IBDeltaActorYaw = IBActorYaw - IBLastFrameActorYaw;

	IBAimPitch = FRotator::NormalizeAxis(IBProxy.AimRotationPitch);
	if (DeltaSecond>0.0f)
	{
		const float MagicVal = 5.0f;
		float CalVal = (IBDeltaActorYaw/DeltaSecond)/MagicVal;
		float MultiPlier = 0.0f;
		if (IBVelocityLocomotionDirection==E_LocomotionDirection::Forward)
		{
			MultiPlier = 1.0f;
		}
		else if (IBVelocityLocomotionDirection==E_LocomotionDirection::Backward)
		{
			MultiPlier = -1.0f;
		}
		else
		{
			MultiPlier = 0.0f;
		}
		IBLeanAngle = CalVal*MultiPlier;
		if (IBLeanAngle<-90.0f)
		{
			IBLeanAngle = -90.0f;
		}
		else if (IBLeanAngle>90.0f)
		{
			IBLeanAngle = 90.0f;
		}
	}
	
}

void UIBCharAnimInstance::IBUpdateOrientationData()
{
	IBLastFrameVelocityLocomotionDirection = IBVelocityLocomotionDirection;
	IBVelocityLocomotionAngle = UKismetAnimationLibrary::CalculateDirection(IBCharVelocity2D,IBWorldRotation);

	IBVelocityLocomotionAngleWithOffset=FRotator::NormalizeAxis(IBVelocityLocomotionAngle-IBRootYawOffset);
	
	IBAccelerationLocomotionAngle = UKismetAnimationLibrary::CalculateDirection(IBAcceleration2D,IBWorldRotation);
	
	IBVelocityLocomotionDirection = IBCalculateLocomotionDirection(IBVelocityLocomotionAngle,IBVelocityLocomotionDirection);
	IBAccelerationLocomotionDirection=IBCalculateLocomotionDirection(IBAccelerationLocomotionAngle,IBAccelerationLocomotionDirection);
}

E_LocomotionDirection UIBCharAnimInstance::IBCalculateLocomotionDirection(float CurrentLocomotionAngle,
	E_LocomotionDirection CurrentDirection, float BackwardMin, float BackwardMax, float ForwardMin, float ForwardMax,float DeadZone)
{
	switch (CurrentDirection)
	{
	case E_LocomotionDirection::Forward:
		{
			float Min = ForwardMin-DeadZone;
			float Max = ForwardMax+DeadZone;
			if (CurrentLocomotionAngle>=Min&&CurrentLocomotionAngle<=Max)
			{
				return E_LocomotionDirection::Forward;
			}
				
			break;
		}
	case E_LocomotionDirection::Backward:
		{
			float Min = BackwardMin+DeadZone;
			float Max = BackwardMax-DeadZone;
			if (CurrentLocomotionAngle<=Min||CurrentLocomotionAngle>Max)
			{
				return E_LocomotionDirection::Backward;
			}
			break;
		}
	case E_LocomotionDirection::Right:
		{
			float Min = ForwardMax-DeadZone;
			float Max = BackwardMax+DeadZone;
			if (CurrentLocomotionAngle>=Min&&CurrentLocomotionAngle<=Max)
			{
				return E_LocomotionDirection::Right;
			}
				
			break;
		}
	case E_LocomotionDirection::Left:
		{
			float Min = BackwardMin-DeadZone;
			float Max = ForwardMin+DeadZone;
			if (CurrentLocomotionAngle>=Min&&CurrentLocomotionAngle<=Max)
			{
				return E_LocomotionDirection::Left;
			}
				
			break;
		}
	default:
		break;
	}

	if (CurrentLocomotionAngle<BackwardMin||CurrentLocomotionAngle>BackwardMax)
	{
		IBVelocityLocomotionDirection=E_LocomotionDirection::Backward;
		return E_LocomotionDirection::Backward;
	}
	else if (CurrentLocomotionAngle>=ForwardMin&&CurrentLocomotionAngle<=ForwardMax)
	{
		IBVelocityLocomotionDirection=E_LocomotionDirection::Forward;
		return E_LocomotionDirection::Forward;
	}
	else if (CurrentLocomotionAngle>0.0f)
	{
		IBVelocityLocomotionDirection=E_LocomotionDirection::Right;
		return E_LocomotionDirection::Right;
	}
	IBVelocityLocomotionDirection=E_LocomotionDirection::Left;
	return E_LocomotionDirection::Left;
}

void UIBCharAnimInstance::IBUpdateRootYawOffset(float DeltaSecond)
{
	
		// float Angle=IBRootYawOffset +(IBDeltaActorYaw*-1.0f);
		//  IBSetRootYawOffset(Angle);
		
	
	
		IBSetRootYawOffset(0.0f);
		float Angle = UKismetMathLibrary::FloatSpringInterp(IBRootYawOffset,0.0f,IBRootYawOffsetSpringState,80.0f,1.0f,DeltaSecond,
			0.5f,0.5f);
		IBSetRootYawOffset(Angle);
	
	
}

void UIBCharAnimInstance::IBSetRootYawOffset(float Angle)
{
	IBRootYawOffset=FRotator::NormalizeAxis(Angle);
}


void UIBCharAnimInstance::SphereTrace()
 {
 	TArray<AActor*> ActorsToIgnore;
 	FHitResult OutHit;
	
 	FVector StartLocation= IBProxy.ActorLocation-FVector(0,0,IBProxy.CapsuleHeight);
 	FVector EndLocation= IBProxy.ActorLocation-FVector(0,0,1000.f);
 	bool Hit = UKismetSystemLibrary::SphereTraceSingle(GetWorld(), StartLocation, EndLocation, 10.0f,
	 ETraceTypeQuery::TraceTypeQuery1, false, ActorsToIgnore, EDrawDebugTrace::None, OutHit, true, FLinearColor::Red, FLinearColor::Green, 10.0f);
 	if (Hit)
 	{
 		float Distance = OutHit.Distance;
 		IBGroundDistance=Distance;
 	}
 }

