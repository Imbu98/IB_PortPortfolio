#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "ImbuPortfolio/Widget/W_BootScreen.h"
#include "ImbuPortfolio/Widget/W_PlayerStateBar.h"
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
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	TSubclassOf<UUserWidget> WBP_PlayerStateBar;
	UPROPERTY()
	UW_PlayerStateBar* PlayerStateBar;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category="Widget")
	class TSubclassOf<UUserWidget> WBP_Cannon;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category="Widget")
	class UW_Cannon* CannonWidget;
	
	
	

public:
	UFUNCTION(BlueprintCallable)
	void OpenInventory();
	// Player Controller���� ���� ���� ��������
	UFUNCTION(BlueprintCallable)
	UW_Inventory* GetInventoryWidget();
	UFUNCTION(BlueprintCallable)
	void UpdatePlayerStateBar();

	UFUNCTION(BlueprintCallable)
	void VisibleCannonWidget();
	UFUNCTION(BlueprintCallable)
	void CollapsedCannonWidget();
	
	

protected:
	virtual void BeginPlay() override;
};
