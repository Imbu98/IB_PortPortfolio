// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Experimental/Dataflow/Simulation/Public/Dataflow/DataflowSimulationInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDataflowSimulationInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
DATAFLOWENGINE_API UClass* Z_Construct_UClass_UDataflow_NoRegister();
DATAFLOWSIMULATION_API UClass* Z_Construct_UClass_UDataflowSimulationInterface();
DATAFLOWSIMULATION_API UClass* Z_Construct_UClass_UDataflowSimulationInterface_NoRegister();
DATAFLOWSIMULATION_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowSimulationAsset();
UPackage* Z_Construct_UPackage__Script_DataflowSimulation();
// End Cross Module References

// Begin ScriptStruct FDataflowSimulationAsset
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DataflowSimulationAsset;
class UScriptStruct* FDataflowSimulationAsset::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DataflowSimulationAsset.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DataflowSimulationAsset.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDataflowSimulationAsset, (UObject*)Z_Construct_UPackage__Script_DataflowSimulation(), TEXT("DataflowSimulationAsset"));
	}
	return Z_Registration_Info_UScriptStruct_DataflowSimulationAsset.OuterSingleton;
}
template<> DATAFLOWSIMULATION_API UScriptStruct* StaticStruct<FDataflowSimulationAsset>()
{
	return FDataflowSimulationAsset::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDataflowSimulationAsset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Dataflow simulation asset (should be in the interface children)\n */" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowSimulationInterface.h" },
		{ "ToolTip", "Dataflow simulation asset (should be in the interface children)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataflowAsset_MetaData[] = {
		{ "Category", "Physics" },
		{ "Comment", "/* Simulation dataflow asset used to advance in time on Pt */" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowSimulationInterface.h" },
		{ "ToolTip", "Simulation dataflow asset used to advance in time on Pt" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SimulationGroups_MetaData[] = {
		{ "Category", "Physics" },
		{ "Comment", "/* Simulation groups used to filter within the simulation nodes*/" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowSimulationInterface.h" },
		{ "ToolTip", "Simulation groups used to filter within the simulation nodes" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DataflowAsset;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SimulationGroups_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_SimulationGroups;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDataflowSimulationAsset>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDataflowSimulationAsset_Statics::NewProp_DataflowAsset = { "DataflowAsset", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDataflowSimulationAsset, DataflowAsset), Z_Construct_UClass_UDataflow_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataflowAsset_MetaData), NewProp_DataflowAsset_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDataflowSimulationAsset_Statics::NewProp_SimulationGroups_ElementProp = { "SimulationGroups", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FDataflowSimulationAsset_Statics::NewProp_SimulationGroups = { "SimulationGroups", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDataflowSimulationAsset, SimulationGroups), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SimulationGroups_MetaData), NewProp_SimulationGroups_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDataflowSimulationAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataflowSimulationAsset_Statics::NewProp_DataflowAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataflowSimulationAsset_Statics::NewProp_SimulationGroups_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataflowSimulationAsset_Statics::NewProp_SimulationGroups,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataflowSimulationAsset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDataflowSimulationAsset_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DataflowSimulation,
	nullptr,
	&NewStructOps,
	"DataflowSimulationAsset",
	Z_Construct_UScriptStruct_FDataflowSimulationAsset_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataflowSimulationAsset_Statics::PropPointers),
	sizeof(FDataflowSimulationAsset),
	alignof(FDataflowSimulationAsset),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataflowSimulationAsset_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDataflowSimulationAsset_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDataflowSimulationAsset()
{
	if (!Z_Registration_Info_UScriptStruct_DataflowSimulationAsset.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DataflowSimulationAsset.InnerSingleton, Z_Construct_UScriptStruct_FDataflowSimulationAsset_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DataflowSimulationAsset.InnerSingleton;
}
// End ScriptStruct FDataflowSimulationAsset

// Begin Interface UDataflowSimulationInterface
void UDataflowSimulationInterface::StaticRegisterNativesUDataflowSimulationInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDataflowSimulationInterface);
UClass* Z_Construct_UClass_UDataflowSimulationInterface_NoRegister()
{
	return UDataflowSimulationInterface::StaticClass();
}
struct Z_Construct_UClass_UDataflowSimulationInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Dataflow/DataflowSimulationInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IDataflowSimulationInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDataflowSimulationInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_DataflowSimulation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDataflowSimulationInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDataflowSimulationInterface_Statics::ClassParams = {
	&UDataflowSimulationInterface::StaticClass,
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
	0x001040A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDataflowSimulationInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UDataflowSimulationInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDataflowSimulationInterface()
{
	if (!Z_Registration_Info_UClass_UDataflowSimulationInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDataflowSimulationInterface.OuterSingleton, Z_Construct_UClass_UDataflowSimulationInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDataflowSimulationInterface.OuterSingleton;
}
template<> DATAFLOWSIMULATION_API UClass* StaticClass<UDataflowSimulationInterface>()
{
	return UDataflowSimulationInterface::StaticClass();
}
UDataflowSimulationInterface::UDataflowSimulationInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDataflowSimulationInterface);
UDataflowSimulationInterface::~UDataflowSimulationInterface() {}
// End Interface UDataflowSimulationInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Simulation_Public_Dataflow_DataflowSimulationInterface_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FDataflowSimulationAsset::StaticStruct, Z_Construct_UScriptStruct_FDataflowSimulationAsset_Statics::NewStructOps, TEXT("DataflowSimulationAsset"), &Z_Registration_Info_UScriptStruct_DataflowSimulationAsset, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDataflowSimulationAsset), 3784929963U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDataflowSimulationInterface, UDataflowSimulationInterface::StaticClass, TEXT("UDataflowSimulationInterface"), &Z_Registration_Info_UClass_UDataflowSimulationInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDataflowSimulationInterface), 1499316398U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Simulation_Public_Dataflow_DataflowSimulationInterface_h_2810365880(TEXT("/Script/DataflowSimulation"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Simulation_Public_Dataflow_DataflowSimulationInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Simulation_Public_Dataflow_DataflowSimulationInterface_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Simulation_Public_Dataflow_DataflowSimulationInterface_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Simulation_Public_Dataflow_DataflowSimulationInterface_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
