// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/Elements/SMInstance/SMInstanceManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSMInstanceManager() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
ENGINE_API UClass* Z_Construct_UClass_USMInstanceManager();
ENGINE_API UClass* Z_Construct_UClass_USMInstanceManager_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USMInstanceManagerProvider();
ENGINE_API UClass* Z_Construct_UClass_USMInstanceManagerProvider_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Interface USMInstanceManager
void USMInstanceManager::StaticRegisterNativesUSMInstanceManager()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USMInstanceManager);
UClass* Z_Construct_UClass_USMInstanceManager_NoRegister()
{
	return USMInstanceManager::StaticClass();
}
struct Z_Construct_UClass_USMInstanceManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Elements/SMInstance/SMInstanceManager.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ISMInstanceManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USMInstanceManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USMInstanceManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USMInstanceManager_Statics::ClassParams = {
	&USMInstanceManager::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USMInstanceManager_Statics::Class_MetaDataParams), Z_Construct_UClass_USMInstanceManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USMInstanceManager()
{
	if (!Z_Registration_Info_UClass_USMInstanceManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USMInstanceManager.OuterSingleton, Z_Construct_UClass_USMInstanceManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USMInstanceManager.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<USMInstanceManager>()
{
	return USMInstanceManager::StaticClass();
}
USMInstanceManager::USMInstanceManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USMInstanceManager);
USMInstanceManager::~USMInstanceManager() {}
// End Interface USMInstanceManager

// Begin Interface USMInstanceManagerProvider
void USMInstanceManagerProvider::StaticRegisterNativesUSMInstanceManagerProvider()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USMInstanceManagerProvider);
UClass* Z_Construct_UClass_USMInstanceManagerProvider_NoRegister()
{
	return USMInstanceManagerProvider::StaticClass();
}
struct Z_Construct_UClass_USMInstanceManagerProvider_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Elements/SMInstance/SMInstanceManager.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ISMInstanceManagerProvider>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USMInstanceManagerProvider_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USMInstanceManagerProvider_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USMInstanceManagerProvider_Statics::ClassParams = {
	&USMInstanceManagerProvider::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USMInstanceManagerProvider_Statics::Class_MetaDataParams), Z_Construct_UClass_USMInstanceManagerProvider_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USMInstanceManagerProvider()
{
	if (!Z_Registration_Info_UClass_USMInstanceManagerProvider.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USMInstanceManagerProvider.OuterSingleton, Z_Construct_UClass_USMInstanceManagerProvider_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USMInstanceManagerProvider.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<USMInstanceManagerProvider>()
{
	return USMInstanceManagerProvider::StaticClass();
}
USMInstanceManagerProvider::USMInstanceManagerProvider(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USMInstanceManagerProvider);
USMInstanceManagerProvider::~USMInstanceManagerProvider() {}
// End Interface USMInstanceManagerProvider

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Elements_SMInstance_SMInstanceManager_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USMInstanceManager, USMInstanceManager::StaticClass, TEXT("USMInstanceManager"), &Z_Registration_Info_UClass_USMInstanceManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USMInstanceManager), 1951560444U) },
		{ Z_Construct_UClass_USMInstanceManagerProvider, USMInstanceManagerProvider::StaticClass, TEXT("USMInstanceManagerProvider"), &Z_Registration_Info_UClass_USMInstanceManagerProvider, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USMInstanceManagerProvider), 2542487395U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Elements_SMInstance_SMInstanceManager_h_1749533512(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Elements_SMInstance_SMInstanceManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Elements_SMInstance_SMInstanceManager_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
