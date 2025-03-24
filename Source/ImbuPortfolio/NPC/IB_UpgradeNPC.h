#pragma once

#include "CoreMinimal.h"
#include "IB_NPC.h"
#include "IB_UpgradeNPC.generated.h"

UCLASS()
class IMBUPORTFOLIO_API AIB_UpgradeNPC : public AIB_NPC
{
	GENERATED_BODY()

public:
	AIB_UpgradeNPC();

	UPROPERTY(EditAnywhere)
	TSubclassOf<class UUserWidget> WBP_UpgradeInventoryWidget;
	UPROPERTY()
	class UW_UpgradeInventory* UpgradeInventoryWidget;
	
	virtual void Interaction(AActor* Player) override;

	

};
