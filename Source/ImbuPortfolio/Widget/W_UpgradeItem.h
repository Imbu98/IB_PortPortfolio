#pragma once

#include "CoreMinimal.h"
#include "W_InventoryItem.h"
#include "W_Slot.h"
#include "Blueprint/UserWidget.h"
#include "W_UpgradeItem.generated.h"

UCLASS()
class IMBUPORTFOLIO_API UW_UpgradeItem : public UUserWidget
{
	GENERATED_BODY()

public:
	virtual void NativeConstruct() override;

	virtual void NativeDestruct() override;

public:
	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	UW_Slot* UpgradeReadyItemSlot;
	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	UW_InventoryItem* InventoryItem;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UUserWidget> WBP_ItemInfo;
	UPROPERTY(EditAnywhere,meta=(BindWidget))
	UButton* BTN_UpgradeBtn;
	UPROPERTY(EditAnywhere,meta=(BindWidget))
	UButton* BTN_Close;
	UPROPERTY(EditAnywhere,meta=(BindWidget))
	UTextBlock* TXT_UpgradeProbability;
	// UPROPERTY(EditAnywhere,meta=(BindWidget))
	// UTextBlock* UpgradeResultText;
	UPROPERTY(EditAnywhere,meta=(BindWidget))
	UImage* IMG_ResourceImage;
	UPROPERTY(EditAnywhere,meta=(BindWidget))
	UTextBlock* TXT_RequiredResource;
	UPROPERTY(EditAnywhere,meta=(BindWidget))
	UTextBlock* TXT_InventoryResource;
	UPROPERTY(BlueprintReadWrite)
	class UW_ItemInfo* ItemInfoWidget;
	UPROPERTY(BlueprintReadWrite)
	FItemStruct UpgradeReadyItemInfo;
	UPROPERTY(BlueprintReadWrite)
	int32 InventorySlotIndex;

public:
	UFUNCTION(BlueprintCallable)
	void UpgradeItem();
	UFUNCTION(BlueprintCallable)
	void UpdateSlot(UW_Slot* InventorySlot);
	
};



