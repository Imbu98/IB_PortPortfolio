#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "IB_PlayerController.generated.h"

class UW_Inventory;

UCLASS()
class IMBUPORTFOLIO_API AIB_PlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	TSubclassOf<UUserWidget> InventoryWidgetClass;
	UPROPERTY()
	UUserWidget* Inventory;
	
	

public:
	void OpenInventory();
	// Player Controller���� ���� ���� ��������
	UW_Inventory* GetInventoryWidget();
	

protected:
	virtual void BeginPlay() override;
};
