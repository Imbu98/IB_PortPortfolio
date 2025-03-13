// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ChaosVDBlueprint/Public/ChaosVDRuntimeBlueprintLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChaosVDRuntimeBlueprintLibrary() {}

// Begin Cross Module References
CHAOSVDBLUEPRINT_API UClass* Z_Construct_UClass_UChaosVDRuntimeBlueprintLibrary();
CHAOSVDBLUEPRINT_API UClass* Z_Construct_UClass_UChaosVDRuntimeBlueprintLibrary_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
UPackage* Z_Construct_UPackage__Script_ChaosVDBlueprint();
// End Cross Module References

// Begin Class UChaosVDRuntimeBlueprintLibrary Function RecordDebugDrawBox
struct Z_Construct_UFunction_UChaosVDRuntimeBlueprintLibrary_RecordDebugDrawBox_Statics
{
	struct ChaosVDRuntimeBlueprintLibrary_eventRecordDebugDrawBox_Parms
	{
		const UObject* WorldContext;
		FBox InBox;
		FName Tag;
		FLinearColor Color;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Chaos Visual Debugger" },
		{ "CPP_Default_Color", "(R=0.000000,G=0.000000,B=1.000000,A=1.000000)" },
		{ "CPP_Default_Tag", "None" },
		{ "DisplayName", "CVD Record Debug Draw Box" },
		{ "ModuleRelativePath", "Public/ChaosVDRuntimeBlueprintLibrary.h" },
		{ "WorldContext", "WorldContext" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContext_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InBox_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContext;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InBox;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Tag;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UChaosVDRuntimeBlueprintLibrary_RecordDebugDrawBox_Statics::NewProp_WorldContext = { "WorldContext", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChaosVDRuntimeBlueprintLibrary_eventRecordDebugDrawBox_Parms, WorldContext), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContext_MetaData), NewProp_WorldContext_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UChaosVDRuntimeBlueprintLibrary_RecordDebugDrawBox_Statics::NewProp_InBox = { "InBox", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChaosVDRuntimeBlueprintLibrary_eventRecordDebugDrawBox_Parms, InBox), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InBox_MetaData), NewProp_InBox_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UChaosVDRuntimeBlueprintLibrary_RecordDebugDrawBox_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChaosVDRuntimeBlueprintLibrary_eventRecordDebugDrawBox_Parms, Tag), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UChaosVDRuntimeBlueprintLibrary_RecordDebugDrawBox_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChaosVDRuntimeBlueprintLibrary_eventRecordDebugDrawBox_Parms, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChaosVDRuntimeBlueprintLibrary_RecordDebugDrawBox_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosVDRuntimeBlueprintLibrary_RecordDebugDrawBox_Statics::NewProp_WorldContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosVDRuntimeBlueprintLibrary_RecordDebugDrawBox_Statics::NewProp_InBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosVDRuntimeBlueprintLibrary_RecordDebugDrawBox_Statics::NewProp_Tag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosVDRuntimeBlueprintLibrary_RecordDebugDrawBox_Statics::NewProp_Color,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosVDRuntimeBlueprintLibrary_RecordDebugDrawBox_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UChaosVDRuntimeBlueprintLibrary_RecordDebugDrawBox_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChaosVDRuntimeBlueprintLibrary, nullptr, "RecordDebugDrawBox", nullptr, nullptr, Z_Construct_UFunction_UChaosVDRuntimeBlueprintLibrary_RecordDebugDrawBox_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosVDRuntimeBlueprintLibrary_RecordDebugDrawBox_Statics::PropPointers), sizeof(Z_Construct_UFunction_UChaosVDRuntimeBlueprintLibrary_RecordDebugDrawBox_Statics::ChaosVDRuntimeBlueprintLibrary_eventRecordDebugDrawBox_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C42401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosVDRuntimeBlueprintLibrary_RecordDebugDrawBox_Statics::Function_MetaDataParams), Z_Construct_UFunction_UChaosVDRuntimeBlueprintLibrary_RecordDebugDrawBox_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UChaosVDRuntimeBlueprintLibrary_RecordDebugDrawBox_Statics::ChaosVDRuntimeBlueprintLibrary_eventRecordDebugDrawBox_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UChaosVDRuntimeBlueprintLibrary_RecordDebugDrawBox()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UChaosVDRuntimeBlueprintLibrary_RecordDebugDrawBox_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UChaosVDRuntimeBlueprintLibrary::execRecordDebugDrawBox)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContext);
	P_GET_STRUCT_REF(FBox,Z_Param_Out_InBox);
	P_GET_PROPERTY(FNameProperty,Z_Param_Tag);
	P_GET_STRUCT(FLinearColor,Z_Param_Color);
	P_FINISH;
	P_NATIVE_BEGIN;
	UChaosVDRuntimeBlueprintLibrary::RecordDebugDrawBox(Z_Param_WorldContext,Z_Param_Out_InBox,Z_Param_Tag,Z_Param_Color);
	P_NATIVE_END;
}
// End Class UChaosVDRuntimeBlueprintLibrary Function RecordDebugDrawBox

