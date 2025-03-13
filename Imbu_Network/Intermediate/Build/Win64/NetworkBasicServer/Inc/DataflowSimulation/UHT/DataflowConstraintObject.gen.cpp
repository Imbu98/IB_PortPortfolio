// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Experimental/Dataflow/Simulation/Public/Dataflow/Interfaces/DataflowConstraintObject.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDataflowConstraintObject() {}

// Begin Cross Module References
DATAFLOWSIMULATION_API UClass* Z_Construct_UClass_UDataflowConstraintObjectInterface();
DATAFLOWSIMULATION_API UClass* Z_Construct_UClass_UDataflowConstraintObjectInterface_NoRegister();
DATAFLOWSIMULATION_API UClass* Z_Construct_UClass_UDataflowSimulationInterface();
DATAFLOWSIMULATION_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowConstraintObjectProxy();
DATAFLOWSIMULATION_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowSimulationProxy();
UPackage* Z_Construct_UPackage__Script_DataflowSimulation();
// End Cross Module References

// Begin ScriptStruct FDataflowConstraintObjectProxy
static_assert(std::is_polymorphic<FDataflowConstraintObjectProxy>() == std::is_polymorphic<FDataflowSimulationProxy>(), "USTRUCT FDataflowConstraintObjectProxy cannot be polymorphic unless super FDataflowSimulationProxy is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DataflowConstraintObjectProxy;
class UScriptStruct* FDataflowConstraintObjectProxy::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DataflowConstraintObjectProxy.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DataflowConstraintObjectProxy.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDataflowConstraintObjectProxy, (UObject*)Z_Construct_UPackage__Script_DataflowSimulation(), TEXT("DataflowConstraintObjectProxy"));
	}
	return Z_Registration_Info_UScriptStruct_DataflowConstraintObjectProxy.OuterSingleton;
}
template<> DATAFLOWSIMULATION_API UScriptStruct* StaticStruct<FDataflowConstraintObjectProxy>()
{
	return FDataflowConstraintObjectProxy::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDataflowConstraintObjectProxy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Dataflow collision object proxy (PT)\n */" },
		{ "ModuleRelativePath", "Public/Dataflow/Interfaces/DataflowConstraintObject.h" },
		{ "ToolTip", "Dataflow collision object proxy (PT)" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDataflowConstraintObjectProxy>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDataflowConstraintObjectProxy_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DataflowSimulation,
	Z_Construct_UScriptStruct_FDataflowSimulationProxy,
	&NewStructOps,
	"DataflowConstraintObjectProxy",
	nullptr,
	0,
	sizeof(FDataflowConstraintObjectProxy),
	alignof(FDataflowConstraintObjectProxy),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataflowConstraintObjectProxy_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDataflowConstraintObjectProxy_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDataflowConstraintObjectProxy()
{
	if (!Z_Registration_Info_UScriptStruct_DataflowConstraintObjectProxy.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DataflowConstraintObjectProxy.InnerSingleton, Z_Construct_UScriptStruct_FDataflowConstraintObjectProxy_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DataflowConstraintObjectProxy.InnerSingleton;
}
// End ScriptStruct FDataflowConstraintObjectProxy

// Begin Interface UDataflowConstraintObjectInterface
void UDataflowConstraintObjectInterface::StaticRegisterNativesUDataflowConstraintObjectInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDataflowConstraintObjectInterface);
UClass* Z_Construct_UClass_UDataflowConstraintObjectInterface_NoRegister()
{
	return UDataflowConstraintObjectInterface::StaticClass();
}
struct Z_Construct_UClass_UDataflowConstraintObjectInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Dataflow/Interfaces/DataflowConstraintObject.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IDataflowConstraintObjectInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDataflowConstraintObjectInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataflowSimulationInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_DataflowSimulation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDataflowConstraintObjectInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDataflowConstraintObjectInterface_Statics::ClassParams = {
	&UDataflowConstraintObjectInterface::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDataflowConstraintObjectInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UDataflowConstraintObjectInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDataflowConstraintObjectInterface()
{
	if (!Z_Registration_Info_UClass_UDataflowConstraintObjectInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDataflowConstraintObjectInterface.OuterSingleton, Z_Construct_UClass_UDataflowConstraintObjectInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDataflowConstraintObjectInterface.OuterSingleton;
}
template<> DATAFLOWSIMULATION_API UClass* StaticClass<UDataflowConstraintObjectInterface>()
{
	return UDataflowConstraintObjectInterface::StaticClass();
}
UDataflowConstraintObjectInterface::UDataflowConstraintObjectInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDataflowConstraintObjectInterface);
UDataflowConstraintObjectInterface::~UDataflowConstraintObjectInterface() {}
// End Interface UDataflowConstraintObjectInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Simulation_Public_Dataflow_Interfaces_DataflowConstraintObject_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FDataflowConstraintObjectProxy::StaticStruct, Z_Construct_UScriptStruct_FDataflowConstraintObjectProxy_Statics::NewStructOps, TEXT("DataflowConstraintObjectProxy"), &Z_Registration_Info_UScriptStruct_DataflowConstraintObjectProxy, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDataflowConstraintObjectProxy), 491505606U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDataflowConstraintObjectInterface, UDataflowConstraintObjectInterface::StaticClass, TEXT("UDataflowConstraintObjectInterface"), &Z_Registration_Info_UClass_UDataflowConstraintObjectInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDataflowConstraintObjectInterface), 1725662324U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Simulation_Public_Dataflow_Interfaces_DataflowConstraintObject_h_201027396(TEXT("/Script/DataflowSimulation"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Simulation_Public_Dataflow_Interfaces_DataflowConstraintObject_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Simulation_Public_Dataflow_Interfaces_DataflowConstraintObject_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Simulation_Public_Dataflow_Interfaces_DataflowConstraintObject_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Simulation_Public_Dataflow_Interfaces_DataflowConstraintObject_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
