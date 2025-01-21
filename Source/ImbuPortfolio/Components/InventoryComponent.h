#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "../Interface/Action_Interface.h"
#include "../Item/ItemStructure.h"
#include "InventoryComponent.generated.h"

class UW_Inventory;

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
	UPROPERTY()
	TArray<FItemStruct> Items;
	UPROPERTY()
	FItemStruct Item;
	UPROPERTY()
	UW_Inventory* PlayerInventory;
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="Weapon")
	float RetrieveWeaponIndex=0; // 장착해제후 다시 인벤토리로 들여보낼 무기 인덱스

public:
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	FItemStruct EquippedWeaponInfo;

public:
	UFUNCTION()
	void UnEquip();
	UFUNCTION()
	void ItemToInventory(ABaseEquippable* RootedItem);
	

public:	
	virtual void ChangeWeapon(ABaseEquippable* MainWeapon) override;
	virtual void Interaction() override;
		
};
