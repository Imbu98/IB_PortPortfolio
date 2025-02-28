#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "../Interface/Action_Interface.h"
#include "W_Slot.generated.h"

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
	
	

	
public:
	virtual void NativePreConstruct() override;
	virtual void NativeConstruct() override;
	UFUNCTION()
	void OnButtonClicked();
	UFUNCTION()
	void ClearSlot();

	
	FEventReply OnMouseButtonDown(FGeometry const& MyGeometry, FPointerEvent const& MouseEvent);
	
};
