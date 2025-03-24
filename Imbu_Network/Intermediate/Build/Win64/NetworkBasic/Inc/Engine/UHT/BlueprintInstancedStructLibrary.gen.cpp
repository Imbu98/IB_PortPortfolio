// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Kismet/BlueprintInstancedStructLibrary.h"
#include "Runtime/CoreUObject/Public/StructUtils/InstancedStruct.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlueprintInstancedStructLibrary() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UScriptStruct();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FInstancedStruct();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintInstancedStructLibrary();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintInstancedStructLibrary_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EStructUtilsResult();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Enum EStructUtilsResult
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EStructUtilsResult;
static UEnum* EStructUtilsResult_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EStructUtilsResult.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EStructUtilsResult.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EStructUtilsResult, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EStructUtilsResult"));
	}
	return Z_Registration_Info_UEnum_EStructUtilsResult.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<EStructUtilsResult>()
{
	return EStructUtilsResult_StaticEnum();
}
struct Z_Construct_UEnum_Engine_EStructUtilsResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintInstancedStructLibrary.h" },
		{ "NotValid.Name", "EStructUtilsResult::NotValid" },
		{ "Valid.Name", "EStructUtilsResult::Valid" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EStructUtilsResult::Valid", (int64)EStructUtilsResult::Valid },
		{ "EStructUtilsResult::NotValid", (int64)EStructUtilsResult::NotValid },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EStructUtilsResult_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"EStructUtilsResult",
	"EStructUtilsResult",
	Z_Construct_UEnum_Engine_EStructUtilsResult_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EStructUtilsResult_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EStructUtilsResult_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_EStructUtilsResult_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_EStructUtilsResult()
{
	if (!Z_Registration_Info_UEnum_EStructUtilsResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EStructUtilsResult.InnerSingleton, Z_Construct_UEnum_Engine_EStructUtilsResult_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EStructUtilsResult.InnerSingleton;
}
// End Enum EStructUtilsResult

// Begin Class UBlueprintInstancedStructLibrary Function EqualEqual_InstancedStruct
struct Z_Construct_UFunction_UBlueprintInstancedStructLibrary_EqualEqual_InstancedStruct_Statics
{
	struct BlueprintInstancedStructLibrary_eventEqualEqual_InstancedStruct_Parms
	{
		FInstancedStruct A;
		FInstancedStruct B;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Utilities|Instanced Struct" },
		{ "Comment", "/**\n\x09 * Checks whether two InstancedStructs (and the values contained within) are equal.\n\x09 */" },
		{ "CompactNodeTitle", "==" },
		{ "DisplayName", "Equal" },
		{ "Keywords", "== equal" },
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintInstancedStructLibrary.h" },
		{ "ToolTip", "Checks whether two InstancedStructs (and the values contained within) are equal." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_A;
	static const UECodeGen_Private::FStructPropertyParams NewProp_B;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintInstancedStructLibrary_EqualEqual_InstancedStruct_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintInstancedStructLibrary_eventEqualEqual_InstancedStruct_Parms, A), Z_Construct_UScriptStruct_FInstancedStruct, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_A_MetaData), NewProp_A_MetaData) }; // 111383296
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintInstancedStructLibrary_EqualEqual_InstancedStruct_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintInstancedStructLibrary_eventEqualEqual_InstancedStruct_Parms, B), Z_Construct_UScriptStruct_FInstancedStruct, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_B_MetaData), NewProp_B_MetaData) }; // 111383296
void Z_Construct_UFunction_UBlueprintInstancedStructLibrary_EqualEqual_InstancedStruct_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((BlueprintInstancedStructLibrary_eventEqualEqual_InstancedStruct_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBlueprintInstancedStructLibrary_EqualEqual_InstancedStruct_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BlueprintInstancedStructLibrary_eventEqualEqual_InstancedStruct_Parms), &Z_Construct_UFunction_UBlueprintInstancedStructLibrary_EqualEqual_InstancedStruct_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintInstancedStructLibrary_EqualEqual_InstancedStruct_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintInstancedStructLibrary_EqualEqual_InstancedStruct_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintInstancedStructLibrary_EqualEqual_InstancedStruct_Statics::NewProp_B,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintInstancedStructLibrary_EqualEqual_InstancedStruct_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintInstancedStructLibrary_EqualEqual_InstancedStruct_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintInstancedStructLibrary_EqualEqual_InstancedStruct_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintInstancedStructLibrary, nullptr, "EqualEqual_InstancedStruct", nullptr, nullptr, Z_Construct_UFunction_UBlueprintInstancedStructLibrary_EqualEqual_InstancedStruct_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintInstancedStructLibrary_EqualEqual_InstancedStruct_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlueprintInstancedStructLibrary_EqualEqual_InstancedStruct_Statics::BlueprintInstancedStructLibrary_eventEqualEqual_InstancedStruct_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintInstancedStructLibrary_EqualEqual_InstancedStruct_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlueprintInstancedStructLibrary_EqualEqual_InstancedStruct_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBlueprintInstancedStructLibrary_EqualEqual_InstancedStruct_Statics::BlueprintInstancedStructLibrary_eventEqualEqual_InstancedStruct_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlueprintInstancedStructLibrary_EqualEqual_InstancedStruct()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintInstancedStructLibrary_EqualEqual_InstancedStruct_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBlueprintInstancedStructLibrary::execEqualEqual_InstancedStruct)
{
	P_GET_STRUCT_REF(FInstancedStruct,Z_Param_Out_A);
	P_GET_STRUCT_REF(FInstancedStruct,Z_Param_Out_B);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UBlueprintInstancedStructLibrary::EqualEqual_InstancedStruct(Z_Param_Out_A,Z_Param_Out_B);
	P_NATIVE_END;
}
// End Class UBlueprintInstancedStructLibrary Function EqualEqual_InstancedStruct

