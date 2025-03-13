// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LiveLink/Public/LiveLinkMessageBusFinder.h"
#include "Runtime/Engine/Classes/Engine/LatentActionManager.h"
#include "Runtime/LiveLinkInterface/Public/ILiveLinkSource.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiveLinkMessageBusFinder() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLatentActionInfo();
LIVELINK_API UClass* Z_Construct_UClass_ULiveLinkMessageBusFinder();
LIVELINK_API UClass* Z_Construct_UClass_ULiveLinkMessageBusFinder_NoRegister();
LIVELINK_API UScriptStruct* Z_Construct_UScriptStruct_FProviderPollResult();
LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkSourceHandle();
UPackage* Z_Construct_UPackage__Script_LiveLink();
// End Cross Module References

// Begin ScriptStruct FProviderPollResult
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ProviderPollResult;
class UScriptStruct* FProviderPollResult::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ProviderPollResult.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ProviderPollResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FProviderPollResult, (UObject*)Z_Construct_UPackage__Script_LiveLink(), TEXT("ProviderPollResult"));
	}
	return Z_Registration_Info_UScriptStruct_ProviderPollResult.OuterSingleton;
}
template<> LIVELINK_API UScriptStruct* StaticStruct<FProviderPollResult>()
{
	return FProviderPollResult::StaticStruct();
}
struct Z_Construct_UScriptStruct_FProviderPollResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/LiveLinkMessageBusFinder.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "// The name of the provider\n" },
		{ "DisplayName", "Provider Name" },
		{ "ModuleRelativePath", "Public/LiveLinkMessageBusFinder.h" },
		{ "ToolTip", "The name of the provider" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MachineName_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "// The name of the machine the provider is running on\n" },
		{ "ModuleRelativePath", "Public/LiveLinkMessageBusFinder.h" },
		{ "ToolTip", "The name of the machine the provider is running on" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MachineTimeOffset_MetaData[] = {
		{ "Comment", "// Offset between sender's engine time and receiver's engine time\n" },
		{ "ModuleRelativePath", "Public/LiveLinkMessageBusFinder.h" },
		{ "ToolTip", "Offset between sender's engine time and receiver's engine time" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsValidProvider_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "// Whether the provider is valid (compatible with the current version of LiveLink)\n" },
		{ "ModuleRelativePath", "Public/LiveLinkMessageBusFinder.h" },
		{ "ToolTip", "Whether the provider is valid (compatible with the current version of LiveLink)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FStrPropertyParams NewProp_MachineName;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_MachineTimeOffset;
	static void NewProp_bIsValidProvider_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsValidProvider;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProviderPollResult>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FProviderPollResult_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProviderPollResult, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FProviderPollResult_Statics::NewProp_MachineName = { "MachineName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProviderPollResult, MachineName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MachineName_MetaData), NewProp_MachineName_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FProviderPollResult_Statics::NewProp_MachineTimeOffset = { "MachineTimeOffset", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProviderPollResult, MachineTimeOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MachineTimeOffset_MetaData), NewProp_MachineTimeOffset_MetaData) };
void Z_Construct_UScriptStruct_FProviderPollResult_Statics::NewProp_bIsValidProvider_SetBit(void* Obj)
{
	((FProviderPollResult*)Obj)->bIsValidProvider = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FProviderPollResult_Statics::NewProp_bIsValidProvider = { "bIsValidProvider", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FProviderPollResult), &Z_Construct_UScriptStruct_FProviderPollResult_Statics::NewProp_bIsValidProvider_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsValidProvider_MetaData), NewProp_bIsValidProvider_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProviderPollResult_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProviderPollResult_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProviderPollResult_Statics::NewProp_MachineName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProviderPollResult_Statics::NewProp_MachineTimeOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProviderPollResult_Statics::NewProp_bIsValidProvider,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProviderPollResult_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProviderPollResult_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_LiveLink,
	nullptr,
	&NewStructOps,
	"ProviderPollResult",
	Z_Construct_UScriptStruct_FProviderPollResult_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProviderPollResult_Statics::PropPointers),
	sizeof(FProviderPollResult),
	alignof(FProviderPollResult),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProviderPollResult_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FProviderPollResult_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FProviderPollResult()
{
	if (!Z_Registration_Info_UScriptStruct_ProviderPollResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ProviderPollResult.InnerSingleton, Z_Construct_UScriptStruct_FProviderPollResult_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ProviderPollResult.InnerSingleton;
}
// End ScriptStruct FProviderPollResult

// Begin Class ULiveLinkMessageBusFinder Function ConnectToProvider
struct Z_Construct_UFunction_ULiveLinkMessageBusFinder_ConnectToProvider_Statics
{
	struct LiveLinkMessageBusFinder_eventConnectToProvider_Parms
	{
		FProviderPollResult Provider;
		FLiveLinkSourceHandle SourceHandle;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "/*\n\x09* Connects to a given Message Bus Provider and returns a handle to the created LiveLink Source\n\x09*\n\x09* @param Provider The provider to connect to.\n\x09* @param SourceHandle A handle to the created LiveLink Source, lets you query information about the created source and request a shutdown\n\x09*/" },
		{ "ModuleRelativePath", "Public/LiveLinkMessageBusFinder.h" },
		{ "ToolTip", "* Connects to a given Message Bus Provider and returns a handle to the created LiveLink Source\n*\n* @param Provider The provider to connect to.\n* @param SourceHandle A handle to the created LiveLink Source, lets you query information about the created source and request a shutdown" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Provider;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SourceHandle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULiveLinkMessageBusFinder_ConnectToProvider_Statics::NewProp_Provider = { "Provider", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LiveLinkMessageBusFinder_eventConnectToProvider_Parms, Provider), Z_Construct_UScriptStruct_FProviderPollResult, METADATA_PARAMS(0, nullptr) }; // 1983228659
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULiveLinkMessageBusFinder_ConnectToProvider_Statics::NewProp_SourceHandle = { "SourceHandle", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LiveLinkMessageBusFinder_eventConnectToProvider_Parms, SourceHandle), Z_Construct_UScriptStruct_FLiveLinkSourceHandle, METADATA_PARAMS(0, nullptr) }; // 3639505588
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULiveLinkMessageBusFinder_ConnectToProvider_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkMessageBusFinder_ConnectToProvider_Statics::NewProp_Provider,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkMessageBusFinder_ConnectToProvider_Statics::NewProp_SourceHandle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkMessageBusFinder_ConnectToProvider_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULiveLinkMessageBusFinder_ConnectToProvider_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULiveLinkMessageBusFinder, nullptr, "ConnectToProvider", nullptr, nullptr, Z_Construct_UFunction_ULiveLinkMessageBusFinder_ConnectToProvider_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkMessageBusFinder_ConnectToProvider_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULiveLinkMessageBusFinder_ConnectToProvider_Statics::LiveLinkMessageBusFinder_eventConnectToProvider_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkMessageBusFinder_ConnectToProvider_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULiveLinkMessageBusFinder_ConnectToProvider_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULiveLinkMessageBusFinder_ConnectToProvider_Statics::LiveLinkMessageBusFinder_eventConnectToProvider_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULiveLinkMessageBusFinder_ConnectToProvider()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULiveLinkMessageBusFinder_ConnectToProvider_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULiveLinkMessageBusFinder::execConnectToProvider)
{
	P_GET_STRUCT_REF(FProviderPollResult,Z_Param_Out_Provider);
	P_GET_STRUCT_REF(FLiveLinkSourceHandle,Z_Param_Out_SourceHandle);
	P_FINISH;
	P_NATIVE_BEGIN;
	ULiveLinkMessageBusFinder::ConnectToProvider(Z_Param_Out_Provider,Z_Param_Out_SourceHandle);
	P_NATIVE_END;
}
// End Class ULiveLinkMessageBusFinder Function ConnectToProvider

// Begin Class ULiveLinkMessageBusFinder Function ConstructMessageBusFinder
struct Z_Construct_UFunction_ULiveLinkMessageBusFinder_ConstructMessageBusFinder_Statics
{
	struct LiveLinkMessageBusFinder_eventConstructMessageBusFinder_Parms
	{
		ULiveLinkMessageBusFinder* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "/*\n\x09* Constructs a new Message Bus Finder which enables you to detect available Message Bus Providers on the network\n\x09*\n\x09* @return The newly constructed Message Bus Finder\n\x09*/" },
		{ "ModuleRelativePath", "Public/LiveLinkMessageBusFinder.h" },
		{ "ToolTip", "* Constructs a new Message Bus Finder which enables you to detect available Message Bus Providers on the network\n*\n* @return The newly constructed Message Bus Finder" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULiveLinkMessageBusFinder_ConstructMessageBusFinder_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LiveLinkMessageBusFinder_eventConstructMessageBusFinder_Parms, ReturnValue), Z_Construct_UClass_ULiveLinkMessageBusFinder_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULiveLinkMessageBusFinder_ConstructMessageBusFinder_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkMessageBusFinder_ConstructMessageBusFinder_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkMessageBusFinder_ConstructMessageBusFinder_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULiveLinkMessageBusFinder_ConstructMessageBusFinder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULiveLinkMessageBusFinder, nullptr, "ConstructMessageBusFinder", nullptr, nullptr, Z_Construct_UFunction_ULiveLinkMessageBusFinder_ConstructMessageBusFinder_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkMessageBusFinder_ConstructMessageBusFinder_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULiveLinkMessageBusFinder_ConstructMessageBusFinder_Statics::LiveLinkMessageBusFinder_eventConstructMessageBusFinder_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkMessageBusFinder_ConstructMessageBusFinder_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULiveLinkMessageBusFinder_ConstructMessageBusFinder_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULiveLinkMessageBusFinder_ConstructMessageBusFinder_Statics::LiveLinkMessageBusFinder_eventConstructMessageBusFinder_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULiveLinkMessageBusFinder_ConstructMessageBusFinder()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULiveLinkMessageBusFinder_ConstructMessageBusFinder_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULiveLinkMessageBusFinder::execConstructMessageBusFinder)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ULiveLinkMessageBusFinder**)Z_Param__Result=ULiveLinkMessageBusFinder::ConstructMessageBusFinder();
	P_NATIVE_END;
}
// End Class ULiveLinkMessageBusFinder Function ConstructMessageBusFinder

// Begin Class ULiveLinkMessageBusFinder Function GetAvailableProviders
struct Z_Construct_UFunction_ULiveLinkMessageBusFinder_GetAvailableProviders_Statics
{
	struct LiveLinkMessageBusFinder_eventGetAvailableProviders_Parms
	{
		UObject* WorldContextObject;
		FLatentActionInfo LatentInfo;
		float Duration;
		TArray<FProviderPollResult> AvailableProviders;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "/*\n\x09* Broadcasts a message to the network and returns a list of all providers who replied within a set amount of time.\n\x09*\n\x09* @param AvailableProviders Will contain the collection of found Message Bus Providers.\n\x09* @param Duration The amount of time to wait for replies in seconds\n\x09*/" },
		{ "Duration", "0.2" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/LiveLinkMessageBusFinder.h" },
		{ "ToolTip", "* Broadcasts a message to the network and returns a list of all providers who replied within a set amount of time.\n*\n* @param AvailableProviders Will contain the collection of found Message Bus Providers.\n* @param Duration The amount of time to wait for replies in seconds" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AvailableProviders_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AvailableProviders;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULiveLinkMessageBusFinder_GetAvailableProviders_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LiveLinkMessageBusFinder_eventGetAvailableProviders_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULiveLinkMessageBusFinder_GetAvailableProviders_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LiveLinkMessageBusFinder_eventGetAvailableProviders_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(0, nullptr) }; // 1503398820
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULiveLinkMessageBusFinder_GetAvailableProviders_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LiveLinkMessageBusFinder_eventGetAvailableProviders_Parms, Duration), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULiveLinkMessageBusFinder_GetAvailableProviders_Statics::NewProp_AvailableProviders_Inner = { "AvailableProviders", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FProviderPollResult, METADATA_PARAMS(0, nullptr) }; // 1983228659
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULiveLinkMessageBusFinder_GetAvailableProviders_Statics::NewProp_AvailableProviders = { "AvailableProviders", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LiveLinkMessageBusFinder_eventGetAvailableProviders_Parms, AvailableProviders), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 1983228659
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULiveLinkMessageBusFinder_GetAvailableProviders_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkMessageBusFinder_GetAvailableProviders_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkMessageBusFinder_GetAvailableProviders_Statics::NewProp_LatentInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkMessageBusFinder_GetAvailableProviders_Statics::NewProp_Duration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkMessageBusFinder_GetAvailableProviders_Statics::NewProp_AvailableProviders_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkMessageBusFinder_GetAvailableProviders_Statics::NewProp_AvailableProviders,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkMessageBusFinder_GetAvailableProviders_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULiveLinkMessageBusFinder_GetAvailableProviders_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULiveLinkMessageBusFinder, nullptr, "GetAvailableProviders", nullptr, nullptr, Z_Construct_UFunction_ULiveLinkMessageBusFinder_GetAvailableProviders_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkMessageBusFinder_GetAvailableProviders_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULiveLinkMessageBusFinder_GetAvailableProviders_Statics::LiveLinkMessageBusFinder_eventGetAvailableProviders_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkMessageBusFinder_GetAvailableProviders_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULiveLinkMessageBusFinder_GetAvailableProviders_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULiveLinkMessageBusFinder_GetAvailableProviders_Statics::LiveLinkMessageBusFinder_eventGetAvailableProviders_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULiveLinkMessageBusFinder_GetAvailableProviders()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULiveLinkMessageBusFinder_GetAvailableProviders_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULiveLinkMessageBusFinder::execGetAvailableProviders)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
	P_GET_TARRAY_REF(FProviderPollResult,Z_Param_Out_AvailableProviders);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetAvailableProviders(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_Duration,Z_Param_Out_AvailableProviders);
	P_NATIVE_END;
}
// End Class ULiveLinkMessageBusFinder Function GetAvailableProviders

