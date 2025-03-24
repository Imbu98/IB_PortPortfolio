// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Private/Tests/AutoRTFM/AutoRTFMTestChildActorComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAutoRTFMTestChildActorComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UAutoRTFMTestChildActorComponent();
ENGINE_API UClass* Z_Construct_UClass_UAutoRTFMTestChildActorComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UChildActorComponent();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UAutoRTFMTestChildActorComponent
void UAutoRTFMTestChildActorComponent::StaticRegisterNativesUAutoRTFMTestChildActorComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAutoRTFMTestChildActorComponent);
UClass* Z_Construct_UClass_UAutoRTFMTestChildActorComponent_NoRegister()
{
	return UAutoRTFMTestChildActorComponent::StaticClass();
}
struct Z_Construct_UClass_UAutoRTFMTestChildActorComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object LOD Physics Lighting TextureStreaming Activation Components|Activation Collision Trigger PhysicsVolume" },
		{ "IncludePath", "Tests/AutoRTFM/AutoRTFMTestChildActorComponent.h" },
		{ "ModuleRelativePath", "Private/Tests/AutoRTFM/AutoRTFMTestChildActorComponent.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAutoRTFMTestChildActorComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAutoRTFMTestChildActorComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UChildActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAutoRTFMTestChildActorComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAutoRTFMTestChildActorComponent_Statics::ClassParams = {
	&UAutoRTFMTestChildActorComponent::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAutoRTFMTestChildActorComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UAutoRTFMTestChildActorComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAutoRTFMTestChildActorComponent()
{
	if (!Z_Registration_Info_UClass_UAutoRTFMTestChildActorComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAutoRTFMTestChildActorComponent.OuterSingleton, Z_Construct_UClass_UAutoRTFMTestChildActorComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAutoRTFMTestChildActorComponent.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UAutoRTFMTestChildActorComponent>()
{
	return UAutoRTFMTestChildActorComponent::StaticClass();
}
UAutoRTFMTestChildActorComponent::UAutoRTFMTestChildActorComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAutoRTFMTestChildActorComponent);
UAutoRTFMTestChildActorComponent::~UAutoRTFMTestChildActorComponent() {}
// End Class UAutoRTFMTestChildActorComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Private_Tests_AutoRTFM_AutoRTFMTestChildActorComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAutoRTFMTestChildActorComponent, UAutoRTFMTestChildActorComponent::StaticClass, TEXT("UAutoRTFMTestChildActorComponent"), &Z_Registration_Info_UClass_UAutoRTFMTestChildActorComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAutoRTFMTestChildActorComponent), 1414517423U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Private_Tests_AutoRTFM_AutoRTFMTestChildActorComponent_h_4184282951(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Private_Tests_AutoRTFM_AutoRTFMTestChildActorComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Private_Tests_AutoRTFM_AutoRTFMTestChildActorComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
