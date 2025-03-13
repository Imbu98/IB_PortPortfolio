// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Experimental/Dataflow/Simulation/Public/Dataflow/DataflowSimulationProxy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDataflowSimulationProxy() {}

// Begin Cross Module References
DATAFLOWSIMULATION_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowSimulationProxy();
UPackage* Z_Construct_UPackage__Script_DataflowSimulation();
// End Cross Module References

// Begin ScriptStruct FDataflowSimulationProxy
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DataflowSimulationProxy;
class UScriptStruct* FDataflowSimulationProxy::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DataflowSimulationProxy.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DataflowSimulationProxy.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDataflowSimulationProxy, (UObject*)Z_Construct_UPackage__Script_DataflowSimulation(), TEXT("DataflowSimulationProxy"));
	}
	return Z_Registration_Info_UScriptStruct_DataflowSimulationProxy.OuterSingleton;
}
template<> DATAFLOWSIMULATION_API UScriptStruct* StaticStruct<FDataflowSimulationProxy>()
{
	return FDataflowSimulationProxy::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDataflowSimulationProxy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Dataflow simulation proxy used for simulation (PT)\n */" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowSimulationProxy.h" },
		{ "ToolTip", "Dataflow simulation proxy used for simulation (PT)" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDataflowSimulationProxy>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDataflowSimulationProxy_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DataflowSimulation,
	nullptr,
	&NewStructOps,
	"DataflowSimulationProxy",
	nullptr,
	0,
	sizeof(FDataflowSimulationProxy),
	alignof(FDataflowSimulationProxy),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataflowSimulationProxy_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDataflowSimulationProxy_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDataflowSimulationProxy()
{
	if (!Z_Registration_Info_UScriptStruct_DataflowSimulationProxy.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DataflowSimulationProxy.InnerSingleton, Z_Construct_UScriptStruct_FDataflowSimulationProxy_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DataflowSimulationProxy.InnerSingleton;
}
// End ScriptStruct FDataflowSimulationProxy

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Simulation_Public_Dataflow_DataflowSimulationProxy_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FDataflowSimulationProxy::StaticStruct, Z_Construct_UScriptStruct_FDataflowSimulationProxy_Statics::NewStructOps, TEXT("DataflowSimulationProxy"), &Z_Registration_Info_UScriptStruct_DataflowSimulationProxy, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDataflowSimulationProxy), 1479008680U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Simulation_Public_Dataflow_DataflowSimulationProxy_h_3101786275(TEXT("/Script/DataflowSimulation"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Simulation_Public_Dataflow_DataflowSimulationProxy_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Simulation_Public_Dataflow_DataflowSimulationProxy_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
