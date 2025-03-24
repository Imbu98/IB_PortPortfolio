// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Experimental/Dataflow/Simulation/Public/Dataflow/Interfaces/DataflowPhysicsSolver.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDataflowPhysicsSolver() {}

// Begin Cross Module References
DATAFLOWSIMULATION_API UClass* Z_Construct_UClass_UDataflowPhysicsSolverInterface();
DATAFLOWSIMULATION_API UClass* Z_Construct_UClass_UDataflowPhysicsSolverInterface_NoRegister();
DATAFLOWSIMULATION_API UClass* Z_Construct_UClass_UDataflowSimulationInterface();
DATAFLOWSIMULATION_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowPhysicsSolverProxy();
DATAFLOWSIMULATION_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowSimulationProxy();
UPackage* Z_Construct_UPackage__Script_DataflowSimulation();
// End Cross Module References

// Begin ScriptStruct FDataflowPhysicsSolverProxy
static_assert(std::is_polymorphic<FDataflowPhysicsSolverProxy>() == std::is_polymorphic<FDataflowSimulationProxy>(), "USTRUCT FDataflowPhysicsSolverProxy cannot be polymorphic unless super FDataflowSimulationProxy is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DataflowPhysicsSolverProxy;
class UScriptStruct* FDataflowPhysicsSolverProxy::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DataflowPhysicsSolverProxy.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DataflowPhysicsSolverProxy.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDataflowPhysicsSolverProxy, (UObject*)Z_Construct_UPackage__Script_DataflowSimulation(), TEXT("DataflowPhysicsSolverProxy"));
	}
	return Z_Registration_Info_UScriptStruct_DataflowPhysicsSolverProxy.OuterSingleton;
}
template<> DATAFLOWSIMULATION_API UScriptStruct* StaticStruct<FDataflowPhysicsSolverProxy>()
{
	return FDataflowPhysicsSolverProxy::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDataflowPhysicsSolverProxy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Dataflow simulation physics solver proxy (PT)\n */" },
		{ "ModuleRelativePath", "Public/Dataflow/Interfaces/DataflowPhysicsSolver.h" },
		{ "ToolTip", "Dataflow simulation physics solver proxy (PT)" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDataflowPhysicsSolverProxy>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDataflowPhysicsSolverProxy_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DataflowSimulation,
	Z_Construct_UScriptStruct_FDataflowSimulationProxy,
	&NewStructOps,
	"DataflowPhysicsSolverProxy",
	nullptr,
	0,
	sizeof(FDataflowPhysicsSolverProxy),
	alignof(FDataflowPhysicsSolverProxy),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataflowPhysicsSolverProxy_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDataflowPhysicsSolverProxy_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDataflowPhysicsSolverProxy()
{
	if (!Z_Registration_Info_UScriptStruct_DataflowPhysicsSolverProxy.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DataflowPhysicsSolverProxy.InnerSingleton, Z_Construct_UScriptStruct_FDataflowPhysicsSolverProxy_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DataflowPhysicsSolverProxy.InnerSingleton;
}
// End ScriptStruct FDataflowPhysicsSolverProxy

// Begin Interface UDataflowPhysicsSolverInterface
void UDataflowPhysicsSolverInterface::StaticRegisterNativesUDataflowPhysicsSolverInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDataflowPhysicsSolverInterface);
UClass* Z_Construct_UClass_UDataflowPhysicsSolverInterface_NoRegister()
{
	return UDataflowPhysicsSolverInterface::StaticClass();
}
struct Z_Construct_UClass_UDataflowPhysicsSolverInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Dataflow/Interfaces/DataflowPhysicsSolver.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IDataflowPhysicsSolverInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDataflowPhysicsSolverInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataflowSimulationInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_DataflowSimulation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDataflowPhysicsSolverInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDataflowPhysicsSolverInterface_Statics::ClassParams = {
	&UDataflowPhysicsSolverInterface::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDataflowPhysicsSolverInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UDataflowPhysicsSolverInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDataflowPhysicsSolverInterface()
{
	if (!Z_Registration_Info_UClass_UDataflowPhysicsSolverInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDataflowPhysicsSolverInterface.OuterSingleton, Z_Construct_UClass_UDataflowPhysicsSolverInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDataflowPhysicsSolverInterface.OuterSingleton;
}
template<> DATAFLOWSIMULATION_API UClass* StaticClass<UDataflowPhysicsSolverInterface>()
{
	return UDataflowPhysicsSolverInterface::StaticClass();
}
UDataflowPhysicsSolverInterface::UDataflowPhysicsSolverInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDataflowPhysicsSolverInterface);
UDataflowPhysicsSolverInterface::~UDataflowPhysicsSolverInterface() {}
// End Interface UDataflowPhysicsSolverInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Simulation_Public_Dataflow_Interfaces_DataflowPhysicsSolver_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FDataflowPhysicsSolverProxy::StaticStruct, Z_Construct_UScriptStruct_FDataflowPhysicsSolverProxy_Statics::NewStructOps, TEXT("DataflowPhysicsSolverProxy"), &Z_Registration_Info_UScriptStruct_DataflowPhysicsSolverProxy, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDataflowPhysicsSolverProxy), 1824721316U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDataflowPhysicsSolverInterface, UDataflowPhysicsSolverInterface::StaticClass, TEXT("UDataflowPhysicsSolverInterface"), &Z_Registration_Info_UClass_UDataflowPhysicsSolverInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDataflowPhysicsSolverInterface), 1531963491U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Simulation_Public_Dataflow_Interfaces_DataflowPhysicsSolver_h_188081400(TEXT("/Script/DataflowSimulation"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Simulation_Public_Dataflow_Interfaces_DataflowPhysicsSolver_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Simulation_Public_Dataflow_Interfaces_DataflowPhysicsSolver_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Simulation_Public_Dataflow_Interfaces_DataflowPhysicsSolver_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Simulation_Public_Dataflow_Interfaces_DataflowPhysicsSolver_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
