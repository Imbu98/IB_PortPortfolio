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
	UPROPERTY()
	TArray<class ABaseEquippable*> EquippedWeapon;
	UPROPERTY()
	TArray<FItemStruct> Items;
	UPROPERTY()
	FItemStruct Item;
	UPROPERTY()
	UW_Inventory* PlayerInventory;

public:
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	FItemStruct EquippedWeaponInfo;

public:
	void UnEquip();
	void ItemToInventory(ABaseEquippable* Equippable);
	

public:	
	virtual void ChangeWeapon(ABaseEquippable* MainWeapon) override;
	virtual void Interaction() override;
		
};
