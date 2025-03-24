// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Private/LevelInstance/Test/LevelInstancePropertyOverrideSamplePolicy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelInstancePropertyOverrideSamplePolicy() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ULevelInstancePropertyOverridePolicy();
ENGINE_API UClass* Z_Construct_UClass_ULevelInstancePropertyOverrideSamplePolicy();
ENGINE_API UClass* Z_Construct_UClass_ULevelInstancePropertyOverrideSamplePolicy_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class ULevelInstancePropertyOverrideSamplePolicy
void ULevelInstancePropertyOverrideSamplePolicy::StaticRegisterNativesULevelInstancePropertyOverrideSamplePolicy()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULevelInstancePropertyOverrideSamplePolicy);
UClass* Z_Construct_UClass_ULevelInstancePropertyOverrideSamplePolicy_NoRegister()
{
	return ULevelInstancePropertyOverrideSamplePolicy::StaticClass();
}
struct Z_Construct_UClass_ULevelInstancePropertyOverrideSamplePolicy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "LevelInstance/Test/LevelInstancePropertyOverrideSamplePolicy.h" },
		{ "ModuleRelativePath", "Private/LevelInstance/Test/LevelInstancePropertyOverrideSamplePolicy.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULevelInstancePropertyOverrideSamplePolicy>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ULevelInstancePropertyOverrideSamplePolicy_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ULevelInstancePropertyOverridePolicy,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULevelInstancePropertyOverrideSamplePolicy_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULevelInstancePropertyOverrideSamplePolicy_Statics::ClassParams = {
	&ULevelInstancePropertyOverrideSamplePolicy::StaticClass,
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
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULevelInstancePropertyOverrideSamplePolicy_Statics::Class_MetaDataParams), Z_Construct_UClass_ULevelInstancePropertyOverrideSamplePolicy_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULevelInstancePropertyOverrideSamplePolicy()
{
	if (!Z_Registration_Info_UClass_ULevelInstancePropertyOverrideSamplePolicy.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULevelInstancePropertyOverrideSamplePolicy.OuterSingleton, Z_Construct_UClass_ULevelInstancePropertyOverrideSamplePolicy_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULevelInstancePropertyOverrideSamplePolicy.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<ULevelInstancePropertyOverrideSamplePolicy>()
{
	return ULevelInstancePropertyOverrideSamplePolicy::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULevelInstancePropertyOverrideSamplePolicy);
// End Class ULevelInstancePropertyOverrideSamplePolicy

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Private_LevelInstance_Test_LevelInstancePropertyOverrideSamplePolicy_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULevelInstancePropertyOverrideSamplePolicy, ULevelInstancePropertyOverrideSamplePolicy::StaticClass, TEXT("ULevelInstancePropertyOverrideSamplePolicy"), &Z_Registration_Info_UClass_ULevelInstancePropertyOverrideSamplePolicy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULevelInstancePropertyOverrideSamplePolicy), 582405109U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Private_LevelInstance_Test_LevelInstancePropertyOverrideSamplePolicy_h_2304553038(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Private_LevelInstance_Test_LevelInstancePropertyOverrideSamplePolicy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Private_LevelInstance_Test_LevelInstancePropertyOverrideSamplePolicy_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
