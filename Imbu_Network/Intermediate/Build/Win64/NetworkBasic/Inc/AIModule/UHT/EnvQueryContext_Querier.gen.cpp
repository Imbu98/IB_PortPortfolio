// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/Contexts/EnvQueryContext_Querier.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnvQueryContext_Querier() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryContext();
AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryContext_Querier();
AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryContext_Querier_NoRegister();
UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References

// Begin Class UEnvQueryContext_Querier
void UEnvQueryContext_Querier::StaticRegisterNativesUEnvQueryContext_Querier()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEnvQueryContext_Querier);
UClass* Z_Construct_UClass_UEnvQueryContext_Querier_NoRegister()
{
	return UEnvQueryContext_Querier::StaticClass();
}
struct Z_Construct_UClass_UEnvQueryContext_Querier_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "EnvironmentQuery/Contexts/EnvQueryContext_Querier.h" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Contexts/EnvQueryContext_Querier.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnvQueryContext_Querier>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UEnvQueryContext_Querier_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEnvQueryContext,
	(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryContext_Querier_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEnvQueryContext_Querier_Statics::ClassParams = {
	&UEnvQueryContext_Querier::StaticClass,
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
	0x000810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryContext_Querier_Statics::Class_MetaDataParams), Z_Construct_UClass_UEnvQueryContext_Querier_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEnvQueryContext_Querier()
{
	if (!Z_Registration_Info_UClass_UEnvQueryContext_Querier.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEnvQueryContext_Querier.OuterSingleton, Z_Construct_UClass_UEnvQueryContext_Querier_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEnvQueryContext_Querier.OuterSingleton;
}
template<> AIMODULE_API UClass* StaticClass<UEnvQueryContext_Querier>()
{
	return UEnvQueryContext_Querier::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEnvQueryContext_Querier);
UEnvQueryContext_Querier::~UEnvQueryContext_Querier() {}
// End Class UEnvQueryContext_Querier

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Contexts_EnvQueryContext_Querier_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEnvQueryContext_Querier, UEnvQueryContext_Querier::StaticClass, TEXT("UEnvQueryContext_Querier"), &Z_Registration_Info_UClass_UEnvQueryContext_Querier, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnvQueryContext_Querier), 2361009139U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Contexts_EnvQueryContext_Querier_h_1542835219(TEXT("/Script/AIModule"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Contexts_EnvQueryContext_Querier_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Contexts_EnvQueryContext_Querier_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