// Begin Class ULiveLinkMessageBusFinder
void ULiveLinkMessageBusFinder::StaticRegisterNativesULiveLinkMessageBusFinder()
{
	UClass* Class = ULiveLinkMessageBusFinder::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ConnectToProvider", &ULiveLinkMessageBusFinder::execConnectToProvider },
		{ "ConstructMessageBusFinder", &ULiveLinkMessageBusFinder::execConstructMessageBusFinder },
		{ "GetAvailableProviders", &ULiveLinkMessageBusFinder::execGetAvailableProviders },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULiveLinkMessageBusFinder);
UClass* Z_Construct_UClass_ULiveLinkMessageBusFinder_NoRegister()
{
	return ULiveLinkMessageBusFinder::StaticClass();
}
struct Z_Construct_UClass_ULiveLinkMessageBusFinder_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Asset for finding available Message Bus Sources.\n" },
		{ "IncludePath", "LiveLinkMessageBusFinder.h" },
		{ "ModuleRelativePath", "Public/LiveLinkMessageBusFinder.h" },
		{ "ToolTip", "Asset for finding available Message Bus Sources." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ULiveLinkMessageBusFinder_ConnectToProvider, "ConnectToProvider" }, // 32897108
		{ &Z_Construct_UFunction_ULiveLinkMessageBusFinder_ConstructMessageBusFinder, "ConstructMessageBusFinder" }, // 1146324554
		{ &Z_Construct_UFunction_ULiveLinkMessageBusFinder_GetAvailableProviders, "GetAvailableProviders" }, // 3817496138
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULiveLinkMessageBusFinder>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ULiveLinkMessageBusFinder_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_LiveLink,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkMessageBusFinder_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULiveLinkMessageBusFinder_Statics::ClassParams = {
	&ULiveLinkMessageBusFinder::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkMessageBusFinder_Statics::Class_MetaDataParams), Z_Construct_UClass_ULiveLinkMessageBusFinder_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULiveLinkMessageBusFinder()
{
	if (!Z_Registration_Info_UClass_ULiveLinkMessageBusFinder.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULiveLinkMessageBusFinder.OuterSingleton, Z_Construct_UClass_ULiveLinkMessageBusFinder_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULiveLinkMessageBusFinder.OuterSingleton;
}
template<> LIVELINK_API UClass* StaticClass<ULiveLinkMessageBusFinder>()
{
	return ULiveLinkMessageBusFinder::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULiveLinkMessageBusFinder);
ULiveLinkMessageBusFinder::~ULiveLinkMessageBusFinder() {}
// End Class ULiveLinkMessageBusFinder

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkMessageBusFinder_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FProviderPollResult::StaticStruct, Z_Construct_UScriptStruct_FProviderPollResult_Statics::NewStructOps, TEXT("ProviderPollResult"), &Z_Registration_Info_UScriptStruct_ProviderPollResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FProviderPollResult), 1983228659U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULiveLinkMessageBusFinder, ULiveLinkMessageBusFinder::StaticClass, TEXT("ULiveLinkMessageBusFinder"), &Z_Registration_Info_UClass_ULiveLinkMessageBusFinder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULiveLinkMessageBusFinder), 2439289855U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkMessageBusFinder_h_3300457499(TEXT("/Script/LiveLink"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkMessageBusFinder_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkMessageBusFinder_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkMessageBusFinder_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkMessageBusFinder_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
