#include "Portal.h"

#include "Kismet/GameplayStatics.h"

APortal::APortal()
{
	PrimaryActorTick.bCanEverTick = true;

	
	Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	SetRootComponent(Root);

	StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
	StaticMesh->SetupAttachment(Root);
	

}

void APortal::BeginPlay()
{
	Super::BeginPlay();
	
}

void APortal::NotifyActorBeginOverlap(AActor* OtherActor)
{
	Super::NotifyActorBeginOverlap(OtherActor);

	if (LevelToLoad!=nullptr)
	{
		UGameplayStatics::OpenLevelBySoftObjectPtr(this, LevelToLoad, true);
	}

}

void APortal::PortalOpenLevel(FName Name)
{
	
}

void APortal::OpenPortal()
{
}

void APortal::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

