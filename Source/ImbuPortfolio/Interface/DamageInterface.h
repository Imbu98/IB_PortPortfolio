#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "../Structure/DamageInfo.h"
#include "DamageInterface.generated.h"

UINTERFACE(MinimalAPI)
class UDamageInterface : public UInterface
{
	GENERATED_BODY()
};

class IMBUPORTFOLIO_API IDamageInterface
{
	GENERATED_BODY()

	public:
	virtual bool TakeDamage(FDamageInfo& DamageInfo,AActor* Cursor) =0;
	virtual float SetHealth(){return 100.0f;}
	virtual void OnDeath(){};
	virtual void Dodged(){};
	virtual void DamageResponse(E_DamageResponse DamageResponse){};
	virtual void OnBlocked(bool CanBeParried,AActor* DamageCursor){};
	
	
	
	
	
};
