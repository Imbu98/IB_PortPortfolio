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

	StaticMesh->SetVisibility(false, false);

	StaticMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);
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
	StaticMesh->SetVisibility(true, true);
	StaticMesh->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("A Portal opened somewhere"));
}

void APortal::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

