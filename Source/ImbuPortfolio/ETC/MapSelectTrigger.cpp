#include "MapSelectTrigger.h"

#include "Components/BoxComponent.h"
#include "ImbuPortfolio/Character/IBCharBase.h"
#include "Kismet/GameplayStatics.h"

AMapSelectTrigger::AMapSelectTrigger()
{
	PrimaryActorTick.bCanEverTick = true;

	Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	SetRootComponent(Root);

	TriggerBox= CreateDefaultSubobject<UBoxComponent>(TEXT("TriggerBox"));
	TriggerBox->SetupAttachment(Root);

	TriggerBox->OnComponentBeginOverlap.AddDynamic(this,&ThisClass::MapSelect);

}

void AMapSelectTrigger::BeginPlay()
{
	Super::BeginPlay();

	
	
}

void AMapSelectTrigger::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


void AMapSelectTrigger::MapSelect(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherActor)
	{
		AIBCharBase* IBCharBase = Cast<AIBCharBase>(OtherActor);
		if (IBCharBase)
		{
			IBCharBase->GetMesh()->SetSimulatePhysics(false);
			UGameplayStatics::OpenLevel(GetWorld(),LevelName);
		}
	}
	
}


