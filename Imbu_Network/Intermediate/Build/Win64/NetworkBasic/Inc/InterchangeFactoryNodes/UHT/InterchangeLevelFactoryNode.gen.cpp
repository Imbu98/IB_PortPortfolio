// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryNodes/Public/InterchangeLevelFactoryNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterchangeLevelFactoryNode() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangeFactoryBaseNode();
INTERCHANGEFACTORYNODES_API UClass* Z_Construct_UClass_UInterchangeLevelFactoryNode();
INTERCHANGEFACTORYNODES_API UClass* Z_Construct_UClass_UInterchangeLevelFactoryNode_NoRegister();
UPackage* Z_Construct_UPackage__Script_InterchangeFactoryNodes();
// End Cross Module References

// Begin Class UInterchangeLevelFactoryNode Function AddCustomActorFactoryNodeUid
struct Z_Construct_UFunction_UInterchangeLevelFactoryNode_AddCustomActorFactoryNodeUid_Statics
{
	struct InterchangeLevelFactoryNode_eventAddCustomActorFactoryNodeUid_Parms
	{
		FString ActorFactoryNodeUid;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | LevelFactory" },
		{ "Comment", "/**\n\x09 * Add one actor factory node unique id to this object.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeLevelFactoryNode.h" },
		{ "ToolTip", "Add one actor factory node unique id to this object." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorFactoryNodeUid_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ActorFactoryNodeUid;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeLevelFactoryNode_AddCustomActorFactoryNodeUid_Statics::NewProp_ActorFactoryNodeUid = { "ActorFactoryNodeUid", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeLevelFactoryNode_eventAddCustomActorFactoryNodeUid_Parms, ActorFactoryNodeUid), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorFactoryNodeUid_MetaData), NewProp_ActorFactoryNodeUid_MetaData) };
void Z_Construct_UFunction_UInterchangeLevelFactoryNode_AddCustomActorFactoryNodeUid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeLevelFactoryNode_eventAddCustomActorFactoryNodeUid_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeLevelFactoryNode_AddCustomActorFactoryNodeUid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeLevelFactoryNode_eventAddCustomActorFactoryNodeUid_Parms), &Z_Construct_UFunction_UInterchangeLevelFactoryNode_AddCustomActorFactoryNodeUid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeLevelFactoryNode_AddCustomActorFactoryNodeUid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeLevelFactoryNode_AddCustomActorFactoryNodeUid_Statics::NewProp_ActorFactoryNodeUid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeLevelFactoryNode_AddCustomActorFactoryNodeUid_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeLevelFactoryNode_AddCustomActorFactoryNodeUid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeLevelFactoryNode_AddCustomActorFactoryNodeUid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeLevelFactoryNode, nullptr, "AddCustomActorFactoryNodeUid", nullptr, nullptr, Z_Construct_UFunction_UInterchangeLevelFactoryNode_AddCustomActorFactoryNodeUid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeLevelFactoryNode_AddCustomActorFactoryNodeUid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeLevelFactoryNode_AddCustomActorFactoryNodeUid_Statics::InterchangeLevelFactoryNode_eventAddCustomActorFactoryNodeUid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeLevelFactoryNode_AddCustomActorFactoryNodeUid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeLevelFactoryNode_AddCustomActorFactoryNodeUid_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeLevelFactoryNode_AddCustomActorFactoryNodeUid_Statics::InterchangeLevelFactoryNode_eventAddCustomActorFactoryNodeUid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeLevelFactoryNode_AddCustomActorFactoryNodeUid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeLevelFactoryNode_AddCustomActorFactoryNodeUid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeLevelFactoryNode::execAddCustomActorFactoryNodeUid)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_ActorFactoryNodeUid);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->AddCustomActorFactoryNodeUid(Z_Param_ActorFactoryNodeUid);
	P_NATIVE_END;
}
// End Class UInterchangeLevelFactoryNode Function AddCustomActorFactoryNodeUid

