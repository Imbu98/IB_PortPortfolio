// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/VT/VirtualTextureAdapter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVirtualTextureAdapter() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UTexture();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UVirtualTextureAdapter();
ENGINE_API UClass* Z_Construct_UClass_UVirtualTextureAdapter_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UVirtualTextureAdapter
void UVirtualTextureAdapter::StaticRegisterNativesUVirtualTextureAdapter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVirtualTextureAdapter);
UClass* Z_Construct_UClass_UVirtualTextureAdapter_NoRegister()
{
	return UVirtualTextureAdapter::StaticClass();
}
struct Z_Construct_UClass_UVirtualTextureAdapter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Rendering" },
		{ "Comment", "/** \n * Adapter object that wraps a regular UTexture and allows it to be referenced as a virtual texture in materials.\n * The virtual texture pages are filled on demand by copying from the wrapped texture.\n * This isn't memory efficient or performant, but can be useful for certain debugging or previewing modes where we don't\n * want to change the material, but do want to bind a non-virtual texture to an existing virtual texture sample.\n */" },
		{ "IncludePath", "VT/VirtualTextureAdapter.h" },
		{ "ModuleRelativePath", "Classes/VT/VirtualTextureAdapter.h" },
		{ "ToolTip", "Adapter object that wraps a regular UTexture and allows it to be referenced as a virtual texture in materials.\nThe virtual texture pages are filled on demand by copying from the wrapped texture.\nThis isn't memory efficient or performant, but can be useful for certain debugging or previewing modes where we don't\nwant to change the material, but do want to bind a non-virtual texture to an existing virtual texture sample." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Texture_MetaData[] = {
		{ "Category", "Texture" },
		{ "Comment", "/** The UTexture object to wrap. */" },
		{ "ModuleRelativePath", "Classes/VT/VirtualTextureAdapter.h" },
		{ "ToolTip", "The UTexture object to wrap." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverrideWithTextureFormat_MetaData[] = {
		{ "Category", "Texture" },
		{ "Comment", "/** Optional UTexture object that has the final texture format that we would like to use. */" },
		{ "ModuleRelativePath", "Classes/VT/VirtualTextureAdapter.h" },
		{ "ToolTip", "Optional UTexture object that has the final texture format that we would like to use." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseDefaultTileSizes_MetaData[] = {
		{ "Category", "Texture" },
		{ "Comment", "/** Set to true if we want to use the default project virtual texture tile settings. */" },
		{ "ModuleRelativePath", "Classes/VT/VirtualTextureAdapter.h" },
		{ "ToolTip", "Set to true if we want to use the default project virtual texture tile settings." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TileSize_MetaData[] = {
		{ "Category", "Texture" },
		{ "Comment", "/** Page tile size. (Will be rounded up to power of 2). */" },
		{ "editcondition", "!bUseDefaultTileSizes" },
		{ "ModuleRelativePath", "Classes/VT/VirtualTextureAdapter.h" },
		{ "ToolTip", "Page tile size. (Will be rounded up to power of 2)." },
		{ "UIMax", "512" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TileBorderSize_MetaData[] = {
		{ "Category", "Texture" },
		{ "Comment", "/** Page tile border size. (Will be rounded up to multiple of 2). */" },
		{ "editcondition", "!bUseDefaultTileSizes" },
		{ "ModuleRelativePath", "Classes/VT/VirtualTextureAdapter.h" },
		{ "ToolTip", "Page tile border size. (Will be rounded up to multiple of 2)." },
		{ "UIMax", "8" },
		{ "UIMin", "0" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Texture;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverrideWithTextureFormat;
	static void NewProp_bUseDefaultTileSizes_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseDefaultTileSizes;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TileSize;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TileBorderSize;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVirtualTextureAdapter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVirtualTextureAdapter_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVirtualTextureAdapter, Texture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Texture_MetaData), NewProp_Texture_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVirtualTextureAdapter_Statics::NewProp_OverrideWithTextureFormat = { "OverrideWithTextureFormat", nullptr, (EPropertyFlags)0x0114040000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVirtualTextureAdapter, OverrideWithTextureFormat), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverrideWithTextureFormat_MetaData), NewProp_OverrideWithTextureFormat_MetaData) };
void Z_Construct_UClass_UVirtualTextureAdapter_Statics::NewProp_bUseDefaultTileSizes_SetBit(void* Obj)
{
	((UVirtualTextureAdapter*)Obj)->bUseDefaultTileSizes = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVirtualTextureAdapter_Statics::NewProp_bUseDefaultTileSizes = { "bUseDefaultTileSizes", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVirtualTextureAdapter), &Z_Construct_UClass_UVirtualTextureAdapter_Statics::NewProp_bUseDefaultTileSizes_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseDefaultTileSizes_MetaData), NewProp_bUseDefaultTileSizes_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVirtualTextureAdapter_Statics::NewProp_TileSize = { "TileSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVirtualTextureAdapter, TileSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TileSize_MetaData), NewProp_TileSize_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVirtualTextureAdapter_Statics::NewProp_TileBorderSize = { "TileBorderSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVirtualTextureAdapter, TileBorderSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TileBorderSize_MetaData), NewProp_TileBorderSize_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVirtualTextureAdapter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVirtualTextureAdapter_Statics::NewProp_Texture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVirtualTextureAdapter_Statics::NewProp_OverrideWithTextureFormat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVirtualTextureAdapter_Statics::NewProp_bUseDefaultTileSizes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVirtualTextureAdapter_Statics::NewProp_TileSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVirtualTextureAdapter_Statics::NewProp_TileBorderSize,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVirtualTextureAdapter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVirtualTextureAdapter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UTexture,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVirtualTextureAdapter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVirtualTextureAdapter_Statics::ClassParams = {
	&UVirtualTextureAdapter::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UVirtualTextureAdapter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UVirtualTextureAdapter_Statics::PropPointers),
	0,
	0x008800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVirtualTextureAdapter_Statics::Class_MetaDataParams), Z_Construct_UClass_UVirtualTextureAdapter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVirtualTextureAdapter()
{
	if (!Z_Registration_Info_UClass_UVirtualTextureAdapter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVirtualTextureAdapter.OuterSingleton, Z_Construct_UClass_UVirtualTextureAdapter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVirtualTextureAdapter.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UVirtualTextureAdapter>()
{
	return UVirtualTextureAdapter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVirtualTextureAdapter);
UVirtualTextureAdapter::~UVirtualTextureAdapter() {}
// End Class UVirtualTextureAdapter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_VT_VirtualTextureAdapter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVirtualTextureAdapter, UVirtualTextureAdapter::StaticClass, TEXT("UVirtualTextureAdapter"), &Z_Registration_Info_UClass_UVirtualTextureAdapter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVirtualTextureAdapter), 3637044119U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_VT_VirtualTextureAdapter_h_3416998210(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_VT_VirtualTextureAdapter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_VT_VirtualTextureAdapter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
