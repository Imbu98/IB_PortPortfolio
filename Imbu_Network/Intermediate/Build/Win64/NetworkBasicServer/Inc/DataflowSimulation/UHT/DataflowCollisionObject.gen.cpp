// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Experimental/Dataflow/Simulation/Public/Dataflow/Interfaces/DataflowCollisionObject.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDataflowCollisionObject() {}

// Begin Cross Module References
DATAFLOWSIMULATION_API UClass* Z_Construct_UClass_UDataflowCollisionObjectInterface();
DATAFLOWSIMULATION_API UClass* Z_Construct_UClass_UDataflowCollisionObjectInterface_NoRegister();
DATAFLOWSIMULATION_API UClass* Z_Construct_UClass_UDataflowSimulationInterface();
DATAFLOWSIMULATION_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowCollisionObjectProxy();
DATAFLOWSIMULATION_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowSimulationProxy();
UPackage* Z_Construct_UPackage__Script_DataflowSimulation();
// End Cross Module References

// Begin ScriptStruct FDataflowCollisionObjectProxy
static_assert(std::is_polymorphic<FDataflowCollisionObjectProxy>() == std::is_polymorphic<FDataflowSimulationProxy>(), "USTRUCT FDataflowCollisionObjectProxy cannot be polymorphic unless super FDataflowSimulationProxy is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DataflowCollisionObjectProxy;
class UScriptStruct* FDataflowCollisionObjectProxy::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DataflowCollisionObjectProxy.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DataflowCollisionObjectProxy.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDataflowCollisionObjectProxy, (UObject*)Z_Construct_UPackage__Script_DataflowSimulation(), TEXT("DataflowCollisionObjectProxy"));
	}
	return Z_Registration_Info_UScriptStruct_DataflowCollisionObjectProxy.OuterSingleton;
}
template<> DATAFLOWSIMULATION_API UScriptStruct* StaticStruct<FDataflowCollisionObjectProxy>()
{
	return FDataflowCollisionObjectProxy::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDataflowCollisionObjectProxy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Dataflow collision object proxy (PT)\n */" },
		{ "ModuleRelativePath", "Public/Dataflow/Interfaces/DataflowCollisionObject.h" },
		{ "ToolTip", "Dataflow collision object proxy (PT)" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDataflowCollisionObjectProxy>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDataflowCollisionObjectProxy_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DataflowSimulation,
	Z_Construct_UScriptStruct_FDataflowSimulationProxy,
	&NewStructOps,
	"DataflowCollisionObjectProxy",
	nullptr,
	0,
	sizeof(FDataflowCollisionObjectProxy),
	alignof(FDataflowCollisionObjectProxy),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataflowCollisionObjectProxy_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDataflowCollisionObjectProxy_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDataflowCollisionObjectProxy()
{
	if (!Z_Registration_Info_UScriptStruct_DataflowCollisionObjectProxy.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DataflowCollisionObjectProxy.InnerSingleton, Z_Construct_UScriptStruct_FDataflowCollisionObjectProxy_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DataflowCollisionObjectProxy.InnerSingleton;
}
// End ScriptStruct FDataflowCollisionObjectProxy

// Begin Interface UDataflowCollisionObjectInterface
void UDataflowCollisionObjectInterface::StaticRegisterNativesUDataflowCollisionObjectInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDataflowCollisionObjectInterface);
UClass* Z_Construct_UClass_UDataflowCollisionObjectInterface_NoRegister()
{
	return UDataflowCollisionObjectInterface::StaticClass();
}
struct Z_Construct_UClass_UDataflowCollisionObjectInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Dataflow/Interfaces/DataflowCollisionObject.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IDataflowCollisionObjectInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDataflowCollisionObjectInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataflowSimulationInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_DataflowSimulation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDataflowCollisionObjectInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDataflowCollisionObjectInterface_Statics::ClassParams = {
	&UDataflowCollisionObjectInterface::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDataflowCollisionObjectInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UDataflowCollisionObjectInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDataflowCollisionObjectInterface()
{
	if (!Z_Registration_Info_UClass_UDataflowCollisionObjectInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDataflowCollisionObjectInterface.OuterSingleton, Z_Construct_UClass_UDataflowCollisionObjectInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDataflowCollisionObjectInterface.OuterSingleton;
}
template<> DATAFLOWSIMULATION_API UClass* StaticClass<UDataflowCollisionObjectInterface>()
{
	return UDataflowCollisionObjectInterface::StaticClass();
}
UDataflowCollisionObjectInterface::UDataflowCollisionObjectInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDataflowCollisionObjectInterface);
UDataflowCollisionObjectInterface::~UDataflowCollisionObjectInterface() {}
// End Interface UDataflowCollisionObjectInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Simulation_Public_Dataflow_Interfaces_DataflowCollisionObject_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FDataflowCollisionObjectProxy::StaticStruct, Z_Construct_UScriptStruct_FDataflowCollisionObjectProxy_Statics::NewStructOps, TEXT("DataflowCollisionObjectProxy"), &Z_Registration_Info_UScriptStruct_DataflowCollisionObjectProxy, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDataflowCollisionObjectProxy), 708347796U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDataflowCollisionObjectInterface, UDataflowCollisionObjectInterface::StaticClass, TEXT("UDataflowCollisionObjectInterface"), &Z_Registration_Info_UClass_UDataflowCollisionObjectInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDataflowCollisionObjectInterface), 3888175874U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Simulation_Public_Dataflow_Interfaces_DataflowCollisionObject_h_3584788799(TEXT("/Script/DataflowSimulation"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Simulation_Public_Dataflow_Interfaces_DataflowCollisionObject_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Simulation_Public_Dataflow_Interfaces_DataflowCollisionObject_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Simulation_Public_Dataflow_Interfaces_DataflowCollisionObject_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Simulation_Public_Dataflow_Interfaces_DataflowCollisionObject_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
