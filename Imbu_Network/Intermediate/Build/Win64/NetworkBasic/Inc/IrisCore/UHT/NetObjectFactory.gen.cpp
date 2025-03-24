// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Experimental/Iris/Core/Public/Iris/ReplicationSystem/NetObjectFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNetObjectFactory() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
IRISCORE_API UClass* Z_Construct_UClass_UNetObjectFactory();
IRISCORE_API UClass* Z_Construct_UClass_UNetObjectFactory_NoRegister();
UPackage* Z_Construct_UPackage__Script_IrisCore();
// End Cross Module References

// Begin Class UNetObjectFactory
void UNetObjectFactory::StaticRegisterNativesUNetObjectFactory()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNetObjectFactory);
UClass* Z_Construct_UClass_UNetObjectFactory_NoRegister()
{
	return UNetObjectFactory::StaticClass();
}
struct Z_Construct_UClass_UNetObjectFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * The class is responsible for creating the header representing specific replicated object types.\n * Also responsible for instantiating the UObject from a replicated header.\n */" },
		{ "IncludePath", "Iris/ReplicationSystem/NetObjectFactory.h" },
		{ "ModuleRelativePath", "Public/Iris/ReplicationSystem/NetObjectFactory.h" },
		{ "ToolTip", "The class is responsible for creating the header representing specific replicated object types.\nAlso responsible for instantiating the UObject from a replicated header." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNetObjectFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNetObjectFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_IrisCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNetObjectFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNetObjectFactory_Statics::ClassParams = {
	&UNetObjectFactory::StaticClass,
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
	0x000800A9u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNetObjectFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UNetObjectFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNetObjectFactory()
{
	if (!Z_Registration_Info_UClass_UNetObjectFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNetObjectFactory.OuterSingleton, Z_Construct_UClass_UNetObjectFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNetObjectFactory.OuterSingleton;
}
template<> IRISCORE_API UClass* StaticClass<UNetObjectFactory>()
{
	return UNetObjectFactory::StaticClass();
}
UNetObjectFactory::UNetObjectFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNetObjectFactory);
UNetObjectFactory::~UNetObjectFactory() {}
// End Class UNetObjectFactory

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_NetObjectFactory_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNetObjectFactory, UNetObjectFactory::StaticClass, TEXT("UNetObjectFactory"), &Z_Registration_Info_UClass_UNetObjectFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNetObjectFactory), 14566797U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_NetObjectFactory_h_543232875(TEXT("/Script/IrisCore"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_NetObjectFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_NetObjectFactory_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
