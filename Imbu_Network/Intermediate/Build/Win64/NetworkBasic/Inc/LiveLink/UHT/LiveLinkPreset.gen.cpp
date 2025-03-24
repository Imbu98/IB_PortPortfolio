// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LiveLink/Public/LiveLinkPreset.h"
#include "Runtime/Engine/Classes/Engine/LatentActionManager.h"
#include "Runtime/LiveLinkInterface/Public/LiveLinkPresetTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiveLinkPreset() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLatentActionInfo();
LIVELINK_API UClass* Z_Construct_UClass_ULiveLinkPreset();
LIVELINK_API UClass* Z_Construct_UClass_ULiveLinkPreset_NoRegister();
LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkSourcePreset();
LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkSubjectPreset();
UPackage* Z_Construct_UPackage__Script_LiveLink();
// End Cross Module References

// Begin Class ULiveLinkPreset Function AddToClient
struct Z_Construct_UFunction_ULiveLinkPreset_AddToClient_Statics
{
	struct LiveLinkPreset_eventAddToClient_Parms
	{
		bool bRecreatePresets;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "/**\n\x09 * Add the sources and subjects from this preset, but leave any existing sources and subjects connected.\n\x09 *\n\x09 * @param bRecreatePresets\x09When true, if subjects and sources from this preset already exist, we will recreate them.\n\x09 *\n\x09 * @return True is all sources and subjects from this preset could be created and added.\n\x09 */" },
		{ "CPP_Default_bRecreatePresets", "true" },
		{ "ModuleRelativePath", "Public/LiveLinkPreset.h" },
		{ "ToolTip", "Add the sources and subjects from this preset, but leave any existing sources and subjects connected.\n\n@param bRecreatePresets      When true, if subjects and sources from this preset already exist, we will recreate them.\n\n@return True is all sources and subjects from this preset could be created and added." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRecreatePresets_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_bRecreatePresets_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRecreatePresets;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ULiveLinkPreset_AddToClient_Statics::NewProp_bRecreatePresets_SetBit(void* Obj)
{
	((LiveLinkPreset_eventAddToClient_Parms*)Obj)->bRecreatePresets = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULiveLinkPreset_AddToClient_Statics::NewProp_bRecreatePresets = { "bRecreatePresets", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LiveLinkPreset_eventAddToClient_Parms), &Z_Construct_UFunction_ULiveLinkPreset_AddToClient_Statics::NewProp_bRecreatePresets_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRecreatePresets_MetaData), NewProp_bRecreatePresets_MetaData) };
void Z_Construct_UFunction_ULiveLinkPreset_AddToClient_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((LiveLinkPreset_eventAddToClient_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULiveLinkPreset_AddToClient_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LiveLinkPreset_eventAddToClient_Parms), &Z_Construct_UFunction_ULiveLinkPreset_AddToClient_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULiveLinkPreset_AddToClient_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkPreset_AddToClient_Statics::NewProp_bRecreatePresets,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkPreset_AddToClient_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkPreset_AddToClient_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULiveLinkPreset_AddToClient_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULiveLinkPreset, nullptr, "AddToClient", nullptr, nullptr, Z_Construct_UFunction_ULiveLinkPreset_AddToClient_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkPreset_AddToClient_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULiveLinkPreset_AddToClient_Statics::LiveLinkPreset_eventAddToClient_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkPreset_AddToClient_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULiveLinkPreset_AddToClient_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULiveLinkPreset_AddToClient_Statics::LiveLinkPreset_eventAddToClient_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULiveLinkPreset_AddToClient()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULiveLinkPreset_AddToClient_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULiveLinkPreset::execAddToClient)
{
	P_GET_UBOOL(Z_Param_bRecreatePresets);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->AddToClient(Z_Param_bRecreatePresets);
	P_NATIVE_END;
}
// End Class ULiveLinkPreset Function AddToClient

