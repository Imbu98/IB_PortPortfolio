// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayCameras/Public/GameFramework/CameraRigParameterInterop.h"
#include "GameplayCameras/Public/GameFramework/BlueprintCameraVariableTable.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCameraRigParameterInterop() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector4();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UCameraRigAsset_NoRegister();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UCameraRigParameterInterop();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UCameraRigParameterInterop_NoRegister();
GAMEPLAYCAMERAS_API UScriptStruct* Z_Construct_UScriptStruct_FBlueprintCameraVariableTable();
UPackage* Z_Construct_UPackage__Script_GameplayCameras();
// End Cross Module References

// Begin Class UCameraRigParameterInterop Function SetBooleanParameter
struct Z_Construct_UFunction_UCameraRigParameterInterop_SetBooleanParameter_Statics
{
	struct CameraRigParameterInterop_eventSetBooleanParameter_Parms
	{
		FBlueprintCameraVariableTable VariableTable;
		UCameraRigAsset* CameraRig;
		FString ParameterName;
		bool bParameterValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Public/GameFramework/CameraRigParameterInterop.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParameterName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_VariableTable;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraRig;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ParameterName;
	static void NewProp_bParameterValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bParameterValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCameraRigParameterInterop_SetBooleanParameter_Statics::NewProp_VariableTable = { "VariableTable", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CameraRigParameterInterop_eventSetBooleanParameter_Parms, VariableTable), Z_Construct_UScriptStruct_FBlueprintCameraVariableTable, METADATA_PARAMS(0, nullptr) }; // 2718450583
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCameraRigParameterInterop_SetBooleanParameter_Statics::NewProp_CameraRig = { "CameraRig", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CameraRigParameterInterop_eventSetBooleanParameter_Parms, CameraRig), Z_Construct_UClass_UCameraRigAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCameraRigParameterInterop_SetBooleanParameter_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CameraRigParameterInterop_eventSetBooleanParameter_Parms, ParameterName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParameterName_MetaData), NewProp_ParameterName_MetaData) };
void Z_Construct_UFunction_UCameraRigParameterInterop_SetBooleanParameter_Statics::NewProp_bParameterValue_SetBit(void* Obj)
{
	((CameraRigParameterInterop_eventSetBooleanParameter_Parms*)Obj)->bParameterValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCameraRigParameterInterop_SetBooleanParameter_Statics::NewProp_bParameterValue = { "bParameterValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CameraRigParameterInterop_eventSetBooleanParameter_Parms), &Z_Construct_UFunction_UCameraRigParameterInterop_SetBooleanParameter_Statics::NewProp_bParameterValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCameraRigParameterInterop_SetBooleanParameter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraRigParameterInterop_SetBooleanParameter_Statics::NewProp_VariableTable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraRigParameterInterop_SetBooleanParameter_Statics::NewProp_CameraRig,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraRigParameterInterop_SetBooleanParameter_Statics::NewProp_ParameterName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraRigParameterInterop_SetBooleanParameter_Statics::NewProp_bParameterValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraRigParameterInterop_SetBooleanParameter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCameraRigParameterInterop_SetBooleanParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraRigParameterInterop, nullptr, "SetBooleanParameter", nullptr, nullptr, Z_Construct_UFunction_UCameraRigParameterInterop_SetBooleanParameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraRigParameterInterop_SetBooleanParameter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCameraRigParameterInterop_SetBooleanParameter_Statics::CameraRigParameterInterop_eventSetBooleanParameter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraRigParameterInterop_SetBooleanParameter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCameraRigParameterInterop_SetBooleanParameter_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCameraRigParameterInterop_SetBooleanParameter_Statics::CameraRigParameterInterop_eventSetBooleanParameter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCameraRigParameterInterop_SetBooleanParameter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCameraRigParameterInterop_SetBooleanParameter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCameraRigParameterInterop::execSetBooleanParameter)
{
	P_GET_STRUCT_REF(FBlueprintCameraVariableTable,Z_Param_Out_VariableTable);
	P_GET_OBJECT(UCameraRigAsset,Z_Param_CameraRig);
	P_GET_PROPERTY(FStrProperty,Z_Param_ParameterName);
	P_GET_UBOOL(Z_Param_bParameterValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	UCameraRigParameterInterop::SetBooleanParameter(Z_Param_Out_VariableTable,Z_Param_CameraRig,Z_Param_ParameterName,Z_Param_bParameterValue);
	P_NATIVE_END;
}
// End Class UCameraRigParameterInterop Function SetBooleanParameter

// Begin Class UCameraRigParameterInterop Function SetDoubleParameter
struct Z_Construct_UFunction_UCameraRigParameterInterop_SetDoubleParameter_Statics
{
	struct CameraRigParameterInterop_eventSetDoubleParameter_Parms
	{
		FBlueprintCameraVariableTable VariableTable;
		UCameraRigAsset* CameraRig;
		FString ParameterName;
		double ParameterValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Public/GameFramework/CameraRigParameterInterop.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParameterName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_VariableTable;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraRig;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ParameterName;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_ParameterValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCameraRigParameterInterop_SetDoubleParameter_Statics::NewProp_VariableTable = { "VariableTable", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CameraRigParameterInterop_eventSetDoubleParameter_Parms, VariableTable), Z_Construct_UScriptStruct_FBlueprintCameraVariableTable, METADATA_PARAMS(0, nullptr) }; // 2718450583
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCameraRigParameterInterop_SetDoubleParameter_Statics::NewProp_CameraRig = { "CameraRig", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CameraRigParameterInterop_eventSetDoubleParameter_Parms, CameraRig), Z_Construct_UClass_UCameraRigAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCameraRigParameterInterop_SetDoubleParameter_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CameraRigParameterInterop_eventSetDoubleParameter_Parms, ParameterName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParameterName_MetaData), NewProp_ParameterName_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UCameraRigParameterInterop_SetDoubleParameter_Statics::NewProp_ParameterValue = { "ParameterValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CameraRigParameterInterop_eventSetDoubleParameter_Parms, ParameterValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCameraRigParameterInterop_SetDoubleParameter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraRigParameterInterop_SetDoubleParameter_Statics::NewProp_VariableTable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraRigParameterInterop_SetDoubleParameter_Statics::NewProp_CameraRig,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraRigParameterInterop_SetDoubleParameter_Statics::NewProp_ParameterName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraRigParameterInterop_SetDoubleParameter_Statics::NewProp_ParameterValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraRigParameterInterop_SetDoubleParameter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCameraRigParameterInterop_SetDoubleParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraRigParameterInterop, nullptr, "SetDoubleParameter", nullptr, nullptr, Z_Construct_UFunction_UCameraRigParameterInterop_SetDoubleParameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraRigParameterInterop_SetDoubleParameter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCameraRigParameterInterop_SetDoubleParameter_Statics::CameraRigParameterInterop_eventSetDoubleParameter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraRigParameterInterop_SetDoubleParameter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCameraRigParameterInterop_SetDoubleParameter_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCameraRigParameterInterop_SetDoubleParameter_Statics::CameraRigParameterInterop_eventSetDoubleParameter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCameraRigParameterInterop_SetDoubleParameter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCameraRigParameterInterop_SetDoubleParameter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCameraRigParameterInterop::execSetDoubleParameter)
{
	P_GET_STRUCT_REF(FBlueprintCameraVariableTable,Z_Param_Out_VariableTable);
	P_GET_OBJECT(UCameraRigAsset,Z_Param_CameraRig);
	P_GET_PROPERTY(FStrProperty,Z_Param_ParameterName);
	P_GET_PROPERTY(FDoubleProperty,Z_Param_ParameterValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	UCameraRigParameterInterop::SetDoubleParameter(Z_Param_Out_VariableTable,Z_Param_CameraRig,Z_Param_ParameterName,Z_Param_ParameterValue);
	P_NATIVE_END;
}
// End Class UCameraRigParameterInterop Function SetDoubleParameter

// Begin Class UCameraRigParameterInterop Function SetFloatParameter
struct Z_Construct_UFunction_UCameraRigParameterInterop_SetFloatParameter_Statics
{
	struct CameraRigParameterInterop_eventSetFloatParameter_Parms
	{
		FBlueprintCameraVariableTable VariableTable;
		UCameraRigAsset* CameraRig;
		FString ParameterName;
		double ParameterValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Public/GameFramework/CameraRigParameterInterop.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParameterName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_VariableTable;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraRig;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ParameterName;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_ParameterValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCameraRigParameterInterop_SetFloatParameter_Statics::NewProp_VariableTable = { "VariableTable", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CameraRigParameterInterop_eventSetFloatParameter_Parms, VariableTable), Z_Construct_UScriptStruct_FBlueprintCameraVariableTable, METADATA_PARAMS(0, nullptr) }; // 2718450583
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCameraRigParameterInterop_SetFloatParameter_Statics::NewProp_CameraRig = { "CameraRig", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CameraRigParameterInterop_eventSetFloatParameter_Parms, CameraRig), Z_Construct_UClass_UCameraRigAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCameraRigParameterInterop_SetFloatParameter_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CameraRigParameterInterop_eventSetFloatParameter_Parms, ParameterName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParameterName_MetaData), NewProp_ParameterName_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UCameraRigParameterInterop_SetFloatParameter_Statics::NewProp_ParameterValue = { "ParameterValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CameraRigParameterInterop_eventSetFloatParameter_Parms, ParameterValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCameraRigParameterInterop_SetFloatParameter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraRigParameterInterop_SetFloatParameter_Statics::NewProp_VariableTable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraRigParameterInterop_SetFloatParameter_Statics::NewProp_CameraRig,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraRigParameterInterop_SetFloatParameter_Statics::NewProp_ParameterName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraRigParameterInterop_SetFloatParameter_Statics::NewProp_ParameterValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraRigParameterInterop_SetFloatParameter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCameraRigParameterInterop_SetFloatParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraRigParameterInterop, nullptr, "SetFloatParameter", nullptr, nullptr, Z_Construct_UFunction_UCameraRigParameterInterop_SetFloatParameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraRigParameterInterop_SetFloatParameter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCameraRigParameterInterop_SetFloatParameter_Statics::CameraRigParameterInterop_eventSetFloatParameter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraRigParameterInterop_SetFloatParameter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCameraRigParameterInterop_SetFloatParameter_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCameraRigParameterInterop_SetFloatParameter_Statics::CameraRigParameterInterop_eventSetFloatParameter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCameraRigParameterInterop_SetFloatParameter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCameraRigParameterInterop_SetFloatParameter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCameraRigParameterInterop::execSetFloatParameter)
{
	P_GET_STRUCT_REF(FBlueprintCameraVariableTable,Z_Param_Out_VariableTable);
	P_GET_OBJECT(UCameraRigAsset,Z_Param_CameraRig);
	P_GET_PROPERTY(FStrProperty,Z_Param_ParameterName);
	P_GET_PROPERTY(FDoubleProperty,Z_Param_ParameterValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	UCameraRigParameterInterop::SetFloatParameter(Z_Param_Out_VariableTable,Z_Param_CameraRig,Z_Param_ParameterName,Z_Param_ParameterValue);
	P_NATIVE_END;
}
// End Class UCameraRigParameterInterop Function SetFloatParameter

// Begin Class UCameraRigParameterInterop Function SetIntegerParameter
struct Z_Construct_UFunction_UCameraRigParameterInterop_SetIntegerParameter_Statics
{
	struct CameraRigParameterInterop_eventSetIntegerParameter_Parms
	{
		FBlueprintCameraVariableTable VariableTable;
		UCameraRigAsset* CameraRig;
		FString ParameterName;
		int32 ParameterValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Public/GameFramework/CameraRigParameterInterop.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParameterName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_VariableTable;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraRig;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ParameterName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ParameterValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCameraRigParameterInterop_SetIntegerParameter_Statics::NewProp_VariableTable = { "VariableTable", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CameraRigParameterInterop_eventSetIntegerParameter_Parms, VariableTable), Z_Construct_UScriptStruct_FBlueprintCameraVariableTable, METADATA_PARAMS(0, nullptr) }; // 2718450583
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCameraRigParameterInterop_SetIntegerParameter_Statics::NewProp_CameraRig = { "CameraRig", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CameraRigParameterInterop_eventSetIntegerParameter_Parms, CameraRig), Z_Construct_UClass_UCameraRigAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCameraRigParameterInterop_SetIntegerParameter_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CameraRigParameterInterop_eventSetIntegerParameter_Parms, ParameterName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParameterName_MetaData), NewProp_ParameterName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCameraRigParameterInterop_SetIntegerParameter_Statics::NewProp_ParameterValue = { "ParameterValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CameraRigParameterInterop_eventSetIntegerParameter_Parms, ParameterValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCameraRigParameterInterop_SetIntegerParameter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraRigParameterInterop_SetIntegerParameter_Statics::NewProp_VariableTable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraRigParameterInterop_SetIntegerParameter_Statics::NewProp_CameraRig,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraRigParameterInterop_SetIntegerParameter_Statics::NewProp_ParameterName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraRigParameterInterop_SetIntegerParameter_Statics::NewProp_ParameterValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraRigParameterInterop_SetIntegerParameter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCameraRigParameterInterop_SetIntegerParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraRigParameterInterop, nullptr, "SetIntegerParameter", nullptr, nullptr, Z_Construct_UFunction_UCameraRigParameterInterop_SetIntegerParameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraRigParameterInterop_SetIntegerParameter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCameraRigParameterInterop_SetIntegerParameter_Statics::CameraRigParameterInterop_eventSetIntegerParameter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraRigParameterInterop_SetIntegerParameter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCameraRigParameterInterop_SetIntegerParameter_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCameraRigParameterInterop_SetIntegerParameter_Statics::CameraRigParameterInterop_eventSetIntegerParameter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCameraRigParameterInterop_SetIntegerParameter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCameraRigParameterInterop_SetIntegerParameter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCameraRigParameterInterop::execSetIntegerParameter)
{
	P_GET_STRUCT_REF(FBlueprintCameraVariableTable,Z_Param_Out_VariableTable);
	P_GET_OBJECT(UCameraRigAsset,Z_Param_CameraRig);
	P_GET_PROPERTY(FStrProperty,Z_Param_ParameterName);
	P_GET_PROPERTY(FIntProperty,Z_Param_ParameterValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	UCameraRigParameterInterop::SetIntegerParameter(Z_Param_Out_VariableTable,Z_Param_CameraRig,Z_Param_ParameterName,Z_Param_ParameterValue);
	P_NATIVE_END;
}
// End Class UCameraRigParameterInterop Function SetIntegerParameter

// Begin Class UCameraRigParameterInterop Function SetRotatorParameter
struct Z_Construct_UFunction_UCameraRigParameterInterop_SetRotatorParameter_Statics
{
	struct CameraRigParameterInterop_eventSetRotatorParameter_Parms
	{
		FBlueprintCameraVariableTable VariableTable;
		UCameraRigAsset* CameraRig;
		FString ParameterName;
		FRotator ParameterValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Public/GameFramework/CameraRigParameterInterop.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParameterName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_VariableTable;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraRig;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ParameterName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ParameterValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCameraRigParameterInterop_SetRotatorParameter_Statics::NewProp_VariableTable = { "VariableTable", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CameraRigParameterInterop_eventSetRotatorParameter_Parms, VariableTable), Z_Construct_UScriptStruct_FBlueprintCameraVariableTable, METADATA_PARAMS(0, nullptr) }; // 2718450583
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCameraRigParameterInterop_SetRotatorParameter_Statics::NewProp_CameraRig = { "CameraRig", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CameraRigParameterInterop_eventSetRotatorParameter_Parms, CameraRig), Z_Construct_UClass_UCameraRigAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCameraRigParameterInterop_SetRotatorParameter_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CameraRigParameterInterop_eventSetRotatorParameter_Parms, ParameterName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParameterName_MetaData), NewProp_ParameterName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCameraRigParameterInterop_SetRotatorParameter_Statics::NewProp_ParameterValue = { "ParameterValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CameraRigParameterInterop_eventSetRotatorParameter_Parms, ParameterValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCameraRigParameterInterop_SetRotatorParameter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraRigParameterInterop_SetRotatorParameter_Statics::NewProp_VariableTable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraRigParameterInterop_SetRotatorParameter_Statics::NewProp_CameraRig,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraRigParameterInterop_SetRotatorParameter_Statics::NewProp_ParameterName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraRigParameterInterop_SetRotatorParameter_Statics::NewProp_ParameterValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraRigParameterInterop_SetRotatorParameter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCameraRigParameterInterop_SetRotatorParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraRigParameterInterop, nullptr, "SetRotatorParameter", nullptr, nullptr, Z_Construct_UFunction_UCameraRigParameterInterop_SetRotatorParameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraRigParameterInterop_SetRotatorParameter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCameraRigParameterInterop_SetRotatorParameter_Statics::CameraRigParameterInterop_eventSetRotatorParameter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraRigParameterInterop_SetRotatorParameter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCameraRigParameterInterop_SetRotatorParameter_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCameraRigParameterInterop_SetRotatorParameter_Statics::CameraRigParameterInterop_eventSetRotatorParameter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCameraRigParameterInterop_SetRotatorParameter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCameraRigParameterInterop_SetRotatorParameter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCameraRigParameterInterop::execSetRotatorParameter)
{
	P_GET_STRUCT_REF(FBlueprintCameraVariableTable,Z_Param_Out_VariableTable);
	P_GET_OBJECT(UCameraRigAsset,Z_Param_CameraRig);
	P_GET_PROPERTY(FStrProperty,Z_Param_ParameterName);
	P_GET_STRUCT(FRotator,Z_Param_ParameterValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	UCameraRigParameterInterop::SetRotatorParameter(Z_Param_Out_VariableTable,Z_Param_CameraRig,Z_Param_ParameterName,Z_Param_ParameterValue);
	P_NATIVE_END;
}
// End Class UCameraRigParameterInterop Function SetRotatorParameter

// Begin Class UCameraRigParameterInterop Function SetTransformParameter
struct Z_Construct_UFunction_UCameraRigParameterInterop_SetTransformParameter_Statics
{
	struct CameraRigParameterInterop_eventSetTransformParameter_Parms
	{
		FBlueprintCameraVariableTable VariableTable;
		UCameraRigAsset* CameraRig;
		FString ParameterName;
		FTransform ParameterValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Public/GameFramework/CameraRigParameterInterop.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParameterName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_VariableTable;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraRig;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ParameterName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ParameterValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCameraRigParameterInterop_SetTransformParameter_Statics::NewProp_VariableTable = { "VariableTable", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CameraRigParameterInterop_eventSetTransformParameter_Parms, VariableTable), Z_Construct_UScriptStruct_FBlueprintCameraVariableTable, METADATA_PARAMS(0, nullptr) }; // 2718450583
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCameraRigParameterInterop_SetTransformParameter_Statics::NewProp_CameraRig = { "CameraRig", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CameraRigParameterInterop_eventSetTransformParameter_Parms, CameraRig), Z_Construct_UClass_UCameraRigAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCameraRigParameterInterop_SetTransformParameter_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CameraRigParameterInterop_eventSetTransformParameter_Parms, ParameterName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParameterName_MetaData), NewProp_ParameterName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCameraRigParameterInterop_SetTransformParameter_Statics::NewProp_ParameterValue = { "ParameterValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CameraRigParameterInterop_eventSetTransformParameter_Parms, ParameterValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCameraRigParameterInterop_SetTransformParameter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraRigParameterInterop_SetTransformParameter_Statics::NewProp_VariableTable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraRigParameterInterop_SetTransformParameter_Statics::NewProp_CameraRig,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraRigParameterInterop_SetTransformParameter_Statics::NewProp_ParameterName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraRigParameterInterop_SetTransformParameter_Statics::NewProp_ParameterValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraRigParameterInterop_SetTransformParameter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCameraRigParameterInterop_SetTransformParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraRigParameterInterop, nullptr, "SetTransformParameter", nullptr, nullptr, Z_Construct_UFunction_UCameraRigParameterInterop_SetTransformParameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraRigParameterInterop_SetTransformParameter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCameraRigParameterInterop_SetTransformParameter_Statics::CameraRigParameterInterop_eventSetTransformParameter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraRigParameterInterop_SetTransformParameter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCameraRigParameterInterop_SetTransformParameter_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCameraRigParameterInterop_SetTransformParameter_Statics::CameraRigParameterInterop_eventSetTransformParameter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCameraRigParameterInterop_SetTransformParameter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCameraRigParameterInterop_SetTransformParameter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCameraRigParameterInterop::execSetTransformParameter)
{
	P_GET_STRUCT_REF(FBlueprintCameraVariableTable,Z_Param_Out_VariableTable);
	P_GET_OBJECT(UCameraRigAsset,Z_Param_CameraRig);
	P_GET_PROPERTY(FStrProperty,Z_Param_ParameterName);
	P_GET_STRUCT(FTransform,Z_Param_ParameterValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	UCameraRigParameterInterop::SetTransformParameter(Z_Param_Out_VariableTable,Z_Param_CameraRig,Z_Param_ParameterName,Z_Param_ParameterValue);
	P_NATIVE_END;
}
// End Class UCameraRigParameterInterop Function SetTransformParameter

// Begin Class UCameraRigParameterInterop Function SetVector2Parameter
struct Z_Construct_UFunction_UCameraRigParameterInterop_SetVector2Parameter_Statics
{
	struct CameraRigParameterInterop_eventSetVector2Parameter_Parms
	{
		FBlueprintCameraVariableTable VariableTable;
		UCameraRigAsset* CameraRig;
		FString ParameterName;
		FVector2D ParameterValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Public/GameFramework/CameraRigParameterInterop.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParameterName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_VariableTable;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraRig;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ParameterName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ParameterValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCameraRigParameterInterop_SetVector2Parameter_Statics::NewProp_VariableTable = { "VariableTable", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CameraRigParameterInterop_eventSetVector2Parameter_Parms, VariableTable), Z_Construct_UScriptStruct_FBlueprintCameraVariableTable, METADATA_PARAMS(0, nullptr) }; // 2718450583
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCameraRigParameterInterop_SetVector2Parameter_Statics::NewProp_CameraRig = { "CameraRig", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CameraRigParameterInterop_eventSetVector2Parameter_Parms, CameraRig), Z_Construct_UClass_UCameraRigAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCameraRigParameterInterop_SetVector2Parameter_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CameraRigParameterInterop_eventSetVector2Parameter_Parms, ParameterName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParameterName_MetaData), NewProp_ParameterName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCameraRigParameterInterop_SetVector2Parameter_Statics::NewProp_ParameterValue = { "ParameterValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CameraRigParameterInterop_eventSetVector2Parameter_Parms, ParameterValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCameraRigParameterInterop_SetVector2Parameter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraRigParameterInterop_SetVector2Parameter_Statics::NewProp_VariableTable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraRigParameterInterop_SetVector2Parameter_Statics::NewProp_CameraRig,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraRigParameterInterop_SetVector2Parameter_Statics::NewProp_ParameterName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraRigParameterInterop_SetVector2Parameter_Statics::NewProp_ParameterValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraRigParameterInterop_SetVector2Parameter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCameraRigParameterInterop_SetVector2Parameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraRigParameterInterop, nullptr, "SetVector2Parameter", nullptr, nullptr, Z_Construct_UFunction_UCameraRigParameterInterop_SetVector2Parameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraRigParameterInterop_SetVector2Parameter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCameraRigParameterInterop_SetVector2Parameter_Statics::CameraRigParameterInterop_eventSetVector2Parameter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraRigParameterInterop_SetVector2Parameter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCameraRigParameterInterop_SetVector2Parameter_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCameraRigParameterInterop_SetVector2Parameter_Statics::CameraRigParameterInterop_eventSetVector2Parameter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCameraRigParameterInterop_SetVector2Parameter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCameraRigParameterInterop_SetVector2Parameter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCameraRigParameterInterop::execSetVector2Parameter)
{
	P_GET_STRUCT_REF(FBlueprintCameraVariableTable,Z_Param_Out_VariableTable);
	P_GET_OBJECT(UCameraRigAsset,Z_Param_CameraRig);
	P_GET_PROPERTY(FStrProperty,Z_Param_ParameterName);
	P_GET_STRUCT(FVector2D,Z_Param_ParameterValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	UCameraRigParameterInterop::SetVector2Parameter(Z_Param_Out_VariableTable,Z_Param_CameraRig,Z_Param_ParameterName,Z_Param_ParameterValue);
	P_NATIVE_END;
}
// End Class UCameraRigParameterInterop Function SetVector2Parameter

// Begin Class UCameraRigParameterInterop Function SetVector3Parameter
struct Z_Construct_UFunction_UCameraRigParameterInterop_SetVector3Parameter_Statics
{
	struct CameraRigParameterInterop_eventSetVector3Parameter_Parms
	{
		FBlueprintCameraVariableTable VariableTable;
		UCameraRigAsset* CameraRig;
		FString ParameterName;
		FVector ParameterValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Public/GameFramework/CameraRigParameterInterop.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParameterName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_VariableTable;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraRig;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ParameterName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ParameterValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCameraRigParameterInterop_SetVector3Parameter_Statics::NewProp_VariableTable = { "VariableTable", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CameraRigParameterInterop_eventSetVector3Parameter_Parms, VariableTable), Z_Construct_UScriptStruct_FBlueprintCameraVariableTable, METADATA_PARAMS(0, nullptr) }; // 2718450583
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCameraRigParameterInterop_SetVector3Parameter_Statics::NewProp_CameraRig = { "CameraRig", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CameraRigParameterInterop_eventSetVector3Parameter_Parms, CameraRig), Z_Construct_UClass_UCameraRigAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCameraRigParameterInterop_SetVector3Parameter_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CameraRigParameterInterop_eventSetVector3Parameter_Parms, ParameterName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParameterName_MetaData), NewProp_ParameterName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCameraRigParameterInterop_SetVector3Parameter_Statics::NewProp_ParameterValue = { "ParameterValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CameraRigParameterInterop_eventSetVector3Parameter_Parms, ParameterValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCameraRigParameterInterop_SetVector3Parameter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraRigParameterInterop_SetVector3Parameter_Statics::NewProp_VariableTable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraRigParameterInterop_SetVector3Parameter_Statics::NewProp_CameraRig,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraRigParameterInterop_SetVector3Parameter_Statics::NewProp_ParameterName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraRigParameterInterop_SetVector3Parameter_Statics::NewProp_ParameterValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraRigParameterInterop_SetVector3Parameter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCameraRigParameterInterop_SetVector3Parameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraRigParameterInterop, nullptr, "SetVector3Parameter", nullptr, nullptr, Z_Construct_UFunction_UCameraRigParameterInterop_SetVector3Parameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraRigParameterInterop_SetVector3Parameter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCameraRigParameterInterop_SetVector3Parameter_Statics::CameraRigParameterInterop_eventSetVector3Parameter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraRigParameterInterop_SetVector3Parameter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCameraRigParameterInterop_SetVector3Parameter_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCameraRigParameterInterop_SetVector3Parameter_Statics::CameraRigParameterInterop_eventSetVector3Parameter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCameraRigParameterInterop_SetVector3Parameter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCameraRigParameterInterop_SetVector3Parameter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCameraRigParameterInterop::execSetVector3Parameter)
{
	P_GET_STRUCT_REF(FBlueprintCameraVariableTable,Z_Param_Out_VariableTable);
	P_GET_OBJECT(UCameraRigAsset,Z_Param_CameraRig);
	P_GET_PROPERTY(FStrProperty,Z_Param_ParameterName);
	P_GET_STRUCT(FVector,Z_Param_ParameterValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	UCameraRigParameterInterop::SetVector3Parameter(Z_Param_Out_VariableTable,Z_Param_CameraRig,Z_Param_ParameterName,Z_Param_ParameterValue);
	P_NATIVE_END;
}
// End Class UCameraRigParameterInterop Function SetVector3Parameter

// Begin Class UCameraRigParameterInterop Function SetVector4Parameter
struct Z_Construct_UFunction_UCameraRigParameterInterop_SetVector4Parameter_Statics
{
	struct CameraRigParameterInterop_eventSetVector4Parameter_Parms
	{
		FBlueprintCameraVariableTable VariableTable;
		UCameraRigAsset* CameraRig;
		FString ParameterName;
		FVector4 ParameterValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Public/GameFramework/CameraRigParameterInterop.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParameterName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_VariableTable;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraRig;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ParameterName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ParameterValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCameraRigParameterInterop_SetVector4Parameter_Statics::NewProp_VariableTable = { "VariableTable", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CameraRigParameterInterop_eventSetVector4Parameter_Parms, VariableTable), Z_Construct_UScriptStruct_FBlueprintCameraVariableTable, METADATA_PARAMS(0, nullptr) }; // 2718450583
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCameraRigParameterInterop_SetVector4Parameter_Statics::NewProp_CameraRig = { "CameraRig", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CameraRigParameterInterop_eventSetVector4Parameter_Parms, CameraRig), Z_Construct_UClass_UCameraRigAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCameraRigParameterInterop_SetVector4Parameter_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CameraRigParameterInterop_eventSetVector4Parameter_Parms, ParameterName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParameterName_MetaData), NewProp_ParameterName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCameraRigParameterInterop_SetVector4Parameter_Statics::NewProp_ParameterValue = { "ParameterValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CameraRigParameterInterop_eventSetVector4Parameter_Parms, ParameterValue), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCameraRigParameterInterop_SetVector4Parameter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraRigParameterInterop_SetVector4Parameter_Statics::NewProp_VariableTable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraRigParameterInterop_SetVector4Parameter_Statics::NewProp_CameraRig,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraRigParameterInterop_SetVector4Parameter_Statics::NewProp_ParameterName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraRigParameterInterop_SetVector4Parameter_Statics::NewProp_ParameterValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraRigParameterInterop_SetVector4Parameter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCameraRigParameterInterop_SetVector4Parameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraRigParameterInterop, nullptr, "SetVector4Parameter", nullptr, nullptr, Z_Construct_UFunction_UCameraRigParameterInterop_SetVector4Parameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraRigParameterInterop_SetVector4Parameter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCameraRigParameterInterop_SetVector4Parameter_Statics::CameraRigParameterInterop_eventSetVector4Parameter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraRigParameterInterop_SetVector4Parameter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCameraRigParameterInterop_SetVector4Parameter_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCameraRigParameterInterop_SetVector4Parameter_Statics::CameraRigParameterInterop_eventSetVector4Parameter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCameraRigParameterInterop_SetVector4Parameter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCameraRigParameterInterop_SetVector4Parameter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCameraRigParameterInterop::execSetVector4Parameter)
{
	P_GET_STRUCT_REF(FBlueprintCameraVariableTable,Z_Param_Out_VariableTable);
	P_GET_OBJECT(UCameraRigAsset,Z_Param_CameraRig);
	P_GET_PROPERTY(FStrProperty,Z_Param_ParameterName);
	P_GET_STRUCT(FVector4,Z_Param_ParameterValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	UCameraRigParameterInterop::SetVector4Parameter(Z_Param_Out_VariableTable,Z_Param_CameraRig,Z_Param_ParameterName,Z_Param_ParameterValue);
	P_NATIVE_END;
}
// End Class UCameraRigParameterInterop Function SetVector4Parameter

// Begin Class UCameraRigParameterInterop
void UCameraRigParameterInterop::StaticRegisterNativesUCameraRigParameterInterop()
{
	UClass* Class = UCameraRigParameterInterop::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetBooleanParameter", &UCameraRigParameterInterop::execSetBooleanParameter },
		{ "SetDoubleParameter", &UCameraRigParameterInterop::execSetDoubleParameter },
		{ "SetFloatParameter", &UCameraRigParameterInterop::execSetFloatParameter },
		{ "SetIntegerParameter", &UCameraRigParameterInterop::execSetIntegerParameter },
		{ "SetRotatorParameter", &UCameraRigParameterInterop::execSetRotatorParameter },
		{ "SetTransformParameter", &UCameraRigParameterInterop::execSetTransformParameter },
		{ "SetVector2Parameter", &UCameraRigParameterInterop::execSetVector2Parameter },
		{ "SetVector3Parameter", &UCameraRigParameterInterop::execSetVector3Parameter },
		{ "SetVector4Parameter", &UCameraRigParameterInterop::execSetVector4Parameter },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCameraRigParameterInterop);
UClass* Z_Construct_UClass_UCameraRigParameterInterop_NoRegister()
{
	return UCameraRigParameterInterop::StaticClass();
}
struct Z_Construct_UClass_UCameraRigParameterInterop_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Blueprint internal methods to set values on a camera rig's exposed parameters.\n *\n * These functions are internal because users are supposed to use the K2Node_SetCameraRigParameters node instead. That node then\n * gets compiled into one or more of these internal functions.\n */" },
		{ "IncludePath", "GameFramework/CameraRigParameterInterop.h" },
		{ "ModuleRelativePath", "Public/GameFramework/CameraRigParameterInterop.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Blueprint internal methods to set values on a camera rig's exposed parameters.\n\nThese functions are internal because users are supposed to use the K2Node_SetCameraRigParameters node instead. That node then\ngets compiled into one or more of these internal functions." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCameraRigParameterInterop_SetBooleanParameter, "SetBooleanParameter" }, // 4158177788
		{ &Z_Construct_UFunction_UCameraRigParameterInterop_SetDoubleParameter, "SetDoubleParameter" }, // 1432409989
		{ &Z_Construct_UFunction_UCameraRigParameterInterop_SetFloatParameter, "SetFloatParameter" }, // 2880946582
		{ &Z_Construct_UFunction_UCameraRigParameterInterop_SetIntegerParameter, "SetIntegerParameter" }, // 940261304
		{ &Z_Construct_UFunction_UCameraRigParameterInterop_SetRotatorParameter, "SetRotatorParameter" }, // 3311413355
		{ &Z_Construct_UFunction_UCameraRigParameterInterop_SetTransformParameter, "SetTransformParameter" }, // 3749388784
		{ &Z_Construct_UFunction_UCameraRigParameterInterop_SetVector2Parameter, "SetVector2Parameter" }, // 1437654186
		{ &Z_Construct_UFunction_UCameraRigParameterInterop_SetVector3Parameter, "SetVector3Parameter" }, // 1225103350
		{ &Z_Construct_UFunction_UCameraRigParameterInterop_SetVector4Parameter, "SetVector4Parameter" }, // 884200390
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCameraRigParameterInterop>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCameraRigParameterInterop_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayCameras,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCameraRigParameterInterop_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCameraRigParameterInterop_Statics::ClassParams = {
	&UCameraRigParameterInterop::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCameraRigParameterInterop_Statics::Class_MetaDataParams), Z_Construct_UClass_UCameraRigParameterInterop_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCameraRigParameterInterop()
{
	if (!Z_Registration_Info_UClass_UCameraRigParameterInterop.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCameraRigParameterInterop.OuterSingleton, Z_Construct_UClass_UCameraRigParameterInterop_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCameraRigParameterInterop.OuterSingleton;
}
template<> GAMEPLAYCAMERAS_API UClass* StaticClass<UCameraRigParameterInterop>()
{
	return UCameraRigParameterInterop::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCameraRigParameterInterop);
UCameraRigParameterInterop::~UCameraRigParameterInterop() {}
// End Class UCameraRigParameterInterop

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_CameraRigParameterInterop_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCameraRigParameterInterop, UCameraRigParameterInterop::StaticClass, TEXT("UCameraRigParameterInterop"), &Z_Registration_Info_UClass_UCameraRigParameterInterop, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCameraRigParameterInterop), 1529874914U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_CameraRigParameterInterop_h_392661478(TEXT("/Script/GameplayCameras"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_CameraRigParameterInterop_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_CameraRigParameterInterop_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
