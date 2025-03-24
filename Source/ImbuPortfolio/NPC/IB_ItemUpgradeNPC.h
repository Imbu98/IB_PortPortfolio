#pragma once

#include "CoreMinimal.h"
#include "IB_NPC.h"
#include "IB_ItemUpgradeNPC.generated.h"

UCLASS()
class IMBUPORTFOLIO_API AIB_ItemUpgradeNPC : public AIB_NPC
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	TSubclassOf<class UUserWidget> WBP_UpgradeItemWidget;
	UPROPERTY()
	class UW_UpgradeInventory* UpgradeItemWidget;
	
	virtual void Interaction(AActor* Player) override;
	
	
};
