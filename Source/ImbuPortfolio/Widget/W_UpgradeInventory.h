#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ImbuPortfolio/Character/IBCharBase.h"
#include "W_UpgradeInventory.generated.h"

UCLASS()
class IMBUPORTFOLIO_API UW_UpgradeInventory : public UUserWidget
{
	GENERATED_BODY()

protected:
	virtual void NativeConstruct() override;

public:
	UPROPERTY(EditAnywhere,meta=(BindWidget))
	class UButton* BTN_UpgradeInventory;
	UPROPERTY(EditAnywhere,meta=(BindWidget))
	class UButton* BTN_Close;
	UPROPERTY(EditAnywhere,meta=(BindWidget))
	class UTextBlock* TXT_UpgradeInventoryGoldAmount;
	UPROPERTY(EditAnywhere,meta=(BindWidget))
	class UTextBlock* TXT_InventoryGold;

public:
	UPROPERTY(EditAnywhere)
	float UpgradeCost=500.0f;
	UPROPERTY()
	AIBCharBase* IBChar;
	UPROPERTY()
	UInventoryComponent* InventoryComponent;

public:
	UFUNCTION(BlueprintCallable)
	void UpdateGoldAmount();
	UFUNCTION(BlueprintCallable)
	void CloseWidget();
	UFUNCTION(BlueprintCallable)
	void UpgradeInventory();
	
	
};