// Begin Class UBlueprintInstancedStructLibrary Function GetInstancedStructValue
struct Z_Construct_UFunction_UBlueprintInstancedStructLibrary_GetInstancedStructValue_Statics
{
	struct BlueprintInstancedStructLibrary_eventGetInstancedStructValue_Parms
	{
		EStructUtilsResult ExecResult;
		FInstancedStruct InstancedStruct;
		int32 Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Utilities|Instanced Struct" },
		{ "Comment", "/**\n\x09 * Retrieves data from an InstancedStruct if it matches the output type.\n\x09 */" },
		{ "CustomStructureParam", "Value" },
		{ "CustomThunk", "true" },
		{ "ExpandEnumAsExecs", "ExecResult" },
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintInstancedStructLibrary.h" },
		{ "ToolTip", "Retrieves data from an InstancedStruct if it matches the output type." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InstancedStruct_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ExecResult_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ExecResult;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InstancedStruct;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBlueprintInstancedStructLibrary_GetInstancedStructValue_Statics::NewProp_ExecResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBlueprintInstancedStructLibrary_GetInstancedStructValue_Statics::NewProp_ExecResult = { "ExecResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintInstancedStructLibrary_eventGetInstancedStructValue_Parms, ExecResult), Z_Construct_UEnum_Engine_EStructUtilsResult, METADATA_PARAMS(0, nullptr) }; // 1490149719
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintInstancedStructLibrary_GetInstancedStructValue_Statics::NewProp_InstancedStruct = { "InstancedStruct", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintInstancedStructLibrary_eventGetInstancedStructValue_Parms, InstancedStruct), Z_Construct_UScriptStruct_FInstancedStruct, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InstancedStruct_MetaData), NewProp_InstancedStruct_MetaData) }; // 111383296
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintInstancedStructLibrary_GetInstancedStructValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintInstancedStructLibrary_eventGetInstancedStructValue_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintInstancedStructLibrary_GetInstancedStructValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintInstancedStructLibrary_GetInstancedStructValue_Statics::NewProp_ExecResult_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintInstancedStructLibrary_GetInstancedStructValue_Statics::NewProp_ExecResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintInstancedStructLibrary_GetInstancedStructValue_Statics::NewProp_InstancedStruct,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintInstancedStructLibrary_GetInstancedStructValue_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintInstancedStructLibrary_GetInstancedStructValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintInstancedStructLibrary_GetInstancedStructValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintInstancedStructLibrary, nullptr, "GetInstancedStructValue", nullptr, nullptr, Z_Construct_UFunction_UBlueprintInstancedStructLibrary_GetInstancedStructValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintInstancedStructLibrary_GetInstancedStructValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlueprintInstancedStructLibrary_GetInstancedStructValue_Statics::BlueprintInstancedStructLibrary_eventGetInstancedStructValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintInstancedStructLibrary_GetInstancedStructValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlueprintInstancedStructLibrary_GetInstancedStructValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBlueprintInstancedStructLibrary_GetInstancedStructValue_Statics::BlueprintInstancedStructLibrary_eventGetInstancedStructValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlueprintInstancedStructLibrary_GetInstancedStructValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintInstancedStructLibrary_GetInstancedStructValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UBlueprintInstancedStructLibrary Function GetInstancedStructValue

// Begin Class UBlueprintInstancedStructLibrary Function IsInstancedStructValid
struct Z_Construct_UFunction_UBlueprintInstancedStructLibrary_IsInstancedStructValid_Statics
{
	struct BlueprintInstancedStructLibrary_eventIsInstancedStructValid_Parms
	{
		FInstancedStruct InstancedStruct;
		EStructUtilsResult ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Utilities|Instanced Struct" },
		{ "Comment", "/** \n\x09 * Checks whether an InstancedStruct contains value.\n\x09 */" },
		{ "DisplayName", "Is Valid (Branch)" },
		{ "ExpandEnumAsExecs", "ReturnValue" },
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintInstancedStructLibrary.h" },
		{ "ToolTip", "Checks whether an InstancedStruct contains value." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InstancedStruct_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InstancedStruct;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintInstancedStructLibrary_IsInstancedStructValid_Statics::NewProp_InstancedStruct = { "InstancedStruct", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintInstancedStructLibrary_eventIsInstancedStructValid_Parms, InstancedStruct), Z_Construct_UScriptStruct_FInstancedStruct, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InstancedStruct_MetaData), NewProp_InstancedStruct_MetaData) }; // 111383296
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBlueprintInstancedStructLibrary_IsInstancedStructValid_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBlueprintInstancedStructLibrary_IsInstancedStructValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintInstancedStructLibrary_eventIsInstancedStructValid_Parms, ReturnValue), Z_Construct_UEnum_Engine_EStructUtilsResult, METADATA_PARAMS(0, nullptr) }; // 1490149719
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintInstancedStructLibrary_IsInstancedStructValid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintInstancedStructLibrary_IsInstancedStructValid_Statics::NewProp_InstancedStruct,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintInstancedStructLibrary_IsInstancedStructValid_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintInstancedStructLibrary_IsInstancedStructValid_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintInstancedStructLibrary_IsInstancedStructValid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintInstancedStructLibrary_IsInstancedStructValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintInstancedStructLibrary, nullptr, "IsInstancedStructValid", nullptr, nullptr, Z_Construct_UFunction_UBlueprintInstancedStructLibrary_IsInstancedStructValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintInstancedStructLibrary_IsInstancedStructValid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlueprintInstancedStructLibrary_IsInstancedStructValid_Statics::BlueprintInstancedStructLibrary_eventIsInstancedStructValid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintInstancedStructLibrary_IsInstancedStructValid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlueprintInstancedStructLibrary_IsInstancedStructValid_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBlueprintInstancedStructLibrary_IsInstancedStructValid_Statics::BlueprintInstancedStructLibrary_eventIsInstancedStructValid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlueprintInstancedStructLibrary_IsInstancedStructValid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintInstancedStructLibrary_IsInstancedStructValid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBlueprintInstancedStructLibrary::execIsInstancedStructValid)
{
	P_GET_STRUCT_REF(FInstancedStruct,Z_Param_Out_InstancedStruct);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EStructUtilsResult*)Z_Param__Result=UBlueprintInstancedStructLibrary::IsInstancedStructValid(Z_Param_Out_InstancedStruct);
	P_NATIVE_END;
}
// End Class UBlueprintInstancedStructLibrary Function IsInstancedStructValid

