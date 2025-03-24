// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/VT/MeshPaintVirtualTexture.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeshPaintVirtualTexture() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UMeshPaintVirtualTexture();
ENGINE_API UClass* Z_Construct_UClass_UMeshPaintVirtualTexture_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UMeshPaintVirtualTexture
void UMeshPaintVirtualTexture::StaticRegisterNativesUMeshPaintVirtualTexture()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMeshPaintVirtualTexture);
UClass* Z_Construct_UClass_UMeshPaintVirtualTexture_NoRegister()
{
	return UMeshPaintVirtualTexture::StaticClass();
}
struct Z_Construct_UClass_UMeshPaintVirtualTexture_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ClassGroupNames", "Rendering" },
		{ "Comment", "/**\n * Mesh paint virtual texture asset.\n * This is a virtual texture that which will be owned by a mesh component to store the mesh painting on that component.\n * All mesh paint virtual textures will be stored using a shared virtual texture page table and physical space.\n * This shared space means that all mesh paint virtual textures can be accessed in a \"bindless\" way using a small descriptor.\n */" },
		{ "HideCategories", "Texture Compression Adjustments Compositing Object" },
		{ "IncludePath", "VT/MeshPaintVirtualTexture.h" },
		{ "ModuleRelativePath", "Classes/VT/MeshPaintVirtualTexture.h" },
		{ "ToolTip", "Mesh paint virtual texture asset.\nThis is a virtual texture that which will be owned by a mesh component to store the mesh painting on that component.\nAll mesh paint virtual textures will be stored using a shared virtual texture page table and physical space.\nThis shared space means that all mesh paint virtual textures can be accessed in a \"bindless\" way using a small descriptor." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwningComponent_MetaData[] = {
		{ "Comment", "/** Weak refererence to the owning primitive component. */" },
		{ "ModuleRelativePath", "Classes/VT/MeshPaintVirtualTexture.h" },
		{ "ToolTip", "Weak refererence to the owning primitive component." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_OwningComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMeshPaintVirtualTexture>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UMeshPaintVirtualTexture_Statics::NewProp_OwningComponent = { "OwningComponent", nullptr, (EPropertyFlags)0x0014000000080008, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeshPaintVirtualTexture, OwningComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwningComponent_MetaData), NewProp_OwningComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMeshPaintVirtualTexture_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshPaintVirtualTexture_Statics::NewProp_OwningComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMeshPaintVirtualTexture_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMeshPaintVirtualTexture_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UTexture2D,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMeshPaintVirtualTexture_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMeshPaintVirtualTexture_Statics::ClassParams = {
	&UMeshPaintVirtualTexture::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMeshPaintVirtualTexture_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMeshPaintVirtualTexture_Statics::PropPointers),
	0,
	0x008800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMeshPaintVirtualTexture_Statics::Class_MetaDataParams), Z_Construct_UClass_UMeshPaintVirtualTexture_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMeshPaintVirtualTexture()
{
	if (!Z_Registration_Info_UClass_UMeshPaintVirtualTexture.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMeshPaintVirtualTexture.OuterSingleton, Z_Construct_UClass_UMeshPaintVirtualTexture_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMeshPaintVirtualTexture.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UMeshPaintVirtualTexture>()
{
	return UMeshPaintVirtualTexture::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMeshPaintVirtualTexture);
UMeshPaintVirtualTexture::~UMeshPaintVirtualTexture() {}
// End Class UMeshPaintVirtualTexture

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_VT_MeshPaintVirtualTexture_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMeshPaintVirtualTexture, UMeshPaintVirtualTexture::StaticClass, TEXT("UMeshPaintVirtualTexture"), &Z_Registration_Info_UClass_UMeshPaintVirtualTexture, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMeshPaintVirtualTexture), 1557304867U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_VT_MeshPaintVirtualTexture_h_3015074750(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_VT_MeshPaintVirtualTexture_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_VT_MeshPaintVirtualTexture_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
