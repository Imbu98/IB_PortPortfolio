// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Private/Tests/AutoRTFM/AutoRTFMTestActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAutoRTFMTestActor() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AAutoRTFMTestActor();
ENGINE_API UClass* Z_Construct_UClass_AAutoRTFMTestActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class AAutoRTFMTestActor
void AAutoRTFMTestActor::StaticRegisterNativesAAutoRTFMTestActor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAutoRTFMTestActor);
UClass* Z_Construct_UClass_AAutoRTFMTestActor_NoRegister()
{
	return AAutoRTFMTestActor::StaticClass();
}
struct Z_Construct_UClass_AAutoRTFMTestActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Tests/AutoRTFM/AutoRTFMTestActor.h" },
		{ "ModuleRelativePath", "Private/Tests/AutoRTFM/AutoRTFMTestActor.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAutoRTFMTestActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AAutoRTFMTestActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAutoRTFMTestActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAutoRTFMTestActor_Statics::ClassParams = {
	&AAutoRTFMTestActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAutoRTFMTestActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AAutoRTFMTestActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AAutoRTFMTestActor()
{
	if (!Z_Registration_Info_UClass_AAutoRTFMTestActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAutoRTFMTestActor.OuterSingleton, Z_Construct_UClass_AAutoRTFMTestActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAutoRTFMTestActor.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<AAutoRTFMTestActor>()
{
	return AAutoRTFMTestActor::StaticClass();
}
AAutoRTFMTestActor::AAutoRTFMTestActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AAutoRTFMTestActor);
AAutoRTFMTestActor::~AAutoRTFMTestActor() {}
// End Class AAutoRTFMTestActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Private_Tests_AutoRTFM_AutoRTFMTestActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAutoRTFMTestActor, AAutoRTFMTestActor::StaticClass, TEXT("AAutoRTFMTestActor"), &Z_Registration_Info_UClass_AAutoRTFMTestActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAutoRTFMTestActor), 2397996407U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Private_Tests_AutoRTFM_AutoRTFMTestActor_h_2499588189(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Private_Tests_AutoRTFM_AutoRTFMTestActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Private_Tests_AutoRTFM_AutoRTFMTestActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