// Begin Class UBlueprintInstancedStructLibrary Function IsValid_InstancedStruct
struct Z_Construct_UFunction_UBlueprintInstancedStructLibrary_IsValid_InstancedStruct_Statics
{
	struct BlueprintInstancedStructLibrary_eventIsValid_InstancedStruct_Parms
	{
		FInstancedStruct InstancedStruct;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Utilities|Instanced Struct" },
		{ "Comment", "/**\n\x09 * Checks whether the InstancedStruct contains value.\n\x09 */" },
		{ "DisplayName", "Is Valid" },
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintInstancedStructLibrary.h" },
		{ "ToolTip", "Checks whether the InstancedStruct contains value." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InstancedStruct_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InstancedStruct;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintInstancedStructLibrary_IsValid_InstancedStruct_Statics::NewProp_InstancedStruct = { "InstancedStruct", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintInstancedStructLibrary_eventIsValid_InstancedStruct_Parms, InstancedStruct), Z_Construct_UScriptStruct_FInstancedStruct, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InstancedStruct_MetaData), NewProp_InstancedStruct_MetaData) }; // 111383296
void Z_Construct_UFunction_UBlueprintInstancedStructLibrary_IsValid_InstancedStruct_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((BlueprintInstancedStructLibrary_eventIsValid_InstancedStruct_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBlueprintInstancedStructLibrary_IsValid_InstancedStruct_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BlueprintInstancedStructLibrary_eventIsValid_InstancedStruct_Parms), &Z_Construct_UFunction_UBlueprintInstancedStructLibrary_IsValid_InstancedStruct_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintInstancedStructLibrary_IsValid_InstancedStruct_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintInstancedStructLibrary_IsValid_InstancedStruct_Statics::NewProp_InstancedStruct,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintInstancedStructLibrary_IsValid_InstancedStruct_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintInstancedStructLibrary_IsValid_InstancedStruct_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintInstancedStructLibrary_IsValid_InstancedStruct_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintInstancedStructLibrary, nullptr, "IsValid_InstancedStruct", nullptr, nullptr, Z_Construct_UFunction_UBlueprintInstancedStructLibrary_IsValid_InstancedStruct_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintInstancedStructLibrary_IsValid_InstancedStruct_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlueprintInstancedStructLibrary_IsValid_InstancedStruct_Statics::BlueprintInstancedStructLibrary_eventIsValid_InstancedStruct_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintInstancedStructLibrary_IsValid_InstancedStruct_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlueprintInstancedStructLibrary_IsValid_InstancedStruct_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBlueprintInstancedStructLibrary_IsValid_InstancedStruct_Statics::BlueprintInstancedStructLibrary_eventIsValid_InstancedStruct_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlueprintInstancedStructLibrary_IsValid_InstancedStruct()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintInstancedStructLibrary_IsValid_InstancedStruct_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBlueprintInstancedStructLibrary::execIsValid_InstancedStruct)
{
	P_GET_STRUCT_REF(FInstancedStruct,Z_Param_Out_InstancedStruct);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UBlueprintInstancedStructLibrary::IsValid_InstancedStruct(Z_Param_Out_InstancedStruct);
	P_NATIVE_END;
}
// End Class UBlueprintInstancedStructLibrary Function IsValid_InstancedStruct