// Begin Class UInterchangeLevelFactoryNode Function GetCustomActorFactoryNodeUid
struct Z_Construct_UFunction_UInterchangeLevelFactoryNode_GetCustomActorFactoryNodeUid_Statics
{
	struct InterchangeLevelFactoryNode_eventGetCustomActorFactoryNodeUid_Parms
	{
		int32 Index;
		FString OutActorFactoryNodeUid;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | LevelFactory" },
		{ "Comment", "/**\n\x09 * This function allow to retrieve one actor factory node unique id for this object.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeLevelFactoryNode.h" },
		{ "ToolTip", "This function allow to retrieve one actor factory node unique id for this object." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutActorFactoryNodeUid;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInterchangeLevelFactoryNode_GetCustomActorFactoryNodeUid_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeLevelFactoryNode_eventGetCustomActorFactoryNodeUid_Parms, Index), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Index_MetaData), NewProp_Index_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeLevelFactoryNode_GetCustomActorFactoryNodeUid_Statics::NewProp_OutActorFactoryNodeUid = { "OutActorFactoryNodeUid", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeLevelFactoryNode_eventGetCustomActorFactoryNodeUid_Parms, OutActorFactoryNodeUid), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeLevelFactoryNode_GetCustomActorFactoryNodeUid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeLevelFactoryNode_GetCustomActorFactoryNodeUid_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeLevelFactoryNode_GetCustomActorFactoryNodeUid_Statics::NewProp_OutActorFactoryNodeUid,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeLevelFactoryNode_GetCustomActorFactoryNodeUid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeLevelFactoryNode_GetCustomActorFactoryNodeUid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeLevelFactoryNode, nullptr, "GetCustomActorFactoryNodeUid", nullptr, nullptr, Z_Construct_UFunction_UInterchangeLevelFactoryNode_GetCustomActorFactoryNodeUid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeLevelFactoryNode_GetCustomActorFactoryNodeUid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeLevelFactoryNode_GetCustomActorFactoryNodeUid_Statics::InterchangeLevelFactoryNode_eventGetCustomActorFactoryNodeUid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeLevelFactoryNode_GetCustomActorFactoryNodeUid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeLevelFactoryNode_GetCustomActorFactoryNodeUid_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeLevelFactoryNode_GetCustomActorFactoryNodeUid_Statics::InterchangeLevelFactoryNode_eventGetCustomActorFactoryNodeUid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeLevelFactoryNode_GetCustomActorFactoryNodeUid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeLevelFactoryNode_GetCustomActorFactoryNodeUid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeLevelFactoryNode::execGetCustomActorFactoryNodeUid)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutActorFactoryNodeUid);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetCustomActorFactoryNodeUid(Z_Param_Index,Z_Param_Out_OutActorFactoryNodeUid);
	P_NATIVE_END;
}
// End Class UInterchangeLevelFactoryNode Function GetCustomActorFactoryNodeUid

// Begin Class UInterchangeLevelFactoryNode Function GetCustomActorFactoryNodeUidCount
struct Z_Construct_UFunction_UInterchangeLevelFactoryNode_GetCustomActorFactoryNodeUidCount_Statics
{
	struct InterchangeLevelFactoryNode_eventGetCustomActorFactoryNodeUidCount_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | LevelFactory" },
		{ "Comment", "/**\n\x09 * This function allow to retrieve the number of track dependencies for this object.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeLevelFactoryNode.h" },
		{ "ToolTip", "This function allow to retrieve the number of track dependencies for this object." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInterchangeLevelFactoryNode_GetCustomActorFactoryNodeUidCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeLevelFactoryNode_eventGetCustomActorFactoryNodeUidCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeLevelFactoryNode_GetCustomActorFactoryNodeUidCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeLevelFactoryNode_GetCustomActorFactoryNodeUidCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeLevelFactoryNode_GetCustomActorFactoryNodeUidCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeLevelFactoryNode_GetCustomActorFactoryNodeUidCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeLevelFactoryNode, nullptr, "GetCustomActorFactoryNodeUidCount", nullptr, nullptr, Z_Construct_UFunction_UInterchangeLevelFactoryNode_GetCustomActorFactoryNodeUidCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeLevelFactoryNode_GetCustomActorFactoryNodeUidCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeLevelFactoryNode_GetCustomActorFactoryNodeUidCount_Statics::InterchangeLevelFactoryNode_eventGetCustomActorFactoryNodeUidCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeLevelFactoryNode_GetCustomActorFactoryNodeUidCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeLevelFactoryNode_GetCustomActorFactoryNodeUidCount_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeLevelFactoryNode_GetCustomActorFactoryNodeUidCount_Statics::InterchangeLevelFactoryNode_eventGetCustomActorFactoryNodeUidCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeLevelFactoryNode_GetCustomActorFactoryNodeUidCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeLevelFactoryNode_GetCustomActorFactoryNodeUidCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeLevelFactoryNode::execGetCustomActorFactoryNodeUidCount)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetCustomActorFactoryNodeUidCount();
	P_NATIVE_END;
}
// End Class UInterchangeLevelFactoryNode Function GetCustomActorFactoryNodeUidCount

