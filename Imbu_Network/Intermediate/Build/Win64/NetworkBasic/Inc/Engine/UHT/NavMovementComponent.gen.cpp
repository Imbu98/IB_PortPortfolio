// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/GameFramework/NavMovementComponent.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationTypes.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavMovementComponent() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UMovementComponent();
ENGINE_API UClass* Z_Construct_UClass_UNavMovementComponent();
ENGINE_API UClass* Z_Construct_UClass_UNavMovementComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UNavMovementInterface_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMovementProperties();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FNavAgentProperties();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FNavMovementProperties();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UNavMovementComponent Function GetVelocityForNavMovement
struct Z_Construct_UFunction_UNavMovementComponent_GetVelocityForNavMovement_Statics
{
	struct NavMovementComponent_eventGetVelocityForNavMovement_Parms
	{
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI|Components|NavMovement" },
		{ "Comment", "/** Get the current velocity of the movement component */" },
		{ "ModuleRelativePath", "Classes/GameFramework/NavMovementComponent.h" },
		{ "ToolTip", "Get the current velocity of the movement component" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNavMovementComponent_GetVelocityForNavMovement_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NavMovementComponent_eventGetVelocityForNavMovement_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNavMovementComponent_GetVelocityForNavMovement_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavMovementComponent_GetVelocityForNavMovement_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNavMovementComponent_GetVelocityForNavMovement_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNavMovementComponent_GetVelocityForNavMovement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavMovementComponent, nullptr, "GetVelocityForNavMovement", nullptr, nullptr, Z_Construct_UFunction_UNavMovementComponent_GetVelocityForNavMovement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavMovementComponent_GetVelocityForNavMovement_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNavMovementComponent_GetVelocityForNavMovement_Statics::NavMovementComponent_eventGetVelocityForNavMovement_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNavMovementComponent_GetVelocityForNavMovement_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNavMovementComponent_GetVelocityForNavMovement_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNavMovementComponent_GetVelocityForNavMovement_Statics::NavMovementComponent_eventGetVelocityForNavMovement_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNavMovementComponent_GetVelocityForNavMovement()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNavMovementComponent_GetVelocityForNavMovement_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNavMovementComponent::execGetVelocityForNavMovement)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetVelocityForNavMovement();
	P_NATIVE_END;
}
// End Class UNavMovementComponent Function GetVelocityForNavMovement

// Begin Class UNavMovementComponent Function IsCrouching
struct Z_Construct_UFunction_UNavMovementComponent_IsCrouching_Statics
{
	struct NavMovementComponent_eventIsCrouching_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI|Components|NavMovement" },
		{ "Comment", "/** Returns true if currently crouching */" },
		{ "ModuleRelativePath", "Classes/GameFramework/NavMovementComponent.h" },
		{ "ToolTip", "Returns true if currently crouching" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UNavMovementComponent_IsCrouching_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NavMovementComponent_eventIsCrouching_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNavMovementComponent_IsCrouching_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NavMovementComponent_eventIsCrouching_Parms), &Z_Construct_UFunction_UNavMovementComponent_IsCrouching_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNavMovementComponent_IsCrouching_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavMovementComponent_IsCrouching_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNavMovementComponent_IsCrouching_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNavMovementComponent_IsCrouching_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavMovementComponent, nullptr, "IsCrouching", nullptr, nullptr, Z_Construct_UFunction_UNavMovementComponent_IsCrouching_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavMovementComponent_IsCrouching_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNavMovementComponent_IsCrouching_Statics::NavMovementComponent_eventIsCrouching_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNavMovementComponent_IsCrouching_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNavMovementComponent_IsCrouching_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNavMovementComponent_IsCrouching_Statics::NavMovementComponent_eventIsCrouching_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNavMovementComponent_IsCrouching()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNavMovementComponent_IsCrouching_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNavMovementComponent::execIsCrouching)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsCrouching();
	P_NATIVE_END;
}
// End Class UNavMovementComponent Function IsCrouching

