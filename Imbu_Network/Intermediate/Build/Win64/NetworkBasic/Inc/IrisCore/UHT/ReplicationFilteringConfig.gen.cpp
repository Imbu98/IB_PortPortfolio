// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Experimental/Iris/Core/Public/Iris/ReplicationSystem/Filtering/ReplicationFilteringConfig.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReplicationFilteringConfig() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
IRISCORE_API UClass* Z_Construct_UClass_UReplicationFilteringConfig();
IRISCORE_API UClass* Z_Construct_UClass_UReplicationFilteringConfig_NoRegister();
IRISCORE_API UScriptStruct* Z_Construct_UScriptStruct_FObjectScopeHysteresisProfile();
UPackage* Z_Construct_UPackage__Script_IrisCore();
// End Cross Module References

// Begin ScriptStruct FObjectScopeHysteresisProfile
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ObjectScopeHysteresisProfile;
class UScriptStruct* FObjectScopeHysteresisProfile::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ObjectScopeHysteresisProfile.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ObjectScopeHysteresisProfile.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FObjectScopeHysteresisProfile, (UObject*)Z_Construct_UPackage__Script_IrisCore(), TEXT("ObjectScopeHysteresisProfile"));
	}
	return Z_Registration_Info_UScriptStruct_ObjectScopeHysteresisProfile.OuterSingleton;
}
template<> IRISCORE_API UScriptStruct* StaticStruct<FObjectScopeHysteresisProfile>()
{
	return FObjectScopeHysteresisProfile::StaticStruct();
}
struct Z_Construct_UScriptStruct_FObjectScopeHysteresisProfile_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Iris/ReplicationSystem/Filtering/ReplicationFilteringConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FilterProfileName_MetaData[] = {
		{ "Comment", "/** The config name used to map to this profile */" },
		{ "ModuleRelativePath", "Public/Iris/ReplicationSystem/Filtering/ReplicationFilteringConfig.h" },
		{ "ToolTip", "The config name used to map to this profile" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HysteresisFrameCount_MetaData[] = {
		{ "Comment", "/** The number of frames to keep the object in scope after it has been filtered out by dynamic filtering. */" },
		{ "ModuleRelativePath", "Public/Iris/ReplicationSystem/Filtering/ReplicationFilteringConfig.h" },
		{ "ToolTip", "The number of frames to keep the object in scope after it has been filtered out by dynamic filtering." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_FilterProfileName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_HysteresisFrameCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FObjectScopeHysteresisProfile>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FObjectScopeHysteresisProfile_Statics::NewProp_FilterProfileName = { "FilterProfileName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FObjectScopeHysteresisProfile, FilterProfileName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FilterProfileName_MetaData), NewProp_FilterProfileName_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FObjectScopeHysteresisProfile_Statics::NewProp_HysteresisFrameCount = { "HysteresisFrameCount", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FObjectScopeHysteresisProfile, HysteresisFrameCount), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HysteresisFrameCount_MetaData), NewProp_HysteresisFrameCount_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FObjectScopeHysteresisProfile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FObjectScopeHysteresisProfile_Statics::NewProp_FilterProfileName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FObjectScopeHysteresisProfile_Statics::NewProp_HysteresisFrameCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FObjectScopeHysteresisProfile_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FObjectScopeHysteresisProfile_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_IrisCore,
	nullptr,
	&NewStructOps,
	"ObjectScopeHysteresisProfile",
	Z_Construct_UScriptStruct_FObjectScopeHysteresisProfile_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FObjectScopeHysteresisProfile_Statics::PropPointers),
	sizeof(FObjectScopeHysteresisProfile),
	alignof(FObjectScopeHysteresisProfile),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FObjectScopeHysteresisProfile_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FObjectScopeHysteresisProfile_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FObjectScopeHysteresisProfile()
{
	if (!Z_Registration_Info_UScriptStruct_ObjectScopeHysteresisProfile.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ObjectScopeHysteresisProfile.InnerSingleton, Z_Construct_UScriptStruct_FObjectScopeHysteresisProfile_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ObjectScopeHysteresisProfile.InnerSingleton;
}
// End ScriptStruct FObjectScopeHysteresisProfile

// Begin Class UReplicationFilteringConfig
void UReplicationFilteringConfig::StaticRegisterNativesUReplicationFilteringConfig()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UReplicationFilteringConfig);
UClass* Z_Construct_UClass_UReplicationFilteringConfig_NoRegister()
{
	return UReplicationFilteringConfig::StaticClass();
}
struct Z_Construct_UClass_UReplicationFilteringConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Object scope hysteresis support. Keep dynamically filtered out objects around for a specified amount of frames. \n * Configure behavior via hysteresis profiles that determine the frame timeout per class.\n * The filter config for a specific class can then mention the hysteresis profile in order to get the appropriate behavior. \n *\n * Example:\n * [/Script/IrisCore.ReplicationFilteringConfig]\n * bEnableObjectScopeHysteresis=true\n * DefaultHysteresisFrameCount=4\n * HysteresisUpdateConnectionThrottling=4\n * !HysteresisProfiles=ClearArray\n * +FilterProfiles=(FilterProfileName=PawnFilterProfile, HysteresisFrameCount=30)\n * \n * [/Script/ IrisCore.ObjectReplicationBridgeConfig]\n * +FilterConfigs=(ClassName=/Script/Engine.Pawn, DynamicFilterName=Spatial, FilterProfile=PawnFilterProfile)\n */" },
		{ "IncludePath", "Iris/ReplicationSystem/Filtering/ReplicationFilteringConfig.h" },
		{ "ModuleRelativePath", "Public/Iris/ReplicationSystem/Filtering/ReplicationFilteringConfig.h" },
		{ "ToolTip", "Object scope hysteresis support. Keep dynamically filtered out objects around for a specified amount of frames.\nConfigure behavior via hysteresis profiles that determine the frame timeout per class.\nThe filter config for a specific class can then mention the hysteresis profile in order to get the appropriate behavior.\n\nExample:\n[/Script/IrisCore.ReplicationFilteringConfig]\nbEnableObjectScopeHysteresis=true\nDefaultHysteresisFrameCount=4\nHysteresisUpdateConnectionThrottling=4\n!HysteresisProfiles=ClearArray\n+FilterProfiles=(FilterProfileName=PawnFilterProfile, HysteresisFrameCount=30)\n\n[/Script/ IrisCore.ObjectReplicationBridgeConfig]\n+FilterConfigs=(ClassName=/Script/Engine.Pawn, DynamicFilterName=Spatial, FilterProfile=PawnFilterProfile)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableObjectScopeHysteresis_MetaData[] = {
		{ "Comment", "/** If enabled a dynamically filtered out object will not be considered out of scope for a particular number of frames. */" },
		{ "ModuleRelativePath", "Public/Iris/ReplicationSystem/Filtering/ReplicationFilteringConfig.h" },
		{ "ToolTip", "If enabled a dynamically filtered out object will not be considered out of scope for a particular number of frames." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultHysteresisFrameCount_MetaData[] = {
		{ "Comment", "/** How many frames a dynamically filtered out object should still be considered in scope by default. Can be overridden with HysteresisClassConfigs. */" },
		{ "ModuleRelativePath", "Public/Iris/ReplicationSystem/Filtering/ReplicationFilteringConfig.h" },
		{ "ToolTip", "How many frames a dynamically filtered out object should still be considered in scope by default. Can be overridden with HysteresisClassConfigs." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HysteresisUpdateConnectionThrottling_MetaData[] = {
		{ "Comment", "/**\n\x09 * Update every Nth connection each frame. If 1 then every connection will be updated every frame, if 2 then half of the connections will be updated per frame and so on.\n\x09 * Keep this number low. The value will be clamped to 128. Due to the nature of the throttling objects may linger for N-1 extra frames before considered out of scope.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Iris/ReplicationSystem/Filtering/ReplicationFilteringConfig.h" },
		{ "ToolTip", "Update every Nth connection each frame. If 1 then every connection will be updated every frame, if 2 then half of the connections will be updated per frame and so on.\nKeep this number low. The value will be clamped to 128. Due to the nature of the throttling objects may linger for N-1 extra frames before considered out of scope." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HysteresisProfiles_MetaData[] = {
		{ "Comment", "/** Specialized configuration profiles */" },
		{ "ModuleRelativePath", "Public/Iris/ReplicationSystem/Filtering/ReplicationFilteringConfig.h" },
		{ "ToolTip", "Specialized configuration profiles" },
	};
#endif // WITH_METADATA
	static void NewProp_bEnableObjectScopeHysteresis_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableObjectScopeHysteresis;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DefaultHysteresisFrameCount;
	static const UECodeGen_Private::FBytePropertyParams NewProp_HysteresisUpdateConnectionThrottling;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HysteresisProfiles_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_HysteresisProfiles;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UReplicationFilteringConfig>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UReplicationFilteringConfig_Statics::NewProp_bEnableObjectScopeHysteresis_SetBit(void* Obj)
{
	((UReplicationFilteringConfig*)Obj)->bEnableObjectScopeHysteresis = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UReplicationFilteringConfig_Statics::NewProp_bEnableObjectScopeHysteresis = { "bEnableObjectScopeHysteresis", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UReplicationFilteringConfig), &Z_Construct_UClass_UReplicationFilteringConfig_Statics::NewProp_bEnableObjectScopeHysteresis_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableObjectScopeHysteresis_MetaData), NewProp_bEnableObjectScopeHysteresis_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UReplicationFilteringConfig_Statics::NewProp_DefaultHysteresisFrameCount = { "DefaultHysteresisFrameCount", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UReplicationFilteringConfig, DefaultHysteresisFrameCount), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultHysteresisFrameCount_MetaData), NewProp_DefaultHysteresisFrameCount_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UReplicationFilteringConfig_Statics::NewProp_HysteresisUpdateConnectionThrottling = { "HysteresisUpdateConnectionThrottling", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UReplicationFilteringConfig, HysteresisUpdateConnectionThrottling), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HysteresisUpdateConnectionThrottling_MetaData), NewProp_HysteresisUpdateConnectionThrottling_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UReplicationFilteringConfig_Statics::NewProp_HysteresisProfiles_Inner = { "HysteresisProfiles", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FObjectScopeHysteresisProfile, METADATA_PARAMS(0, nullptr) }; // 3105758881
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UReplicationFilteringConfig_Statics::NewProp_HysteresisProfiles = { "HysteresisProfiles", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UReplicationFilteringConfig, HysteresisProfiles), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HysteresisProfiles_MetaData), NewProp_HysteresisProfiles_MetaData) }; // 3105758881
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UReplicationFilteringConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReplicationFilteringConfig_Statics::NewProp_bEnableObjectScopeHysteresis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReplicationFilteringConfig_Statics::NewProp_DefaultHysteresisFrameCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReplicationFilteringConfig_Statics::NewProp_HysteresisUpdateConnectionThrottling,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReplicationFilteringConfig_Statics::NewProp_HysteresisProfiles_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReplicationFilteringConfig_Statics::NewProp_HysteresisProfiles,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UReplicationFilteringConfig_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UReplicationFilteringConfig_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_IrisCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UReplicationFilteringConfig_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UReplicationFilteringConfig_Statics::ClassParams = {
	&UReplicationFilteringConfig::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UReplicationFilteringConfig_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UReplicationFilteringConfig_Statics::PropPointers),
	0,
	0x000000ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UReplicationFilteringConfig_Statics::Class_MetaDataParams), Z_Construct_UClass_UReplicationFilteringConfig_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UReplicationFilteringConfig()
{
	if (!Z_Registration_Info_UClass_UReplicationFilteringConfig.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UReplicationFilteringConfig.OuterSingleton, Z_Construct_UClass_UReplicationFilteringConfig_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UReplicationFilteringConfig.OuterSingleton;
}
template<> IRISCORE_API UClass* StaticClass<UReplicationFilteringConfig>()
{
	return UReplicationFilteringConfig::StaticClass();
}
UReplicationFilteringConfig::UReplicationFilteringConfig(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UReplicationFilteringConfig);
UReplicationFilteringConfig::~UReplicationFilteringConfig() {}
// End Class UReplicationFilteringConfig

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_Filtering_ReplicationFilteringConfig_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FObjectScopeHysteresisProfile::StaticStruct, Z_Construct_UScriptStruct_FObjectScopeHysteresisProfile_Statics::NewStructOps, TEXT("ObjectScopeHysteresisProfile"), &Z_Registration_Info_UScriptStruct_ObjectScopeHysteresisProfile, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FObjectScopeHysteresisProfile), 3105758881U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UReplicationFilteringConfig, UReplicationFilteringConfig::StaticClass, TEXT("UReplicationFilteringConfig"), &Z_Registration_Info_UClass_UReplicationFilteringConfig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UReplicationFilteringConfig), 2866331644U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_Filtering_ReplicationFilteringConfig_h_2659044311(TEXT("/Script/IrisCore"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_Filtering_ReplicationFilteringConfig_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_Filtering_ReplicationFilteringConfig_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_Filtering_ReplicationFilteringConfig_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_Filtering_ReplicationFilteringConfig_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
