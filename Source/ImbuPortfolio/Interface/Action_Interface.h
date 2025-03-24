#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "../Item/BaseEquippable.h"
#include "../Structure/ItemStructure.h"
#include "Action_Interface.generated.h"

UINTERFACE(MinimalAPI)
class UAction_Interface : public UInterface
{
	GENERATED_BODY()
};

class IMBUPORTFOLIO_API IAction_Interface
{
	GENERATED_BODY()

public:
	virtual void Equip(FItemStruct InventoryItemStruct, AActor* Caller) { }


	virtual void ChangeWeapon(ABaseEquippable* MainWeapon) { }

	virtual void Interaction(AActor* Player) {}
};


