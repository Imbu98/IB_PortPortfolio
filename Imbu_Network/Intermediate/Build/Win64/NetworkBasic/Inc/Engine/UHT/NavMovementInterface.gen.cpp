// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/GameFramework/NavMovementInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavMovementInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UNavMovementInterface();
ENGINE_API UClass* Z_Construct_UClass_UNavMovementInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Interface UNavMovementInterface Function GetMaxSpeedForNavMovement
struct Z_Construct_UFunction_UNavMovementInterface_GetMaxSpeedForNavMovement_Statics
{
	struct NavMovementInterface_eventGetMaxSpeedForNavMovement_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI|NavMovement" },
		{ "Comment", "/** Get maximum movement speed of the agent */" },
		{ "ModuleRelativePath", "Classes/GameFramework/NavMovementInterface.h" },
		{ "ToolTip", "Get maximum movement speed of the agent" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNavMovementInterface_GetMaxSpeedForNavMovement_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NavMovementInterface_eventGetMaxSpeedForNavMovement_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNavMovementInterface_GetMaxSpeedForNavMovement_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavMovementInterface_GetMaxSpeedForNavMovement_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNavMovementInterface_GetMaxSpeedForNavMovement_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNavMovementInterface_GetMaxSpeedForNavMovement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavMovementInterface, nullptr, "GetMaxSpeedForNavMovement", nullptr, nullptr, Z_Construct_UFunction_UNavMovementInterface_GetMaxSpeedForNavMovement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavMovementInterface_GetMaxSpeedForNavMovement_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNavMovementInterface_GetMaxSpeedForNavMovement_Statics::NavMovementInterface_eventGetMaxSpeedForNavMovement_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNavMovementInterface_GetMaxSpeedForNavMovement_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNavMovementInterface_GetMaxSpeedForNavMovement_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNavMovementInterface_GetMaxSpeedForNavMovement_Statics::NavMovementInterface_eventGetMaxSpeedForNavMovement_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNavMovementInterface_GetMaxSpeedForNavMovement()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNavMovementInterface_GetMaxSpeedForNavMovement_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(INavMovementInterface::execGetMaxSpeedForNavMovement)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetMaxSpeedForNavMovement();
	P_NATIVE_END;
}
// End Interface UNavMovementInterface Function GetMaxSpeedForNavMovement

// Begin Interface UNavMovementInterface Function GetVelocityForNavMovement
struct Z_Construct_UFunction_UNavMovementInterface_GetVelocityForNavMovement_Statics
{
	struct NavMovementInterface_eventGetVelocityForNavMovement_Parms
	{
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI|NavMovement" },
		{ "Comment", "/** Get the current velocity of the agent for nav movement */" },
		{ "ModuleRelativePath", "Classes/GameFramework/NavMovementInterface.h" },
		{ "ToolTip", "Get the current velocity of the agent for nav movement" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNavMovementInterface_GetVelocityForNavMovement_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NavMovementInterface_eventGetVelocityForNavMovement_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNavMovementInterface_GetVelocityForNavMovement_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavMovementInterface_GetVelocityForNavMovement_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNavMovementInterface_GetVelocityForNavMovement_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNavMovementInterface_GetVelocityForNavMovement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavMovementInterface, nullptr, "GetVelocityForNavMovement", nullptr, nullptr, Z_Construct_UFunction_UNavMovementInterface_GetVelocityForNavMovement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavMovementInterface_GetVelocityForNavMovement_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNavMovementInterface_GetVelocityForNavMovement_Statics::NavMovementInterface_eventGetVelocityForNavMovement_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNavMovementInterface_GetVelocityForNavMovement_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNavMovementInterface_GetVelocityForNavMovement_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNavMovementInterface_GetVelocityForNavMovement_Statics::NavMovementInterface_eventGetVelocityForNavMovement_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNavMovementInterface_GetVelocityForNavMovement()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNavMovementInterface_GetVelocityForNavMovement_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(INavMovementInterface::execGetVelocityForNavMovement)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetVelocityForNavMovement();
	P_NATIVE_END;
}
// End Interface UNavMovementInterface Function GetVelocityForNavMovement

// Begin Interface UNavMovementInterface Function IsCrouching
struct Z_Construct_UFunction_UNavMovementInterface_IsCrouching_Statics
{
	struct NavMovementInterface_eventIsCrouching_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Movement" },
		{ "Comment", "/** Returns true if currently crouching */" },
		{ "ModuleRelativePath", "Classes/GameFramework/NavMovementInterface.h" },
		{ "ToolTip", "Returns true if currently crouching" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UNavMovementInterface_IsCrouching_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NavMovementInterface_eventIsCrouching_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNavMovementInterface_IsCrouching_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NavMovementInterface_eventIsCrouching_Parms), &Z_Construct_UFunction_UNavMovementInterface_IsCrouching_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNavMovementInterface_IsCrouching_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavMovementInterface_IsCrouching_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNavMovementInterface_IsCrouching_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNavMovementInterface_IsCrouching_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavMovementInterface, nullptr, "IsCrouching", nullptr, nullptr, Z_Construct_UFunction_UNavMovementInterface_IsCrouching_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavMovementInterface_IsCrouching_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNavMovementInterface_IsCrouching_Statics::NavMovementInterface_eventIsCrouching_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNavMovementInterface_IsCrouching_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNavMovementInterface_IsCrouching_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNavMovementInterface_IsCrouching_Statics::NavMovementInterface_eventIsCrouching_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNavMovementInterface_IsCrouching()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNavMovementInterface_IsCrouching_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(INavMovementInterface::execIsCrouching)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsCrouching();
	P_NATIVE_END;
}
// End Interface UNavMovementInterface Function IsCrouching

// Begin Interface UNavMovementInterface Function IsFalling
struct Z_Construct_UFunction_UNavMovementInterface_IsFalling_Statics
{
	struct NavMovementInterface_eventIsFalling_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Movement" },
		{ "Comment", "/** Returns true if currently falling (not flying, in a non-fluid volume, and not on the ground) */" },
		{ "ModuleRelativePath", "Classes/GameFramework/NavMovementInterface.h" },
		{ "ToolTip", "Returns true if currently falling (not flying, in a non-fluid volume, and not on the ground)" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UNavMovementInterface_IsFalling_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NavMovementInterface_eventIsFalling_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNavMovementInterface_IsFalling_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NavMovementInterface_eventIsFalling_Parms), &Z_Construct_UFunction_UNavMovementInterface_IsFalling_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNavMovementInterface_IsFalling_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavMovementInterface_IsFalling_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNavMovementInterface_IsFalling_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNavMovementInterface_IsFalling_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavMovementInterface, nullptr, "IsFalling", nullptr, nullptr, Z_Construct_UFunction_UNavMovementInterface_IsFalling_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavMovementInterface_IsFalling_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNavMovementInterface_IsFalling_Statics::NavMovementInterface_eventIsFalling_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNavMovementInterface_IsFalling_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNavMovementInterface_IsFalling_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNavMovementInterface_IsFalling_Statics::NavMovementInterface_eventIsFalling_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNavMovementInterface_IsFalling()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNavMovementInterface_IsFalling_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(INavMovementInterface::execIsFalling)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsFalling();
	P_NATIVE_END;
}
// End Interface UNavMovementInterface Function IsFalling

// Begin Interface UNavMovementInterface Function IsFlying
struct Z_Construct_UFunction_UNavMovementInterface_IsFlying_Statics
{
	struct NavMovementInterface_eventIsFlying_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Movement" },
		{ "Comment", "/** Returns true if currently flying (moving through a non-fluid volume without resting on the ground) */" },
		{ "ModuleRelativePath", "Classes/GameFramework/NavMovementInterface.h" },
		{ "ToolTip", "Returns true if currently flying (moving through a non-fluid volume without resting on the ground)" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UNavMovementInterface_IsFlying_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NavMovementInterface_eventIsFlying_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNavMovementInterface_IsFlying_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NavMovementInterface_eventIsFlying_Parms), &Z_Construct_UFunction_UNavMovementInterface_IsFlying_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNavMovementInterface_IsFlying_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavMovementInterface_IsFlying_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNavMovementInterface_IsFlying_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNavMovementInterface_IsFlying_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavMovementInterface, nullptr, "IsFlying", nullptr, nullptr, Z_Construct_UFunction_UNavMovementInterface_IsFlying_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavMovementInterface_IsFlying_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNavMovementInterface_IsFlying_Statics::NavMovementInterface_eventIsFlying_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNavMovementInterface_IsFlying_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNavMovementInterface_IsFlying_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNavMovementInterface_IsFlying_Statics::NavMovementInterface_eventIsFlying_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNavMovementInterface_IsFlying()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNavMovementInterface_IsFlying_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(INavMovementInterface::execIsFlying)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsFlying();
	P_NATIVE_END;
}
// End Interface UNavMovementInterface Function IsFlying

// Begin Interface UNavMovementInterface Function IsMovingOnGround
struct Z_Construct_UFunction_UNavMovementInterface_IsMovingOnGround_Statics
{
	struct NavMovementInterface_eventIsMovingOnGround_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Movement" },
		{ "Comment", "/** Returns true if currently moving on the ground (e.g. walking or driving) */" },
		{ "ModuleRelativePath", "Classes/GameFramework/NavMovementInterface.h" },
		{ "ToolTip", "Returns true if currently moving on the ground (e.g. walking or driving)" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UNavMovementInterface_IsMovingOnGround_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NavMovementInterface_eventIsMovingOnGround_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNavMovementInterface_IsMovingOnGround_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NavMovementInterface_eventIsMovingOnGround_Parms), &Z_Construct_UFunction_UNavMovementInterface_IsMovingOnGround_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNavMovementInterface_IsMovingOnGround_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavMovementInterface_IsMovingOnGround_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNavMovementInterface_IsMovingOnGround_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNavMovementInterface_IsMovingOnGround_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavMovementInterface, nullptr, "IsMovingOnGround", nullptr, nullptr, Z_Construct_UFunction_UNavMovementInterface_IsMovingOnGround_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavMovementInterface_IsMovingOnGround_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNavMovementInterface_IsMovingOnGround_Statics::NavMovementInterface_eventIsMovingOnGround_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNavMovementInterface_IsMovingOnGround_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNavMovementInterface_IsMovingOnGround_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNavMovementInterface_IsMovingOnGround_Statics::NavMovementInterface_eventIsMovingOnGround_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNavMovementInterface_IsMovingOnGround()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNavMovementInterface_IsMovingOnGround_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(INavMovementInterface::execIsMovingOnGround)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsMovingOnGround();
	P_NATIVE_END;
}
// End Interface UNavMovementInterface Function IsMovingOnGround

// Begin Interface UNavMovementInterface Function IsSwimming
struct Z_Construct_UFunction_UNavMovementInterface_IsSwimming_Statics
{
	struct NavMovementInterface_eventIsSwimming_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Movement" },
		{ "Comment", "/** Returns true if currently swimming (moving through a fluid volume) */" },
		{ "ModuleRelativePath", "Classes/GameFramework/NavMovementInterface.h" },
		{ "ToolTip", "Returns true if currently swimming (moving through a fluid volume)" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UNavMovementInterface_IsSwimming_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NavMovementInterface_eventIsSwimming_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNavMovementInterface_IsSwimming_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NavMovementInterface_eventIsSwimming_Parms), &Z_Construct_UFunction_UNavMovementInterface_IsSwimming_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNavMovementInterface_IsSwimming_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavMovementInterface_IsSwimming_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNavMovementInterface_IsSwimming_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNavMovementInterface_IsSwimming_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavMovementInterface, nullptr, "IsSwimming", nullptr, nullptr, Z_Construct_UFunction_UNavMovementInterface_IsSwimming_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavMovementInterface_IsSwimming_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNavMovementInterface_IsSwimming_Statics::NavMovementInterface_eventIsSwimming_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNavMovementInterface_IsSwimming_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNavMovementInterface_IsSwimming_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNavMovementInterface_IsSwimming_Statics::NavMovementInterface_eventIsSwimming_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNavMovementInterface_IsSwimming()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNavMovementInterface_IsSwimming_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(INavMovementInterface::execIsSwimming)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsSwimming();
	P_NATIVE_END;
}
// End Interface UNavMovementInterface Function IsSwimming

// Begin Interface UNavMovementInterface Function RequestDirectMove
struct Z_Construct_UFunction_UNavMovementInterface_RequestDirectMove_Statics
{
	struct NavMovementInterface_eventRequestDirectMove_Parms
	{
		FVector MoveVelocity;
		bool bForceMaxSpeed;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI|NavMovement" },
		{ "Comment", "/** path following: request movement through a velocity directly */" },
		{ "ModuleRelativePath", "Classes/GameFramework/NavMovementInterface.h" },
		{ "ToolTip", "path following: request movement through a velocity directly" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveVelocity_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_MoveVelocity;
	static void NewProp_bForceMaxSpeed_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceMaxSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNavMovementInterface_RequestDirectMove_Statics::NewProp_MoveVelocity = { "MoveVelocity", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NavMovementInterface_eventRequestDirectMove_Parms, MoveVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveVelocity_MetaData), NewProp_MoveVelocity_MetaData) };
void Z_Construct_UFunction_UNavMovementInterface_RequestDirectMove_Statics::NewProp_bForceMaxSpeed_SetBit(void* Obj)
{
	((NavMovementInterface_eventRequestDirectMove_Parms*)Obj)->bForceMaxSpeed = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNavMovementInterface_RequestDirectMove_Statics::NewProp_bForceMaxSpeed = { "bForceMaxSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NavMovementInterface_eventRequestDirectMove_Parms), &Z_Construct_UFunction_UNavMovementInterface_RequestDirectMove_Statics::NewProp_bForceMaxSpeed_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNavMovementInterface_RequestDirectMove_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavMovementInterface_RequestDirectMove_Statics::NewProp_MoveVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavMovementInterface_RequestDirectMove_Statics::NewProp_bForceMaxSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNavMovementInterface_RequestDirectMove_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNavMovementInterface_RequestDirectMove_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavMovementInterface, nullptr, "RequestDirectMove", nullptr, nullptr, Z_Construct_UFunction_UNavMovementInterface_RequestDirectMove_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavMovementInterface_RequestDirectMove_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNavMovementInterface_RequestDirectMove_Statics::NavMovementInterface_eventRequestDirectMove_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNavMovementInterface_RequestDirectMove_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNavMovementInterface_RequestDirectMove_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNavMovementInterface_RequestDirectMove_Statics::NavMovementInterface_eventRequestDirectMove_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNavMovementInterface_RequestDirectMove()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNavMovementInterface_RequestDirectMove_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(INavMovementInterface::execRequestDirectMove)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_MoveVelocity);
	P_GET_UBOOL(Z_Param_bForceMaxSpeed);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RequestDirectMove(Z_Param_Out_MoveVelocity,Z_Param_bForceMaxSpeed);
	P_NATIVE_END;
}
// End Interface UNavMovementInterface Function RequestDirectMove

// Begin Interface UNavMovementInterface Function RequestPathMove
struct Z_Construct_UFunction_UNavMovementInterface_RequestPathMove_Statics
{
	struct NavMovementInterface_eventRequestPathMove_Parms
	{
		FVector MoveInput;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI|NavMovement" },
		{ "Comment", "/** path following: request movement through a new move input (normal vector = full strength) */" },
		{ "ModuleRelativePath", "Classes/GameFramework/NavMovementInterface.h" },
		{ "ToolTip", "path following: request movement through a new move input (normal vector = full strength)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveInput_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_MoveInput;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNavMovementInterface_RequestPathMove_Statics::NewProp_MoveInput = { "MoveInput", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NavMovementInterface_eventRequestPathMove_Parms, MoveInput), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveInput_MetaData), NewProp_MoveInput_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNavMovementInterface_RequestPathMove_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavMovementInterface_RequestPathMove_Statics::NewProp_MoveInput,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNavMovementInterface_RequestPathMove_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNavMovementInterface_RequestPathMove_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavMovementInterface, nullptr, "RequestPathMove", nullptr, nullptr, Z_Construct_UFunction_UNavMovementInterface_RequestPathMove_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavMovementInterface_RequestPathMove_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNavMovementInterface_RequestPathMove_Statics::NavMovementInterface_eventRequestPathMove_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNavMovementInterface_RequestPathMove_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNavMovementInterface_RequestPathMove_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNavMovementInterface_RequestPathMove_Statics::NavMovementInterface_eventRequestPathMove_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNavMovementInterface_RequestPathMove()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNavMovementInterface_RequestPathMove_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(INavMovementInterface::execRequestPathMove)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_MoveInput);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RequestPathMove(Z_Param_Out_MoveInput);
	P_NATIVE_END;
}
// End Interface UNavMovementInterface Function RequestPathMove

// Begin Interface UNavMovementInterface Function StopActiveMovement
struct Z_Construct_UFunction_UNavMovementInterface_StopActiveMovement_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI|Movement" },
		{ "Comment", "/** Stops applying further movement (usually zeros acceleration). */" },
		{ "ModuleRelativePath", "Classes/GameFramework/NavMovementInterface.h" },
		{ "ToolTip", "Stops applying further movement (usually zeros acceleration)." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNavMovementInterface_StopActiveMovement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavMovementInterface, nullptr, "StopActiveMovement", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNavMovementInterface_StopActiveMovement_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNavMovementInterface_StopActiveMovement_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UNavMovementInterface_StopActiveMovement()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNavMovementInterface_StopActiveMovement_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(INavMovementInterface::execStopActiveMovement)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopActiveMovement();
	P_NATIVE_END;
}
// End Interface UNavMovementInterface Function StopActiveMovement

// Begin Interface UNavMovementInterface Function StopMovementKeepPathing
struct Z_Construct_UFunction_UNavMovementInterface_StopMovementKeepPathing_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI|Movement" },
		{ "Comment", "/** Stops movement immediately (reset velocity) but keeps following current path */" },
		{ "ModuleRelativePath", "Classes/GameFramework/NavMovementInterface.h" },
		{ "ToolTip", "Stops movement immediately (reset velocity) but keeps following current path" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNavMovementInterface_StopMovementKeepPathing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavMovementInterface, nullptr, "StopMovementKeepPathing", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNavMovementInterface_StopMovementKeepPathing_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNavMovementInterface_StopMovementKeepPathing_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UNavMovementInterface_StopMovementKeepPathing()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNavMovementInterface_StopMovementKeepPathing_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(INavMovementInterface::execStopMovementKeepPathing)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopMovementKeepPathing();
	P_NATIVE_END;
}
// End Interface UNavMovementInterface Function StopMovementKeepPathing

// Begin Interface UNavMovementInterface
void UNavMovementInterface::StaticRegisterNativesUNavMovementInterface()
{
	UClass* Class = UNavMovementInterface::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetMaxSpeedForNavMovement", &INavMovementInterface::execGetMaxSpeedForNavMovement },
		{ "GetVelocityForNavMovement", &INavMovementInterface::execGetVelocityForNavMovement },
		{ "IsCrouching", &INavMovementInterface::execIsCrouching },
		{ "IsFalling", &INavMovementInterface::execIsFalling },
		{ "IsFlying", &INavMovementInterface::execIsFlying },
		{ "IsMovingOnGround", &INavMovementInterface::execIsMovingOnGround },
		{ "IsSwimming", &INavMovementInterface::execIsSwimming },
		{ "RequestDirectMove", &INavMovementInterface::execRequestDirectMove },
		{ "RequestPathMove", &INavMovementInterface::execRequestPathMove },
		{ "StopActiveMovement", &INavMovementInterface::execStopActiveMovement },
		{ "StopMovementKeepPathing", &INavMovementInterface::execStopMovementKeepPathing },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNavMovementInterface);
UClass* Z_Construct_UClass_UNavMovementInterface_NoRegister()
{
	return UNavMovementInterface::StaticClass();
}
struct Z_Construct_UClass_UNavMovementInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Classes/GameFramework/NavMovementInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNavMovementInterface_GetMaxSpeedForNavMovement, "GetMaxSpeedForNavMovement" }, // 594446645
		{ &Z_Construct_UFunction_UNavMovementInterface_GetVelocityForNavMovement, "GetVelocityForNavMovement" }, // 3831744468
		{ &Z_Construct_UFunction_UNavMovementInterface_IsCrouching, "IsCrouching" }, // 1660131418
		{ &Z_Construct_UFunction_UNavMovementInterface_IsFalling, "IsFalling" }, // 1157040829
		{ &Z_Construct_UFunction_UNavMovementInterface_IsFlying, "IsFlying" }, // 3584821202
		{ &Z_Construct_UFunction_UNavMovementInterface_IsMovingOnGround, "IsMovingOnGround" }, // 1345161107
		{ &Z_Construct_UFunction_UNavMovementInterface_IsSwimming, "IsSwimming" }, // 1909354485
		{ &Z_Construct_UFunction_UNavMovementInterface_RequestDirectMove, "RequestDirectMove" }, // 1950795249
		{ &Z_Construct_UFunction_UNavMovementInterface_RequestPathMove, "RequestPathMove" }, // 305002218
		{ &Z_Construct_UFunction_UNavMovementInterface_StopActiveMovement, "StopActiveMovement" }, // 3829324080
		{ &Z_Construct_UFunction_UNavMovementInterface_StopMovementKeepPathing, "StopMovementKeepPathing" }, // 3562052552
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<INavMovementInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNavMovementInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNavMovementInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNavMovementInterface_Statics::ClassParams = {
	&UNavMovementInterface::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNavMovementInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UNavMovementInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNavMovementInterface()
{
	if (!Z_Registration_Info_UClass_UNavMovementInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNavMovementInterface.OuterSingleton, Z_Construct_UClass_UNavMovementInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNavMovementInterface.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UNavMovementInterface>()
{
	return UNavMovementInterface::StaticClass();
}
UNavMovementInterface::UNavMovementInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNavMovementInterface);
UNavMovementInterface::~UNavMovementInterface() {}
// End Interface UNavMovementInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_NavMovementInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNavMovementInterface, UNavMovementInterface::StaticClass, TEXT("UNavMovementInterface"), &Z_Registration_Info_UClass_UNavMovementInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNavMovementInterface), 2384297601U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_NavMovementInterface_h_754399463(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_NavMovementInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_NavMovementInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