// Begin Class ULiveLinkPreset Function ApplyToClient
struct Z_Construct_UFunction_ULiveLinkPreset_ApplyToClient_Statics
{
	struct LiveLinkPreset_eventApplyToClient_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "LiveLink" },
		{ "ModuleRelativePath", "Public/LiveLinkPreset.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ULiveLinkPreset_ApplyToClient_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((LiveLinkPreset_eventApplyToClient_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULiveLinkPreset_ApplyToClient_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LiveLinkPreset_eventApplyToClient_Parms), &Z_Construct_UFunction_ULiveLinkPreset_ApplyToClient_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULiveLinkPreset_ApplyToClient_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkPreset_ApplyToClient_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkPreset_ApplyToClient_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULiveLinkPreset_ApplyToClient_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULiveLinkPreset, nullptr, "ApplyToClient", nullptr, nullptr, Z_Construct_UFunction_ULiveLinkPreset_ApplyToClient_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkPreset_ApplyToClient_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULiveLinkPreset_ApplyToClient_Statics::LiveLinkPreset_eventApplyToClient_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkPreset_ApplyToClient_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULiveLinkPreset_ApplyToClient_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULiveLinkPreset_ApplyToClient_Statics::LiveLinkPreset_eventApplyToClient_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULiveLinkPreset_ApplyToClient()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULiveLinkPreset_ApplyToClient_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULiveLinkPreset::execApplyToClient)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ApplyToClient();
	P_NATIVE_END;
}
// End Class ULiveLinkPreset Function ApplyToClient

// Begin Class ULiveLinkPreset Function ApplyToClientLatent
struct Z_Construct_UFunction_ULiveLinkPreset_ApplyToClientLatent_Statics
{
	struct LiveLinkPreset_eventApplyToClientLatent_Parms
	{
		UObject* WorldContextObject;
		FLatentActionInfo LatentInfo;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "/**\n\x09 * Remove all previous sources and subjects and add the sources and subjects from this preset.\n\x09 * @return True is all sources and subjects from this preset could be created and added.\n\x09 */" },
		{ "DefaultToSelf", "WorldContextObject" },
		{ "HidePin", "WorldContextObject" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/LiveLinkPreset.h" },
		{ "ToolTip", "Remove all previous sources and subjects and add the sources and subjects from this preset.\n@return True is all sources and subjects from this preset could be created and added." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULiveLinkPreset_ApplyToClientLatent_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LiveLinkPreset_eventApplyToClientLatent_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULiveLinkPreset_ApplyToClientLatent_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LiveLinkPreset_eventApplyToClientLatent_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(0, nullptr) }; // 1503398820
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULiveLinkPreset_ApplyToClientLatent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkPreset_ApplyToClientLatent_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkPreset_ApplyToClientLatent_Statics::NewProp_LatentInfo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkPreset_ApplyToClientLatent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULiveLinkPreset_ApplyToClientLatent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULiveLinkPreset, nullptr, "ApplyToClientLatent", nullptr, nullptr, Z_Construct_UFunction_ULiveLinkPreset_ApplyToClientLatent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkPreset_ApplyToClientLatent_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULiveLinkPreset_ApplyToClientLatent_Statics::LiveLinkPreset_eventApplyToClientLatent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkPreset_ApplyToClientLatent_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULiveLinkPreset_ApplyToClientLatent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULiveLinkPreset_ApplyToClientLatent_Statics::LiveLinkPreset_eventApplyToClientLatent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULiveLinkPreset_ApplyToClientLatent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULiveLinkPreset_ApplyToClientLatent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULiveLinkPreset::execApplyToClientLatent)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ApplyToClientLatent(Z_Param_WorldContextObject,Z_Param_LatentInfo);
	P_NATIVE_END;
}
// End Class ULiveLinkPreset Function ApplyToClientLatent

// Begin Class ULiveLinkPreset Function BuildFromClient
struct Z_Construct_UFunction_ULiveLinkPreset_BuildFromClient_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "/** Reset this preset and build the list of sources and subjects from the client. */" },
		{ "ModuleRelativePath", "Public/LiveLinkPreset.h" },
		{ "ToolTip", "Reset this preset and build the list of sources and subjects from the client." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULiveLinkPreset_BuildFromClient_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULiveLinkPreset, nullptr, "BuildFromClient", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkPreset_BuildFromClient_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULiveLinkPreset_BuildFromClient_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ULiveLinkPreset_BuildFromClient()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULiveLinkPreset_BuildFromClient_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULiveLinkPreset::execBuildFromClient)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BuildFromClient();
	P_NATIVE_END;
}
// End Class ULiveLinkPreset Function BuildFromClient

