// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Landscape/Private/LandscapeEditLayerRendererPrivate.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLandscapeEditLayerRendererPrivate() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeDefaultEditLayerRenderer();
LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeDefaultEditLayerRenderer_NoRegister();
LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeHeightmapNormalsEditLayerRenderer();
LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeHeightmapNormalsEditLayerRenderer_NoRegister();
LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeWeightmapWeightBlendedLayersRenderer();
LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeWeightmapWeightBlendedLayersRenderer_NoRegister();
UPackage* Z_Construct_UPackage__Script_Landscape();
// End Cross Module References

// Begin Class ULandscapeDefaultEditLayerRenderer
void ULandscapeDefaultEditLayerRenderer::StaticRegisterNativesULandscapeDefaultEditLayerRenderer()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULandscapeDefaultEditLayerRenderer);
UClass* Z_Construct_UClass_ULandscapeDefaultEditLayerRenderer_NoRegister()
{
	return ULandscapeDefaultEditLayerRenderer::StaticClass();
}
struct Z_Construct_UClass_ULandscapeDefaultEditLayerRenderer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n* Edit layer renderer added at the bottom of the stack to provide the default value for every requested target layer (heightmaps and weightmaps)\n*  It could have been handled with a simple clear as the first operation when performing the merge, but doing it through a renderer turns out to be an elegant way to resolve the\n*  situation where the first actual edit layer's render item declares dependencies between each component and others (e.g. say you have only a ULandscapeHeightmapNormalsEditLayerRenderer\n*  in the renderer stack, which requires each component's immediate neighbors). In such a situation, the component dependencies would be skipped because dependencies are\n*  between a renderer and its previous one in the stack and since in the case described above (a single renderer in the stack), there's no previous renderer, then the dependencies\n*  would simply not be registered, and the render batches would end up being incorrect as a result.\n*/" },
		{ "IncludePath", "LandscapeEditLayerRendererPrivate.h" },
		{ "ModuleRelativePath", "Private/LandscapeEditLayerRendererPrivate.h" },
		{ "ToolTip", "Edit layer renderer added at the bottom of the stack to provide the default value for every requested target layer (heightmaps and weightmaps)\n It could have been handled with a simple clear as the first operation when performing the merge, but doing it through a renderer turns out to be an elegant way to resolve the\n situation where the first actual edit layer's render item declares dependencies between each component and others (e.g. say you have only a ULandscapeHeightmapNormalsEditLayerRenderer\n in the renderer stack, which requires each component's immediate neighbors). In such a situation, the component dependencies would be skipped because dependencies are\n between a renderer and its previous one in the stack and since in the case described above (a single renderer in the stack), there's no previous renderer, then the dependencies\n would simply not be registered, and the render batches would end up being incorrect as a result." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULandscapeDefaultEditLayerRenderer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ULandscapeDefaultEditLayerRenderer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeDefaultEditLayerRenderer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULandscapeDefaultEditLayerRenderer_Statics::ClassParams = {
	&ULandscapeDefaultEditLayerRenderer::StaticClass,
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
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeDefaultEditLayerRenderer_Statics::Class_MetaDataParams), Z_Construct_UClass_ULandscapeDefaultEditLayerRenderer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULandscapeDefaultEditLayerRenderer()
{
	if (!Z_Registration_Info_UClass_ULandscapeDefaultEditLayerRenderer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULandscapeDefaultEditLayerRenderer.OuterSingleton, Z_Construct_UClass_ULandscapeDefaultEditLayerRenderer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULandscapeDefaultEditLayerRenderer.OuterSingleton;
}
template<> LANDSCAPE_API UClass* StaticClass<ULandscapeDefaultEditLayerRenderer>()
{
	return ULandscapeDefaultEditLayerRenderer::StaticClass();
}
ULandscapeDefaultEditLayerRenderer::ULandscapeDefaultEditLayerRenderer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULandscapeDefaultEditLayerRenderer);
ULandscapeDefaultEditLayerRenderer::~ULandscapeDefaultEditLayerRenderer() {}
// End Class ULandscapeDefaultEditLayerRenderer

// Begin Class ULandscapeHeightmapNormalsEditLayerRenderer
void ULandscapeHeightmapNormalsEditLayerRenderer::StaticRegisterNativesULandscapeHeightmapNormalsEditLayerRenderer()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULandscapeHeightmapNormalsEditLayerRenderer);
UClass* Z_Construct_UClass_ULandscapeHeightmapNormalsEditLayerRenderer_NoRegister()
{
	return ULandscapeHeightmapNormalsEditLayerRenderer::StaticClass();
}
struct Z_Construct_UClass_ULandscapeHeightmapNormalsEditLayerRenderer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n* Edit layer renderer added at the top of the stack to generate the normals, right before resolving the textures.\n*  For now, the rendered components require (up to) their 8 immediate neighbors to generate adequate normals on the border so the renderer inserts that strong dependency, so that the components\n*  that are needed in the batch are guaranteed to have their neighbors present in the same batch :\n*/" },
		{ "IncludePath", "LandscapeEditLayerRendererPrivate.h" },
		{ "ModuleRelativePath", "Private/LandscapeEditLayerRendererPrivate.h" },
		{ "ToolTip", "Edit layer renderer added at the top of the stack to generate the normals, right before resolving the textures.\n For now, the rendered components require (up to) their 8 immediate neighbors to generate adequate normals on the border so the renderer inserts that strong dependency, so that the components\n that are needed in the batch are guaranteed to have their neighbors present in the same batch :" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULandscapeHeightmapNormalsEditLayerRenderer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ULandscapeHeightmapNormalsEditLayerRenderer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeHeightmapNormalsEditLayerRenderer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULandscapeHeightmapNormalsEditLayerRenderer_Statics::ClassParams = {
	&ULandscapeHeightmapNormalsEditLayerRenderer::StaticClass,
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
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeHeightmapNormalsEditLayerRenderer_Statics::Class_MetaDataParams), Z_Construct_UClass_ULandscapeHeightmapNormalsEditLayerRenderer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULandscapeHeightmapNormalsEditLayerRenderer()
{
	if (!Z_Registration_Info_UClass_ULandscapeHeightmapNormalsEditLayerRenderer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULandscapeHeightmapNormalsEditLayerRenderer.OuterSingleton, Z_Construct_UClass_ULandscapeHeightmapNormalsEditLayerRenderer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULandscapeHeightmapNormalsEditLayerRenderer.OuterSingleton;
}
template<> LANDSCAPE_API UClass* StaticClass<ULandscapeHeightmapNormalsEditLayerRenderer>()
{
	return ULandscapeHeightmapNormalsEditLayerRenderer::StaticClass();
}
ULandscapeHeightmapNormalsEditLayerRenderer::ULandscapeHeightmapNormalsEditLayerRenderer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULandscapeHeightmapNormalsEditLayerRenderer);
ULandscapeHeightmapNormalsEditLayerRenderer::~ULandscapeHeightmapNormalsEditLayerRenderer() {}
// End Class ULandscapeHeightmapNormalsEditLayerRenderer

// Begin Class ULandscapeWeightmapWeightBlendedLayersRenderer
void ULandscapeWeightmapWeightBlendedLayersRenderer::StaticRegisterNativesULandscapeWeightmapWeightBlendedLayersRenderer()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULandscapeWeightmapWeightBlendedLayersRenderer);
UClass* Z_Construct_UClass_ULandscapeWeightmapWeightBlendedLayersRenderer_NoRegister()
{
	return ULandscapeWeightmapWeightBlendedLayersRenderer::StaticClass();
}
struct Z_Construct_UClass_ULandscapeWeightmapWeightBlendedLayersRenderer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** \n* Edit layer renderer inserted at the end of the edit layers stack merge to normalize the weights of the rendered weightmaps \n*/" },
		{ "IncludePath", "LandscapeEditLayerRendererPrivate.h" },
		{ "ModuleRelativePath", "Private/LandscapeEditLayerRendererPrivate.h" },
		{ "ToolTip", "Edit layer renderer inserted at the end of the edit layers stack merge to normalize the weights of the rendered weightmaps" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULandscapeWeightmapWeightBlendedLayersRenderer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ULandscapeWeightmapWeightBlendedLayersRenderer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeWeightmapWeightBlendedLayersRenderer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULandscapeWeightmapWeightBlendedLayersRenderer_Statics::ClassParams = {
	&ULandscapeWeightmapWeightBlendedLayersRenderer::StaticClass,
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
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeWeightmapWeightBlendedLayersRenderer_Statics::Class_MetaDataParams), Z_Construct_UClass_ULandscapeWeightmapWeightBlendedLayersRenderer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULandscapeWeightmapWeightBlendedLayersRenderer()
{
	if (!Z_Registration_Info_UClass_ULandscapeWeightmapWeightBlendedLayersRenderer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULandscapeWeightmapWeightBlendedLayersRenderer.OuterSingleton, Z_Construct_UClass_ULandscapeWeightmapWeightBlendedLayersRenderer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULandscapeWeightmapWeightBlendedLayersRenderer.OuterSingleton;
}
template<> LANDSCAPE_API UClass* StaticClass<ULandscapeWeightmapWeightBlendedLayersRenderer>()
{
	return ULandscapeWeightmapWeightBlendedLayersRenderer::StaticClass();
}
ULandscapeWeightmapWeightBlendedLayersRenderer::ULandscapeWeightmapWeightBlendedLayersRenderer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULandscapeWeightmapWeightBlendedLayersRenderer);
ULandscapeWeightmapWeightBlendedLayersRenderer::~ULandscapeWeightmapWeightBlendedLayersRenderer() {}
// End Class ULandscapeWeightmapWeightBlendedLayersRenderer

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Private_LandscapeEditLayerRendererPrivate_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULandscapeDefaultEditLayerRenderer, ULandscapeDefaultEditLayerRenderer::StaticClass, TEXT("ULandscapeDefaultEditLayerRenderer"), &Z_Registration_Info_UClass_ULandscapeDefaultEditLayerRenderer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULandscapeDefaultEditLayerRenderer), 2438328108U) },
		{ Z_Construct_UClass_ULandscapeHeightmapNormalsEditLayerRenderer, ULandscapeHeightmapNormalsEditLayerRenderer::StaticClass, TEXT("ULandscapeHeightmapNormalsEditLayerRenderer"), &Z_Registration_Info_UClass_ULandscapeHeightmapNormalsEditLayerRenderer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULandscapeHeightmapNormalsEditLayerRenderer), 2198250813U) },
		{ Z_Construct_UClass_ULandscapeWeightmapWeightBlendedLayersRenderer, ULandscapeWeightmapWeightBlendedLayersRenderer::StaticClass, TEXT("ULandscapeWeightmapWeightBlendedLayersRenderer"), &Z_Registration_Info_UClass_ULandscapeWeightmapWeightBlendedLayersRenderer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULandscapeWeightmapWeightBlendedLayersRenderer), 2996993507U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Private_LandscapeEditLayerRendererPrivate_h_3621659119(TEXT("/Script/Landscape"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Private_LandscapeEditLayerRendererPrivate_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Private_LandscapeEditLayerRendererPrivate_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
