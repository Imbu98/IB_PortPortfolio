// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/Elements/Interfaces/TypedElementWorldInterface.h"
#include "Runtime/TypedElementFramework/Public/Elements/Framework/TypedElementHandle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTypedElementWorldInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBoxSphereBounds();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_ULevel_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTypedElementWorldInterface();
ENGINE_API UClass* Z_Construct_UClass_UTypedElementWorldInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETypedElementWorldType();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTypedElementDeletionOptions();
TYPEDELEMENTFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FScriptTypedElementHandle();
TYPEDELEMENTRUNTIME_API UClass* Z_Construct_UClass_UTypedElementSelectionSet_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Enum ETypedElementWorldType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETypedElementWorldType;
static UEnum* ETypedElementWorldType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ETypedElementWorldType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ETypedElementWorldType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ETypedElementWorldType, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ETypedElementWorldType"));
	}
	return Z_Registration_Info_UEnum_ETypedElementWorldType.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<ETypedElementWorldType>()
{
	return ETypedElementWorldType_StaticEnum();
}
struct Z_Construct_UEnum_Engine_ETypedElementWorldType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Editor.Name", "ETypedElementWorldType::Editor" },
		{ "Game.Name", "ETypedElementWorldType::Game" },
		{ "ModuleRelativePath", "Public/Elements/Interfaces/TypedElementWorldInterface.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ETypedElementWorldType::Game", (int64)ETypedElementWorldType::Game },
		{ "ETypedElementWorldType::Editor", (int64)ETypedElementWorldType::Editor },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ETypedElementWorldType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"ETypedElementWorldType",
	"ETypedElementWorldType",
	Z_Construct_UEnum_Engine_ETypedElementWorldType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ETypedElementWorldType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ETypedElementWorldType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_ETypedElementWorldType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_ETypedElementWorldType()
{
	if (!Z_Registration_Info_UEnum_ETypedElementWorldType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETypedElementWorldType.InnerSingleton, Z_Construct_UEnum_Engine_ETypedElementWorldType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ETypedElementWorldType.InnerSingleton;
}
// End Enum ETypedElementWorldType

// Begin ScriptStruct FTypedElementDeletionOptions
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TypedElementDeletionOptions;
class UScriptStruct* FTypedElementDeletionOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TypedElementDeletionOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TypedElementDeletionOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTypedElementDeletionOptions, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("TypedElementDeletionOptions"));
	}
	return Z_Registration_Info_UScriptStruct_TypedElementDeletionOptions.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FTypedElementDeletionOptions>()
{
	return FTypedElementDeletionOptions::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTypedElementDeletionOptions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Elements/Interfaces/TypedElementWorldInterface.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bVerifyDeletionCanHappen_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TypedElementInterfaces|World|DeletionOptions" },
		{ "ModuleRelativePath", "Public/Elements/Interfaces/TypedElementWorldInterface.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWarnAboutReferences_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TypedElementInterfaces|World|DeletionOptions" },
		{ "ModuleRelativePath", "Public/Elements/Interfaces/TypedElementWorldInterface.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWarnAboutSoftReferences_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TypedElementInterfaces|World|DeletionOptions" },
		{ "ModuleRelativePath", "Public/Elements/Interfaces/TypedElementWorldInterface.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bVerifyDeletionCanHappen_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bVerifyDeletionCanHappen;
	static void NewProp_bWarnAboutReferences_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWarnAboutReferences;
	static void NewProp_bWarnAboutSoftReferences_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWarnAboutSoftReferences;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTypedElementDeletionOptions>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FTypedElementDeletionOptions_Statics::NewProp_bVerifyDeletionCanHappen_SetBit(void* Obj)
{
	((FTypedElementDeletionOptions*)Obj)->bVerifyDeletionCanHappen = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTypedElementDeletionOptions_Statics::NewProp_bVerifyDeletionCanHappen = { "bVerifyDeletionCanHappen", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FTypedElementDeletionOptions), &Z_Construct_UScriptStruct_FTypedElementDeletionOptions_Statics::NewProp_bVerifyDeletionCanHappen_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bVerifyDeletionCanHappen_MetaData), NewProp_bVerifyDeletionCanHappen_MetaData) };
void Z_Construct_UScriptStruct_FTypedElementDeletionOptions_Statics::NewProp_bWarnAboutReferences_SetBit(void* Obj)
{
	((FTypedElementDeletionOptions*)Obj)->bWarnAboutReferences = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTypedElementDeletionOptions_Statics::NewProp_bWarnAboutReferences = { "bWarnAboutReferences", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FTypedElementDeletionOptions), &Z_Construct_UScriptStruct_FTypedElementDeletionOptions_Statics::NewProp_bWarnAboutReferences_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWarnAboutReferences_MetaData), NewProp_bWarnAboutReferences_MetaData) };
