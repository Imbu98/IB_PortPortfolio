#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
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

public:
	virtual void NativeConstruct() override;
	UFUNCTION(BlueprintCallable)
	void ButtonOnClicked();
	UFUNCTION(BlueprintCallable)
	void ClearSlot();
	
	
};
