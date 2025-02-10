#pragma once

<<<<<<< HEAD
#include "CoreMinimal.h"
#include "../Enum/E_DamageSystem.h"
#include "DamageInfo.generated.h"

class IMBUPORTFOLIO_API DamageInfo
{

};


USTRUCT(BlueprintType)
struct FDamageInfo
{
	GENERATED_USTRUCT_BODY()

	float DamageAmount;
	E_DamageType DamageType;
	E_DamageResponse DamageResponse;
	bool ShouldDamageInvincible;
	bool CanBeBlocked;
	bool CanBeParried;
	bool ShouldForceInterrupt;
=======
struct DamageInfo
{
>>>>>>> e70fca7497d7d0a7900811ae5d4f39650e23dd87
	
};
