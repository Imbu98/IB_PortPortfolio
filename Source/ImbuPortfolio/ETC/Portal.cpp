#include "Portal.h"


#include "ImbuPortfolio/Character/IBCharBase.h"
#include "ImbuPortfolio/Components/InventoryComponent.h"
#include "ImbuPortfolio/IB_Framework/IBGameInstance.h"
#include "ImbuPortfolio/Interface/GameMode_Interface.h"
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

	AIBCharBase* IBChar = Cast<AIBCharBase>(OtherActor);
	if (IBChar)
	{
		if (GetOwner()!=nullptr)
		{
			if (GetOwner()->GetClass()->ImplementsInterface(UGameMode_Interface::StaticClass()))
			{
				IGameMode_Interface* GameMode_Interface = Cast<IGameMode_Interface>(GetOwner());
				if (GameMode_Interface==nullptr)
				{
					GEngine->AddOnScreenDebugMessage(-1,1.0f,FColor::Red,TEXT("[EnemyBase::OnDeath] : GameMode_Interface Is Nullptr"));
					return;
				}
				IBChar->InventoryComponents->GetGold(GameMode_Interface->GetSaveReward_Gold());
				UIBGameInstance* IGI=Cast<UIBGameInstance>(GetGameInstance());
				if (IGI!=nullptr)
				{
					IGI->SaveGame();
				}
			}
		}
	}
	
	UGameplayStatics::OpenLevel(GetWorld(),LevelName);
		
	

}

void APortal::OpenPortal(FName OpenLevelName)
{
	LevelName= OpenLevelName;
	StaticMesh->SetVisibility(true, true);
	StaticMesh->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("A Portal opened somewhere"));
	
}

void APortal::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

