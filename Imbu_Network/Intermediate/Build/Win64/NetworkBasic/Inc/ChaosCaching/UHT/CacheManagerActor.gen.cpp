// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ChaosCaching/Public/Chaos/CacheManagerActor.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCacheManagerActor() {}

// Begin Cross Module References
CHAOSCACHING_API UClass* Z_Construct_UClass_AChaosCacheManager();
CHAOSCACHING_API UClass* Z_Construct_UClass_AChaosCacheManager_NoRegister();
CHAOSCACHING_API UClass* Z_Construct_UClass_AChaosCachePlayer();
CHAOSCACHING_API UClass* Z_Construct_UClass_AChaosCachePlayer_NoRegister();
CHAOSCACHING_API UClass* Z_Construct_UClass_UChaosCacheCollection_NoRegister();
CHAOSCACHING_API UEnum* Z_Construct_UEnum_ChaosCaching_ECacheMode();
CHAOSCACHING_API UEnum* Z_Construct_UEnum_ChaosCaching_EStartMode();
CHAOSCACHING_API UScriptStruct* Z_Construct_UScriptStruct_FObservedComponent();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FComponentReference();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSoftComponentReference();
UPackage* Z_Construct_UPackage__Script_ChaosCaching();
// End Cross Module References

// Begin Enum ECacheMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECacheMode;
static UEnum* ECacheMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ECacheMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ECacheMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ChaosCaching_ECacheMode, (UObject*)Z_Construct_UPackage__Script_ChaosCaching(), TEXT("ECacheMode"));
	}
	return Z_Registration_Info_UEnum_ECacheMode.OuterSingleton;
}
template<> CHAOSCACHING_API UEnum* StaticEnum<ECacheMode>()
{
	return ECacheMode_StaticEnum();
}
struct Z_Construct_UEnum_ChaosCaching_ECacheMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Chaos/CacheManagerActor.h" },
		{ "None.DisplayName", "Static Pose" },
		{ "None.Name", "ECacheMode::None" },
		{ "Play.Name", "ECacheMode::Play" },
		{ "Record.Name", "ECacheMode::Record" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ECacheMode::None", (int64)ECacheMode::None },
		{ "ECacheMode::Play", (int64)ECacheMode::Play },
		{ "ECacheMode::Record", (int64)ECacheMode::Record },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ChaosCaching_ECacheMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ChaosCaching,
	nullptr,
	"ECacheMode",
	"ECacheMode",
	Z_Construct_UEnum_ChaosCaching_ECacheMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ChaosCaching_ECacheMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ChaosCaching_ECacheMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ChaosCaching_ECacheMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ChaosCaching_ECacheMode()
{
	if (!Z_Registration_Info_UEnum_ECacheMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECacheMode.InnerSingleton, Z_Construct_UEnum_ChaosCaching_ECacheMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ECacheMode.InnerSingleton;
}
// End Enum ECacheMode

// Begin Enum EStartMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EStartMode;
static UEnum* EStartMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EStartMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EStartMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ChaosCaching_EStartMode, (UObject*)Z_Construct_UPackage__Script_ChaosCaching(), TEXT("EStartMode"));
	}
	return Z_Registration_Info_UEnum_EStartMode.OuterSingleton;
}
template<> CHAOSCACHING_API UEnum* StaticEnum<EStartMode>()
{
	return EStartMode_StaticEnum();
}
struct Z_Construct_UEnum_ChaosCaching_EStartMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Chaos/CacheManagerActor.h" },
		{ "Timed.Name", "EStartMode::Timed" },
		{ "Triggered.Name", "EStartMode::Triggered" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EStartMode::Timed", (int64)EStartMode::Timed },
		{ "EStartMode::Triggered", (int64)EStartMode::Triggered },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ChaosCaching_EStartMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ChaosCaching,
	nullptr,
	"EStartMode",
	"EStartMode",
	Z_Construct_UEnum_ChaosCaching_EStartMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ChaosCaching_EStartMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ChaosCaching_EStartMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ChaosCaching_EStartMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ChaosCaching_EStartMode()
{
	if (!Z_Registration_Info_UEnum_EStartMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EStartMode.InnerSingleton, Z_Construct_UEnum_ChaosCaching_EStartMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EStartMode.InnerSingleton;
}
// End Enum EStartMode

// Begin ScriptStruct FObservedComponent
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ObservedComponent;
class UScriptStruct* FObservedComponent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ObservedComponent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ObservedComponent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FObservedComponent, (UObject*)Z_Construct_UPackage__Script_ChaosCaching(), TEXT("ObservedComponent"));
	}
	return Z_Registration_Info_UScriptStruct_ObservedComponent.OuterSingleton;
}
template<> CHAOSCACHING_API UScriptStruct* StaticStruct<FObservedComponent>()
{
	return FObservedComponent::StaticStruct();
}
struct Z_Construct_UScriptStruct_FObservedComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Chaos/CacheManagerActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CacheName_MetaData[] = {
		{ "Category", "Caching" },
		{ "Comment", "/** Unique name for the cache, used as a key into the cache collection */" },
		{ "ModuleRelativePath", "Public/Chaos/CacheManagerActor.h" },
		{ "ToolTip", "Unique name for the cache, used as a key into the cache collection" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComponentRef_MetaData[] = {
		{ "ModuleRelativePath", "Public/Chaos/CacheManagerActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SoftComponentRef_MetaData[] = {
		{ "AllowAnyActor", "" },
		{ "Category", "Caching" },
		{ "Comment", "/** The component observed by this object for either playback or recording */" },
		{ "ModuleRelativePath", "Public/Chaos/CacheManagerActor.h" },
		{ "ToolTip", "The component observed by this object for either playback or recording" },
		{ "UseComponentPicker", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsSimulating_MetaData[] = {
		{ "Category", "Caching" },
		{ "Comment", "/** Capture of the initial state of the component before cache manager takes control. */" },
		{ "ModuleRelativePath", "Public/Chaos/CacheManagerActor.h" },
		{ "ToolTip", "Capture of the initial state of the component before cache manager takes control." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPlaybackEnabled_MetaData[] = {
		{ "Category", "Caching" },
		{ "Comment", "/** Whether this component is enabled for playback, this allow a cache to hold many component but only replay some of them. */" },
		{ "ModuleRelativePath", "Public/Chaos/CacheManagerActor.h" },
		{ "ToolTip", "Whether this component is enabled for playback, this allow a cache to hold many component but only replay some of them." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_USDCacheDirectory_MetaData[] = {
		{ "Category", "Caching" },
		{ "Comment", "/** USD cache directory, if supported for this simulated structure type. */" },
		{ "ContentDir", "" },
		{ "ModuleRelativePath", "Public/Chaos/CacheManagerActor.h" },
		{ "ToolTip", "USD cache directory, if supported for this simulated structure type." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_CacheName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ComponentRef;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SoftComponentRef;
	static void NewProp_bIsSimulating_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsSimulating;
	static void NewProp_bPlaybackEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPlaybackEnabled;
	static const UECodeGen_Private::FStructPropertyParams NewProp_USDCacheDirectory;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FObservedComponent>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FObservedComponent_Statics::NewProp_CacheName = { "CacheName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FObservedComponent, CacheName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CacheName_MetaData), NewProp_CacheName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FObservedComponent_Statics::NewProp_ComponentRef = { "ComponentRef", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FObservedComponent, ComponentRef), Z_Construct_UScriptStruct_FComponentReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComponentRef_MetaData), NewProp_ComponentRef_MetaData) }; // 3869904073
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FObservedComponent_Statics::NewProp_SoftComponentRef = { "SoftComponentRef", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FObservedComponent, SoftComponentRef), Z_Construct_UScriptStruct_FSoftComponentReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SoftComponentRef_MetaData), NewProp_SoftComponentRef_MetaData) }; // 3850706817
void Z_Construct_UScriptStruct_FObservedComponent_Statics::NewProp_bIsSimulating_SetBit(void* Obj)
{
	((FObservedComponent*)Obj)->bIsSimulating = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FObservedComponent_Statics::NewProp_bIsSimulating = { "bIsSimulating", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FObservedComponent), &Z_Construct_UScriptStruct_FObservedComponent_Statics::NewProp_bIsSimulating_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsSimulating_MetaData), NewProp_bIsSimulating_MetaData) };
void Z_Construct_UScriptStruct_FObservedComponent_Statics::NewProp_bPlaybackEnabled_SetBit(void* Obj)
{
	((FObservedComponent*)Obj)->bPlaybackEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FObservedComponent_Statics::NewProp_bPlaybackEnabled = { "bPlaybackEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FObservedComponent), &Z_Construct_UScriptStruct_FObservedComponent_Statics::NewProp_bPlaybackEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPlaybackEnabled_MetaData), NewProp_bPlaybackEnabled_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FObservedComponent_Statics::NewProp_USDCacheDirectory = { "USDCacheDirectory", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FObservedComponent, USDCacheDirectory), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_USDCacheDirectory_MetaData), NewProp_USDCacheDirectory_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FObservedComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FObservedComponent_Statics::NewProp_CacheName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FObservedComponent_Statics::NewProp_ComponentRef,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FObservedComponent_Statics::NewProp_SoftComponentRef,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FObservedComponent_Statics::NewProp_bIsSimulating,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FObservedComponent_Statics::NewProp_bPlaybackEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FObservedComponent_Statics::NewProp_USDCacheDirectory,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FObservedComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FObservedComponent_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ChaosCaching,
	nullptr,
	&NewStructOps,
	"ObservedComponent",
	Z_Construct_UScriptStruct_FObservedComponent_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FObservedComponent_Statics::PropPointers),
	sizeof(FObservedComponent),
	alignof(FObservedComponent),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FObservedComponent_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FObservedComponent_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FObservedComponent()
{
	if (!Z_Registration_Info_UScriptStruct_ObservedComponent.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ObservedComponent.InnerSingleton, Z_Construct_UScriptStruct_FObservedComponent_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ObservedComponent.InnerSingleton;
}
// End ScriptStruct FObservedComponent

// Begin Class AChaosCacheManager Function EnablePlayback
struct Z_Construct_UFunction_AChaosCacheManager_EnablePlayback_Statics
{
	struct ChaosCacheManager_eventEnablePlayback_Parms
	{
		int32 Index;
		bool bEnable;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Caching" },
		{ "Comment", "/** Enable playback for a specific component using its index in the list of observed component */" },
		{ "ModuleRelativePath", "Public/Chaos/CacheManagerActor.h" },
		{ "ToolTip", "Enable playback for a specific component using its index in the list of observed component" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static void NewProp_bEnable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AChaosCacheManager_EnablePlayback_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChaosCacheManager_eventEnablePlayback_Parms, Index), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AChaosCacheManager_EnablePlayback_Statics::NewProp_bEnable_SetBit(void* Obj)
{
	((ChaosCacheManager_eventEnablePlayback_Parms*)Obj)->bEnable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AChaosCacheManager_EnablePlayback_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ChaosCacheManager_eventEnablePlayback_Parms), &Z_Construct_UFunction_AChaosCacheManager_EnablePlayback_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AChaosCacheManager_EnablePlayback_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChaosCacheManager_EnablePlayback_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChaosCacheManager_EnablePlayback_Statics::NewProp_bEnable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AChaosCacheManager_EnablePlayback_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AChaosCacheManager_EnablePlayback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AChaosCacheManager, nullptr, "EnablePlayback", nullptr, nullptr, Z_Construct_UFunction_AChaosCacheManager_EnablePlayback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AChaosCacheManager_EnablePlayback_Statics::PropPointers), sizeof(Z_Construct_UFunction_AChaosCacheManager_EnablePlayback_Statics::ChaosCacheManager_eventEnablePlayback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AChaosCacheManager_EnablePlayback_Statics::Function_MetaDataParams), Z_Construct_UFunction_AChaosCacheManager_EnablePlayback_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AChaosCacheManager_EnablePlayback_Statics::ChaosCacheManager_eventEnablePlayback_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AChaosCacheManager_EnablePlayback()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AChaosCacheManager_EnablePlayback_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AChaosCacheManager::execEnablePlayback)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_GET_UBOOL(Z_Param_bEnable);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EnablePlayback(Z_Param_Index,Z_Param_bEnable);
	P_NATIVE_END;
}
// End Class AChaosCacheManager Function EnablePlayback

// Begin Class AChaosCacheManager Function EnablePlaybackByCache
struct Z_Construct_UFunction_AChaosCacheManager_EnablePlaybackByCache_Statics
{
	struct ChaosCacheManager_eventEnablePlaybackByCache_Parms
	{
		FName InCacheName;
		bool bEnable;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Caching" },
		{ "Comment", "/** Enable playback for a specific component using its cache name */" },
		{ "ModuleRelativePath", "Public/Chaos/CacheManagerActor.h" },
		{ "ToolTip", "Enable playback for a specific component using its cache name" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_InCacheName;
	static void NewProp_bEnable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AChaosCacheManager_EnablePlaybackByCache_Statics::NewProp_InCacheName = { "InCacheName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChaosCacheManager_eventEnablePlaybackByCache_Parms, InCacheName), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AChaosCacheManager_EnablePlaybackByCache_Statics::NewProp_bEnable_SetBit(void* Obj)
{
	((ChaosCacheManager_eventEnablePlaybackByCache_Parms*)Obj)->bEnable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AChaosCacheManager_EnablePlaybackByCache_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ChaosCacheManager_eventEnablePlaybackByCache_Parms), &Z_Construct_UFunction_AChaosCacheManager_EnablePlaybackByCache_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AChaosCacheManager_EnablePlaybackByCache_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChaosCacheManager_EnablePlaybackByCache_Statics::NewProp_InCacheName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChaosCacheManager_EnablePlaybackByCache_Statics::NewProp_bEnable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AChaosCacheManager_EnablePlaybackByCache_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AChaosCacheManager_EnablePlaybackByCache_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AChaosCacheManager, nullptr, "EnablePlaybackByCache", nullptr, nullptr, Z_Construct_UFunction_AChaosCacheManager_EnablePlaybackByCache_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AChaosCacheManager_EnablePlaybackByCache_Statics::PropPointers), sizeof(Z_Construct_UFunction_AChaosCacheManager_EnablePlaybackByCache_Statics::ChaosCacheManager_eventEnablePlaybackByCache_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AChaosCacheManager_EnablePlaybackByCache_Statics::Function_MetaDataParams), Z_Construct_UFunction_AChaosCacheManager_EnablePlaybackByCache_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AChaosCacheManager_EnablePlaybackByCache_Statics::ChaosCacheManager_eventEnablePlaybackByCache_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AChaosCacheManager_EnablePlaybackByCache()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AChaosCacheManager_EnablePlaybackByCache_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AChaosCacheManager::execEnablePlaybackByCache)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_InCacheName);
	P_GET_UBOOL(Z_Param_bEnable);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EnablePlaybackByCache(Z_Param_InCacheName,Z_Param_bEnable);
	P_NATIVE_END;
}
// End Class AChaosCacheManager Function EnablePlaybackByCache

// Begin Class AChaosCacheManager Function ResetAllComponentTransforms
struct Z_Construct_UFunction_AChaosCacheManager_ResetAllComponentTransforms_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Caching" },
		{ "Comment", "/** \n\x09 * Resets all components back to the world space transform they had when the cache for them was originally recorded\n\x09 * if one is available\n\x09 */" },
		{ "ModuleRelativePath", "Public/Chaos/CacheManagerActor.h" },
		{ "ToolTip", "Resets all components back to the world space transform they had when the cache for them was originally recorded\nif one is available" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AChaosCacheManager_ResetAllComponentTransforms_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AChaosCacheManager, nullptr, "ResetAllComponentTransforms", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AChaosCacheManager_ResetAllComponentTransforms_Statics::Function_MetaDataParams), Z_Construct_UFunction_AChaosCacheManager_ResetAllComponentTransforms_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AChaosCacheManager_ResetAllComponentTransforms()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AChaosCacheManager_ResetAllComponentTransforms_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AChaosCacheManager::execResetAllComponentTransforms)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetAllComponentTransforms();
	P_NATIVE_END;
}
// End Class AChaosCacheManager Function ResetAllComponentTransforms

// Begin Class AChaosCacheManager Function ResetSingleTransform
struct Z_Construct_UFunction_AChaosCacheManager_ResetSingleTransform_Statics
{
	struct ChaosCacheManager_eventResetSingleTransform_Parms
	{
		int32 InIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Caching" },
		{ "Comment", "/**\n\x09 * Resets the component at the specified index in the observed list back to the world space transform it had when the \n\x09 * cache for it was originally recorded if one is available\n\x09 * @param InIndex Index of the component to reset\n\x09 */" },
		{ "ModuleRelativePath", "Public/Chaos/CacheManagerActor.h" },
		{ "ToolTip", "Resets the component at the specified index in the observed list back to the world space transform it had when the\ncache for it was originally recorded if one is available\n@param InIndex Index of the component to reset" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_InIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AChaosCacheManager_ResetSingleTransform_Statics::NewProp_InIndex = { "InIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChaosCacheManager_eventResetSingleTransform_Parms, InIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AChaosCacheManager_ResetSingleTransform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChaosCacheManager_ResetSingleTransform_Statics::NewProp_InIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AChaosCacheManager_ResetSingleTransform_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AChaosCacheManager_ResetSingleTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AChaosCacheManager, nullptr, "ResetSingleTransform", nullptr, nullptr, Z_Construct_UFunction_AChaosCacheManager_ResetSingleTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AChaosCacheManager_ResetSingleTransform_Statics::PropPointers), sizeof(Z_Construct_UFunction_AChaosCacheManager_ResetSingleTransform_Statics::ChaosCacheManager_eventResetSingleTransform_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AChaosCacheManager_ResetSingleTransform_Statics::Function_MetaDataParams), Z_Construct_UFunction_AChaosCacheManager_ResetSingleTransform_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AChaosCacheManager_ResetSingleTransform_Statics::ChaosCacheManager_eventResetSingleTransform_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AChaosCacheManager_ResetSingleTransform()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AChaosCacheManager_ResetSingleTransform_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AChaosCacheManager::execResetSingleTransform)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_InIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetSingleTransform(Z_Param_InIndex);
	P_NATIVE_END;
}
// End Class AChaosCacheManager Function ResetSingleTransform

// Begin Class AChaosCacheManager Function SetCacheCollection
struct Z_Construct_UFunction_AChaosCacheManager_SetCacheCollection_Statics
{
	struct ChaosCacheManager_eventSetCacheCollection_Parms
	{
		UChaosCacheCollection* InCacheCollection;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Caching" },
		{ "Comment", "/**\n\x09* change the cache collection for this player \n\x09* if the cache is playing or recording this will have no effect\n\x09*/" },
		{ "ModuleRelativePath", "Public/Chaos/CacheManagerActor.h" },
		{ "ToolTip", "change the cache collection for this player\nif the cache is playing or recording this will have no effect" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InCacheCollection;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AChaosCacheManager_SetCacheCollection_Statics::NewProp_InCacheCollection = { "InCacheCollection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChaosCacheManager_eventSetCacheCollection_Parms, InCacheCollection), Z_Construct_UClass_UChaosCacheCollection_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AChaosCacheManager_SetCacheCollection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChaosCacheManager_SetCacheCollection_Statics::NewProp_InCacheCollection,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AChaosCacheManager_SetCacheCollection_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AChaosCacheManager_SetCacheCollection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AChaosCacheManager, nullptr, "SetCacheCollection", nullptr, nullptr, Z_Construct_UFunction_AChaosCacheManager_SetCacheCollection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AChaosCacheManager_SetCacheCollection_Statics::PropPointers), sizeof(Z_Construct_UFunction_AChaosCacheManager_SetCacheCollection_Statics::ChaosCacheManager_eventSetCacheCollection_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AChaosCacheManager_SetCacheCollection_Statics::Function_MetaDataParams), Z_Construct_UFunction_AChaosCacheManager_SetCacheCollection_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AChaosCacheManager_SetCacheCollection_Statics::ChaosCacheManager_eventSetCacheCollection_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AChaosCacheManager_SetCacheCollection()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AChaosCacheManager_SetCacheCollection_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AChaosCacheManager::execSetCacheCollection)
{
	P_GET_OBJECT(UChaosCacheCollection,Z_Param_InCacheCollection);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCacheCollection(Z_Param_InCacheCollection);
	P_NATIVE_END;
}
// End Class AChaosCacheManager Function SetCacheCollection

// Begin Class AChaosCacheManager Function SetCurrentTime
struct Z_Construct_UFunction_AChaosCacheManager_SetCurrentTime_Statics
{
	struct ChaosCacheManager_eventSetCurrentTime_Parms
	{
		float CurrentTime;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Caching" },
		{ "ModuleRelativePath", "Public/Chaos/CacheManagerActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AChaosCacheManager_SetCurrentTime_Statics::NewProp_CurrentTime = { "CurrentTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChaosCacheManager_eventSetCurrentTime_Parms, CurrentTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AChaosCacheManager_SetCurrentTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChaosCacheManager_SetCurrentTime_Statics::NewProp_CurrentTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AChaosCacheManager_SetCurrentTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AChaosCacheManager_SetCurrentTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AChaosCacheManager, nullptr, "SetCurrentTime", nullptr, nullptr, Z_Construct_UFunction_AChaosCacheManager_SetCurrentTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AChaosCacheManager_SetCurrentTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_AChaosCacheManager_SetCurrentTime_Statics::ChaosCacheManager_eventSetCurrentTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AChaosCacheManager_SetCurrentTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_AChaosCacheManager_SetCurrentTime_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AChaosCacheManager_SetCurrentTime_Statics::ChaosCacheManager_eventSetCurrentTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AChaosCacheManager_SetCurrentTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AChaosCacheManager_SetCurrentTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AChaosCacheManager::execSetCurrentTime)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_CurrentTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCurrentTime(Z_Param_CurrentTime);
	P_NATIVE_END;
}
// End Class AChaosCacheManager Function SetCurrentTime

// Begin Class AChaosCacheManager Function SetStartTime
struct Z_Construct_UFunction_AChaosCacheManager_SetStartTime_Statics
{
	struct ChaosCacheManager_eventSetStartTime_Parms
	{
		float InStartTime;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Comment", "/** Expose StartTime property to Sequencer. GetStartTime will be called on keys. */" },
		{ "ModuleRelativePath", "Public/Chaos/CacheManagerActor.h" },
		{ "ToolTip", "Expose StartTime property to Sequencer. GetStartTime will be called on keys." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InStartTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AChaosCacheManager_SetStartTime_Statics::NewProp_InStartTime = { "InStartTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChaosCacheManager_eventSetStartTime_Parms, InStartTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AChaosCacheManager_SetStartTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChaosCacheManager_SetStartTime_Statics::NewProp_InStartTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AChaosCacheManager_SetStartTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AChaosCacheManager_SetStartTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AChaosCacheManager, nullptr, "SetStartTime", nullptr, nullptr, Z_Construct_UFunction_AChaosCacheManager_SetStartTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AChaosCacheManager_SetStartTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_AChaosCacheManager_SetStartTime_Statics::ChaosCacheManager_eventSetStartTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AChaosCacheManager_SetStartTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_AChaosCacheManager_SetStartTime_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AChaosCacheManager_SetStartTime_Statics::ChaosCacheManager_eventSetStartTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AChaosCacheManager_SetStartTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AChaosCacheManager_SetStartTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AChaosCacheManager::execSetStartTime)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InStartTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetStartTime(Z_Param_InStartTime);
	P_NATIVE_END;
}
// End Class AChaosCacheManager Function SetStartTime

// Begin Class AChaosCacheManager Function TriggerAll
struct Z_Construct_UFunction_AChaosCacheManager_TriggerAll_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Caching" },
		{ "Comment", "/** Triggers the recording or playback of all observed components */" },
		{ "ModuleRelativePath", "Public/Chaos/CacheManagerActor.h" },
		{ "ToolTip", "Triggers the recording or playback of all observed components" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AChaosCacheManager_TriggerAll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AChaosCacheManager, nullptr, "TriggerAll", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AChaosCacheManager_TriggerAll_Statics::Function_MetaDataParams), Z_Construct_UFunction_AChaosCacheManager_TriggerAll_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AChaosCacheManager_TriggerAll()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AChaosCacheManager_TriggerAll_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AChaosCacheManager::execTriggerAll)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TriggerAll();
	P_NATIVE_END;
}
// End Class AChaosCacheManager Function TriggerAll

// Begin Class AChaosCacheManager Function TriggerComponent
struct Z_Construct_UFunction_AChaosCacheManager_TriggerComponent_Statics
{
	struct ChaosCacheManager_eventTriggerComponent_Parms
	{
		UPrimitiveComponent* InComponent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Caching" },
		{ "Comment", "/**\n\x09 * Triggers a component to play or record.\n\x09 * If the cache manager has an observed component entry for InComponent and it is a triggered entry\n\x09 * this will begin the playback or record for that component, otherwise no action is taken.\n\x09 * @param InComponent Component to trigger\n\x09 */" },
		{ "ModuleRelativePath", "Public/Chaos/CacheManagerActor.h" },
		{ "ToolTip", "Triggers a component to play or record.\nIf the cache manager has an observed component entry for InComponent and it is a triggered entry\nthis will begin the playback or record for that component, otherwise no action is taken.\n@param InComponent Component to trigger" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AChaosCacheManager_TriggerComponent_Statics::NewProp_InComponent = { "InComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChaosCacheManager_eventTriggerComponent_Parms, InComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InComponent_MetaData), NewProp_InComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AChaosCacheManager_TriggerComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChaosCacheManager_TriggerComponent_Statics::NewProp_InComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AChaosCacheManager_TriggerComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AChaosCacheManager_TriggerComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AChaosCacheManager, nullptr, "TriggerComponent", nullptr, nullptr, Z_Construct_UFunction_AChaosCacheManager_TriggerComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AChaosCacheManager_TriggerComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_AChaosCacheManager_TriggerComponent_Statics::ChaosCacheManager_eventTriggerComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AChaosCacheManager_TriggerComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_AChaosCacheManager_TriggerComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AChaosCacheManager_TriggerComponent_Statics::ChaosCacheManager_eventTriggerComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AChaosCacheManager_TriggerComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AChaosCacheManager_TriggerComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AChaosCacheManager::execTriggerComponent)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_InComponent);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TriggerComponent(Z_Param_InComponent);
	P_NATIVE_END;
}
// End Class AChaosCacheManager Function TriggerComponent

// Begin Class AChaosCacheManager Function TriggerComponentByCache
struct Z_Construct_UFunction_AChaosCacheManager_TriggerComponentByCache_Statics
{
	struct ChaosCacheManager_eventTriggerComponentByCache_Parms
	{
		FName InCacheName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Caching" },
		{ "Comment", "/**\n\x09 * Triggers a component to play or record.\n\x09 * Searches the observed component list for an entry matching InCacheName and triggers the\n\x09 * playback or recording of the linked observed component\n\x09 * @param InCacheName Cache name to trigger\n\x09 */" },
		{ "ModuleRelativePath", "Public/Chaos/CacheManagerActor.h" },
		{ "ToolTip", "Triggers a component to play or record.\nSearches the observed component list for an entry matching InCacheName and triggers the\nplayback or recording of the linked observed component\n@param InCacheName Cache name to trigger" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_InCacheName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AChaosCacheManager_TriggerComponentByCache_Statics::NewProp_InCacheName = { "InCacheName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChaosCacheManager_eventTriggerComponentByCache_Parms, InCacheName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AChaosCacheManager_TriggerComponentByCache_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChaosCacheManager_TriggerComponentByCache_Statics::NewProp_InCacheName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AChaosCacheManager_TriggerComponentByCache_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AChaosCacheManager_TriggerComponentByCache_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AChaosCacheManager, nullptr, "TriggerComponentByCache", nullptr, nullptr, Z_Construct_UFunction_AChaosCacheManager_TriggerComponentByCache_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AChaosCacheManager_TriggerComponentByCache_Statics::PropPointers), sizeof(Z_Construct_UFunction_AChaosCacheManager_TriggerComponentByCache_Statics::ChaosCacheManager_eventTriggerComponentByCache_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AChaosCacheManager_TriggerComponentByCache_Statics::Function_MetaDataParams), Z_Construct_UFunction_AChaosCacheManager_TriggerComponentByCache_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AChaosCacheManager_TriggerComponentByCache_Statics::ChaosCacheManager_eventTriggerComponentByCache_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AChaosCacheManager_TriggerComponentByCache()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AChaosCacheManager_TriggerComponentByCache_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AChaosCacheManager::execTriggerComponentByCache)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_InCacheName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TriggerComponentByCache(Z_Param_InCacheName);
	P_NATIVE_END;
}
// End Class AChaosCacheManager Function TriggerComponentByCache

// Begin Class AChaosCacheManager
void AChaosCacheManager::StaticRegisterNativesAChaosCacheManager()
{
	UClass* Class = AChaosCacheManager::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "EnablePlayback", &AChaosCacheManager::execEnablePlayback },
		{ "EnablePlaybackByCache", &AChaosCacheManager::execEnablePlaybackByCache },
		{ "ResetAllComponentTransforms", &AChaosCacheManager::execResetAllComponentTransforms },
		{ "ResetSingleTransform", &AChaosCacheManager::execResetSingleTransform },
		{ "SetCacheCollection", &AChaosCacheManager::execSetCacheCollection },
		{ "SetCurrentTime", &AChaosCacheManager::execSetCurrentTime },
		{ "SetStartTime", &AChaosCacheManager::execSetStartTime },
		{ "TriggerAll", &AChaosCacheManager::execTriggerAll },
		{ "TriggerComponent", &AChaosCacheManager::execTriggerComponent },
		{ "TriggerComponentByCache", &AChaosCacheManager::execTriggerComponentByCache },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AChaosCacheManager);
UClass* Z_Construct_UClass_AChaosCacheManager_NoRegister()
{
	return AChaosCacheManager::StaticClass();
}
struct Z_Construct_UClass_AChaosCacheManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DevelopmentStatus", "Experimental" },
		{ "IncludePath", "Chaos/CacheManagerActor.h" },
		{ "ModuleRelativePath", "Public/Chaos/CacheManagerActor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CacheCollection_MetaData[] = {
		{ "Category", "Caching" },
		{ "Comment", "/**\n\x09 * The Cache Collection asset to use for this observer. This can be used for playback and record simultaneously\n\x09 * across multiple components depending on the settings for that component.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Chaos/CacheManagerActor.h" },
		{ "ToolTip", "The Cache Collection asset to use for this observer. This can be used for playback and record simultaneously\nacross multiple components depending on the settings for that component." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CacheMode_MetaData[] = {
		{ "Category", "Caching" },
		{ "Comment", "/** How to use the cache - playback or record */" },
		{ "ModuleRelativePath", "Public/Chaos/CacheManagerActor.h" },
		{ "ToolTip", "How to use the cache - playback or record" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartMode_MetaData[] = {
		{ "Category", "Caching" },
		{ "Comment", "/**\n\x09* How to trigger the cache record or playback, timed will start counting at BeginPlay, Triggered will begin\n\x09* counting from when the owning cache manager is requested to trigger the cache action\n\x09* @see AChaosCacheManager::TriggerObservedComponent\n\x09*/" },
		{ "ModuleRelativePath", "Public/Chaos/CacheManagerActor.h" },
		{ "ToolTip", "How to trigger the cache record or playback, timed will start counting at BeginPlay, Triggered will begin\ncounting from when the owning cache manager is requested to trigger the cache action\n@see AChaosCacheManager::TriggerObservedComponent" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartTime_MetaData[] = {
		{ "Category", "Caching" },
		{ "Comment", "/**\n\x09* Defines the (random access) time that represents the rest pose of the components managed by this cache.\n\x09* When in Play mode, the components are set to the state provided by the caches at this evaluated time.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Chaos/CacheManagerActor.h" },
		{ "SequencerTrackClass", "/Script/MovieSceneTracks.MovieSceneFloatTrack" },
		{ "ToolTip", "Defines the (random access) time that represents the rest pose of the components managed by this cache.\nWhen in Play mode, the components are set to the state provided by the caches at this evaluated time." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObservedComponents_MetaData[] = {
		{ "Category", "Caching" },
		{ "Comment", "/** List of observed objects and their caches */" },
		{ "ModuleRelativePath", "Public/Chaos/CacheManagerActor.h" },
		{ "ToolTip", "List of observed objects and their caches" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CacheCollection;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CacheMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CacheMode;
	static const UECodeGen_Private::FBytePropertyParams NewProp_StartMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_StartMode;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StartTime;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ObservedComponents_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ObservedComponents;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AChaosCacheManager_EnablePlayback, "EnablePlayback" }, // 3916770664
		{ &Z_Construct_UFunction_AChaosCacheManager_EnablePlaybackByCache, "EnablePlaybackByCache" }, // 2546283285
		{ &Z_Construct_UFunction_AChaosCacheManager_ResetAllComponentTransforms, "ResetAllComponentTransforms" }, // 1479685135
		{ &Z_Construct_UFunction_AChaosCacheManager_ResetSingleTransform, "ResetSingleTransform" }, // 2028707057
		{ &Z_Construct_UFunction_AChaosCacheManager_SetCacheCollection, "SetCacheCollection" }, // 411275621
		{ &Z_Construct_UFunction_AChaosCacheManager_SetCurrentTime, "SetCurrentTime" }, // 1552785733
		{ &Z_Construct_UFunction_AChaosCacheManager_SetStartTime, "SetStartTime" }, // 1519945229
		{ &Z_Construct_UFunction_AChaosCacheManager_TriggerAll, "TriggerAll" }, // 351623379
		{ &Z_Construct_UFunction_AChaosCacheManager_TriggerComponent, "TriggerComponent" }, // 1334409566
		{ &Z_Construct_UFunction_AChaosCacheManager_TriggerComponentByCache, "TriggerComponentByCache" }, // 2901600498
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AChaosCacheManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AChaosCacheManager_Statics::NewProp_CacheCollection = { "CacheCollection", nullptr, (EPropertyFlags)0x0114000000000801, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AChaosCacheManager, CacheCollection), Z_Construct_UClass_UChaosCacheCollection_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CacheCollection_MetaData), NewProp_CacheCollection_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AChaosCacheManager_Statics::NewProp_CacheMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AChaosCacheManager_Statics::NewProp_CacheMode = { "CacheMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AChaosCacheManager, CacheMode), Z_Construct_UEnum_ChaosCaching_ECacheMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CacheMode_MetaData), NewProp_CacheMode_MetaData) }; // 4214918890
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AChaosCacheManager_Statics::NewProp_StartMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AChaosCacheManager_Statics::NewProp_StartMode = { "StartMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AChaosCacheManager, StartMode), Z_Construct_UEnum_ChaosCaching_EStartMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartMode_MetaData), NewProp_StartMode_MetaData) }; // 1580375280
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AChaosCacheManager_Statics::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AChaosCacheManager, StartTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartTime_MetaData), NewProp_StartTime_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AChaosCacheManager_Statics::NewProp_ObservedComponents_Inner = { "ObservedComponents", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FObservedComponent, METADATA_PARAMS(0, nullptr) }; // 3492977262
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AChaosCacheManager_Statics::NewProp_ObservedComponents = { "ObservedComponents", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AChaosCacheManager, ObservedComponents), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObservedComponents_MetaData), NewProp_ObservedComponents_MetaData) }; // 3492977262
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AChaosCacheManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChaosCacheManager_Statics::NewProp_CacheCollection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChaosCacheManager_Statics::NewProp_CacheMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChaosCacheManager_Statics::NewProp_CacheMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChaosCacheManager_Statics::NewProp_StartMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChaosCacheManager_Statics::NewProp_StartMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChaosCacheManager_Statics::NewProp_StartTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChaosCacheManager_Statics::NewProp_ObservedComponents_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChaosCacheManager_Statics::NewProp_ObservedComponents,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AChaosCacheManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AChaosCacheManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_ChaosCaching,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AChaosCacheManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AChaosCacheManager_Statics::ClassParams = {
	&AChaosCacheManager::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AChaosCacheManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AChaosCacheManager_Statics::PropPointers),
	0,
	0x008800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AChaosCacheManager_Statics::Class_MetaDataParams), Z_Construct_UClass_AChaosCacheManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AChaosCacheManager()
{
	if (!Z_Registration_Info_UClass_AChaosCacheManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AChaosCacheManager.OuterSingleton, Z_Construct_UClass_AChaosCacheManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AChaosCacheManager.OuterSingleton;
}
template<> CHAOSCACHING_API UClass* StaticClass<AChaosCacheManager>()
{
	return AChaosCacheManager::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AChaosCacheManager);
AChaosCacheManager::~AChaosCacheManager() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(AChaosCacheManager)
// End Class AChaosCacheManager

// Begin Class AChaosCachePlayer
void AChaosCachePlayer::StaticRegisterNativesAChaosCachePlayer()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AChaosCachePlayer);
UClass* Z_Construct_UClass_AChaosCachePlayer_NoRegister()
{
	return AChaosCachePlayer::StaticClass();
}
struct Z_Construct_UClass_AChaosCachePlayer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DevelopmentStatus", "Experimental" },
		{ "IncludePath", "Chaos/CacheManagerActor.h" },
		{ "ModuleRelativePath", "Public/Chaos/CacheManagerActor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AChaosCachePlayer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AChaosCachePlayer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AChaosCacheManager,
	(UObject* (*)())Z_Construct_UPackage__Script_ChaosCaching,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AChaosCachePlayer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AChaosCachePlayer_Statics::ClassParams = {
	&AChaosCachePlayer::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AChaosCachePlayer_Statics::Class_MetaDataParams), Z_Construct_UClass_AChaosCachePlayer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AChaosCachePlayer()
{
	if (!Z_Registration_Info_UClass_AChaosCachePlayer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AChaosCachePlayer.OuterSingleton, Z_Construct_UClass_AChaosCachePlayer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AChaosCachePlayer.OuterSingleton;
}
template<> CHAOSCACHING_API UClass* StaticClass<AChaosCachePlayer>()
{
	return AChaosCachePlayer::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AChaosCachePlayer);
AChaosCachePlayer::~AChaosCachePlayer() {}
// End Class AChaosCachePlayer

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosCaching_Source_ChaosCaching_Public_Chaos_CacheManagerActor_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ECacheMode_StaticEnum, TEXT("ECacheMode"), &Z_Registration_Info_UEnum_ECacheMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4214918890U) },
		{ EStartMode_StaticEnum, TEXT("EStartMode"), &Z_Registration_Info_UEnum_EStartMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1580375280U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FObservedComponent::StaticStruct, Z_Construct_UScriptStruct_FObservedComponent_Statics::NewStructOps, TEXT("ObservedComponent"), &Z_Registration_Info_UScriptStruct_ObservedComponent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FObservedComponent), 3492977262U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AChaosCacheManager, AChaosCacheManager::StaticClass, TEXT("AChaosCacheManager"), &Z_Registration_Info_UClass_AChaosCacheManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AChaosCacheManager), 3358826680U) },
		{ Z_Construct_UClass_AChaosCachePlayer, AChaosCachePlayer::StaticClass, TEXT("AChaosCachePlayer"), &Z_Registration_Info_UClass_AChaosCachePlayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AChaosCachePlayer), 2545754174U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosCaching_Source_ChaosCaching_Public_Chaos_CacheManagerActor_h_1747995740(TEXT("/Script/ChaosCaching"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosCaching_Source_ChaosCaching_Public_Chaos_CacheManagerActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosCaching_Source_ChaosCaching_Public_Chaos_CacheManagerActor_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosCaching_Source_ChaosCaching_Public_Chaos_CacheManagerActor_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosCaching_Source_ChaosCaching_Public_Chaos_CacheManagerActor_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosCaching_Source_ChaosCaching_Public_Chaos_CacheManagerActor_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosCaching_Source_ChaosCaching_Public_Chaos_CacheManagerActor_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
