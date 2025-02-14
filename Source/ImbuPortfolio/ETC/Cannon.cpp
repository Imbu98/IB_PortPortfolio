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

	boardingTriggerBox = CreateDefaultSubobject<UBoxComponent>("BoardingTriggerBox");
	boardingTriggerBox->SetupAttachment(DefaultSceneRoot);
	boardingTriggerBox->OnComponentBeginOverlap.AddDynamic(this,&ThisClass::OverlapCannonTrigger);
	boardingTriggerBox->OnComponentEndOverlap.AddDynamic(this,&ThisClass::EndOverlapCannonTrigger);

	
	

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

	if (APlayerController* PlayerController = Cast<APlayerController>(GetController()))
	{
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
	APlayerController* PlayerController = Cast<APlayerController>(UGameplayStatics::GetPlayerController(GetWorld(),0));
	if (PlayerController)
	{
		AIB_PlayerController* IBPlayerController = Cast<AIB_PlayerController>(PlayerController);
		if (IBPlayerController==nullptr)
		{
			return;
		}
		IsOnCharging=true;
		CurrentCannonPower+=ChargePowerSpeed*GetWorld()->GetDeltaSeconds();
		if (CurrentCannonPower >= MaxCannonPower)
		{
			CurrentCannonPower = MaxCannonPower;
		}
		if (IBPlayerController->CannonWidget!=nullptr)
		{
			IBPlayerController->CannonWidget->UpdatePowerProgressBar();
		}
		
	}
	
	
	
}

void ACannon::ShootChar()
{
	CurrentCannonPower=0.0f;
	IsOnCharging=false;
	APlayerController* PlayerController = Cast<APlayerController>(UGameplayStatics::GetPlayerController(GetWorld(),0));
	if (PlayerController)
	{
		AIB_PlayerController* IBPlayerController = Cast<AIB_PlayerController>(PlayerController);
		if (IBPlayerController==nullptr)
		{
			return;
		}
		if (IBPlayerController->CannonWidget!=nullptr)
		{
			IBPlayerController->CannonWidget->UpdatePowerProgressBar();
		}
		
	}
}



void ACannon::OverlapCannonTrigger(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
                                   UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	AIBCharBase* CharBase = Cast<AIBCharBase>(OtherActor);
	if (CharBase)
	{
		AIB_PlayerController* IBPlayerController = Cast<AIB_PlayerController>(CharBase->GetController());
		if (IBPlayerController)
		{
			IBPlayerController->VisibleCannonWidget();
			CharBase->IsNearCannon=true;
		}
	}
}

void ACannon::EndOverlapCannonTrigger(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	AIBCharBase* CharBase = Cast<AIBCharBase>(OtherActor);
	if (CharBase)
	{
		AIB_PlayerController* IBPlayerController = Cast<AIB_PlayerController>(CharBase->GetController());
		if (IBPlayerController)
		{
			IBPlayerController->CollapsedCannonWidget();
			CharBase->GetCameraBoom()->TargetOffset=CharBase->DefaultCameraOffset;
			CharBase->IsNearCannon=false;
			
		}
	}
}

