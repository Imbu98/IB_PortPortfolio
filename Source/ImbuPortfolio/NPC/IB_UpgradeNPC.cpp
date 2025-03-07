#include "IB_UpgradeNPC.h"
#include "../Character/IBCharBase.h"
#include "../Components/StateComponent.h"
#include "Blueprint/UserWidget.h"
#include "../Widget/W_UpgradeWidget.h"
#include "ImbuPortfolio/Widget/W_UpgradeInventory.h"
#include "Kismet/GameplayStatics.h"



void AIB_UpgradeNPC::Interaction(AActor* Player)
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
	
	if (WBP_UpgradeInventoryWidget)
	{
		UpgradeInventoryWidget=CreateWidget<UW_UpgradeInventory>(PC,WBP_UpgradeInventoryWidget);
		if (UpgradeInventoryWidget)
		{
			if (UpgradeInventoryWidget->IsInViewport()==false)
			{
				UpgradeInventoryWidget->AddToViewport(0);
				UpgradeInventoryWidget->UpdateGoldAmount();
				GetWorld()->GetFirstPlayerController()->bShowMouseCursor = true;
			}
			else
			{
				UpgradeInventoryWidget->RemoveFromParent();
				GetWorld()->GetFirstPlayerController()->bShowMouseCursor = false;
				IBChar->StateComponent->SetState(TAG_StatusIdle);
			}
			
			
		}
	}
}
