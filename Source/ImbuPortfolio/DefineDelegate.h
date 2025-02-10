#pragma once

#include "CoreMinimal.h"
#include "Enum/E_DamageSystem.h"

DECLARE_MULTICAST_DELEGATE(DeathDelegate)
DECLARE_MULTICAST_DELEGATE(DodgeDelegate)
DECLARE_MULTICAST_DELEGATE_OneParam(DamageResponeDelegate,E_DamageResponse)
DECLARE_MULTICAST_DELEGATE_TwoParams(BlockedDelegate,bool,AActor*)

inline DeathDelegate OnDeath;
inline DodgeDelegate OnDodge;
inline DamageResponeDelegate OnDamageResponse;
inline BlockedDelegate OnBlocked;
