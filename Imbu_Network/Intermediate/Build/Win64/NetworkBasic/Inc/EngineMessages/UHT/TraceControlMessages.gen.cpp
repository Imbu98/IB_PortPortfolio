// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/EngineMessages/Public/TraceControlMessages.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTraceControlMessages() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
ENGINEMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FTraceChannelPreset();
ENGINEMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FTraceControlBookmark();
ENGINEMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FTraceControlChannelsDesc();
ENGINEMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FTraceControlChannelsPing();
ENGINEMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FTraceControlChannelsSet();
ENGINEMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FTraceControlChannelsStatus();
ENGINEMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FTraceControlDiscovery();
ENGINEMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FTraceControlDiscoveryPing();
ENGINEMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FTraceControlFile();
ENGINEMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FTraceControlPause();
ENGINEMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FTraceControlResume();
ENGINEMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FTraceControlScreenshot();
ENGINEMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FTraceControlSend();
ENGINEMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FTraceControlSetStatNamedEvents();
ENGINEMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FTraceControlSettings();
ENGINEMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FTraceControlSettingsPing();
ENGINEMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FTraceControlSnapshotFile();
ENGINEMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FTraceControlSnapshotSend();
ENGINEMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FTraceControlStartCommon();
ENGINEMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FTraceControlStatus();
ENGINEMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FTraceControlStatusPing();
ENGINEMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FTraceControlStop();
UPackage* Z_Construct_UPackage__Script_EngineMessages();
// End Cross Module References

// Begin ScriptStruct FTraceControlStatusPing
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TraceControlStatusPing;
class UScriptStruct* FTraceControlStatusPing::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TraceControlStatusPing.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TraceControlStatusPing.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTraceControlStatusPing, (UObject*)Z_Construct_UPackage__Script_EngineMessages(), TEXT("TraceControlStatusPing"));
	}
	return Z_Registration_Info_UScriptStruct_TraceControlStatusPing.OuterSingleton;
}
template<> ENGINEMESSAGES_API UScriptStruct* StaticStruct<FTraceControlStatusPing>()
{
	return FTraceControlStatusPing::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTraceControlStatusPing_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Request a status update\n */" },
		{ "ModuleRelativePath", "Public/TraceControlMessages.h" },
		{ "ToolTip", "Request a status update" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTraceControlStatusPing>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTraceControlStatusPing_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_EngineMessages,
	nullptr,
	&NewStructOps,
	"TraceControlStatusPing",
	nullptr,
	0,
	sizeof(FTraceControlStatusPing),
	alignof(FTraceControlStatusPing),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTraceControlStatusPing_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTraceControlStatusPing_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTraceControlStatusPing()
{
	if (!Z_Registration_Info_UScriptStruct_TraceControlStatusPing.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TraceControlStatusPing.InnerSingleton, Z_Construct_UScriptStruct_FTraceControlStatusPing_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TraceControlStatusPing.InnerSingleton;
}
// End ScriptStruct FTraceControlStatusPing

// Begin ScriptStruct FTraceControlStatus
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TraceControlStatus;
class UScriptStruct* FTraceControlStatus::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TraceControlStatus.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TraceControlStatus.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTraceControlStatus, (UObject*)Z_Construct_UPackage__Script_EngineMessages(), TEXT("TraceControlStatus"));
	}
	return Z_Registration_Info_UScriptStruct_TraceControlStatus.OuterSingleton;
}
template<> ENGINEMESSAGES_API UScriptStruct* StaticStruct<FTraceControlStatus>()
{
	return FTraceControlStatus::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTraceControlStatus_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Response for FTraceControlStatusPing. Meant to be fairly high\n * frequency.\n */" },
		{ "ModuleRelativePath", "Public/TraceControlMessages.h" },
		{ "ToolTip", "Response for FTraceControlStatusPing. Meant to be fairly high\nfrequency." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Endpoint_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/TraceControlMessages.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SessionGuid_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/TraceControlMessages.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TraceGuid_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/TraceControlMessages.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BytesSent_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/TraceControlMessages.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BytesTraced_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/TraceControlMessages.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MemoryUsed_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/TraceControlMessages.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CacheAllocated_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/TraceControlMessages.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CacheUsed_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/TraceControlMessages.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CacheWaste_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/TraceControlMessages.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAreStatNamedEventsEnabled_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/TraceControlMessages.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsPaused_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/TraceControlMessages.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsTracing_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/TraceControlMessages.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StatusTimestamp_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/TraceControlMessages.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TraceSystemStatus_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/TraceControlMessages.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Endpoint;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SessionGuid;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TraceGuid;
	static const UECodeGen_Private::FUInt64PropertyParams NewProp_BytesSent;
	static const UECodeGen_Private::FUInt64PropertyParams NewProp_BytesTraced;
	static const UECodeGen_Private::FUInt64PropertyParams NewProp_MemoryUsed;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_CacheAllocated;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_CacheUsed;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_CacheWaste;
	static void NewProp_bAreStatNamedEventsEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAreStatNamedEventsEnabled;
	static void NewProp_bIsPaused_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsPaused;
	static void NewProp_bIsTracing_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsTracing;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StatusTimestamp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TraceSystemStatus;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTraceControlStatus>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTraceControlStatus_Statics::NewProp_Endpoint = { "Endpoint", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTraceControlStatus, Endpoint), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Endpoint_MetaData), NewProp_Endpoint_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTraceControlStatus_Statics::NewProp_SessionGuid = { "SessionGuid", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTraceControlStatus, SessionGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SessionGuid_MetaData), NewProp_SessionGuid_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTraceControlStatus_Statics::NewProp_TraceGuid = { "TraceGuid", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTraceControlStatus, TraceGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TraceGuid_MetaData), NewProp_TraceGuid_MetaData) };
const UECodeGen_Private::FUInt64PropertyParams Z_Construct_UScriptStruct_FTraceControlStatus_Statics::NewProp_BytesSent = { "BytesSent", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTraceControlStatus, BytesSent), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BytesSent_MetaData), NewProp_BytesSent_MetaData) };
const UECodeGen_Private::FUInt64PropertyParams Z_Construct_UScriptStruct_FTraceControlStatus_Statics::NewProp_BytesTraced = { "BytesTraced", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTraceControlStatus, BytesTraced), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BytesTraced_MetaData), NewProp_BytesTraced_MetaData) };
const UECodeGen_Private::FUInt64PropertyParams Z_Construct_UScriptStruct_FTraceControlStatus_Statics::NewProp_MemoryUsed = { "MemoryUsed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTraceControlStatus, MemoryUsed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MemoryUsed_MetaData), NewProp_MemoryUsed_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FTraceControlStatus_Statics::NewProp_CacheAllocated = { "CacheAllocated", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTraceControlStatus, CacheAllocated), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CacheAllocated_MetaData), NewProp_CacheAllocated_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FTraceControlStatus_Statics::NewProp_CacheUsed = { "CacheUsed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTraceControlStatus, CacheUsed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CacheUsed_MetaData), NewProp_CacheUsed_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FTraceControlStatus_Statics::NewProp_CacheWaste = { "CacheWaste", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTraceControlStatus, CacheWaste), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CacheWaste_MetaData), NewProp_CacheWaste_MetaData) };
void Z_Construct_UScriptStruct_FTraceControlStatus_Statics::NewProp_bAreStatNamedEventsEnabled_SetBit(void* Obj)
{
	((FTraceControlStatus*)Obj)->bAreStatNamedEventsEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTraceControlStatus_Statics::NewProp_bAreStatNamedEventsEnabled = { "bAreStatNamedEventsEnabled", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FTraceControlStatus), &Z_Construct_UScriptStruct_FTraceControlStatus_Statics::NewProp_bAreStatNamedEventsEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAreStatNamedEventsEnabled_MetaData), NewProp_bAreStatNamedEventsEnabled_MetaData) };
void Z_Construct_UScriptStruct_FTraceControlStatus_Statics::NewProp_bIsPaused_SetBit(void* Obj)
{
	((FTraceControlStatus*)Obj)->bIsPaused = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTraceControlStatus_Statics::NewProp_bIsPaused = { "bIsPaused", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FTraceControlStatus), &Z_Construct_UScriptStruct_FTraceControlStatus_Statics::NewProp_bIsPaused_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsPaused_MetaData), NewProp_bIsPaused_MetaData) };
