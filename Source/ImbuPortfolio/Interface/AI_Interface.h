#pragma once

#include "CoreMinimal.h"
#include "../ETC/Spline.h"
#include "UObject/Interface.h"
#include "AI_Interface.generated.h"

UINTERFACE(MinimalAPI)
class UAI_Interface : public UInterface
{
	GENERATED_BODY()
};

class IMBUPORTFOLIO_API IAI_Interface
{
	GENERATED_BODY()

public:
	virtual ASpline* GetSpline() { return nullptr; }
};
