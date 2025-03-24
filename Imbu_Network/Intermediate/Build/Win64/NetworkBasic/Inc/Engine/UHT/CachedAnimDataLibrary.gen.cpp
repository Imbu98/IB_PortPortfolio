// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/Animation/CachedAnimDataLibrary.h"
#include "Runtime/Engine/Public/Animation/CachedAnimData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCachedAnimDataLibrary() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UAnimInstance_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UClass* Z_Construct_UClass_UCachedAnimDataLibrary();
ENGINE_API UClass* Z_Construct_UClass_UCachedAnimDataLibrary_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCachedAnimAssetPlayerData();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCachedAnimRelevancyData();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCachedAnimStateArray();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCachedAnimStateData();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCachedAnimTransitionData();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UCachedAnimDataLibrary Function StateMachine_GetAssetPlayerTime
struct Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetAssetPlayerTime_Statics
{
	struct CachedAnimDataLibrary_eventStateMachine_GetAssetPlayerTime_Parms
	{
		UAnimInstance* InAnimInstance;
		FCachedAnimAssetPlayerData CachedAnimAssetPlayerData;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Utilities|Animation|StateMachine" },
		{ "Comment", "/*** CachedAnimAssetPlayerData ***/// Gets the accumulated time, in seconds, of the asset player in the specified state. Assumes only one player in the state (specified in the provided FCachedAnimAssetPlayerData)\n" },
		{ "ModuleRelativePath", "Public/Animation/CachedAnimDataLibrary.h" },
		{ "ToolTip", "CachedAnimAssetPlayerData **// Gets the accumulated time, in seconds, of the asset player in the specified state. Assumes only one player in the state (specified in the provided FCachedAnimAssetPlayerData)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedAnimAssetPlayerData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InAnimInstance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CachedAnimAssetPlayerData;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetAssetPlayerTime_Statics::NewProp_InAnimInstance = { "InAnimInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CachedAnimDataLibrary_eventStateMachine_GetAssetPlayerTime_Parms, InAnimInstance), Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetAssetPlayerTime_Statics::NewProp_CachedAnimAssetPlayerData = { "CachedAnimAssetPlayerData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CachedAnimDataLibrary_eventStateMachine_GetAssetPlayerTime_Parms, CachedAnimAssetPlayerData), Z_Construct_UScriptStruct_FCachedAnimAssetPlayerData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedAnimAssetPlayerData_MetaData), NewProp_CachedAnimAssetPlayerData_MetaData) }; // 2415983980
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetAssetPlayerTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CachedAnimDataLibrary_eventStateMachine_GetAssetPlayerTime_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetAssetPlayerTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetAssetPlayerTime_Statics::NewProp_InAnimInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetAssetPlayerTime_Statics::NewProp_CachedAnimAssetPlayerData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetAssetPlayerTime_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetAssetPlayerTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetAssetPlayerTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCachedAnimDataLibrary, nullptr, "StateMachine_GetAssetPlayerTime", nullptr, nullptr, Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetAssetPlayerTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetAssetPlayerTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetAssetPlayerTime_Statics::CachedAnimDataLibrary_eventStateMachine_GetAssetPlayerTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetAssetPlayerTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetAssetPlayerTime_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetAssetPlayerTime_Statics::CachedAnimDataLibrary_eventStateMachine_GetAssetPlayerTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetAssetPlayerTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetAssetPlayerTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCachedAnimDataLibrary::execStateMachine_GetAssetPlayerTime)
{
	P_GET_OBJECT(UAnimInstance,Z_Param_InAnimInstance);
	P_GET_STRUCT_REF(FCachedAnimAssetPlayerData,Z_Param_Out_CachedAnimAssetPlayerData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UCachedAnimDataLibrary::StateMachine_GetAssetPlayerTime(Z_Param_InAnimInstance,Z_Param_Out_CachedAnimAssetPlayerData);
	P_NATIVE_END;
}
// End Class UCachedAnimDataLibrary Function StateMachine_GetAssetPlayerTime

// Begin Class UCachedAnimDataLibrary Function StateMachine_GetAssetPlayerTimeRatio
struct Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetAssetPlayerTimeRatio_Statics
{
	struct CachedAnimDataLibrary_eventStateMachine_GetAssetPlayerTimeRatio_Parms
	{
		UAnimInstance* InAnimInstance;
		FCachedAnimAssetPlayerData CachedAnimAssetPlayerData;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Utilities|Animation|StateMachine" },
		{ "Comment", "// Gets the accumulated time, as a fraction, of the asset player in the specified state. Assumes only one player in the state (specified in the provided FCachedAnimAssetPlayerData)\n" },
		{ "ModuleRelativePath", "Public/Animation/CachedAnimDataLibrary.h" },
		{ "ToolTip", "Gets the accumulated time, as a fraction, of the asset player in the specified state. Assumes only one player in the state (specified in the provided FCachedAnimAssetPlayerData)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedAnimAssetPlayerData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InAnimInstance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CachedAnimAssetPlayerData;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetAssetPlayerTimeRatio_Statics::NewProp_InAnimInstance = { "InAnimInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CachedAnimDataLibrary_eventStateMachine_GetAssetPlayerTimeRatio_Parms, InAnimInstance), Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetAssetPlayerTimeRatio_Statics::NewProp_CachedAnimAssetPlayerData = { "CachedAnimAssetPlayerData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CachedAnimDataLibrary_eventStateMachine_GetAssetPlayerTimeRatio_Parms, CachedAnimAssetPlayerData), Z_Construct_UScriptStruct_FCachedAnimAssetPlayerData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedAnimAssetPlayerData_MetaData), NewProp_CachedAnimAssetPlayerData_MetaData) }; // 2415983980
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetAssetPlayerTimeRatio_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CachedAnimDataLibrary_eventStateMachine_GetAssetPlayerTimeRatio_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetAssetPlayerTimeRatio_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetAssetPlayerTimeRatio_Statics::NewProp_InAnimInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetAssetPlayerTimeRatio_Statics::NewProp_CachedAnimAssetPlayerData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetAssetPlayerTimeRatio_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetAssetPlayerTimeRatio_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetAssetPlayerTimeRatio_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCachedAnimDataLibrary, nullptr, "StateMachine_GetAssetPlayerTimeRatio", nullptr, nullptr, Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetAssetPlayerTimeRatio_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetAssetPlayerTimeRatio_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetAssetPlayerTimeRatio_Statics::CachedAnimDataLibrary_eventStateMachine_GetAssetPlayerTimeRatio_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetAssetPlayerTimeRatio_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetAssetPlayerTimeRatio_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetAssetPlayerTimeRatio_Statics::CachedAnimDataLibrary_eventStateMachine_GetAssetPlayerTimeRatio_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetAssetPlayerTimeRatio()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetAssetPlayerTimeRatio_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCachedAnimDataLibrary::execStateMachine_GetAssetPlayerTimeRatio)
{
	P_GET_OBJECT(UAnimInstance,Z_Param_InAnimInstance);
	P_GET_STRUCT_REF(FCachedAnimAssetPlayerData,Z_Param_Out_CachedAnimAssetPlayerData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UCachedAnimDataLibrary::StateMachine_GetAssetPlayerTimeRatio(Z_Param_InAnimInstance,Z_Param_Out_CachedAnimAssetPlayerData);
	P_NATIVE_END;
}
// End Class UCachedAnimDataLibrary Function StateMachine_GetAssetPlayerTimeRatio

// Begin Class UCachedAnimDataLibrary Function StateMachine_GetCrossfadeDuration
struct Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetCrossfadeDuration_Statics
{
	struct CachedAnimDataLibrary_eventStateMachine_GetCrossfadeDuration_Parms
	{
		UAnimInstance* InAnimInstance;
		FCachedAnimTransitionData CachedAnimTransitionData;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Utilities|Animation|StateMachine" },
		{ "Comment", "/*** CachedAnimTransitionData ***/// Gets the crossfade duration of the transition between the two input states. If multiple transition rules exist, the first will be returned (specified in the provided FCachedAnimTransitionData)\n" },
		{ "ModuleRelativePath", "Public/Animation/CachedAnimDataLibrary.h" },
		{ "ToolTip", "CachedAnimTransitionData **// Gets the crossfade duration of the transition between the two input states. If multiple transition rules exist, the first will be returned (specified in the provided FCachedAnimTransitionData)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedAnimTransitionData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InAnimInstance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CachedAnimTransitionData;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetCrossfadeDuration_Statics::NewProp_InAnimInstance = { "InAnimInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CachedAnimDataLibrary_eventStateMachine_GetCrossfadeDuration_Parms, InAnimInstance), Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetCrossfadeDuration_Statics::NewProp_CachedAnimTransitionData = { "CachedAnimTransitionData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CachedAnimDataLibrary_eventStateMachine_GetCrossfadeDuration_Parms, CachedAnimTransitionData), Z_Construct_UScriptStruct_FCachedAnimTransitionData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedAnimTransitionData_MetaData), NewProp_CachedAnimTransitionData_MetaData) }; // 3477874333
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetCrossfadeDuration_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CachedAnimDataLibrary_eventStateMachine_GetCrossfadeDuration_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetCrossfadeDuration_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetCrossfadeDuration_Statics::NewProp_InAnimInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetCrossfadeDuration_Statics::NewProp_CachedAnimTransitionData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetCrossfadeDuration_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetCrossfadeDuration_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetCrossfadeDuration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCachedAnimDataLibrary, nullptr, "StateMachine_GetCrossfadeDuration", nullptr, nullptr, Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetCrossfadeDuration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetCrossfadeDuration_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetCrossfadeDuration_Statics::CachedAnimDataLibrary_eventStateMachine_GetCrossfadeDuration_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetCrossfadeDuration_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetCrossfadeDuration_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetCrossfadeDuration_Statics::CachedAnimDataLibrary_eventStateMachine_GetCrossfadeDuration_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetCrossfadeDuration()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetCrossfadeDuration_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCachedAnimDataLibrary::execStateMachine_GetCrossfadeDuration)
{
	P_GET_OBJECT(UAnimInstance,Z_Param_InAnimInstance);
	P_GET_STRUCT_REF(FCachedAnimTransitionData,Z_Param_Out_CachedAnimTransitionData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UCachedAnimDataLibrary::StateMachine_GetCrossfadeDuration(Z_Param_InAnimInstance,Z_Param_Out_CachedAnimTransitionData);
	P_NATIVE_END;
}
// End Class UCachedAnimDataLibrary Function StateMachine_GetCrossfadeDuration

// Begin Class UCachedAnimDataLibrary Function StateMachine_GetGlobalWeight
struct Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetGlobalWeight_Statics
{
	struct CachedAnimDataLibrary_eventStateMachine_GetGlobalWeight_Parms
	{
		UAnimInstance* InAnimInstance;
		FCachedAnimStateData CachedAnimStateData;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Utilities|Animation|StateMachine" },
		{ "Comment", "// Returns the weight of a state, relative to the graph (specified in the provided FCachedAnimStateData)\n" },
		{ "ModuleRelativePath", "Public/Animation/CachedAnimDataLibrary.h" },
		{ "ToolTip", "Returns the weight of a state, relative to the graph (specified in the provided FCachedAnimStateData)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedAnimStateData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InAnimInstance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CachedAnimStateData;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetGlobalWeight_Statics::NewProp_InAnimInstance = { "InAnimInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CachedAnimDataLibrary_eventStateMachine_GetGlobalWeight_Parms, InAnimInstance), Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetGlobalWeight_Statics::NewProp_CachedAnimStateData = { "CachedAnimStateData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CachedAnimDataLibrary_eventStateMachine_GetGlobalWeight_Parms, CachedAnimStateData), Z_Construct_UScriptStruct_FCachedAnimStateData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedAnimStateData_MetaData), NewProp_CachedAnimStateData_MetaData) }; // 3498891689
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetGlobalWeight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CachedAnimDataLibrary_eventStateMachine_GetGlobalWeight_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetGlobalWeight_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetGlobalWeight_Statics::NewProp_InAnimInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetGlobalWeight_Statics::NewProp_CachedAnimStateData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetGlobalWeight_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetGlobalWeight_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetGlobalWeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCachedAnimDataLibrary, nullptr, "StateMachine_GetGlobalWeight", nullptr, nullptr, Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetGlobalWeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetGlobalWeight_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetGlobalWeight_Statics::CachedAnimDataLibrary_eventStateMachine_GetGlobalWeight_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetGlobalWeight_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetGlobalWeight_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetGlobalWeight_Statics::CachedAnimDataLibrary_eventStateMachine_GetGlobalWeight_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetGlobalWeight()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetGlobalWeight_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCachedAnimDataLibrary::execStateMachine_GetGlobalWeight)
{
	P_GET_OBJECT(UAnimInstance,Z_Param_InAnimInstance);
	P_GET_STRUCT_REF(FCachedAnimStateData,Z_Param_Out_CachedAnimStateData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UCachedAnimDataLibrary::StateMachine_GetGlobalWeight(Z_Param_InAnimInstance,Z_Param_Out_CachedAnimStateData);
	P_NATIVE_END;
}
// End Class UCachedAnimDataLibrary Function StateMachine_GetGlobalWeight

// Begin Class UCachedAnimDataLibrary Function StateMachine_GetLocalWeight
struct Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetLocalWeight_Statics
{
	struct CachedAnimDataLibrary_eventStateMachine_GetLocalWeight_Parms
	{
		UAnimInstance* InAnimInstance;
		FCachedAnimStateData CachedAnimStateData;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Utilities|Animation|StateMachine" },
		{ "Comment", "// Returns the weight of a state, relative to its state machine (specified in the provided FCachedAnimStateData)\n" },
		{ "ModuleRelativePath", "Public/Animation/CachedAnimDataLibrary.h" },
		{ "ToolTip", "Returns the weight of a state, relative to its state machine (specified in the provided FCachedAnimStateData)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedAnimStateData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InAnimInstance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CachedAnimStateData;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetLocalWeight_Statics::NewProp_InAnimInstance = { "InAnimInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CachedAnimDataLibrary_eventStateMachine_GetLocalWeight_Parms, InAnimInstance), Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetLocalWeight_Statics::NewProp_CachedAnimStateData = { "CachedAnimStateData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CachedAnimDataLibrary_eventStateMachine_GetLocalWeight_Parms, CachedAnimStateData), Z_Construct_UScriptStruct_FCachedAnimStateData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedAnimStateData_MetaData), NewProp_CachedAnimStateData_MetaData) }; // 3498891689
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetLocalWeight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CachedAnimDataLibrary_eventStateMachine_GetLocalWeight_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetLocalWeight_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetLocalWeight_Statics::NewProp_InAnimInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetLocalWeight_Statics::NewProp_CachedAnimStateData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetLocalWeight_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetLocalWeight_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetLocalWeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCachedAnimDataLibrary, nullptr, "StateMachine_GetLocalWeight", nullptr, nullptr, Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetLocalWeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetLocalWeight_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetLocalWeight_Statics::CachedAnimDataLibrary_eventStateMachine_GetLocalWeight_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetLocalWeight_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetLocalWeight_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetLocalWeight_Statics::CachedAnimDataLibrary_eventStateMachine_GetLocalWeight_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetLocalWeight()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetLocalWeight_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCachedAnimDataLibrary::execStateMachine_GetLocalWeight)
{
	P_GET_OBJECT(UAnimInstance,Z_Param_InAnimInstance);
	P_GET_STRUCT_REF(FCachedAnimStateData,Z_Param_Out_CachedAnimStateData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UCachedAnimDataLibrary::StateMachine_GetLocalWeight(Z_Param_InAnimInstance,Z_Param_Out_CachedAnimStateData);
	P_NATIVE_END;
}
// End Class UCachedAnimDataLibrary Function StateMachine_GetLocalWeight

// Begin Class UCachedAnimDataLibrary Function StateMachine_GetRelevantAnimTime
struct Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetRelevantAnimTime_Statics
{
	struct CachedAnimDataLibrary_eventStateMachine_GetRelevantAnimTime_Parms
	{
		UAnimInstance* InAnimInstance;
		FCachedAnimRelevancyData CachedAnimRelevancyData;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Utilities|Animation|StateMachine" },
		{ "Comment", "/*** CachedAnimRelevancyData ***/// Gets the accumulated time, in seconds, of the most relevant asset player in the specified state (specified in the provided FCachedAnimRelevancyData)\n" },
		{ "ModuleRelativePath", "Public/Animation/CachedAnimDataLibrary.h" },
		{ "ToolTip", "CachedAnimRelevancyData **// Gets the accumulated time, in seconds, of the most relevant asset player in the specified state (specified in the provided FCachedAnimRelevancyData)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedAnimRelevancyData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InAnimInstance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CachedAnimRelevancyData;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetRelevantAnimTime_Statics::NewProp_InAnimInstance = { "InAnimInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CachedAnimDataLibrary_eventStateMachine_GetRelevantAnimTime_Parms, InAnimInstance), Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetRelevantAnimTime_Statics::NewProp_CachedAnimRelevancyData = { "CachedAnimRelevancyData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CachedAnimDataLibrary_eventStateMachine_GetRelevantAnimTime_Parms, CachedAnimRelevancyData), Z_Construct_UScriptStruct_FCachedAnimRelevancyData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedAnimRelevancyData_MetaData), NewProp_CachedAnimRelevancyData_MetaData) }; // 1149160042
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetRelevantAnimTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CachedAnimDataLibrary_eventStateMachine_GetRelevantAnimTime_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetRelevantAnimTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetRelevantAnimTime_Statics::NewProp_InAnimInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetRelevantAnimTime_Statics::NewProp_CachedAnimRelevancyData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetRelevantAnimTime_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetRelevantAnimTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetRelevantAnimTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCachedAnimDataLibrary, nullptr, "StateMachine_GetRelevantAnimTime", nullptr, nullptr, Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetRelevantAnimTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetRelevantAnimTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetRelevantAnimTime_Statics::CachedAnimDataLibrary_eventStateMachine_GetRelevantAnimTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetRelevantAnimTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetRelevantAnimTime_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetRelevantAnimTime_Statics::CachedAnimDataLibrary_eventStateMachine_GetRelevantAnimTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetRelevantAnimTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetRelevantAnimTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCachedAnimDataLibrary::execStateMachine_GetRelevantAnimTime)
{
	P_GET_OBJECT(UAnimInstance,Z_Param_InAnimInstance);
	P_GET_STRUCT_REF(FCachedAnimRelevancyData,Z_Param_Out_CachedAnimRelevancyData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UCachedAnimDataLibrary::StateMachine_GetRelevantAnimTime(Z_Param_InAnimInstance,Z_Param_Out_CachedAnimRelevancyData);
	P_NATIVE_END;
}
// End Class UCachedAnimDataLibrary Function StateMachine_GetRelevantAnimTime

// Begin Class UCachedAnimDataLibrary Function StateMachine_GetRelevantAnimTimeRemaining
struct Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetRelevantAnimTimeRemaining_Statics
{
	struct CachedAnimDataLibrary_eventStateMachine_GetRelevantAnimTimeRemaining_Parms
	{
		UAnimInstance* InAnimInstance;
		FCachedAnimRelevancyData CachedAnimRelevancyData;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Utilities|Animation|StateMachine" },
		{ "Comment", "// Gets the time to the end of the asset, in seconds, of the most relevant asset player in the specified state (specified in the provided FCachedAnimRelevancyData)\n" },
		{ "ModuleRelativePath", "Public/Animation/CachedAnimDataLibrary.h" },
		{ "ToolTip", "Gets the time to the end of the asset, in seconds, of the most relevant asset player in the specified state (specified in the provided FCachedAnimRelevancyData)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedAnimRelevancyData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InAnimInstance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CachedAnimRelevancyData;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetRelevantAnimTimeRemaining_Statics::NewProp_InAnimInstance = { "InAnimInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CachedAnimDataLibrary_eventStateMachine_GetRelevantAnimTimeRemaining_Parms, InAnimInstance), Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetRelevantAnimTimeRemaining_Statics::NewProp_CachedAnimRelevancyData = { "CachedAnimRelevancyData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CachedAnimDataLibrary_eventStateMachine_GetRelevantAnimTimeRemaining_Parms, CachedAnimRelevancyData), Z_Construct_UScriptStruct_FCachedAnimRelevancyData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedAnimRelevancyData_MetaData), NewProp_CachedAnimRelevancyData_MetaData) }; // 1149160042
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetRelevantAnimTimeRemaining_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CachedAnimDataLibrary_eventStateMachine_GetRelevantAnimTimeRemaining_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetRelevantAnimTimeRemaining_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetRelevantAnimTimeRemaining_Statics::NewProp_InAnimInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetRelevantAnimTimeRemaining_Statics::NewProp_CachedAnimRelevancyData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetRelevantAnimTimeRemaining_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetRelevantAnimTimeRemaining_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetRelevantAnimTimeRemaining_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCachedAnimDataLibrary, nullptr, "StateMachine_GetRelevantAnimTimeRemaining", nullptr, nullptr, Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetRelevantAnimTimeRemaining_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetRelevantAnimTimeRemaining_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetRelevantAnimTimeRemaining_Statics::CachedAnimDataLibrary_eventStateMachine_GetRelevantAnimTimeRemaining_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetRelevantAnimTimeRemaining_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetRelevantAnimTimeRemaining_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetRelevantAnimTimeRemaining_Statics::CachedAnimDataLibrary_eventStateMachine_GetRelevantAnimTimeRemaining_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetRelevantAnimTimeRemaining()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetRelevantAnimTimeRemaining_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCachedAnimDataLibrary::execStateMachine_GetRelevantAnimTimeRemaining)
{
	P_GET_OBJECT(UAnimInstance,Z_Param_InAnimInstance);
	P_GET_STRUCT_REF(FCachedAnimRelevancyData,Z_Param_Out_CachedAnimRelevancyData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UCachedAnimDataLibrary::StateMachine_GetRelevantAnimTimeRemaining(Z_Param_InAnimInstance,Z_Param_Out_CachedAnimRelevancyData);
	P_NATIVE_END;
}
// End Class UCachedAnimDataLibrary Function StateMachine_GetRelevantAnimTimeRemaining

// Begin Class UCachedAnimDataLibrary Function StateMachine_GetRelevantAnimTimeRemainingFraction
struct Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetRelevantAnimTimeRemainingFraction_Statics
{
	struct CachedAnimDataLibrary_eventStateMachine_GetRelevantAnimTimeRemainingFraction_Parms
	{
		UAnimInstance* InAnimInstance;
		FCachedAnimRelevancyData CachedAnimRelevancyData;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Utilities|Animation|StateMachine" },
		{ "Comment", "// Gets the time to the end of the asset, as a fraction, of the most relevant asset player in the specified state (specified in the provided FCachedAnimRelevancyData)\n" },
		{ "ModuleRelativePath", "Public/Animation/CachedAnimDataLibrary.h" },
		{ "ToolTip", "Gets the time to the end of the asset, as a fraction, of the most relevant asset player in the specified state (specified in the provided FCachedAnimRelevancyData)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedAnimRelevancyData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InAnimInstance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CachedAnimRelevancyData;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetRelevantAnimTimeRemainingFraction_Statics::NewProp_InAnimInstance = { "InAnimInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CachedAnimDataLibrary_eventStateMachine_GetRelevantAnimTimeRemainingFraction_Parms, InAnimInstance), Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetRelevantAnimTimeRemainingFraction_Statics::NewProp_CachedAnimRelevancyData = { "CachedAnimRelevancyData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CachedAnimDataLibrary_eventStateMachine_GetRelevantAnimTimeRemainingFraction_Parms, CachedAnimRelevancyData), Z_Construct_UScriptStruct_FCachedAnimRelevancyData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedAnimRelevancyData_MetaData), NewProp_CachedAnimRelevancyData_MetaData) }; // 1149160042
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetRelevantAnimTimeRemainingFraction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CachedAnimDataLibrary_eventStateMachine_GetRelevantAnimTimeRemainingFraction_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetRelevantAnimTimeRemainingFraction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetRelevantAnimTimeRemainingFraction_Statics::NewProp_InAnimInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetRelevantAnimTimeRemainingFraction_Statics::NewProp_CachedAnimRelevancyData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetRelevantAnimTimeRemainingFraction_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetRelevantAnimTimeRemainingFraction_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetRelevantAnimTimeRemainingFraction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCachedAnimDataLibrary, nullptr, "StateMachine_GetRelevantAnimTimeRemainingFraction", nullptr, nullptr, Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetRelevantAnimTimeRemainingFraction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetRelevantAnimTimeRemainingFraction_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetRelevantAnimTimeRemainingFraction_Statics::CachedAnimDataLibrary_eventStateMachine_GetRelevantAnimTimeRemainingFraction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetRelevantAnimTimeRemainingFraction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetRelevantAnimTimeRemainingFraction_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetRelevantAnimTimeRemainingFraction_Statics::CachedAnimDataLibrary_eventStateMachine_GetRelevantAnimTimeRemainingFraction_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetRelevantAnimTimeRemainingFraction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetRelevantAnimTimeRemainingFraction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCachedAnimDataLibrary::execStateMachine_GetRelevantAnimTimeRemainingFraction)
{
	P_GET_OBJECT(UAnimInstance,Z_Param_InAnimInstance);
	P_GET_STRUCT_REF(FCachedAnimRelevancyData,Z_Param_Out_CachedAnimRelevancyData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UCachedAnimDataLibrary::StateMachine_GetRelevantAnimTimeRemainingFraction(Z_Param_InAnimInstance,Z_Param_Out_CachedAnimRelevancyData);
	P_NATIVE_END;
}
// End Class UCachedAnimDataLibrary Function StateMachine_GetRelevantAnimTimeRemainingFraction

// Begin Class UCachedAnimDataLibrary Function StateMachine_GetTotalWeight
struct Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetTotalWeight_Statics
{
	struct CachedAnimDataLibrary_eventStateMachine_GetTotalWeight_Parms
	{
		UAnimInstance* InAnimInstance;
		FCachedAnimStateArray CachedAnimStateArray;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Utilities|Animation|StateMachine" },
		{ "Comment", "/*** CachedAnimStateArray ***/// Returns the summed weight of a state or states, relative to their state machine (specified in the provided FCachedAnimStateArray)\n" },
		{ "ModuleRelativePath", "Public/Animation/CachedAnimDataLibrary.h" },
		{ "ToolTip", "CachedAnimStateArray **// Returns the summed weight of a state or states, relative to their state machine (specified in the provided FCachedAnimStateArray)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedAnimStateArray_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InAnimInstance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CachedAnimStateArray;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetTotalWeight_Statics::NewProp_InAnimInstance = { "InAnimInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CachedAnimDataLibrary_eventStateMachine_GetTotalWeight_Parms, InAnimInstance), Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetTotalWeight_Statics::NewProp_CachedAnimStateArray = { "CachedAnimStateArray", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CachedAnimDataLibrary_eventStateMachine_GetTotalWeight_Parms, CachedAnimStateArray), Z_Construct_UScriptStruct_FCachedAnimStateArray, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedAnimStateArray_MetaData), NewProp_CachedAnimStateArray_MetaData) }; // 3502073305
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetTotalWeight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CachedAnimDataLibrary_eventStateMachine_GetTotalWeight_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetTotalWeight_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetTotalWeight_Statics::NewProp_InAnimInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetTotalWeight_Statics::NewProp_CachedAnimStateArray,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetTotalWeight_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetTotalWeight_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetTotalWeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCachedAnimDataLibrary, nullptr, "StateMachine_GetTotalWeight", nullptr, nullptr, Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetTotalWeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetTotalWeight_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetTotalWeight_Statics::CachedAnimDataLibrary_eventStateMachine_GetTotalWeight_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetTotalWeight_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetTotalWeight_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetTotalWeight_Statics::CachedAnimDataLibrary_eventStateMachine_GetTotalWeight_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetTotalWeight()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetTotalWeight_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCachedAnimDataLibrary::execStateMachine_GetTotalWeight)
{
	P_GET_OBJECT(UAnimInstance,Z_Param_InAnimInstance);
	P_GET_STRUCT_REF(FCachedAnimStateArray,Z_Param_Out_CachedAnimStateArray);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UCachedAnimDataLibrary::StateMachine_GetTotalWeight(Z_Param_InAnimInstance,Z_Param_Out_CachedAnimStateArray);
	P_NATIVE_END;
}
// End Class UCachedAnimDataLibrary Function StateMachine_GetTotalWeight

// Begin Class UCachedAnimDataLibrary Function StateMachine_IsFullWeight
struct Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_IsFullWeight_Statics
{
	struct CachedAnimDataLibrary_eventStateMachine_IsFullWeight_Parms
	{
		UAnimInstance* InAnimInstance;
		FCachedAnimStateArray CachedAnimStateArray;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Utilities|Animation|StateMachine" },
		{ "Comment", "// Returns true when the weight of the input state (or summed weight for multiple input states) is 1.0 of greater (specified in the provided FCachedAnimStateArray)\n" },
		{ "ModuleRelativePath", "Public/Animation/CachedAnimDataLibrary.h" },
		{ "ToolTip", "Returns true when the weight of the input state (or summed weight for multiple input states) is 1.0 of greater (specified in the provided FCachedAnimStateArray)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedAnimStateArray_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InAnimInstance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CachedAnimStateArray;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_IsFullWeight_Statics::NewProp_InAnimInstance = { "InAnimInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CachedAnimDataLibrary_eventStateMachine_IsFullWeight_Parms, InAnimInstance), Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_IsFullWeight_Statics::NewProp_CachedAnimStateArray = { "CachedAnimStateArray", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CachedAnimDataLibrary_eventStateMachine_IsFullWeight_Parms, CachedAnimStateArray), Z_Construct_UScriptStruct_FCachedAnimStateArray, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedAnimStateArray_MetaData), NewProp_CachedAnimStateArray_MetaData) }; // 3502073305
void Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_IsFullWeight_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((CachedAnimDataLibrary_eventStateMachine_IsFullWeight_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_IsFullWeight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CachedAnimDataLibrary_eventStateMachine_IsFullWeight_Parms), &Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_IsFullWeight_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_IsFullWeight_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_IsFullWeight_Statics::NewProp_InAnimInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_IsFullWeight_Statics::NewProp_CachedAnimStateArray,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_IsFullWeight_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_IsFullWeight_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_IsFullWeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCachedAnimDataLibrary, nullptr, "StateMachine_IsFullWeight", nullptr, nullptr, Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_IsFullWeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_IsFullWeight_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_IsFullWeight_Statics::CachedAnimDataLibrary_eventStateMachine_IsFullWeight_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_IsFullWeight_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_IsFullWeight_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_IsFullWeight_Statics::CachedAnimDataLibrary_eventStateMachine_IsFullWeight_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_IsFullWeight()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_IsFullWeight_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCachedAnimDataLibrary::execStateMachine_IsFullWeight)
{
	P_GET_OBJECT(UAnimInstance,Z_Param_InAnimInstance);
	P_GET_STRUCT_REF(FCachedAnimStateArray,Z_Param_Out_CachedAnimStateArray);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UCachedAnimDataLibrary::StateMachine_IsFullWeight(Z_Param_InAnimInstance,Z_Param_Out_CachedAnimStateArray);
	P_NATIVE_END;
}
// End Class UCachedAnimDataLibrary Function StateMachine_IsFullWeight

// Begin Class UCachedAnimDataLibrary Function StateMachine_IsRelevant
struct Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_IsRelevant_Statics
{
	struct CachedAnimDataLibrary_eventStateMachine_IsRelevant_Parms
	{
		UAnimInstance* InAnimInstance;
		FCachedAnimStateArray CachedAnimStateArray;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Utilities|Animation|StateMachine" },
		{ "Comment", "// Returns true when the input state, or states, have any weight (specified in the provided FCachedAnimStateArray)\n" },
		{ "ModuleRelativePath", "Public/Animation/CachedAnimDataLibrary.h" },
		{ "ToolTip", "Returns true when the input state, or states, have any weight (specified in the provided FCachedAnimStateArray)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedAnimStateArray_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InAnimInstance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CachedAnimStateArray;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_IsRelevant_Statics::NewProp_InAnimInstance = { "InAnimInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CachedAnimDataLibrary_eventStateMachine_IsRelevant_Parms, InAnimInstance), Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_IsRelevant_Statics::NewProp_CachedAnimStateArray = { "CachedAnimStateArray", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CachedAnimDataLibrary_eventStateMachine_IsRelevant_Parms, CachedAnimStateArray), Z_Construct_UScriptStruct_FCachedAnimStateArray, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedAnimStateArray_MetaData), NewProp_CachedAnimStateArray_MetaData) }; // 3502073305
void Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_IsRelevant_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((CachedAnimDataLibrary_eventStateMachine_IsRelevant_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_IsRelevant_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CachedAnimDataLibrary_eventStateMachine_IsRelevant_Parms), &Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_IsRelevant_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_IsRelevant_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_IsRelevant_Statics::NewProp_InAnimInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_IsRelevant_Statics::NewProp_CachedAnimStateArray,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_IsRelevant_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_IsRelevant_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_IsRelevant_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCachedAnimDataLibrary, nullptr, "StateMachine_IsRelevant", nullptr, nullptr, Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_IsRelevant_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_IsRelevant_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_IsRelevant_Statics::CachedAnimDataLibrary_eventStateMachine_IsRelevant_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_IsRelevant_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_IsRelevant_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_IsRelevant_Statics::CachedAnimDataLibrary_eventStateMachine_IsRelevant_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_IsRelevant()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_IsRelevant_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCachedAnimDataLibrary::execStateMachine_IsRelevant)
{
	P_GET_OBJECT(UAnimInstance,Z_Param_InAnimInstance);
	P_GET_STRUCT_REF(FCachedAnimStateArray,Z_Param_Out_CachedAnimStateArray);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UCachedAnimDataLibrary::StateMachine_IsRelevant(Z_Param_InAnimInstance,Z_Param_Out_CachedAnimStateArray);
	P_NATIVE_END;
}
// End Class UCachedAnimDataLibrary Function StateMachine_IsRelevant

// Begin Class UCachedAnimDataLibrary Function StateMachine_IsStateRelevant
struct Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_IsStateRelevant_Statics
{
	struct CachedAnimDataLibrary_eventStateMachine_IsStateRelevant_Parms
	{
		UAnimInstance* InAnimInstance;
		FCachedAnimStateData CachedAnimStateData;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Utilities|Animation|StateMachine" },
		{ "Comment", "/*** CachedAnimStateData ***/// Returns whether a state is relevant (specified in the provided FCachedAnimStateData)\n" },
		{ "ModuleRelativePath", "Public/Animation/CachedAnimDataLibrary.h" },
		{ "ToolTip", "CachedAnimStateData **// Returns whether a state is relevant (specified in the provided FCachedAnimStateData)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedAnimStateData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InAnimInstance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CachedAnimStateData;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_IsStateRelevant_Statics::NewProp_InAnimInstance = { "InAnimInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CachedAnimDataLibrary_eventStateMachine_IsStateRelevant_Parms, InAnimInstance), Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_IsStateRelevant_Statics::NewProp_CachedAnimStateData = { "CachedAnimStateData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CachedAnimDataLibrary_eventStateMachine_IsStateRelevant_Parms, CachedAnimStateData), Z_Construct_UScriptStruct_FCachedAnimStateData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedAnimStateData_MetaData), NewProp_CachedAnimStateData_MetaData) }; // 3498891689
void Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_IsStateRelevant_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((CachedAnimDataLibrary_eventStateMachine_IsStateRelevant_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_IsStateRelevant_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CachedAnimDataLibrary_eventStateMachine_IsStateRelevant_Parms), &Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_IsStateRelevant_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_IsStateRelevant_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_IsStateRelevant_Statics::NewProp_InAnimInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_IsStateRelevant_Statics::NewProp_CachedAnimStateData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_IsStateRelevant_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_IsStateRelevant_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_IsStateRelevant_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCachedAnimDataLibrary, nullptr, "StateMachine_IsStateRelevant", nullptr, nullptr, Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_IsStateRelevant_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_IsStateRelevant_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_IsStateRelevant_Statics::CachedAnimDataLibrary_eventStateMachine_IsStateRelevant_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_IsStateRelevant_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_IsStateRelevant_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_IsStateRelevant_Statics::CachedAnimDataLibrary_eventStateMachine_IsStateRelevant_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_IsStateRelevant()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_IsStateRelevant_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCachedAnimDataLibrary::execStateMachine_IsStateRelevant)
{
	P_GET_OBJECT(UAnimInstance,Z_Param_InAnimInstance);
	P_GET_STRUCT_REF(FCachedAnimStateData,Z_Param_Out_CachedAnimStateData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UCachedAnimDataLibrary::StateMachine_IsStateRelevant(Z_Param_InAnimInstance,Z_Param_Out_CachedAnimStateData);
	P_NATIVE_END;
}
// End Class UCachedAnimDataLibrary Function StateMachine_IsStateRelevant

// Begin Class UCachedAnimDataLibrary
void UCachedAnimDataLibrary::StaticRegisterNativesUCachedAnimDataLibrary()
{
	UClass* Class = UCachedAnimDataLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "StateMachine_GetAssetPlayerTime", &UCachedAnimDataLibrary::execStateMachine_GetAssetPlayerTime },
		{ "StateMachine_GetAssetPlayerTimeRatio", &UCachedAnimDataLibrary::execStateMachine_GetAssetPlayerTimeRatio },
		{ "StateMachine_GetCrossfadeDuration", &UCachedAnimDataLibrary::execStateMachine_GetCrossfadeDuration },
		{ "StateMachine_GetGlobalWeight", &UCachedAnimDataLibrary::execStateMachine_GetGlobalWeight },
		{ "StateMachine_GetLocalWeight", &UCachedAnimDataLibrary::execStateMachine_GetLocalWeight },
		{ "StateMachine_GetRelevantAnimTime", &UCachedAnimDataLibrary::execStateMachine_GetRelevantAnimTime },
		{ "StateMachine_GetRelevantAnimTimeRemaining", &UCachedAnimDataLibrary::execStateMachine_GetRelevantAnimTimeRemaining },
		{ "StateMachine_GetRelevantAnimTimeRemainingFraction", &UCachedAnimDataLibrary::execStateMachine_GetRelevantAnimTimeRemainingFraction },
		{ "StateMachine_GetTotalWeight", &UCachedAnimDataLibrary::execStateMachine_GetTotalWeight },
		{ "StateMachine_IsFullWeight", &UCachedAnimDataLibrary::execStateMachine_IsFullWeight },
		{ "StateMachine_IsRelevant", &UCachedAnimDataLibrary::execStateMachine_IsRelevant },
		{ "StateMachine_IsStateRelevant", &UCachedAnimDataLibrary::execStateMachine_IsStateRelevant },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCachedAnimDataLibrary);
UClass* Z_Construct_UClass_UCachedAnimDataLibrary_NoRegister()
{
	return UCachedAnimDataLibrary::StaticClass();
}
struct Z_Construct_UClass_UCachedAnimDataLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\x09""A library of commonly used functionality from the CachedAnimData family, exposed to blueprint.\n */" },
		{ "IncludePath", "Animation/CachedAnimDataLibrary.h" },
		{ "ModuleRelativePath", "Public/Animation/CachedAnimDataLibrary.h" },
		{ "ScriptName", "CachedAnimDataLibrary" },
		{ "ToolTip", "A library of commonly used functionality from the CachedAnimData family, exposed to blueprint." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetAssetPlayerTime, "StateMachine_GetAssetPlayerTime" }, // 1450162492
		{ &Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetAssetPlayerTimeRatio, "StateMachine_GetAssetPlayerTimeRatio" }, // 1061075129
		{ &Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetCrossfadeDuration, "StateMachine_GetCrossfadeDuration" }, // 215385094
		{ &Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetGlobalWeight, "StateMachine_GetGlobalWeight" }, // 496937877
		{ &Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetLocalWeight, "StateMachine_GetLocalWeight" }, // 820927426
		{ &Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetRelevantAnimTime, "StateMachine_GetRelevantAnimTime" }, // 540044220
		{ &Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetRelevantAnimTimeRemaining, "StateMachine_GetRelevantAnimTimeRemaining" }, // 1097923643
		{ &Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetRelevantAnimTimeRemainingFraction, "StateMachine_GetRelevantAnimTimeRemainingFraction" }, // 2606438423
		{ &Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetTotalWeight, "StateMachine_GetTotalWeight" }, // 982214480
		{ &Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_IsFullWeight, "StateMachine_IsFullWeight" }, // 3143485565
		{ &Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_IsRelevant, "StateMachine_IsRelevant" }, // 3646762217
		{ &Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_IsStateRelevant, "StateMachine_IsStateRelevant" }, // 540881455
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCachedAnimDataLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCachedAnimDataLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCachedAnimDataLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCachedAnimDataLibrary_Statics::ClassParams = {
	&UCachedAnimDataLibrary::StaticClass,
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
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCachedAnimDataLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UCachedAnimDataLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCachedAnimDataLibrary()
{
	if (!Z_Registration_Info_UClass_UCachedAnimDataLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCachedAnimDataLibrary.OuterSingleton, Z_Construct_UClass_UCachedAnimDataLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCachedAnimDataLibrary.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UCachedAnimDataLibrary>()
{
	return UCachedAnimDataLibrary::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCachedAnimDataLibrary);
UCachedAnimDataLibrary::~UCachedAnimDataLibrary() {}
// End Class UCachedAnimDataLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_CachedAnimDataLibrary_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCachedAnimDataLibrary, UCachedAnimDataLibrary::StaticClass, TEXT("UCachedAnimDataLibrary"), &Z_Registration_Info_UClass_UCachedAnimDataLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCachedAnimDataLibrary), 1447260490U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_CachedAnimDataLibrary_h_178321448(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_CachedAnimDataLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_CachedAnimDataLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
