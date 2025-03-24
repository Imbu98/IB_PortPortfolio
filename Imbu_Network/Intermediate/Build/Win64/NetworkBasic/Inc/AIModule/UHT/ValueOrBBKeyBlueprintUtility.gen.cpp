// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AIModule/Private/BehaviorTree/ValueOrBBKeyBlueprintUtility.h"
#include "Runtime/AIModule/Classes/BehaviorTree/ValueOrBBKey.h"
#include "Runtime/CoreUObject/Public/StructUtils/InstancedStruct.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeValueOrBBKeyBlueprintUtility() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTreeComponent_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UValueOrBBKeyBlueprintUtility();
AIMODULE_API UClass* Z_Construct_UClass_UValueOrBBKeyBlueprintUtility_NoRegister();
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FValueOrBBKey_Bool();
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FValueOrBBKey_Class();
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FValueOrBBKey_Enum();
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FValueOrBBKey_Float();
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FValueOrBBKey_Int32();
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FValueOrBBKey_Name();
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FValueOrBBKey_Object();
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FValueOrBBKey_Rotator();
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FValueOrBBKey_String();
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FValueOrBBKey_Struct();
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FValueOrBBKey_Vector();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FInstancedStruct();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References

// Begin Class UValueOrBBKeyBlueprintUtility Function GetBool
struct Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetBool_Statics
{
	struct ValueOrBBKeyBlueprintUtility_eventGetBool_Parms
	{
		FValueOrBBKey_Bool Value;
		const UBehaviorTreeComponent* BehaviorTreeComp;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Blackboard" },
		{ "ModuleRelativePath", "Private/BehaviorTree/ValueOrBBKeyBlueprintUtility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BehaviorTreeComp_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BehaviorTreeComp;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetBool_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ValueOrBBKeyBlueprintUtility_eventGetBool_Parms, Value), Z_Construct_UScriptStruct_FValueOrBBKey_Bool, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) }; // 1056548058
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetBool_Statics::NewProp_BehaviorTreeComp = { "BehaviorTreeComp", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ValueOrBBKeyBlueprintUtility_eventGetBool_Parms, BehaviorTreeComp), Z_Construct_UClass_UBehaviorTreeComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BehaviorTreeComp_MetaData), NewProp_BehaviorTreeComp_MetaData) };
void Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetBool_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ValueOrBBKeyBlueprintUtility_eventGetBool_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetBool_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ValueOrBBKeyBlueprintUtility_eventGetBool_Parms), &Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetBool_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetBool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetBool_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetBool_Statics::NewProp_BehaviorTreeComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetBool_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetBool_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetBool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UValueOrBBKeyBlueprintUtility, nullptr, "GetBool", nullptr, nullptr, Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetBool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetBool_Statics::PropPointers), sizeof(Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetBool_Statics::ValueOrBBKeyBlueprintUtility_eventGetBool_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetBool_Statics::Function_MetaDataParams), Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetBool_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetBool_Statics::ValueOrBBKeyBlueprintUtility_eventGetBool_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetBool()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetBool_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UValueOrBBKeyBlueprintUtility::execGetBool)
{
	P_GET_STRUCT_REF(FValueOrBBKey_Bool,Z_Param_Out_Value);
	P_GET_OBJECT(UBehaviorTreeComponent,Z_Param_BehaviorTreeComp);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UValueOrBBKeyBlueprintUtility::GetBool(Z_Param_Out_Value,Z_Param_BehaviorTreeComp);
	P_NATIVE_END;
}
// End Class UValueOrBBKeyBlueprintUtility Function GetBool

