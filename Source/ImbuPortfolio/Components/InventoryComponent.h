#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "../Interface/Action_Interface.h"
#include "../Structure/ItemStructure.h"
#include "InventoryComponent.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnInventoryChanged);

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class IMBUPORTFOLIO_API UInventoryComponent : public UActorComponent, public IAction_Interface
{
	GENERATED_BODY()

public:	
	UInventoryComponent();
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

protected:
	virtual void BeginPlay() override;

public:
	UPROPERTY(BlueprintReadWrite,Category="Weapon")
	TArray<class ABaseEquippable*> EquippedWeapon;
	UPROPERTY(BlueprintReadWrite,Category="Weapon")
	ABaseEquippable* RightWeapon;
	UPROPERTY(BlueprintReadWrite,Category="Weapon")
	ABaseEquippable* LeftWeapon;
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="Weapon")
	float RetrieveWeaponIndex=0; // 장착해제후 다시 인벤토리로 들여보낼 무기 인덱스

	UPROPERTY(BlueprintReadWrite,Category="Armor")
	ABaseEquippable* EquippedHelmet;

	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	int64 InventorySize=5; // 인벤토리 슬롯 개수

	UPROPERTY()
	TArray<FItemStruct> Items;
	UPROPERTY()
	FItemStruct Item;
	UPROPERTY()
	E_ItemRarity ItemRarity;
	UPROPERTY()
	class UW_Inventory* PlayerInventory;
	
public:
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	FItemStruct EquippedWeaponInfo;
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	FItemStruct EquippedHelmetInfo;

	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	float InventoryGoldAmount=0;
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	float InventoryWeightAmount;

public:
	UFUNCTION()
	void UnEquip();
	UFUNCTION()
	void ItemToInventory(ABaseEquippable* RootedItem);
	UFUNCTION()
	void SaveInventory();
	UFUNCTION()
	void LoadInventory();
	UFUNCTION()
	void GetGold(float Gold);
	UFUNCTION()
	void UnEquipWeapon();
	UFUNCTION()
	void UnEquipHelmet();
	UFUNCTION()
	void UnEquipMiddle();
	UFUNCTION()
	void UnEquipBottmo();
	UFUNCTION()
	void UpdateInventorySize();

	FOnInventoryChanged OnInventoryUpdate;

public:	
	virtual void ChangeWeapon(ABaseEquippable* MainWeapon) override;
	UFUNCTION()
	void InteractionItem(AActor* Actor);
		
};
