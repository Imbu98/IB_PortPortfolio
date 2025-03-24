#include "ResetCharacterTrigger.h"

#include "Cannon.h"
#include "Components/BoxComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/GameModeBase.h"
#include "GameFramework/PlayerStart.h"
#include "ImbuPortfolio/Character/IBCharBase.h"
#include "ImbuPortfolio/Components/StateComponent.h"
#include "ImbuPortfolio/Widget/W_Cannon.h"
#include "Kismet/GameplayStatics.h"

AResetCharacterTrigger::AResetCharacterTrigger()
{
	PrimaryActorTick.bCanEverTick = true;

	Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	SetRootComponent(Root);

	TriggerBox= CreateDefaultSubobject<UBoxComponent>(TEXT("TriggerBox"));
	TriggerBox->SetupAttachment(Root);

	TriggerBox->OnComponentBeginOverlap.AddDynamic(this,&ThisClass::ResetCharacter);


}

void AResetCharacterTrigger::BeginPlay()
{
	Super::BeginPlay();
	
}

void AResetCharacterTrigger::ResetCharacter(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherActor)
	{
		AIBCharBase* IBChar = Cast<AIBCharBase>(OtherActor);
		if (IBChar)
		{
			AIB_PlayerController* IB_PlayerController = Cast<AIB_PlayerController>( IBChar->GetController());
		
			AActor* PlayerStart= UGameplayStatics::GetActorOfClass(GetWorld(),APlayerStart::StaticClass());
			if (PlayerStart)
			{
				IBChar->SetActorLocation(PlayerStart->GetActorLocation());
				IBChar->GetCharacterMovement()->StopMovementImmediately();
				IBChar->GetMesh()->GetAnimInstance()->StopAllMontages(0.5f);
				IBChar->IsFlying=false;
				IBChar->IsNearCannon=false;
				
				if (IB_PlayerController)
				{
					IB_PlayerController->CollapsedCannonWidget();
				}
			}
			
		}
	}
	
	
}

void AResetCharacterTrigger::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

