// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Import/Public/Scene/InterchangeLevelInstanceActorFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterchangeLevelInstanceActorFactory() {}

// Begin Cross Module References
INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UInterchangeActorFactory();
INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UInterchangeLevelInstanceActorFactory();
INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UInterchangeLevelInstanceActorFactory_NoRegister();
UPackage* Z_Construct_UPackage__Script_InterchangeImport();
// End Cross Module References

// Begin Class UInterchangeLevelInstanceActorFactory
void UInterchangeLevelInstanceActorFactory::StaticRegisterNativesUInterchangeLevelInstanceActorFactory()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeLevelInstanceActorFactory);
UClass* Z_Construct_UClass_UInterchangeLevelInstanceActorFactory_NoRegister()
{
	return UInterchangeLevelInstanceActorFactory::StaticClass();
}
struct Z_Construct_UClass_UInterchangeLevelInstanceActorFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Scene/InterchangeLevelInstanceActorFactory.h" },
		{ "ModuleRelativePath", "Public/Scene/InterchangeLevelInstanceActorFactory.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeLevelInstanceActorFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInterchangeLevelInstanceActorFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterchangeActorFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_InterchangeImport,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeLevelInstanceActorFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeLevelInstanceActorFactory_Statics::ClassParams = {
	&UInterchangeLevelInstanceActorFactory::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeLevelInstanceActorFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UInterchangeLevelInstanceActorFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInterchangeLevelInstanceActorFactory()
{
	if (!Z_Registration_Info_UClass_UInterchangeLevelInstanceActorFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeLevelInstanceActorFactory.OuterSingleton, Z_Construct_UClass_UInterchangeLevelInstanceActorFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInterchangeLevelInstanceActorFactory.OuterSingleton;
}
template<> INTERCHANGEIMPORT_API UClass* StaticClass<UInterchangeLevelInstanceActorFactory>()
{
	return UInterchangeLevelInstanceActorFactory::StaticClass();
}
UInterchangeLevelInstanceActorFactory::UInterchangeLevelInstanceActorFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeLevelInstanceActorFactory);
UInterchangeLevelInstanceActorFactory::~UInterchangeLevelInstanceActorFactory() {}
// End Class UInterchangeLevelInstanceActorFactory

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Scene_InterchangeLevelInstanceActorFactory_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInterchangeLevelInstanceActorFactory, UInterchangeLevelInstanceActorFactory::StaticClass, TEXT("UInterchangeLevelInstanceActorFactory"), &Z_Registration_Info_UClass_UInterchangeLevelInstanceActorFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeLevelInstanceActorFactory), 3805675388U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Scene_InterchangeLevelInstanceActorFactory_h_2508127626(TEXT("/Script/InterchangeImport"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Scene_InterchangeLevelInstanceActorFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Scene_InterchangeLevelInstanceActorFactory_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