// Begin Class UNavMovementComponent Function IsFalling
struct Z_Construct_UFunction_UNavMovementComponent_IsFalling_Statics
{
	struct NavMovementComponent_eventIsFalling_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI|Components|NavMovement" },
		{ "Comment", "/** Returns true if currently falling (not flying, in a non-fluid volume, and not on the ground) */" },
		{ "ModuleRelativePath", "Classes/GameFramework/NavMovementComponent.h" },
		{ "ToolTip", "Returns true if currently falling (not flying, in a non-fluid volume, and not on the ground)" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UNavMovementComponent_IsFalling_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NavMovementComponent_eventIsFalling_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNavMovementComponent_IsFalling_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NavMovementComponent_eventIsFalling_Parms), &Z_Construct_UFunction_UNavMovementComponent_IsFalling_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNavMovementComponent_IsFalling_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavMovementComponent_IsFalling_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNavMovementComponent_IsFalling_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNavMovementComponent_IsFalling_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavMovementComponent, nullptr, "IsFalling", nullptr, nullptr, Z_Construct_UFunction_UNavMovementComponent_IsFalling_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavMovementComponent_IsFalling_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNavMovementComponent_IsFalling_Statics::NavMovementComponent_eventIsFalling_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNavMovementComponent_IsFalling_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNavMovementComponent_IsFalling_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNavMovementComponent_IsFalling_Statics::NavMovementComponent_eventIsFalling_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNavMovementComponent_IsFalling()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNavMovementComponent_IsFalling_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNavMovementComponent::execIsFalling)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsFalling();
	P_NATIVE_END;
}
// End Class UNavMovementComponent Function IsFalling

// Begin Class UNavMovementComponent Function IsFlying
struct Z_Construct_UFunction_UNavMovementComponent_IsFlying_Statics
{
	struct NavMovementComponent_eventIsFlying_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI|Components|NavMovement" },
		{ "Comment", "/** Returns true if currently flying (moving through a non-fluid volume without resting on the ground) */" },
		{ "ModuleRelativePath", "Classes/GameFramework/NavMovementComponent.h" },
		{ "ToolTip", "Returns true if currently flying (moving through a non-fluid volume without resting on the ground)" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UNavMovementComponent_IsFlying_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NavMovementComponent_eventIsFlying_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNavMovementComponent_IsFlying_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NavMovementComponent_eventIsFlying_Parms), &Z_Construct_UFunction_UNavMovementComponent_IsFlying_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNavMovementComponent_IsFlying_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavMovementComponent_IsFlying_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNavMovementComponent_IsFlying_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNavMovementComponent_IsFlying_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavMovementComponent, nullptr, "IsFlying", nullptr, nullptr, Z_Construct_UFunction_UNavMovementComponent_IsFlying_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavMovementComponent_IsFlying_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNavMovementComponent_IsFlying_Statics::NavMovementComponent_eventIsFlying_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNavMovementComponent_IsFlying_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNavMovementComponent_IsFlying_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNavMovementComponent_IsFlying_Statics::NavMovementComponent_eventIsFlying_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNavMovementComponent_IsFlying()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNavMovementComponent_IsFlying_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNavMovementComponent::execIsFlying)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsFlying();
	P_NATIVE_END;
}
// End Class UNavMovementComponent Function IsFlying

// Begin Class UNavMovementComponent Function IsMovingOnGround
struct Z_Construct_UFunction_UNavMovementComponent_IsMovingOnGround_Statics
{
	struct NavMovementComponent_eventIsMovingOnGround_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI|Components|NavMovement" },
		{ "Comment", "/** Returns true if currently moving on the ground (e.g. walking or driving) */" },
		{ "ModuleRelativePath", "Classes/GameFramework/NavMovementComponent.h" },
		{ "ToolTip", "Returns true if currently moving on the ground (e.g. walking or driving)" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UNavMovementComponent_IsMovingOnGround_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NavMovementComponent_eventIsMovingOnGround_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNavMovementComponent_IsMovingOnGround_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NavMovementComponent_eventIsMovingOnGround_Parms), &Z_Construct_UFunction_UNavMovementComponent_IsMovingOnGround_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNavMovementComponent_IsMovingOnGround_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavMovementComponent_IsMovingOnGround_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNavMovementComponent_IsMovingOnGround_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNavMovementComponent_IsMovingOnGround_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavMovementComponent, nullptr, "IsMovingOnGround", nullptr, nullptr, Z_Construct_UFunction_UNavMovementComponent_IsMovingOnGround_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavMovementComponent_IsMovingOnGround_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNavMovementComponent_IsMovingOnGround_Statics::NavMovementComponent_eventIsMovingOnGround_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNavMovementComponent_IsMovingOnGround_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNavMovementComponent_IsMovingOnGround_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNavMovementComponent_IsMovingOnGround_Statics::NavMovementComponent_eventIsMovingOnGround_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNavMovementComponent_IsMovingOnGround()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNavMovementComponent_IsMovingOnGround_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNavMovementComponent::execIsMovingOnGround)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsMovingOnGround();
	P_NATIVE_END;
}
// End Class UNavMovementComponent Function IsMovingOnGround

