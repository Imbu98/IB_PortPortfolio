#pragma once

#include "CoreMinimal.h"
#include "W_Slot.h"
#include "Blueprint/UserWidget.h"
#include "Components/WrapBox.h"
#include "ImbuPortfolio/Components/InventoryComponent.h"
#include "W_InventoryItem.generated.h"

DECLARE_DELEGATE_OneParam(FOnSlotClicked,UW_Slot*)

UCLASS()
class IMBUPORTFOLIO_API UW_InventoryItem : public UUserWidget
{
	GENERATED_BODY()

public:
	virtual void NativeConstruct() override;

	virtual void NativeDestruct() override;

public:
	UPROPERTY(EditAnywhere,meta=(BindWidget))
	UWrapBox* InventoryWrapBox;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory") 
	TSubclassOf<class UUserWidget> ItemSlotWidgetClass;

public:
	UFUNCTION()
	void UpdateInventory(UInventoryComponent* Inventory);
	UFUNCTION()
	void OnSlotClicked(UW_Slot* SlotWidget);
	
	FOnSlotClicked SlotDelegate;
	
};


