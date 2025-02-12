#pragma once

UENUM(BlueprintType)
enum class E_LocomotionDirection : uint8
{
	Forward UMETA(DisplayName="Forward"),
	Backward UMETA(DisplayName="Backward"),
	Right UMETA(DisplayName="Right"),
	Left UMETA(DisplayName="Left"),
};