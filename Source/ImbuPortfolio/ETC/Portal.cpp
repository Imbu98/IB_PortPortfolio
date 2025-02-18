#include "Portal.h"


#include "Kismet/GameplayStatics.h"

class UEnhancedInputLocalPlayerSubsystem;

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

	
		UGameplayStatics::OpenLevel(GetWorld(),LevelName);
		
	

}

void APortal::PortalOpenLevel()
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

