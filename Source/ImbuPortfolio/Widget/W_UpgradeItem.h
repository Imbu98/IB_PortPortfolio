#pragma once

#include "CoreMinimal.h"
#include "W_Slot.h"
#include "Blueprint/UserWidget.h"
#include "W_UpgradeItem.generated.h"

UCLASS()
class IMBUPORTFOLIO_API UW_UpgradeItem : public UUserWidget
{
	GENERATED_BODY()

public:
	virtual void NativeConstruct() override;

public:
	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	TObjectPtr<class UImage> UpgradeReadyItemImage;
	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	TObjectPtr<class UButton> UpgradeReadyItemSlot;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FItemStruct UpgradeReadyItemInfo;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UUserWidget> WBP_ItemInfo;
	UPROPERTY(BlueprintReadWrite)
	class UW_ItemInfo* ItemInfoWidget;
	UPROPERTY(EditAnywhere,meta=(BindWidget))
	UButton* UpgradeButton;
	UPROPERTY(EditAnywhere,meta=(BindWidget))
	UButton* ExitButton;
	UPROPERTY(EditAnywhere,meta=(BindWidget))
	UTextBlock* UpgradeProbabilityText;
	UPROPERTY(EditAnywhere,meta=(BindWidget))
	UTextBlock* UpgradeResultText;

public:
	UFUNCTION(BlueprintCallable)
	void UpgradeItem();
	UFUNCTION(BlueprintCallable)
	void UpdateSlot(FItemStruct InventoryItemInfo);
	
};



