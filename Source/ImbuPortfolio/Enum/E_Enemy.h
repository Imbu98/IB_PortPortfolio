#pragma once

UENUM(BlueprintType)
enum class E_EnemyState : uint8
{
	Passive,
	Attacking,
	Frozen,
	Investigating,
	Dead,
};

UENUM(BlueprintType)
enum class E_AiSense : uint8
{
	None,
	Sight,
	Hearing,
	Damage,
};

UENUM(BlueprintType)
enum class E_MovementSpeed : uint8
{
	Idle,
	Walking,
	Jogging,
	Sprinting,
};
