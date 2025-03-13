// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/WorldPartition/WorldPartitionActorContainerID.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWorldPartitionActorContainerID() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FActorContainerID();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FActorContainerPath();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin ScriptStruct FActorContainerPath
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ActorContainerPath;
class UScriptStruct* FActorContainerPath::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ActorContainerPath.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ActorContainerPath.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FActorContainerPath, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ActorContainerPath"));
	}
	return Z_Registration_Info_UScriptStruct_ActorContainerPath.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FActorContainerPath>()
{
	return FActorContainerPath::StaticStruct();
}
struct Z_Construct_UScriptStruct_FActorContainerPath_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionActorContainerID.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContainerGuids_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionActorContainerID.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ContainerGuids_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ContainerGuids;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FActorContainerPath>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FActorContainerPath_Statics::NewProp_ContainerGuids_Inner = { "ContainerGuids", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FActorContainerPath_Statics::NewProp_ContainerGuids = { "ContainerGuids", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FActorContainerPath, ContainerGuids), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContainerGuids_MetaData), NewProp_ContainerGuids_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FActorContainerPath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorContainerPath_Statics::NewProp_ContainerGuids_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorContainerPath_Statics::NewProp_ContainerGuids,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorContainerPath_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FActorContainerPath_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"ActorContainerPath",
	Z_Construct_UScriptStruct_FActorContainerPath_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorContainerPath_Statics::PropPointers),
	sizeof(FActorContainerPath),
	alignof(FActorContainerPath),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorContainerPath_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FActorContainerPath_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FActorContainerPath()
{
	if (!Z_Registration_Info_UScriptStruct_ActorContainerPath.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ActorContainerPath.InnerSingleton, Z_Construct_UScriptStruct_FActorContainerPath_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ActorContainerPath.InnerSingleton;
}
// End ScriptStruct FActorContainerPath

// Begin ScriptStruct FActorContainerID
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ActorContainerID;
class UScriptStruct* FActorContainerID::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ActorContainerID.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ActorContainerID.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FActorContainerID, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ActorContainerID"));
	}
	return Z_Registration_Info_UScriptStruct_ActorContainerID.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FActorContainerID>()
{
	return FActorContainerID::StaticStruct();
}
struct Z_Construct_UScriptStruct_FActorContainerID_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionActorContainerID.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Guid_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionActorContainerID.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Guid;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FActorContainerID>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FActorContainerID_Statics::NewProp_Guid = { "Guid", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FActorContainerID, Guid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Guid_MetaData), NewProp_Guid_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FActorContainerID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorContainerID_Statics::NewProp_Guid,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorContainerID_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FActorContainerID_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"ActorContainerID",
	Z_Construct_UScriptStruct_FActorContainerID_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorContainerID_Statics::PropPointers),
	sizeof(FActorContainerID),
	alignof(FActorContainerID),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorContainerID_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FActorContainerID_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FActorContainerID()
{
	if (!Z_Registration_Info_UScriptStruct_ActorContainerID.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ActorContainerID.InnerSingleton, Z_Construct_UScriptStruct_FActorContainerID_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ActorContainerID.InnerSingleton;
}
// End ScriptStruct FActorContainerID

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionActorContainerID_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FActorContainerPath::StaticStruct, Z_Construct_UScriptStruct_FActorContainerPath_Statics::NewStructOps, TEXT("ActorContainerPath"), &Z_Registration_Info_UScriptStruct_ActorContainerPath, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FActorContainerPath), 3981793010U) },
		{ FActorContainerID::StaticStruct, Z_Construct_UScriptStruct_FActorContainerID_Statics::NewStructOps, TEXT("ActorContainerID"), &Z_Registration_Info_UScriptStruct_ActorContainerID, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FActorContainerID), 1291227467U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionActorContainerID_h_3285705062(TEXT("/Script/Engine"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionActorContainerID_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionActorContainerID_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