// Begin Class UValueOrBBKeyBlueprintUtility Function GetClass
struct Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetClass_Statics
{
	struct ValueOrBBKeyBlueprintUtility_eventGetClass_Parms
	{
		FValueOrBBKey_Class Value;
		const UBehaviorTreeComponent* BehaviorTreeComp;
		UClass* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Blackboard" },
		{ "ModuleRelativePath", "Private/BehaviorTree/ValueOrBBKeyBlueprintUtility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BehaviorTreeComp_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BehaviorTreeComp;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetClass_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ValueOrBBKeyBlueprintUtility_eventGetClass_Parms, Value), Z_Construct_UScriptStruct_FValueOrBBKey_Class, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) }; // 2395019718
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetClass_Statics::NewProp_BehaviorTreeComp = { "BehaviorTreeComp", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ValueOrBBKeyBlueprintUtility_eventGetClass_Parms, BehaviorTreeComp), Z_Construct_UClass_UBehaviorTreeComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BehaviorTreeComp_MetaData), NewProp_BehaviorTreeComp_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ValueOrBBKeyBlueprintUtility_eventGetClass_Parms, ReturnValue), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetClass_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetClass_Statics::NewProp_BehaviorTreeComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetClass_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetClass_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UValueOrBBKeyBlueprintUtility, nullptr, "GetClass", nullptr, nullptr, Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetClass_Statics::PropPointers), sizeof(Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetClass_Statics::ValueOrBBKeyBlueprintUtility_eventGetClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetClass_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetClass_Statics::ValueOrBBKeyBlueprintUtility_eventGetClass_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetClass()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetClass_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UValueOrBBKeyBlueprintUtility::execGetClass)
{
	P_GET_STRUCT_REF(FValueOrBBKey_Class,Z_Param_Out_Value);
	P_GET_OBJECT(UBehaviorTreeComponent,Z_Param_BehaviorTreeComp);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UClass**)Z_Param__Result=UValueOrBBKeyBlueprintUtility::GetClass(Z_Param_Out_Value,Z_Param_BehaviorTreeComp);
	P_NATIVE_END;
}
// End Class UValueOrBBKeyBlueprintUtility Function GetClass

// Begin Class UValueOrBBKeyBlueprintUtility Function GetEnum
struct Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetEnum_Statics
{
	struct ValueOrBBKeyBlueprintUtility_eventGetEnum_Parms
	{
		FValueOrBBKey_Enum Value;
		const UBehaviorTreeComponent* BehaviorTreeComp;
		uint8 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Blackboard" },
		{ "ModuleRelativePath", "Private/BehaviorTree/ValueOrBBKeyBlueprintUtility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BehaviorTreeComp_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BehaviorTreeComp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetEnum_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ValueOrBBKeyBlueprintUtility_eventGetEnum_Parms, Value), Z_Construct_UScriptStruct_FValueOrBBKey_Enum, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) }; // 2149350752
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetEnum_Statics::NewProp_BehaviorTreeComp = { "BehaviorTreeComp", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ValueOrBBKeyBlueprintUtility_eventGetEnum_Parms, BehaviorTreeComp), Z_Construct_UClass_UBehaviorTreeComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BehaviorTreeComp_MetaData), NewProp_BehaviorTreeComp_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetEnum_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ValueOrBBKeyBlueprintUtility_eventGetEnum_Parms, ReturnValue), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetEnum_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetEnum_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetEnum_Statics::NewProp_BehaviorTreeComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetEnum_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetEnum_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetEnum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UValueOrBBKeyBlueprintUtility, nullptr, "GetEnum", nullptr, nullptr, Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetEnum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetEnum_Statics::PropPointers), sizeof(Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetEnum_Statics::ValueOrBBKeyBlueprintUtility_eventGetEnum_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetEnum_Statics::Function_MetaDataParams), Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetEnum_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetEnum_Statics::ValueOrBBKeyBlueprintUtility_eventGetEnum_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetEnum()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetEnum_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UValueOrBBKeyBlueprintUtility::execGetEnum)
{
	P_GET_STRUCT_REF(FValueOrBBKey_Enum,Z_Param_Out_Value);
	P_GET_OBJECT(UBehaviorTreeComponent,Z_Param_BehaviorTreeComp);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(uint8*)Z_Param__Result=UValueOrBBKeyBlueprintUtility::GetEnum(Z_Param_Out_Value,Z_Param_BehaviorTreeComp);
	P_NATIVE_END;
}
// End Class UValueOrBBKeyBlueprintUtility Function GetEnum

