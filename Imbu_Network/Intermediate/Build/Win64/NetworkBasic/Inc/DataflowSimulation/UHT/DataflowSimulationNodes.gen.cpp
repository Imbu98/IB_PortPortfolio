// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Experimental/Dataflow/Simulation/Public/Dataflow/DataflowSimulationNodes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDataflowSimulationNodes() {}

// Begin Cross Module References
DATAFLOWCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowNode();
DATAFLOWSIMULATION_API UScriptStruct* Z_Construct_UScriptStruct_FAdvancePhysicsSolversDataflowNode();
DATAFLOWSIMULATION_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowExecutionNode();
DATAFLOWSIMULATION_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowInvalidNode();
DATAFLOWSIMULATION_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowSimulationNode();
DATAFLOWSIMULATION_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowSimulationProperty();
DATAFLOWSIMULATION_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowSimulationTime();
DATAFLOWSIMULATION_API UScriptStruct* Z_Construct_UScriptStruct_FFilterSimulationProxiesDataflowNode();
DATAFLOWSIMULATION_API UScriptStruct* Z_Construct_UScriptStruct_FGetPhysicsSolversDataflowNode();
DATAFLOWSIMULATION_API UScriptStruct* Z_Construct_UScriptStruct_FGetSimulationTimeDataflowNode();
DATAFLOWSIMULATION_API UScriptStruct* Z_Construct_UScriptStruct_FSimulationProxiesTerminalDataflowNode();
UPackage* Z_Construct_UPackage__Script_DataflowSimulation();
// End Cross Module References