void Z_Construct_UScriptStruct_FTypedElementDeletionOptions_Statics::NewProp_bWarnAboutSoftReferences_SetBit(void* Obj)
{
	((FTypedElementDeletionOptions*)Obj)->bWarnAboutSoftReferences = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTypedElementDeletionOptions_Statics::NewProp_bWarnAboutSoftReferences = { "bWarnAboutSoftReferences", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FTypedElementDeletionOptions), &Z_Construct_UScriptStruct_FTypedElementDeletionOptions_Statics::NewProp_bWarnAboutSoftReferences_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWarnAboutSoftReferences_MetaData), NewProp_bWarnAboutSoftReferences_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTypedElementDeletionOptions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTypedElementDeletionOptions_Statics::NewProp_bVerifyDeletionCanHappen,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTypedElementDeletionOptions_Statics::NewProp_bWarnAboutReferences,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTypedElementDeletionOptions_Statics::NewProp_bWarnAboutSoftReferences,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTypedElementDeletionOptions_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTypedElementDeletionOptions_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"TypedElementDeletionOptions",
	Z_Construct_UScriptStruct_FTypedElementDeletionOptions_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTypedElementDeletionOptions_Statics::PropPointers),
	sizeof(FTypedElementDeletionOptions),
	alignof(FTypedElementDeletionOptions),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTypedElementDeletionOptions_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTypedElementDeletionOptions_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTypedElementDeletionOptions()
{
	if (!Z_Registration_Info_UScriptStruct_TypedElementDeletionOptions.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TypedElementDeletionOptions.InnerSingleton, Z_Construct_UScriptStruct_FTypedElementDeletionOptions_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TypedElementDeletionOptions.InnerSingleton;
}
// End ScriptStruct FTypedElementDeletionOptions

// Begin Interface UTypedElementWorldInterface Function CanDeleteElement
struct Z_Construct_UFunction_UTypedElementWorldInterface_CanDeleteElement_Statics
{
	struct TypedElementWorldInterface_eventCanDeleteElement_Parms
	{
		FScriptTypedElementHandle InElementHandle;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "TypedElementInterfaces|World" },
		{ "Comment", "/**\n\x09 * Can the given element be deleted?\n\x09 */" },
		{ "ModuleRelativePath", "Public/Elements/Interfaces/TypedElementWorldInterface.h" },
		{ "ToolTip", "Can the given element be deleted?" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InElementHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InElementHandle;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTypedElementWorldInterface_CanDeleteElement_Statics::NewProp_InElementHandle = { "InElementHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TypedElementWorldInterface_eventCanDeleteElement_Parms, InElementHandle), Z_Construct_UScriptStruct_FScriptTypedElementHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InElementHandle_MetaData), NewProp_InElementHandle_MetaData) }; // 335387057
void Z_Construct_UFunction_UTypedElementWorldInterface_CanDeleteElement_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((TypedElementWorldInterface_eventCanDeleteElement_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTypedElementWorldInterface_CanDeleteElement_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TypedElementWorldInterface_eventCanDeleteElement_Parms), &Z_Construct_UFunction_UTypedElementWorldInterface_CanDeleteElement_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTypedElementWorldInterface_CanDeleteElement_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementWorldInterface_CanDeleteElement_Statics::NewProp_InElementHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementWorldInterface_CanDeleteElement_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementWorldInterface_CanDeleteElement_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTypedElementWorldInterface_CanDeleteElement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTypedElementWorldInterface, nullptr, "CanDeleteElement", nullptr, nullptr, Z_Construct_UFunction_UTypedElementWorldInterface_CanDeleteElement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementWorldInterface_CanDeleteElement_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTypedElementWorldInterface_CanDeleteElement_Statics::TypedElementWorldInterface_eventCanDeleteElement_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementWorldInterface_CanDeleteElement_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTypedElementWorldInterface_CanDeleteElement_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTypedElementWorldInterface_CanDeleteElement_Statics::TypedElementWorldInterface_eventCanDeleteElement_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTypedElementWorldInterface_CanDeleteElement()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTypedElementWorldInterface_CanDeleteElement_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ITypedElementWorldInterface::execCanDeleteElement)
{
	P_GET_STRUCT_REF(FScriptTypedElementHandle,Z_Param_Out_InElementHandle);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanDeleteElement(Z_Param_Out_InElementHandle);
	P_NATIVE_END;
}
// End Interface UTypedElementWorldInterface Function CanDeleteElement

// Begin Interface UTypedElementWorldInterface Function CanDuplicateElement
struct Z_Construct_UFunction_UTypedElementWorldInterface_CanDuplicateElement_Statics
{
	struct TypedElementWorldInterface_eventCanDuplicateElement_Parms
	{
		FScriptTypedElementHandle InElementHandle;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "TypedElementInterfaces|World" },
		{ "Comment", "/**\n\x09 * Can the given element be duplicated?\n\x09 */" },
		{ "ModuleRelativePath", "Public/Elements/Interfaces/TypedElementWorldInterface.h" },
		{ "ToolTip", "Can the given element be duplicated?" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InElementHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InElementHandle;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTypedElementWorldInterface_CanDuplicateElement_Statics::NewProp_InElementHandle = { "InElementHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TypedElementWorldInterface_eventCanDuplicateElement_Parms, InElementHandle), Z_Construct_UScriptStruct_FScriptTypedElementHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InElementHandle_MetaData), NewProp_InElementHandle_MetaData) }; // 335387057
void Z_Construct_UFunction_UTypedElementWorldInterface_CanDuplicateElement_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((TypedElementWorldInterface_eventCanDuplicateElement_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTypedElementWorldInterface_CanDuplicateElement_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TypedElementWorldInterface_eventCanDuplicateElement_Parms), &Z_Construct_UFunction_UTypedElementWorldInterface_CanDuplicateElement_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTypedElementWorldInterface_CanDuplicateElement_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementWorldInterface_CanDuplicateElement_Statics::NewProp_InElementHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementWorldInterface_CanDuplicateElement_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementWorldInterface_CanDuplicateElement_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTypedElementWorldInterface_CanDuplicateElement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTypedElementWorldInterface, nullptr, "CanDuplicateElement", nullptr, nullptr, Z_Construct_UFunction_UTypedElementWorldInterface_CanDuplicateElement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementWorldInterface_CanDuplicateElement_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTypedElementWorldInterface_CanDuplicateElement_Statics::TypedElementWorldInterface_eventCanDuplicateElement_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementWorldInterface_CanDuplicateElement_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTypedElementWorldInterface_CanDuplicateElement_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTypedElementWorldInterface_CanDuplicateElement_Statics::TypedElementWorldInterface_eventCanDuplicateElement_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTypedElementWorldInterface_CanDuplicateElement()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTypedElementWorldInterface_CanDuplicateElement_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ITypedElementWorldInterface::execCanDuplicateElement)
{
	P_GET_STRUCT_REF(FScriptTypedElementHandle,Z_Param_Out_InElementHandle);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanDuplicateElement(Z_Param_Out_InElementHandle);
	P_NATIVE_END;
}
// End Interface UTypedElementWorldInterface Function CanDuplicateElement

// Begin Interface UTypedElementWorldInterface Function CanEditElement
struct Z_Construct_UFunction_UTypedElementWorldInterface_CanEditElement_Statics
{
	struct TypedElementWorldInterface_eventCanEditElement_Parms
	{
		FScriptTypedElementHandle InElementHandle;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "TypedElementInterfaces|World" },
		{ "Comment", "/**\n\x09 * Can this element actually be edited in the world?\n\x09 */" },
		{ "ModuleRelativePath", "Public/Elements/Interfaces/TypedElementWorldInterface.h" },
		{ "ToolTip", "Can this element actually be edited in the world?" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InElementHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InElementHandle;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTypedElementWorldInterface_CanEditElement_Statics::NewProp_InElementHandle = { "InElementHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TypedElementWorldInterface_eventCanEditElement_Parms, InElementHandle), Z_Construct_UScriptStruct_FScriptTypedElementHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InElementHandle_MetaData), NewProp_InElementHandle_MetaData) }; // 335387057
void Z_Construct_UFunction_UTypedElementWorldInterface_CanEditElement_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((TypedElementWorldInterface_eventCanEditElement_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTypedElementWorldInterface_CanEditElement_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TypedElementWorldInterface_eventCanEditElement_Parms), &Z_Construct_UFunction_UTypedElementWorldInterface_CanEditElement_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTypedElementWorldInterface_CanEditElement_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementWorldInterface_CanEditElement_Statics::NewProp_InElementHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementWorldInterface_CanEditElement_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementWorldInterface_CanEditElement_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTypedElementWorldInterface_CanEditElement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTypedElementWorldInterface, nullptr, "CanEditElement", nullptr, nullptr, Z_Construct_UFunction_UTypedElementWorldInterface_CanEditElement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementWorldInterface_CanEditElement_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTypedElementWorldInterface_CanEditElement_Statics::TypedElementWorldInterface_eventCanEditElement_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementWorldInterface_CanEditElement_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTypedElementWorldInterface_CanEditElement_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTypedElementWorldInterface_CanEditElement_Statics::TypedElementWorldInterface_eventCanEditElement_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTypedElementWorldInterface_CanEditElement()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTypedElementWorldInterface_CanEditElement_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ITypedElementWorldInterface::execCanEditElement)
{
	P_GET_STRUCT_REF(FScriptTypedElementHandle,Z_Param_Out_InElementHandle);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanEditElement(Z_Param_Out_InElementHandle);
	P_NATIVE_END;
}
// End Interface UTypedElementWorldInterface Function CanEditElement

// Begin Interface UTypedElementWorldInterface Function CanMoveElement
struct Z_Construct_UFunction_UTypedElementWorldInterface_CanMoveElement_Statics
{
	struct TypedElementWorldInterface_eventCanMoveElement_Parms
	{
		FScriptTypedElementHandle InElementHandle;
		ETypedElementWorldType InWorldType;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "TypedElementInterfaces|World" },
		{ "Comment", "/**\n\x09 * Can the given element be moved within the world?\n\x09 */" },
		{ "ModuleRelativePath", "Public/Elements/Interfaces/TypedElementWorldInterface.h" },
		{ "ToolTip", "Can the given element be moved within the world?" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InElementHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InWorldType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InElementHandle;
	static const UECodeGen_Private::FBytePropertyParams NewProp_InWorldType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InWorldType;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTypedElementWorldInterface_CanMoveElement_Statics::NewProp_InElementHandle = { "InElementHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TypedElementWorldInterface_eventCanMoveElement_Parms, InElementHandle), Z_Construct_UScriptStruct_FScriptTypedElementHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InElementHandle_MetaData), NewProp_InElementHandle_MetaData) }; // 335387057
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTypedElementWorldInterface_CanMoveElement_Statics::NewProp_InWorldType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTypedElementWorldInterface_CanMoveElement_Statics::NewProp_InWorldType = { "InWorldType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TypedElementWorldInterface_eventCanMoveElement_Parms, InWorldType), Z_Construct_UEnum_Engine_ETypedElementWorldType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InWorldType_MetaData), NewProp_InWorldType_MetaData) }; // 1820708703
void Z_Construct_UFunction_UTypedElementWorldInterface_CanMoveElement_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((TypedElementWorldInterface_eventCanMoveElement_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTypedElementWorldInterface_CanMoveElement_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TypedElementWorldInterface_eventCanMoveElement_Parms), &Z_Construct_UFunction_UTypedElementWorldInterface_CanMoveElement_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTypedElementWorldInterface_CanMoveElement_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementWorldInterface_CanMoveElement_Statics::NewProp_InElementHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementWorldInterface_CanMoveElement_Statics::NewProp_InWorldType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementWorldInterface_CanMoveElement_Statics::NewProp_InWorldType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementWorldInterface_CanMoveElement_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementWorldInterface_CanMoveElement_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTypedElementWorldInterface_CanMoveElement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTypedElementWorldInterface, nullptr, "CanMoveElement", nullptr, nullptr, Z_Construct_UFunction_UTypedElementWorldInterface_CanMoveElement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementWorldInterface_CanMoveElement_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTypedElementWorldInterface_CanMoveElement_Statics::TypedElementWorldInterface_eventCanMoveElement_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementWorldInterface_CanMoveElement_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTypedElementWorldInterface_CanMoveElement_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTypedElementWorldInterface_CanMoveElement_Statics::TypedElementWorldInterface_eventCanMoveElement_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTypedElementWorldInterface_CanMoveElement()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTypedElementWorldInterface_CanMoveElement_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ITypedElementWorldInterface::execCanMoveElement)
{
	P_GET_STRUCT_REF(FScriptTypedElementHandle,Z_Param_Out_InElementHandle);
	P_GET_ENUM(ETypedElementWorldType,Z_Param_InWorldType);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanMoveElement(Z_Param_Out_InElementHandle,ETypedElementWorldType(Z_Param_InWorldType));
	P_NATIVE_END;
}
// End Interface UTypedElementWorldInterface Function CanMoveElement

// Begin Interface UTypedElementWorldInterface Function CanPromoteElement
struct Z_Construct_UFunction_UTypedElementWorldInterface_CanPromoteElement_Statics
{
	struct TypedElementWorldInterface_eventCanPromoteElement_Parms
	{
		FScriptTypedElementHandle InElementHandle;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "TypedElementInterfaces|World" },
		{ "Comment", "/**\n\x09 * Can the element be promoted\n\x09 * Generally available when the element is a lighter representation of another element.\n\x09 * Like an instance for example.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Elements/Interfaces/TypedElementWorldInterface.h" },
		{ "ToolTip", "Can the element be promoted\nGenerally available when the element is a lighter representation of another element.\nLike an instance for example." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InElementHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InElementHandle;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTypedElementWorldInterface_CanPromoteElement_Statics::NewProp_InElementHandle = { "InElementHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TypedElementWorldInterface_eventCanPromoteElement_Parms, InElementHandle), Z_Construct_UScriptStruct_FScriptTypedElementHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InElementHandle_MetaData), NewProp_InElementHandle_MetaData) }; // 335387057
void Z_Construct_UFunction_UTypedElementWorldInterface_CanPromoteElement_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((TypedElementWorldInterface_eventCanPromoteElement_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTypedElementWorldInterface_CanPromoteElement_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TypedElementWorldInterface_eventCanPromoteElement_Parms), &Z_Construct_UFunction_UTypedElementWorldInterface_CanPromoteElement_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTypedElementWorldInterface_CanPromoteElement_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementWorldInterface_CanPromoteElement_Statics::NewProp_InElementHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementWorldInterface_CanPromoteElement_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementWorldInterface_CanPromoteElement_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTypedElementWorldInterface_CanPromoteElement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTypedElementWorldInterface, nullptr, "CanPromoteElement", nullptr, nullptr, Z_Construct_UFunction_UTypedElementWorldInterface_CanPromoteElement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementWorldInterface_CanPromoteElement_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTypedElementWorldInterface_CanPromoteElement_Statics::TypedElementWorldInterface_eventCanPromoteElement_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementWorldInterface_CanPromoteElement_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTypedElementWorldInterface_CanPromoteElement_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTypedElementWorldInterface_CanPromoteElement_Statics::TypedElementWorldInterface_eventCanPromoteElement_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTypedElementWorldInterface_CanPromoteElement()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTypedElementWorldInterface_CanPromoteElement_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ITypedElementWorldInterface::execCanPromoteElement)
{
	P_GET_STRUCT_REF(FScriptTypedElementHandle,Z_Param_Out_InElementHandle);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanPromoteElement(Z_Param_Out_InElementHandle);
	P_NATIVE_END;
}
// End Interface UTypedElementWorldInterface Function CanPromoteElement

// Begin Interface UTypedElementWorldInterface Function CanScaleElement
struct Z_Construct_UFunction_UTypedElementWorldInterface_CanScaleElement_Statics
{
	struct TypedElementWorldInterface_eventCanScaleElement_Parms
	{
		FScriptTypedElementHandle InElementHandle;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "TypedElementInterfaces|World" },
		{ "Comment", "/**\n\x09 * Can the given element be scaled?\n\x09 */" },
		{ "ModuleRelativePath", "Public/Elements/Interfaces/TypedElementWorldInterface.h" },
		{ "ToolTip", "Can the given element be scaled?" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InElementHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InElementHandle;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTypedElementWorldInterface_CanScaleElement_Statics::NewProp_InElementHandle = { "InElementHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TypedElementWorldInterface_eventCanScaleElement_Parms, InElementHandle), Z_Construct_UScriptStruct_FScriptTypedElementHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InElementHandle_MetaData), NewProp_InElementHandle_MetaData) }; // 335387057
void Z_Construct_UFunction_UTypedElementWorldInterface_CanScaleElement_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((TypedElementWorldInterface_eventCanScaleElement_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTypedElementWorldInterface_CanScaleElement_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TypedElementWorldInterface_eventCanScaleElement_Parms), &Z_Construct_UFunction_UTypedElementWorldInterface_CanScaleElement_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTypedElementWorldInterface_CanScaleElement_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementWorldInterface_CanScaleElement_Statics::NewProp_InElementHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementWorldInterface_CanScaleElement_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementWorldInterface_CanScaleElement_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTypedElementWorldInterface_CanScaleElement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTypedElementWorldInterface, nullptr, "CanScaleElement", nullptr, nullptr, Z_Construct_UFunction_UTypedElementWorldInterface_CanScaleElement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementWorldInterface_CanScaleElement_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTypedElementWorldInterface_CanScaleElement_Statics::TypedElementWorldInterface_eventCanScaleElement_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementWorldInterface_CanScaleElement_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTypedElementWorldInterface_CanScaleElement_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTypedElementWorldInterface_CanScaleElement_Statics::TypedElementWorldInterface_eventCanScaleElement_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTypedElementWorldInterface_CanScaleElement()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTypedElementWorldInterface_CanScaleElement_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ITypedElementWorldInterface::execCanScaleElement)
{
	P_GET_STRUCT_REF(FScriptTypedElementHandle,Z_Param_Out_InElementHandle);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanScaleElement(Z_Param_Out_InElementHandle);
	P_NATIVE_END;
}
// End Interface UTypedElementWorldInterface Function CanScaleElement

// Begin Interface UTypedElementWorldInterface Function DeleteElement
struct Z_Construct_UFunction_UTypedElementWorldInterface_DeleteElement_Statics
{
	struct TypedElementWorldInterface_eventDeleteElement_Parms
	{
		FScriptTypedElementHandle InElementHandle;
		UWorld* InWorld;
		UTypedElementSelectionSet* InSelectionSet;
		FTypedElementDeletionOptions InDeletionOptions;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "TypedElementInterfaces|World" },
		{ "Comment", "/**\n\x09 * Delete the given element.\n\x09 * @note Default version calls DeleteElements with a single element.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Elements/Interfaces/TypedElementWorldInterface.h" },
		{ "ToolTip", "Delete the given element.\n@note Default version calls DeleteElements with a single element." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InElementHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InDeletionOptions_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InElementHandle;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InWorld;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InSelectionSet;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InDeletionOptions;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTypedElementWorldInterface_DeleteElement_Statics::NewProp_InElementHandle = { "InElementHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TypedElementWorldInterface_eventDeleteElement_Parms, InElementHandle), Z_Construct_UScriptStruct_FScriptTypedElementHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InElementHandle_MetaData), NewProp_InElementHandle_MetaData) }; // 335387057
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTypedElementWorldInterface_DeleteElement_Statics::NewProp_InWorld = { "InWorld", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TypedElementWorldInterface_eventDeleteElement_Parms, InWorld), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTypedElementWorldInterface_DeleteElement_Statics::NewProp_InSelectionSet = { "InSelectionSet", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TypedElementWorldInterface_eventDeleteElement_Parms, InSelectionSet), Z_Construct_UClass_UTypedElementSelectionSet_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTypedElementWorldInterface_DeleteElement_Statics::NewProp_InDeletionOptions = { "InDeletionOptions", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TypedElementWorldInterface_eventDeleteElement_Parms, InDeletionOptions), Z_Construct_UScriptStruct_FTypedElementDeletionOptions, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InDeletionOptions_MetaData), NewProp_InDeletionOptions_MetaData) }; // 164026916
void Z_Construct_UFunction_UTypedElementWorldInterface_DeleteElement_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((TypedElementWorldInterface_eventDeleteElement_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTypedElementWorldInterface_DeleteElement_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TypedElementWorldInterface_eventDeleteElement_Parms), &Z_Construct_UFunction_UTypedElementWorldInterface_DeleteElement_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTypedElementWorldInterface_DeleteElement_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementWorldInterface_DeleteElement_Statics::NewProp_InElementHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementWorldInterface_DeleteElement_Statics::NewProp_InWorld,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementWorldInterface_DeleteElement_Statics::NewProp_InSelectionSet,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementWorldInterface_DeleteElement_Statics::NewProp_InDeletionOptions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementWorldInterface_DeleteElement_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementWorldInterface_DeleteElement_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTypedElementWorldInterface_DeleteElement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTypedElementWorldInterface, nullptr, "DeleteElement", nullptr, nullptr, Z_Construct_UFunction_UTypedElementWorldInterface_DeleteElement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementWorldInterface_DeleteElement_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTypedElementWorldInterface_DeleteElement_Statics::TypedElementWorldInterface_eventDeleteElement_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementWorldInterface_DeleteElement_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTypedElementWorldInterface_DeleteElement_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTypedElementWorldInterface_DeleteElement_Statics::TypedElementWorldInterface_eventDeleteElement_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTypedElementWorldInterface_DeleteElement()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTypedElementWorldInterface_DeleteElement_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ITypedElementWorldInterface::execDeleteElement)
{
	P_GET_STRUCT_REF(FScriptTypedElementHandle,Z_Param_Out_InElementHandle);
	P_GET_OBJECT(UWorld,Z_Param_InWorld);
	P_GET_OBJECT(UTypedElementSelectionSet,Z_Param_InSelectionSet);
	P_GET_STRUCT_REF(FTypedElementDeletionOptions,Z_Param_Out_InDeletionOptions);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->DeleteElement(Z_Param_Out_InElementHandle,Z_Param_InWorld,Z_Param_InSelectionSet,Z_Param_Out_InDeletionOptions);
	P_NATIVE_END;
}
// End Interface UTypedElementWorldInterface Function DeleteElement

// Begin Interface UTypedElementWorldInterface Function DuplicateElement
struct Z_Construct_UFunction_UTypedElementWorldInterface_DuplicateElement_Statics
{
	struct TypedElementWorldInterface_eventDuplicateElement_Parms
	{
		FScriptTypedElementHandle InElementHandle;
		UWorld* InWorld;
		FVector InLocationOffset;
		FScriptTypedElementHandle ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "TypedElementInterfaces|World" },
		{ "Comment", "/**\n\x09 * Duplicate the given element.\n\x09 * @note Default version calls DuplicateElements with a single element.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Elements/Interfaces/TypedElementWorldInterface.h" },
		{ "ToolTip", "Duplicate the given element.\n@note Default version calls DuplicateElements with a single element." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InElementHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InLocationOffset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InElementHandle;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InWorld;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InLocationOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTypedElementWorldInterface_DuplicateElement_Statics::NewProp_InElementHandle = { "InElementHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TypedElementWorldInterface_eventDuplicateElement_Parms, InElementHandle), Z_Construct_UScriptStruct_FScriptTypedElementHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InElementHandle_MetaData), NewProp_InElementHandle_MetaData) }; // 335387057
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTypedElementWorldInterface_DuplicateElement_Statics::NewProp_InWorld = { "InWorld", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TypedElementWorldInterface_eventDuplicateElement_Parms, InWorld), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTypedElementWorldInterface_DuplicateElement_Statics::NewProp_InLocationOffset = { "InLocationOffset", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TypedElementWorldInterface_eventDuplicateElement_Parms, InLocationOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InLocationOffset_MetaData), NewProp_InLocationOffset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTypedElementWorldInterface_DuplicateElement_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TypedElementWorldInterface_eventDuplicateElement_Parms, ReturnValue), Z_Construct_UScriptStruct_FScriptTypedElementHandle, METADATA_PARAMS(0, nullptr) }; // 335387057
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTypedElementWorldInterface_DuplicateElement_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementWorldInterface_DuplicateElement_Statics::NewProp_InElementHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementWorldInterface_DuplicateElement_Statics::NewProp_InWorld,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementWorldInterface_DuplicateElement_Statics::NewProp_InLocationOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementWorldInterface_DuplicateElement_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementWorldInterface_DuplicateElement_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTypedElementWorldInterface_DuplicateElement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTypedElementWorldInterface, nullptr, "DuplicateElement", nullptr, nullptr, Z_Construct_UFunction_UTypedElementWorldInterface_DuplicateElement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementWorldInterface_DuplicateElement_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTypedElementWorldInterface_DuplicateElement_Statics::TypedElementWorldInterface_eventDuplicateElement_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementWorldInterface_DuplicateElement_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTypedElementWorldInterface_DuplicateElement_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTypedElementWorldInterface_DuplicateElement_Statics::TypedElementWorldInterface_eventDuplicateElement_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTypedElementWorldInterface_DuplicateElement()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTypedElementWorldInterface_DuplicateElement_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ITypedElementWorldInterface::execDuplicateElement)
{
	P_GET_STRUCT_REF(FScriptTypedElementHandle,Z_Param_Out_InElementHandle);
	P_GET_OBJECT(UWorld,Z_Param_InWorld);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_InLocationOffset);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FScriptTypedElementHandle*)Z_Param__Result=P_THIS->DuplicateElement(Z_Param_Out_InElementHandle,Z_Param_InWorld,Z_Param_Out_InLocationOffset);
	P_NATIVE_END;
}
// End Interface UTypedElementWorldInterface Function DuplicateElement

// Begin Interface UTypedElementWorldInterface Function GetBounds
struct Z_Construct_UFunction_UTypedElementWorldInterface_GetBounds_Statics
{
	struct TypedElementWorldInterface_eventGetBounds_Parms
	{
		FScriptTypedElementHandle InElementHandle;
		FBoxSphereBounds OutBounds;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "TypedElementInterfaces|World" },
		{ "Comment", "/**\n\x09 * Get the bounds of this element, if any.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Elements/Interfaces/TypedElementWorldInterface.h" },
		{ "ToolTip", "Get the bounds of this element, if any." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InElementHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InElementHandle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutBounds;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTypedElementWorldInterface_GetBounds_Statics::NewProp_InElementHandle = { "InElementHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TypedElementWorldInterface_eventGetBounds_Parms, InElementHandle), Z_Construct_UScriptStruct_FScriptTypedElementHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InElementHandle_MetaData), NewProp_InElementHandle_MetaData) }; // 335387057
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTypedElementWorldInterface_GetBounds_Statics::NewProp_OutBounds = { "OutBounds", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TypedElementWorldInterface_eventGetBounds_Parms, OutBounds), Z_Construct_UScriptStruct_FBoxSphereBounds, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UTypedElementWorldInterface_GetBounds_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((TypedElementWorldInterface_eventGetBounds_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTypedElementWorldInterface_GetBounds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TypedElementWorldInterface_eventGetBounds_Parms), &Z_Construct_UFunction_UTypedElementWorldInterface_GetBounds_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTypedElementWorldInterface_GetBounds_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementWorldInterface_GetBounds_Statics::NewProp_InElementHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementWorldInterface_GetBounds_Statics::NewProp_OutBounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementWorldInterface_GetBounds_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementWorldInterface_GetBounds_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTypedElementWorldInterface_GetBounds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTypedElementWorldInterface, nullptr, "GetBounds", nullptr, nullptr, Z_Construct_UFunction_UTypedElementWorldInterface_GetBounds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementWorldInterface_GetBounds_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTypedElementWorldInterface_GetBounds_Statics::TypedElementWorldInterface_eventGetBounds_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementWorldInterface_GetBounds_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTypedElementWorldInterface_GetBounds_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTypedElementWorldInterface_GetBounds_Statics::TypedElementWorldInterface_eventGetBounds_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTypedElementWorldInterface_GetBounds()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTypedElementWorldInterface_GetBounds_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ITypedElementWorldInterface::execGetBounds)
{
	P_GET_STRUCT_REF(FScriptTypedElementHandle,Z_Param_Out_InElementHandle);
	P_GET_STRUCT_REF(FBoxSphereBounds,Z_Param_Out_OutBounds);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetBounds(Z_Param_Out_InElementHandle,Z_Param_Out_OutBounds);
	P_NATIVE_END;
}
// End Interface UTypedElementWorldInterface Function GetBounds

// Begin Interface UTypedElementWorldInterface Function GetOwnerLevel
struct Z_Construct_UFunction_UTypedElementWorldInterface_GetOwnerLevel_Statics
{
	struct TypedElementWorldInterface_eventGetOwnerLevel_Parms
	{
		FScriptTypedElementHandle InElementHandle;
		ULevel* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "TypedElementInterfaces|World" },
		{ "Comment", "/**\n\x09 * Get the owner level associated with this element, if any.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Elements/Interfaces/TypedElementWorldInterface.h" },
		{ "ToolTip", "Get the owner level associated with this element, if any." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InElementHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InElementHandle;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTypedElementWorldInterface_GetOwnerLevel_Statics::NewProp_InElementHandle = { "InElementHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TypedElementWorldInterface_eventGetOwnerLevel_Parms, InElementHandle), Z_Construct_UScriptStruct_FScriptTypedElementHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InElementHandle_MetaData), NewProp_InElementHandle_MetaData) }; // 335387057
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTypedElementWorldInterface_GetOwnerLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TypedElementWorldInterface_eventGetOwnerLevel_Parms, ReturnValue), Z_Construct_UClass_ULevel_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTypedElementWorldInterface_GetOwnerLevel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementWorldInterface_GetOwnerLevel_Statics::NewProp_InElementHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementWorldInterface_GetOwnerLevel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementWorldInterface_GetOwnerLevel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTypedElementWorldInterface_GetOwnerLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTypedElementWorldInterface, nullptr, "GetOwnerLevel", nullptr, nullptr, Z_Construct_UFunction_UTypedElementWorldInterface_GetOwnerLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementWorldInterface_GetOwnerLevel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTypedElementWorldInterface_GetOwnerLevel_Statics::TypedElementWorldInterface_eventGetOwnerLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementWorldInterface_GetOwnerLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTypedElementWorldInterface_GetOwnerLevel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTypedElementWorldInterface_GetOwnerLevel_Statics::TypedElementWorldInterface_eventGetOwnerLevel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTypedElementWorldInterface_GetOwnerLevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTypedElementWorldInterface_GetOwnerLevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ITypedElementWorldInterface::execGetOwnerLevel)
{
	P_GET_STRUCT_REF(FScriptTypedElementHandle,Z_Param_Out_InElementHandle);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ULevel**)Z_Param__Result=P_THIS->GetOwnerLevel(Z_Param_Out_InElementHandle);
	P_NATIVE_END;
}
// End Interface UTypedElementWorldInterface Function GetOwnerLevel

// Begin Interface UTypedElementWorldInterface Function GetOwnerWorld
struct Z_Construct_UFunction_UTypedElementWorldInterface_GetOwnerWorld_Statics
{
	struct TypedElementWorldInterface_eventGetOwnerWorld_Parms
	{
		FScriptTypedElementHandle InElementHandle;
		UWorld* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "TypedElementInterfaces|World" },
		{ "Comment", "/**\n\x09 * Get the owner world associated with this element, if any.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Elements/Interfaces/TypedElementWorldInterface.h" },
		{ "ToolTip", "Get the owner world associated with this element, if any." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InElementHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InElementHandle;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTypedElementWorldInterface_GetOwnerWorld_Statics::NewProp_InElementHandle = { "InElementHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TypedElementWorldInterface_eventGetOwnerWorld_Parms, InElementHandle), Z_Construct_UScriptStruct_FScriptTypedElementHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InElementHandle_MetaData), NewProp_InElementHandle_MetaData) }; // 335387057
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTypedElementWorldInterface_GetOwnerWorld_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TypedElementWorldInterface_eventGetOwnerWorld_Parms, ReturnValue), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTypedElementWorldInterface_GetOwnerWorld_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementWorldInterface_GetOwnerWorld_Statics::NewProp_InElementHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementWorldInterface_GetOwnerWorld_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementWorldInterface_GetOwnerWorld_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTypedElementWorldInterface_GetOwnerWorld_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTypedElementWorldInterface, nullptr, "GetOwnerWorld", nullptr, nullptr, Z_Construct_UFunction_UTypedElementWorldInterface_GetOwnerWorld_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementWorldInterface_GetOwnerWorld_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTypedElementWorldInterface_GetOwnerWorld_Statics::TypedElementWorldInterface_eventGetOwnerWorld_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementWorldInterface_GetOwnerWorld_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTypedElementWorldInterface_GetOwnerWorld_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTypedElementWorldInterface_GetOwnerWorld_Statics::TypedElementWorldInterface_eventGetOwnerWorld_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTypedElementWorldInterface_GetOwnerWorld()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTypedElementWorldInterface_GetOwnerWorld_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ITypedElementWorldInterface::execGetOwnerWorld)
{
	P_GET_STRUCT_REF(FScriptTypedElementHandle,Z_Param_Out_InElementHandle);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UWorld**)Z_Param__Result=P_THIS->GetOwnerWorld(Z_Param_Out_InElementHandle);
	P_NATIVE_END;
}
// End Interface UTypedElementWorldInterface Function GetOwnerWorld

// Begin Interface UTypedElementWorldInterface Function GetPivotOffset
struct Z_Construct_UFunction_UTypedElementWorldInterface_GetPivotOffset_Statics
{
	struct TypedElementWorldInterface_eventGetPivotOffset_Parms
	{
		FScriptTypedElementHandle InElementHandle;
		FVector OutPivotOffset;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "TypedElementInterfaces|World" },
		{ "Comment", "/**\n\x09 * Get the local space offset of this element that should be added to its pivot location, if any.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Elements/Interfaces/TypedElementWorldInterface.h" },
		{ "ToolTip", "Get the local space offset of this element that should be added to its pivot location, if any." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InElementHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InElementHandle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutPivotOffset;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTypedElementWorldInterface_GetPivotOffset_Statics::NewProp_InElementHandle = { "InElementHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TypedElementWorldInterface_eventGetPivotOffset_Parms, InElementHandle), Z_Construct_UScriptStruct_FScriptTypedElementHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InElementHandle_MetaData), NewProp_InElementHandle_MetaData) }; // 335387057
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTypedElementWorldInterface_GetPivotOffset_Statics::NewProp_OutPivotOffset = { "OutPivotOffset", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TypedElementWorldInterface_eventGetPivotOffset_Parms, OutPivotOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UTypedElementWorldInterface_GetPivotOffset_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((TypedElementWorldInterface_eventGetPivotOffset_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTypedElementWorldInterface_GetPivotOffset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TypedElementWorldInterface_eventGetPivotOffset_Parms), &Z_Construct_UFunction_UTypedElementWorldInterface_GetPivotOffset_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTypedElementWorldInterface_GetPivotOffset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementWorldInterface_GetPivotOffset_Statics::NewProp_InElementHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementWorldInterface_GetPivotOffset_Statics::NewProp_OutPivotOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementWorldInterface_GetPivotOffset_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementWorldInterface_GetPivotOffset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTypedElementWorldInterface_GetPivotOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTypedElementWorldInterface, nullptr, "GetPivotOffset", nullptr, nullptr, Z_Construct_UFunction_UTypedElementWorldInterface_GetPivotOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementWorldInterface_GetPivotOffset_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTypedElementWorldInterface_GetPivotOffset_Statics::TypedElementWorldInterface_eventGetPivotOffset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementWorldInterface_GetPivotOffset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTypedElementWorldInterface_GetPivotOffset_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTypedElementWorldInterface_GetPivotOffset_Statics::TypedElementWorldInterface_eventGetPivotOffset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTypedElementWorldInterface_GetPivotOffset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTypedElementWorldInterface_GetPivotOffset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ITypedElementWorldInterface::execGetPivotOffset)
{
	P_GET_STRUCT_REF(FScriptTypedElementHandle,Z_Param_Out_InElementHandle);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_OutPivotOffset);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetPivotOffset(Z_Param_Out_InElementHandle,Z_Param_Out_OutPivotOffset);
	P_NATIVE_END;
}
// End Interface UTypedElementWorldInterface Function GetPivotOffset

// Begin Interface UTypedElementWorldInterface Function GetRelativeTransform
struct Z_Construct_UFunction_UTypedElementWorldInterface_GetRelativeTransform_Statics
{
	struct TypedElementWorldInterface_eventGetRelativeTransform_Parms
	{
		FScriptTypedElementHandle InElementHandle;
		FTransform OutTransform;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "TypedElementInterfaces|World" },
		{ "Comment", "/**\n\x09 * Get the transform of this element relative to its parent, if any.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Elements/Interfaces/TypedElementWorldInterface.h" },
		{ "ToolTip", "Get the transform of this element relative to its parent, if any." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InElementHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InElementHandle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutTransform;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTypedElementWorldInterface_GetRelativeTransform_Statics::NewProp_InElementHandle = { "InElementHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TypedElementWorldInterface_eventGetRelativeTransform_Parms, InElementHandle), Z_Construct_UScriptStruct_FScriptTypedElementHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InElementHandle_MetaData), NewProp_InElementHandle_MetaData) }; // 335387057
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTypedElementWorldInterface_GetRelativeTransform_Statics::NewProp_OutTransform = { "OutTransform", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TypedElementWorldInterface_eventGetRelativeTransform_Parms, OutTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UTypedElementWorldInterface_GetRelativeTransform_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((TypedElementWorldInterface_eventGetRelativeTransform_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTypedElementWorldInterface_GetRelativeTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TypedElementWorldInterface_eventGetRelativeTransform_Parms), &Z_Construct_UFunction_UTypedElementWorldInterface_GetRelativeTransform_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTypedElementWorldInterface_GetRelativeTransform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementWorldInterface_GetRelativeTransform_Statics::NewProp_InElementHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementWorldInterface_GetRelativeTransform_Statics::NewProp_OutTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementWorldInterface_GetRelativeTransform_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementWorldInterface_GetRelativeTransform_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTypedElementWorldInterface_GetRelativeTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTypedElementWorldInterface, nullptr, "GetRelativeTransform", nullptr, nullptr, Z_Construct_UFunction_UTypedElementWorldInterface_GetRelativeTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementWorldInterface_GetRelativeTransform_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTypedElementWorldInterface_GetRelativeTransform_Statics::TypedElementWorldInterface_eventGetRelativeTransform_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementWorldInterface_GetRelativeTransform_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTypedElementWorldInterface_GetRelativeTransform_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTypedElementWorldInterface_GetRelativeTransform_Statics::TypedElementWorldInterface_eventGetRelativeTransform_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTypedElementWorldInterface_GetRelativeTransform()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTypedElementWorldInterface_GetRelativeTransform_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ITypedElementWorldInterface::execGetRelativeTransform)
{
	P_GET_STRUCT_REF(FScriptTypedElementHandle,Z_Param_Out_InElementHandle);
	P_GET_STRUCT_REF(FTransform,Z_Param_Out_OutTransform);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetRelativeTransform(Z_Param_Out_InElementHandle,Z_Param_Out_OutTransform);
	P_NATIVE_END;
}
// End Interface UTypedElementWorldInterface Function GetRelativeTransform

// Begin Interface UTypedElementWorldInterface Function GetWorldTransform
struct Z_Construct_UFunction_UTypedElementWorldInterface_GetWorldTransform_Statics
{
	struct TypedElementWorldInterface_eventGetWorldTransform_Parms
	{
		FScriptTypedElementHandle InElementHandle;
		FTransform OutTransform;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "TypedElementInterfaces|World" },
		{ "Comment", "/**\n\x09 * Get the transform of this element within its owner world, if any.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Elements/Interfaces/TypedElementWorldInterface.h" },
		{ "ToolTip", "Get the transform of this element within its owner world, if any." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InElementHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InElementHandle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutTransform;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTypedElementWorldInterface_GetWorldTransform_Statics::NewProp_InElementHandle = { "InElementHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TypedElementWorldInterface_eventGetWorldTransform_Parms, InElementHandle), Z_Construct_UScriptStruct_FScriptTypedElementHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InElementHandle_MetaData), NewProp_InElementHandle_MetaData) }; // 335387057
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTypedElementWorldInterface_GetWorldTransform_Statics::NewProp_OutTransform = { "OutTransform", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TypedElementWorldInterface_eventGetWorldTransform_Parms, OutTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UTypedElementWorldInterface_GetWorldTransform_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((TypedElementWorldInterface_eventGetWorldTransform_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTypedElementWorldInterface_GetWorldTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TypedElementWorldInterface_eventGetWorldTransform_Parms), &Z_Construct_UFunction_UTypedElementWorldInterface_GetWorldTransform_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTypedElementWorldInterface_GetWorldTransform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementWorldInterface_GetWorldTransform_Statics::NewProp_InElementHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementWorldInterface_GetWorldTransform_Statics::NewProp_OutTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementWorldInterface_GetWorldTransform_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementWorldInterface_GetWorldTransform_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTypedElementWorldInterface_GetWorldTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTypedElementWorldInterface, nullptr, "GetWorldTransform", nullptr, nullptr, Z_Construct_UFunction_UTypedElementWorldInterface_GetWorldTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementWorldInterface_GetWorldTransform_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTypedElementWorldInterface_GetWorldTransform_Statics::TypedElementWorldInterface_eventGetWorldTransform_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementWorldInterface_GetWorldTransform_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTypedElementWorldInterface_GetWorldTransform_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTypedElementWorldInterface_GetWorldTransform_Statics::TypedElementWorldInterface_eventGetWorldTransform_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTypedElementWorldInterface_GetWorldTransform()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTypedElementWorldInterface_GetWorldTransform_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ITypedElementWorldInterface::execGetWorldTransform)
{
	P_GET_STRUCT_REF(FScriptTypedElementHandle,Z_Param_Out_InElementHandle);
	P_GET_STRUCT_REF(FTransform,Z_Param_Out_OutTransform);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetWorldTransform(Z_Param_Out_InElementHandle,Z_Param_Out_OutTransform);
	P_NATIVE_END;
}
// End Interface UTypedElementWorldInterface Function GetWorldTransform

// Begin Interface UTypedElementWorldInterface Function IsTemplateElement
struct Z_Construct_UFunction_UTypedElementWorldInterface_IsTemplateElement_Statics
{
	struct TypedElementWorldInterface_eventIsTemplateElement_Parms
	{
		FScriptTypedElementHandle InElementHandle;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "TypedElementInterfaces|World" },
		{ "Comment", "/**\n\x09 * Is this element considered a template within its world (eg, a CDO or archetype).\n\x09 */" },
		{ "ModuleRelativePath", "Public/Elements/Interfaces/TypedElementWorldInterface.h" },
		{ "ToolTip", "Is this element considered a template within its world (eg, a CDO or archetype)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InElementHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InElementHandle;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTypedElementWorldInterface_IsTemplateElement_Statics::NewProp_InElementHandle = { "InElementHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TypedElementWorldInterface_eventIsTemplateElement_Parms, InElementHandle), Z_Construct_UScriptStruct_FScriptTypedElementHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InElementHandle_MetaData), NewProp_InElementHandle_MetaData) }; // 335387057
void Z_Construct_UFunction_UTypedElementWorldInterface_IsTemplateElement_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((TypedElementWorldInterface_eventIsTemplateElement_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTypedElementWorldInterface_IsTemplateElement_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TypedElementWorldInterface_eventIsTemplateElement_Parms), &Z_Construct_UFunction_UTypedElementWorldInterface_IsTemplateElement_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTypedElementWorldInterface_IsTemplateElement_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementWorldInterface_IsTemplateElement_Statics::NewProp_InElementHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementWorldInterface_IsTemplateElement_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementWorldInterface_IsTemplateElement_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTypedElementWorldInterface_IsTemplateElement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTypedElementWorldInterface, nullptr, "IsTemplateElement", nullptr, nullptr, Z_Construct_UFunction_UTypedElementWorldInterface_IsTemplateElement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementWorldInterface_IsTemplateElement_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTypedElementWorldInterface_IsTemplateElement_Statics::TypedElementWorldInterface_eventIsTemplateElement_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementWorldInterface_IsTemplateElement_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTypedElementWorldInterface_IsTemplateElement_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTypedElementWorldInterface_IsTemplateElement_Statics::TypedElementWorldInterface_eventIsTemplateElement_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTypedElementWorldInterface_IsTemplateElement()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTypedElementWorldInterface_IsTemplateElement_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ITypedElementWorldInterface::execIsTemplateElement)
{
	P_GET_STRUCT_REF(FScriptTypedElementHandle,Z_Param_Out_InElementHandle);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsTemplateElement(Z_Param_Out_InElementHandle);
	P_NATIVE_END;
}
// End Interface UTypedElementWorldInterface Function IsTemplateElement

// Begin Interface UTypedElementWorldInterface Function NotifyMovementEnded
struct Z_Construct_UFunction_UTypedElementWorldInterface_NotifyMovementEnded_Statics
{
	struct TypedElementWorldInterface_eventNotifyMovementEnded_Parms
	{
		FScriptTypedElementHandle InElementHandle;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "TypedElementInterfaces|World" },
		{ "Comment", "/**\n\x09 * Notify that this element is done being moved.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Elements/Interfaces/TypedElementWorldInterface.h" },
		{ "ToolTip", "Notify that this element is done being moved." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InElementHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InElementHandle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTypedElementWorldInterface_NotifyMovementEnded_Statics::NewProp_InElementHandle = { "InElementHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TypedElementWorldInterface_eventNotifyMovementEnded_Parms, InElementHandle), Z_Construct_UScriptStruct_FScriptTypedElementHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InElementHandle_MetaData), NewProp_InElementHandle_MetaData) }; // 335387057
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTypedElementWorldInterface_NotifyMovementEnded_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementWorldInterface_NotifyMovementEnded_Statics::NewProp_InElementHandle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementWorldInterface_NotifyMovementEnded_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTypedElementWorldInterface_NotifyMovementEnded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTypedElementWorldInterface, nullptr, "NotifyMovementEnded", nullptr, nullptr, Z_Construct_UFunction_UTypedElementWorldInterface_NotifyMovementEnded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementWorldInterface_NotifyMovementEnded_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTypedElementWorldInterface_NotifyMovementEnded_Statics::TypedElementWorldInterface_eventNotifyMovementEnded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementWorldInterface_NotifyMovementEnded_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTypedElementWorldInterface_NotifyMovementEnded_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTypedElementWorldInterface_NotifyMovementEnded_Statics::TypedElementWorldInterface_eventNotifyMovementEnded_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTypedElementWorldInterface_NotifyMovementEnded()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTypedElementWorldInterface_NotifyMovementEnded_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ITypedElementWorldInterface::execNotifyMovementEnded)
{
	P_GET_STRUCT_REF(FScriptTypedElementHandle,Z_Param_Out_InElementHandle);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->NotifyMovementEnded(Z_Param_Out_InElementHandle);
	P_NATIVE_END;
}
// End Interface UTypedElementWorldInterface Function NotifyMovementEnded

// Begin Interface UTypedElementWorldInterface Function NotifyMovementOngoing
struct Z_Construct_UFunction_UTypedElementWorldInterface_NotifyMovementOngoing_Statics
{
	struct TypedElementWorldInterface_eventNotifyMovementOngoing_Parms
	{
		FScriptTypedElementHandle InElementHandle;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "TypedElementInterfaces|World" },
		{ "Comment", "/**\n\x09 * Notify that this element is currently being moved.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Elements/Interfaces/TypedElementWorldInterface.h" },
		{ "ToolTip", "Notify that this element is currently being moved." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InElementHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InElementHandle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTypedElementWorldInterface_NotifyMovementOngoing_Statics::NewProp_InElementHandle = { "InElementHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TypedElementWorldInterface_eventNotifyMovementOngoing_Parms, InElementHandle), Z_Construct_UScriptStruct_FScriptTypedElementHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InElementHandle_MetaData), NewProp_InElementHandle_MetaData) }; // 335387057
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTypedElementWorldInterface_NotifyMovementOngoing_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementWorldInterface_NotifyMovementOngoing_Statics::NewProp_InElementHandle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementWorldInterface_NotifyMovementOngoing_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTypedElementWorldInterface_NotifyMovementOngoing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTypedElementWorldInterface, nullptr, "NotifyMovementOngoing", nullptr, nullptr, Z_Construct_UFunction_UTypedElementWorldInterface_NotifyMovementOngoing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementWorldInterface_NotifyMovementOngoing_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTypedElementWorldInterface_NotifyMovementOngoing_Statics::TypedElementWorldInterface_eventNotifyMovementOngoing_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementWorldInterface_NotifyMovementOngoing_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTypedElementWorldInterface_NotifyMovementOngoing_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTypedElementWorldInterface_NotifyMovementOngoing_Statics::TypedElementWorldInterface_eventNotifyMovementOngoing_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTypedElementWorldInterface_NotifyMovementOngoing()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTypedElementWorldInterface_NotifyMovementOngoing_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ITypedElementWorldInterface::execNotifyMovementOngoing)
{
	P_GET_STRUCT_REF(FScriptTypedElementHandle,Z_Param_Out_InElementHandle);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->NotifyMovementOngoing(Z_Param_Out_InElementHandle);
	P_NATIVE_END;
}
// End Interface UTypedElementWorldInterface Function NotifyMovementOngoing

// Begin Interface UTypedElementWorldInterface Function NotifyMovementStarted
struct Z_Construct_UFunction_UTypedElementWorldInterface_NotifyMovementStarted_Statics
{
	struct TypedElementWorldInterface_eventNotifyMovementStarted_Parms
	{
		FScriptTypedElementHandle InElementHandle;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "TypedElementInterfaces|World" },
		{ "Comment", "/**\n\x09 * Notify that this element is about to be moved.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Elements/Interfaces/TypedElementWorldInterface.h" },
		{ "ToolTip", "Notify that this element is about to be moved." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InElementHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InElementHandle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTypedElementWorldInterface_NotifyMovementStarted_Statics::NewProp_InElementHandle = { "InElementHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TypedElementWorldInterface_eventNotifyMovementStarted_Parms, InElementHandle), Z_Construct_UScriptStruct_FScriptTypedElementHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InElementHandle_MetaData), NewProp_InElementHandle_MetaData) }; // 335387057
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTypedElementWorldInterface_NotifyMovementStarted_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementWorldInterface_NotifyMovementStarted_Statics::NewProp_InElementHandle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementWorldInterface_NotifyMovementStarted_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTypedElementWorldInterface_NotifyMovementStarted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTypedElementWorldInterface, nullptr, "NotifyMovementStarted", nullptr, nullptr, Z_Construct_UFunction_UTypedElementWorldInterface_NotifyMovementStarted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementWorldInterface_NotifyMovementStarted_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTypedElementWorldInterface_NotifyMovementStarted_Statics::TypedElementWorldInterface_eventNotifyMovementStarted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementWorldInterface_NotifyMovementStarted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTypedElementWorldInterface_NotifyMovementStarted_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTypedElementWorldInterface_NotifyMovementStarted_Statics::TypedElementWorldInterface_eventNotifyMovementStarted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTypedElementWorldInterface_NotifyMovementStarted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTypedElementWorldInterface_NotifyMovementStarted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ITypedElementWorldInterface::execNotifyMovementStarted)
{
	P_GET_STRUCT_REF(FScriptTypedElementHandle,Z_Param_Out_InElementHandle);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->NotifyMovementStarted(Z_Param_Out_InElementHandle);
	P_NATIVE_END;
}
// End Interface UTypedElementWorldInterface Function NotifyMovementStarted

// Begin Interface UTypedElementWorldInterface Function PromoteElement
struct Z_Construct_UFunction_UTypedElementWorldInterface_PromoteElement_Statics
{
	struct TypedElementWorldInterface_eventPromoteElement_Parms
	{
		FScriptTypedElementHandle InElementHandle;
		UWorld* OverrideWorld;
		FScriptTypedElementHandle ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "TypedElementInterfaces|World" },
		{ "Comment", "/**\n\x09 * Promote an element when possible\n\x09 * Generally available when the element is a lighter representation of another element.\n\x09 * Like an instance for example.\n\x09 * \n\x09 * @param OverrideWorld Override the world in which the promotion might create new elements. Leave it to null to use the world from the handle.\n\x09 */" },
		{ "CPP_Default_OverrideWorld", "None" },
		{ "ModuleRelativePath", "Public/Elements/Interfaces/TypedElementWorldInterface.h" },
		{ "ToolTip", "Promote an element when possible\nGenerally available when the element is a lighter representation of another element.\nLike an instance for example.\n\n@param OverrideWorld Override the world in which the promotion might create new elements. Leave it to null to use the world from the handle." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InElementHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InElementHandle;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverrideWorld;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTypedElementWorldInterface_PromoteElement_Statics::NewProp_InElementHandle = { "InElementHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TypedElementWorldInterface_eventPromoteElement_Parms, InElementHandle), Z_Construct_UScriptStruct_FScriptTypedElementHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InElementHandle_MetaData), NewProp_InElementHandle_MetaData) }; // 335387057
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTypedElementWorldInterface_PromoteElement_Statics::NewProp_OverrideWorld = { "OverrideWorld", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TypedElementWorldInterface_eventPromoteElement_Parms, OverrideWorld), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTypedElementWorldInterface_PromoteElement_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TypedElementWorldInterface_eventPromoteElement_Parms, ReturnValue), Z_Construct_UScriptStruct_FScriptTypedElementHandle, METADATA_PARAMS(0, nullptr) }; // 335387057
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTypedElementWorldInterface_PromoteElement_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementWorldInterface_PromoteElement_Statics::NewProp_InElementHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementWorldInterface_PromoteElement_Statics::NewProp_OverrideWorld,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementWorldInterface_PromoteElement_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementWorldInterface_PromoteElement_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTypedElementWorldInterface_PromoteElement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTypedElementWorldInterface, nullptr, "PromoteElement", nullptr, nullptr, Z_Construct_UFunction_UTypedElementWorldInterface_PromoteElement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementWorldInterface_PromoteElement_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTypedElementWorldInterface_PromoteElement_Statics::TypedElementWorldInterface_eventPromoteElement_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementWorldInterface_PromoteElement_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTypedElementWorldInterface_PromoteElement_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTypedElementWorldInterface_PromoteElement_Statics::TypedElementWorldInterface_eventPromoteElement_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTypedElementWorldInterface_PromoteElement()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTypedElementWorldInterface_PromoteElement_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ITypedElementWorldInterface::execPromoteElement)
{
	P_GET_STRUCT_REF(FScriptTypedElementHandle,Z_Param_Out_InElementHandle);
	P_GET_OBJECT(UWorld,Z_Param_OverrideWorld);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FScriptTypedElementHandle*)Z_Param__Result=P_THIS->PromoteElement(Z_Param_Out_InElementHandle,Z_Param_OverrideWorld);
	P_NATIVE_END;
}
// End Interface UTypedElementWorldInterface Function PromoteElement

// Begin Interface UTypedElementWorldInterface Function SetPivotOffset
struct Z_Construct_UFunction_UTypedElementWorldInterface_SetPivotOffset_Statics
{
	struct TypedElementWorldInterface_eventSetPivotOffset_Parms
	{
		FScriptTypedElementHandle InElementHandle;
		FVector InPivotOffset;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "TypedElementInterfaces|World" },
		{ "Comment", "/**\n\x09 * Attempt to set the local space offset of this element that should be added to its pivot location.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Elements/Interfaces/TypedElementWorldInterface.h" },
		{ "ToolTip", "Attempt to set the local space offset of this element that should be added to its pivot location." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InElementHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InPivotOffset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InElementHandle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InPivotOffset;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTypedElementWorldInterface_SetPivotOffset_Statics::NewProp_InElementHandle = { "InElementHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TypedElementWorldInterface_eventSetPivotOffset_Parms, InElementHandle), Z_Construct_UScriptStruct_FScriptTypedElementHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InElementHandle_MetaData), NewProp_InElementHandle_MetaData) }; // 335387057
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTypedElementWorldInterface_SetPivotOffset_Statics::NewProp_InPivotOffset = { "InPivotOffset", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TypedElementWorldInterface_eventSetPivotOffset_Parms, InPivotOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InPivotOffset_MetaData), NewProp_InPivotOffset_MetaData) };
void Z_Construct_UFunction_UTypedElementWorldInterface_SetPivotOffset_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((TypedElementWorldInterface_eventSetPivotOffset_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTypedElementWorldInterface_SetPivotOffset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TypedElementWorldInterface_eventSetPivotOffset_Parms), &Z_Construct_UFunction_UTypedElementWorldInterface_SetPivotOffset_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTypedElementWorldInterface_SetPivotOffset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementWorldInterface_SetPivotOffset_Statics::NewProp_InElementHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementWorldInterface_SetPivotOffset_Statics::NewProp_InPivotOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementWorldInterface_SetPivotOffset_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementWorldInterface_SetPivotOffset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTypedElementWorldInterface_SetPivotOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTypedElementWorldInterface, nullptr, "SetPivotOffset", nullptr, nullptr, Z_Construct_UFunction_UTypedElementWorldInterface_SetPivotOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementWorldInterface_SetPivotOffset_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTypedElementWorldInterface_SetPivotOffset_Statics::TypedElementWorldInterface_eventSetPivotOffset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementWorldInterface_SetPivotOffset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTypedElementWorldInterface_SetPivotOffset_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTypedElementWorldInterface_SetPivotOffset_Statics::TypedElementWorldInterface_eventSetPivotOffset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTypedElementWorldInterface_SetPivotOffset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTypedElementWorldInterface_SetPivotOffset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ITypedElementWorldInterface::execSetPivotOffset)
{
	P_GET_STRUCT_REF(FScriptTypedElementHandle,Z_Param_Out_InElementHandle);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_InPivotOffset);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetPivotOffset(Z_Param_Out_InElementHandle,Z_Param_Out_InPivotOffset);
	P_NATIVE_END;
}
// End Interface UTypedElementWorldInterface Function SetPivotOffset

// Begin Interface UTypedElementWorldInterface Function SetRelativeTransform
struct Z_Construct_UFunction_UTypedElementWorldInterface_SetRelativeTransform_Statics
{
	struct TypedElementWorldInterface_eventSetRelativeTransform_Parms
	{
		FScriptTypedElementHandle InElementHandle;
		FTransform InTransform;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "TypedElementInterfaces|World" },
		{ "Comment", "/**\n\x09 * Attempt to set the transform of this element relative to its parent.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Elements/Interfaces/TypedElementWorldInterface.h" },
		{ "ToolTip", "Attempt to set the transform of this element relative to its parent." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InElementHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InElementHandle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InTransform;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTypedElementWorldInterface_SetRelativeTransform_Statics::NewProp_InElementHandle = { "InElementHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TypedElementWorldInterface_eventSetRelativeTransform_Parms, InElementHandle), Z_Construct_UScriptStruct_FScriptTypedElementHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InElementHandle_MetaData), NewProp_InElementHandle_MetaData) }; // 335387057
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTypedElementWorldInterface_SetRelativeTransform_Statics::NewProp_InTransform = { "InTransform", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TypedElementWorldInterface_eventSetRelativeTransform_Parms, InTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InTransform_MetaData), NewProp_InTransform_MetaData) };
void Z_Construct_UFunction_UTypedElementWorldInterface_SetRelativeTransform_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((TypedElementWorldInterface_eventSetRelativeTransform_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTypedElementWorldInterface_SetRelativeTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TypedElementWorldInterface_eventSetRelativeTransform_Parms), &Z_Construct_UFunction_UTypedElementWorldInterface_SetRelativeTransform_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTypedElementWorldInterface_SetRelativeTransform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementWorldInterface_SetRelativeTransform_Statics::NewProp_InElementHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementWorldInterface_SetRelativeTransform_Statics::NewProp_InTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementWorldInterface_SetRelativeTransform_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementWorldInterface_SetRelativeTransform_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTypedElementWorldInterface_SetRelativeTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTypedElementWorldInterface, nullptr, "SetRelativeTransform", nullptr, nullptr, Z_Construct_UFunction_UTypedElementWorldInterface_SetRelativeTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementWorldInterface_SetRelativeTransform_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTypedElementWorldInterface_SetRelativeTransform_Statics::TypedElementWorldInterface_eventSetRelativeTransform_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementWorldInterface_SetRelativeTransform_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTypedElementWorldInterface_SetRelativeTransform_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTypedElementWorldInterface_SetRelativeTransform_Statics::TypedElementWorldInterface_eventSetRelativeTransform_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTypedElementWorldInterface_SetRelativeTransform()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTypedElementWorldInterface_SetRelativeTransform_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ITypedElementWorldInterface::execSetRelativeTransform)
{
	P_GET_STRUCT_REF(FScriptTypedElementHandle,Z_Param_Out_InElementHandle);
	P_GET_STRUCT_REF(FTransform,Z_Param_Out_InTransform);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetRelativeTransform(Z_Param_Out_InElementHandle,Z_Param_Out_InTransform);
	P_NATIVE_END;
}
// End Interface UTypedElementWorldInterface Function SetRelativeTransform

// Begin Interface UTypedElementWorldInterface Function SetWorldTransform
struct Z_Construct_UFunction_UTypedElementWorldInterface_SetWorldTransform_Statics
{
	struct TypedElementWorldInterface_eventSetWorldTransform_Parms
	{
		FScriptTypedElementHandle InElementHandle;
		FTransform InTransform;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "TypedElementInterfaces|World" },
		{ "Comment", "/**\n\x09 * Attempt to set the transform of this element within its owner world.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Elements/Interfaces/TypedElementWorldInterface.h" },
		{ "ToolTip", "Attempt to set the transform of this element within its owner world." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InElementHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InElementHandle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InTransform;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTypedElementWorldInterface_SetWorldTransform_Statics::NewProp_InElementHandle = { "InElementHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TypedElementWorldInterface_eventSetWorldTransform_Parms, InElementHandle), Z_Construct_UScriptStruct_FScriptTypedElementHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InElementHandle_MetaData), NewProp_InElementHandle_MetaData) }; // 335387057
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTypedElementWorldInterface_SetWorldTransform_Statics::NewProp_InTransform = { "InTransform", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TypedElementWorldInterface_eventSetWorldTransform_Parms, InTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InTransform_MetaData), NewProp_InTransform_MetaData) };
void Z_Construct_UFunction_UTypedElementWorldInterface_SetWorldTransform_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((TypedElementWorldInterface_eventSetWorldTransform_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTypedElementWorldInterface_SetWorldTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TypedElementWorldInterface_eventSetWorldTransform_Parms), &Z_Construct_UFunction_UTypedElementWorldInterface_SetWorldTransform_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTypedElementWorldInterface_SetWorldTransform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementWorldInterface_SetWorldTransform_Statics::NewProp_InElementHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementWorldInterface_SetWorldTransform_Statics::NewProp_InTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementWorldInterface_SetWorldTransform_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementWorldInterface_SetWorldTransform_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTypedElementWorldInterface_SetWorldTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTypedElementWorldInterface, nullptr, "SetWorldTransform", nullptr, nullptr, Z_Construct_UFunction_UTypedElementWorldInterface_SetWorldTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementWorldInterface_SetWorldTransform_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTypedElementWorldInterface_SetWorldTransform_Statics::TypedElementWorldInterface_eventSetWorldTransform_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementWorldInterface_SetWorldTransform_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTypedElementWorldInterface_SetWorldTransform_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTypedElementWorldInterface_SetWorldTransform_Statics::TypedElementWorldInterface_eventSetWorldTransform_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTypedElementWorldInterface_SetWorldTransform()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTypedElementWorldInterface_SetWorldTransform_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ITypedElementWorldInterface::execSetWorldTransform)
{
	P_GET_STRUCT_REF(FScriptTypedElementHandle,Z_Param_Out_InElementHandle);
	P_GET_STRUCT_REF(FTransform,Z_Param_Out_InTransform);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetWorldTransform(Z_Param_Out_InElementHandle,Z_Param_Out_InTransform);
	P_NATIVE_END;
}
// End Interface UTypedElementWorldInterface Function SetWorldTransform

// Begin Interface UTypedElementWorldInterface
void UTypedElementWorldInterface::StaticRegisterNativesUTypedElementWorldInterface()
{
	UClass* Class = UTypedElementWorldInterface::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CanDeleteElement", &ITypedElementWorldInterface::execCanDeleteElement },
		{ "CanDuplicateElement", &ITypedElementWorldInterface::execCanDuplicateElement },
		{ "CanEditElement", &ITypedElementWorldInterface::execCanEditElement },
		{ "CanMoveElement", &ITypedElementWorldInterface::execCanMoveElement },
		{ "CanPromoteElement", &ITypedElementWorldInterface::execCanPromoteElement },
		{ "CanScaleElement", &ITypedElementWorldInterface::execCanScaleElement },
		{ "DeleteElement", &ITypedElementWorldInterface::execDeleteElement },
		{ "DuplicateElement", &ITypedElementWorldInterface::execDuplicateElement },
		{ "GetBounds", &ITypedElementWorldInterface::execGetBounds },
		{ "GetOwnerLevel", &ITypedElementWorldInterface::execGetOwnerLevel },
		{ "GetOwnerWorld", &ITypedElementWorldInterface::execGetOwnerWorld },
		{ "GetPivotOffset", &ITypedElementWorldInterface::execGetPivotOffset },
		{ "GetRelativeTransform", &ITypedElementWorldInterface::execGetRelativeTransform },
		{ "GetWorldTransform", &ITypedElementWorldInterface::execGetWorldTransform },
		{ "IsTemplateElement", &ITypedElementWorldInterface::execIsTemplateElement },
		{ "NotifyMovementEnded", &ITypedElementWorldInterface::execNotifyMovementEnded },
		{ "NotifyMovementOngoing", &ITypedElementWorldInterface::execNotifyMovementOngoing },
		{ "NotifyMovementStarted", &ITypedElementWorldInterface::execNotifyMovementStarted },
		{ "PromoteElement", &ITypedElementWorldInterface::execPromoteElement },
		{ "SetPivotOffset", &ITypedElementWorldInterface::execSetPivotOffset },
		{ "SetRelativeTransform", &ITypedElementWorldInterface::execSetRelativeTransform },
		{ "SetWorldTransform", &ITypedElementWorldInterface::execSetWorldTransform },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTypedElementWorldInterface);
UClass* Z_Construct_UClass_UTypedElementWorldInterface_NoRegister()
{
	return UTypedElementWorldInterface::StaticClass();
}
struct Z_Construct_UClass_UTypedElementWorldInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Public/Elements/Interfaces/TypedElementWorldInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UTypedElementWorldInterface_CanDeleteElement, "CanDeleteElement" }, // 294966629
		{ &Z_Construct_UFunction_UTypedElementWorldInterface_CanDuplicateElement, "CanDuplicateElement" }, // 288967101
		{ &Z_Construct_UFunction_UTypedElementWorldInterface_CanEditElement, "CanEditElement" }, // 4221224118
		{ &Z_Construct_UFunction_UTypedElementWorldInterface_CanMoveElement, "CanMoveElement" }, // 3094614644
		{ &Z_Construct_UFunction_UTypedElementWorldInterface_CanPromoteElement, "CanPromoteElement" }, // 3341642584
		{ &Z_Construct_UFunction_UTypedElementWorldInterface_CanScaleElement, "CanScaleElement" }, // 4122250438
		{ &Z_Construct_UFunction_UTypedElementWorldInterface_DeleteElement, "DeleteElement" }, // 3186673839
		{ &Z_Construct_UFunction_UTypedElementWorldInterface_DuplicateElement, "DuplicateElement" }, // 2438885498
		{ &Z_Construct_UFunction_UTypedElementWorldInterface_GetBounds, "GetBounds" }, // 1048735286
		{ &Z_Construct_UFunction_UTypedElementWorldInterface_GetOwnerLevel, "GetOwnerLevel" }, // 3308329121
		{ &Z_Construct_UFunction_UTypedElementWorldInterface_GetOwnerWorld, "GetOwnerWorld" }, // 856334753
		{ &Z_Construct_UFunction_UTypedElementWorldInterface_GetPivotOffset, "GetPivotOffset" }, // 2548392228
		{ &Z_Construct_UFunction_UTypedElementWorldInterface_GetRelativeTransform, "GetRelativeTransform" }, // 1293868949
		{ &Z_Construct_UFunction_UTypedElementWorldInterface_GetWorldTransform, "GetWorldTransform" }, // 2830679960
		{ &Z_Construct_UFunction_UTypedElementWorldInterface_IsTemplateElement, "IsTemplateElement" }, // 951219535
		{ &Z_Construct_UFunction_UTypedElementWorldInterface_NotifyMovementEnded, "NotifyMovementEnded" }, // 3966347246
		{ &Z_Construct_UFunction_UTypedElementWorldInterface_NotifyMovementOngoing, "NotifyMovementOngoing" }, // 330509139
		{ &Z_Construct_UFunction_UTypedElementWorldInterface_NotifyMovementStarted, "NotifyMovementStarted" }, // 2886240247
		{ &Z_Construct_UFunction_UTypedElementWorldInterface_PromoteElement, "PromoteElement" }, // 1107894408
		{ &Z_Construct_UFunction_UTypedElementWorldInterface_SetPivotOffset, "SetPivotOffset" }, // 2259604224
		{ &Z_Construct_UFunction_UTypedElementWorldInterface_SetRelativeTransform, "SetRelativeTransform" }, // 1157126078
		{ &Z_Construct_UFunction_UTypedElementWorldInterface_SetWorldTransform, "SetWorldTransform" }, // 553706413
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ITypedElementWorldInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UTypedElementWorldInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTypedElementWorldInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTypedElementWorldInterface_Statics::ClassParams = {
	&UTypedElementWorldInterface::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTypedElementWorldInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UTypedElementWorldInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTypedElementWorldInterface()
{
	if (!Z_Registration_Info_UClass_UTypedElementWorldInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTypedElementWorldInterface.OuterSingleton, Z_Construct_UClass_UTypedElementWorldInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTypedElementWorldInterface.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UTypedElementWorldInterface>()
{
	return UTypedElementWorldInterface::StaticClass();
}
UTypedElementWorldInterface::UTypedElementWorldInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTypedElementWorldInterface);
UTypedElementWorldInterface::~UTypedElementWorldInterface() {}
// End Interface UTypedElementWorldInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Elements_Interfaces_TypedElementWorldInterface_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ETypedElementWorldType_StaticEnum, TEXT("ETypedElementWorldType"), &Z_Registration_Info_UEnum_ETypedElementWorldType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1820708703U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FTypedElementDeletionOptions::StaticStruct, Z_Construct_UScriptStruct_FTypedElementDeletionOptions_Statics::NewStructOps, TEXT("TypedElementDeletionOptions"), &Z_Registration_Info_UScriptStruct_TypedElementDeletionOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTypedElementDeletionOptions), 164026916U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTypedElementWorldInterface, UTypedElementWorldInterface::StaticClass, TEXT("UTypedElementWorldInterface"), &Z_Registration_Info_UClass_UTypedElementWorldInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTypedElementWorldInterface), 2524139720U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Elements_Interfaces_TypedElementWorldInterface_h_951086865(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Elements_Interfaces_TypedElementWorldInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Elements_Interfaces_TypedElementWorldInterface_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Elements_Interfaces_TypedElementWorldInterface_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Elements_Interfaces_TypedElementWorldInterface_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Elements_Interfaces_TypedElementWorldInterface_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Elements_Interfaces_TypedElementWorldInterface_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
