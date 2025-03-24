// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayCameras/Public/GameFramework/BlueprintCameraVariableTable.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlueprintCameraVariableTable() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector4();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UBlueprintCameraVariableTableFunctionLibrary();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UBlueprintCameraVariableTableFunctionLibrary_NoRegister();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UBooleanCameraVariable_NoRegister();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UDoubleCameraVariable_NoRegister();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UFloatCameraVariable_NoRegister();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UInteger32CameraVariable_NoRegister();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_URotator3dCameraVariable_NoRegister();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UTransform3dCameraVariable_NoRegister();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UVector2dCameraVariable_NoRegister();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UVector3dCameraVariable_NoRegister();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UVector4dCameraVariable_NoRegister();
GAMEPLAYCAMERAS_API UScriptStruct* Z_Construct_UScriptStruct_FBlueprintCameraVariableTable();
UPackage* Z_Construct_UPackage__Script_GameplayCameras();
// End Cross Module References

// Begin ScriptStruct FBlueprintCameraVariableTable
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BlueprintCameraVariableTable;
class UScriptStruct* FBlueprintCameraVariableTable::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BlueprintCameraVariableTable.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BlueprintCameraVariableTable.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBlueprintCameraVariableTable, (UObject*)Z_Construct_UPackage__Script_GameplayCameras(), TEXT("BlueprintCameraVariableTable"));
	}
	return Z_Registration_Info_UScriptStruct_BlueprintCameraVariableTable.OuterSingleton;
}
template<> GAMEPLAYCAMERAS_API UScriptStruct* StaticStruct<FBlueprintCameraVariableTable>()
{
	return FBlueprintCameraVariableTable::StaticStruct();
}
struct Z_Construct_UScriptStruct_FBlueprintCameraVariableTable_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Provides access to a camera variable table. */" },
		{ "DisplayName", "Camera Variable Table" },
		{ "ModuleRelativePath", "Public/GameFramework/BlueprintCameraVariableTable.h" },
		{ "ToolTip", "Provides access to a camera variable table." },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBlueprintCameraVariableTable>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBlueprintCameraVariableTable_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayCameras,
	nullptr,
	&NewStructOps,
	"BlueprintCameraVariableTable",
	nullptr,
	0,
	sizeof(FBlueprintCameraVariableTable),
	alignof(FBlueprintCameraVariableTable),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintCameraVariableTable_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FBlueprintCameraVariableTable_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FBlueprintCameraVariableTable()
{
	if (!Z_Registration_Info_UScriptStruct_BlueprintCameraVariableTable.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BlueprintCameraVariableTable.InnerSingleton, Z_Construct_UScriptStruct_FBlueprintCameraVariableTable_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_BlueprintCameraVariableTable.InnerSingleton;
}
// End ScriptStruct FBlueprintCameraVariableTable

// Begin Class UBlueprintCameraVariableTableFunctionLibrary Function GetBooleanCameraVariable
struct Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_GetBooleanCameraVariable_Statics
{
	struct BlueprintCameraVariableTableFunctionLibrary_eventGetBooleanCameraVariable_Parms
	{
		FBlueprintCameraVariableTable VariableTable;
		UBooleanCameraVariable* Variable;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Gets a camera variable's value from the given table. */" },
		{ "CompactNodeTitle", "Get Boolean Variable" },
		{ "DisplayName", "Get Boolean Variable" },
		{ "ModuleRelativePath", "Public/GameFramework/BlueprintCameraVariableTable.h" },
		{ "ToolTip", "Gets a camera variable's value from the given table." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VariableTable_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_VariableTable;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Variable;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_GetBooleanCameraVariable_Statics::NewProp_VariableTable = { "VariableTable", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintCameraVariableTableFunctionLibrary_eventGetBooleanCameraVariable_Parms, VariableTable), Z_Construct_UScriptStruct_FBlueprintCameraVariableTable, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VariableTable_MetaData), NewProp_VariableTable_MetaData) }; // 2718450583
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_GetBooleanCameraVariable_Statics::NewProp_Variable = { "Variable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintCameraVariableTableFunctionLibrary_eventGetBooleanCameraVariable_Parms, Variable), Z_Construct_UClass_UBooleanCameraVariable_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_GetBooleanCameraVariable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((BlueprintCameraVariableTableFunctionLibrary_eventGetBooleanCameraVariable_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_GetBooleanCameraVariable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BlueprintCameraVariableTableFunctionLibrary_eventGetBooleanCameraVariable_Parms), &Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_GetBooleanCameraVariable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_GetBooleanCameraVariable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_GetBooleanCameraVariable_Statics::NewProp_VariableTable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_GetBooleanCameraVariable_Statics::NewProp_Variable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_GetBooleanCameraVariable_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_GetBooleanCameraVariable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_GetBooleanCameraVariable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintCameraVariableTableFunctionLibrary, nullptr, "GetBooleanCameraVariable", nullptr, nullptr, Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_GetBooleanCameraVariable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_GetBooleanCameraVariable_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_GetBooleanCameraVariable_Statics::BlueprintCameraVariableTableFunctionLibrary_eventGetBooleanCameraVariable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_GetBooleanCameraVariable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_GetBooleanCameraVariable_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_GetBooleanCameraVariable_Statics::BlueprintCameraVariableTableFunctionLibrary_eventGetBooleanCameraVariable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_GetBooleanCameraVariable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_GetBooleanCameraVariable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBlueprintCameraVariableTableFunctionLibrary::execGetBooleanCameraVariable)
{
	P_GET_STRUCT_REF(FBlueprintCameraVariableTable,Z_Param_Out_VariableTable);
	P_GET_OBJECT(UBooleanCameraVariable,Z_Param_Variable);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UBlueprintCameraVariableTableFunctionLibrary::GetBooleanCameraVariable(Z_Param_Out_VariableTable,Z_Param_Variable);
	P_NATIVE_END;
}
// End Class UBlueprintCameraVariableTableFunctionLibrary Function GetBooleanCameraVariable

// Begin Class UBlueprintCameraVariableTableFunctionLibrary Function GetDoubleCameraVariable
struct Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_GetDoubleCameraVariable_Statics
{
	struct BlueprintCameraVariableTableFunctionLibrary_eventGetDoubleCameraVariable_Parms
	{
		FBlueprintCameraVariableTable VariableTable;
		UDoubleCameraVariable* Variable;
		double ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Gets a camera variable's value from the given table. */" },
		{ "CompactNodeTitle", "Get Double Variable" },
		{ "DisplayName", "Get Double Variable" },
		{ "ModuleRelativePath", "Public/GameFramework/BlueprintCameraVariableTable.h" },
		{ "ToolTip", "Gets a camera variable's value from the given table." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VariableTable_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_VariableTable;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Variable;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_GetDoubleCameraVariable_Statics::NewProp_VariableTable = { "VariableTable", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintCameraVariableTableFunctionLibrary_eventGetDoubleCameraVariable_Parms, VariableTable), Z_Construct_UScriptStruct_FBlueprintCameraVariableTable, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VariableTable_MetaData), NewProp_VariableTable_MetaData) }; // 2718450583
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_GetDoubleCameraVariable_Statics::NewProp_Variable = { "Variable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintCameraVariableTableFunctionLibrary_eventGetDoubleCameraVariable_Parms, Variable), Z_Construct_UClass_UDoubleCameraVariable_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_GetDoubleCameraVariable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintCameraVariableTableFunctionLibrary_eventGetDoubleCameraVariable_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_GetDoubleCameraVariable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_GetDoubleCameraVariable_Statics::NewProp_VariableTable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_GetDoubleCameraVariable_Statics::NewProp_Variable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_GetDoubleCameraVariable_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_GetDoubleCameraVariable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_GetDoubleCameraVariable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintCameraVariableTableFunctionLibrary, nullptr, "GetDoubleCameraVariable", nullptr, nullptr, Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_GetDoubleCameraVariable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_GetDoubleCameraVariable_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_GetDoubleCameraVariable_Statics::BlueprintCameraVariableTableFunctionLibrary_eventGetDoubleCameraVariable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_GetDoubleCameraVariable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_GetDoubleCameraVariable_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_GetDoubleCameraVariable_Statics::BlueprintCameraVariableTableFunctionLibrary_eventGetDoubleCameraVariable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_GetDoubleCameraVariable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_GetDoubleCameraVariable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBlueprintCameraVariableTableFunctionLibrary::execGetDoubleCameraVariable)
{
	P_GET_STRUCT_REF(FBlueprintCameraVariableTable,Z_Param_Out_VariableTable);
	P_GET_OBJECT(UDoubleCameraVariable,Z_Param_Variable);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(double*)Z_Param__Result=UBlueprintCameraVariableTableFunctionLibrary::GetDoubleCameraVariable(Z_Param_Out_VariableTable,Z_Param_Variable);
	P_NATIVE_END;
}
// End Class UBlueprintCameraVariableTableFunctionLibrary Function GetDoubleCameraVariable

// Begin Class UBlueprintCameraVariableTableFunctionLibrary Function GetFloatCameraVariable
struct Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_GetFloatCameraVariable_Statics
{
	struct BlueprintCameraVariableTableFunctionLibrary_eventGetFloatCameraVariable_Parms
	{
		FBlueprintCameraVariableTable VariableTable;
		UFloatCameraVariable* Variable;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Gets a camera variable's value from the given table. */" },
		{ "CompactNodeTitle", "Get Float Variable" },
		{ "DisplayName", "Get Float Variable" },
		{ "ModuleRelativePath", "Public/GameFramework/BlueprintCameraVariableTable.h" },
		{ "ToolTip", "Gets a camera variable's value from the given table." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VariableTable_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_VariableTable;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Variable;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_GetFloatCameraVariable_Statics::NewProp_VariableTable = { "VariableTable", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintCameraVariableTableFunctionLibrary_eventGetFloatCameraVariable_Parms, VariableTable), Z_Construct_UScriptStruct_FBlueprintCameraVariableTable, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VariableTable_MetaData), NewProp_VariableTable_MetaData) }; // 2718450583
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_GetFloatCameraVariable_Statics::NewProp_Variable = { "Variable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintCameraVariableTableFunctionLibrary_eventGetFloatCameraVariable_Parms, Variable), Z_Construct_UClass_UFloatCameraVariable_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_GetFloatCameraVariable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintCameraVariableTableFunctionLibrary_eventGetFloatCameraVariable_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_GetFloatCameraVariable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_GetFloatCameraVariable_Statics::NewProp_VariableTable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_GetFloatCameraVariable_Statics::NewProp_Variable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_GetFloatCameraVariable_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_GetFloatCameraVariable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_GetFloatCameraVariable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintCameraVariableTableFunctionLibrary, nullptr, "GetFloatCameraVariable", nullptr, nullptr, Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_GetFloatCameraVariable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_GetFloatCameraVariable_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_GetFloatCameraVariable_Statics::BlueprintCameraVariableTableFunctionLibrary_eventGetFloatCameraVariable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_GetFloatCameraVariable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_GetFloatCameraVariable_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_GetFloatCameraVariable_Statics::BlueprintCameraVariableTableFunctionLibrary_eventGetFloatCameraVariable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_GetFloatCameraVariable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_GetFloatCameraVariable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBlueprintCameraVariableTableFunctionLibrary::execGetFloatCameraVariable)
{
	P_GET_STRUCT_REF(FBlueprintCameraVariableTable,Z_Param_Out_VariableTable);
	P_GET_OBJECT(UFloatCameraVariable,Z_Param_Variable);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UBlueprintCameraVariableTableFunctionLibrary::GetFloatCameraVariable(Z_Param_Out_VariableTable,Z_Param_Variable);
	P_NATIVE_END;
}
// End Class UBlueprintCameraVariableTableFunctionLibrary Function GetFloatCameraVariable

// Begin Class UBlueprintCameraVariableTableFunctionLibrary Function GetInteger32CameraVariable
struct Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_GetInteger32CameraVariable_Statics
{
	struct BlueprintCameraVariableTableFunctionLibrary_eventGetInteger32CameraVariable_Parms
	{
		FBlueprintCameraVariableTable VariableTable;
		UInteger32CameraVariable* Variable;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Gets a camera variable's value from the given table. */" },
		{ "CompactNodeTitle", "Get Integer Variable" },
		{ "DisplayName", "Get Integer Variable" },
		{ "ModuleRelativePath", "Public/GameFramework/BlueprintCameraVariableTable.h" },
		{ "ToolTip", "Gets a camera variable's value from the given table." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VariableTable_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_VariableTable;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Variable;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_GetInteger32CameraVariable_Statics::NewProp_VariableTable = { "VariableTable", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintCameraVariableTableFunctionLibrary_eventGetInteger32CameraVariable_Parms, VariableTable), Z_Construct_UScriptStruct_FBlueprintCameraVariableTable, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VariableTable_MetaData), NewProp_VariableTable_MetaData) }; // 2718450583
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_GetInteger32CameraVariable_Statics::NewProp_Variable = { "Variable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintCameraVariableTableFunctionLibrary_eventGetInteger32CameraVariable_Parms, Variable), Z_Construct_UClass_UInteger32CameraVariable_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_GetInteger32CameraVariable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintCameraVariableTableFunctionLibrary_eventGetInteger32CameraVariable_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_GetInteger32CameraVariable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_GetInteger32CameraVariable_Statics::NewProp_VariableTable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_GetInteger32CameraVariable_Statics::NewProp_Variable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_GetInteger32CameraVariable_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_GetInteger32CameraVariable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_GetInteger32CameraVariable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintCameraVariableTableFunctionLibrary, nullptr, "GetInteger32CameraVariable", nullptr, nullptr, Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_GetInteger32CameraVariable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_GetInteger32CameraVariable_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_GetInteger32CameraVariable_Statics::BlueprintCameraVariableTableFunctionLibrary_eventGetInteger32CameraVariable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_GetInteger32CameraVariable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_GetInteger32CameraVariable_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_GetInteger32CameraVariable_Statics::BlueprintCameraVariableTableFunctionLibrary_eventGetInteger32CameraVariable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_GetInteger32CameraVariable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_GetInteger32CameraVariable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBlueprintCameraVariableTableFunctionLibrary::execGetInteger32CameraVariable)
{
	P_GET_STRUCT_REF(FBlueprintCameraVariableTable,Z_Param_Out_VariableTable);
	P_GET_OBJECT(UInteger32CameraVariable,Z_Param_Variable);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UBlueprintCameraVariableTableFunctionLibrary::GetInteger32CameraVariable(Z_Param_Out_VariableTable,Z_Param_Variable);
	P_NATIVE_END;
}
// End Class UBlueprintCameraVariableTableFunctionLibrary Function GetInteger32CameraVariable

// Begin Class UBlueprintCameraVariableTableFunctionLibrary Function GetRotatorCameraVariable
struct Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_GetRotatorCameraVariable_Statics
{
	struct BlueprintCameraVariableTableFunctionLibrary_eventGetRotatorCameraVariable_Parms
	{
		FBlueprintCameraVariableTable VariableTable;
		URotator3dCameraVariable* Variable;
		FRotator ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Gets a camera variable's value from the given table. */" },
		{ "CompactNodeTitle", "Get Rotator Variable" },
		{ "DisplayName", "Get Rotator Variable" },
		{ "ModuleRelativePath", "Public/GameFramework/BlueprintCameraVariableTable.h" },
		{ "ToolTip", "Gets a camera variable's value from the given table." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VariableTable_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_VariableTable;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Variable;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_GetRotatorCameraVariable_Statics::NewProp_VariableTable = { "VariableTable", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintCameraVariableTableFunctionLibrary_eventGetRotatorCameraVariable_Parms, VariableTable), Z_Construct_UScriptStruct_FBlueprintCameraVariableTable, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VariableTable_MetaData), NewProp_VariableTable_MetaData) }; // 2718450583
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_GetRotatorCameraVariable_Statics::NewProp_Variable = { "Variable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintCameraVariableTableFunctionLibrary_eventGetRotatorCameraVariable_Parms, Variable), Z_Construct_UClass_URotator3dCameraVariable_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_GetRotatorCameraVariable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintCameraVariableTableFunctionLibrary_eventGetRotatorCameraVariable_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_GetRotatorCameraVariable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_GetRotatorCameraVariable_Statics::NewProp_VariableTable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_GetRotatorCameraVariable_Statics::NewProp_Variable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_GetRotatorCameraVariable_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_GetRotatorCameraVariable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_GetRotatorCameraVariable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintCameraVariableTableFunctionLibrary, nullptr, "GetRotatorCameraVariable", nullptr, nullptr, Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_GetRotatorCameraVariable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_GetRotatorCameraVariable_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_GetRotatorCameraVariable_Statics::BlueprintCameraVariableTableFunctionLibrary_eventGetRotatorCameraVariable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_GetRotatorCameraVariable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_GetRotatorCameraVariable_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_GetRotatorCameraVariable_Statics::BlueprintCameraVariableTableFunctionLibrary_eventGetRotatorCameraVariable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_GetRotatorCameraVariable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_GetRotatorCameraVariable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBlueprintCameraVariableTableFunctionLibrary::execGetRotatorCameraVariable)
{
	P_GET_STRUCT_REF(FBlueprintCameraVariableTable,Z_Param_Out_VariableTable);
	P_GET_OBJECT(URotator3dCameraVariable,Z_Param_Variable);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FRotator*)Z_Param__Result=UBlueprintCameraVariableTableFunctionLibrary::GetRotatorCameraVariable(Z_Param_Out_VariableTable,Z_Param_Variable);
	P_NATIVE_END;
}
// End Class UBlueprintCameraVariableTableFunctionLibrary Function GetRotatorCameraVariable

// Begin Class UBlueprintCameraVariableTableFunctionLibrary Function GetTransformCameraVariable
struct Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_GetTransformCameraVariable_Statics
{
	struct BlueprintCameraVariableTableFunctionLibrary_eventGetTransformCameraVariable_Parms
	{
		FBlueprintCameraVariableTable VariableTable;
		UTransform3dCameraVariable* Variable;
		FTransform ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Gets a camera variable's value from the given table. */" },
		{ "CompactNodeTitle", "Get Transform Variable" },
		{ "DisplayName", "Get Transform Variable" },
		{ "ModuleRelativePath", "Public/GameFramework/BlueprintCameraVariableTable.h" },
		{ "ToolTip", "Gets a camera variable's value from the given table." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VariableTable_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_VariableTable;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Variable;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_GetTransformCameraVariable_Statics::NewProp_VariableTable = { "VariableTable", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintCameraVariableTableFunctionLibrary_eventGetTransformCameraVariable_Parms, VariableTable), Z_Construct_UScriptStruct_FBlueprintCameraVariableTable, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VariableTable_MetaData), NewProp_VariableTable_MetaData) }; // 2718450583
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_GetTransformCameraVariable_Statics::NewProp_Variable = { "Variable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintCameraVariableTableFunctionLibrary_eventGetTransformCameraVariable_Parms, Variable), Z_Construct_UClass_UTransform3dCameraVariable_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_GetTransformCameraVariable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintCameraVariableTableFunctionLibrary_eventGetTransformCameraVariable_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_GetTransformCameraVariable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_GetTransformCameraVariable_Statics::NewProp_VariableTable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_GetTransformCameraVariable_Statics::NewProp_Variable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_GetTransformCameraVariable_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_GetTransformCameraVariable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_GetTransformCameraVariable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintCameraVariableTableFunctionLibrary, nullptr, "GetTransformCameraVariable", nullptr, nullptr, Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_GetTransformCameraVariable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_GetTransformCameraVariable_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_GetTransformCameraVariable_Statics::BlueprintCameraVariableTableFunctionLibrary_eventGetTransformCameraVariable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_GetTransformCameraVariable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_GetTransformCameraVariable_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_GetTransformCameraVariable_Statics::BlueprintCameraVariableTableFunctionLibrary_eventGetTransformCameraVariable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_GetTransformCameraVariable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_GetTransformCameraVariable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBlueprintCameraVariableTableFunctionLibrary::execGetTransformCameraVariable)
{
	P_GET_STRUCT_REF(FBlueprintCameraVariableTable,Z_Param_Out_VariableTable);
	P_GET_OBJECT(UTransform3dCameraVariable,Z_Param_Variable);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FTransform*)Z_Param__Result=UBlueprintCameraVariableTableFunctionLibrary::GetTransformCameraVariable(Z_Param_Out_VariableTable,Z_Param_Variable);
	P_NATIVE_END;
}
// End Class UBlueprintCameraVariableTableFunctionLibrary Function GetTransformCameraVariable

// Begin Class UBlueprintCameraVariableTableFunctionLibrary Function GetVector2CameraVariable
struct Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_GetVector2CameraVariable_Statics
{
	struct BlueprintCameraVariableTableFunctionLibrary_eventGetVector2CameraVariable_Parms
	{
		FBlueprintCameraVariableTable VariableTable;
		UVector2dCameraVariable* Variable;
		FVector2D ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Gets a camera variable's value from the given table. */" },
		{ "CompactNodeTitle", "Get Vector 2D Variable" },
		{ "DisplayName", "Get Vector 2D Variable" },
		{ "ModuleRelativePath", "Public/GameFramework/BlueprintCameraVariableTable.h" },
		{ "ToolTip", "Gets a camera variable's value from the given table." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VariableTable_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_VariableTable;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Variable;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_GetVector2CameraVariable_Statics::NewProp_VariableTable = { "VariableTable", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintCameraVariableTableFunctionLibrary_eventGetVector2CameraVariable_Parms, VariableTable), Z_Construct_UScriptStruct_FBlueprintCameraVariableTable, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VariableTable_MetaData), NewProp_VariableTable_MetaData) }; // 2718450583
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_GetVector2CameraVariable_Statics::NewProp_Variable = { "Variable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintCameraVariableTableFunctionLibrary_eventGetVector2CameraVariable_Parms, Variable), Z_Construct_UClass_UVector2dCameraVariable_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_GetVector2CameraVariable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintCameraVariableTableFunctionLibrary_eventGetVector2CameraVariable_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_GetVector2CameraVariable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_GetVector2CameraVariable_Statics::NewProp_VariableTable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_GetVector2CameraVariable_Statics::NewProp_Variable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_GetVector2CameraVariable_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_GetVector2CameraVariable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_GetVector2CameraVariable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintCameraVariableTableFunctionLibrary, nullptr, "GetVector2CameraVariable", nullptr, nullptr, Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_GetVector2CameraVariable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_GetVector2CameraVariable_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_GetVector2CameraVariable_Statics::BlueprintCameraVariableTableFunctionLibrary_eventGetVector2CameraVariable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_GetVector2CameraVariable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_GetVector2CameraVariable_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_GetVector2CameraVariable_Statics::BlueprintCameraVariableTableFunctionLibrary_eventGetVector2CameraVariable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_GetVector2CameraVariable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_GetVector2CameraVariable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBlueprintCameraVariableTableFunctionLibrary::execGetVector2CameraVariable)
{
	P_GET_STRUCT_REF(FBlueprintCameraVariableTable,Z_Param_Out_VariableTable);
	P_GET_OBJECT(UVector2dCameraVariable,Z_Param_Variable);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector2D*)Z_Param__Result=UBlueprintCameraVariableTableFunctionLibrary::GetVector2CameraVariable(Z_Param_Out_VariableTable,Z_Param_Variable);
	P_NATIVE_END;
}
// End Class UBlueprintCameraVariableTableFunctionLibrary Function GetVector2CameraVariable

// Begin Class UBlueprintCameraVariableTableFunctionLibrary Function GetVector3CameraVariable
struct Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_GetVector3CameraVariable_Statics
{
	struct BlueprintCameraVariableTableFunctionLibrary_eventGetVector3CameraVariable_Parms
	{
		FBlueprintCameraVariableTable VariableTable;
		UVector3dCameraVariable* Variable;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Gets a camera variable's value from the given table. */" },
		{ "CompactNodeTitle", "Get Vector Variable" },
		{ "DisplayName", "Get Vector Variable" },
		{ "ModuleRelativePath", "Public/GameFramework/BlueprintCameraVariableTable.h" },
		{ "ToolTip", "Gets a camera variable's value from the given table." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VariableTable_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_VariableTable;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Variable;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_GetVector3CameraVariable_Statics::NewProp_VariableTable = { "VariableTable", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintCameraVariableTableFunctionLibrary_eventGetVector3CameraVariable_Parms, VariableTable), Z_Construct_UScriptStruct_FBlueprintCameraVariableTable, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VariableTable_MetaData), NewProp_VariableTable_MetaData) }; // 2718450583
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_GetVector3CameraVariable_Statics::NewProp_Variable = { "Variable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintCameraVariableTableFunctionLibrary_eventGetVector3CameraVariable_Parms, Variable), Z_Construct_UClass_UVector3dCameraVariable_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_GetVector3CameraVariable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintCameraVariableTableFunctionLibrary_eventGetVector3CameraVariable_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_GetVector3CameraVariable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_GetVector3CameraVariable_Statics::NewProp_VariableTable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_GetVector3CameraVariable_Statics::NewProp_Variable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_GetVector3CameraVariable_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_GetVector3CameraVariable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_GetVector3CameraVariable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintCameraVariableTableFunctionLibrary, nullptr, "GetVector3CameraVariable", nullptr, nullptr, Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_GetVector3CameraVariable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_GetVector3CameraVariable_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_GetVector3CameraVariable_Statics::BlueprintCameraVariableTableFunctionLibrary_eventGetVector3CameraVariable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_GetVector3CameraVariable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_GetVector3CameraVariable_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_GetVector3CameraVariable_Statics::BlueprintCameraVariableTableFunctionLibrary_eventGetVector3CameraVariable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_GetVector3CameraVariable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_GetVector3CameraVariable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBlueprintCameraVariableTableFunctionLibrary::execGetVector3CameraVariable)
{
	P_GET_STRUCT_REF(FBlueprintCameraVariableTable,Z_Param_Out_VariableTable);
	P_GET_OBJECT(UVector3dCameraVariable,Z_Param_Variable);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=UBlueprintCameraVariableTableFunctionLibrary::GetVector3CameraVariable(Z_Param_Out_VariableTable,Z_Param_Variable);
	P_NATIVE_END;
}
// End Class UBlueprintCameraVariableTableFunctionLibrary Function GetVector3CameraVariable

// Begin Class UBlueprintCameraVariableTableFunctionLibrary Function GetVector4CameraVariable
struct Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_GetVector4CameraVariable_Statics
{
	struct BlueprintCameraVariableTableFunctionLibrary_eventGetVector4CameraVariable_Parms
	{
		FBlueprintCameraVariableTable VariableTable;
		UVector4dCameraVariable* Variable;
		FVector4 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Gets a camera variable's value from the given table. */" },
		{ "CompactNodeTitle", "Get Vector 4 Variable" },
		{ "DisplayName", "Get Vector 4 Variable" },
		{ "ModuleRelativePath", "Public/GameFramework/BlueprintCameraVariableTable.h" },
		{ "ToolTip", "Gets a camera variable's value from the given table." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VariableTable_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_VariableTable;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Variable;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_GetVector4CameraVariable_Statics::NewProp_VariableTable = { "VariableTable", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintCameraVariableTableFunctionLibrary_eventGetVector4CameraVariable_Parms, VariableTable), Z_Construct_UScriptStruct_FBlueprintCameraVariableTable, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VariableTable_MetaData), NewProp_VariableTable_MetaData) }; // 2718450583
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_GetVector4CameraVariable_Statics::NewProp_Variable = { "Variable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintCameraVariableTableFunctionLibrary_eventGetVector4CameraVariable_Parms, Variable), Z_Construct_UClass_UVector4dCameraVariable_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_GetVector4CameraVariable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintCameraVariableTableFunctionLibrary_eventGetVector4CameraVariable_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_GetVector4CameraVariable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_GetVector4CameraVariable_Statics::NewProp_VariableTable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_GetVector4CameraVariable_Statics::NewProp_Variable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_GetVector4CameraVariable_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_GetVector4CameraVariable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_GetVector4CameraVariable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintCameraVariableTableFunctionLibrary, nullptr, "GetVector4CameraVariable", nullptr, nullptr, Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_GetVector4CameraVariable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_GetVector4CameraVariable_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_GetVector4CameraVariable_Statics::BlueprintCameraVariableTableFunctionLibrary_eventGetVector4CameraVariable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_GetVector4CameraVariable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_GetVector4CameraVariable_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_GetVector4CameraVariable_Statics::BlueprintCameraVariableTableFunctionLibrary_eventGetVector4CameraVariable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_GetVector4CameraVariable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_GetVector4CameraVariable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBlueprintCameraVariableTableFunctionLibrary::execGetVector4CameraVariable)
{
	P_GET_STRUCT_REF(FBlueprintCameraVariableTable,Z_Param_Out_VariableTable);
	P_GET_OBJECT(UVector4dCameraVariable,Z_Param_Variable);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector4*)Z_Param__Result=UBlueprintCameraVariableTableFunctionLibrary::GetVector4CameraVariable(Z_Param_Out_VariableTable,Z_Param_Variable);
	P_NATIVE_END;
}
// End Class UBlueprintCameraVariableTableFunctionLibrary Function GetVector4CameraVariable

// Begin Class UBlueprintCameraVariableTableFunctionLibrary Function SetBooleanCameraVariable
struct Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_SetBooleanCameraVariable_Statics
{
	struct BlueprintCameraVariableTableFunctionLibrary_eventSetBooleanCameraVariable_Parms
	{
		FBlueprintCameraVariableTable VariableTable;
		UBooleanCameraVariable* Variable;
		bool Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Sets a camera variable's value in the given table. */" },
		{ "DisplayName", "Set Boolean Variable" },
		{ "ModuleRelativePath", "Public/GameFramework/BlueprintCameraVariableTable.h" },
		{ "ToolTip", "Sets a camera variable's value in the given table." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VariableTable_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_VariableTable;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Variable;
	static void NewProp_Value_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_SetBooleanCameraVariable_Statics::NewProp_VariableTable = { "VariableTable", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintCameraVariableTableFunctionLibrary_eventSetBooleanCameraVariable_Parms, VariableTable), Z_Construct_UScriptStruct_FBlueprintCameraVariableTable, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VariableTable_MetaData), NewProp_VariableTable_MetaData) }; // 2718450583
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_SetBooleanCameraVariable_Statics::NewProp_Variable = { "Variable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintCameraVariableTableFunctionLibrary_eventSetBooleanCameraVariable_Parms, Variable), Z_Construct_UClass_UBooleanCameraVariable_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_SetBooleanCameraVariable_Statics::NewProp_Value_SetBit(void* Obj)
{
	((BlueprintCameraVariableTableFunctionLibrary_eventSetBooleanCameraVariable_Parms*)Obj)->Value = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_SetBooleanCameraVariable_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BlueprintCameraVariableTableFunctionLibrary_eventSetBooleanCameraVariable_Parms), &Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_SetBooleanCameraVariable_Statics::NewProp_Value_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_SetBooleanCameraVariable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_SetBooleanCameraVariable_Statics::NewProp_VariableTable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_SetBooleanCameraVariable_Statics::NewProp_Variable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_SetBooleanCameraVariable_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_SetBooleanCameraVariable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_SetBooleanCameraVariable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintCameraVariableTableFunctionLibrary, nullptr, "SetBooleanCameraVariable", nullptr, nullptr, Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_SetBooleanCameraVariable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_SetBooleanCameraVariable_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_SetBooleanCameraVariable_Statics::BlueprintCameraVariableTableFunctionLibrary_eventSetBooleanCameraVariable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_SetBooleanCameraVariable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_SetBooleanCameraVariable_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_SetBooleanCameraVariable_Statics::BlueprintCameraVariableTableFunctionLibrary_eventSetBooleanCameraVariable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_SetBooleanCameraVariable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_SetBooleanCameraVariable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBlueprintCameraVariableTableFunctionLibrary::execSetBooleanCameraVariable)
{
	P_GET_STRUCT_REF(FBlueprintCameraVariableTable,Z_Param_Out_VariableTable);
	P_GET_OBJECT(UBooleanCameraVariable,Z_Param_Variable);
	P_GET_UBOOL(Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	UBlueprintCameraVariableTableFunctionLibrary::SetBooleanCameraVariable(Z_Param_Out_VariableTable,Z_Param_Variable,Z_Param_Value);
	P_NATIVE_END;
}
// End Class UBlueprintCameraVariableTableFunctionLibrary Function SetBooleanCameraVariable

// Begin Class UBlueprintCameraVariableTableFunctionLibrary Function SetDoubleCameraVariable
struct Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_SetDoubleCameraVariable_Statics
{
	struct BlueprintCameraVariableTableFunctionLibrary_eventSetDoubleCameraVariable_Parms
	{
		FBlueprintCameraVariableTable VariableTable;
		UDoubleCameraVariable* Variable;
		double Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Sets a camera variable's value in the given table. */" },
		{ "DisplayName", "Set Double Variable" },
		{ "ModuleRelativePath", "Public/GameFramework/BlueprintCameraVariableTable.h" },
		{ "ToolTip", "Sets a camera variable's value in the given table." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VariableTable_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_VariableTable;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Variable;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_SetDoubleCameraVariable_Statics::NewProp_VariableTable = { "VariableTable", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintCameraVariableTableFunctionLibrary_eventSetDoubleCameraVariable_Parms, VariableTable), Z_Construct_UScriptStruct_FBlueprintCameraVariableTable, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VariableTable_MetaData), NewProp_VariableTable_MetaData) }; // 2718450583
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_SetDoubleCameraVariable_Statics::NewProp_Variable = { "Variable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintCameraVariableTableFunctionLibrary_eventSetDoubleCameraVariable_Parms, Variable), Z_Construct_UClass_UDoubleCameraVariable_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_SetDoubleCameraVariable_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintCameraVariableTableFunctionLibrary_eventSetDoubleCameraVariable_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_SetDoubleCameraVariable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_SetDoubleCameraVariable_Statics::NewProp_VariableTable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_SetDoubleCameraVariable_Statics::NewProp_Variable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_SetDoubleCameraVariable_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_SetDoubleCameraVariable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_SetDoubleCameraVariable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintCameraVariableTableFunctionLibrary, nullptr, "SetDoubleCameraVariable", nullptr, nullptr, Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_SetDoubleCameraVariable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_SetDoubleCameraVariable_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_SetDoubleCameraVariable_Statics::BlueprintCameraVariableTableFunctionLibrary_eventSetDoubleCameraVariable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_SetDoubleCameraVariable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_SetDoubleCameraVariable_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_SetDoubleCameraVariable_Statics::BlueprintCameraVariableTableFunctionLibrary_eventSetDoubleCameraVariable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_SetDoubleCameraVariable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_SetDoubleCameraVariable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBlueprintCameraVariableTableFunctionLibrary::execSetDoubleCameraVariable)
{
	P_GET_STRUCT_REF(FBlueprintCameraVariableTable,Z_Param_Out_VariableTable);
	P_GET_OBJECT(UDoubleCameraVariable,Z_Param_Variable);
	P_GET_PROPERTY(FDoubleProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	UBlueprintCameraVariableTableFunctionLibrary::SetDoubleCameraVariable(Z_Param_Out_VariableTable,Z_Param_Variable,Z_Param_Value);
	P_NATIVE_END;
}
// End Class UBlueprintCameraVariableTableFunctionLibrary Function SetDoubleCameraVariable

// Begin Class UBlueprintCameraVariableTableFunctionLibrary Function SetFloatCameraVariable
struct Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_SetFloatCameraVariable_Statics
{
	struct BlueprintCameraVariableTableFunctionLibrary_eventSetFloatCameraVariable_Parms
	{
		FBlueprintCameraVariableTable VariableTable;
		UFloatCameraVariable* Variable;
		float Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Sets a camera variable's value in the given table. */" },
		{ "DisplayName", "Set Float Variable" },
		{ "ModuleRelativePath", "Public/GameFramework/BlueprintCameraVariableTable.h" },
		{ "ToolTip", "Sets a camera variable's value in the given table." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VariableTable_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_VariableTable;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Variable;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_SetFloatCameraVariable_Statics::NewProp_VariableTable = { "VariableTable", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintCameraVariableTableFunctionLibrary_eventSetFloatCameraVariable_Parms, VariableTable), Z_Construct_UScriptStruct_FBlueprintCameraVariableTable, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VariableTable_MetaData), NewProp_VariableTable_MetaData) }; // 2718450583
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_SetFloatCameraVariable_Statics::NewProp_Variable = { "Variable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintCameraVariableTableFunctionLibrary_eventSetFloatCameraVariable_Parms, Variable), Z_Construct_UClass_UFloatCameraVariable_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_SetFloatCameraVariable_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintCameraVariableTableFunctionLibrary_eventSetFloatCameraVariable_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_SetFloatCameraVariable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_SetFloatCameraVariable_Statics::NewProp_VariableTable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_SetFloatCameraVariable_Statics::NewProp_Variable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_SetFloatCameraVariable_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_SetFloatCameraVariable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_SetFloatCameraVariable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintCameraVariableTableFunctionLibrary, nullptr, "SetFloatCameraVariable", nullptr, nullptr, Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_SetFloatCameraVariable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_SetFloatCameraVariable_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_SetFloatCameraVariable_Statics::BlueprintCameraVariableTableFunctionLibrary_eventSetFloatCameraVariable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_SetFloatCameraVariable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_SetFloatCameraVariable_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_SetFloatCameraVariable_Statics::BlueprintCameraVariableTableFunctionLibrary_eventSetFloatCameraVariable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_SetFloatCameraVariable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_SetFloatCameraVariable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBlueprintCameraVariableTableFunctionLibrary::execSetFloatCameraVariable)
{
	P_GET_STRUCT_REF(FBlueprintCameraVariableTable,Z_Param_Out_VariableTable);
	P_GET_OBJECT(UFloatCameraVariable,Z_Param_Variable);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	UBlueprintCameraVariableTableFunctionLibrary::SetFloatCameraVariable(Z_Param_Out_VariableTable,Z_Param_Variable,Z_Param_Value);
	P_NATIVE_END;
}
// End Class UBlueprintCameraVariableTableFunctionLibrary Function SetFloatCameraVariable

// Begin Class UBlueprintCameraVariableTableFunctionLibrary Function SetInteger32CameraVariable
struct Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_SetInteger32CameraVariable_Statics
{
	struct BlueprintCameraVariableTableFunctionLibrary_eventSetInteger32CameraVariable_Parms
	{
		FBlueprintCameraVariableTable VariableTable;
		UInteger32CameraVariable* Variable;
		int32 Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Sets a camera variable's value in the given table. */" },
		{ "DisplayName", "Set Integer Variable" },
		{ "ModuleRelativePath", "Public/GameFramework/BlueprintCameraVariableTable.h" },
		{ "ToolTip", "Sets a camera variable's value in the given table." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VariableTable_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_VariableTable;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Variable;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_SetInteger32CameraVariable_Statics::NewProp_VariableTable = { "VariableTable", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintCameraVariableTableFunctionLibrary_eventSetInteger32CameraVariable_Parms, VariableTable), Z_Construct_UScriptStruct_FBlueprintCameraVariableTable, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VariableTable_MetaData), NewProp_VariableTable_MetaData) }; // 2718450583
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_SetInteger32CameraVariable_Statics::NewProp_Variable = { "Variable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintCameraVariableTableFunctionLibrary_eventSetInteger32CameraVariable_Parms, Variable), Z_Construct_UClass_UInteger32CameraVariable_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_SetInteger32CameraVariable_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintCameraVariableTableFunctionLibrary_eventSetInteger32CameraVariable_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_SetInteger32CameraVariable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_SetInteger32CameraVariable_Statics::NewProp_VariableTable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_SetInteger32CameraVariable_Statics::NewProp_Variable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_SetInteger32CameraVariable_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_SetInteger32CameraVariable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_SetInteger32CameraVariable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintCameraVariableTableFunctionLibrary, nullptr, "SetInteger32CameraVariable", nullptr, nullptr, Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_SetInteger32CameraVariable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_SetInteger32CameraVariable_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_SetInteger32CameraVariable_Statics::BlueprintCameraVariableTableFunctionLibrary_eventSetInteger32CameraVariable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_SetInteger32CameraVariable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_SetInteger32CameraVariable_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_SetInteger32CameraVariable_Statics::BlueprintCameraVariableTableFunctionLibrary_eventSetInteger32CameraVariable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_SetInteger32CameraVariable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_SetInteger32CameraVariable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBlueprintCameraVariableTableFunctionLibrary::execSetInteger32CameraVariable)
{
	P_GET_STRUCT_REF(FBlueprintCameraVariableTable,Z_Param_Out_VariableTable);
	P_GET_OBJECT(UInteger32CameraVariable,Z_Param_Variable);
	P_GET_PROPERTY(FIntProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	UBlueprintCameraVariableTableFunctionLibrary::SetInteger32CameraVariable(Z_Param_Out_VariableTable,Z_Param_Variable,Z_Param_Value);
	P_NATIVE_END;
}
// End Class UBlueprintCameraVariableTableFunctionLibrary Function SetInteger32CameraVariable

// Begin Class UBlueprintCameraVariableTableFunctionLibrary Function SetRotatorCameraVariable
struct Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_SetRotatorCameraVariable_Statics
{
	struct BlueprintCameraVariableTableFunctionLibrary_eventSetRotatorCameraVariable_Parms
	{
		FBlueprintCameraVariableTable VariableTable;
		URotator3dCameraVariable* Variable;
		FRotator Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Sets a camera variable's value in the given table. */" },
		{ "DisplayName", "Set Rotator Variable" },
		{ "ModuleRelativePath", "Public/GameFramework/BlueprintCameraVariableTable.h" },
		{ "ToolTip", "Sets a camera variable's value in the given table." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VariableTable_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_VariableTable;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Variable;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_SetRotatorCameraVariable_Statics::NewProp_VariableTable = { "VariableTable", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintCameraVariableTableFunctionLibrary_eventSetRotatorCameraVariable_Parms, VariableTable), Z_Construct_UScriptStruct_FBlueprintCameraVariableTable, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VariableTable_MetaData), NewProp_VariableTable_MetaData) }; // 2718450583
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_SetRotatorCameraVariable_Statics::NewProp_Variable = { "Variable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintCameraVariableTableFunctionLibrary_eventSetRotatorCameraVariable_Parms, Variable), Z_Construct_UClass_URotator3dCameraVariable_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_SetRotatorCameraVariable_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintCameraVariableTableFunctionLibrary_eventSetRotatorCameraVariable_Parms, Value), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_SetRotatorCameraVariable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_SetRotatorCameraVariable_Statics::NewProp_VariableTable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_SetRotatorCameraVariable_Statics::NewProp_Variable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_SetRotatorCameraVariable_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_SetRotatorCameraVariable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_SetRotatorCameraVariable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintCameraVariableTableFunctionLibrary, nullptr, "SetRotatorCameraVariable", nullptr, nullptr, Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_SetRotatorCameraVariable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_SetRotatorCameraVariable_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_SetRotatorCameraVariable_Statics::BlueprintCameraVariableTableFunctionLibrary_eventSetRotatorCameraVariable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_SetRotatorCameraVariable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_SetRotatorCameraVariable_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_SetRotatorCameraVariable_Statics::BlueprintCameraVariableTableFunctionLibrary_eventSetRotatorCameraVariable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_SetRotatorCameraVariable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_SetRotatorCameraVariable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBlueprintCameraVariableTableFunctionLibrary::execSetRotatorCameraVariable)
{
	P_GET_STRUCT_REF(FBlueprintCameraVariableTable,Z_Param_Out_VariableTable);
	P_GET_OBJECT(URotator3dCameraVariable,Z_Param_Variable);
	P_GET_STRUCT_REF(FRotator,Z_Param_Out_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	UBlueprintCameraVariableTableFunctionLibrary::SetRotatorCameraVariable(Z_Param_Out_VariableTable,Z_Param_Variable,Z_Param_Out_Value);
	P_NATIVE_END;
}
// End Class UBlueprintCameraVariableTableFunctionLibrary Function SetRotatorCameraVariable

// Begin Class UBlueprintCameraVariableTableFunctionLibrary Function SetTransformCameraVariable
struct Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_SetTransformCameraVariable_Statics
{
	struct BlueprintCameraVariableTableFunctionLibrary_eventSetTransformCameraVariable_Parms
	{
		FBlueprintCameraVariableTable VariableTable;
		UTransform3dCameraVariable* Variable;
		FTransform Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Sets a camera variable's value in the given table. */" },
		{ "DisplayName", "Set Transform Variable" },
		{ "ModuleRelativePath", "Public/GameFramework/BlueprintCameraVariableTable.h" },
		{ "ToolTip", "Sets a camera variable's value in the given table." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VariableTable_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_VariableTable;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Variable;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_SetTransformCameraVariable_Statics::NewProp_VariableTable = { "VariableTable", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintCameraVariableTableFunctionLibrary_eventSetTransformCameraVariable_Parms, VariableTable), Z_Construct_UScriptStruct_FBlueprintCameraVariableTable, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VariableTable_MetaData), NewProp_VariableTable_MetaData) }; // 2718450583
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_SetTransformCameraVariable_Statics::NewProp_Variable = { "Variable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintCameraVariableTableFunctionLibrary_eventSetTransformCameraVariable_Parms, Variable), Z_Construct_UClass_UTransform3dCameraVariable_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_SetTransformCameraVariable_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintCameraVariableTableFunctionLibrary_eventSetTransformCameraVariable_Parms, Value), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_SetTransformCameraVariable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_SetTransformCameraVariable_Statics::NewProp_VariableTable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_SetTransformCameraVariable_Statics::NewProp_Variable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_SetTransformCameraVariable_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_SetTransformCameraVariable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_SetTransformCameraVariable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintCameraVariableTableFunctionLibrary, nullptr, "SetTransformCameraVariable", nullptr, nullptr, Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_SetTransformCameraVariable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_SetTransformCameraVariable_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_SetTransformCameraVariable_Statics::BlueprintCameraVariableTableFunctionLibrary_eventSetTransformCameraVariable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_SetTransformCameraVariable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_SetTransformCameraVariable_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_SetTransformCameraVariable_Statics::BlueprintCameraVariableTableFunctionLibrary_eventSetTransformCameraVariable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_SetTransformCameraVariable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_SetTransformCameraVariable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBlueprintCameraVariableTableFunctionLibrary::execSetTransformCameraVariable)
{
	P_GET_STRUCT_REF(FBlueprintCameraVariableTable,Z_Param_Out_VariableTable);
	P_GET_OBJECT(UTransform3dCameraVariable,Z_Param_Variable);
	P_GET_STRUCT_REF(FTransform,Z_Param_Out_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	UBlueprintCameraVariableTableFunctionLibrary::SetTransformCameraVariable(Z_Param_Out_VariableTable,Z_Param_Variable,Z_Param_Out_Value);
	P_NATIVE_END;
}
// End Class UBlueprintCameraVariableTableFunctionLibrary Function SetTransformCameraVariable

// Begin Class UBlueprintCameraVariableTableFunctionLibrary Function SetVector2CameraVariable
struct Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_SetVector2CameraVariable_Statics
{
	struct BlueprintCameraVariableTableFunctionLibrary_eventSetVector2CameraVariable_Parms
	{
		FBlueprintCameraVariableTable VariableTable;
		UVector2dCameraVariable* Variable;
		FVector2D Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Sets a camera variable's value in the given table. */" },
		{ "DisplayName", "Set Vector 2D Variable" },
		{ "ModuleRelativePath", "Public/GameFramework/BlueprintCameraVariableTable.h" },
		{ "ToolTip", "Sets a camera variable's value in the given table." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VariableTable_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_VariableTable;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Variable;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_SetVector2CameraVariable_Statics::NewProp_VariableTable = { "VariableTable", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintCameraVariableTableFunctionLibrary_eventSetVector2CameraVariable_Parms, VariableTable), Z_Construct_UScriptStruct_FBlueprintCameraVariableTable, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VariableTable_MetaData), NewProp_VariableTable_MetaData) }; // 2718450583
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_SetVector2CameraVariable_Statics::NewProp_Variable = { "Variable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintCameraVariableTableFunctionLibrary_eventSetVector2CameraVariable_Parms, Variable), Z_Construct_UClass_UVector2dCameraVariable_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_SetVector2CameraVariable_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintCameraVariableTableFunctionLibrary_eventSetVector2CameraVariable_Parms, Value), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_SetVector2CameraVariable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_SetVector2CameraVariable_Statics::NewProp_VariableTable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_SetVector2CameraVariable_Statics::NewProp_Variable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_SetVector2CameraVariable_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_SetVector2CameraVariable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_SetVector2CameraVariable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintCameraVariableTableFunctionLibrary, nullptr, "SetVector2CameraVariable", nullptr, nullptr, Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_SetVector2CameraVariable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_SetVector2CameraVariable_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_SetVector2CameraVariable_Statics::BlueprintCameraVariableTableFunctionLibrary_eventSetVector2CameraVariable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_SetVector2CameraVariable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_SetVector2CameraVariable_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_SetVector2CameraVariable_Statics::BlueprintCameraVariableTableFunctionLibrary_eventSetVector2CameraVariable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_SetVector2CameraVariable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_SetVector2CameraVariable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBlueprintCameraVariableTableFunctionLibrary::execSetVector2CameraVariable)
{
	P_GET_STRUCT_REF(FBlueprintCameraVariableTable,Z_Param_Out_VariableTable);
	P_GET_OBJECT(UVector2dCameraVariable,Z_Param_Variable);
	P_GET_STRUCT_REF(FVector2D,Z_Param_Out_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	UBlueprintCameraVariableTableFunctionLibrary::SetVector2CameraVariable(Z_Param_Out_VariableTable,Z_Param_Variable,Z_Param_Out_Value);
	P_NATIVE_END;
}
// End Class UBlueprintCameraVariableTableFunctionLibrary Function SetVector2CameraVariable

// Begin Class UBlueprintCameraVariableTableFunctionLibrary Function SetVector3CameraVariable
struct Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_SetVector3CameraVariable_Statics
{
	struct BlueprintCameraVariableTableFunctionLibrary_eventSetVector3CameraVariable_Parms
	{
		FBlueprintCameraVariableTable VariableTable;
		UVector3dCameraVariable* Variable;
		FVector Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Sets a camera variable's value in the given table. */" },
		{ "DisplayName", "Set Vector Variable" },
		{ "ModuleRelativePath", "Public/GameFramework/BlueprintCameraVariableTable.h" },
		{ "ToolTip", "Sets a camera variable's value in the given table." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VariableTable_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_VariableTable;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Variable;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_SetVector3CameraVariable_Statics::NewProp_VariableTable = { "VariableTable", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintCameraVariableTableFunctionLibrary_eventSetVector3CameraVariable_Parms, VariableTable), Z_Construct_UScriptStruct_FBlueprintCameraVariableTable, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VariableTable_MetaData), NewProp_VariableTable_MetaData) }; // 2718450583
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_SetVector3CameraVariable_Statics::NewProp_Variable = { "Variable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintCameraVariableTableFunctionLibrary_eventSetVector3CameraVariable_Parms, Variable), Z_Construct_UClass_UVector3dCameraVariable_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_SetVector3CameraVariable_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintCameraVariableTableFunctionLibrary_eventSetVector3CameraVariable_Parms, Value), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_SetVector3CameraVariable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_SetVector3CameraVariable_Statics::NewProp_VariableTable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_SetVector3CameraVariable_Statics::NewProp_Variable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_SetVector3CameraVariable_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_SetVector3CameraVariable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_SetVector3CameraVariable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintCameraVariableTableFunctionLibrary, nullptr, "SetVector3CameraVariable", nullptr, nullptr, Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_SetVector3CameraVariable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_SetVector3CameraVariable_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_SetVector3CameraVariable_Statics::BlueprintCameraVariableTableFunctionLibrary_eventSetVector3CameraVariable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_SetVector3CameraVariable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_SetVector3CameraVariable_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_SetVector3CameraVariable_Statics::BlueprintCameraVariableTableFunctionLibrary_eventSetVector3CameraVariable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_SetVector3CameraVariable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_SetVector3CameraVariable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBlueprintCameraVariableTableFunctionLibrary::execSetVector3CameraVariable)
{
	P_GET_STRUCT_REF(FBlueprintCameraVariableTable,Z_Param_Out_VariableTable);
	P_GET_OBJECT(UVector3dCameraVariable,Z_Param_Variable);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	UBlueprintCameraVariableTableFunctionLibrary::SetVector3CameraVariable(Z_Param_Out_VariableTable,Z_Param_Variable,Z_Param_Out_Value);
	P_NATIVE_END;
}
// End Class UBlueprintCameraVariableTableFunctionLibrary Function SetVector3CameraVariable

// Begin Class UBlueprintCameraVariableTableFunctionLibrary Function SetVector4CameraVariable
struct Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_SetVector4CameraVariable_Statics
{
	struct BlueprintCameraVariableTableFunctionLibrary_eventSetVector4CameraVariable_Parms
	{
		FBlueprintCameraVariableTable VariableTable;
		UVector4dCameraVariable* Variable;
		FVector4 Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Sets a camera variable's value in the given table. */" },
		{ "DisplayName", "Set Vector 4 Variable" },
		{ "ModuleRelativePath", "Public/GameFramework/BlueprintCameraVariableTable.h" },
		{ "ToolTip", "Sets a camera variable's value in the given table." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VariableTable_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_VariableTable;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Variable;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_SetVector4CameraVariable_Statics::NewProp_VariableTable = { "VariableTable", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintCameraVariableTableFunctionLibrary_eventSetVector4CameraVariable_Parms, VariableTable), Z_Construct_UScriptStruct_FBlueprintCameraVariableTable, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VariableTable_MetaData), NewProp_VariableTable_MetaData) }; // 2718450583
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_SetVector4CameraVariable_Statics::NewProp_Variable = { "Variable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintCameraVariableTableFunctionLibrary_eventSetVector4CameraVariable_Parms, Variable), Z_Construct_UClass_UVector4dCameraVariable_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_SetVector4CameraVariable_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintCameraVariableTableFunctionLibrary_eventSetVector4CameraVariable_Parms, Value), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_SetVector4CameraVariable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_SetVector4CameraVariable_Statics::NewProp_VariableTable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_SetVector4CameraVariable_Statics::NewProp_Variable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_SetVector4CameraVariable_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_SetVector4CameraVariable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_SetVector4CameraVariable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintCameraVariableTableFunctionLibrary, nullptr, "SetVector4CameraVariable", nullptr, nullptr, Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_SetVector4CameraVariable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_SetVector4CameraVariable_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_SetVector4CameraVariable_Statics::BlueprintCameraVariableTableFunctionLibrary_eventSetVector4CameraVariable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_SetVector4CameraVariable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_SetVector4CameraVariable_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_SetVector4CameraVariable_Statics::BlueprintCameraVariableTableFunctionLibrary_eventSetVector4CameraVariable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_SetVector4CameraVariable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_SetVector4CameraVariable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBlueprintCameraVariableTableFunctionLibrary::execSetVector4CameraVariable)
{
	P_GET_STRUCT_REF(FBlueprintCameraVariableTable,Z_Param_Out_VariableTable);
	P_GET_OBJECT(UVector4dCameraVariable,Z_Param_Variable);
	P_GET_STRUCT_REF(FVector4,Z_Param_Out_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	UBlueprintCameraVariableTableFunctionLibrary::SetVector4CameraVariable(Z_Param_Out_VariableTable,Z_Param_Variable,Z_Param_Out_Value);
	P_NATIVE_END;
}
// End Class UBlueprintCameraVariableTableFunctionLibrary Function SetVector4CameraVariable

// Begin Class UBlueprintCameraVariableTableFunctionLibrary
void UBlueprintCameraVariableTableFunctionLibrary::StaticRegisterNativesUBlueprintCameraVariableTableFunctionLibrary()
{
	UClass* Class = UBlueprintCameraVariableTableFunctionLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetBooleanCameraVariable", &UBlueprintCameraVariableTableFunctionLibrary::execGetBooleanCameraVariable },
		{ "GetDoubleCameraVariable", &UBlueprintCameraVariableTableFunctionLibrary::execGetDoubleCameraVariable },
		{ "GetFloatCameraVariable", &UBlueprintCameraVariableTableFunctionLibrary::execGetFloatCameraVariable },
		{ "GetInteger32CameraVariable", &UBlueprintCameraVariableTableFunctionLibrary::execGetInteger32CameraVariable },
		{ "GetRotatorCameraVariable", &UBlueprintCameraVariableTableFunctionLibrary::execGetRotatorCameraVariable },
		{ "GetTransformCameraVariable", &UBlueprintCameraVariableTableFunctionLibrary::execGetTransformCameraVariable },
		{ "GetVector2CameraVariable", &UBlueprintCameraVariableTableFunctionLibrary::execGetVector2CameraVariable },
		{ "GetVector3CameraVariable", &UBlueprintCameraVariableTableFunctionLibrary::execGetVector3CameraVariable },
		{ "GetVector4CameraVariable", &UBlueprintCameraVariableTableFunctionLibrary::execGetVector4CameraVariable },
		{ "SetBooleanCameraVariable", &UBlueprintCameraVariableTableFunctionLibrary::execSetBooleanCameraVariable },
		{ "SetDoubleCameraVariable", &UBlueprintCameraVariableTableFunctionLibrary::execSetDoubleCameraVariable },
		{ "SetFloatCameraVariable", &UBlueprintCameraVariableTableFunctionLibrary::execSetFloatCameraVariable },
		{ "SetInteger32CameraVariable", &UBlueprintCameraVariableTableFunctionLibrary::execSetInteger32CameraVariable },
		{ "SetRotatorCameraVariable", &UBlueprintCameraVariableTableFunctionLibrary::execSetRotatorCameraVariable },
		{ "SetTransformCameraVariable", &UBlueprintCameraVariableTableFunctionLibrary::execSetTransformCameraVariable },
		{ "SetVector2CameraVariable", &UBlueprintCameraVariableTableFunctionLibrary::execSetVector2CameraVariable },
		{ "SetVector3CameraVariable", &UBlueprintCameraVariableTableFunctionLibrary::execSetVector3CameraVariable },
		{ "SetVector4CameraVariable", &UBlueprintCameraVariableTableFunctionLibrary::execSetVector4CameraVariable },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBlueprintCameraVariableTableFunctionLibrary);
UClass* Z_Construct_UClass_UBlueprintCameraVariableTableFunctionLibrary_NoRegister()
{
	return UBlueprintCameraVariableTableFunctionLibrary::StaticClass();
}
struct Z_Construct_UClass_UBlueprintCameraVariableTableFunctionLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Utility Blueprint functions for camera variable tables.\n */" },
		{ "IncludePath", "GameFramework/BlueprintCameraVariableTable.h" },
		{ "ModuleRelativePath", "Public/GameFramework/BlueprintCameraVariableTable.h" },
		{ "ToolTip", "Utility Blueprint functions for camera variable tables." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_GetBooleanCameraVariable, "GetBooleanCameraVariable" }, // 2597708895
		{ &Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_GetDoubleCameraVariable, "GetDoubleCameraVariable" }, // 3411713428
		{ &Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_GetFloatCameraVariable, "GetFloatCameraVariable" }, // 2839228866
		{ &Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_GetInteger32CameraVariable, "GetInteger32CameraVariable" }, // 2090619052
		{ &Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_GetRotatorCameraVariable, "GetRotatorCameraVariable" }, // 4205439142
		{ &Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_GetTransformCameraVariable, "GetTransformCameraVariable" }, // 1533413936
		{ &Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_GetVector2CameraVariable, "GetVector2CameraVariable" }, // 2887682670
		{ &Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_GetVector3CameraVariable, "GetVector3CameraVariable" }, // 1320540221
		{ &Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_GetVector4CameraVariable, "GetVector4CameraVariable" }, // 1633941963
		{ &Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_SetBooleanCameraVariable, "SetBooleanCameraVariable" }, // 1337060848
		{ &Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_SetDoubleCameraVariable, "SetDoubleCameraVariable" }, // 3540880784
		{ &Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_SetFloatCameraVariable, "SetFloatCameraVariable" }, // 1147068235
		{ &Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_SetInteger32CameraVariable, "SetInteger32CameraVariable" }, // 1118625149
		{ &Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_SetRotatorCameraVariable, "SetRotatorCameraVariable" }, // 4256932150
		{ &Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_SetTransformCameraVariable, "SetTransformCameraVariable" }, // 477297587
		{ &Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_SetVector2CameraVariable, "SetVector2CameraVariable" }, // 2831270776
		{ &Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_SetVector3CameraVariable, "SetVector3CameraVariable" }, // 950905275
		{ &Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_SetVector4CameraVariable, "SetVector4CameraVariable" }, // 2099474023
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlueprintCameraVariableTableFunctionLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBlueprintCameraVariableTableFunctionLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayCameras,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintCameraVariableTableFunctionLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBlueprintCameraVariableTableFunctionLibrary_Statics::ClassParams = {
	&UBlueprintCameraVariableTableFunctionLibrary::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintCameraVariableTableFunctionLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UBlueprintCameraVariableTableFunctionLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBlueprintCameraVariableTableFunctionLibrary()
{
	if (!Z_Registration_Info_UClass_UBlueprintCameraVariableTableFunctionLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBlueprintCameraVariableTableFunctionLibrary.OuterSingleton, Z_Construct_UClass_UBlueprintCameraVariableTableFunctionLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBlueprintCameraVariableTableFunctionLibrary.OuterSingleton;
}
template<> GAMEPLAYCAMERAS_API UClass* StaticClass<UBlueprintCameraVariableTableFunctionLibrary>()
{
	return UBlueprintCameraVariableTableFunctionLibrary::StaticClass();
}
UBlueprintCameraVariableTableFunctionLibrary::UBlueprintCameraVariableTableFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBlueprintCameraVariableTableFunctionLibrary);
UBlueprintCameraVariableTableFunctionLibrary::~UBlueprintCameraVariableTableFunctionLibrary() {}
// End Class UBlueprintCameraVariableTableFunctionLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_BlueprintCameraVariableTable_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FBlueprintCameraVariableTable::StaticStruct, Z_Construct_UScriptStruct_FBlueprintCameraVariableTable_Statics::NewStructOps, TEXT("BlueprintCameraVariableTable"), &Z_Registration_Info_UScriptStruct_BlueprintCameraVariableTable, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBlueprintCameraVariableTable), 2718450583U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBlueprintCameraVariableTableFunctionLibrary, UBlueprintCameraVariableTableFunctionLibrary::StaticClass, TEXT("UBlueprintCameraVariableTableFunctionLibrary"), &Z_Registration_Info_UClass_UBlueprintCameraVariableTableFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBlueprintCameraVariableTableFunctionLibrary), 1442174988U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_BlueprintCameraVariableTable_h_3757243570(TEXT("/Script/GameplayCameras"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_BlueprintCameraVariableTable_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_BlueprintCameraVariableTable_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_BlueprintCameraVariableTable_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_BlueprintCameraVariableTable_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