// Begin Class UChaosVDRuntimeBlueprintLibrary Function RecordDebugDrawLine
struct Z_Construct_UFunction_UChaosVDRuntimeBlueprintLibrary_RecordDebugDrawLine_Statics
{
	struct ChaosVDRuntimeBlueprintLibrary_eventRecordDebugDrawLine_Parms
	{
		const UObject* WorldContext;
		FVector InStartLocation;
		FVector InEndLocation;
		FName Tag;
		FLinearColor Color;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Chaos Visual Debugger" },
		{ "CPP_Default_Color", "(R=0.000000,G=0.000000,B=1.000000,A=1.000000)" },
		{ "CPP_Default_Tag", "None" },
		{ "DisplayName", "CVD Record Debug Draw Line" },
		{ "ModuleRelativePath", "Public/ChaosVDRuntimeBlueprintLibrary.h" },
		{ "WorldContext", "WorldContext" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContext_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InStartLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InEndLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContext;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InStartLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InEndLocation;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Tag;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UChaosVDRuntimeBlueprintLibrary_RecordDebugDrawLine_Statics::NewProp_WorldContext = { "WorldContext", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChaosVDRuntimeBlueprintLibrary_eventRecordDebugDrawLine_Parms, WorldContext), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContext_MetaData), NewProp_WorldContext_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UChaosVDRuntimeBlueprintLibrary_RecordDebugDrawLine_Statics::NewProp_InStartLocation = { "InStartLocation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChaosVDRuntimeBlueprintLibrary_eventRecordDebugDrawLine_Parms, InStartLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InStartLocation_MetaData), NewProp_InStartLocation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UChaosVDRuntimeBlueprintLibrary_RecordDebugDrawLine_Statics::NewProp_InEndLocation = { "InEndLocation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChaosVDRuntimeBlueprintLibrary_eventRecordDebugDrawLine_Parms, InEndLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InEndLocation_MetaData), NewProp_InEndLocation_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UChaosVDRuntimeBlueprintLibrary_RecordDebugDrawLine_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChaosVDRuntimeBlueprintLibrary_eventRecordDebugDrawLine_Parms, Tag), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UChaosVDRuntimeBlueprintLibrary_RecordDebugDrawLine_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChaosVDRuntimeBlueprintLibrary_eventRecordDebugDrawLine_Parms, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChaosVDRuntimeBlueprintLibrary_RecordDebugDrawLine_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosVDRuntimeBlueprintLibrary_RecordDebugDrawLine_Statics::NewProp_WorldContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosVDRuntimeBlueprintLibrary_RecordDebugDrawLine_Statics::NewProp_InStartLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosVDRuntimeBlueprintLibrary_RecordDebugDrawLine_Statics::NewProp_InEndLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosVDRuntimeBlueprintLibrary_RecordDebugDrawLine_Statics::NewProp_Tag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosVDRuntimeBlueprintLibrary_RecordDebugDrawLine_Statics::NewProp_Color,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosVDRuntimeBlueprintLibrary_RecordDebugDrawLine_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UChaosVDRuntimeBlueprintLibrary_RecordDebugDrawLine_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChaosVDRuntimeBlueprintLibrary, nullptr, "RecordDebugDrawLine", nullptr, nullptr, Z_Construct_UFunction_UChaosVDRuntimeBlueprintLibrary_RecordDebugDrawLine_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosVDRuntimeBlueprintLibrary_RecordDebugDrawLine_Statics::PropPointers), sizeof(Z_Construct_UFunction_UChaosVDRuntimeBlueprintLibrary_RecordDebugDrawLine_Statics::ChaosVDRuntimeBlueprintLibrary_eventRecordDebugDrawLine_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C42401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosVDRuntimeBlueprintLibrary_RecordDebugDrawLine_Statics::Function_MetaDataParams), Z_Construct_UFunction_UChaosVDRuntimeBlueprintLibrary_RecordDebugDrawLine_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UChaosVDRuntimeBlueprintLibrary_RecordDebugDrawLine_Statics::ChaosVDRuntimeBlueprintLibrary_eventRecordDebugDrawLine_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UChaosVDRuntimeBlueprintLibrary_RecordDebugDrawLine()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UChaosVDRuntimeBlueprintLibrary_RecordDebugDrawLine_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UChaosVDRuntimeBlueprintLibrary::execRecordDebugDrawLine)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContext);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_InStartLocation);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_InEndLocation);
	P_GET_PROPERTY(FNameProperty,Z_Param_Tag);
	P_GET_STRUCT(FLinearColor,Z_Param_Color);
	P_FINISH;
	P_NATIVE_BEGIN;
	UChaosVDRuntimeBlueprintLibrary::RecordDebugDrawLine(Z_Param_WorldContext,Z_Param_Out_InStartLocation,Z_Param_Out_InEndLocation,Z_Param_Tag,Z_Param_Color);
	P_NATIVE_END;
}
// End Class UChaosVDRuntimeBlueprintLibrary Function RecordDebugDrawLine