// Begin Class UValueOrBBKeyBlueprintUtility Function GetFloat
struct Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetFloat_Statics
{
	struct ValueOrBBKeyBlueprintUtility_eventGetFloat_Parms
	{
		FValueOrBBKey_Float Value;
		const UBehaviorTreeComponent* BehaviorTreeComp;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Blackboard" },
		{ "ModuleRelativePath", "Private/BehaviorTree/ValueOrBBKeyBlueprintUtility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BehaviorTreeComp_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BehaviorTreeComp;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetFloat_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ValueOrBBKeyBlueprintUtility_eventGetFloat_Parms, Value), Z_Construct_UScriptStruct_FValueOrBBKey_Float, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) }; // 4044354920
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetFloat_Statics::NewProp_BehaviorTreeComp = { "BehaviorTreeComp", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ValueOrBBKeyBlueprintUtility_eventGetFloat_Parms, BehaviorTreeComp), Z_Construct_UClass_UBehaviorTreeComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BehaviorTreeComp_MetaData), NewProp_BehaviorTreeComp_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ValueOrBBKeyBlueprintUtility_eventGetFloat_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetFloat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetFloat_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetFloat_Statics::NewProp_BehaviorTreeComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetFloat_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetFloat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UValueOrBBKeyBlueprintUtility, nullptr, "GetFloat", nullptr, nullptr, Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetFloat_Statics::PropPointers), sizeof(Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetFloat_Statics::ValueOrBBKeyBlueprintUtility_eventGetFloat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetFloat_Statics::Function_MetaDataParams), Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetFloat_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetFloat_Statics::ValueOrBBKeyBlueprintUtility_eventGetFloat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetFloat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetFloat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UValueOrBBKeyBlueprintUtility::execGetFloat)
{
	P_GET_STRUCT_REF(FValueOrBBKey_Float,Z_Param_Out_Value);
	P_GET_OBJECT(UBehaviorTreeComponent,Z_Param_BehaviorTreeComp);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UValueOrBBKeyBlueprintUtility::GetFloat(Z_Param_Out_Value,Z_Param_BehaviorTreeComp);
	P_NATIVE_END;
}
// End Class UValueOrBBKeyBlueprintUtility Function GetFloat

// Begin Class UValueOrBBKeyBlueprintUtility Function GetInt32
struct Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetInt32_Statics
{
	struct ValueOrBBKeyBlueprintUtility_eventGetInt32_Parms
	{
		FValueOrBBKey_Int32 Value;
		const UBehaviorTreeComponent* BehaviorTreeComp;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Blackboard" },
		{ "ModuleRelativePath", "Private/BehaviorTree/ValueOrBBKeyBlueprintUtility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BehaviorTreeComp_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BehaviorTreeComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetInt32_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ValueOrBBKeyBlueprintUtility_eventGetInt32_Parms, Value), Z_Construct_UScriptStruct_FValueOrBBKey_Int32, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) }; // 3826788361
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetInt32_Statics::NewProp_BehaviorTreeComp = { "BehaviorTreeComp", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ValueOrBBKeyBlueprintUtility_eventGetInt32_Parms, BehaviorTreeComp), Z_Construct_UClass_UBehaviorTreeComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BehaviorTreeComp_MetaData), NewProp_BehaviorTreeComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetInt32_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ValueOrBBKeyBlueprintUtility_eventGetInt32_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetInt32_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetInt32_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetInt32_Statics::NewProp_BehaviorTreeComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetInt32_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetInt32_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetInt32_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UValueOrBBKeyBlueprintUtility, nullptr, "GetInt32", nullptr, nullptr, Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetInt32_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetInt32_Statics::PropPointers), sizeof(Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetInt32_Statics::ValueOrBBKeyBlueprintUtility_eventGetInt32_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetInt32_Statics::Function_MetaDataParams), Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetInt32_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetInt32_Statics::ValueOrBBKeyBlueprintUtility_eventGetInt32_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetInt32()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetInt32_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UValueOrBBKeyBlueprintUtility::execGetInt32)
{
	P_GET_STRUCT_REF(FValueOrBBKey_Int32,Z_Param_Out_Value);
	P_GET_OBJECT(UBehaviorTreeComponent,Z_Param_BehaviorTreeComp);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UValueOrBBKeyBlueprintUtility::GetInt32(Z_Param_Out_Value,Z_Param_BehaviorTreeComp);
	P_NATIVE_END;
}
// End Class UValueOrBBKeyBlueprintUtility Function GetInt32

