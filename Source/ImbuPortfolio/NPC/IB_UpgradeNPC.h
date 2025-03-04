#pragma once

#include "CoreMinimal.h"
#include "IB_NPC.h"
#include "IB_UpgradeNPC.generated.h"

UCLASS()
class IMBUPORTFOLIO_API AIB_UpgradeNPC : public AIB_NPC
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere)
	TSubclassOf<class UUserWidget> WBP_UpgradeWidget;
	UPROPERTY()
	class UW_UpgradeWidget* UpgradeWidget;

	virtual void Interaction() override;
	
};
