#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "../Interface/Action_Interface.h"
#include "../Item/ItemStructure.h"
#include "InventoryComponent.generated.h"

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
	TArray<FItemStruct> Items;
	FItemStruct Item;
	

public:	
	virtual void ChangeWeapon(ABaseEquippable* MainWeapon) override;
	virtual void Interaction() override;
		
};