// Begin Class UValueOrBBKeyBlueprintUtility Function GetName
struct Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetName_Statics
{
	struct ValueOrBBKeyBlueprintUtility_eventGetName_Parms
	{
		FValueOrBBKey_Name Value;
		const UBehaviorTreeComponent* BehaviorTreeComp;
		FName ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Blackboard" },
		{ "ModuleRelativePath", "Private/BehaviorTree/ValueOrBBKeyBlueprintUtility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BehaviorTreeComp_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BehaviorTreeComp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetName_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ValueOrBBKeyBlueprintUtility_eventGetName_Parms, Value), Z_Construct_UScriptStruct_FValueOrBBKey_Name, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) }; // 1582672531
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetName_Statics::NewProp_BehaviorTreeComp = { "BehaviorTreeComp", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ValueOrBBKeyBlueprintUtility_eventGetName_Parms, BehaviorTreeComp), Z_Construct_UClass_UBehaviorTreeComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BehaviorTreeComp_MetaData), NewProp_BehaviorTreeComp_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ValueOrBBKeyBlueprintUtility_eventGetName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetName_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetName_Statics::NewProp_BehaviorTreeComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UValueOrBBKeyBlueprintUtility, nullptr, "GetName", nullptr, nullptr, Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetName_Statics::ValueOrBBKeyBlueprintUtility_eventGetName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetName_Statics::ValueOrBBKeyBlueprintUtility_eventGetName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UValueOrBBKeyBlueprintUtility::execGetName)
{
	P_GET_STRUCT_REF(FValueOrBBKey_Name,Z_Param_Out_Value);
	P_GET_OBJECT(UBehaviorTreeComponent,Z_Param_BehaviorTreeComp);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FName*)Z_Param__Result=UValueOrBBKeyBlueprintUtility::GetName(Z_Param_Out_Value,Z_Param_BehaviorTreeComp);
	P_NATIVE_END;
}
// End Class UValueOrBBKeyBlueprintUtility Function GetName

// Begin Class UValueOrBBKeyBlueprintUtility Function GetObject
struct Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetObject_Statics
{
	struct ValueOrBBKeyBlueprintUtility_eventGetObject_Parms
	{
		FValueOrBBKey_Object Value;
		const UBehaviorTreeComponent* BehaviorTreeComp;
		UObject* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Blackboard" },
		{ "ModuleRelativePath", "Private/BehaviorTree/ValueOrBBKeyBlueprintUtility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BehaviorTreeComp_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BehaviorTreeComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetObject_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ValueOrBBKeyBlueprintUtility_eventGetObject_Parms, Value), Z_Construct_UScriptStruct_FValueOrBBKey_Object, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) }; // 2783390860
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetObject_Statics::NewProp_BehaviorTreeComp = { "BehaviorTreeComp", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ValueOrBBKeyBlueprintUtility_eventGetObject_Parms, BehaviorTreeComp), Z_Construct_UClass_UBehaviorTreeComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BehaviorTreeComp_MetaData), NewProp_BehaviorTreeComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ValueOrBBKeyBlueprintUtility_eventGetObject_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetObject_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetObject_Statics::NewProp_BehaviorTreeComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetObject_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetObject_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UValueOrBBKeyBlueprintUtility, nullptr, "GetObject", nullptr, nullptr, Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetObject_Statics::PropPointers), sizeof(Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetObject_Statics::ValueOrBBKeyBlueprintUtility_eventGetObject_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetObject_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetObject_Statics::ValueOrBBKeyBlueprintUtility_eventGetObject_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetObject()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetObject_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UValueOrBBKeyBlueprintUtility::execGetObject)
{
	P_GET_STRUCT_REF(FValueOrBBKey_Object,Z_Param_Out_Value);
	P_GET_OBJECT(UBehaviorTreeComponent,Z_Param_BehaviorTreeComp);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UObject**)Z_Param__Result=UValueOrBBKeyBlueprintUtility::GetObject(Z_Param_Out_Value,Z_Param_BehaviorTreeComp);
	P_NATIVE_END;
}
// End Class UValueOrBBKeyBlueprintUtility Function GetObject

