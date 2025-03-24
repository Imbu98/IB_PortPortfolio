// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Experimental/Dataflow/Simulation/Public/Dataflow/Interfaces/DataflowInterfaceGeometryCachable.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDataflowInterfaceGeometryCachable() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
DATAFLOWSIMULATION_API UClass* Z_Construct_UClass_UDataflowGeometryCachable();
DATAFLOWSIMULATION_API UClass* Z_Construct_UClass_UDataflowGeometryCachable_NoRegister();
UPackage* Z_Construct_UPackage__Script_DataflowSimulation();
// End Cross Module References

// Begin Interface UDataflowGeometryCachable
void UDataflowGeometryCachable::StaticRegisterNativesUDataflowGeometryCachable()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDataflowGeometryCachable);
UClass* Z_Construct_UClass_UDataflowGeometryCachable_NoRegister()
{
	return UDataflowGeometryCachable::StaticClass();
}
struct Z_Construct_UClass_UDataflowGeometryCachable_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Public/Dataflow/Interfaces/DataflowInterfaceGeometryCachable.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IDataflowGeometryCachable>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDataflowGeometryCachable_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_DataflowSimulation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDataflowGeometryCachable_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDataflowGeometryCachable_Statics::ClassParams = {
	&UDataflowGeometryCachable::StaticClass,
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
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDataflowGeometryCachable_Statics::Class_MetaDataParams), Z_Construct_UClass_UDataflowGeometryCachable_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDataflowGeometryCachable()
{
	if (!Z_Registration_Info_UClass_UDataflowGeometryCachable.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDataflowGeometryCachable.OuterSingleton, Z_Construct_UClass_UDataflowGeometryCachable_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDataflowGeometryCachable.OuterSingleton;
}
template<> DATAFLOWSIMULATION_API UClass* StaticClass<UDataflowGeometryCachable>()
{
	return UDataflowGeometryCachable::StaticClass();
}
UDataflowGeometryCachable::UDataflowGeometryCachable(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDataflowGeometryCachable);
UDataflowGeometryCachable::~UDataflowGeometryCachable() {}
// End Interface UDataflowGeometryCachable

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Simulation_Public_Dataflow_Interfaces_DataflowInterfaceGeometryCachable_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDataflowGeometryCachable, UDataflowGeometryCachable::StaticClass, TEXT("UDataflowGeometryCachable"), &Z_Registration_Info_UClass_UDataflowGeometryCachable, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDataflowGeometryCachable), 3126551889U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Simulation_Public_Dataflow_Interfaces_DataflowInterfaceGeometryCachable_h_3016359300(TEXT("/Script/DataflowSimulation"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Simulation_Public_Dataflow_Interfaces_DataflowInterfaceGeometryCachable_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Simulation_Public_Dataflow_Interfaces_DataflowInterfaceGeometryCachable_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