// Begin Class UInterchangeLevelFactoryNode Function GetCustomActorFactoryNodeUids
struct Z_Construct_UFunction_UInterchangeLevelFactoryNode_GetCustomActorFactoryNodeUids_Statics
{
	struct InterchangeLevelFactoryNode_eventGetCustomActorFactoryNodeUids_Parms
	{
		TArray<FString> OutActorFactoryNodeUids;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | LevelFactory" },
		{ "Comment", "/**\n\x09 * This function allow to retrieve all actor factory node unique id for this object.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeLevelFactoryNode.h" },
		{ "ToolTip", "This function allow to retrieve all actor factory node unique id for this object." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutActorFactoryNodeUids_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutActorFactoryNodeUids;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeLevelFactoryNode_GetCustomActorFactoryNodeUids_Statics::NewProp_OutActorFactoryNodeUids_Inner = { "OutActorFactoryNodeUids", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInterchangeLevelFactoryNode_GetCustomActorFactoryNodeUids_Statics::NewProp_OutActorFactoryNodeUids = { "OutActorFactoryNodeUids", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeLevelFactoryNode_eventGetCustomActorFactoryNodeUids_Parms, OutActorFactoryNodeUids), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeLevelFactoryNode_GetCustomActorFactoryNodeUids_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeLevelFactoryNode_GetCustomActorFactoryNodeUids_Statics::NewProp_OutActorFactoryNodeUids_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeLevelFactoryNode_GetCustomActorFactoryNodeUids_Statics::NewProp_OutActorFactoryNodeUids,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeLevelFactoryNode_GetCustomActorFactoryNodeUids_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeLevelFactoryNode_GetCustomActorFactoryNodeUids_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeLevelFactoryNode, nullptr, "GetCustomActorFactoryNodeUids", nullptr, nullptr, Z_Construct_UFunction_UInterchangeLevelFactoryNode_GetCustomActorFactoryNodeUids_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeLevelFactoryNode_GetCustomActorFactoryNodeUids_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeLevelFactoryNode_GetCustomActorFactoryNodeUids_Statics::InterchangeLevelFactoryNode_eventGetCustomActorFactoryNodeUids_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeLevelFactoryNode_GetCustomActorFactoryNodeUids_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeLevelFactoryNode_GetCustomActorFactoryNodeUids_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeLevelFactoryNode_GetCustomActorFactoryNodeUids_Statics::InterchangeLevelFactoryNode_eventGetCustomActorFactoryNodeUids_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeLevelFactoryNode_GetCustomActorFactoryNodeUids()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeLevelFactoryNode_GetCustomActorFactoryNodeUids_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeLevelFactoryNode::execGetCustomActorFactoryNodeUids)
{
	P_GET_TARRAY_REF(FString,Z_Param_Out_OutActorFactoryNodeUids);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetCustomActorFactoryNodeUids(Z_Param_Out_OutActorFactoryNodeUids);
	P_NATIVE_END;
}
// End Class UInterchangeLevelFactoryNode Function GetCustomActorFactoryNodeUids

// Begin Class UInterchangeLevelFactoryNode Function GetCustomCreateWorldPartitionLevel
struct Z_Construct_UFunction_UInterchangeLevelFactoryNode_GetCustomCreateWorldPartitionLevel_Statics
{
	struct InterchangeLevelFactoryNode_eventGetCustomCreateWorldPartitionLevel_Parms
	{
		bool AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | LevelFactory" },
		{ "Comment", "/**\n\x09 * If true, created world partition level.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeLevelFactoryNode.h" },
		{ "ToolTip", "If true, created world partition level." },
	};
#endif // WITH_METADATA
	static void NewProp_AttributeValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UInterchangeLevelFactoryNode_GetCustomCreateWorldPartitionLevel_Statics::NewProp_AttributeValue_SetBit(void* Obj)
{
	((InterchangeLevelFactoryNode_eventGetCustomCreateWorldPartitionLevel_Parms*)Obj)->AttributeValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeLevelFactoryNode_GetCustomCreateWorldPartitionLevel_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeLevelFactoryNode_eventGetCustomCreateWorldPartitionLevel_Parms), &Z_Construct_UFunction_UInterchangeLevelFactoryNode_GetCustomCreateWorldPartitionLevel_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeLevelFactoryNode_GetCustomCreateWorldPartitionLevel_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeLevelFactoryNode_eventGetCustomCreateWorldPartitionLevel_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeLevelFactoryNode_GetCustomCreateWorldPartitionLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeLevelFactoryNode_eventGetCustomCreateWorldPartitionLevel_Parms), &Z_Construct_UFunction_UInterchangeLevelFactoryNode_GetCustomCreateWorldPartitionLevel_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeLevelFactoryNode_GetCustomCreateWorldPartitionLevel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeLevelFactoryNode_GetCustomCreateWorldPartitionLevel_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeLevelFactoryNode_GetCustomCreateWorldPartitionLevel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeLevelFactoryNode_GetCustomCreateWorldPartitionLevel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeLevelFactoryNode_GetCustomCreateWorldPartitionLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeLevelFactoryNode, nullptr, "GetCustomCreateWorldPartitionLevel", nullptr, nullptr, Z_Construct_UFunction_UInterchangeLevelFactoryNode_GetCustomCreateWorldPartitionLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeLevelFactoryNode_GetCustomCreateWorldPartitionLevel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeLevelFactoryNode_GetCustomCreateWorldPartitionLevel_Statics::InterchangeLevelFactoryNode_eventGetCustomCreateWorldPartitionLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeLevelFactoryNode_GetCustomCreateWorldPartitionLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeLevelFactoryNode_GetCustomCreateWorldPartitionLevel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeLevelFactoryNode_GetCustomCreateWorldPartitionLevel_Statics::InterchangeLevelFactoryNode_eventGetCustomCreateWorldPartitionLevel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeLevelFactoryNode_GetCustomCreateWorldPartitionLevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeLevelFactoryNode_GetCustomCreateWorldPartitionLevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeLevelFactoryNode::execGetCustomCreateWorldPartitionLevel)
{
	P_GET_UBOOL_REF(Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCustomCreateWorldPartitionLevel(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeLevelFactoryNode Function GetCustomCreateWorldPartitionLevel

// Begin Class UInterchangeLevelFactoryNode Function GetCustomSceneImportAssetFactoryNodeUid
struct Z_Construct_UFunction_UInterchangeLevelFactoryNode_GetCustomSceneImportAssetFactoryNodeUid_Statics
{
	struct InterchangeLevelFactoryNode_eventGetCustomSceneImportAssetFactoryNodeUid_Parms
	{
		FString AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | LevelFactory" },
		{ "Comment", "/**\n\x09 * Get the actor factory node unique id that hold the re-import data.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeLevelFactoryNode.h" },
		{ "ToolTip", "Get the actor factory node unique id that hold the re-import data." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeLevelFactoryNode_GetCustomSceneImportAssetFactoryNodeUid_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeLevelFactoryNode_eventGetCustomSceneImportAssetFactoryNodeUid_Parms, AttributeValue), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeLevelFactoryNode_GetCustomSceneImportAssetFactoryNodeUid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeLevelFactoryNode_eventGetCustomSceneImportAssetFactoryNodeUid_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeLevelFactoryNode_GetCustomSceneImportAssetFactoryNodeUid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeLevelFactoryNode_eventGetCustomSceneImportAssetFactoryNodeUid_Parms), &Z_Construct_UFunction_UInterchangeLevelFactoryNode_GetCustomSceneImportAssetFactoryNodeUid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeLevelFactoryNode_GetCustomSceneImportAssetFactoryNodeUid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeLevelFactoryNode_GetCustomSceneImportAssetFactoryNodeUid_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeLevelFactoryNode_GetCustomSceneImportAssetFactoryNodeUid_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeLevelFactoryNode_GetCustomSceneImportAssetFactoryNodeUid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeLevelFactoryNode_GetCustomSceneImportAssetFactoryNodeUid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeLevelFactoryNode, nullptr, "GetCustomSceneImportAssetFactoryNodeUid", nullptr, nullptr, Z_Construct_UFunction_UInterchangeLevelFactoryNode_GetCustomSceneImportAssetFactoryNodeUid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeLevelFactoryNode_GetCustomSceneImportAssetFactoryNodeUid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeLevelFactoryNode_GetCustomSceneImportAssetFactoryNodeUid_Statics::InterchangeLevelFactoryNode_eventGetCustomSceneImportAssetFactoryNodeUid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeLevelFactoryNode_GetCustomSceneImportAssetFactoryNodeUid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeLevelFactoryNode_GetCustomSceneImportAssetFactoryNodeUid_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeLevelFactoryNode_GetCustomSceneImportAssetFactoryNodeUid_Statics::InterchangeLevelFactoryNode_eventGetCustomSceneImportAssetFactoryNodeUid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeLevelFactoryNode_GetCustomSceneImportAssetFactoryNodeUid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeLevelFactoryNode_GetCustomSceneImportAssetFactoryNodeUid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeLevelFactoryNode::execGetCustomSceneImportAssetFactoryNodeUid)
{
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCustomSceneImportAssetFactoryNodeUid(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeLevelFactoryNode Function GetCustomSceneImportAssetFactoryNodeUid

// Begin Class UInterchangeLevelFactoryNode Function GetCustomShouldCreateLevel
struct Z_Construct_UFunction_UInterchangeLevelFactoryNode_GetCustomShouldCreateLevel_Statics
{
	struct InterchangeLevelFactoryNode_eventGetCustomShouldCreateLevel_Parms
	{
		bool AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | LevelFactory" },
		{ "Comment", "/**\n\x09 * Get actors bounding box.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeLevelFactoryNode.h" },
		{ "ToolTip", "Get actors bounding box." },
	};
#endif // WITH_METADATA
	static void NewProp_AttributeValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UInterchangeLevelFactoryNode_GetCustomShouldCreateLevel_Statics::NewProp_AttributeValue_SetBit(void* Obj)
{
	((InterchangeLevelFactoryNode_eventGetCustomShouldCreateLevel_Parms*)Obj)->AttributeValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeLevelFactoryNode_GetCustomShouldCreateLevel_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeLevelFactoryNode_eventGetCustomShouldCreateLevel_Parms), &Z_Construct_UFunction_UInterchangeLevelFactoryNode_GetCustomShouldCreateLevel_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeLevelFactoryNode_GetCustomShouldCreateLevel_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeLevelFactoryNode_eventGetCustomShouldCreateLevel_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeLevelFactoryNode_GetCustomShouldCreateLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeLevelFactoryNode_eventGetCustomShouldCreateLevel_Parms), &Z_Construct_UFunction_UInterchangeLevelFactoryNode_GetCustomShouldCreateLevel_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeLevelFactoryNode_GetCustomShouldCreateLevel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeLevelFactoryNode_GetCustomShouldCreateLevel_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeLevelFactoryNode_GetCustomShouldCreateLevel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeLevelFactoryNode_GetCustomShouldCreateLevel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeLevelFactoryNode_GetCustomShouldCreateLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeLevelFactoryNode, nullptr, "GetCustomShouldCreateLevel", nullptr, nullptr, Z_Construct_UFunction_UInterchangeLevelFactoryNode_GetCustomShouldCreateLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeLevelFactoryNode_GetCustomShouldCreateLevel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeLevelFactoryNode_GetCustomShouldCreateLevel_Statics::InterchangeLevelFactoryNode_eventGetCustomShouldCreateLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeLevelFactoryNode_GetCustomShouldCreateLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeLevelFactoryNode_GetCustomShouldCreateLevel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeLevelFactoryNode_GetCustomShouldCreateLevel_Statics::InterchangeLevelFactoryNode_eventGetCustomShouldCreateLevel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeLevelFactoryNode_GetCustomShouldCreateLevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeLevelFactoryNode_GetCustomShouldCreateLevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeLevelFactoryNode::execGetCustomShouldCreateLevel)
{
	P_GET_UBOOL_REF(Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCustomShouldCreateLevel(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeLevelFactoryNode Function GetCustomShouldCreateLevel

// Begin Class UInterchangeLevelFactoryNode Function GetObjectClass
struct Z_Construct_UFunction_UInterchangeLevelFactoryNode_GetObjectClass_Statics
{
	struct InterchangeLevelFactoryNode_eventGetObjectClass_Parms
	{
		UClass* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | LevelFactory" },
		{ "Comment", "/** Get the class this node want to create */" },
		{ "ModuleRelativePath", "Public/InterchangeLevelFactoryNode.h" },
		{ "ToolTip", "Get the class this node want to create" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UInterchangeLevelFactoryNode_GetObjectClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeLevelFactoryNode_eventGetObjectClass_Parms, ReturnValue), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeLevelFactoryNode_GetObjectClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeLevelFactoryNode_GetObjectClass_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeLevelFactoryNode_GetObjectClass_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeLevelFactoryNode_GetObjectClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeLevelFactoryNode, nullptr, "GetObjectClass", nullptr, nullptr, Z_Construct_UFunction_UInterchangeLevelFactoryNode_GetObjectClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeLevelFactoryNode_GetObjectClass_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeLevelFactoryNode_GetObjectClass_Statics::InterchangeLevelFactoryNode_eventGetObjectClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeLevelFactoryNode_GetObjectClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeLevelFactoryNode_GetObjectClass_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeLevelFactoryNode_GetObjectClass_Statics::InterchangeLevelFactoryNode_eventGetObjectClass_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeLevelFactoryNode_GetObjectClass()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeLevelFactoryNode_GetObjectClass_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeLevelFactoryNode::execGetObjectClass)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UClass**)Z_Param__Result=P_THIS->GetObjectClass();
	P_NATIVE_END;
}
// End Class UInterchangeLevelFactoryNode Function GetObjectClass

// Begin Class UInterchangeLevelFactoryNode Function RemoveCustomActorFactoryNodeUid
struct Z_Construct_UFunction_UInterchangeLevelFactoryNode_RemoveCustomActorFactoryNodeUid_Statics
{
	struct InterchangeLevelFactoryNode_eventRemoveCustomActorFactoryNodeUid_Parms
	{
		FString ActorFactoryNodeUid;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | LevelFactory" },
		{ "Comment", "/**\n\x09 * Remove one actor factory node unique id from this object.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeLevelFactoryNode.h" },
		{ "ToolTip", "Remove one actor factory node unique id from this object." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorFactoryNodeUid_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ActorFactoryNodeUid;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeLevelFactoryNode_RemoveCustomActorFactoryNodeUid_Statics::NewProp_ActorFactoryNodeUid = { "ActorFactoryNodeUid", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeLevelFactoryNode_eventRemoveCustomActorFactoryNodeUid_Parms, ActorFactoryNodeUid), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorFactoryNodeUid_MetaData), NewProp_ActorFactoryNodeUid_MetaData) };
void Z_Construct_UFunction_UInterchangeLevelFactoryNode_RemoveCustomActorFactoryNodeUid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeLevelFactoryNode_eventRemoveCustomActorFactoryNodeUid_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeLevelFactoryNode_RemoveCustomActorFactoryNodeUid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeLevelFactoryNode_eventRemoveCustomActorFactoryNodeUid_Parms), &Z_Construct_UFunction_UInterchangeLevelFactoryNode_RemoveCustomActorFactoryNodeUid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeLevelFactoryNode_RemoveCustomActorFactoryNodeUid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeLevelFactoryNode_RemoveCustomActorFactoryNodeUid_Statics::NewProp_ActorFactoryNodeUid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeLevelFactoryNode_RemoveCustomActorFactoryNodeUid_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeLevelFactoryNode_RemoveCustomActorFactoryNodeUid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeLevelFactoryNode_RemoveCustomActorFactoryNodeUid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeLevelFactoryNode, nullptr, "RemoveCustomActorFactoryNodeUid", nullptr, nullptr, Z_Construct_UFunction_UInterchangeLevelFactoryNode_RemoveCustomActorFactoryNodeUid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeLevelFactoryNode_RemoveCustomActorFactoryNodeUid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeLevelFactoryNode_RemoveCustomActorFactoryNodeUid_Statics::InterchangeLevelFactoryNode_eventRemoveCustomActorFactoryNodeUid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeLevelFactoryNode_RemoveCustomActorFactoryNodeUid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeLevelFactoryNode_RemoveCustomActorFactoryNodeUid_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeLevelFactoryNode_RemoveCustomActorFactoryNodeUid_Statics::InterchangeLevelFactoryNode_eventRemoveCustomActorFactoryNodeUid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeLevelFactoryNode_RemoveCustomActorFactoryNodeUid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeLevelFactoryNode_RemoveCustomActorFactoryNodeUid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeLevelFactoryNode::execRemoveCustomActorFactoryNodeUid)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_ActorFactoryNodeUid);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->RemoveCustomActorFactoryNodeUid(Z_Param_ActorFactoryNodeUid);
	P_NATIVE_END;
}
// End Class UInterchangeLevelFactoryNode Function RemoveCustomActorFactoryNodeUid

// Begin Class UInterchangeLevelFactoryNode Function SetCustomCreateWorldPartitionLevel
struct Z_Construct_UFunction_UInterchangeLevelFactoryNode_SetCustomCreateWorldPartitionLevel_Statics
{
	struct InterchangeLevelFactoryNode_eventSetCustomCreateWorldPartitionLevel_Parms
	{
		bool AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | LevelFactory" },
		{ "Comment", "/**\n\x09 * If true, created world partition level.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeLevelFactoryNode.h" },
		{ "ToolTip", "If true, created world partition level." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_AttributeValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UInterchangeLevelFactoryNode_SetCustomCreateWorldPartitionLevel_Statics::NewProp_AttributeValue_SetBit(void* Obj)
{
	((InterchangeLevelFactoryNode_eventSetCustomCreateWorldPartitionLevel_Parms*)Obj)->AttributeValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeLevelFactoryNode_SetCustomCreateWorldPartitionLevel_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeLevelFactoryNode_eventSetCustomCreateWorldPartitionLevel_Parms), &Z_Construct_UFunction_UInterchangeLevelFactoryNode_SetCustomCreateWorldPartitionLevel_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeValue_MetaData), NewProp_AttributeValue_MetaData) };
void Z_Construct_UFunction_UInterchangeLevelFactoryNode_SetCustomCreateWorldPartitionLevel_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeLevelFactoryNode_eventSetCustomCreateWorldPartitionLevel_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeLevelFactoryNode_SetCustomCreateWorldPartitionLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeLevelFactoryNode_eventSetCustomCreateWorldPartitionLevel_Parms), &Z_Construct_UFunction_UInterchangeLevelFactoryNode_SetCustomCreateWorldPartitionLevel_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeLevelFactoryNode_SetCustomCreateWorldPartitionLevel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeLevelFactoryNode_SetCustomCreateWorldPartitionLevel_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeLevelFactoryNode_SetCustomCreateWorldPartitionLevel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeLevelFactoryNode_SetCustomCreateWorldPartitionLevel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeLevelFactoryNode_SetCustomCreateWorldPartitionLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeLevelFactoryNode, nullptr, "SetCustomCreateWorldPartitionLevel", nullptr, nullptr, Z_Construct_UFunction_UInterchangeLevelFactoryNode_SetCustomCreateWorldPartitionLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeLevelFactoryNode_SetCustomCreateWorldPartitionLevel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeLevelFactoryNode_SetCustomCreateWorldPartitionLevel_Statics::InterchangeLevelFactoryNode_eventSetCustomCreateWorldPartitionLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeLevelFactoryNode_SetCustomCreateWorldPartitionLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeLevelFactoryNode_SetCustomCreateWorldPartitionLevel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeLevelFactoryNode_SetCustomCreateWorldPartitionLevel_Statics::InterchangeLevelFactoryNode_eventSetCustomCreateWorldPartitionLevel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeLevelFactoryNode_SetCustomCreateWorldPartitionLevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeLevelFactoryNode_SetCustomCreateWorldPartitionLevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeLevelFactoryNode::execSetCustomCreateWorldPartitionLevel)
{
	P_GET_UBOOL_REF(Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCustomCreateWorldPartitionLevel(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeLevelFactoryNode Function SetCustomCreateWorldPartitionLevel

// Begin Class UInterchangeLevelFactoryNode Function SetCustomSceneImportAssetFactoryNodeUid
struct Z_Construct_UFunction_UInterchangeLevelFactoryNode_SetCustomSceneImportAssetFactoryNodeUid_Statics
{
	struct InterchangeLevelFactoryNode_eventSetCustomSceneImportAssetFactoryNodeUid_Parms
	{
		FString AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | LevelFactory" },
		{ "Comment", "/**\n\x09 * Set the actor factory node unique id that hold the re-import data.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeLevelFactoryNode.h" },
		{ "ToolTip", "Set the actor factory node unique id that hold the re-import data." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeLevelFactoryNode_SetCustomSceneImportAssetFactoryNodeUid_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeLevelFactoryNode_eventSetCustomSceneImportAssetFactoryNodeUid_Parms, AttributeValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeValue_MetaData), NewProp_AttributeValue_MetaData) };
void Z_Construct_UFunction_UInterchangeLevelFactoryNode_SetCustomSceneImportAssetFactoryNodeUid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeLevelFactoryNode_eventSetCustomSceneImportAssetFactoryNodeUid_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeLevelFactoryNode_SetCustomSceneImportAssetFactoryNodeUid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeLevelFactoryNode_eventSetCustomSceneImportAssetFactoryNodeUid_Parms), &Z_Construct_UFunction_UInterchangeLevelFactoryNode_SetCustomSceneImportAssetFactoryNodeUid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeLevelFactoryNode_SetCustomSceneImportAssetFactoryNodeUid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeLevelFactoryNode_SetCustomSceneImportAssetFactoryNodeUid_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeLevelFactoryNode_SetCustomSceneImportAssetFactoryNodeUid_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeLevelFactoryNode_SetCustomSceneImportAssetFactoryNodeUid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeLevelFactoryNode_SetCustomSceneImportAssetFactoryNodeUid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeLevelFactoryNode, nullptr, "SetCustomSceneImportAssetFactoryNodeUid", nullptr, nullptr, Z_Construct_UFunction_UInterchangeLevelFactoryNode_SetCustomSceneImportAssetFactoryNodeUid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeLevelFactoryNode_SetCustomSceneImportAssetFactoryNodeUid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeLevelFactoryNode_SetCustomSceneImportAssetFactoryNodeUid_Statics::InterchangeLevelFactoryNode_eventSetCustomSceneImportAssetFactoryNodeUid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeLevelFactoryNode_SetCustomSceneImportAssetFactoryNodeUid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeLevelFactoryNode_SetCustomSceneImportAssetFactoryNodeUid_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeLevelFactoryNode_SetCustomSceneImportAssetFactoryNodeUid_Statics::InterchangeLevelFactoryNode_eventSetCustomSceneImportAssetFactoryNodeUid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeLevelFactoryNode_SetCustomSceneImportAssetFactoryNodeUid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeLevelFactoryNode_SetCustomSceneImportAssetFactoryNodeUid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeLevelFactoryNode::execSetCustomSceneImportAssetFactoryNodeUid)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCustomSceneImportAssetFactoryNodeUid(Z_Param_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeLevelFactoryNode Function SetCustomSceneImportAssetFactoryNodeUid

// Begin Class UInterchangeLevelFactoryNode Function SetCustomShouldCreateLevel
struct Z_Construct_UFunction_UInterchangeLevelFactoryNode_SetCustomShouldCreateLevel_Statics
{
	struct InterchangeLevelFactoryNode_eventSetCustomShouldCreateLevel_Parms
	{
		bool AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | LevelFactory" },
		{ "Comment", "/**\n\x09 * Set actors bounding box.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeLevelFactoryNode.h" },
		{ "ToolTip", "Set actors bounding box." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_AttributeValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UInterchangeLevelFactoryNode_SetCustomShouldCreateLevel_Statics::NewProp_AttributeValue_SetBit(void* Obj)
{
	((InterchangeLevelFactoryNode_eventSetCustomShouldCreateLevel_Parms*)Obj)->AttributeValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeLevelFactoryNode_SetCustomShouldCreateLevel_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeLevelFactoryNode_eventSetCustomShouldCreateLevel_Parms), &Z_Construct_UFunction_UInterchangeLevelFactoryNode_SetCustomShouldCreateLevel_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeValue_MetaData), NewProp_AttributeValue_MetaData) };
void Z_Construct_UFunction_UInterchangeLevelFactoryNode_SetCustomShouldCreateLevel_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeLevelFactoryNode_eventSetCustomShouldCreateLevel_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeLevelFactoryNode_SetCustomShouldCreateLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeLevelFactoryNode_eventSetCustomShouldCreateLevel_Parms), &Z_Construct_UFunction_UInterchangeLevelFactoryNode_SetCustomShouldCreateLevel_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeLevelFactoryNode_SetCustomShouldCreateLevel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeLevelFactoryNode_SetCustomShouldCreateLevel_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeLevelFactoryNode_SetCustomShouldCreateLevel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeLevelFactoryNode_SetCustomShouldCreateLevel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeLevelFactoryNode_SetCustomShouldCreateLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeLevelFactoryNode, nullptr, "SetCustomShouldCreateLevel", nullptr, nullptr, Z_Construct_UFunction_UInterchangeLevelFactoryNode_SetCustomShouldCreateLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeLevelFactoryNode_SetCustomShouldCreateLevel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeLevelFactoryNode_SetCustomShouldCreateLevel_Statics::InterchangeLevelFactoryNode_eventSetCustomShouldCreateLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeLevelFactoryNode_SetCustomShouldCreateLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeLevelFactoryNode_SetCustomShouldCreateLevel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeLevelFactoryNode_SetCustomShouldCreateLevel_Statics::InterchangeLevelFactoryNode_eventSetCustomShouldCreateLevel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeLevelFactoryNode_SetCustomShouldCreateLevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeLevelFactoryNode_SetCustomShouldCreateLevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeLevelFactoryNode::execSetCustomShouldCreateLevel)
{
	P_GET_UBOOL_REF(Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCustomShouldCreateLevel(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeLevelFactoryNode Function SetCustomShouldCreateLevel

// Begin Class UInterchangeLevelFactoryNode
void UInterchangeLevelFactoryNode::StaticRegisterNativesUInterchangeLevelFactoryNode()
{
	UClass* Class = UInterchangeLevelFactoryNode::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddCustomActorFactoryNodeUid", &UInterchangeLevelFactoryNode::execAddCustomActorFactoryNodeUid },
		{ "GetCustomActorFactoryNodeUid", &UInterchangeLevelFactoryNode::execGetCustomActorFactoryNodeUid },
		{ "GetCustomActorFactoryNodeUidCount", &UInterchangeLevelFactoryNode::execGetCustomActorFactoryNodeUidCount },
		{ "GetCustomActorFactoryNodeUids", &UInterchangeLevelFactoryNode::execGetCustomActorFactoryNodeUids },
		{ "GetCustomCreateWorldPartitionLevel", &UInterchangeLevelFactoryNode::execGetCustomCreateWorldPartitionLevel },
		{ "GetCustomSceneImportAssetFactoryNodeUid", &UInterchangeLevelFactoryNode::execGetCustomSceneImportAssetFactoryNodeUid },
		{ "GetCustomShouldCreateLevel", &UInterchangeLevelFactoryNode::execGetCustomShouldCreateLevel },
		{ "GetObjectClass", &UInterchangeLevelFactoryNode::execGetObjectClass },
		{ "RemoveCustomActorFactoryNodeUid", &UInterchangeLevelFactoryNode::execRemoveCustomActorFactoryNodeUid },
		{ "SetCustomCreateWorldPartitionLevel", &UInterchangeLevelFactoryNode::execSetCustomCreateWorldPartitionLevel },
		{ "SetCustomSceneImportAssetFactoryNodeUid", &UInterchangeLevelFactoryNode::execSetCustomSceneImportAssetFactoryNodeUid },
		{ "SetCustomShouldCreateLevel", &UInterchangeLevelFactoryNode::execSetCustomShouldCreateLevel },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeLevelFactoryNode);
UClass* Z_Construct_UClass_UInterchangeLevelFactoryNode_NoRegister()
{
	return UInterchangeLevelFactoryNode::StaticClass();
}
struct Z_Construct_UClass_UInterchangeLevelFactoryNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "InterchangeLevelFactoryNode.h" },
		{ "ModuleRelativePath", "Public/InterchangeLevelFactoryNode.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInterchangeLevelFactoryNode_AddCustomActorFactoryNodeUid, "AddCustomActorFactoryNodeUid" }, // 292006679
		{ &Z_Construct_UFunction_UInterchangeLevelFactoryNode_GetCustomActorFactoryNodeUid, "GetCustomActorFactoryNodeUid" }, // 1417497261
		{ &Z_Construct_UFunction_UInterchangeLevelFactoryNode_GetCustomActorFactoryNodeUidCount, "GetCustomActorFactoryNodeUidCount" }, // 491499668
		{ &Z_Construct_UFunction_UInterchangeLevelFactoryNode_GetCustomActorFactoryNodeUids, "GetCustomActorFactoryNodeUids" }, // 3647648712
		{ &Z_Construct_UFunction_UInterchangeLevelFactoryNode_GetCustomCreateWorldPartitionLevel, "GetCustomCreateWorldPartitionLevel" }, // 3984841777
		{ &Z_Construct_UFunction_UInterchangeLevelFactoryNode_GetCustomSceneImportAssetFactoryNodeUid, "GetCustomSceneImportAssetFactoryNodeUid" }, // 994318401
		{ &Z_Construct_UFunction_UInterchangeLevelFactoryNode_GetCustomShouldCreateLevel, "GetCustomShouldCreateLevel" }, // 4236063423
		{ &Z_Construct_UFunction_UInterchangeLevelFactoryNode_GetObjectClass, "GetObjectClass" }, // 649345089
		{ &Z_Construct_UFunction_UInterchangeLevelFactoryNode_RemoveCustomActorFactoryNodeUid, "RemoveCustomActorFactoryNodeUid" }, // 3365465472
		{ &Z_Construct_UFunction_UInterchangeLevelFactoryNode_SetCustomCreateWorldPartitionLevel, "SetCustomCreateWorldPartitionLevel" }, // 492615304
		{ &Z_Construct_UFunction_UInterchangeLevelFactoryNode_SetCustomSceneImportAssetFactoryNodeUid, "SetCustomSceneImportAssetFactoryNodeUid" }, // 2863538996
		{ &Z_Construct_UFunction_UInterchangeLevelFactoryNode_SetCustomShouldCreateLevel, "SetCustomShouldCreateLevel" }, // 1447668786
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeLevelFactoryNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInterchangeLevelFactoryNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterchangeFactoryBaseNode,
	(UObject* (*)())Z_Construct_UPackage__Script_InterchangeFactoryNodes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeLevelFactoryNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeLevelFactoryNode_Statics::ClassParams = {
	&UInterchangeLevelFactoryNode::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeLevelFactoryNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UInterchangeLevelFactoryNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInterchangeLevelFactoryNode()
{
	if (!Z_Registration_Info_UClass_UInterchangeLevelFactoryNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeLevelFactoryNode.OuterSingleton, Z_Construct_UClass_UInterchangeLevelFactoryNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInterchangeLevelFactoryNode.OuterSingleton;
}
template<> INTERCHANGEFACTORYNODES_API UClass* StaticClass<UInterchangeLevelFactoryNode>()
{
	return UInterchangeLevelFactoryNode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeLevelFactoryNode);
UInterchangeLevelFactoryNode::~UInterchangeLevelFactoryNode() {}
// End Class UInterchangeLevelFactoryNode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeLevelFactoryNode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInterchangeLevelFactoryNode, UInterchangeLevelFactoryNode::StaticClass, TEXT("UInterchangeLevelFactoryNode"), &Z_Registration_Info_UClass_UInterchangeLevelFactoryNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeLevelFactoryNode), 2040146693U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeLevelFactoryNode_h_3987342509(TEXT("/Script/InterchangeFactoryNodes"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeLevelFactoryNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeLevelFactoryNode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