void Z_Construct_UScriptStruct_FTraceControlStatus_Statics::NewProp_bIsTracing_SetBit(void* Obj)
{
	((FTraceControlStatus*)Obj)->bIsTracing = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTraceControlStatus_Statics::NewProp_bIsTracing = { "bIsTracing", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FTraceControlStatus), &Z_Construct_UScriptStruct_FTraceControlStatus_Statics::NewProp_bIsTracing_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsTracing_MetaData), NewProp_bIsTracing_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTraceControlStatus_Statics::NewProp_StatusTimestamp = { "StatusTimestamp", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTraceControlStatus, StatusTimestamp), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StatusTimestamp_MetaData), NewProp_StatusTimestamp_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTraceControlStatus_Statics::NewProp_TraceSystemStatus = { "TraceSystemStatus", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTraceControlStatus, TraceSystemStatus), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TraceSystemStatus_MetaData), NewProp_TraceSystemStatus_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTraceControlStatus_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTraceControlStatus_Statics::NewProp_Endpoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTraceControlStatus_Statics::NewProp_SessionGuid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTraceControlStatus_Statics::NewProp_TraceGuid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTraceControlStatus_Statics::NewProp_BytesSent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTraceControlStatus_Statics::NewProp_BytesTraced,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTraceControlStatus_Statics::NewProp_MemoryUsed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTraceControlStatus_Statics::NewProp_CacheAllocated,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTraceControlStatus_Statics::NewProp_CacheUsed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTraceControlStatus_Statics::NewProp_CacheWaste,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTraceControlStatus_Statics::NewProp_bAreStatNamedEventsEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTraceControlStatus_Statics::NewProp_bIsPaused,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTraceControlStatus_Statics::NewProp_bIsTracing,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTraceControlStatus_Statics::NewProp_StatusTimestamp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTraceControlStatus_Statics::NewProp_TraceSystemStatus,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTraceControlStatus_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTraceControlStatus_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_EngineMessages,
	nullptr,
	&NewStructOps,
	"TraceControlStatus",
	Z_Construct_UScriptStruct_FTraceControlStatus_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTraceControlStatus_Statics::PropPointers),
	sizeof(FTraceControlStatus),
	alignof(FTraceControlStatus),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTraceControlStatus_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTraceControlStatus_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTraceControlStatus()
{
	if (!Z_Registration_Info_UScriptStruct_TraceControlStatus.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TraceControlStatus.InnerSingleton, Z_Construct_UScriptStruct_FTraceControlStatus_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TraceControlStatus.InnerSingleton;
}
// End ScriptStruct FTraceControlStatus

// Begin ScriptStruct FTraceControlSettingsPing
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TraceControlSettingsPing;
class UScriptStruct* FTraceControlSettingsPing::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TraceControlSettingsPing.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TraceControlSettingsPing.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTraceControlSettingsPing, (UObject*)Z_Construct_UPackage__Script_EngineMessages(), TEXT("TraceControlSettingsPing"));
	}
	return Z_Registration_Info_UScriptStruct_TraceControlSettingsPing.OuterSingleton;
}
template<> ENGINEMESSAGES_API UScriptStruct* StaticStruct<FTraceControlSettingsPing>()
{
	return FTraceControlSettingsPing::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTraceControlSettingsPing_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Request update of settings\n */" },
		{ "ModuleRelativePath", "Public/TraceControlMessages.h" },
		{ "ToolTip", "Request update of settings" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTraceControlSettingsPing>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTraceControlSettingsPing_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_EngineMessages,
	nullptr,
	&NewStructOps,
	"TraceControlSettingsPing",
	nullptr,
	0,
	sizeof(FTraceControlSettingsPing),
	alignof(FTraceControlSettingsPing),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTraceControlSettingsPing_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTraceControlSettingsPing_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTraceControlSettingsPing()
{
	if (!Z_Registration_Info_UScriptStruct_TraceControlSettingsPing.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TraceControlSettingsPing.InnerSingleton, Z_Construct_UScriptStruct_FTraceControlSettingsPing_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TraceControlSettingsPing.InnerSingleton;
}
// End ScriptStruct FTraceControlSettingsPing

// Begin ScriptStruct FTraceChannelPreset
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TraceChannelPreset;
class UScriptStruct* FTraceChannelPreset::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TraceChannelPreset.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TraceChannelPreset.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTraceChannelPreset, (UObject*)Z_Construct_UPackage__Script_EngineMessages(), TEXT("TraceChannelPreset"));
	}
	return Z_Registration_Info_UScriptStruct_TraceChannelPreset.OuterSingleton;
}
template<> ENGINEMESSAGES_API UScriptStruct* StaticStruct<FTraceChannelPreset>()
{
	return FTraceChannelPreset::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTraceChannelPreset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *\x09""Contains data about a trace channel preset\n */" },
		{ "ModuleRelativePath", "Public/TraceControlMessages.h" },
		{ "ToolTip", "Contains data about a trace channel preset" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/TraceControlMessages.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChannelList_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/TraceControlMessages.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsReadOnly_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/TraceControlMessages.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ChannelList;
	static void NewProp_bIsReadOnly_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsReadOnly;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTraceChannelPreset>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTraceChannelPreset_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTraceChannelPreset, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTraceChannelPreset_Statics::NewProp_ChannelList = { "ChannelList", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTraceChannelPreset, ChannelList), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChannelList_MetaData), NewProp_ChannelList_MetaData) };
void Z_Construct_UScriptStruct_FTraceChannelPreset_Statics::NewProp_bIsReadOnly_SetBit(void* Obj)
{
	((FTraceChannelPreset*)Obj)->bIsReadOnly = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTraceChannelPreset_Statics::NewProp_bIsReadOnly = { "bIsReadOnly", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FTraceChannelPreset), &Z_Construct_UScriptStruct_FTraceChannelPreset_Statics::NewProp_bIsReadOnly_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsReadOnly_MetaData), NewProp_bIsReadOnly_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTraceChannelPreset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTraceChannelPreset_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTraceChannelPreset_Statics::NewProp_ChannelList,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTraceChannelPreset_Statics::NewProp_bIsReadOnly,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTraceChannelPreset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTraceChannelPreset_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_EngineMessages,
	nullptr,
	&NewStructOps,
	"TraceChannelPreset",
	Z_Construct_UScriptStruct_FTraceChannelPreset_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTraceChannelPreset_Statics::PropPointers),
	sizeof(FTraceChannelPreset),
	alignof(FTraceChannelPreset),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTraceChannelPreset_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTraceChannelPreset_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTraceChannelPreset()
{
	if (!Z_Registration_Info_UScriptStruct_TraceChannelPreset.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TraceChannelPreset.InnerSingleton, Z_Construct_UScriptStruct_FTraceChannelPreset_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TraceChannelPreset.InnerSingleton;
}
// End ScriptStruct FTraceChannelPreset

// Begin ScriptStruct FTraceControlSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TraceControlSettings;
class UScriptStruct* FTraceControlSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TraceControlSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TraceControlSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTraceControlSettings, (UObject*)Z_Construct_UPackage__Script_EngineMessages(), TEXT("TraceControlSettings"));
	}
	return Z_Registration_Info_UScriptStruct_TraceControlSettings.OuterSingleton;
}
template<> ENGINEMESSAGES_API UScriptStruct* StaticStruct<FTraceControlSettings>()
{
	return FTraceControlSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTraceControlSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Response for FTraceControlSettingsPing containing\n * TraceLog and system settings.\n */" },
		{ "ModuleRelativePath", "Public/TraceControlMessages.h" },
		{ "ToolTip", "Response for FTraceControlSettingsPing containing\nTraceLog and system settings." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseWorkerThread_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/TraceControlMessages.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseImportantCache_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/TraceControlMessages.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TailSizeBytes_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/TraceControlMessages.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChannelPresets_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/TraceControlMessages.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bUseWorkerThread_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseWorkerThread;
	static void NewProp_bUseImportantCache_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseImportantCache;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_TailSizeBytes;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ChannelPresets_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ChannelPresets;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTraceControlSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FTraceControlSettings_Statics::NewProp_bUseWorkerThread_SetBit(void* Obj)
{
	((FTraceControlSettings*)Obj)->bUseWorkerThread = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTraceControlSettings_Statics::NewProp_bUseWorkerThread = { "bUseWorkerThread", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FTraceControlSettings), &Z_Construct_UScriptStruct_FTraceControlSettings_Statics::NewProp_bUseWorkerThread_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseWorkerThread_MetaData), NewProp_bUseWorkerThread_MetaData) };
