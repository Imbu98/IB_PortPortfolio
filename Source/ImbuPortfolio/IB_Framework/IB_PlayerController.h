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
	UW_Inventory* Inventory;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	TSubclassOf<UUserWidget> WBP_PlayerStateBar;
	UPROPERTY()
	UW_PlayerStateBar* PlayerStateBar;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category="Widget")
	class TSubclassOf<UUserWidget> WBP_Cannon;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category="Widget")
	class UW_Cannon* CannonWidget;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category="Widget")
	class TSubclassOf<UUserWidget> WBP_PauseMenu;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category="Widget")
	class UW_PauseMenu* PauseWidget;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category="Widget")
	class TSubclassOf<UUserWidget> WBP_RodingScreen;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category="Widget")
	class UUserWidget* WidgetRodingScreen;
	
	
	

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

	UFUNCTION(BlueprintCallable)
	void OpenPause();
	UFUNCTION(BlueprintCallable)
	void OpenPlayerWidget();
	UFUNCTION(BlueprintCallable)
	void ClosePlayerWidget();

	UFUNCTION(BlueprintCallable)
	void OpenRodingScreen();
	UFUNCTION(BlueprintCallable)
	void CloseRodingScreen();
	
	

protected:
	virtual void BeginPlay() override;
};