// Begin Class UChaosVDRuntimeBlueprintLibrary Function RecordDebugDrawSphere
struct Z_Construct_UFunction_UChaosVDRuntimeBlueprintLibrary_RecordDebugDrawSphere_Statics
{
	struct ChaosVDRuntimeBlueprintLibrary_eventRecordDebugDrawSphere_Parms
	{
		const UObject* WorldContext;
		FVector InCenter;
		float Radius;
		FName Tag;
		FLinearColor Color;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Chaos Visual Debugger" },
		{ "CPP_Default_Color", "(R=0.000000,G=0.000000,B=1.000000,A=1.000000)" },
		{ "CPP_Default_Tag", "None" },
		{ "DisplayName", "CVD Record Debug Draw Sphere" },
		{ "ModuleRelativePath", "Public/ChaosVDRuntimeBlueprintLibrary.h" },
		{ "WorldContext", "WorldContext" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContext_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InCenter_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContext;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InCenter;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Tag;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UChaosVDRuntimeBlueprintLibrary_RecordDebugDrawSphere_Statics::NewProp_WorldContext = { "WorldContext", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChaosVDRuntimeBlueprintLibrary_eventRecordDebugDrawSphere_Parms, WorldContext), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContext_MetaData), NewProp_WorldContext_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UChaosVDRuntimeBlueprintLibrary_RecordDebugDrawSphere_Statics::NewProp_InCenter = { "InCenter", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChaosVDRuntimeBlueprintLibrary_eventRecordDebugDrawSphere_Parms, InCenter), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InCenter_MetaData), NewProp_InCenter_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UChaosVDRuntimeBlueprintLibrary_RecordDebugDrawSphere_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChaosVDRuntimeBlueprintLibrary_eventRecordDebugDrawSphere_Parms, Radius), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UChaosVDRuntimeBlueprintLibrary_RecordDebugDrawSphere_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChaosVDRuntimeBlueprintLibrary_eventRecordDebugDrawSphere_Parms, Tag), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UChaosVDRuntimeBlueprintLibrary_RecordDebugDrawSphere_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChaosVDRuntimeBlueprintLibrary_eventRecordDebugDrawSphere_Parms, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChaosVDRuntimeBlueprintLibrary_RecordDebugDrawSphere_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosVDRuntimeBlueprintLibrary_RecordDebugDrawSphere_Statics::NewProp_WorldContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosVDRuntimeBlueprintLibrary_RecordDebugDrawSphere_Statics::NewProp_InCenter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosVDRuntimeBlueprintLibrary_RecordDebugDrawSphere_Statics::NewProp_Radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosVDRuntimeBlueprintLibrary_RecordDebugDrawSphere_Statics::NewProp_Tag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosVDRuntimeBlueprintLibrary_RecordDebugDrawSphere_Statics::NewProp_Color,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosVDRuntimeBlueprintLibrary_RecordDebugDrawSphere_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UChaosVDRuntimeBlueprintLibrary_RecordDebugDrawSphere_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChaosVDRuntimeBlueprintLibrary, nullptr, "RecordDebugDrawSphere", nullptr, nullptr, Z_Construct_UFunction_UChaosVDRuntimeBlueprintLibrary_RecordDebugDrawSphere_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosVDRuntimeBlueprintLibrary_RecordDebugDrawSphere_Statics::PropPointers), sizeof(Z_Construct_UFunction_UChaosVDRuntimeBlueprintLibrary_RecordDebugDrawSphere_Statics::ChaosVDRuntimeBlueprintLibrary_eventRecordDebugDrawSphere_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C42401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosVDRuntimeBlueprintLibrary_RecordDebugDrawSphere_Statics::Function_MetaDataParams), Z_Construct_UFunction_UChaosVDRuntimeBlueprintLibrary_RecordDebugDrawSphere_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UChaosVDRuntimeBlueprintLibrary_RecordDebugDrawSphere_Statics::ChaosVDRuntimeBlueprintLibrary_eventRecordDebugDrawSphere_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UChaosVDRuntimeBlueprintLibrary_RecordDebugDrawSphere()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UChaosVDRuntimeBlueprintLibrary_RecordDebugDrawSphere_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UChaosVDRuntimeBlueprintLibrary::execRecordDebugDrawSphere)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContext);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_InCenter);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
	P_GET_PROPERTY(FNameProperty,Z_Param_Tag);
	P_GET_STRUCT(FLinearColor,Z_Param_Color);
	P_FINISH;
	P_NATIVE_BEGIN;
	UChaosVDRuntimeBlueprintLibrary::RecordDebugDrawSphere(Z_Param_WorldContext,Z_Param_Out_InCenter,Z_Param_Radius,Z_Param_Tag,Z_Param_Color);
	P_NATIVE_END;
}
// End Class UChaosVDRuntimeBlueprintLibrary Function RecordDebugDrawSphere