// Begin Class UNavMovementComponent Function IsSwimming
struct Z_Construct_UFunction_UNavMovementComponent_IsSwimming_Statics
{
	struct NavMovementComponent_eventIsSwimming_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI|Components|NavMovement" },
		{ "Comment", "/** Returns true if currently swimming (moving through a fluid volume) */" },
		{ "ModuleRelativePath", "Classes/GameFramework/NavMovementComponent.h" },
		{ "ToolTip", "Returns true if currently swimming (moving through a fluid volume)" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UNavMovementComponent_IsSwimming_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NavMovementComponent_eventIsSwimming_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNavMovementComponent_IsSwimming_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NavMovementComponent_eventIsSwimming_Parms), &Z_Construct_UFunction_UNavMovementComponent_IsSwimming_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNavMovementComponent_IsSwimming_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavMovementComponent_IsSwimming_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNavMovementComponent_IsSwimming_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNavMovementComponent_IsSwimming_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavMovementComponent, nullptr, "IsSwimming", nullptr, nullptr, Z_Construct_UFunction_UNavMovementComponent_IsSwimming_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavMovementComponent_IsSwimming_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNavMovementComponent_IsSwimming_Statics::NavMovementComponent_eventIsSwimming_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNavMovementComponent_IsSwimming_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNavMovementComponent_IsSwimming_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNavMovementComponent_IsSwimming_Statics::NavMovementComponent_eventIsSwimming_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNavMovementComponent_IsSwimming()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNavMovementComponent_IsSwimming_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNavMovementComponent::execIsSwimming)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsSwimming();
	P_NATIVE_END;
}
// End Class UNavMovementComponent Function IsSwimming

// Begin Class UNavMovementComponent
void UNavMovementComponent::StaticRegisterNativesUNavMovementComponent()
{
	UClass* Class = UNavMovementComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetVelocityForNavMovement", &UNavMovementComponent::execGetVelocityForNavMovement },
		{ "IsCrouching", &UNavMovementComponent::execIsCrouching },
		{ "IsFalling", &UNavMovementComponent::execIsFalling },
		{ "IsFlying", &UNavMovementComponent::execIsFlying },
		{ "IsMovingOnGround", &UNavMovementComponent::execIsMovingOnGround },
		{ "IsSwimming", &UNavMovementComponent::execIsSwimming },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNavMovementComponent);