// Begin Class UBlueprintInstancedStructLibrary Function MakeInstancedStruct
struct Z_Construct_UFunction_UBlueprintInstancedStructLibrary_MakeInstancedStruct_Statics
{
	struct BlueprintInstancedStructLibrary_eventMakeInstancedStruct_Parms
	{
		int32 Value;
		FInstancedStruct ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Utilities|Instanced Struct" },
		{ "Comment", "/**\n\x09 * Create a new InstancedStruct from the given source value.\n\x09 */" },
		{ "CustomStructureParam", "Value" },
		{ "CustomThunk", "true" },
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintInstancedStructLibrary.h" },
		{ "NativeMakeFunc", "" },
		{ "ToolTip", "Create a new InstancedStruct from the given source value." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintInstancedStructLibrary_MakeInstancedStruct_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintInstancedStructLibrary_eventMakeInstancedStruct_Parms, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintInstancedStructLibrary_MakeInstancedStruct_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintInstancedStructLibrary_eventMakeInstancedStruct_Parms, ReturnValue), Z_Construct_UScriptStruct_FInstancedStruct, METADATA_PARAMS(0, nullptr) }; // 111383296
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintInstancedStructLibrary_MakeInstancedStruct_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintInstancedStructLibrary_MakeInstancedStruct_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintInstancedStructLibrary_MakeInstancedStruct_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintInstancedStructLibrary_MakeInstancedStruct_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintInstancedStructLibrary_MakeInstancedStruct_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintInstancedStructLibrary, nullptr, "MakeInstancedStruct", nullptr, nullptr, Z_Construct_UFunction_UBlueprintInstancedStructLibrary_MakeInstancedStruct_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintInstancedStructLibrary_MakeInstancedStruct_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlueprintInstancedStructLibrary_MakeInstancedStruct_Statics::BlueprintInstancedStructLibrary_eventMakeInstancedStruct_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintInstancedStructLibrary_MakeInstancedStruct_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlueprintInstancedStructLibrary_MakeInstancedStruct_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBlueprintInstancedStructLibrary_MakeInstancedStruct_Statics::BlueprintInstancedStructLibrary_eventMakeInstancedStruct_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlueprintInstancedStructLibrary_MakeInstancedStruct()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintInstancedStructLibrary_MakeInstancedStruct_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UBlueprintInstancedStructLibrary Function MakeInstancedStruct

// Begin Class UBlueprintInstancedStructLibrary Function NotEqual_InstancedStruct
struct Z_Construct_UFunction_UBlueprintInstancedStructLibrary_NotEqual_InstancedStruct_Statics
{
	struct BlueprintInstancedStructLibrary_eventNotEqual_InstancedStruct_Parms
	{
		FInstancedStruct A;
		FInstancedStruct B;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Utilities|Instanced Struct" },
		{ "Comment", "/**\n\x09 * Checks whether two InstancedStructs are not equal.\n\x09 */" },
		{ "CompactNodeTitle", "!=" },
		{ "DisplayName", "Not Equal" },
		{ "Keywords", "!= not equal" },
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintInstancedStructLibrary.h" },
		{ "ToolTip", "Checks whether two InstancedStructs are not equal." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_A;
	static const UECodeGen_Private::FStructPropertyParams NewProp_B;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintInstancedStructLibrary_NotEqual_InstancedStruct_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintInstancedStructLibrary_eventNotEqual_InstancedStruct_Parms, A), Z_Construct_UScriptStruct_FInstancedStruct, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_A_MetaData), NewProp_A_MetaData) }; // 111383296
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintInstancedStructLibrary_NotEqual_InstancedStruct_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintInstancedStructLibrary_eventNotEqual_InstancedStruct_Parms, B), Z_Construct_UScriptStruct_FInstancedStruct, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_B_MetaData), NewProp_B_MetaData) }; // 111383296
void Z_Construct_UFunction_UBlueprintInstancedStructLibrary_NotEqual_InstancedStruct_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((BlueprintInstancedStructLibrary_eventNotEqual_InstancedStruct_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBlueprintInstancedStructLibrary_NotEqual_InstancedStruct_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BlueprintInstancedStructLibrary_eventNotEqual_InstancedStruct_Parms), &Z_Construct_UFunction_UBlueprintInstancedStructLibrary_NotEqual_InstancedStruct_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintInstancedStructLibrary_NotEqual_InstancedStruct_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintInstancedStructLibrary_NotEqual_InstancedStruct_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintInstancedStructLibrary_NotEqual_InstancedStruct_Statics::NewProp_B,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintInstancedStructLibrary_NotEqual_InstancedStruct_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintInstancedStructLibrary_NotEqual_InstancedStruct_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintInstancedStructLibrary_NotEqual_InstancedStruct_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintInstancedStructLibrary, nullptr, "NotEqual_InstancedStruct", nullptr, nullptr, Z_Construct_UFunction_UBlueprintInstancedStructLibrary_NotEqual_InstancedStruct_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintInstancedStructLibrary_NotEqual_InstancedStruct_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlueprintInstancedStructLibrary_NotEqual_InstancedStruct_Statics::BlueprintInstancedStructLibrary_eventNotEqual_InstancedStruct_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintInstancedStructLibrary_NotEqual_InstancedStruct_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlueprintInstancedStructLibrary_NotEqual_InstancedStruct_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBlueprintInstancedStructLibrary_NotEqual_InstancedStruct_Statics::BlueprintInstancedStructLibrary_eventNotEqual_InstancedStruct_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlueprintInstancedStructLibrary_NotEqual_InstancedStruct()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintInstancedStructLibrary_NotEqual_InstancedStruct_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBlueprintInstancedStructLibrary::execNotEqual_InstancedStruct)
{
	P_GET_STRUCT_REF(FInstancedStruct,Z_Param_Out_A);
	P_GET_STRUCT_REF(FInstancedStruct,Z_Param_Out_B);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UBlueprintInstancedStructLibrary::NotEqual_InstancedStruct(Z_Param_Out_A,Z_Param_Out_B);
	P_NATIVE_END;
}
// End Class UBlueprintInstancedStructLibrary Function NotEqual_InstancedStruct