// Begin ScriptStruct FDataflowSimulationProperty
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DataflowSimulationProperty;
class UScriptStruct* FDataflowSimulationProperty::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DataflowSimulationProperty.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DataflowSimulationProperty.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDataflowSimulationProperty, (UObject*)Z_Construct_UPackage__Script_DataflowSimulation(), TEXT("DataflowSimulationProperty"));
	}
	return Z_Registration_Info_UScriptStruct_DataflowSimulationProperty.OuterSingleton;
}
template<> DATAFLOWSIMULATION_API UScriptStruct* StaticStruct<FDataflowSimulationProperty>()
{
	return FDataflowSimulationProperty::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDataflowSimulationProperty_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Dataflow simulation property \n */" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowSimulationNodes.h" },
		{ "ToolTip", "Dataflow simulation property" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDataflowSimulationProperty>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDataflowSimulationProperty_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DataflowSimulation,
	nullptr,
	&NewStructOps,
	"DataflowSimulationProperty",
	nullptr,
	0,
	sizeof(FDataflowSimulationProperty),
	alignof(FDataflowSimulationProperty),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataflowSimulationProperty_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDataflowSimulationProperty_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDataflowSimulationProperty()
{
	if (!Z_Registration_Info_UScriptStruct_DataflowSimulationProperty.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DataflowSimulationProperty.InnerSingleton, Z_Construct_UScriptStruct_FDataflowSimulationProperty_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DataflowSimulationProperty.InnerSingleton;
}
// End ScriptStruct FDataflowSimulationProperty

// Begin ScriptStruct FDataflowSimulationNode
static_assert(std::is_polymorphic<FDataflowSimulationNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FDataflowSimulationNode cannot be polymorphic unless super FDataflowNode is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DataflowSimulationNode;
class UScriptStruct* FDataflowSimulationNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DataflowSimulationNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DataflowSimulationNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDataflowSimulationNode, (UObject*)Z_Construct_UPackage__Script_DataflowSimulation(), TEXT("DataflowSimulationNode"));
	}
	return Z_Registration_Info_UScriptStruct_DataflowSimulationNode.OuterSingleton;
}
template<> DATAFLOWSIMULATION_API UScriptStruct* StaticStruct<FDataflowSimulationNode>()
{
	return FDataflowSimulationNode::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDataflowSimulationNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n* FDataflowSimulationNode\n*\x09\x09""Base class for simulation nodes within the Dataflow graph. \n* \n*\x09\x09Simulation nodes are used to simulate data from the calling client. \n*/" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowSimulationNodes.h" },
		{ "ToolTip", "FDataflowSimulationNode\n             Base class for simulation nodes within the Dataflow graph.\n\n             Simulation nodes are used to simulate data from the calling client." },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDataflowSimulationNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDataflowSimulationNode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DataflowSimulation,
	Z_Construct_UScriptStruct_FDataflowNode,
	&NewStructOps,
	"DataflowSimulationNode",
	nullptr,
	0,
	sizeof(FDataflowSimulationNode),
	alignof(FDataflowSimulationNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataflowSimulationNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDataflowSimulationNode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDataflowSimulationNode()
{
	if (!Z_Registration_Info_UScriptStruct_DataflowSimulationNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DataflowSimulationNode.InnerSingleton, Z_Construct_UScriptStruct_FDataflowSimulationNode_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DataflowSimulationNode.InnerSingleton;
}
// End ScriptStruct FDataflowSimulationNode

// Begin ScriptStruct FDataflowInvalidNode
static_assert(std::is_polymorphic<FDataflowInvalidNode>() == std::is_polymorphic<FDataflowSimulationNode>(), "USTRUCT FDataflowInvalidNode cannot be polymorphic unless super FDataflowSimulationNode is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DataflowInvalidNode;
class UScriptStruct* FDataflowInvalidNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DataflowInvalidNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DataflowInvalidNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDataflowInvalidNode, (UObject*)Z_Construct_UPackage__Script_DataflowSimulation(), TEXT("DataflowInvalidNode"));
	}
	return Z_Registration_Info_UScriptStruct_DataflowInvalidNode.OuterSingleton;
}
template<> DATAFLOWSIMULATION_API UScriptStruct* StaticStruct<FDataflowInvalidNode>()
{
	return FDataflowInvalidNode::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDataflowInvalidNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n* FDataflowInvalidNode\n*\x09\x09""Base class for invalid nodes within the Dataflow graph. \n* \n*\x09\x09Invalid nodes will be always invalidated while simulating\n*/" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowSimulationNodes.h" },
		{ "ToolTip", "FDataflowInvalidNode\n             Base class for invalid nodes within the Dataflow graph.\n\n             Invalid nodes will be always invalidated while simulating" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDataflowInvalidNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDataflowInvalidNode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DataflowSimulation,
	Z_Construct_UScriptStruct_FDataflowSimulationNode,
	&NewStructOps,
	"DataflowInvalidNode",
	nullptr,
	0,
	sizeof(FDataflowInvalidNode),
	alignof(FDataflowInvalidNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataflowInvalidNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDataflowInvalidNode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDataflowInvalidNode()
{
	if (!Z_Registration_Info_UScriptStruct_DataflowInvalidNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DataflowInvalidNode.InnerSingleton, Z_Construct_UScriptStruct_FDataflowInvalidNode_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DataflowInvalidNode.InnerSingleton;
}
// End ScriptStruct FDataflowInvalidNode

// Begin ScriptStruct FDataflowExecutionNode
static_assert(std::is_polymorphic<FDataflowExecutionNode>() == std::is_polymorphic<FDataflowSimulationNode>(), "USTRUCT FDataflowExecutionNode cannot be polymorphic unless super FDataflowSimulationNode is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DataflowExecutionNode;
class UScriptStruct* FDataflowExecutionNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DataflowExecutionNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DataflowExecutionNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDataflowExecutionNode, (UObject*)Z_Construct_UPackage__Script_DataflowSimulation(), TEXT("DataflowExecutionNode"));
	}
	return Z_Registration_Info_UScriptStruct_DataflowExecutionNode.OuterSingleton;
}
template<> DATAFLOWSIMULATION_API UScriptStruct* StaticStruct<FDataflowExecutionNode>()
{
	return FDataflowExecutionNode::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDataflowExecutionNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n* FDataflowExecutionNode\n*\x09\x09""Base class for the execute the dataflow simulation graph. \n* \n*\x09\x09""Execution nodes are used to pull the graph from the calling client. \n*/" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowSimulationNodes.h" },
		{ "ToolTip", "FDataflowExecutionNode\n             Base class for the execute the dataflow simulation graph.\n\n             Execution nodes are used to pull the graph from the calling client." },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDataflowExecutionNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDataflowExecutionNode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DataflowSimulation,
	Z_Construct_UScriptStruct_FDataflowSimulationNode,
	&NewStructOps,
	"DataflowExecutionNode",
	nullptr,
	0,
	sizeof(FDataflowExecutionNode),
	alignof(FDataflowExecutionNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataflowExecutionNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDataflowExecutionNode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDataflowExecutionNode()
{
	if (!Z_Registration_Info_UScriptStruct_DataflowExecutionNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DataflowExecutionNode.InnerSingleton, Z_Construct_UScriptStruct_FDataflowExecutionNode_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DataflowExecutionNode.InnerSingleton;
}
// End ScriptStruct FDataflowExecutionNode

// Begin ScriptStruct FDataflowSimulationTime
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DataflowSimulationTime;
class UScriptStruct* FDataflowSimulationTime::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DataflowSimulationTime.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DataflowSimulationTime.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDataflowSimulationTime, (UObject*)Z_Construct_UPackage__Script_DataflowSimulation(), TEXT("DataflowSimulationTime"));
	}
	return Z_Registration_Info_UScriptStruct_DataflowSimulationTime.OuterSingleton;
}
template<> DATAFLOWSIMULATION_API UScriptStruct* StaticStruct<FDataflowSimulationTime>()
{
	return FDataflowSimulationTime::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDataflowSimulationTime_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Get the dataflow simulation time */" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowSimulationNodes.h" },
		{ "ToolTip", "Get the dataflow simulation time" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeltaTime_MetaData[] = {
		{ "Comment", "/** Delta time in seconds coming from the context */" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowSimulationNodes.h" },
		{ "ToolTip", "Delta time in seconds coming from the context" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentTime_MetaData[] = {
		{ "Comment", "/** Current time in seconds coming from the context */" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowSimulationNodes.h" },
		{ "ToolTip", "Current time in seconds coming from the context" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeOffset_MetaData[] = {
		{ "Comment", "/** Time offset that will need to be added to the current time to compute the sub-stepping */" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowSimulationNodes.h" },
		{ "ToolTip", "Time offset that will need to be added to the current time to compute the sub-stepping" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeOffset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDataflowSimulationTime>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDataflowSimulationTime_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0090000000002000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDataflowSimulationTime, DeltaTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeltaTime_MetaData), NewProp_DeltaTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDataflowSimulationTime_Statics::NewProp_CurrentTime = { "CurrentTime", nullptr, (EPropertyFlags)0x0090000000002000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDataflowSimulationTime, CurrentTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentTime_MetaData), NewProp_CurrentTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDataflowSimulationTime_Statics::NewProp_TimeOffset = { "TimeOffset", nullptr, (EPropertyFlags)0x0090000000002000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDataflowSimulationTime, TimeOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeOffset_MetaData), NewProp_TimeOffset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDataflowSimulationTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataflowSimulationTime_Statics::NewProp_DeltaTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataflowSimulationTime_Statics::NewProp_CurrentTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataflowSimulationTime_Statics::NewProp_TimeOffset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataflowSimulationTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDataflowSimulationTime_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DataflowSimulation,
	nullptr,
	&NewStructOps,
	"DataflowSimulationTime",
	Z_Construct_UScriptStruct_FDataflowSimulationTime_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataflowSimulationTime_Statics::PropPointers),
	sizeof(FDataflowSimulationTime),
	alignof(FDataflowSimulationTime),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataflowSimulationTime_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDataflowSimulationTime_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDataflowSimulationTime()
{
	if (!Z_Registration_Info_UScriptStruct_DataflowSimulationTime.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DataflowSimulationTime.InnerSingleton, Z_Construct_UScriptStruct_FDataflowSimulationTime_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DataflowSimulationTime.InnerSingleton;
}
// End ScriptStruct FDataflowSimulationTime

// Begin ScriptStruct FGetSimulationTimeDataflowNode
static_assert(std::is_polymorphic<FGetSimulationTimeDataflowNode>() == std::is_polymorphic<FDataflowInvalidNode>(), "USTRUCT FGetSimulationTimeDataflowNode cannot be polymorphic unless super FDataflowInvalidNode is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GetSimulationTimeDataflowNode;
class UScriptStruct* FGetSimulationTimeDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GetSimulationTimeDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GetSimulationTimeDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGetSimulationTimeDataflowNode, (UObject*)Z_Construct_UPackage__Script_DataflowSimulation(), TEXT("GetSimulationTimeDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_GetSimulationTimeDataflowNode.OuterSingleton;
}
template<> DATAFLOWSIMULATION_API UScriptStruct* StaticStruct<FGetSimulationTimeDataflowNode>()
{
	return FGetSimulationTimeDataflowNode::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGetSimulationTimeDataflowNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Get the context simulation time */" },
		{ "DataflowSimulation", "" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowSimulationNodes.h" },
		{ "ToolTip", "Get the context simulation time" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SimulationTime_MetaData[] = {
		{ "Comment", "/** Simulation time property coming from the context */" },
		{ "DataflowOutput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowSimulationNodes.h" },
		{ "ToolTip", "Simulation time property coming from the context" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SimulationTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGetSimulationTimeDataflowNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGetSimulationTimeDataflowNode_Statics::NewProp_SimulationTime = { "SimulationTime", nullptr, (EPropertyFlags)0x0090000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGetSimulationTimeDataflowNode, SimulationTime), Z_Construct_UScriptStruct_FDataflowSimulationTime, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SimulationTime_MetaData), NewProp_SimulationTime_MetaData) }; // 1631315179
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGetSimulationTimeDataflowNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGetSimulationTimeDataflowNode_Statics::NewProp_SimulationTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetSimulationTimeDataflowNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGetSimulationTimeDataflowNode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DataflowSimulation,
	Z_Construct_UScriptStruct_FDataflowInvalidNode,
	&NewStructOps,
	"GetSimulationTimeDataflowNode",
	Z_Construct_UScriptStruct_FGetSimulationTimeDataflowNode_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetSimulationTimeDataflowNode_Statics::PropPointers),
	sizeof(FGetSimulationTimeDataflowNode),
	alignof(FGetSimulationTimeDataflowNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetSimulationTimeDataflowNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGetSimulationTimeDataflowNode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGetSimulationTimeDataflowNode()
{
	if (!Z_Registration_Info_UScriptStruct_GetSimulationTimeDataflowNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GetSimulationTimeDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FGetSimulationTimeDataflowNode_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GetSimulationTimeDataflowNode.InnerSingleton;
}
// End ScriptStruct FGetSimulationTimeDataflowNode

// Begin ScriptStruct FGetPhysicsSolversDataflowNode
static_assert(std::is_polymorphic<FGetPhysicsSolversDataflowNode>() == std::is_polymorphic<FDataflowInvalidNode>(), "USTRUCT FGetPhysicsSolversDataflowNode cannot be polymorphic unless super FDataflowInvalidNode is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GetPhysicsSolversDataflowNode;
class UScriptStruct* FGetPhysicsSolversDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GetPhysicsSolversDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GetPhysicsSolversDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGetPhysicsSolversDataflowNode, (UObject*)Z_Construct_UPackage__Script_DataflowSimulation(), TEXT("GetPhysicsSolversDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_GetPhysicsSolversDataflowNode.OuterSingleton;
}
template<> DATAFLOWSIMULATION_API UScriptStruct* StaticStruct<FGetPhysicsSolversDataflowNode>()
{
	return FGetPhysicsSolversDataflowNode::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGetPhysicsSolversDataflowNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Get physics solvers from context */" },
		{ "DataflowSimulation", "" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowSimulationNodes.h" },
		{ "ToolTip", "Get physics solvers from context" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PhysicsSolvers_MetaData[] = {
		{ "Comment", "/** Physics solvers coming from the context and filtered with the groups */" },
		{ "DataflowOutput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowSimulationNodes.h" },
		{ "ToolTip", "Physics solvers coming from the context and filtered with the groups" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SimulationGroups_MetaData[] = {
		{ "Category", "Simulation" },
		{ "Comment", "/** Simulation groups to filter the output solvers properties */" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowSimulationNodes.h" },
		{ "ToolTip", "Simulation groups to filter the output solvers properties" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PhysicsSolvers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PhysicsSolvers;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SimulationGroups_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SimulationGroups;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGetPhysicsSolversDataflowNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGetPhysicsSolversDataflowNode_Statics::NewProp_PhysicsSolvers_Inner = { "PhysicsSolvers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDataflowSimulationProperty, METADATA_PARAMS(0, nullptr) }; // 3141209263
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGetPhysicsSolversDataflowNode_Statics::NewProp_PhysicsSolvers = { "PhysicsSolvers", nullptr, (EPropertyFlags)0x0090000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGetPhysicsSolversDataflowNode, PhysicsSolvers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PhysicsSolvers_MetaData), NewProp_PhysicsSolvers_MetaData) }; // 3141209263
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGetPhysicsSolversDataflowNode_Statics::NewProp_SimulationGroups_Inner = { "SimulationGroups", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGetPhysicsSolversDataflowNode_Statics::NewProp_SimulationGroups = { "SimulationGroups", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGetPhysicsSolversDataflowNode, SimulationGroups), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SimulationGroups_MetaData), NewProp_SimulationGroups_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGetPhysicsSolversDataflowNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGetPhysicsSolversDataflowNode_Statics::NewProp_PhysicsSolvers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGetPhysicsSolversDataflowNode_Statics::NewProp_PhysicsSolvers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGetPhysicsSolversDataflowNode_Statics::NewProp_SimulationGroups_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGetPhysicsSolversDataflowNode_Statics::NewProp_SimulationGroups,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetPhysicsSolversDataflowNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGetPhysicsSolversDataflowNode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DataflowSimulation,
	Z_Construct_UScriptStruct_FDataflowInvalidNode,
	&NewStructOps,
	"GetPhysicsSolversDataflowNode",
	Z_Construct_UScriptStruct_FGetPhysicsSolversDataflowNode_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetPhysicsSolversDataflowNode_Statics::PropPointers),
	sizeof(FGetPhysicsSolversDataflowNode),
	alignof(FGetPhysicsSolversDataflowNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetPhysicsSolversDataflowNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGetPhysicsSolversDataflowNode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGetPhysicsSolversDataflowNode()
{
	if (!Z_Registration_Info_UScriptStruct_GetPhysicsSolversDataflowNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GetPhysicsSolversDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FGetPhysicsSolversDataflowNode_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GetPhysicsSolversDataflowNode.InnerSingleton;
}
// End ScriptStruct FGetPhysicsSolversDataflowNode

// Begin ScriptStruct FAdvancePhysicsSolversDataflowNode
static_assert(std::is_polymorphic<FAdvancePhysicsSolversDataflowNode>() == std::is_polymorphic<FDataflowSimulationNode>(), "USTRUCT FAdvancePhysicsSolversDataflowNode cannot be polymorphic unless super FDataflowSimulationNode is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AdvancePhysicsSolversDataflowNode;
class UScriptStruct* FAdvancePhysicsSolversDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AdvancePhysicsSolversDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AdvancePhysicsSolversDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAdvancePhysicsSolversDataflowNode, (UObject*)Z_Construct_UPackage__Script_DataflowSimulation(), TEXT("AdvancePhysicsSolversDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_AdvancePhysicsSolversDataflowNode.OuterSingleton;
}
template<> DATAFLOWSIMULATION_API UScriptStruct* StaticStruct<FAdvancePhysicsSolversDataflowNode>()
{
	return FAdvancePhysicsSolversDataflowNode::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAdvancePhysicsSolversDataflowNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Advance the simulation physics solver in time */" },
		{ "DataflowSimulation", "" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowSimulationNodes.h" },
		{ "ToolTip", "Advance the simulation physics solver in time" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SimulationTime_MetaData[] = {
		{ "Comment", "/** Delta time to use to advance the solver*/" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowSimulationNodes.h" },
		{ "ToolTip", "Delta time to use to advance the solver" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PhysicsSolvers_MetaData[] = {
		{ "Comment", "/** Physics solvers to advance in time */" },
		{ "DataflowInput", "" },
		{ "DataflowOutput", "" },
		{ "DataflowPassthrough", "PhysicsSolvers" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowSimulationNodes.h" },
		{ "ToolTip", "Physics solvers to advance in time" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SimulationTime;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PhysicsSolvers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PhysicsSolvers;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAdvancePhysicsSolversDataflowNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAdvancePhysicsSolversDataflowNode_Statics::NewProp_SimulationTime = { "SimulationTime", nullptr, (EPropertyFlags)0x0090000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAdvancePhysicsSolversDataflowNode, SimulationTime), Z_Construct_UScriptStruct_FDataflowSimulationTime, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SimulationTime_MetaData), NewProp_SimulationTime_MetaData) }; // 1631315179
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAdvancePhysicsSolversDataflowNode_Statics::NewProp_PhysicsSolvers_Inner = { "PhysicsSolvers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDataflowSimulationProperty, METADATA_PARAMS(0, nullptr) }; // 3141209263
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAdvancePhysicsSolversDataflowNode_Statics::NewProp_PhysicsSolvers = { "PhysicsSolvers", nullptr, (EPropertyFlags)0x0090000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAdvancePhysicsSolversDataflowNode, PhysicsSolvers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PhysicsSolvers_MetaData), NewProp_PhysicsSolvers_MetaData) }; // 3141209263
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAdvancePhysicsSolversDataflowNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdvancePhysicsSolversDataflowNode_Statics::NewProp_SimulationTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdvancePhysicsSolversDataflowNode_Statics::NewProp_PhysicsSolvers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdvancePhysicsSolversDataflowNode_Statics::NewProp_PhysicsSolvers,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdvancePhysicsSolversDataflowNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAdvancePhysicsSolversDataflowNode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DataflowSimulation,
	Z_Construct_UScriptStruct_FDataflowSimulationNode,
	&NewStructOps,
	"AdvancePhysicsSolversDataflowNode",
	Z_Construct_UScriptStruct_FAdvancePhysicsSolversDataflowNode_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdvancePhysicsSolversDataflowNode_Statics::PropPointers),
	sizeof(FAdvancePhysicsSolversDataflowNode),
	alignof(FAdvancePhysicsSolversDataflowNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdvancePhysicsSolversDataflowNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAdvancePhysicsSolversDataflowNode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAdvancePhysicsSolversDataflowNode()
{
	if (!Z_Registration_Info_UScriptStruct_AdvancePhysicsSolversDataflowNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AdvancePhysicsSolversDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FAdvancePhysicsSolversDataflowNode_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AdvancePhysicsSolversDataflowNode.InnerSingleton;
}
// End ScriptStruct FAdvancePhysicsSolversDataflowNode

// Begin ScriptStruct FFilterSimulationProxiesDataflowNode
static_assert(std::is_polymorphic<FFilterSimulationProxiesDataflowNode>() == std::is_polymorphic<FDataflowSimulationNode>(), "USTRUCT FFilterSimulationProxiesDataflowNode cannot be polymorphic unless super FDataflowSimulationNode is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FilterSimulationProxiesDataflowNode;
class UScriptStruct* FFilterSimulationProxiesDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FilterSimulationProxiesDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FilterSimulationProxiesDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFilterSimulationProxiesDataflowNode, (UObject*)Z_Construct_UPackage__Script_DataflowSimulation(), TEXT("FilterSimulationProxiesDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_FilterSimulationProxiesDataflowNode.OuterSingleton;
}
template<> DATAFLOWSIMULATION_API UScriptStruct* StaticStruct<FFilterSimulationProxiesDataflowNode>()
{
	return FFilterSimulationProxiesDataflowNode::StaticStruct();
}
struct Z_Construct_UScriptStruct_FFilterSimulationProxiesDataflowNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Filter simulation proxies from context */" },
		{ "DataflowSimulation", "" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowSimulationNodes.h" },
		{ "ToolTip", "Filter simulation proxies from context" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SimulationProxies_MetaData[] = {
		{ "Comment", "/** Simulation proxies coming from the context and filtered with the groups */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowSimulationNodes.h" },
		{ "ToolTip", "Simulation proxies coming from the context and filtered with the groups" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FilteredProxies_MetaData[] = {
		{ "Comment", "/** Simulation proxies coming from the context and filtered with the groups */" },
		{ "DataflowOutput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowSimulationNodes.h" },
		{ "ToolTip", "Simulation proxies coming from the context and filtered with the groups" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SimulationGroups_MetaData[] = {
		{ "Category", "Simulation" },
		{ "Comment", "/** Simulation groups to filter the output solvers properties */" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowSimulationNodes.h" },
		{ "ToolTip", "Simulation groups to filter the output solvers properties" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SimulationProxies_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SimulationProxies;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FilteredProxies_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_FilteredProxies;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SimulationGroups_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SimulationGroups;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFilterSimulationProxiesDataflowNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFilterSimulationProxiesDataflowNode_Statics::NewProp_SimulationProxies_Inner = { "SimulationProxies", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDataflowSimulationProperty, METADATA_PARAMS(0, nullptr) }; // 3141209263
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FFilterSimulationProxiesDataflowNode_Statics::NewProp_SimulationProxies = { "SimulationProxies", nullptr, (EPropertyFlags)0x0090000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFilterSimulationProxiesDataflowNode, SimulationProxies), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SimulationProxies_MetaData), NewProp_SimulationProxies_MetaData) }; // 3141209263
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFilterSimulationProxiesDataflowNode_Statics::NewProp_FilteredProxies_Inner = { "FilteredProxies", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDataflowSimulationProperty, METADATA_PARAMS(0, nullptr) }; // 3141209263
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FFilterSimulationProxiesDataflowNode_Statics::NewProp_FilteredProxies = { "FilteredProxies", nullptr, (EPropertyFlags)0x0090000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFilterSimulationProxiesDataflowNode, FilteredProxies), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FilteredProxies_MetaData), NewProp_FilteredProxies_MetaData) }; // 3141209263
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFilterSimulationProxiesDataflowNode_Statics::NewProp_SimulationGroups_Inner = { "SimulationGroups", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FFilterSimulationProxiesDataflowNode_Statics::NewProp_SimulationGroups = { "SimulationGroups", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFilterSimulationProxiesDataflowNode, SimulationGroups), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SimulationGroups_MetaData), NewProp_SimulationGroups_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFilterSimulationProxiesDataflowNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFilterSimulationProxiesDataflowNode_Statics::NewProp_SimulationProxies_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFilterSimulationProxiesDataflowNode_Statics::NewProp_SimulationProxies,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFilterSimulationProxiesDataflowNode_Statics::NewProp_FilteredProxies_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFilterSimulationProxiesDataflowNode_Statics::NewProp_FilteredProxies,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFilterSimulationProxiesDataflowNode_Statics::NewProp_SimulationGroups_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFilterSimulationProxiesDataflowNode_Statics::NewProp_SimulationGroups,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFilterSimulationProxiesDataflowNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFilterSimulationProxiesDataflowNode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DataflowSimulation,
	Z_Construct_UScriptStruct_FDataflowSimulationNode,
	&NewStructOps,
	"FilterSimulationProxiesDataflowNode",
	Z_Construct_UScriptStruct_FFilterSimulationProxiesDataflowNode_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFilterSimulationProxiesDataflowNode_Statics::PropPointers),
	sizeof(FFilterSimulationProxiesDataflowNode),
	alignof(FFilterSimulationProxiesDataflowNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFilterSimulationProxiesDataflowNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFilterSimulationProxiesDataflowNode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FFilterSimulationProxiesDataflowNode()
{
	if (!Z_Registration_Info_UScriptStruct_FilterSimulationProxiesDataflowNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FilterSimulationProxiesDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FFilterSimulationProxiesDataflowNode_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FilterSimulationProxiesDataflowNode.InnerSingleton;
}
// End ScriptStruct FFilterSimulationProxiesDataflowNode

// Begin ScriptStruct FSimulationProxiesTerminalDataflowNode
static_assert(std::is_polymorphic<FSimulationProxiesTerminalDataflowNode>() == std::is_polymorphic<FDataflowExecutionNode>(), "USTRUCT FSimulationProxiesTerminalDataflowNode cannot be polymorphic unless super FDataflowExecutionNode is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SimulationProxiesTerminalDataflowNode;
class UScriptStruct* FSimulationProxiesTerminalDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SimulationProxiesTerminalDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SimulationProxiesTerminalDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSimulationProxiesTerminalDataflowNode, (UObject*)Z_Construct_UPackage__Script_DataflowSimulation(), TEXT("SimulationProxiesTerminalDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_SimulationProxiesTerminalDataflowNode.OuterSingleton;
}
template<> DATAFLOWSIMULATION_API UScriptStruct* StaticStruct<FSimulationProxiesTerminalDataflowNode>()
{
	return FSimulationProxiesTerminalDataflowNode::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSimulationProxiesTerminalDataflowNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Main terminal node for simulation proxies */" },
		{ "DataflowSimulation", "" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowSimulationNodes.h" },
		{ "ToolTip", "Main terminal node for simulation proxies" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SimulationProxies_MetaData[] = {
		{ "Comment", "/** Physics solvers to evaluate  */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowSimulationNodes.h" },
		{ "ToolTip", "Physics solvers to evaluate" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SimulationProxies_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SimulationProxies;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSimulationProxiesTerminalDataflowNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSimulationProxiesTerminalDataflowNode_Statics::NewProp_SimulationProxies_Inner = { "SimulationProxies", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDataflowSimulationProperty, METADATA_PARAMS(0, nullptr) }; // 3141209263
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSimulationProxiesTerminalDataflowNode_Statics::NewProp_SimulationProxies = { "SimulationProxies", nullptr, (EPropertyFlags)0x0090000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSimulationProxiesTerminalDataflowNode, SimulationProxies), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SimulationProxies_MetaData), NewProp_SimulationProxies_MetaData) }; // 3141209263
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSimulationProxiesTerminalDataflowNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimulationProxiesTerminalDataflowNode_Statics::NewProp_SimulationProxies_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimulationProxiesTerminalDataflowNode_Statics::NewProp_SimulationProxies,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimulationProxiesTerminalDataflowNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSimulationProxiesTerminalDataflowNode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DataflowSimulation,
	Z_Construct_UScriptStruct_FDataflowExecutionNode,
	&NewStructOps,
	"SimulationProxiesTerminalDataflowNode",
	Z_Construct_UScriptStruct_FSimulationProxiesTerminalDataflowNode_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimulationProxiesTerminalDataflowNode_Statics::PropPointers),
	sizeof(FSimulationProxiesTerminalDataflowNode),
	alignof(FSimulationProxiesTerminalDataflowNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimulationProxiesTerminalDataflowNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSimulationProxiesTerminalDataflowNode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSimulationProxiesTerminalDataflowNode()
{
	if (!Z_Registration_Info_UScriptStruct_SimulationProxiesTerminalDataflowNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SimulationProxiesTerminalDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FSimulationProxiesTerminalDataflowNode_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SimulationProxiesTerminalDataflowNode.InnerSingleton;
}
// End ScriptStruct FSimulationProxiesTerminalDataflowNode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Simulation_Public_Dataflow_DataflowSimulationNodes_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FDataflowSimulationProperty::StaticStruct, Z_Construct_UScriptStruct_FDataflowSimulationProperty_Statics::NewStructOps, TEXT("DataflowSimulationProperty"), &Z_Registration_Info_UScriptStruct_DataflowSimulationProperty, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDataflowSimulationProperty), 3141209263U) },
		{ FDataflowSimulationNode::StaticStruct, Z_Construct_UScriptStruct_FDataflowSimulationNode_Statics::NewStructOps, TEXT("DataflowSimulationNode"), &Z_Registration_Info_UScriptStruct_DataflowSimulationNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDataflowSimulationNode), 3810659370U) },
		{ FDataflowInvalidNode::StaticStruct, Z_Construct_UScriptStruct_FDataflowInvalidNode_Statics::NewStructOps, TEXT("DataflowInvalidNode"), &Z_Registration_Info_UScriptStruct_DataflowInvalidNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDataflowInvalidNode), 2912868854U) },
		{ FDataflowExecutionNode::StaticStruct, Z_Construct_UScriptStruct_FDataflowExecutionNode_Statics::NewStructOps, TEXT("DataflowExecutionNode"), &Z_Registration_Info_UScriptStruct_DataflowExecutionNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDataflowExecutionNode), 1599014455U) },
		{ FDataflowSimulationTime::StaticStruct, Z_Construct_UScriptStruct_FDataflowSimulationTime_Statics::NewStructOps, TEXT("DataflowSimulationTime"), &Z_Registration_Info_UScriptStruct_DataflowSimulationTime, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDataflowSimulationTime), 1631315179U) },
		{ FGetSimulationTimeDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FGetSimulationTimeDataflowNode_Statics::NewStructOps, TEXT("GetSimulationTimeDataflowNode"), &Z_Registration_Info_UScriptStruct_GetSimulationTimeDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGetSimulationTimeDataflowNode), 1906838102U) },
		{ FGetPhysicsSolversDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FGetPhysicsSolversDataflowNode_Statics::NewStructOps, TEXT("GetPhysicsSolversDataflowNode"), &Z_Registration_Info_UScriptStruct_GetPhysicsSolversDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGetPhysicsSolversDataflowNode), 1068606365U) },
		{ FAdvancePhysicsSolversDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FAdvancePhysicsSolversDataflowNode_Statics::NewStructOps, TEXT("AdvancePhysicsSolversDataflowNode"), &Z_Registration_Info_UScriptStruct_AdvancePhysicsSolversDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAdvancePhysicsSolversDataflowNode), 81005743U) },
		{ FFilterSimulationProxiesDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FFilterSimulationProxiesDataflowNode_Statics::NewStructOps, TEXT("FilterSimulationProxiesDataflowNode"), &Z_Registration_Info_UScriptStruct_FilterSimulationProxiesDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFilterSimulationProxiesDataflowNode), 3371487601U) },
		{ FSimulationProxiesTerminalDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FSimulationProxiesTerminalDataflowNode_Statics::NewStructOps, TEXT("SimulationProxiesTerminalDataflowNode"), &Z_Registration_Info_UScriptStruct_SimulationProxiesTerminalDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSimulationProxiesTerminalDataflowNode), 4153814435U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Simulation_Public_Dataflow_DataflowSimulationNodes_h_1667345854(TEXT("/Script/DataflowSimulation"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Simulation_Public_Dataflow_DataflowSimulationNodes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Simulation_Public_Dataflow_DataflowSimulationNodes_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