void Z_Construct_UScriptStruct_FTraceControlSettings_Statics::NewProp_bUseImportantCache_SetBit(void* Obj)
{
	((FTraceControlSettings*)Obj)->bUseImportantCache = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTraceControlSettings_Statics::NewProp_bUseImportantCache = { "bUseImportantCache", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FTraceControlSettings), &Z_Construct_UScriptStruct_FTraceControlSettings_Statics::NewProp_bUseImportantCache_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseImportantCache_MetaData), NewProp_bUseImportantCache_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FTraceControlSettings_Statics::NewProp_TailSizeBytes = { "TailSizeBytes", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTraceControlSettings, TailSizeBytes), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TailSizeBytes_MetaData), NewProp_TailSizeBytes_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTraceControlSettings_Statics::NewProp_ChannelPresets_Inner = { "ChannelPresets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTraceChannelPreset, METADATA_PARAMS(0, nullptr) }; // 3979556401
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTraceControlSettings_Statics::NewProp_ChannelPresets = { "ChannelPresets", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTraceControlSettings, ChannelPresets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChannelPresets_MetaData), NewProp_ChannelPresets_MetaData) }; // 3979556401
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTraceControlSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTraceControlSettings_Statics::NewProp_bUseWorkerThread,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTraceControlSettings_Statics::NewProp_bUseImportantCache,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTraceControlSettings_Statics::NewProp_TailSizeBytes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTraceControlSettings_Statics::NewProp_ChannelPresets_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTraceControlSettings_Statics::NewProp_ChannelPresets,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTraceControlSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTraceControlSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_EngineMessages,
	nullptr,
	&NewStructOps,
	"TraceControlSettings",
	Z_Construct_UScriptStruct_FTraceControlSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTraceControlSettings_Statics::PropPointers),
	sizeof(FTraceControlSettings),
	alignof(FTraceControlSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTraceControlSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTraceControlSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTraceControlSettings()
{
	if (!Z_Registration_Info_UScriptStruct_TraceControlSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TraceControlSettings.InnerSingleton, Z_Construct_UScriptStruct_FTraceControlSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TraceControlSettings.InnerSingleton;
}
// End ScriptStruct FTraceControlSettings

// Begin ScriptStruct FTraceControlChannelsPing
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TraceControlChannelsPing;
class UScriptStruct* FTraceControlChannelsPing::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TraceControlChannelsPing.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TraceControlChannelsPing.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTraceControlChannelsPing, (UObject*)Z_Construct_UPackage__Script_EngineMessages(), TEXT("TraceControlChannelsPing"));
	}
	return Z_Registration_Info_UScriptStruct_TraceControlChannelsPing.OuterSingleton;
}
template<> ENGINEMESSAGES_API UScriptStruct* StaticStruct<FTraceControlChannelsPing>()
{
	return FTraceControlChannelsPing::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTraceControlChannelsPing_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Request update of channels and status\n */" },
		{ "ModuleRelativePath", "Public/TraceControlMessages.h" },
		{ "ToolTip", "Request update of channels and status" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KnownChannelCount_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/TraceControlMessages.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_KnownChannelCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTraceControlChannelsPing>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FTraceControlChannelsPing_Statics::NewProp_KnownChannelCount = { "KnownChannelCount", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTraceControlChannelsPing, KnownChannelCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KnownChannelCount_MetaData), NewProp_KnownChannelCount_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTraceControlChannelsPing_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTraceControlChannelsPing_Statics::NewProp_KnownChannelCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTraceControlChannelsPing_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTraceControlChannelsPing_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_EngineMessages,
	nullptr,
	&NewStructOps,
	"TraceControlChannelsPing",
	Z_Construct_UScriptStruct_FTraceControlChannelsPing_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTraceControlChannelsPing_Statics::PropPointers),
	sizeof(FTraceControlChannelsPing),
	alignof(FTraceControlChannelsPing),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTraceControlChannelsPing_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTraceControlChannelsPing_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTraceControlChannelsPing()
{
	if (!Z_Registration_Info_UScriptStruct_TraceControlChannelsPing.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TraceControlChannelsPing.InnerSingleton, Z_Construct_UScriptStruct_FTraceControlChannelsPing_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TraceControlChannelsPing.InnerSingleton;
}
// End ScriptStruct FTraceControlChannelsPing

// Begin ScriptStruct FTraceControlChannelsDesc
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TraceControlChannelsDesc;
class UScriptStruct* FTraceControlChannelsDesc::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TraceControlChannelsDesc.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TraceControlChannelsDesc.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTraceControlChannelsDesc, (UObject*)Z_Construct_UPackage__Script_EngineMessages(), TEXT("TraceControlChannelsDesc"));
	}
	return Z_Registration_Info_UScriptStruct_TraceControlChannelsDesc.OuterSingleton;
}
template<> ENGINEMESSAGES_API UScriptStruct* StaticStruct<FTraceControlChannelsDesc>()
{
	return FTraceControlChannelsDesc::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTraceControlChannelsDesc_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Response for FTraceControlChannelsPing with information\n * about available channels.\n */" },
		{ "ModuleRelativePath", "Public/TraceControlMessages.h" },
		{ "ToolTip", "Response for FTraceControlChannelsPing with information\nabout available channels." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Channels_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/TraceControlMessages.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Ids_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/TraceControlMessages.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Descriptions_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/TraceControlMessages.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReadOnlyIds_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/TraceControlMessages.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Channels_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Channels;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_Ids_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Ids;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Descriptions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Descriptions;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_ReadOnlyIds_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReadOnlyIds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTraceControlChannelsDesc>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTraceControlChannelsDesc_Statics::NewProp_Channels_Inner = { "Channels", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTraceControlChannelsDesc_Statics::NewProp_Channels = { "Channels", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTraceControlChannelsDesc, Channels), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Channels_MetaData), NewProp_Channels_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FTraceControlChannelsDesc_Statics::NewProp_Ids_Inner = { "Ids", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTraceControlChannelsDesc_Statics::NewProp_Ids = { "Ids", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTraceControlChannelsDesc, Ids), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Ids_MetaData), NewProp_Ids_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTraceControlChannelsDesc_Statics::NewProp_Descriptions_Inner = { "Descriptions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTraceControlChannelsDesc_Statics::NewProp_Descriptions = { "Descriptions", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTraceControlChannelsDesc, Descriptions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Descriptions_MetaData), NewProp_Descriptions_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FTraceControlChannelsDesc_Statics::NewProp_ReadOnlyIds_Inner = { "ReadOnlyIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTraceControlChannelsDesc_Statics::NewProp_ReadOnlyIds = { "ReadOnlyIds", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTraceControlChannelsDesc, ReadOnlyIds), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReadOnlyIds_MetaData), NewProp_ReadOnlyIds_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTraceControlChannelsDesc_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTraceControlChannelsDesc_Statics::NewProp_Channels_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTraceControlChannelsDesc_Statics::NewProp_Channels,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTraceControlChannelsDesc_Statics::NewProp_Ids_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTraceControlChannelsDesc_Statics::NewProp_Ids,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTraceControlChannelsDesc_Statics::NewProp_Descriptions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTraceControlChannelsDesc_Statics::NewProp_Descriptions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTraceControlChannelsDesc_Statics::NewProp_ReadOnlyIds_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTraceControlChannelsDesc_Statics::NewProp_ReadOnlyIds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTraceControlChannelsDesc_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTraceControlChannelsDesc_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_EngineMessages,
	nullptr,
	&NewStructOps,
	"TraceControlChannelsDesc",
	Z_Construct_UScriptStruct_FTraceControlChannelsDesc_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTraceControlChannelsDesc_Statics::PropPointers),
	sizeof(FTraceControlChannelsDesc),
	alignof(FTraceControlChannelsDesc),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTraceControlChannelsDesc_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTraceControlChannelsDesc_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTraceControlChannelsDesc()
{
	if (!Z_Registration_Info_UScriptStruct_TraceControlChannelsDesc.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TraceControlChannelsDesc.InnerSingleton, Z_Construct_UScriptStruct_FTraceControlChannelsDesc_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TraceControlChannelsDesc.InnerSingleton;
}
// End ScriptStruct FTraceControlChannelsDesc

// Begin ScriptStruct FTraceControlChannelsStatus
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TraceControlChannelsStatus;
class UScriptStruct* FTraceControlChannelsStatus::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TraceControlChannelsStatus.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TraceControlChannelsStatus.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTraceControlChannelsStatus, (UObject*)Z_Construct_UPackage__Script_EngineMessages(), TEXT("TraceControlChannelsStatus"));
	}
	return Z_Registration_Info_UScriptStruct_TraceControlChannelsStatus.OuterSingleton;
}
template<> ENGINEMESSAGES_API UScriptStruct* StaticStruct<FTraceControlChannelsStatus>()
{
	return FTraceControlChannelsStatus::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTraceControlChannelsStatus_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Response for FTraceControlChannelsPing with information about\n * enabled channels.\n */" },
		{ "ModuleRelativePath", "Public/TraceControlMessages.h" },
		{ "ToolTip", "Response for FTraceControlChannelsPing with information about\nenabled channels." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnabledIds_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/TraceControlMessages.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_EnabledIds_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_EnabledIds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTraceControlChannelsStatus>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FTraceControlChannelsStatus_Statics::NewProp_EnabledIds_Inner = { "EnabledIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTraceControlChannelsStatus_Statics::NewProp_EnabledIds = { "EnabledIds", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTraceControlChannelsStatus, EnabledIds), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnabledIds_MetaData), NewProp_EnabledIds_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTraceControlChannelsStatus_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTraceControlChannelsStatus_Statics::NewProp_EnabledIds_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTraceControlChannelsStatus_Statics::NewProp_EnabledIds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTraceControlChannelsStatus_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTraceControlChannelsStatus_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_EngineMessages,
	nullptr,
	&NewStructOps,
	"TraceControlChannelsStatus",
	Z_Construct_UScriptStruct_FTraceControlChannelsStatus_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTraceControlChannelsStatus_Statics::PropPointers),
	sizeof(FTraceControlChannelsStatus),
	alignof(FTraceControlChannelsStatus),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTraceControlChannelsStatus_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTraceControlChannelsStatus_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTraceControlChannelsStatus()
{
	if (!Z_Registration_Info_UScriptStruct_TraceControlChannelsStatus.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TraceControlChannelsStatus.InnerSingleton, Z_Construct_UScriptStruct_FTraceControlChannelsStatus_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TraceControlChannelsStatus.InnerSingleton;
}
// End ScriptStruct FTraceControlChannelsStatus

// Begin ScriptStruct FTraceControlChannelsSet
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TraceControlChannelsSet;
class UScriptStruct* FTraceControlChannelsSet::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TraceControlChannelsSet.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TraceControlChannelsSet.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTraceControlChannelsSet, (UObject*)Z_Construct_UPackage__Script_EngineMessages(), TEXT("TraceControlChannelsSet"));
	}
	return Z_Registration_Info_UScriptStruct_TraceControlChannelsSet.OuterSingleton;
}
template<> ENGINEMESSAGES_API UScriptStruct* StaticStruct<FTraceControlChannelsSet>()
{
	return FTraceControlChannelsSet::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTraceControlChannelsSet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Command to set the state of channels\n */" },
		{ "ModuleRelativePath", "Public/TraceControlMessages.h" },
		{ "ToolTip", "Command to set the state of channels" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChannelIdsToEnable_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/TraceControlMessages.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChannelIdsToDisable_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/TraceControlMessages.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_ChannelIdsToEnable_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ChannelIdsToEnable;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_ChannelIdsToDisable_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ChannelIdsToDisable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTraceControlChannelsSet>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FTraceControlChannelsSet_Statics::NewProp_ChannelIdsToEnable_Inner = { "ChannelIdsToEnable", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTraceControlChannelsSet_Statics::NewProp_ChannelIdsToEnable = { "ChannelIdsToEnable", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTraceControlChannelsSet, ChannelIdsToEnable), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChannelIdsToEnable_MetaData), NewProp_ChannelIdsToEnable_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FTraceControlChannelsSet_Statics::NewProp_ChannelIdsToDisable_Inner = { "ChannelIdsToDisable", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTraceControlChannelsSet_Statics::NewProp_ChannelIdsToDisable = { "ChannelIdsToDisable", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTraceControlChannelsSet, ChannelIdsToDisable), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChannelIdsToDisable_MetaData), NewProp_ChannelIdsToDisable_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTraceControlChannelsSet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTraceControlChannelsSet_Statics::NewProp_ChannelIdsToEnable_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTraceControlChannelsSet_Statics::NewProp_ChannelIdsToEnable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTraceControlChannelsSet_Statics::NewProp_ChannelIdsToDisable_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTraceControlChannelsSet_Statics::NewProp_ChannelIdsToDisable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTraceControlChannelsSet_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTraceControlChannelsSet_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_EngineMessages,
	nullptr,
	&NewStructOps,
	"TraceControlChannelsSet",
	Z_Construct_UScriptStruct_FTraceControlChannelsSet_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTraceControlChannelsSet_Statics::PropPointers),
	sizeof(FTraceControlChannelsSet),
	alignof(FTraceControlChannelsSet),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTraceControlChannelsSet_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTraceControlChannelsSet_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTraceControlChannelsSet()
{
	if (!Z_Registration_Info_UScriptStruct_TraceControlChannelsSet.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TraceControlChannelsSet.InnerSingleton, Z_Construct_UScriptStruct_FTraceControlChannelsSet_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TraceControlChannelsSet.InnerSingleton;
}
// End ScriptStruct FTraceControlChannelsSet

// Begin ScriptStruct FTraceControlDiscoveryPing
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TraceControlDiscoveryPing;
class UScriptStruct* FTraceControlDiscoveryPing::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TraceControlDiscoveryPing.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TraceControlDiscoveryPing.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTraceControlDiscoveryPing, (UObject*)Z_Construct_UPackage__Script_EngineMessages(), TEXT("TraceControlDiscoveryPing"));
	}
	return Z_Registration_Info_UScriptStruct_TraceControlDiscoveryPing.OuterSingleton;
}
template<> ENGINEMESSAGES_API UScriptStruct* StaticStruct<FTraceControlDiscoveryPing>()
{
	return FTraceControlDiscoveryPing::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTraceControlDiscoveryPing_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Message sent when first connecting to a session. Expected to return\n * FTraceControlPong message.\n */" },
		{ "ModuleRelativePath", "Public/TraceControlMessages.h" },
		{ "ToolTip", "Message sent when first connecting to a session. Expected to return\nFTraceControlPong message." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SessionId_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/TraceControlMessages.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InstanceId_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/TraceControlMessages.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SessionId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InstanceId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTraceControlDiscoveryPing>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTraceControlDiscoveryPing_Statics::NewProp_SessionId = { "SessionId", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTraceControlDiscoveryPing, SessionId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SessionId_MetaData), NewProp_SessionId_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTraceControlDiscoveryPing_Statics::NewProp_InstanceId = { "InstanceId", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTraceControlDiscoveryPing, InstanceId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InstanceId_MetaData), NewProp_InstanceId_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTraceControlDiscoveryPing_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTraceControlDiscoveryPing_Statics::NewProp_SessionId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTraceControlDiscoveryPing_Statics::NewProp_InstanceId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTraceControlDiscoveryPing_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTraceControlDiscoveryPing_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_EngineMessages,
	nullptr,
	&NewStructOps,
	"TraceControlDiscoveryPing",
	Z_Construct_UScriptStruct_FTraceControlDiscoveryPing_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTraceControlDiscoveryPing_Statics::PropPointers),
	sizeof(FTraceControlDiscoveryPing),
	alignof(FTraceControlDiscoveryPing),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTraceControlDiscoveryPing_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTraceControlDiscoveryPing_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTraceControlDiscoveryPing()
{
	if (!Z_Registration_Info_UScriptStruct_TraceControlDiscoveryPing.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TraceControlDiscoveryPing.InnerSingleton, Z_Construct_UScriptStruct_FTraceControlDiscoveryPing_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TraceControlDiscoveryPing.InnerSingleton;
}
// End ScriptStruct FTraceControlDiscoveryPing

// Begin ScriptStruct FTraceControlDiscovery
static_assert(std::is_polymorphic<FTraceControlDiscovery>() == std::is_polymorphic<FTraceControlStatus>(), "USTRUCT FTraceControlDiscovery cannot be polymorphic unless super FTraceControlStatus is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TraceControlDiscovery;
class UScriptStruct* FTraceControlDiscovery::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TraceControlDiscovery.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TraceControlDiscovery.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTraceControlDiscovery, (UObject*)Z_Construct_UPackage__Script_EngineMessages(), TEXT("TraceControlDiscovery"));
	}
	return Z_Registration_Info_UScriptStruct_TraceControlDiscovery.OuterSingleton;
}
template<> ENGINEMESSAGES_API UScriptStruct* StaticStruct<FTraceControlDiscovery>()
{
	return FTraceControlDiscovery::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTraceControlDiscovery_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Response for FTraceControlPing. A status message with additional\n * information about session instance and properties that doesn't change\n * over the course of the session lifetime.\n */" },
		{ "ModuleRelativePath", "Public/TraceControlMessages.h" },
		{ "ToolTip", "Response for FTraceControlPing. A status message with additional\ninformation about session instance and properties that doesn't change\nover the course of the session lifetime." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SessionId_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/TraceControlMessages.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InstanceId_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/TraceControlMessages.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SessionId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InstanceId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTraceControlDiscovery>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTraceControlDiscovery_Statics::NewProp_SessionId = { "SessionId", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTraceControlDiscovery, SessionId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SessionId_MetaData), NewProp_SessionId_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTraceControlDiscovery_Statics::NewProp_InstanceId = { "InstanceId", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTraceControlDiscovery, InstanceId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InstanceId_MetaData), NewProp_InstanceId_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTraceControlDiscovery_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTraceControlDiscovery_Statics::NewProp_SessionId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTraceControlDiscovery_Statics::NewProp_InstanceId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTraceControlDiscovery_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTraceControlDiscovery_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_EngineMessages,
	Z_Construct_UScriptStruct_FTraceControlStatus,
	&NewStructOps,
	"TraceControlDiscovery",
	Z_Construct_UScriptStruct_FTraceControlDiscovery_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTraceControlDiscovery_Statics::PropPointers),
	sizeof(FTraceControlDiscovery),
	alignof(FTraceControlDiscovery),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTraceControlDiscovery_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTraceControlDiscovery_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTraceControlDiscovery()
{
	if (!Z_Registration_Info_UScriptStruct_TraceControlDiscovery.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TraceControlDiscovery.InnerSingleton, Z_Construct_UScriptStruct_FTraceControlDiscovery_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TraceControlDiscovery.InnerSingleton;
}
// End ScriptStruct FTraceControlDiscovery

// Begin ScriptStruct FTraceControlStop
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TraceControlStop;
class UScriptStruct* FTraceControlStop::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TraceControlStop.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TraceControlStop.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTraceControlStop, (UObject*)Z_Construct_UPackage__Script_EngineMessages(), TEXT("TraceControlStop"));
	}
	return Z_Registration_Info_UScriptStruct_TraceControlStop.OuterSingleton;
}
template<> ENGINEMESSAGES_API UScriptStruct* StaticStruct<FTraceControlStop>()
{
	return FTraceControlStop::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTraceControlStop_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Stop current trace.\n */" },
		{ "ModuleRelativePath", "Public/TraceControlMessages.h" },
		{ "ToolTip", "Stop current trace." },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTraceControlStop>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTraceControlStop_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_EngineMessages,
	nullptr,
	&NewStructOps,
	"TraceControlStop",
	nullptr,
	0,
	sizeof(FTraceControlStop),
	alignof(FTraceControlStop),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTraceControlStop_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTraceControlStop_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTraceControlStop()
{
	if (!Z_Registration_Info_UScriptStruct_TraceControlStop.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TraceControlStop.InnerSingleton, Z_Construct_UScriptStruct_FTraceControlStop_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TraceControlStop.InnerSingleton;
}
// End ScriptStruct FTraceControlStop

// Begin ScriptStruct FTraceControlStartCommon
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TraceControlStartCommon;
class UScriptStruct* FTraceControlStartCommon::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TraceControlStartCommon.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TraceControlStartCommon.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTraceControlStartCommon, (UObject*)Z_Construct_UPackage__Script_EngineMessages(), TEXT("TraceControlStartCommon"));
	}
	return Z_Registration_Info_UScriptStruct_TraceControlStartCommon.OuterSingleton;
}
template<> ENGINEMESSAGES_API UScriptStruct* StaticStruct<FTraceControlStartCommon>()
{
	return FTraceControlStartCommon::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTraceControlStartCommon_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Shared properties for starting a trace. Never use this message directly.\n */" },
		{ "ModuleRelativePath", "Public/TraceControlMessages.h" },
		{ "ToolTip", "Shared properties for starting a trace. Never use this message directly." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Channels_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/TraceControlMessages.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bExcludeTail_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/TraceControlMessages.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Channels;
	static void NewProp_bExcludeTail_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bExcludeTail;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTraceControlStartCommon>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTraceControlStartCommon_Statics::NewProp_Channels = { "Channels", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTraceControlStartCommon, Channels), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Channels_MetaData), NewProp_Channels_MetaData) };