// Begin Class UValueOrBBKeyBlueprintUtility Function GetRotator
struct Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetRotator_Statics
{
	struct ValueOrBBKeyBlueprintUtility_eventGetRotator_Parms
	{
		FValueOrBBKey_Rotator Value;
		const UBehaviorTreeComponent* BehaviorTreeComp;
		FRotator ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Blackboard" },
		{ "ModuleRelativePath", "Private/BehaviorTree/ValueOrBBKeyBlueprintUtility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BehaviorTreeComp_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BehaviorTreeComp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetRotator_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ValueOrBBKeyBlueprintUtility_eventGetRotator_Parms, Value), Z_Construct_UScriptStruct_FValueOrBBKey_Rotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) }; // 2458019603
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetRotator_Statics::NewProp_BehaviorTreeComp = { "BehaviorTreeComp", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ValueOrBBKeyBlueprintUtility_eventGetRotator_Parms, BehaviorTreeComp), Z_Construct_UClass_UBehaviorTreeComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BehaviorTreeComp_MetaData), NewProp_BehaviorTreeComp_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetRotator_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ValueOrBBKeyBlueprintUtility_eventGetRotator_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetRotator_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetRotator_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetRotator_Statics::NewProp_BehaviorTreeComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetRotator_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetRotator_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetRotator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UValueOrBBKeyBlueprintUtility, nullptr, "GetRotator", nullptr, nullptr, Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetRotator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetRotator_Statics::PropPointers), sizeof(Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetRotator_Statics::ValueOrBBKeyBlueprintUtility_eventGetRotator_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetRotator_Statics::Function_MetaDataParams), Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetRotator_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetRotator_Statics::ValueOrBBKeyBlueprintUtility_eventGetRotator_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetRotator()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetRotator_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UValueOrBBKeyBlueprintUtility::execGetRotator)
{
	P_GET_STRUCT_REF(FValueOrBBKey_Rotator,Z_Param_Out_Value);
	P_GET_OBJECT(UBehaviorTreeComponent,Z_Param_BehaviorTreeComp);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FRotator*)Z_Param__Result=UValueOrBBKeyBlueprintUtility::GetRotator(Z_Param_Out_Value,Z_Param_BehaviorTreeComp);
	P_NATIVE_END;
}
// End Class UValueOrBBKeyBlueprintUtility Function GetRotator

// Begin Class UValueOrBBKeyBlueprintUtility Function GetString
struct Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetString_Statics
{
	struct ValueOrBBKeyBlueprintUtility_eventGetString_Parms
	{
		FValueOrBBKey_String Value;
		const UBehaviorTreeComponent* BehaviorTreeComp;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Blackboard" },
		{ "ModuleRelativePath", "Private/BehaviorTree/ValueOrBBKeyBlueprintUtility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BehaviorTreeComp_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BehaviorTreeComp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetString_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ValueOrBBKeyBlueprintUtility_eventGetString_Parms, Value), Z_Construct_UScriptStruct_FValueOrBBKey_String, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) }; // 3908181354
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetString_Statics::NewProp_BehaviorTreeComp = { "BehaviorTreeComp", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ValueOrBBKeyBlueprintUtility_eventGetString_Parms, BehaviorTreeComp), Z_Construct_UClass_UBehaviorTreeComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BehaviorTreeComp_MetaData), NewProp_BehaviorTreeComp_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ValueOrBBKeyBlueprintUtility_eventGetString_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetString_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetString_Statics::NewProp_BehaviorTreeComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetString_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetString_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UValueOrBBKeyBlueprintUtility, nullptr, "GetString", nullptr, nullptr, Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetString_Statics::ValueOrBBKeyBlueprintUtility_eventGetString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetString_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetString_Statics::ValueOrBBKeyBlueprintUtility_eventGetString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UValueOrBBKeyBlueprintUtility::execGetString)
{
	P_GET_STRUCT_REF(FValueOrBBKey_String,Z_Param_Out_Value);
	P_GET_OBJECT(UBehaviorTreeComponent,Z_Param_BehaviorTreeComp);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UValueOrBBKeyBlueprintUtility::GetString(Z_Param_Out_Value,Z_Param_BehaviorTreeComp);
	P_NATIVE_END;
}
// End Class UValueOrBBKeyBlueprintUtility Function GetString

// Begin Class UValueOrBBKeyBlueprintUtility Function GetStruct
struct Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetStruct_Statics
{
	struct ValueOrBBKeyBlueprintUtility_eventGetStruct_Parms
	{
		FValueOrBBKey_Struct Value;
		const UBehaviorTreeComponent* BehaviorTreeComp;
		FInstancedStruct ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Blackboard" },
		{ "ModuleRelativePath", "Private/BehaviorTree/ValueOrBBKeyBlueprintUtility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BehaviorTreeComp_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BehaviorTreeComp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetStruct_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ValueOrBBKeyBlueprintUtility_eventGetStruct_Parms, Value), Z_Construct_UScriptStruct_FValueOrBBKey_Struct, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) }; // 2503478642
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetStruct_Statics::NewProp_BehaviorTreeComp = { "BehaviorTreeComp", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ValueOrBBKeyBlueprintUtility_eventGetStruct_Parms, BehaviorTreeComp), Z_Construct_UClass_UBehaviorTreeComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BehaviorTreeComp_MetaData), NewProp_BehaviorTreeComp_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetStruct_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ValueOrBBKeyBlueprintUtility_eventGetStruct_Parms, ReturnValue), Z_Construct_UScriptStruct_FInstancedStruct, METADATA_PARAMS(0, nullptr) }; // 111383296
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetStruct_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetStruct_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetStruct_Statics::NewProp_BehaviorTreeComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetStruct_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetStruct_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetStruct_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UValueOrBBKeyBlueprintUtility, nullptr, "GetStruct", nullptr, nullptr, Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetStruct_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetStruct_Statics::PropPointers), sizeof(Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetStruct_Statics::ValueOrBBKeyBlueprintUtility_eventGetStruct_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetStruct_Statics::Function_MetaDataParams), Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetStruct_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetStruct_Statics::ValueOrBBKeyBlueprintUtility_eventGetStruct_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetStruct()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetStruct_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UValueOrBBKeyBlueprintUtility::execGetStruct)
{
	P_GET_STRUCT_REF(FValueOrBBKey_Struct,Z_Param_Out_Value);
	P_GET_OBJECT(UBehaviorTreeComponent,Z_Param_BehaviorTreeComp);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FInstancedStruct*)Z_Param__Result=UValueOrBBKeyBlueprintUtility::GetStruct(Z_Param_Out_Value,Z_Param_BehaviorTreeComp);
	P_NATIVE_END;
}
// End Class UValueOrBBKeyBlueprintUtility Function GetStruct

