#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "W_Inventory.generated.h"

class UInventoryComponent;

UCLASS()
class IMBUPORTFOLIO_API UW_Inventory : public UUserWidget
{
	GENERATED_BODY()

protected:
	virtual void NativeConstruct() override;
	
public:
	void LoadInventory(UInventoryComponent* Inventory);

public:
	UPROPERTY(BlueprintReadWrite,meta=(BindWidget))
	TObjectPtr<class UImage> InventoryImage;
	UPROPERTY(BlueprintReadWrite,meta=(BindWidget))
	TObjectPtr<class UWrapBox> InventoryWrapBox;
	
	UPROPERTY(BlueprintReadWrite,meta=(BindWidget))
	TObjectPtr<class UW_ItemInfo> WBP_ItemInfo;

	UPROPERTY(BlueprintReadWrite,meta=(BindWidget))
	TObjectPtr<class UTextBlock> T_GoldAmount;
	UPROPERTY(BlueprintReadWrite,meta=(BindWidget))
	TObjectPtr<class UTextBlock> T_WeightAmount;
	
	UPROPERTY(BlueprintReadWrite,meta=(BindWidget))
	TObjectPtr<class UW_EquippedSlot> EquippedArmor_Head;
	UPROPERTY(BlueprintReadWrite,meta=(BindWidget))
	TObjectPtr<class UW_EquippedSlot> EquippedWeapon1;
	UPROPERTY(BlueprintReadWrite,meta=(BindWidget))
	TObjectPtr<class UW_EquippedSlot> EquippedWeapon2;
	UPROPERTY(BlueprintReadWrite,meta=(BindWidget))
	TObjectPtr<class UW_EquippedSlot> EquippedArmor_Chest;
	UPROPERTY(BlueprintReadWrite,meta=(BindWidget))
	TObjectPtr<class UW_EquippedSlot> EquippedArmor_Leg;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory") 
	TSubclassOf<class UUserWidget> ItemSlotWidgetClass;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory") 
	TSubclassOf<class UUserWidget> EquippedItemSlotWidgetClass;

public:
	UFUNCTION()
	void UnEquipWeapon();
	UFUNCTION()
	void UnEquipHelmet();
	
	
};

