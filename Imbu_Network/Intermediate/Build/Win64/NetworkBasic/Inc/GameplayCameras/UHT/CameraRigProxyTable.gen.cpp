// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayCameras/Public/Core/CameraRigProxyTable.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCameraRigProxyTable() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UCameraRigAsset_NoRegister();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UCameraRigProxyAsset_NoRegister();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UCameraRigProxyTable();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UCameraRigProxyTable_NoRegister();
GAMEPLAYCAMERAS_API UScriptStruct* Z_Construct_UScriptStruct_FCameraRigProxyTableEntry();
UPackage* Z_Construct_UPackage__Script_GameplayCameras();
// End Cross Module References

// Begin ScriptStruct FCameraRigProxyTableEntry
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CameraRigProxyTableEntry;
class UScriptStruct* FCameraRigProxyTableEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CameraRigProxyTableEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CameraRigProxyTableEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCameraRigProxyTableEntry, (UObject*)Z_Construct_UPackage__Script_GameplayCameras(), TEXT("CameraRigProxyTableEntry"));
	}
	return Z_Registration_Info_UScriptStruct_CameraRigProxyTableEntry.OuterSingleton;
}
template<> GAMEPLAYCAMERAS_API UScriptStruct* StaticStruct<FCameraRigProxyTableEntry>()
{
	return FCameraRigProxyTableEntry::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCameraRigProxyTableEntry_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * An entry in a camera rig proxy table.\n */" },
		{ "ModuleRelativePath", "Public/Core/CameraRigProxyTable.h" },
		{ "ToolTip", "An entry in a camera rig proxy table." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraRigProxy_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** The camera rig proxy for this table entry. */" },
		{ "ModuleRelativePath", "Public/Core/CameraRigProxyTable.h" },
		{ "ToolTip", "The camera rig proxy for this table entry." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraRig_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** The actual camera rig that should be mapped to the correspondig proxy. */" },
		{ "ModuleRelativePath", "Public/Core/CameraRigProxyTable.h" },
		{ "ToolTip", "The actual camera rig that should be mapped to the correspondig proxy." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraRigProxy;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraRig;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCameraRigProxyTableEntry>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCameraRigProxyTableEntry_Statics::NewProp_CameraRigProxy = { "CameraRigProxy", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCameraRigProxyTableEntry, CameraRigProxy), Z_Construct_UClass_UCameraRigProxyAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraRigProxy_MetaData), NewProp_CameraRigProxy_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCameraRigProxyTableEntry_Statics::NewProp_CameraRig = { "CameraRig", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCameraRigProxyTableEntry, CameraRig), Z_Construct_UClass_UCameraRigAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraRig_MetaData), NewProp_CameraRig_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCameraRigProxyTableEntry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraRigProxyTableEntry_Statics::NewProp_CameraRigProxy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraRigProxyTableEntry_Statics::NewProp_CameraRig,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraRigProxyTableEntry_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCameraRigProxyTableEntry_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayCameras,
	nullptr,
	&NewStructOps,
	"CameraRigProxyTableEntry",
	Z_Construct_UScriptStruct_FCameraRigProxyTableEntry_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraRigProxyTableEntry_Statics::PropPointers),
	sizeof(FCameraRigProxyTableEntry),
	alignof(FCameraRigProxyTableEntry),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraRigProxyTableEntry_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCameraRigProxyTableEntry_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCameraRigProxyTableEntry()
{
	if (!Z_Registration_Info_UScriptStruct_CameraRigProxyTableEntry.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CameraRigProxyTableEntry.InnerSingleton, Z_Construct_UScriptStruct_FCameraRigProxyTableEntry_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CameraRigProxyTableEntry.InnerSingleton;
}
// End ScriptStruct FCameraRigProxyTableEntry

// Begin Class UCameraRigProxyTable
void UCameraRigProxyTable::StaticRegisterNativesUCameraRigProxyTable()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCameraRigProxyTable);
UClass* Z_Construct_UClass_UCameraRigProxyTable_NoRegister()
{
	return UCameraRigProxyTable::StaticClass();
}
struct Z_Construct_UClass_UCameraRigProxyTable_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A table that defines mappings between camera rig proxies and actual camera rigs.\n */" },
		{ "IncludePath", "Core/CameraRigProxyTable.h" },
		{ "ModuleRelativePath", "Public/Core/CameraRigProxyTable.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "A table that defines mappings between camera rig proxies and actual camera rigs." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Entries_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** The entries in the table. */" },
		{ "ModuleRelativePath", "Public/Core/CameraRigProxyTable.h" },
		{ "ToolTip", "The entries in the table." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Entries_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Entries;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCameraRigProxyTable>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCameraRigProxyTable_Statics::NewProp_Entries_Inner = { "Entries", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCameraRigProxyTableEntry, METADATA_PARAMS(0, nullptr) }; // 1095792105
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCameraRigProxyTable_Statics::NewProp_Entries = { "Entries", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCameraRigProxyTable, Entries), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Entries_MetaData), NewProp_Entries_MetaData) }; // 1095792105
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCameraRigProxyTable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraRigProxyTable_Statics::NewProp_Entries_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraRigProxyTable_Statics::NewProp_Entries,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCameraRigProxyTable_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCameraRigProxyTable_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayCameras,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCameraRigProxyTable_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCameraRigProxyTable_Statics::ClassParams = {
	&UCameraRigProxyTable::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCameraRigProxyTable_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCameraRigProxyTable_Statics::PropPointers),
	0,
	0x000810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCameraRigProxyTable_Statics::Class_MetaDataParams), Z_Construct_UClass_UCameraRigProxyTable_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCameraRigProxyTable()
{
	if (!Z_Registration_Info_UClass_UCameraRigProxyTable.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCameraRigProxyTable.OuterSingleton, Z_Construct_UClass_UCameraRigProxyTable_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCameraRigProxyTable.OuterSingleton;
}
template<> GAMEPLAYCAMERAS_API UClass* StaticClass<UCameraRigProxyTable>()
{
	return UCameraRigProxyTable::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCameraRigProxyTable);
UCameraRigProxyTable::~UCameraRigProxyTable() {}
// End Class UCameraRigProxyTable

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraRigProxyTable_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FCameraRigProxyTableEntry::StaticStruct, Z_Construct_UScriptStruct_FCameraRigProxyTableEntry_Statics::NewStructOps, TEXT("CameraRigProxyTableEntry"), &Z_Registration_Info_UScriptStruct_CameraRigProxyTableEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCameraRigProxyTableEntry), 1095792105U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCameraRigProxyTable, UCameraRigProxyTable::StaticClass, TEXT("UCameraRigProxyTable"), &Z_Registration_Info_UClass_UCameraRigProxyTable, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCameraRigProxyTable), 897147945U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraRigProxyTable_h_1414436547(TEXT("/Script/GameplayCameras"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraRigProxyTable_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraRigProxyTable_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraRigProxyTable_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraRigProxyTable_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
