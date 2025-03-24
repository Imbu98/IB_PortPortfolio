#include "IB_ItemUpgradeNPC.h"

#include "ImbuPortfolio/Character/IBCharBase.h"
#include "ImbuPortfolio/Components/StateComponent.h"
#include "ImbuPortfolio/Widget/W_UpgradeItem.h"
#include "Kismet/GameplayStatics.h"

void AIB_ItemUpgradeNPC::Interaction(AActor* Player)
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
		
		if (IBChar->InventoryComponents)
		{
			InventoryComponent=IBChar->InventoryComponents;
		}
		
	}
	
	AIB_PlayerController* IB_PC = Cast<AIB_PlayerController>(PC);
	if (IB_PC==nullptr)
	{
		return;
	}
	
	if (WBP_UpgradeItemWidget)
	{
		UpgradeItemWidget=CreateWidget<UW_UpgradeItem>(PC,WBP_UpgradeItemWidget);
		if (UpgradeItemWidget)
		{
			if (UpgradeItemWidget->IsInViewport()==false)
			{
				UpgradeItemWidget->AddToViewport(0);
				UpgradeItemWidget->InventoryItem->UpdateInventory(InventoryComponent);
				GetWorld()->GetFirstPlayerController()->bShowMouseCursor = true;
			
			}
			else
			{
				UpgradeItemWidget->RemoveFromParent();
				GetWorld()->GetFirstPlayerController()->bShowMouseCursor = false;
				IBChar->StateComponent->SetState(TAG_StatusIdle);
			}
			
			
		}
	}
}
