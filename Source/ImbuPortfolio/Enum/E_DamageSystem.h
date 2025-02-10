#pragma once

UENUM(BlueprintType)
enum class E_DamageType:uint8
{
	None,
	Melee,
	Projectile,
	Explosion,
	Environment,
};

UENUM(BlueprintType)
enum class E_DamageResponse:uint8
{
	None,
	HitReaction,
	Stagger,
	Stun,
	KnockBack,
};

UENUM(BlueprintType)
enum class E_DamageDetermine:uint8
{
	BlockedDamage,
	NoDamage,
	DoDamage,
};