void Z_Construct_UScriptStruct_FTraceControlStartCommon_Statics::NewProp_bExcludeTail_SetBit(void* Obj)
{
	((FTraceControlStartCommon*)Obj)->bExcludeTail = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTraceControlStartCommon_Statics::NewProp_bExcludeTail = { "bExcludeTail", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FTraceControlStartCommon), &Z_Construct_UScriptStruct_FTraceControlStartCommon_Statics::NewProp_bExcludeTail_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bExcludeTail_MetaData), NewProp_bExcludeTail_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTraceControlStartCommon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTraceControlStartCommon_Statics::NewProp_Channels,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTraceControlStartCommon_Statics::NewProp_bExcludeTail,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTraceControlStartCommon_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTraceControlStartCommon_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_EngineMessages,
	nullptr,
	&NewStructOps,
	"TraceControlStartCommon",
	Z_Construct_UScriptStruct_FTraceControlStartCommon_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTraceControlStartCommon_Statics::PropPointers),
	sizeof(FTraceControlStartCommon),
	alignof(FTraceControlStartCommon),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTraceControlStartCommon_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTraceControlStartCommon_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTraceControlStartCommon()
{
	if (!Z_Registration_Info_UScriptStruct_TraceControlStartCommon.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TraceControlStartCommon.InnerSingleton, Z_Construct_UScriptStruct_FTraceControlStartCommon_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TraceControlStartCommon.InnerSingleton;
}
// End ScriptStruct FTraceControlStartCommon

// Begin ScriptStruct FTraceControlSend
static_assert(std::is_polymorphic<FTraceControlSend>() == std::is_polymorphic<FTraceControlStartCommon>(), "USTRUCT FTraceControlSend cannot be polymorphic unless super FTraceControlStartCommon is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TraceControlSend;
class UScriptStruct* FTraceControlSend::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TraceControlSend.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TraceControlSend.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTraceControlSend, (UObject*)Z_Construct_UPackage__Script_EngineMessages(), TEXT("TraceControlSend"));
	}
	return Z_Registration_Info_UScriptStruct_TraceControlSend.OuterSingleton;
}
template<> ENGINEMESSAGES_API UScriptStruct* StaticStruct<FTraceControlSend>()
{
	return FTraceControlSend::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTraceControlSend_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Start tracing to a host\n */" },
		{ "ModuleRelativePath", "Public/TraceControlMessages.h" },
		{ "ToolTip", "Start tracing to a host" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Host_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/TraceControlMessages.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Host;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTraceControlSend>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTraceControlSend_Statics::NewProp_Host = { "Host", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTraceControlSend, Host), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Host_MetaData), NewProp_Host_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTraceControlSend_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTraceControlSend_Statics::NewProp_Host,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTraceControlSend_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTraceControlSend_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_EngineMessages,
	Z_Construct_UScriptStruct_FTraceControlStartCommon,
	&NewStructOps,
	"TraceControlSend",
	Z_Construct_UScriptStruct_FTraceControlSend_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTraceControlSend_Statics::PropPointers),
	sizeof(FTraceControlSend),
	alignof(FTraceControlSend),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTraceControlSend_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTraceControlSend_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTraceControlSend()
{
	if (!Z_Registration_Info_UScriptStruct_TraceControlSend.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TraceControlSend.InnerSingleton, Z_Construct_UScriptStruct_FTraceControlSend_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TraceControlSend.InnerSingleton;
}
// End ScriptStruct FTraceControlSend

// Begin ScriptStruct FTraceControlFile
static_assert(std::is_polymorphic<FTraceControlFile>() == std::is_polymorphic<FTraceControlStartCommon>(), "USTRUCT FTraceControlFile cannot be polymorphic unless super FTraceControlStartCommon is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TraceControlFile;
class UScriptStruct* FTraceControlFile::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TraceControlFile.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TraceControlFile.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTraceControlFile, (UObject*)Z_Construct_UPackage__Script_EngineMessages(), TEXT("TraceControlFile"));
	}
	return Z_Registration_Info_UScriptStruct_TraceControlFile.OuterSingleton;
}
template<> ENGINEMESSAGES_API UScriptStruct* StaticStruct<FTraceControlFile>()
{
	return FTraceControlFile::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTraceControlFile_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Start tracing to a file (on the receiver)\n */" },
		{ "ModuleRelativePath", "Public/TraceControlMessages.h" },
		{ "ToolTip", "Start tracing to a file (on the receiver)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_File_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/TraceControlMessages.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTruncateFile_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/TraceControlMessages.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_File;
	static void NewProp_bTruncateFile_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTruncateFile;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTraceControlFile>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTraceControlFile_Statics::NewProp_File = { "File", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTraceControlFile, File), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_File_MetaData), NewProp_File_MetaData) };
