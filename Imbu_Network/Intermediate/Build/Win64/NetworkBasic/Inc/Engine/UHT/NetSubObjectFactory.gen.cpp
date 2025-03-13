// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/Net/Iris/ReplicationSystem/NetSubObjectFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNetSubObjectFactory() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UNetSubObjectFactory();
ENGINE_API UClass* Z_Construct_UClass_UNetSubObjectFactory_NoRegister();
IRISCORE_API UClass* Z_Construct_UClass_UNetObjectFactory();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UNetSubObjectFactory
void UNetSubObjectFactory::StaticRegisterNativesUNetSubObjectFactory()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNetSubObjectFactory);
UClass* Z_Construct_UClass_UNetSubObjectFactory_NoRegister()
{
	return UNetSubObjectFactory::StaticClass();
}
struct Z_Construct_UClass_UNetSubObjectFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Responsible for creating headers allowing remote factories to spawn replicated actors\n */" },
		{ "IncludePath", "Net/Iris/ReplicationSystem/NetSubObjectFactory.h" },
		{ "ModuleRelativePath", "Public/Net/Iris/ReplicationSystem/NetSubObjectFactory.h" },
		{ "ToolTip", "Responsible for creating headers allowing remote factories to spawn replicated actors" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNetSubObjectFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNetSubObjectFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNetObjectFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNetSubObjectFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNetSubObjectFactory_Statics::ClassParams = {
	&UNetSubObjectFactory::StaticClass,
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
	0x000000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNetSubObjectFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UNetSubObjectFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNetSubObjectFactory()
{
	if (!Z_Registration_Info_UClass_UNetSubObjectFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNetSubObjectFactory.OuterSingleton, Z_Construct_UClass_UNetSubObjectFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNetSubObjectFactory.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UNetSubObjectFactory>()
{
	return UNetSubObjectFactory::StaticClass();
}
UNetSubObjectFactory::UNetSubObjectFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNetSubObjectFactory);
UNetSubObjectFactory::~UNetSubObjectFactory() {}
// End Class UNetSubObjectFactory

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Net_Iris_ReplicationSystem_NetSubObjectFactory_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNetSubObjectFactory, UNetSubObjectFactory::StaticClass, TEXT("UNetSubObjectFactory"), &Z_Registration_Info_UClass_UNetSubObjectFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNetSubObjectFactory), 3587784020U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Net_Iris_ReplicationSystem_NetSubObjectFactory_h_3145305206(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Net_Iris_ReplicationSystem_NetSubObjectFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Net_Iris_ReplicationSystem_NetSubObjectFactory_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
