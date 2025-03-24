#pragma once

#include "CoreMinimal.h"
#include "IB_NPC.h"
#include "NPC_DungeonEnterNPC.generated.h"

UCLASS()
class IMBUPORTFOLIO_API ANPC_DungeonEnterNPC : public AIB_NPC
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	TSubclassOf<class UUserWidget> WBP_DungeonEnter;
	UPROPERTY()
	class UW_DungeonEnter* DungeonEnterWidget;

	virtual void Interaction(AActor* Player) override;
};
