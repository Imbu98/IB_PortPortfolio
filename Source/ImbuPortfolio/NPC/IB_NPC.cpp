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