// Begin Class UValueOrBBKeyBlueprintUtility Function GetVector
struct Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetVector_Statics
{
	struct ValueOrBBKeyBlueprintUtility_eventGetVector_Parms
	{
		FValueOrBBKey_Vector Value;
		const UBehaviorTreeComponent* BehaviorTreeComp;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Blackboard" },
		{ "ModuleRelativePath", "Private/BehaviorTree/ValueOrBBKeyBlueprintUtility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BehaviorTreeComp_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BehaviorTreeComp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetVector_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ValueOrBBKeyBlueprintUtility_eventGetVector_Parms, Value), Z_Construct_UScriptStruct_FValueOrBBKey_Vector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) }; // 233808226
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetVector_Statics::NewProp_BehaviorTreeComp = { "BehaviorTreeComp", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ValueOrBBKeyBlueprintUtility_eventGetVector_Parms, BehaviorTreeComp), Z_Construct_UClass_UBehaviorTreeComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BehaviorTreeComp_MetaData), NewProp_BehaviorTreeComp_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ValueOrBBKeyBlueprintUtility_eventGetVector_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetVector_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetVector_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetVector_Statics::NewProp_BehaviorTreeComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetVector_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetVector_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UValueOrBBKeyBlueprintUtility, nullptr, "GetVector", nullptr, nullptr, Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetVector_Statics::PropPointers), sizeof(Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetVector_Statics::ValueOrBBKeyBlueprintUtility_eventGetVector_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetVector_Statics::Function_MetaDataParams), Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetVector_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetVector_Statics::ValueOrBBKeyBlueprintUtility_eventGetVector_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetVector()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetVector_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UValueOrBBKeyBlueprintUtility::execGetVector)
{
	P_GET_STRUCT_REF(FValueOrBBKey_Vector,Z_Param_Out_Value);
	P_GET_OBJECT(UBehaviorTreeComponent,Z_Param_BehaviorTreeComp);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=UValueOrBBKeyBlueprintUtility::GetVector(Z_Param_Out_Value,Z_Param_BehaviorTreeComp);
	P_NATIVE_END;
}
// End Class UValueOrBBKeyBlueprintUtility Function GetVector