UClass* Z_Construct_UClass_UNavMovementComponent_NoRegister()
{
	return UNavMovementComponent::StaticClass();
}
struct Z_Construct_UClass_UNavMovementComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * NavMovementComponent defines base functionality for MovementComponents that move any 'agent' that may be involved in AI pathfinding.\n */" },
		{ "IncludePath", "GameFramework/NavMovementComponent.h" },
		{ "ModuleRelativePath", "Classes/GameFramework/NavMovementComponent.h" },
		{ "ToolTip", "NavMovementComponent defines base functionality for MovementComponents that move any 'agent' that may be involved in AI pathfinding." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FixedPathBrakingDistance_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "FixedPathBrakingDistance is deprecated, please use NavMovementProperties.FixedPathBrakingDistance instead." },
		{ "ModuleRelativePath", "Classes/GameFramework/NavMovementComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUpdateNavAgentWithOwnersCollision_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "bUpdateNavAgentWithOwnersCollision is deprecated, please use NavMovementProperties.bUpdateNavAgentWithOwnersCollision instead." },
		{ "ModuleRelativePath", "Classes/GameFramework/NavMovementComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseAccelerationForPaths_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "bUseAccelerationForPaths is deprecated, please use NavMovementProperties.bUseAccelerationForPaths instead." },
		{ "ModuleRelativePath", "Classes/GameFramework/NavMovementComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseFixedBrakingDistanceForPaths_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "bUseFixedBrakingDistanceForPaths is deprecated, please use NavMovementProperties.bUseFixedBrakingDistanceForPaths instead." },
		{ "ModuleRelativePath", "Classes/GameFramework/NavMovementComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NavMovementProperties_MetaData[] = {
		{ "Category", "NavMovement" },
		{ "ModuleRelativePath", "Classes/GameFramework/NavMovementComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NavAgentProps_MetaData[] = {
		{ "Category", "NavMovement" },
		{ "Comment", "/** Properties that define how the component can move. */" },
		{ "DisplayName", "Movement Capabilities" },
		{ "Keywords", "Nav Agent" },
		{ "ModuleRelativePath", "Classes/GameFramework/NavMovementComponent.h" },
		{ "ToolTip", "Properties that define how the component can move." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovementState_MetaData[] = {
		{ "Comment", "/** Expresses runtime state of character's movement. Put all temporal changes to movement properties here */" },
		{ "ModuleRelativePath", "Classes/GameFramework/NavMovementComponent.h" },
		{ "ToolTip", "Expresses runtime state of character's movement. Put all temporal changes to movement properties here" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PathFollowingComp_MetaData[] = {
		{ "Comment", "/** object implementing IPathFollowingAgentInterface. Is private to control access to it.\n\x09 *\x09@see SetPathFollowingAgent, GetPathFollowingAgent */" },
		{ "ModuleRelativePath", "Classes/GameFramework/NavMovementComponent.h" },
		{ "ToolTip", "object implementing IPathFollowingAgentInterface. Is private to control access to it.\n    @see SetPathFollowingAgent, GetPathFollowingAgent" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FixedPathBrakingDistance;
	static void NewProp_bUpdateNavAgentWithOwnersCollision_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdateNavAgentWithOwnersCollision;
	static void NewProp_bUseAccelerationForPaths_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseAccelerationForPaths;
	static void NewProp_bUseFixedBrakingDistanceForPaths_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseFixedBrakingDistanceForPaths;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NavMovementProperties;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NavAgentProps;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MovementState;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PathFollowingComp;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNavMovementComponent_GetVelocityForNavMovement, "GetVelocityForNavMovement" }, // 907974390
		{ &Z_Construct_UFunction_UNavMovementComponent_IsCrouching, "IsCrouching" }, // 32411396
		{ &Z_Construct_UFunction_UNavMovementComponent_IsFalling, "IsFalling" }, // 649920698
		{ &Z_Construct_UFunction_UNavMovementComponent_IsFlying, "IsFlying" }, // 1247799853
		{ &Z_Construct_UFunction_UNavMovementComponent_IsMovingOnGround, "IsMovingOnGround" }, // 3901868600
		{ &Z_Construct_UFunction_UNavMovementComponent_IsSwimming, "IsSwimming" }, // 1756761846
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNavMovementComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNavMovementComponent_Statics::NewProp_FixedPathBrakingDistance = { "FixedPathBrakingDistance", nullptr, (EPropertyFlags)0x0020080020000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNavMovementComponent, FixedPathBrakingDistance_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FixedPathBrakingDistance_MetaData), NewProp_FixedPathBrakingDistance_MetaData) };
void Z_Construct_UClass_UNavMovementComponent_Statics::NewProp_bUpdateNavAgentWithOwnersCollision_SetBit(void* Obj)
{
	((UNavMovementComponent*)Obj)->bUpdateNavAgentWithOwnersCollision_DEPRECATED = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNavMovementComponent_Statics::NewProp_bUpdateNavAgentWithOwnersCollision = { "bUpdateNavAgentWithOwnersCollision", nullptr, (EPropertyFlags)0x0020080020000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UNavMovementComponent), &Z_Construct_UClass_UNavMovementComponent_Statics::NewProp_bUpdateNavAgentWithOwnersCollision_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUpdateNavAgentWithOwnersCollision_MetaData), NewProp_bUpdateNavAgentWithOwnersCollision_MetaData) };
void Z_Construct_UClass_UNavMovementComponent_Statics::NewProp_bUseAccelerationForPaths_SetBit(void* Obj)
{
	((UNavMovementComponent*)Obj)->bUseAccelerationForPaths_DEPRECATED = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNavMovementComponent_Statics::NewProp_bUseAccelerationForPaths = { "bUseAccelerationForPaths", nullptr, (EPropertyFlags)0x0020080020044000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UNavMovementComponent), &Z_Construct_UClass_UNavMovementComponent_Statics::NewProp_bUseAccelerationForPaths_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseAccelerationForPaths_MetaData), NewProp_bUseAccelerationForPaths_MetaData) };
void Z_Construct_UClass_UNavMovementComponent_Statics::NewProp_bUseFixedBrakingDistanceForPaths_SetBit(void* Obj)
{
	((UNavMovementComponent*)Obj)->bUseFixedBrakingDistanceForPaths_DEPRECATED = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNavMovementComponent_Statics::NewProp_bUseFixedBrakingDistanceForPaths = { "bUseFixedBrakingDistanceForPaths", nullptr, (EPropertyFlags)0x0020080020000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UNavMovementComponent), &Z_Construct_UClass_UNavMovementComponent_Statics::NewProp_bUseFixedBrakingDistanceForPaths_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseFixedBrakingDistanceForPaths_MetaData), NewProp_bUseFixedBrakingDistanceForPaths_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNavMovementComponent_Statics::NewProp_NavMovementProperties = { "NavMovementProperties", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNavMovementComponent, NavMovementProperties), Z_Construct_UScriptStruct_FNavMovementProperties, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NavMovementProperties_MetaData), NewProp_NavMovementProperties_MetaData) }; // 1776384552
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNavMovementComponent_Statics::NewProp_NavAgentProps = { "NavAgentProps", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNavMovementComponent, NavAgentProps), Z_Construct_UScriptStruct_FNavAgentProperties, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NavAgentProps_MetaData), NewProp_NavAgentProps_MetaData) }; // 2797488484
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNavMovementComponent_Statics::NewProp_MovementState = { "MovementState", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNavMovementComponent, MovementState), Z_Construct_UScriptStruct_FMovementProperties, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovementState_MetaData), NewProp_MovementState_MetaData) }; // 1560733430
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNavMovementComponent_Statics::NewProp_PathFollowingComp = { "PathFollowingComp", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNavMovementComponent, PathFollowingComp), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PathFollowingComp_MetaData), NewProp_PathFollowingComp_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNavMovementComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavMovementComponent_Statics::NewProp_FixedPathBrakingDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavMovementComponent_Statics::NewProp_bUpdateNavAgentWithOwnersCollision,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavMovementComponent_Statics::NewProp_bUseAccelerationForPaths,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavMovementComponent_Statics::NewProp_bUseFixedBrakingDistanceForPaths,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavMovementComponent_Statics::NewProp_NavMovementProperties,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavMovementComponent_Statics::NewProp_NavAgentProps,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavMovementComponent_Statics::NewProp_MovementState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavMovementComponent_Statics::NewProp_PathFollowingComp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNavMovementComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNavMovementComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovementComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNavMovementComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UNavMovementComponent_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UNavMovementInterface_NoRegister, (int32)VTABLE_OFFSET(UNavMovementComponent, INavMovementInterface), false },  // 2384297601
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNavMovementComponent_Statics::ClassParams = {
	&UNavMovementComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UNavMovementComponent_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UNavMovementComponent_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x00A800A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNavMovementComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UNavMovementComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNavMovementComponent()
{
	if (!Z_Registration_Info_UClass_UNavMovementComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNavMovementComponent.OuterSingleton, Z_Construct_UClass_UNavMovementComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNavMovementComponent.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UNavMovementComponent>()
{
	return UNavMovementComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNavMovementComponent);
UNavMovementComponent::~UNavMovementComponent() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UNavMovementComponent)
// End Class UNavMovementComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_NavMovementComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNavMovementComponent, UNavMovementComponent::StaticClass, TEXT("UNavMovementComponent"), &Z_Registration_Info_UClass_UNavMovementComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNavMovementComponent), 2560329271U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_NavMovementComponent_h_395532330(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_NavMovementComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_NavMovementComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