void Z_Construct_UScriptStruct_FTraceControlFile_Statics::NewProp_bTruncateFile_SetBit(void* Obj)
{
	((FTraceControlFile*)Obj)->bTruncateFile = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTraceControlFile_Statics::NewProp_bTruncateFile = { "bTruncateFile", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FTraceControlFile), &Z_Construct_UScriptStruct_FTraceControlFile_Statics::NewProp_bTruncateFile_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTruncateFile_MetaData), NewProp_bTruncateFile_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTraceControlFile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTraceControlFile_Statics::NewProp_File,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTraceControlFile_Statics::NewProp_bTruncateFile,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTraceControlFile_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTraceControlFile_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_EngineMessages,
	Z_Construct_UScriptStruct_FTraceControlStartCommon,
	&NewStructOps,
	"TraceControlFile",
	Z_Construct_UScriptStruct_FTraceControlFile_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTraceControlFile_Statics::PropPointers),
	sizeof(FTraceControlFile),
	alignof(FTraceControlFile),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTraceControlFile_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTraceControlFile_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTraceControlFile()
{
	if (!Z_Registration_Info_UScriptStruct_TraceControlFile.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TraceControlFile.InnerSingleton, Z_Construct_UScriptStruct_FTraceControlFile_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TraceControlFile.InnerSingleton;
}
// End ScriptStruct FTraceControlFile

// Begin ScriptStruct FTraceControlPause
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TraceControlPause;
class UScriptStruct* FTraceControlPause::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TraceControlPause.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TraceControlPause.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTraceControlPause, (UObject*)Z_Construct_UPackage__Script_EngineMessages(), TEXT("TraceControlPause"));
	}
	return Z_Registration_Info_UScriptStruct_TraceControlPause.OuterSingleton;
}
template<> ENGINEMESSAGES_API UScriptStruct* StaticStruct<FTraceControlPause>()
{
	return FTraceControlPause::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTraceControlPause_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Pause all tracing (i.e. mute all channels)\n */" },
		{ "ModuleRelativePath", "Public/TraceControlMessages.h" },
		{ "ToolTip", "Pause all tracing (i.e. mute all channels)" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTraceControlPause>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTraceControlPause_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_EngineMessages,
	nullptr,
	&NewStructOps,
	"TraceControlPause",
	nullptr,
	0,
	sizeof(FTraceControlPause),
	alignof(FTraceControlPause),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTraceControlPause_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTraceControlPause_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTraceControlPause()
{
	if (!Z_Registration_Info_UScriptStruct_TraceControlPause.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TraceControlPause.InnerSingleton, Z_Construct_UScriptStruct_FTraceControlPause_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TraceControlPause.InnerSingleton;
}
// End ScriptStruct FTraceControlPause

// Begin ScriptStruct FTraceControlResume
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TraceControlResume;
class UScriptStruct* FTraceControlResume::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TraceControlResume.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TraceControlResume.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTraceControlResume, (UObject*)Z_Construct_UPackage__Script_EngineMessages(), TEXT("TraceControlResume"));
	}
	return Z_Registration_Info_UScriptStruct_TraceControlResume.OuterSingleton;
}
template<> ENGINEMESSAGES_API UScriptStruct* StaticStruct<FTraceControlResume>()
{
	return FTraceControlResume::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTraceControlResume_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Resume all tracing (from pause)\n */" },
		{ "ModuleRelativePath", "Public/TraceControlMessages.h" },
		{ "ToolTip", "Resume all tracing (from pause)" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTraceControlResume>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTraceControlResume_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_EngineMessages,
	nullptr,
	&NewStructOps,
	"TraceControlResume",
	nullptr,
	0,
	sizeof(FTraceControlResume),
	alignof(FTraceControlResume),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTraceControlResume_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTraceControlResume_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTraceControlResume()
{
	if (!Z_Registration_Info_UScriptStruct_TraceControlResume.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TraceControlResume.InnerSingleton, Z_Construct_UScriptStruct_FTraceControlResume_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TraceControlResume.InnerSingleton;
}
// End ScriptStruct FTraceControlResume

// Begin ScriptStruct FTraceControlSnapshotSend
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TraceControlSnapshotSend;
class UScriptStruct* FTraceControlSnapshotSend::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TraceControlSnapshotSend.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TraceControlSnapshotSend.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTraceControlSnapshotSend, (UObject*)Z_Construct_UPackage__Script_EngineMessages(), TEXT("TraceControlSnapshotSend"));
	}
	return Z_Registration_Info_UScriptStruct_TraceControlSnapshotSend.OuterSingleton;
}
template<> ENGINEMESSAGES_API UScriptStruct* StaticStruct<FTraceControlSnapshotSend>()
{
	return FTraceControlSnapshotSend::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTraceControlSnapshotSend_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Trace a snapshot to the trace server.\n */" },
		{ "ModuleRelativePath", "Public/TraceControlMessages.h" },
		{ "ToolTip", "Trace a snapshot to the trace server." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Host_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/TraceControlMessages.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Host;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTraceControlSnapshotSend>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTraceControlSnapshotSend_Statics::NewProp_Host = { "Host", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTraceControlSnapshotSend, Host), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Host_MetaData), NewProp_Host_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTraceControlSnapshotSend_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTraceControlSnapshotSend_Statics::NewProp_Host,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTraceControlSnapshotSend_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTraceControlSnapshotSend_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_EngineMessages,
	nullptr,
	&NewStructOps,
	"TraceControlSnapshotSend",
	Z_Construct_UScriptStruct_FTraceControlSnapshotSend_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTraceControlSnapshotSend_Statics::PropPointers),
	sizeof(FTraceControlSnapshotSend),
	alignof(FTraceControlSnapshotSend),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTraceControlSnapshotSend_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTraceControlSnapshotSend_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTraceControlSnapshotSend()
{
	if (!Z_Registration_Info_UScriptStruct_TraceControlSnapshotSend.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TraceControlSnapshotSend.InnerSingleton, Z_Construct_UScriptStruct_FTraceControlSnapshotSend_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TraceControlSnapshotSend.InnerSingleton;
}
// End ScriptStruct FTraceControlSnapshotSend

// Begin ScriptStruct FTraceControlSnapshotFile
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TraceControlSnapshotFile;
class UScriptStruct* FTraceControlSnapshotFile::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TraceControlSnapshotFile.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TraceControlSnapshotFile.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTraceControlSnapshotFile, (UObject*)Z_Construct_UPackage__Script_EngineMessages(), TEXT("TraceControlSnapshotFile"));
	}
	return Z_Registration_Info_UScriptStruct_TraceControlSnapshotFile.OuterSingleton;
}
template<> ENGINEMESSAGES_API UScriptStruct* StaticStruct<FTraceControlSnapshotFile>()
{
	return FTraceControlSnapshotFile::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTraceControlSnapshotFile_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Trace a snapshot to a file.\n */" },
		{ "ModuleRelativePath", "Public/TraceControlMessages.h" },
		{ "ToolTip", "Trace a snapshot to a file." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_File_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/TraceControlMessages.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_File;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTraceControlSnapshotFile>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTraceControlSnapshotFile_Statics::NewProp_File = { "File", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTraceControlSnapshotFile, File), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_File_MetaData), NewProp_File_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTraceControlSnapshotFile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTraceControlSnapshotFile_Statics::NewProp_File,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTraceControlSnapshotFile_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTraceControlSnapshotFile_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_EngineMessages,
	nullptr,
	&NewStructOps,
	"TraceControlSnapshotFile",
	Z_Construct_UScriptStruct_FTraceControlSnapshotFile_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTraceControlSnapshotFile_Statics::PropPointers),
	sizeof(FTraceControlSnapshotFile),
	alignof(FTraceControlSnapshotFile),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTraceControlSnapshotFile_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTraceControlSnapshotFile_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTraceControlSnapshotFile()
{
	if (!Z_Registration_Info_UScriptStruct_TraceControlSnapshotFile.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TraceControlSnapshotFile.InnerSingleton, Z_Construct_UScriptStruct_FTraceControlSnapshotFile_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TraceControlSnapshotFile.InnerSingleton;
}
// End ScriptStruct FTraceControlSnapshotFile

// Begin ScriptStruct FTraceControlBookmark
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TraceControlBookmark;
class UScriptStruct* FTraceControlBookmark::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TraceControlBookmark.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TraceControlBookmark.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTraceControlBookmark, (UObject*)Z_Construct_UPackage__Script_EngineMessages(), TEXT("TraceControlBookmark"));
	}
	return Z_Registration_Info_UScriptStruct_TraceControlBookmark.OuterSingleton;
}
template<> ENGINEMESSAGES_API UScriptStruct* StaticStruct<FTraceControlBookmark>()
{
	return FTraceControlBookmark::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTraceControlBookmark_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Trace a bookmark with the given label.\n */" },
		{ "ModuleRelativePath", "Public/TraceControlMessages.h" },
		{ "ToolTip", "Trace a bookmark with the given label." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Label_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/TraceControlMessages.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Label;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTraceControlBookmark>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTraceControlBookmark_Statics::NewProp_Label = { "Label", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTraceControlBookmark, Label), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Label_MetaData), NewProp_Label_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTraceControlBookmark_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTraceControlBookmark_Statics::NewProp_Label,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTraceControlBookmark_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTraceControlBookmark_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_EngineMessages,
	nullptr,
	&NewStructOps,
	"TraceControlBookmark",
	Z_Construct_UScriptStruct_FTraceControlBookmark_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTraceControlBookmark_Statics::PropPointers),
	sizeof(FTraceControlBookmark),
	alignof(FTraceControlBookmark),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTraceControlBookmark_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTraceControlBookmark_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTraceControlBookmark()
{
	if (!Z_Registration_Info_UScriptStruct_TraceControlBookmark.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TraceControlBookmark.InnerSingleton, Z_Construct_UScriptStruct_FTraceControlBookmark_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TraceControlBookmark.InnerSingleton;
}
// End ScriptStruct FTraceControlBookmark

// Begin ScriptStruct FTraceControlScreenshot
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TraceControlScreenshot;
class UScriptStruct* FTraceControlScreenshot::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TraceControlScreenshot.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TraceControlScreenshot.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTraceControlScreenshot, (UObject*)Z_Construct_UPackage__Script_EngineMessages(), TEXT("TraceControlScreenshot"));
	}
	return Z_Registration_Info_UScriptStruct_TraceControlScreenshot.OuterSingleton;
}
template<> ENGINEMESSAGES_API UScriptStruct* StaticStruct<FTraceControlScreenshot>()
{
	return FTraceControlScreenshot::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTraceControlScreenshot_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Trace a screenshot with the given label.\n */" },
		{ "ModuleRelativePath", "Public/TraceControlMessages.h" },
		{ "ToolTip", "Trace a screenshot with the given label." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/TraceControlMessages.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowUI_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/TraceControlMessages.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static void NewProp_bShowUI_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowUI;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTraceControlScreenshot>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTraceControlScreenshot_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTraceControlScreenshot, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
void Z_Construct_UScriptStruct_FTraceControlScreenshot_Statics::NewProp_bShowUI_SetBit(void* Obj)
{
	((FTraceControlScreenshot*)Obj)->bShowUI = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTraceControlScreenshot_Statics::NewProp_bShowUI = { "bShowUI", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FTraceControlScreenshot), &Z_Construct_UScriptStruct_FTraceControlScreenshot_Statics::NewProp_bShowUI_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowUI_MetaData), NewProp_bShowUI_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTraceControlScreenshot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTraceControlScreenshot_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTraceControlScreenshot_Statics::NewProp_bShowUI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTraceControlScreenshot_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTraceControlScreenshot_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_EngineMessages,
	nullptr,
	&NewStructOps,
	"TraceControlScreenshot",
	Z_Construct_UScriptStruct_FTraceControlScreenshot_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTraceControlScreenshot_Statics::PropPointers),
	sizeof(FTraceControlScreenshot),
	alignof(FTraceControlScreenshot),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTraceControlScreenshot_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTraceControlScreenshot_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTraceControlScreenshot()
{
	if (!Z_Registration_Info_UScriptStruct_TraceControlScreenshot.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TraceControlScreenshot.InnerSingleton, Z_Construct_UScriptStruct_FTraceControlScreenshot_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TraceControlScreenshot.InnerSingleton;
}
// End ScriptStruct FTraceControlScreenshot

// Begin ScriptStruct FTraceControlSetStatNamedEvents
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TraceControlSetStatNamedEvents;
class UScriptStruct* FTraceControlSetStatNamedEvents::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TraceControlSetStatNamedEvents.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TraceControlSetStatNamedEvents.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTraceControlSetStatNamedEvents, (UObject*)Z_Construct_UPackage__Script_EngineMessages(), TEXT("TraceControlSetStatNamedEvents"));
	}
	return Z_Registration_Info_UScriptStruct_TraceControlSetStatNamedEvents.OuterSingleton;
}
template<> ENGINEMESSAGES_API UScriptStruct* StaticStruct<FTraceControlSetStatNamedEvents>()
{
	return FTraceControlSetStatNamedEvents::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTraceControlSetStatNamedEvents_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Set the StatNamedEvents flag.\n */" },
		{ "ModuleRelativePath", "Public/TraceControlMessages.h" },
		{ "ToolTip", "Set the StatNamedEvents flag." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/TraceControlMessages.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTraceControlSetStatNamedEvents>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FTraceControlSetStatNamedEvents_Statics::NewProp_bEnabled_SetBit(void* Obj)
{
	((FTraceControlSetStatNamedEvents*)Obj)->bEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTraceControlSetStatNamedEvents_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FTraceControlSetStatNamedEvents), &Z_Construct_UScriptStruct_FTraceControlSetStatNamedEvents_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnabled_MetaData), NewProp_bEnabled_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTraceControlSetStatNamedEvents_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTraceControlSetStatNamedEvents_Statics::NewProp_bEnabled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTraceControlSetStatNamedEvents_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTraceControlSetStatNamedEvents_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_EngineMessages,
	nullptr,
	&NewStructOps,
	"TraceControlSetStatNamedEvents",
	Z_Construct_UScriptStruct_FTraceControlSetStatNamedEvents_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTraceControlSetStatNamedEvents_Statics::PropPointers),
	sizeof(FTraceControlSetStatNamedEvents),
	alignof(FTraceControlSetStatNamedEvents),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTraceControlSetStatNamedEvents_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTraceControlSetStatNamedEvents_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTraceControlSetStatNamedEvents()
{
	if (!Z_Registration_Info_UScriptStruct_TraceControlSetStatNamedEvents.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TraceControlSetStatNamedEvents.InnerSingleton, Z_Construct_UScriptStruct_FTraceControlSetStatNamedEvents_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TraceControlSetStatNamedEvents.InnerSingleton;
}
// End ScriptStruct FTraceControlSetStatNamedEvents

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_EngineMessages_Public_TraceControlMessages_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FTraceControlStatusPing::StaticStruct, Z_Construct_UScriptStruct_FTraceControlStatusPing_Statics::NewStructOps, TEXT("TraceControlStatusPing"), &Z_Registration_Info_UScriptStruct_TraceControlStatusPing, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTraceControlStatusPing), 517234144U) },
		{ FTraceControlStatus::StaticStruct, Z_Construct_UScriptStruct_FTraceControlStatus_Statics::NewStructOps, TEXT("TraceControlStatus"), &Z_Registration_Info_UScriptStruct_TraceControlStatus, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTraceControlStatus), 2655401499U) },
		{ FTraceControlSettingsPing::StaticStruct, Z_Construct_UScriptStruct_FTraceControlSettingsPing_Statics::NewStructOps, TEXT("TraceControlSettingsPing"), &Z_Registration_Info_UScriptStruct_TraceControlSettingsPing, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTraceControlSettingsPing), 2560641232U) },
		{ FTraceChannelPreset::StaticStruct, Z_Construct_UScriptStruct_FTraceChannelPreset_Statics::NewStructOps, TEXT("TraceChannelPreset"), &Z_Registration_Info_UScriptStruct_TraceChannelPreset, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTraceChannelPreset), 3979556401U) },
		{ FTraceControlSettings::StaticStruct, Z_Construct_UScriptStruct_FTraceControlSettings_Statics::NewStructOps, TEXT("TraceControlSettings"), &Z_Registration_Info_UScriptStruct_TraceControlSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTraceControlSettings), 1779496228U) },
		{ FTraceControlChannelsPing::StaticStruct, Z_Construct_UScriptStruct_FTraceControlChannelsPing_Statics::NewStructOps, TEXT("TraceControlChannelsPing"), &Z_Registration_Info_UScriptStruct_TraceControlChannelsPing, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTraceControlChannelsPing), 3315368373U) },
		{ FTraceControlChannelsDesc::StaticStruct, Z_Construct_UScriptStruct_FTraceControlChannelsDesc_Statics::NewStructOps, TEXT("TraceControlChannelsDesc"), &Z_Registration_Info_UScriptStruct_TraceControlChannelsDesc, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTraceControlChannelsDesc), 389605877U) },
		{ FTraceControlChannelsStatus::StaticStruct, Z_Construct_UScriptStruct_FTraceControlChannelsStatus_Statics::NewStructOps, TEXT("TraceControlChannelsStatus"), &Z_Registration_Info_UScriptStruct_TraceControlChannelsStatus, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTraceControlChannelsStatus), 2549527157U) },
		{ FTraceControlChannelsSet::StaticStruct, Z_Construct_UScriptStruct_FTraceControlChannelsSet_Statics::NewStructOps, TEXT("TraceControlChannelsSet"), &Z_Registration_Info_UScriptStruct_TraceControlChannelsSet, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTraceControlChannelsSet), 3599437576U) },
		{ FTraceControlDiscoveryPing::StaticStruct, Z_Construct_UScriptStruct_FTraceControlDiscoveryPing_Statics::NewStructOps, TEXT("TraceControlDiscoveryPing"), &Z_Registration_Info_UScriptStruct_TraceControlDiscoveryPing, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTraceControlDiscoveryPing), 2265094887U) },
		{ FTraceControlDiscovery::StaticStruct, Z_Construct_UScriptStruct_FTraceControlDiscovery_Statics::NewStructOps, TEXT("TraceControlDiscovery"), &Z_Registration_Info_UScriptStruct_TraceControlDiscovery, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTraceControlDiscovery), 740992299U) },
		{ FTraceControlStop::StaticStruct, Z_Construct_UScriptStruct_FTraceControlStop_Statics::NewStructOps, TEXT("TraceControlStop"), &Z_Registration_Info_UScriptStruct_TraceControlStop, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTraceControlStop), 1270333935U) },
		{ FTraceControlStartCommon::StaticStruct, Z_Construct_UScriptStruct_FTraceControlStartCommon_Statics::NewStructOps, TEXT("TraceControlStartCommon"), &Z_Registration_Info_UScriptStruct_TraceControlStartCommon, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTraceControlStartCommon), 3562114284U) },
		{ FTraceControlSend::StaticStruct, Z_Construct_UScriptStruct_FTraceControlSend_Statics::NewStructOps, TEXT("TraceControlSend"), &Z_Registration_Info_UScriptStruct_TraceControlSend, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTraceControlSend), 2939544175U) },
		{ FTraceControlFile::StaticStruct, Z_Construct_UScriptStruct_FTraceControlFile_Statics::NewStructOps, TEXT("TraceControlFile"), &Z_Registration_Info_UScriptStruct_TraceControlFile, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTraceControlFile), 3122508253U) },
		{ FTraceControlPause::StaticStruct, Z_Construct_UScriptStruct_FTraceControlPause_Statics::NewStructOps, TEXT("TraceControlPause"), &Z_Registration_Info_UScriptStruct_TraceControlPause, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTraceControlPause), 1190412114U) },
		{ FTraceControlResume::StaticStruct, Z_Construct_UScriptStruct_FTraceControlResume_Statics::NewStructOps, TEXT("TraceControlResume"), &Z_Registration_Info_UScriptStruct_TraceControlResume, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTraceControlResume), 4210136250U) },
		{ FTraceControlSnapshotSend::StaticStruct, Z_Construct_UScriptStruct_FTraceControlSnapshotSend_Statics::NewStructOps, TEXT("TraceControlSnapshotSend"), &Z_Registration_Info_UScriptStruct_TraceControlSnapshotSend, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTraceControlSnapshotSend), 1517753571U) },
		{ FTraceControlSnapshotFile::StaticStruct, Z_Construct_UScriptStruct_FTraceControlSnapshotFile_Statics::NewStructOps, TEXT("TraceControlSnapshotFile"), &Z_Registration_Info_UScriptStruct_TraceControlSnapshotFile, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTraceControlSnapshotFile), 2345980771U) },
		{ FTraceControlBookmark::StaticStruct, Z_Construct_UScriptStruct_FTraceControlBookmark_Statics::NewStructOps, TEXT("TraceControlBookmark"), &Z_Registration_Info_UScriptStruct_TraceControlBookmark, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTraceControlBookmark), 3885386691U) },
		{ FTraceControlScreenshot::StaticStruct, Z_Construct_UScriptStruct_FTraceControlScreenshot_Statics::NewStructOps, TEXT("TraceControlScreenshot"), &Z_Registration_Info_UScriptStruct_TraceControlScreenshot, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTraceControlScreenshot), 101093083U) },
		{ FTraceControlSetStatNamedEvents::StaticStruct, Z_Construct_UScriptStruct_FTraceControlSetStatNamedEvents_Statics::NewStructOps, TEXT("TraceControlSetStatNamedEvents"), &Z_Registration_Info_UScriptStruct_TraceControlSetStatNamedEvents, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTraceControlSetStatNamedEvents), 743895619U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_EngineMessages_Public_TraceControlMessages_h_2731042784(TEXT("/Script/EngineMessages"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_EngineMessages_Public_TraceControlMessages_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_EngineMessages_Public_TraceControlMessages_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
