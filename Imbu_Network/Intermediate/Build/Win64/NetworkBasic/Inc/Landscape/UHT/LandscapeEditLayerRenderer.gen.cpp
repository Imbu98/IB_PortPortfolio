// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Landscape/Public/LandscapeEditLayerRenderer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLandscapeEditLayerRenderer() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeEditLayerRenderer();
LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeEditLayerRenderer_NoRegister();
UPackage* Z_Construct_UPackage__Script_Landscape();
// End Cross Module References

// Begin Interface ULandscapeEditLayerRenderer
void ULandscapeEditLayerRenderer::StaticRegisterNativesULandscapeEditLayerRenderer()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULandscapeEditLayerRenderer);
UClass* Z_Construct_UClass_ULandscapeEditLayerRenderer_NoRegister()
{
	return ULandscapeEditLayerRenderer::StaticClass();
}
struct Z_Construct_UClass_ULandscapeEditLayerRenderer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LandscapeEditLayerRenderer.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ILandscapeEditLayerRenderer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ULandscapeEditLayerRenderer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeEditLayerRenderer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULandscapeEditLayerRenderer_Statics::ClassParams = {
	&ULandscapeEditLayerRenderer::StaticClass,
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
	0x000040A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeEditLayerRenderer_Statics::Class_MetaDataParams), Z_Construct_UClass_ULandscapeEditLayerRenderer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULandscapeEditLayerRenderer()
{
	if (!Z_Registration_Info_UClass_ULandscapeEditLayerRenderer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULandscapeEditLayerRenderer.OuterSingleton, Z_Construct_UClass_ULandscapeEditLayerRenderer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULandscapeEditLayerRenderer.OuterSingleton;
}
template<> LANDSCAPE_API UClass* StaticClass<ULandscapeEditLayerRenderer>()
{
	return ULandscapeEditLayerRenderer::StaticClass();
}
ULandscapeEditLayerRenderer::ULandscapeEditLayerRenderer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULandscapeEditLayerRenderer);
ULandscapeEditLayerRenderer::~ULandscapeEditLayerRenderer() {}
// End Interface ULandscapeEditLayerRenderer

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Public_LandscapeEditLayerRenderer_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULandscapeEditLayerRenderer, ULandscapeEditLayerRenderer::StaticClass, TEXT("ULandscapeEditLayerRenderer"), &Z_Registration_Info_UClass_ULandscapeEditLayerRenderer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULandscapeEditLayerRenderer), 1765112389U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Public_LandscapeEditLayerRenderer_h_2664247746(TEXT("/Script/Landscape"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Public_LandscapeEditLayerRenderer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Public_LandscapeEditLayerRenderer_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