// Begin Class ULiveLinkPreset
void ULiveLinkPreset::StaticRegisterNativesULiveLinkPreset()
{
	UClass* Class = ULiveLinkPreset::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddToClient", &ULiveLinkPreset::execAddToClient },
		{ "ApplyToClient", &ULiveLinkPreset::execApplyToClient },
		{ "ApplyToClientLatent", &ULiveLinkPreset::execApplyToClientLatent },
		{ "BuildFromClient", &ULiveLinkPreset::execBuildFromClient },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULiveLinkPreset);
UClass* Z_Construct_UClass_ULiveLinkPreset_NoRegister()
{
	return ULiveLinkPreset::StaticClass();
}
struct Z_Construct_UClass_ULiveLinkPreset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "LiveLinkPreset.h" },
		{ "ModuleRelativePath", "Public/LiveLinkPreset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Sources_MetaData[] = {
		{ "Category", "LiveLinkSourcePresets" },
		{ "ModuleRelativePath", "Public/LiveLinkPreset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Subjects_MetaData[] = {
		{ "Category", "LiveLinkSubjectPresets" },
		{ "ModuleRelativePath", "Public/LiveLinkPreset.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Sources_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Sources;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Subjects_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Subjects;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ULiveLinkPreset_AddToClient, "AddToClient" }, // 4046080379
		{ &Z_Construct_UFunction_ULiveLinkPreset_ApplyToClient, "ApplyToClient" }, // 2797730463
		{ &Z_Construct_UFunction_ULiveLinkPreset_ApplyToClientLatent, "ApplyToClientLatent" }, // 2073690973
		{ &Z_Construct_UFunction_ULiveLinkPreset_BuildFromClient, "BuildFromClient" }, // 1628178522
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULiveLinkPreset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULiveLinkPreset_Statics::NewProp_Sources_Inner = { "Sources", nullptr, (EPropertyFlags)0x0000008000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLiveLinkSourcePreset, METADATA_PARAMS(0, nullptr) }; // 1670012231
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULiveLinkPreset_Statics::NewProp_Sources = { "Sources", nullptr, (EPropertyFlags)0x0040008000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULiveLinkPreset, Sources), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Sources_MetaData), NewProp_Sources_MetaData) }; // 1670012231
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULiveLinkPreset_Statics::NewProp_Subjects_Inner = { "Subjects", nullptr, (EPropertyFlags)0x0000008000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLiveLinkSubjectPreset, METADATA_PARAMS(0, nullptr) }; // 2293914654
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULiveLinkPreset_Statics::NewProp_Subjects = { "Subjects", nullptr, (EPropertyFlags)0x0040008000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULiveLinkPreset, Subjects), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Subjects_MetaData), NewProp_Subjects_MetaData) }; // 2293914654
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULiveLinkPreset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkPreset_Statics::NewProp_Sources_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkPreset_Statics::NewProp_Sources,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkPreset_Statics::NewProp_Subjects_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkPreset_Statics::NewProp_Subjects,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkPreset_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULiveLinkPreset_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_LiveLink,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkPreset_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULiveLinkPreset_Statics::ClassParams = {
	&ULiveLinkPreset::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ULiveLinkPreset_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkPreset_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkPreset_Statics::Class_MetaDataParams), Z_Construct_UClass_ULiveLinkPreset_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULiveLinkPreset()
{
	if (!Z_Registration_Info_UClass_ULiveLinkPreset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULiveLinkPreset.OuterSingleton, Z_Construct_UClass_ULiveLinkPreset_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULiveLinkPreset.OuterSingleton;
}
template<> LIVELINK_API UClass* StaticClass<ULiveLinkPreset>()
{
	return ULiveLinkPreset::StaticClass();
}
ULiveLinkPreset::ULiveLinkPreset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULiveLinkPreset);
// End Class ULiveLinkPreset

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkPreset_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULiveLinkPreset, ULiveLinkPreset::StaticClass, TEXT("ULiveLinkPreset"), &Z_Registration_Info_UClass_ULiveLinkPreset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULiveLinkPreset), 2509601840U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkPreset_h_1895657648(TEXT("/Script/LiveLink"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkPreset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkPreset_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
