// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Import/Public/Scene/InterchangeLevelFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterchangeLevelFactory() {}

// Begin Cross Module References
INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangeFactoryBase();
INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UInterchangeLevelFactory();
INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UInterchangeLevelFactory_NoRegister();
UPackage* Z_Construct_UPackage__Script_InterchangeImport();
// End Cross Module References

// Begin Class UInterchangeLevelFactory
void UInterchangeLevelFactory::StaticRegisterNativesUInterchangeLevelFactory()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeLevelFactory);
UClass* Z_Construct_UClass_UInterchangeLevelFactory_NoRegister()
{
	return UInterchangeLevelFactory::StaticClass();
}
struct Z_Construct_UClass_UInterchangeLevelFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DevelopmentStatus", "Experimental" },
		{ "IncludePath", "Scene/InterchangeLevelFactory.h" },
		{ "ModuleRelativePath", "Public/Scene/InterchangeLevelFactory.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeLevelFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInterchangeLevelFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterchangeFactoryBase,
	(UObject* (*)())Z_Construct_UPackage__Script_InterchangeImport,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeLevelFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeLevelFactory_Statics::ClassParams = {
	&UInterchangeLevelFactory::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeLevelFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UInterchangeLevelFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInterchangeLevelFactory()
{
	if (!Z_Registration_Info_UClass_UInterchangeLevelFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeLevelFactory.OuterSingleton, Z_Construct_UClass_UInterchangeLevelFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInterchangeLevelFactory.OuterSingleton;
}
template<> INTERCHANGEIMPORT_API UClass* StaticClass<UInterchangeLevelFactory>()
{
	return UInterchangeLevelFactory::StaticClass();
}
UInterchangeLevelFactory::UInterchangeLevelFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeLevelFactory);
UInterchangeLevelFactory::~UInterchangeLevelFactory() {}
// End Class UInterchangeLevelFactory

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Scene_InterchangeLevelFactory_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInterchangeLevelFactory, UInterchangeLevelFactory::StaticClass, TEXT("UInterchangeLevelFactory"), &Z_Registration_Info_UClass_UInterchangeLevelFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeLevelFactory), 3520537343U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Scene_InterchangeLevelFactory_h_1509624096(TEXT("/Script/InterchangeImport"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Scene_InterchangeLevelFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Scene_InterchangeLevelFactory_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