// Begin Class UChaosVDRuntimeBlueprintLibrary Function RecordDebugDrawVector
struct Z_Construct_UFunction_UChaosVDRuntimeBlueprintLibrary_RecordDebugDrawVector_Statics
{
	struct ChaosVDRuntimeBlueprintLibrary_eventRecordDebugDrawVector_Parms
	{
		const UObject* WorldContext;
		FVector InStartLocation;
		FVector InVector;
		FName Tag;
		FLinearColor Color;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Chaos Visual Debugger" },
		{ "CPP_Default_Color", "(R=0.000000,G=0.000000,B=1.000000,A=1.000000)" },
		{ "CPP_Default_Tag", "None" },
		{ "DisplayName", "CVD Record Debug Draw Vector" },
		{ "ModuleRelativePath", "Public/ChaosVDRuntimeBlueprintLibrary.h" },
		{ "WorldContext", "WorldContext" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContext_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InStartLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InVector_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContext;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InStartLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InVector;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Tag;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UChaosVDRuntimeBlueprintLibrary_RecordDebugDrawVector_Statics::NewProp_WorldContext = { "WorldContext", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChaosVDRuntimeBlueprintLibrary_eventRecordDebugDrawVector_Parms, WorldContext), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContext_MetaData), NewProp_WorldContext_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UChaosVDRuntimeBlueprintLibrary_RecordDebugDrawVector_Statics::NewProp_InStartLocation = { "InStartLocation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChaosVDRuntimeBlueprintLibrary_eventRecordDebugDrawVector_Parms, InStartLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InStartLocation_MetaData), NewProp_InStartLocation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UChaosVDRuntimeBlueprintLibrary_RecordDebugDrawVector_Statics::NewProp_InVector = { "InVector", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChaosVDRuntimeBlueprintLibrary_eventRecordDebugDrawVector_Parms, InVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InVector_MetaData), NewProp_InVector_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UChaosVDRuntimeBlueprintLibrary_RecordDebugDrawVector_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChaosVDRuntimeBlueprintLibrary_eventRecordDebugDrawVector_Parms, Tag), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UChaosVDRuntimeBlueprintLibrary_RecordDebugDrawVector_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChaosVDRuntimeBlueprintLibrary_eventRecordDebugDrawVector_Parms, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChaosVDRuntimeBlueprintLibrary_RecordDebugDrawVector_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosVDRuntimeBlueprintLibrary_RecordDebugDrawVector_Statics::NewProp_WorldContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosVDRuntimeBlueprintLibrary_RecordDebugDrawVector_Statics::NewProp_InStartLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosVDRuntimeBlueprintLibrary_RecordDebugDrawVector_Statics::NewProp_InVector,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosVDRuntimeBlueprintLibrary_RecordDebugDrawVector_Statics::NewProp_Tag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosVDRuntimeBlueprintLibrary_RecordDebugDrawVector_Statics::NewProp_Color,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosVDRuntimeBlueprintLibrary_RecordDebugDrawVector_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UChaosVDRuntimeBlueprintLibrary_RecordDebugDrawVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChaosVDRuntimeBlueprintLibrary, nullptr, "RecordDebugDrawVector", nullptr, nullptr, Z_Construct_UFunction_UChaosVDRuntimeBlueprintLibrary_RecordDebugDrawVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosVDRuntimeBlueprintLibrary_RecordDebugDrawVector_Statics::PropPointers), sizeof(Z_Construct_UFunction_UChaosVDRuntimeBlueprintLibrary_RecordDebugDrawVector_Statics::ChaosVDRuntimeBlueprintLibrary_eventRecordDebugDrawVector_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C42401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosVDRuntimeBlueprintLibrary_RecordDebugDrawVector_Statics::Function_MetaDataParams), Z_Construct_UFunction_UChaosVDRuntimeBlueprintLibrary_RecordDebugDrawVector_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UChaosVDRuntimeBlueprintLibrary_RecordDebugDrawVector_Statics::ChaosVDRuntimeBlueprintLibrary_eventRecordDebugDrawVector_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UChaosVDRuntimeBlueprintLibrary_RecordDebugDrawVector()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UChaosVDRuntimeBlueprintLibrary_RecordDebugDrawVector_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UChaosVDRuntimeBlueprintLibrary::execRecordDebugDrawVector)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContext);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_InStartLocation);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_InVector);
	P_GET_PROPERTY(FNameProperty,Z_Param_Tag);
	P_GET_STRUCT(FLinearColor,Z_Param_Color);
	P_FINISH;
	P_NATIVE_BEGIN;
	UChaosVDRuntimeBlueprintLibrary::RecordDebugDrawVector(Z_Param_WorldContext,Z_Param_Out_InStartLocation,Z_Param_Out_InVector,Z_Param_Tag,Z_Param_Color);
	P_NATIVE_END;
}
// End Class UChaosVDRuntimeBlueprintLibrary Function RecordDebugDrawVector

// Begin Class UChaosVDRuntimeBlueprintLibrary
void UChaosVDRuntimeBlueprintLibrary::StaticRegisterNativesUChaosVDRuntimeBlueprintLibrary()
{
	UClass* Class = UChaosVDRuntimeBlueprintLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "RecordDebugDrawBox", &UChaosVDRuntimeBlueprintLibrary::execRecordDebugDrawBox },
		{ "RecordDebugDrawLine", &UChaosVDRuntimeBlueprintLibrary::execRecordDebugDrawLine },
		{ "RecordDebugDrawSphere", &UChaosVDRuntimeBlueprintLibrary::execRecordDebugDrawSphere },
		{ "RecordDebugDrawVector", &UChaosVDRuntimeBlueprintLibrary::execRecordDebugDrawVector },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UChaosVDRuntimeBlueprintLibrary);
UClass* Z_Construct_UClass_UChaosVDRuntimeBlueprintLibrary_NoRegister()
{
	return UChaosVDRuntimeBlueprintLibrary::StaticClass();
}
struct Z_Construct_UClass_UChaosVDRuntimeBlueprintLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Library function to record debug draw shapes that will be played back when a CVD recording is loaded\n */" },
		{ "IncludePath", "ChaosVDRuntimeBlueprintLibrary.h" },
		{ "ModuleRelativePath", "Public/ChaosVDRuntimeBlueprintLibrary.h" },
		{ "ToolTip", "Library function to record debug draw shapes that will be played back when a CVD recording is loaded" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UChaosVDRuntimeBlueprintLibrary_RecordDebugDrawBox, "RecordDebugDrawBox" }, // 135194641
		{ &Z_Construct_UFunction_UChaosVDRuntimeBlueprintLibrary_RecordDebugDrawLine, "RecordDebugDrawLine" }, // 953557395
		{ &Z_Construct_UFunction_UChaosVDRuntimeBlueprintLibrary_RecordDebugDrawSphere, "RecordDebugDrawSphere" }, // 1568786707
		{ &Z_Construct_UFunction_UChaosVDRuntimeBlueprintLibrary_RecordDebugDrawVector, "RecordDebugDrawVector" }, // 3928017844
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UChaosVDRuntimeBlueprintLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UChaosVDRuntimeBlueprintLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_ChaosVDBlueprint,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UChaosVDRuntimeBlueprintLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UChaosVDRuntimeBlueprintLibrary_Statics::ClassParams = {
	&UChaosVDRuntimeBlueprintLibrary::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UChaosVDRuntimeBlueprintLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UChaosVDRuntimeBlueprintLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UChaosVDRuntimeBlueprintLibrary()
{
	if (!Z_Registration_Info_UClass_UChaosVDRuntimeBlueprintLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UChaosVDRuntimeBlueprintLibrary.OuterSingleton, Z_Construct_UClass_UChaosVDRuntimeBlueprintLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UChaosVDRuntimeBlueprintLibrary.OuterSingleton;
}
template<> CHAOSVDBLUEPRINT_API UClass* StaticClass<UChaosVDRuntimeBlueprintLibrary>()
{
	return UChaosVDRuntimeBlueprintLibrary::StaticClass();
}
UChaosVDRuntimeBlueprintLibrary::UChaosVDRuntimeBlueprintLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UChaosVDRuntimeBlueprintLibrary);
UChaosVDRuntimeBlueprintLibrary::~UChaosVDRuntimeBlueprintLibrary() {}
// End Class UChaosVDRuntimeBlueprintLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_ChaosVD_Source_ChaosVDBlueprint_Public_ChaosVDRuntimeBlueprintLibrary_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UChaosVDRuntimeBlueprintLibrary, UChaosVDRuntimeBlueprintLibrary::StaticClass, TEXT("UChaosVDRuntimeBlueprintLibrary"), &Z_Registration_Info_UClass_UChaosVDRuntimeBlueprintLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UChaosVDRuntimeBlueprintLibrary), 664963133U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_ChaosVD_Source_ChaosVDBlueprint_Public_ChaosVDRuntimeBlueprintLibrary_h_1819489279(TEXT("/Script/ChaosVDBlueprint"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_ChaosVD_Source_ChaosVDBlueprint_Public_ChaosVDRuntimeBlueprintLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_ChaosVD_Source_ChaosVDBlueprint_Public_ChaosVDRuntimeBlueprintLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
