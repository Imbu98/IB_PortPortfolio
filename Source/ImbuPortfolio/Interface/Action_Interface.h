#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
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
	UFUNCTION()
	virtual void Equip(int32 WeaponNumber, AActor* Caller)=0;
};