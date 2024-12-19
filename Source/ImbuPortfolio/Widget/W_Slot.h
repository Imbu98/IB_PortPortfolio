#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "W_Slot.generated.h"

class UInventoryComponent;
struct FItemStruct;

UCLASS()
class IMBUPORTFOLIO_API UW_Slot : public UUserWidget
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
	FItemStruct Item;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Items")
	int32 Index;
	
public:
	virtual void NativePreConstruct() override;
	virtual void NativeConstruct() override;
	UFUNCTION()
	void OnButtonClicked();
	
};
