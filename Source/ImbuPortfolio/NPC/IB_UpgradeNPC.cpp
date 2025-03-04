#include "IB_UpgradeNPC.h"
#include "../Character/IBCharBase.h"
#include "../Components/StateComponent.h"
#include "Blueprint/UserWidget.h"
#include "../Widget/W_UpgradeWidget.h"
#include "Kismet/GameplayStatics.h"



void AIB_UpgradeNPC::Interaction()
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
	if (WBP_UpgradeWidget)
	{
		UpgradeWidget=CreateWidget<UW_UpgradeWidget>(PC,WBP_UpgradeWidget);
		if (UpgradeWidget)
		{
			UpgradeWidget->AddToViewport(0);
			GetWorld()->GetFirstPlayerController()->bShowMouseCursor = true;
		}
	}
}
