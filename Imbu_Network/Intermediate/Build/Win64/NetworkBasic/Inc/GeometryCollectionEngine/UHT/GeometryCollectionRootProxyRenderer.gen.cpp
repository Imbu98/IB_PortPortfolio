// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Experimental/GeometryCollectionEngine/Private/GeometryCollection/GeometryCollectionRootProxyRenderer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeometryCollectionRootProxyRenderer() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
GEOMETRYCOLLECTIONENGINE_API UClass* Z_Construct_UClass_UGeometryCollectionExternalRenderInterface_NoRegister();
GEOMETRYCOLLECTIONENGINE_API UClass* Z_Construct_UClass_UGeometryCollectionRootProxyRenderer();
GEOMETRYCOLLECTIONENGINE_API UClass* Z_Construct_UClass_UGeometryCollectionRootProxyRenderer_NoRegister();
UPackage* Z_Construct_UPackage__Script_GeometryCollectionEngine();
// End Cross Module References

// Begin Class UGeometryCollectionRootProxyRenderer
void UGeometryCollectionRootProxyRenderer::StaticRegisterNativesUGeometryCollectionRootProxyRenderer()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGeometryCollectionRootProxyRenderer);
UClass* Z_Construct_UClass_UGeometryCollectionRootProxyRenderer_NoRegister()
{
	return UGeometryCollectionRootProxyRenderer::StaticClass();
}
struct Z_Construct_UClass_UGeometryCollectionRootProxyRenderer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** Implementation of a geometry collection custom renderer that creates static mesh components representing the root proxies. */" },
		{ "IncludePath", "GeometryCollection/GeometryCollectionRootProxyRenderer.h" },
		{ "ModuleRelativePath", "Private/GeometryCollection/GeometryCollectionRootProxyRenderer.h" },
		{ "ToolTip", "Implementation of a geometry collection custom renderer that creates static mesh components representing the root proxies." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshComponents_MetaData[] = {
		{ "Comment", "/** Static mesh components for the root proxy meshes. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/GeometryCollection/GeometryCollectionRootProxyRenderer.h" },
		{ "ToolTip", "Static mesh components for the root proxy meshes." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMeshComponents_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_StaticMeshComponents;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGeometryCollectionRootProxyRenderer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGeometryCollectionRootProxyRenderer_Statics::NewProp_StaticMeshComponents_Inner = { "StaticMeshComponents", nullptr, (EPropertyFlags)0x0104000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGeometryCollectionRootProxyRenderer_Statics::NewProp_StaticMeshComponents = { "StaticMeshComponents", nullptr, (EPropertyFlags)0x0144008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGeometryCollectionRootProxyRenderer, StaticMeshComponents), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticMeshComponents_MetaData), NewProp_StaticMeshComponents_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGeometryCollectionRootProxyRenderer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionRootProxyRenderer_Statics::NewProp_StaticMeshComponents_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionRootProxyRenderer_Statics::NewProp_StaticMeshComponents,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCollectionRootProxyRenderer_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGeometryCollectionRootProxyRenderer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionEngine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCollectionRootProxyRenderer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UGeometryCollectionRootProxyRenderer_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UGeometryCollectionExternalRenderInterface_NoRegister, (int32)VTABLE_OFFSET(UGeometryCollectionRootProxyRenderer, IGeometryCollectionExternalRenderInterface), false },  // 3107001664
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGeometryCollectionRootProxyRenderer_Statics::ClassParams = {
	&UGeometryCollectionRootProxyRenderer::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGeometryCollectionRootProxyRenderer_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCollectionRootProxyRenderer_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x008000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCollectionRootProxyRenderer_Statics::Class_MetaDataParams), Z_Construct_UClass_UGeometryCollectionRootProxyRenderer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGeometryCollectionRootProxyRenderer()
{
	if (!Z_Registration_Info_UClass_UGeometryCollectionRootProxyRenderer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGeometryCollectionRootProxyRenderer.OuterSingleton, Z_Construct_UClass_UGeometryCollectionRootProxyRenderer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGeometryCollectionRootProxyRenderer.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONENGINE_API UClass* StaticClass<UGeometryCollectionRootProxyRenderer>()
{
	return UGeometryCollectionRootProxyRenderer::StaticClass();
}
UGeometryCollectionRootProxyRenderer::UGeometryCollectionRootProxyRenderer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGeometryCollectionRootProxyRenderer);
UGeometryCollectionRootProxyRenderer::~UGeometryCollectionRootProxyRenderer() {}
// End Class UGeometryCollectionRootProxyRenderer

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Private_GeometryCollection_GeometryCollectionRootProxyRenderer_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGeometryCollectionRootProxyRenderer, UGeometryCollectionRootProxyRenderer::StaticClass, TEXT("UGeometryCollectionRootProxyRenderer"), &Z_Registration_Info_UClass_UGeometryCollectionRootProxyRenderer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGeometryCollectionRootProxyRenderer), 1279821932U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Private_GeometryCollection_GeometryCollectionRootProxyRenderer_h_4005361566(TEXT("/Script/GeometryCollectionEngine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Private_GeometryCollection_GeometryCollectionRootProxyRenderer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Private_GeometryCollection_GeometryCollectionRootProxyRenderer_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
