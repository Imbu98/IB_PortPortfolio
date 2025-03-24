// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Private/Tests/AutoRTFM/AutoRTFMTestPrimitiveComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAutoRTFMTestPrimitiveComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UAutoRTFMTestPrimitiveComponent();
ENGINE_API UClass* Z_Construct_UClass_UAutoRTFMTestPrimitiveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UAutoRTFMTestPrimitiveComponent
void UAutoRTFMTestPrimitiveComponent::StaticRegisterNativesUAutoRTFMTestPrimitiveComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAutoRTFMTestPrimitiveComponent);
UClass* Z_Construct_UClass_UAutoRTFMTestPrimitiveComponent_NoRegister()
{
	return UAutoRTFMTestPrimitiveComponent::StaticClass();
}
struct Z_Construct_UClass_UAutoRTFMTestPrimitiveComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Mobility VirtualTexture Trigger" },
		{ "IncludePath", "Tests/AutoRTFM/AutoRTFMTestPrimitiveComponent.h" },
		{ "ModuleRelativePath", "Private/Tests/AutoRTFM/AutoRTFMTestPrimitiveComponent.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAutoRTFMTestPrimitiveComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAutoRTFMTestPrimitiveComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPrimitiveComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAutoRTFMTestPrimitiveComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAutoRTFMTestPrimitiveComponent_Statics::ClassParams = {
	&UAutoRTFMTestPrimitiveComponent::StaticClass,
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
	0x00A000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAutoRTFMTestPrimitiveComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UAutoRTFMTestPrimitiveComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAutoRTFMTestPrimitiveComponent()
{
	if (!Z_Registration_Info_UClass_UAutoRTFMTestPrimitiveComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAutoRTFMTestPrimitiveComponent.OuterSingleton, Z_Construct_UClass_UAutoRTFMTestPrimitiveComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAutoRTFMTestPrimitiveComponent.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UAutoRTFMTestPrimitiveComponent>()
{
	return UAutoRTFMTestPrimitiveComponent::StaticClass();
}
UAutoRTFMTestPrimitiveComponent::UAutoRTFMTestPrimitiveComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAutoRTFMTestPrimitiveComponent);
UAutoRTFMTestPrimitiveComponent::~UAutoRTFMTestPrimitiveComponent() {}
// End Class UAutoRTFMTestPrimitiveComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Private_Tests_AutoRTFM_AutoRTFMTestPrimitiveComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAutoRTFMTestPrimitiveComponent, UAutoRTFMTestPrimitiveComponent::StaticClass, TEXT("UAutoRTFMTestPrimitiveComponent"), &Z_Registration_Info_UClass_UAutoRTFMTestPrimitiveComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAutoRTFMTestPrimitiveComponent), 333122583U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Private_Tests_AutoRTFM_AutoRTFMTestPrimitiveComponent_h_1632804285(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Private_Tests_AutoRTFM_AutoRTFMTestPrimitiveComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Private_Tests_AutoRTFM_AutoRTFMTestPrimitiveComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
