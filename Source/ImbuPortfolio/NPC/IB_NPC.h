#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "ImbuPortfolio/Interface/Action_Interface.h"
#include "IB_NPC.generated.h"

UCLASS()
class IMBUPORTFOLIO_API AIB_NPC : public ACharacter , public IAction_Interface
{
	GENERATED_BODY()

public:
	AIB_NPC();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	virtual void Interaction() override;

	UPROPERTY(EditAnywhere)
	TSubclassOf<class UUserWidget> WBP_DungeonEnter;
	UPROPERTY()
	class UW_DungeonEnter* DungeonEnterWidget;
};


