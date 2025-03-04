#include "IB_NPC.h"

#include "Blueprint/UserWidget.h"
#include "ImbuPortfolio/Character/IBCharBase.h"
#include "../Components/StateComponent.h"
#include "ImbuPortfolio/Widget/W_DungeonEnter.h"
#include "Kismet/GameplayStatics.h"

AIB_NPC::AIB_NPC()
{
	PrimaryActorTick.bCanEverTick = true;

}

void AIB_NPC::BeginPlay()
{
	Super::BeginPlay();
	
}

void AIB_NPC::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AIB_NPC::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AIB_NPC::Interaction()
{
	APlayerController* PC = UGameplayStatics::GetPlayerController(GetWorld(),0);
	if (PC==nullptr)
	{
		return;
	}
	AIBCharBase* IBChar = Cast<AIBCharBase>(PC->GetPawn());
	if (IBChar)
	{
		IBChar->StateComponent->SetState(TAG_StatusInteracting);
	}
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, "NPCInteraction");
	if (WBP_DungeonEnter)
	{
		DungeonEnterWidget=CreateWidget<UW_DungeonEnter>(PC,WBP_DungeonEnter);
		if (DungeonEnterWidget)
		{
			DungeonEnterWidget->AddToViewport(0);
			GetWorld()->GetFirstPlayerController()->bShowMouseCursor = true;
		}
	}
}



