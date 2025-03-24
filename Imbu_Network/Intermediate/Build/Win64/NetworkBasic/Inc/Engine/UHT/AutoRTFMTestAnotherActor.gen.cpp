// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Private/Tests/AutoRTFM/AutoRTFMTestAnotherActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAutoRTFMTestAnotherActor() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AAutoRTFMTestAnotherActor();
ENGINE_API UClass* Z_Construct_UClass_AAutoRTFMTestAnotherActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class AAutoRTFMTestAnotherActor
void AAutoRTFMTestAnotherActor::StaticRegisterNativesAAutoRTFMTestAnotherActor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAutoRTFMTestAnotherActor);
UClass* Z_Construct_UClass_AAutoRTFMTestAnotherActor_NoRegister()
{
	return AAutoRTFMTestAnotherActor::StaticClass();
}
struct Z_Construct_UClass_AAutoRTFMTestAnotherActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Tests/AutoRTFM/AutoRTFMTestAnotherActor.h" },
		{ "ModuleRelativePath", "Private/Tests/AutoRTFM/AutoRTFMTestAnotherActor.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAutoRTFMTestAnotherActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AAutoRTFMTestAnotherActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAutoRTFMTestAnotherActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAutoRTFMTestAnotherActor_Statics::ClassParams = {
	&AAutoRTFMTestAnotherActor::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAutoRTFMTestAnotherActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AAutoRTFMTestAnotherActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AAutoRTFMTestAnotherActor()
{
	if (!Z_Registration_Info_UClass_AAutoRTFMTestAnotherActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAutoRTFMTestAnotherActor.OuterSingleton, Z_Construct_UClass_AAutoRTFMTestAnotherActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAutoRTFMTestAnotherActor.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<AAutoRTFMTestAnotherActor>()
{
	return AAutoRTFMTestAnotherActor::StaticClass();
}
AAutoRTFMTestAnotherActor::AAutoRTFMTestAnotherActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AAutoRTFMTestAnotherActor);
AAutoRTFMTestAnotherActor::~AAutoRTFMTestAnotherActor() {}
// End Class AAutoRTFMTestAnotherActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Private_Tests_AutoRTFM_AutoRTFMTestAnotherActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAutoRTFMTestAnotherActor, AAutoRTFMTestAnotherActor::StaticClass, TEXT("AAutoRTFMTestAnotherActor"), &Z_Registration_Info_UClass_AAutoRTFMTestAnotherActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAutoRTFMTestAnotherActor), 2807174205U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Private_Tests_AutoRTFM_AutoRTFMTestAnotherActor_h_3462612373(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Private_Tests_AutoRTFM_AutoRTFMTestAnotherActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Private_Tests_AutoRTFM_AutoRTFMTestAnotherActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
