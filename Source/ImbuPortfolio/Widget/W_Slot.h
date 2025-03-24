#pragma once

#include "CoreMinimal.h"
#include "W_ItemInfo.h"
#include "Blueprint/UserWidget.h"
#include "../Interface/Action_Interface.h"
#include "W_Slot.generated.h"

DECLARE_DELEGATE_OneParam(FOnInventorySlotClick,UW_Slot*)

class UInventoryComponent;
struct FItemStruct;
class UW_Inventory;

UCLASS()
class IMBUPORTFOLIO_API UW_Slot : public UUserWidget, public IAction_Interface
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	TObjectPtr<class UImage> ItemImage;
	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	TObjectPtr<class UButton> ItemSlot;
	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	TObjectPtr<class UTextBlock> ItemQuantity;
	
	 

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components")
	UInventoryComponent* InventoryComponent;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Items")
	int32 Index;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Items")
	FItemStruct Item;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Widget")
	UW_Inventory* W_Inventory;

	FOnInventorySlotClick InventorySlotDelegate;
	
	

	
public:
	virtual void NativePreConstruct() override;
	virtual void NativeConstruct() override;
	virtual void NativeDestruct() override;
	UFUNCTION()
	void OnButtonClicked();
	UFUNCTION()
	void OnButtonHovered();
	UFUNCTION()
	void OnButtonUnHovered();
	UFUNCTION()
	void ClearSlot();
	UFUNCTION()
	void OnEquip();
	UFUNCTION()
	void OnUpgradeSlot();

	
	FEventReply OnMouseButtonDown(FGeometry const& MyGeometry, FPointerEvent const& MouseEvent);
	
};