// Begin Class UBlueprintInstancedStructLibrary Function Reset
struct Z_Construct_UFunction_UBlueprintInstancedStructLibrary_Reset_Statics
{
	struct BlueprintInstancedStructLibrary_eventReset_Parms
	{
		FInstancedStruct InstancedStruct;
		const UScriptStruct* StructType;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "1" },
		{ "Category", "Utilities|Instanced Struct" },
		{ "Comment", "/**\n\x09 * Resets an InstancedStruct.\n\x09 */" },
		{ "CPP_Default_StructType", "None" },
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintInstancedStructLibrary.h" },
		{ "ToolTip", "Resets an InstancedStruct." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StructType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InstancedStruct;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StructType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintInstancedStructLibrary_Reset_Statics::NewProp_InstancedStruct = { "InstancedStruct", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintInstancedStructLibrary_eventReset_Parms, InstancedStruct), Z_Construct_UScriptStruct_FInstancedStruct, METADATA_PARAMS(0, nullptr) }; // 111383296
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBlueprintInstancedStructLibrary_Reset_Statics::NewProp_StructType = { "StructType", nullptr, (EPropertyFlags)0x0010040000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintInstancedStructLibrary_eventReset_Parms, StructType), Z_Construct_UClass_UScriptStruct, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StructType_MetaData), NewProp_StructType_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintInstancedStructLibrary_Reset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintInstancedStructLibrary_Reset_Statics::NewProp_InstancedStruct,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintInstancedStructLibrary_Reset_Statics::NewProp_StructType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintInstancedStructLibrary_Reset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintInstancedStructLibrary_Reset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintInstancedStructLibrary, nullptr, "Reset", nullptr, nullptr, Z_Construct_UFunction_UBlueprintInstancedStructLibrary_Reset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintInstancedStructLibrary_Reset_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlueprintInstancedStructLibrary_Reset_Statics::BlueprintInstancedStructLibrary_eventReset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintInstancedStructLibrary_Reset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlueprintInstancedStructLibrary_Reset_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBlueprintInstancedStructLibrary_Reset_Statics::BlueprintInstancedStructLibrary_eventReset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlueprintInstancedStructLibrary_Reset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintInstancedStructLibrary_Reset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBlueprintInstancedStructLibrary::execReset)
{
	P_GET_STRUCT_REF(FInstancedStruct,Z_Param_Out_InstancedStruct);
	P_GET_OBJECT(UScriptStruct,Z_Param_StructType);
	P_FINISH;
	P_NATIVE_BEGIN;
	UBlueprintInstancedStructLibrary::Reset(Z_Param_Out_InstancedStruct,Z_Param_StructType);
	P_NATIVE_END;
}
// End Class UBlueprintInstancedStructLibrary Function Reset

