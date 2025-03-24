#include "CannonVisibleTriggerBox.h"

#include "Components/BoxComponent.h"
#include "ImbuPortfolio/GameMode/StartLevelGameMode.h"
#include "Kismet/GameplayStatics.h"

ACannonVisibleTriggerBox::ACannonVisibleTriggerBox()
{
	PrimaryActorTick.bCanEverTick = true;

	Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	SetRootComponent(Root);

	TriggerBox= CreateDefaultSubobject<UBoxComponent>(TEXT("TriggerBox"));
	TriggerBox->SetupAttachment(Root);

	TriggerBox->OnComponentBeginOverlap.AddDynamic(this,&ThisClass::VisibleCannon);

}

void ACannonVisibleTriggerBox::BeginPlay()
{
	Super::BeginPlay();
	
}

void ACannonVisibleTriggerBox::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ACannonVisibleTriggerBox::VisibleCannon(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	AStartLevelGameMode* StartLevelGameMode = Cast<AStartLevelGameMode>( UGameplayStatics::GetGameMode(GetWorld()));
	if (StartLevelGameMode)
	{
		StartLevelGameMode->ShowCannon();
	}
}

