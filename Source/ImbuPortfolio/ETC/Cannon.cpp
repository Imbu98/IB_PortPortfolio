#include "Cannon.h"

#include "EnhancedInputSubsystems.h"
#include "EnhancedInputComponent.h"
#include "Blueprint/UserWidget.h"
#include "Camera/CameraComponent.h"
#include "Components/BoxComponent.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "ImbuPortfolio/Character/IBCharBase.h"
#include "ImbuPortfolio/IB_Framework/IB_PlayerController.h"
#include "ImbuPortfolio/Widget/W_Cannon.h"
#include "Kismet/GameplayStatics.h"

class UEnhancedInputLocalPlayerSubsystem;

ACannon::ACannon()
{
	PrimaryActorTick.bCanEverTick = true;

	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = true;
	bUseControllerRotationRoll = false;

	DefaultSceneRoot=CreateDefaultSubobject<USceneComponent>("DefaultSceneRoot");
	SetRootComponent(DefaultSceneRoot);

	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(GetRootComponent());
	CameraBoom->bUsePawnControlRotation = false;
	

	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);
	FollowCamera->bUsePawnControlRotation = false;

	Cart= CreateDefaultSubobject<UStaticMeshComponent>("Cart");
	Cart->SetupAttachment(GetRootComponent());
	
	CannonBody= CreateDefaultSubobject<UStaticMeshComponent>("CannonBody");
	CannonBody->SetupAttachment(Cart);

	CannonMuzzle=CreateDefaultSubobject<USceneComponent>("CannonMuzzle");
	CannonMuzzle->SetupAttachment(CannonBody);

	BoardingTriggerBox = CreateDefaultSubobject<UBoxComponent>("BoardingTriggerBox");
	BoardingTriggerBox->SetupAttachment(DefaultSceneRoot);
	BoardingTriggerBox->OnComponentBeginOverlap.AddDynamic(this,&ThisClass::OverlapCannonTrigger);
	BoardingTriggerBox->OnComponentEndOverlap.AddDynamic(this,&ThisClass::EndOverlapCannonTrigger);

	
	

}

void ACannon::BeginPlay()
{
	Super::BeginPlay();
	
	
	
}


void ACannon::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ACannon::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	GetIBPlayerController();

	if (PlayerController==nullptr)
	{
		return;
	}
		UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer());
		if (Subsystem)
		{
			Subsystem->AddMappingContext(IMC_Cannon,1);
		}
		if (UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(PlayerInputComponent))
		{
			EnhancedInputComponent->BindAction(IA_CannonCameraMove, ETriggerEvent::Triggered, this, &ThisClass::CannonCameraMove);
			EnhancedInputComponent->BindAction(IA_CannonRotation, ETriggerEvent::Triggered, this, &ThisClass::CannonRotation);
			EnhancedInputComponent->BindAction(IA_CannonShoot, ETriggerEvent::Triggered, this, &ThisClass::ChargeCannonPower);
			EnhancedInputComponent->BindAction(IA_CannonShoot, ETriggerEvent::Completed, this, &ThisClass::ShootChar);
		}
	
}



void ACannon::CannonRotation(const FInputActionValue& Value)
{
	if (IsOnCharging)
	{
		return;
	}
	float InputValue  = Value.Get<float>();
	FRotator NewRotation = CannonBody->GetRelativeRotation();
	NewRotation.Roll = NewRotation.Roll + InputValue  * CannonRotationSpeed * GetWorld()->GetDeltaSeconds();
	CannonBody->SetRelativeRotation(NewRotation);
}


void ACannon::CannonCameraMove(const FInputActionValue& Value)
{
	if (IsOnCharging)
	{
		return;
	}
	FVector2D Input = CameraMoveSpeed*Value.Get<FVector2D>();
	
	FVector CameraOffset = FVector(Input.Y, Input.X, 0) * 200.f * GetWorld()->GetDeltaSeconds();
	FollowCamera->AddLocalOffset(CameraOffset, true);
}

void ACannon::ChargeCannonPower()
{
		IsOnCharging=true;
		CurrentCannonPower+=ChargePowerSpeed*GetWorld()->GetDeltaSeconds();
		if (CurrentCannonPower >= MaxCannonPower)
		{
			CurrentCannonPower = MaxCannonPower;
		}
		UpdateChargeBar();
	
}

void ACannon::ShootChar()
{
	GetIBPlayerController();
	
	if (IBPlayerController==nullptr)
	{
		return;
	}
		
		if (BoardingActor!=nullptr)
		{
			AIBCharBase* IBChar = Cast<AIBCharBase>(BoardingActor);
			if (IBChar!=nullptr&&CannonMuzzle!=nullptr)
			{
				FVector ForwardVector = CannonMuzzle->GetForwardVector()*(CurrentCannonPower);
				//FVector UpVector = CannonMuzzle->GetUpVector()*(CurrentCannonPower);
				FVector ShootingVector = ForwardVector*100.f;//+UpVector;
				IBChar->SetActorLocation(CannonMuzzle->GetComponentLocation());
				IBChar->LaunchCharacter(ShootingVector,true,true);
				IBChar->SwitchController();
				IBChar->IsNearCannon=false;
				IBChar->IsFlying=true;
				IBChar->PlayFlyingAnimation();
				
				
				
				CurrentCannonPower=0.0f;
				IsOnCharging=false;
				
			}
		}
		UpdateChargeBar();
	
}

void ACannon::UpdateChargeBar()
{
	GetIBPlayerController();

	if (IBPlayerController)
	{
		if (IBPlayerController->CannonWidget!=nullptr)
		{
			IBPlayerController->CannonWidget->UpdatePowerProgressBar();
		}
	}
	
}

void ACannon::GetIBPlayerController()
{
	PlayerController = Cast<APlayerController>(UGameplayStatics::GetPlayerController(GetWorld(),0));
	
	if (PlayerController)
	{
		IBPlayerController = Cast<AIB_PlayerController>(PlayerController);
		if (IBPlayerController==nullptr)
		{
			return;
		}
		
	}
}



void ACannon::OverlapCannonTrigger(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
                                   UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	AIBCharBase* CharBase = Cast<AIBCharBase>(OtherActor);
	if (CharBase)
	{
		IBPlayerController = Cast<AIB_PlayerController>(CharBase->GetController());
		if (IBPlayerController)
		{
			IBPlayerController->VisibleCannonWidget();
			CharBase->IsNearCannon=true;
			BoardingActor=OtherActor;
		}
	}
}

void ACannon::EndOverlapCannonTrigger(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	AIBCharBase* CharBase = Cast<AIBCharBase>(OtherActor);
	if (CharBase)
	{
		IBPlayerController = Cast<AIB_PlayerController>(CharBase->GetController());
		if (IBPlayerController)
		{
			IBPlayerController->CollapsedCannonWidget();
			CharBase->GetCameraBoom()->TargetOffset=CharBase->DefaultCameraOffset;
			CharBase->IsNearCannon=false;
			BoardingActor=nullptr;
			
		}
	}
}

