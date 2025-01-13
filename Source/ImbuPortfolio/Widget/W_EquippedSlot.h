#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "../Item/ItemStructure.h"
#include "W_EquippedSlot.generated.h"

class UInventoryComponent;

UCLASS()
class IMBUPORTFOLIO_API UW_EquippedSlot : public UUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	TObjectPtr<class UImage> EquippedItemImage;
	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	TObjectPtr<class UButton> EquippedItemSlot;

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UInventoryComponent* InventoryComponent;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FItemStruct EquippedItemInfo;

public:
	virtual void NativeConstruct() override;
	virtual void NativePreConstruct() override;
	UFUNCTION(BlueprintCallable)
	void ButtonOnClicked();
	UFUNCTION(BlueprintCallable)
	void ClearSlot();
	UFUNCTION(BlueprintCallable)
	void SetEquippedItemThumnail();
	
	
};
