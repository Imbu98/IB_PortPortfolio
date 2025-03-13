// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Private/Tests/AutoRTFM/AutoRTFMTestLevel.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAutoRTFMTestLevel() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UAutoRTFMTestLevel();
ENGINE_API UClass* Z_Construct_UClass_UAutoRTFMTestLevel_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ULevel();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UAutoRTFMTestLevel
void UAutoRTFMTestLevel::StaticRegisterNativesUAutoRTFMTestLevel()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAutoRTFMTestLevel);
UClass* Z_Construct_UClass_UAutoRTFMTestLevel_NoRegister()
{
	return UAutoRTFMTestLevel::StaticClass();
}
struct Z_Construct_UClass_UAutoRTFMTestLevel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Tests/AutoRTFM/AutoRTFMTestLevel.h" },
		{ "ModuleRelativePath", "Private/Tests/AutoRTFM/AutoRTFMTestLevel.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAutoRTFMTestLevel>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAutoRTFMTestLevel_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ULevel,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAutoRTFMTestLevel_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAutoRTFMTestLevel_Statics::ClassParams = {
	&UAutoRTFMTestLevel::StaticClass,
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
	0x008000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAutoRTFMTestLevel_Statics::Class_MetaDataParams), Z_Construct_UClass_UAutoRTFMTestLevel_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAutoRTFMTestLevel()
{
	if (!Z_Registration_Info_UClass_UAutoRTFMTestLevel.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAutoRTFMTestLevel.OuterSingleton, Z_Construct_UClass_UAutoRTFMTestLevel_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAutoRTFMTestLevel.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UAutoRTFMTestLevel>()
{
	return UAutoRTFMTestLevel::StaticClass();
}
UAutoRTFMTestLevel::UAutoRTFMTestLevel(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAutoRTFMTestLevel);
UAutoRTFMTestLevel::~UAutoRTFMTestLevel() {}
// End Class UAutoRTFMTestLevel

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Private_Tests_AutoRTFM_AutoRTFMTestLevel_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAutoRTFMTestLevel, UAutoRTFMTestLevel::StaticClass, TEXT("UAutoRTFMTestLevel"), &Z_Registration_Info_UClass_UAutoRTFMTestLevel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAutoRTFMTestLevel), 3375967003U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Private_Tests_AutoRTFM_AutoRTFMTestLevel_h_1630894346(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Private_Tests_AutoRTFM_AutoRTFMTestLevel_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Private_Tests_AutoRTFM_AutoRTFMTestLevel_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