// Begin Class UBlueprintInstancedStructLibrary Function SetInstancedStructValue
struct Z_Construct_UFunction_UBlueprintInstancedStructLibrary_SetInstancedStructValue_Statics
{
	struct BlueprintInstancedStructLibrary_eventSetInstancedStructValue_Parms
	{
		FInstancedStruct InstancedStruct;
		int32 Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Utilities|Instanced Struct" },
		{ "Comment", "/**\n\x09 * Sets the value of InstancedStruct from the given source value.\n\x09 */" },
		{ "CustomStructureParam", "Value" },
		{ "CustomThunk", "true" },
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintInstancedStructLibrary.h" },
		{ "ToolTip", "Sets the value of InstancedStruct from the given source value." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InstancedStruct;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintInstancedStructLibrary_SetInstancedStructValue_Statics::NewProp_InstancedStruct = { "InstancedStruct", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintInstancedStructLibrary_eventSetInstancedStructValue_Parms, InstancedStruct), Z_Construct_UScriptStruct_FInstancedStruct, METADATA_PARAMS(0, nullptr) }; // 111383296
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintInstancedStructLibrary_SetInstancedStructValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintInstancedStructLibrary_eventSetInstancedStructValue_Parms, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintInstancedStructLibrary_SetInstancedStructValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintInstancedStructLibrary_SetInstancedStructValue_Statics::NewProp_InstancedStruct,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintInstancedStructLibrary_SetInstancedStructValue_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintInstancedStructLibrary_SetInstancedStructValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintInstancedStructLibrary_SetInstancedStructValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintInstancedStructLibrary, nullptr, "SetInstancedStructValue", nullptr, nullptr, Z_Construct_UFunction_UBlueprintInstancedStructLibrary_SetInstancedStructValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintInstancedStructLibrary_SetInstancedStructValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlueprintInstancedStructLibrary_SetInstancedStructValue_Statics::BlueprintInstancedStructLibrary_eventSetInstancedStructValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintInstancedStructLibrary_SetInstancedStructValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlueprintInstancedStructLibrary_SetInstancedStructValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBlueprintInstancedStructLibrary_SetInstancedStructValue_Statics::BlueprintInstancedStructLibrary_eventSetInstancedStructValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlueprintInstancedStructLibrary_SetInstancedStructValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintInstancedStructLibrary_SetInstancedStructValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UBlueprintInstancedStructLibrary Function SetInstancedStructValue

// Begin Class UBlueprintInstancedStructLibrary
void UBlueprintInstancedStructLibrary::StaticRegisterNativesUBlueprintInstancedStructLibrary()
{
	UClass* Class = UBlueprintInstancedStructLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "EqualEqual_InstancedStruct", &UBlueprintInstancedStructLibrary::execEqualEqual_InstancedStruct },
		{ "GetInstancedStructValue", &UBlueprintInstancedStructLibrary::execGetInstancedStructValue },
		{ "IsInstancedStructValid", &UBlueprintInstancedStructLibrary::execIsInstancedStructValid },
		{ "IsValid_InstancedStruct", &UBlueprintInstancedStructLibrary::execIsValid_InstancedStruct },
		{ "MakeInstancedStruct", &UBlueprintInstancedStructLibrary::execMakeInstancedStruct },
		{ "NotEqual_InstancedStruct", &UBlueprintInstancedStructLibrary::execNotEqual_InstancedStruct },
		{ "Reset", &UBlueprintInstancedStructLibrary::execReset },
		{ "SetInstancedStructValue", &UBlueprintInstancedStructLibrary::execSetInstancedStructValue },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBlueprintInstancedStructLibrary);
UClass* Z_Construct_UClass_UBlueprintInstancedStructLibrary_NoRegister()
{
	return UBlueprintInstancedStructLibrary::StaticClass();
}
struct Z_Construct_UClass_UBlueprintInstancedStructLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Kismet/BlueprintInstancedStructLibrary.h" },
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintInstancedStructLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBlueprintInstancedStructLibrary_EqualEqual_InstancedStruct, "EqualEqual_InstancedStruct" }, // 1074997876
		{ &Z_Construct_UFunction_UBlueprintInstancedStructLibrary_GetInstancedStructValue, "GetInstancedStructValue" }, // 227758579
		{ &Z_Construct_UFunction_UBlueprintInstancedStructLibrary_IsInstancedStructValid, "IsInstancedStructValid" }, // 3734026026
		{ &Z_Construct_UFunction_UBlueprintInstancedStructLibrary_IsValid_InstancedStruct, "IsValid_InstancedStruct" }, // 2741758409
		{ &Z_Construct_UFunction_UBlueprintInstancedStructLibrary_MakeInstancedStruct, "MakeInstancedStruct" }, // 3914435764
		{ &Z_Construct_UFunction_UBlueprintInstancedStructLibrary_NotEqual_InstancedStruct, "NotEqual_InstancedStruct" }, // 695256665
		{ &Z_Construct_UFunction_UBlueprintInstancedStructLibrary_Reset, "Reset" }, // 3738145300
		{ &Z_Construct_UFunction_UBlueprintInstancedStructLibrary_SetInstancedStructValue, "SetInstancedStructValue" }, // 2738339332
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlueprintInstancedStructLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBlueprintInstancedStructLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintInstancedStructLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBlueprintInstancedStructLibrary_Statics::ClassParams = {
	&UBlueprintInstancedStructLibrary::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintInstancedStructLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UBlueprintInstancedStructLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBlueprintInstancedStructLibrary()
{
	if (!Z_Registration_Info_UClass_UBlueprintInstancedStructLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBlueprintInstancedStructLibrary.OuterSingleton, Z_Construct_UClass_UBlueprintInstancedStructLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBlueprintInstancedStructLibrary.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UBlueprintInstancedStructLibrary>()
{
	return UBlueprintInstancedStructLibrary::StaticClass();
}
UBlueprintInstancedStructLibrary::UBlueprintInstancedStructLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBlueprintInstancedStructLibrary);
UBlueprintInstancedStructLibrary::~UBlueprintInstancedStructLibrary() {}
// End Class UBlueprintInstancedStructLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintInstancedStructLibrary_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EStructUtilsResult_StaticEnum, TEXT("EStructUtilsResult"), &Z_Registration_Info_UEnum_EStructUtilsResult, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1490149719U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBlueprintInstancedStructLibrary, UBlueprintInstancedStructLibrary::StaticClass, TEXT("UBlueprintInstancedStructLibrary"), &Z_Registration_Info_UClass_UBlueprintInstancedStructLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBlueprintInstancedStructLibrary), 2430762197U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintInstancedStructLibrary_h_3026668874(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintInstancedStructLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintInstancedStructLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintInstancedStructLibrary_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintInstancedStructLibrary_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
