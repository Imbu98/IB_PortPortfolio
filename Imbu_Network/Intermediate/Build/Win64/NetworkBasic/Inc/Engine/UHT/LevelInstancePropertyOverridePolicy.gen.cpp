// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/LevelInstance/LevelInstancePropertyOverridePolicy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelInstancePropertyOverridePolicy() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ULevelInstancePropertyOverridePolicy();
ENGINE_API UClass* Z_Construct_UClass_ULevelInstancePropertyOverridePolicy_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UWorldPartitionPropertyOverridePolicy();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class ULevelInstancePropertyOverridePolicy
void ULevelInstancePropertyOverridePolicy::StaticRegisterNativesULevelInstancePropertyOverridePolicy()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULevelInstancePropertyOverridePolicy);
UClass* Z_Construct_UClass_ULevelInstancePropertyOverridePolicy_NoRegister()
{
	return ULevelInstancePropertyOverridePolicy::StaticClass();
}
struct Z_Construct_UClass_ULevelInstancePropertyOverridePolicy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "LevelInstance/LevelInstancePropertyOverridePolicy.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/LevelInstance/LevelInstancePropertyOverridePolicy.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULevelInstancePropertyOverridePolicy>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ULevelInstancePropertyOverridePolicy_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWorldPartitionPropertyOverridePolicy,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULevelInstancePropertyOverridePolicy_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULevelInstancePropertyOverridePolicy_Statics::ClassParams = {
	&ULevelInstancePropertyOverridePolicy::StaticClass,
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
	0x000000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULevelInstancePropertyOverridePolicy_Statics::Class_MetaDataParams), Z_Construct_UClass_ULevelInstancePropertyOverridePolicy_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULevelInstancePropertyOverridePolicy()
{
	if (!Z_Registration_Info_UClass_ULevelInstancePropertyOverridePolicy.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULevelInstancePropertyOverridePolicy.OuterSingleton, Z_Construct_UClass_ULevelInstancePropertyOverridePolicy_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULevelInstancePropertyOverridePolicy.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<ULevelInstancePropertyOverridePolicy>()
{
	return ULevelInstancePropertyOverridePolicy::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULevelInstancePropertyOverridePolicy);
// End Class ULevelInstancePropertyOverridePolicy

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstancePropertyOverridePolicy_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULevelInstancePropertyOverridePolicy, ULevelInstancePropertyOverridePolicy::StaticClass, TEXT("ULevelInstancePropertyOverridePolicy"), &Z_Registration_Info_UClass_ULevelInstancePropertyOverridePolicy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULevelInstancePropertyOverridePolicy), 2105033905U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstancePropertyOverridePolicy_h_4194481266(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstancePropertyOverridePolicy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstancePropertyOverridePolicy_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
