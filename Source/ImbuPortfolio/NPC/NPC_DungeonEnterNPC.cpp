#include "NPC_DungeonEnterNPC.h"
#include "../Character/IBCharBase.h"
#include "Blueprint/UserWidget.h"
#include "../Components/StateComponent.h"
#include "../Widget/W_DungeonEnter.h"
#include "Kismet/GameplayStatics.h"

void ANPC_DungeonEnterNPC::Interaction()
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
