#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ABP_Interface.generated.h"


UINTERFACE(MinimalAPI)
class UABP_Interface : public UInterface
{
	GENERATED_BODY()
};


class IMBUPORTFOLIO_API IABP_Interface
{
	GENERATED_BODY()

	virtual void ReceiveIBIsAiming(bool IsAiming){};
	
public:
};
