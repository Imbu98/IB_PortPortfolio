// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LiveLink/Public/LiveLinkMessageBusSourceFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiveLinkMessageBusSourceFactory() {}

// Begin Cross Module References
LIVELINK_API UClass* Z_Construct_UClass_ULiveLinkMessageBusSourceFactory();
LIVELINK_API UClass* Z_Construct_UClass_ULiveLinkMessageBusSourceFactory_NoRegister();
LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkSourceFactory();
UPackage* Z_Construct_UPackage__Script_LiveLink();
// End Cross Module References

// Begin Class ULiveLinkMessageBusSourceFactory
void ULiveLinkMessageBusSourceFactory::StaticRegisterNativesULiveLinkMessageBusSourceFactory()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULiveLinkMessageBusSourceFactory);
UClass* Z_Construct_UClass_ULiveLinkMessageBusSourceFactory_NoRegister()
{
	return ULiveLinkMessageBusSourceFactory::StaticClass();
}
struct Z_Construct_UClass_ULiveLinkMessageBusSourceFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "LiveLinkMessageBusSourceFactory.h" },
		{ "ModuleRelativePath", "Public/LiveLinkMessageBusSourceFactory.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULiveLinkMessageBusSourceFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ULiveLinkMessageBusSourceFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ULiveLinkSourceFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_LiveLink,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkMessageBusSourceFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULiveLinkMessageBusSourceFactory_Statics::ClassParams = {
	&ULiveLinkMessageBusSourceFactory::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkMessageBusSourceFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_ULiveLinkMessageBusSourceFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULiveLinkMessageBusSourceFactory()
{
	if (!Z_Registration_Info_UClass_ULiveLinkMessageBusSourceFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULiveLinkMessageBusSourceFactory.OuterSingleton, Z_Construct_UClass_ULiveLinkMessageBusSourceFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULiveLinkMessageBusSourceFactory.OuterSingleton;
}
template<> LIVELINK_API UClass* StaticClass<ULiveLinkMessageBusSourceFactory>()
{
	return ULiveLinkMessageBusSourceFactory::StaticClass();
}
ULiveLinkMessageBusSourceFactory::ULiveLinkMessageBusSourceFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULiveLinkMessageBusSourceFactory);
ULiveLinkMessageBusSourceFactory::~ULiveLinkMessageBusSourceFactory() {}
// End Class ULiveLinkMessageBusSourceFactory

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkMessageBusSourceFactory_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULiveLinkMessageBusSourceFactory, ULiveLinkMessageBusSourceFactory::StaticClass, TEXT("ULiveLinkMessageBusSourceFactory"), &Z_Registration_Info_UClass_ULiveLinkMessageBusSourceFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULiveLinkMessageBusSourceFactory), 853910445U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkMessageBusSourceFactory_h_331717445(TEXT("/Script/LiveLink"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkMessageBusSourceFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkMessageBusSourceFactory_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