// Begin Class UValueOrBBKeyBlueprintUtility
void UValueOrBBKeyBlueprintUtility::StaticRegisterNativesUValueOrBBKeyBlueprintUtility()
{
	UClass* Class = UValueOrBBKeyBlueprintUtility::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetBool", &UValueOrBBKeyBlueprintUtility::execGetBool },
		{ "GetClass", &UValueOrBBKeyBlueprintUtility::execGetClass },
		{ "GetEnum", &UValueOrBBKeyBlueprintUtility::execGetEnum },
		{ "GetFloat", &UValueOrBBKeyBlueprintUtility::execGetFloat },
		{ "GetInt32", &UValueOrBBKeyBlueprintUtility::execGetInt32 },
		{ "GetName", &UValueOrBBKeyBlueprintUtility::execGetName },
		{ "GetObject", &UValueOrBBKeyBlueprintUtility::execGetObject },
		{ "GetRotator", &UValueOrBBKeyBlueprintUtility::execGetRotator },
		{ "GetString", &UValueOrBBKeyBlueprintUtility::execGetString },
		{ "GetStruct", &UValueOrBBKeyBlueprintUtility::execGetStruct },
		{ "GetVector", &UValueOrBBKeyBlueprintUtility::execGetVector },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UValueOrBBKeyBlueprintUtility);
UClass* Z_Construct_UClass_UValueOrBBKeyBlueprintUtility_NoRegister()
{
	return UValueOrBBKeyBlueprintUtility::StaticClass();
}
struct Z_Construct_UClass_UValueOrBBKeyBlueprintUtility_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "BehaviorTree/ValueOrBBKeyBlueprintUtility.h" },
		{ "ModuleRelativePath", "Private/BehaviorTree/ValueOrBBKeyBlueprintUtility.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetBool, "GetBool" }, // 2974864894
		{ &Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetClass, "GetClass" }, // 1901825528
		{ &Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetEnum, "GetEnum" }, // 3666244965
		{ &Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetFloat, "GetFloat" }, // 709079580
		{ &Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetInt32, "GetInt32" }, // 3318943853
		{ &Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetName, "GetName" }, // 564275990
		{ &Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetObject, "GetObject" }, // 697316871
		{ &Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetRotator, "GetRotator" }, // 2132897873
		{ &Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetString, "GetString" }, // 2846397659
		{ &Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetStruct, "GetStruct" }, // 1677609385
		{ &Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetVector, "GetVector" }, // 1622869050
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UValueOrBBKeyBlueprintUtility>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UValueOrBBKeyBlueprintUtility_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UValueOrBBKeyBlueprintUtility_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UValueOrBBKeyBlueprintUtility_Statics::ClassParams = {
	&UValueOrBBKeyBlueprintUtility::StaticClass,
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
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UValueOrBBKeyBlueprintUtility_Statics::Class_MetaDataParams), Z_Construct_UClass_UValueOrBBKeyBlueprintUtility_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UValueOrBBKeyBlueprintUtility()
{
	if (!Z_Registration_Info_UClass_UValueOrBBKeyBlueprintUtility.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UValueOrBBKeyBlueprintUtility.OuterSingleton, Z_Construct_UClass_UValueOrBBKeyBlueprintUtility_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UValueOrBBKeyBlueprintUtility.OuterSingleton;
}
template<> AIMODULE_API UClass* StaticClass<UValueOrBBKeyBlueprintUtility>()
{
	return UValueOrBBKeyBlueprintUtility::StaticClass();
}
UValueOrBBKeyBlueprintUtility::UValueOrBBKeyBlueprintUtility(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UValueOrBBKeyBlueprintUtility);
UValueOrBBKeyBlueprintUtility::~UValueOrBBKeyBlueprintUtility() {}
// End Class UValueOrBBKeyBlueprintUtility

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Private_BehaviorTree_ValueOrBBKeyBlueprintUtility_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UValueOrBBKeyBlueprintUtility, UValueOrBBKeyBlueprintUtility::StaticClass, TEXT("UValueOrBBKeyBlueprintUtility"), &Z_Registration_Info_UClass_UValueOrBBKeyBlueprintUtility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UValueOrBBKeyBlueprintUtility), 3867527006U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Private_BehaviorTree_ValueOrBBKeyBlueprintUtility_h_1470273690(TEXT("/Script/AIModule"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Private_BehaviorTree_ValueOrBBKeyBlueprintUtility_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Private_BehaviorTree_ValueOrBBKeyBlueprintUtility_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
