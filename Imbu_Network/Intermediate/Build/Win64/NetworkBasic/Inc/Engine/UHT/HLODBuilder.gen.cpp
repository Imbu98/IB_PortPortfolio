// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/WorldPartition/HLOD/HLODBuilder.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHLODBuilder() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTopLevelAssetPath();
ENGINE_API UClass* Z_Construct_UClass_UHLODBuilder();
ENGINE_API UClass* Z_Construct_UClass_UHLODBuilder_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UHLODBuilderSettings();
ENGINE_API UClass* Z_Construct_UClass_UHLODBuilderSettings_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UHLODInstancedStaticMeshComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UNullHLODBuilder();
ENGINE_API UClass* Z_Construct_UClass_UNullHLODBuilder_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHLODBuildInputReferencedAssets();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHLODBuildInputStats();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UHLODBuilderSettings
void UHLODBuilderSettings::StaticRegisterNativesUHLODBuilderSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHLODBuilderSettings);
UClass* Z_Construct_UClass_UHLODBuilderSettings_NoRegister()
{
	return UHLODBuilderSettings::StaticClass();
}
struct Z_Construct_UClass_UHLODBuilderSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base class for all HLOD Builder settings\n */" },
		{ "IncludePath", "WorldPartition/HLOD/HLODBuilder.h" },
		{ "ModuleRelativePath", "Public/WorldPartition/HLOD/HLODBuilder.h" },
		{ "ToolTip", "Base class for all HLOD Builder settings" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHLODBuilderSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UHLODBuilderSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHLODBuilderSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHLODBuilderSettings_Statics::ClassParams = {
	&UHLODBuilderSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHLODBuilderSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UHLODBuilderSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHLODBuilderSettings()
{
	if (!Z_Registration_Info_UClass_UHLODBuilderSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHLODBuilderSettings.OuterSingleton, Z_Construct_UClass_UHLODBuilderSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHLODBuilderSettings.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UHLODBuilderSettings>()
{
	return UHLODBuilderSettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHLODBuilderSettings);
UHLODBuilderSettings::~UHLODBuilderSettings() {}
// End Class UHLODBuilderSettings

// Begin ScriptStruct FHLODBuildInputReferencedAssets
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HLODBuildInputReferencedAssets;
class UScriptStruct* FHLODBuildInputReferencedAssets::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HLODBuildInputReferencedAssets.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HLODBuildInputReferencedAssets.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHLODBuildInputReferencedAssets, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("HLODBuildInputReferencedAssets"));
	}
	return Z_Registration_Info_UScriptStruct_HLODBuildInputReferencedAssets.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FHLODBuildInputReferencedAssets>()
{
	return FHLODBuildInputReferencedAssets::StaticStruct();
}
struct Z_Construct_UScriptStruct_FHLODBuildInputReferencedAssets_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Keep track of assets used as input to the HLOD generation of a given HLOD actor, along with the number of occurences.\n */" },
		{ "ModuleRelativePath", "Public/WorldPartition/HLOD/HLODBuilder.h" },
		{ "ToolTip", "Keep track of assets used as input to the HLOD generation of a given HLOD actor, along with the number of occurences." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshes_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/HLOD/HLODBuilder.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_StaticMeshes_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StaticMeshes_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_StaticMeshes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHLODBuildInputReferencedAssets>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FHLODBuildInputReferencedAssets_Statics::NewProp_StaticMeshes_ValueProp = { "StaticMeshes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHLODBuildInputReferencedAssets_Statics::NewProp_StaticMeshes_Key_KeyProp = { "StaticMeshes_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTopLevelAssetPath, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FHLODBuildInputReferencedAssets_Statics::NewProp_StaticMeshes = { "StaticMeshes", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHLODBuildInputReferencedAssets, StaticMeshes), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticMeshes_MetaData), NewProp_StaticMeshes_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHLODBuildInputReferencedAssets_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHLODBuildInputReferencedAssets_Statics::NewProp_StaticMeshes_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHLODBuildInputReferencedAssets_Statics::NewProp_StaticMeshes_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHLODBuildInputReferencedAssets_Statics::NewProp_StaticMeshes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHLODBuildInputReferencedAssets_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHLODBuildInputReferencedAssets_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"HLODBuildInputReferencedAssets",
	Z_Construct_UScriptStruct_FHLODBuildInputReferencedAssets_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHLODBuildInputReferencedAssets_Statics::PropPointers),
	sizeof(FHLODBuildInputReferencedAssets),
	alignof(FHLODBuildInputReferencedAssets),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHLODBuildInputReferencedAssets_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FHLODBuildInputReferencedAssets_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FHLODBuildInputReferencedAssets()
{
	if (!Z_Registration_Info_UScriptStruct_HLODBuildInputReferencedAssets.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HLODBuildInputReferencedAssets.InnerSingleton, Z_Construct_UScriptStruct_FHLODBuildInputReferencedAssets_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_HLODBuildInputReferencedAssets.InnerSingleton;
}
// End ScriptStruct FHLODBuildInputReferencedAssets

// Begin ScriptStruct FHLODBuildInputStats
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HLODBuildInputStats;
class UScriptStruct* FHLODBuildInputStats::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HLODBuildInputStats.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HLODBuildInputStats.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHLODBuildInputStats, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("HLODBuildInputStats"));
	}
	return Z_Registration_Info_UScriptStruct_HLODBuildInputStats.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FHLODBuildInputStats>()
{
	return FHLODBuildInputStats::StaticStruct();
}
struct Z_Construct_UScriptStruct_FHLODBuildInputStats_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Referenced assets per HLOD builder.\n */" },
		{ "ModuleRelativePath", "Public/WorldPartition/HLOD/HLODBuilder.h" },
		{ "ToolTip", "Referenced assets per HLOD builder." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BuildersReferencedAssets_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/HLOD/HLODBuilder.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_BuildersReferencedAssets_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_BuildersReferencedAssets_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_BuildersReferencedAssets;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHLODBuildInputStats>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHLODBuildInputStats_Statics::NewProp_BuildersReferencedAssets_ValueProp = { "BuildersReferencedAssets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FHLODBuildInputReferencedAssets, METADATA_PARAMS(0, nullptr) }; // 798864677
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FHLODBuildInputStats_Statics::NewProp_BuildersReferencedAssets_Key_KeyProp = { "BuildersReferencedAssets_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FHLODBuildInputStats_Statics::NewProp_BuildersReferencedAssets = { "BuildersReferencedAssets", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHLODBuildInputStats, BuildersReferencedAssets), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BuildersReferencedAssets_MetaData), NewProp_BuildersReferencedAssets_MetaData) }; // 798864677
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHLODBuildInputStats_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHLODBuildInputStats_Statics::NewProp_BuildersReferencedAssets_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHLODBuildInputStats_Statics::NewProp_BuildersReferencedAssets_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHLODBuildInputStats_Statics::NewProp_BuildersReferencedAssets,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHLODBuildInputStats_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHLODBuildInputStats_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"HLODBuildInputStats",
	Z_Construct_UScriptStruct_FHLODBuildInputStats_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHLODBuildInputStats_Statics::PropPointers),
	sizeof(FHLODBuildInputStats),
	alignof(FHLODBuildInputStats),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHLODBuildInputStats_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FHLODBuildInputStats_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FHLODBuildInputStats()
{
	if (!Z_Registration_Info_UScriptStruct_HLODBuildInputStats.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HLODBuildInputStats.InnerSingleton, Z_Construct_UScriptStruct_FHLODBuildInputStats_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_HLODBuildInputStats.InnerSingleton;
}
// End ScriptStruct FHLODBuildInputStats

// Begin Class UHLODBuilder
void UHLODBuilder::StaticRegisterNativesUHLODBuilder()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHLODBuilder);
UClass* Z_Construct_UClass_UHLODBuilder_NoRegister()
{
	return UHLODBuilder::StaticClass();
}
struct Z_Construct_UClass_UHLODBuilder_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base class for all HLOD builders\n * This class takes as input a group of components, and should return component(s) that will be included in the HLOD actor.\n */" },
		{ "IncludePath", "WorldPartition/HLOD/HLODBuilder.h" },
		{ "ModuleRelativePath", "Public/WorldPartition/HLOD/HLODBuilder.h" },
		{ "ToolTip", "Base class for all HLOD builders\nThis class takes as input a group of components, and should return component(s) that will be included in the HLOD actor." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HLODBuilderSettings_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/HLOD/HLODBuilder.h" },
		{ "NativeConstTemplateArg", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HLODInstancedStaticMeshComponentClass_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/HLOD/HLODBuilder.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HLODBuilderSettings;
	static const UECodeGen_Private::FClassPropertyParams NewProp_HLODInstancedStaticMeshComponentClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHLODBuilder>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHLODBuilder_Statics::NewProp_HLODBuilderSettings = { "HLODBuilderSettings", nullptr, (EPropertyFlags)0x0124080800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHLODBuilder, HLODBuilderSettings), Z_Construct_UClass_UHLODBuilderSettings_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HLODBuilderSettings_MetaData), NewProp_HLODBuilderSettings_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UHLODBuilder_Statics::NewProp_HLODInstancedStaticMeshComponentClass = { "HLODInstancedStaticMeshComponentClass", nullptr, (EPropertyFlags)0x0044000800004000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHLODBuilder, HLODInstancedStaticMeshComponentClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UHLODInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HLODInstancedStaticMeshComponentClass_MetaData), NewProp_HLODInstancedStaticMeshComponentClass_MetaData) };
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHLODBuilder_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHLODBuilder_Statics::NewProp_HLODBuilderSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHLODBuilder_Statics::NewProp_HLODInstancedStaticMeshComponentClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHLODBuilder_Statics::PropPointers) < 2048);
#endif // WITH_EDITORONLY_DATA
UObject* (*const Z_Construct_UClass_UHLODBuilder_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHLODBuilder_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHLODBuilder_Statics::ClassParams = {
	&UHLODBuilder::StaticClass,
	"Editor",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_UHLODBuilder_Statics::PropPointers, nullptr),
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UClass_UHLODBuilder_Statics::PropPointers), 0),
	0,
	0x000800A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHLODBuilder_Statics::Class_MetaDataParams), Z_Construct_UClass_UHLODBuilder_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHLODBuilder()
{
	if (!Z_Registration_Info_UClass_UHLODBuilder.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHLODBuilder.OuterSingleton, Z_Construct_UClass_UHLODBuilder_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHLODBuilder.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UHLODBuilder>()
{
	return UHLODBuilder::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHLODBuilder);
UHLODBuilder::~UHLODBuilder() {}
// End Class UHLODBuilder

// Begin Class UNullHLODBuilder
void UNullHLODBuilder::StaticRegisterNativesUNullHLODBuilder()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNullHLODBuilder);
UClass* Z_Construct_UClass_UNullHLODBuilder_NoRegister()
{
	return UNullHLODBuilder::StaticClass();
}
struct Z_Construct_UClass_UNullHLODBuilder_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Null HLOD builder that ignores it's input and generate no component.\n */" },
		{ "IncludePath", "WorldPartition/HLOD/HLODBuilder.h" },
		{ "ModuleRelativePath", "Public/WorldPartition/HLOD/HLODBuilder.h" },
		{ "ToolTip", "Null HLOD builder that ignores it's input and generate no component." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNullHLODBuilder>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNullHLODBuilder_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UHLODBuilder,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNullHLODBuilder_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNullHLODBuilder_Statics::ClassParams = {
	&UNullHLODBuilder::StaticClass,
	"Editor",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x040800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNullHLODBuilder_Statics::Class_MetaDataParams), Z_Construct_UClass_UNullHLODBuilder_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNullHLODBuilder()
{
	if (!Z_Registration_Info_UClass_UNullHLODBuilder.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNullHLODBuilder.OuterSingleton, Z_Construct_UClass_UNullHLODBuilder_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNullHLODBuilder.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UNullHLODBuilder>()
{
	return UNullHLODBuilder::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNullHLODBuilder);
UNullHLODBuilder::~UNullHLODBuilder() {}
// End Class UNullHLODBuilder

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODBuilder_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FHLODBuildInputReferencedAssets::StaticStruct, Z_Construct_UScriptStruct_FHLODBuildInputReferencedAssets_Statics::NewStructOps, TEXT("HLODBuildInputReferencedAssets"), &Z_Registration_Info_UScriptStruct_HLODBuildInputReferencedAssets, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHLODBuildInputReferencedAssets), 798864677U) },
		{ FHLODBuildInputStats::StaticStruct, Z_Construct_UScriptStruct_FHLODBuildInputStats_Statics::NewStructOps, TEXT("HLODBuildInputStats"), &Z_Registration_Info_UScriptStruct_HLODBuildInputStats, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHLODBuildInputStats), 2722838985U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHLODBuilderSettings, UHLODBuilderSettings::StaticClass, TEXT("UHLODBuilderSettings"), &Z_Registration_Info_UClass_UHLODBuilderSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHLODBuilderSettings), 3067470874U) },
		{ Z_Construct_UClass_UHLODBuilder, UHLODBuilder::StaticClass, TEXT("UHLODBuilder"), &Z_Registration_Info_UClass_UHLODBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHLODBuilder), 505600493U) },
		{ Z_Construct_UClass_UNullHLODBuilder, UNullHLODBuilder::StaticClass, TEXT("UNullHLODBuilder"), &Z_Registration_Info_UClass_UNullHLODBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNullHLODBuilder), 278624883U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODBuilder_h_1143486760(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODBuilder_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODBuilder_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODBuilder_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODBuilder_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
