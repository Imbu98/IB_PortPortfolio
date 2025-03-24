// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Experimental/Dataflow/Simulation/Public/Dataflow/Interfaces/DataflowPhysicsObject.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDataflowPhysicsObject() {}

// Begin Cross Module References
DATAFLOWSIMULATION_API UClass* Z_Construct_UClass_UDataflowPhysicsObjectInterface();
DATAFLOWSIMULATION_API UClass* Z_Construct_UClass_UDataflowPhysicsObjectInterface_NoRegister();
DATAFLOWSIMULATION_API UClass* Z_Construct_UClass_UDataflowSimulationInterface();
DATAFLOWSIMULATION_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowPhysicsObjectProxy();
DATAFLOWSIMULATION_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowSimulationProxy();
UPackage* Z_Construct_UPackage__Script_DataflowSimulation();
// End Cross Module References

// Begin ScriptStruct FDataflowPhysicsObjectProxy
static_assert(std::is_polymorphic<FDataflowPhysicsObjectProxy>() == std::is_polymorphic<FDataflowSimulationProxy>(), "USTRUCT FDataflowPhysicsObjectProxy cannot be polymorphic unless super FDataflowSimulationProxy is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DataflowPhysicsObjectProxy;
class UScriptStruct* FDataflowPhysicsObjectProxy::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DataflowPhysicsObjectProxy.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DataflowPhysicsObjectProxy.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDataflowPhysicsObjectProxy, (UObject*)Z_Construct_UPackage__Script_DataflowSimulation(), TEXT("DataflowPhysicsObjectProxy"));
	}
	return Z_Registration_Info_UScriptStruct_DataflowPhysicsObjectProxy.OuterSingleton;
}
template<> DATAFLOWSIMULATION_API UScriptStruct* StaticStruct<FDataflowPhysicsObjectProxy>()
{
	return FDataflowPhysicsObjectProxy::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDataflowPhysicsObjectProxy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Dataflow physics object proxy (PT)\n */" },
		{ "ModuleRelativePath", "Public/Dataflow/Interfaces/DataflowPhysicsObject.h" },
		{ "ToolTip", "Dataflow physics object proxy (PT)" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDataflowPhysicsObjectProxy>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDataflowPhysicsObjectProxy_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DataflowSimulation,
	Z_Construct_UScriptStruct_FDataflowSimulationProxy,
	&NewStructOps,
	"DataflowPhysicsObjectProxy",
	nullptr,
	0,
	sizeof(FDataflowPhysicsObjectProxy),
	alignof(FDataflowPhysicsObjectProxy),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataflowPhysicsObjectProxy_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDataflowPhysicsObjectProxy_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDataflowPhysicsObjectProxy()
{
	if (!Z_Registration_Info_UScriptStruct_DataflowPhysicsObjectProxy.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DataflowPhysicsObjectProxy.InnerSingleton, Z_Construct_UScriptStruct_FDataflowPhysicsObjectProxy_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DataflowPhysicsObjectProxy.InnerSingleton;
}
// End ScriptStruct FDataflowPhysicsObjectProxy

// Begin Interface UDataflowPhysicsObjectInterface
void UDataflowPhysicsObjectInterface::StaticRegisterNativesUDataflowPhysicsObjectInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDataflowPhysicsObjectInterface);
UClass* Z_Construct_UClass_UDataflowPhysicsObjectInterface_NoRegister()
{
	return UDataflowPhysicsObjectInterface::StaticClass();
}
struct Z_Construct_UClass_UDataflowPhysicsObjectInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Dataflow/Interfaces/DataflowPhysicsObject.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IDataflowPhysicsObjectInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDataflowPhysicsObjectInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataflowSimulationInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_DataflowSimulation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDataflowPhysicsObjectInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDataflowPhysicsObjectInterface_Statics::ClassParams = {
	&UDataflowPhysicsObjectInterface::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDataflowPhysicsObjectInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UDataflowPhysicsObjectInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDataflowPhysicsObjectInterface()
{
	if (!Z_Registration_Info_UClass_UDataflowPhysicsObjectInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDataflowPhysicsObjectInterface.OuterSingleton, Z_Construct_UClass_UDataflowPhysicsObjectInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDataflowPhysicsObjectInterface.OuterSingleton;
}
template<> DATAFLOWSIMULATION_API UClass* StaticClass<UDataflowPhysicsObjectInterface>()
{
	return UDataflowPhysicsObjectInterface::StaticClass();
}
UDataflowPhysicsObjectInterface::UDataflowPhysicsObjectInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDataflowPhysicsObjectInterface);
UDataflowPhysicsObjectInterface::~UDataflowPhysicsObjectInterface() {}
// End Interface UDataflowPhysicsObjectInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Simulation_Public_Dataflow_Interfaces_DataflowPhysicsObject_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FDataflowPhysicsObjectProxy::StaticStruct, Z_Construct_UScriptStruct_FDataflowPhysicsObjectProxy_Statics::NewStructOps, TEXT("DataflowPhysicsObjectProxy"), &Z_Registration_Info_UScriptStruct_DataflowPhysicsObjectProxy, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDataflowPhysicsObjectProxy), 3522158178U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDataflowPhysicsObjectInterface, UDataflowPhysicsObjectInterface::StaticClass, TEXT("UDataflowPhysicsObjectInterface"), &Z_Registration_Info_UClass_UDataflowPhysicsObjectInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDataflowPhysicsObjectInterface), 3008228481U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Simulation_Public_Dataflow_Interfaces_DataflowPhysicsObject_h_3959914767(TEXT("/Script/DataflowSimulation"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Simulation_Public_Dataflow_Interfaces_DataflowPhysicsObject_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Simulation_Public_Dataflow_Interfaces_DataflowPhysicsObject_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Simulation_Public_Dataflow_Interfaces_DataflowPhysicsObject_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Simulation_Public_Dataflow_Interfaces_DataflowPhysicsObject_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
