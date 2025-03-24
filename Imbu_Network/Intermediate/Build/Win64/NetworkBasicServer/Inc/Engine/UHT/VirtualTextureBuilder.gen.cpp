// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/VT/VirtualTextureBuilder.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVirtualTextureBuilder() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_UVirtualTexture2D_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UVirtualTextureBuilder();
ENGINE_API UClass* Z_Construct_UClass_UVirtualTextureBuilder_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UVirtualTextureBuilder
void UVirtualTextureBuilder::StaticRegisterNativesUVirtualTextureBuilder()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVirtualTextureBuilder);
UClass* Z_Construct_UClass_UVirtualTextureBuilder_NoRegister()
{
	return UVirtualTextureBuilder::StaticClass();
}
struct Z_Construct_UClass_UVirtualTextureBuilder_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Rendering" },
		{ "Comment", "/**\n * Container for a UVirtualTexture2D that can be built from a FVirtualTextureBuildDesc description.\n * This has a simple BuildTexture() interface but we may want to extend in the future to support partial builds\n * or other more blueprint driven approaches for data generation.\n */" },
		{ "IncludePath", "VT/VirtualTextureBuilder.h" },
		{ "ModuleRelativePath", "Classes/VT/VirtualTextureBuilder.h" },
		{ "ToolTip", "Container for a UVirtualTexture2D that can be built from a FVirtualTextureBuildDesc description.\nThis has a simple BuildTexture() interface but we may want to extend in the future to support partial builds\nor other more blueprint driven approaches for data generation." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Texture_MetaData[] = {
		{ "Category", "Texture" },
		{ "Comment", "/** The (embedded) texture asset. Use Build Virtual Textures in the Build menu, or the Build button in the Runtime Virtual Texture Component to create/update it. */" },
		{ "ModuleRelativePath", "Classes/VT/VirtualTextureBuilder.h" },
		{ "ToolTip", "The (embedded) texture asset. Use Build Virtual Textures in the Build menu, or the Build button in the Runtime Virtual Texture Component to create/update it." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextureMobile_MetaData[] = {
		{ "Category", "Texture" },
		{ "Comment", "/** The (embedded) texture asset for mobile rendering, only if virtual texture support on Mobile is enabled and if RVT support on mobile is enabled in the project settings (see r.Mobile.VirtualTextures). Use Build Virtual Textures or the Build button in the Runtime Virtual Texture Component to create/update it. */" },
		{ "EditCondition", "bSeparateTextureForMobile" },
		{ "ModuleRelativePath", "Classes/VT/VirtualTextureBuilder.h" },
		{ "ToolTip", "The (embedded) texture asset for mobile rendering, only if virtual texture support on Mobile is enabled and if RVT support on mobile is enabled in the project settings (see r.Mobile.VirtualTextures). Use Build Virtual Textures or the Build button in the Runtime Virtual Texture Component to create/update it." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BuildHash_MetaData[] = {
		{ "Comment", "/** Some client defined hash of that defines how the Texture was built. */" },
		{ "ModuleRelativePath", "Classes/VT/VirtualTextureBuilder.h" },
		{ "ToolTip", "Some client defined hash of that defines how the Texture was built." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSeparateTextureForMobile_MetaData[] = {
		{ "Category", "Texture" },
		{ "Comment", "/** Whether to use a separate texture for Mobile rendering, only if virtual texture support on Mobile is enabled and if RVT support on mobile is enabled in the project settings (see r.Mobile.VirtualTextures). A separate texture will be built using mobile preview editor mode. Use this in case there is too much discrepancy between the RVT used for desktop vs. mobile. */" },
		{ "ModuleRelativePath", "Classes/VT/VirtualTextureBuilder.h" },
		{ "ToolTip", "Whether to use a separate texture for Mobile rendering, only if virtual texture support on Mobile is enabled and if RVT support on mobile is enabled in the project settings (see r.Mobile.VirtualTextures). A separate texture will be built using mobile preview editor mode. Use this in case there is too much discrepancy between the RVT used for desktop vs. mobile." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Texture;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TextureMobile;
	static const UECodeGen_Private::FUInt64PropertyParams NewProp_BuildHash;
	static void NewProp_bSeparateTextureForMobile_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSeparateTextureForMobile;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVirtualTextureBuilder>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVirtualTextureBuilder_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0114000000020015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVirtualTextureBuilder, Texture), Z_Construct_UClass_UVirtualTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Texture_MetaData), NewProp_Texture_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVirtualTextureBuilder_Statics::NewProp_TextureMobile = { "TextureMobile", nullptr, (EPropertyFlags)0x0114000000020015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVirtualTextureBuilder, TextureMobile), Z_Construct_UClass_UVirtualTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextureMobile_MetaData), NewProp_TextureMobile_MetaData) };
const UECodeGen_Private::FUInt64PropertyParams Z_Construct_UClass_UVirtualTextureBuilder_Statics::NewProp_BuildHash = { "BuildHash", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVirtualTextureBuilder, BuildHash), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BuildHash_MetaData), NewProp_BuildHash_MetaData) };
void Z_Construct_UClass_UVirtualTextureBuilder_Statics::NewProp_bSeparateTextureForMobile_SetBit(void* Obj)
{
	((UVirtualTextureBuilder*)Obj)->bSeparateTextureForMobile = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVirtualTextureBuilder_Statics::NewProp_bSeparateTextureForMobile = { "bSeparateTextureForMobile", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVirtualTextureBuilder), &Z_Construct_UClass_UVirtualTextureBuilder_Statics::NewProp_bSeparateTextureForMobile_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSeparateTextureForMobile_MetaData), NewProp_bSeparateTextureForMobile_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVirtualTextureBuilder_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVirtualTextureBuilder_Statics::NewProp_Texture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVirtualTextureBuilder_Statics::NewProp_TextureMobile,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVirtualTextureBuilder_Statics::NewProp_BuildHash,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVirtualTextureBuilder_Statics::NewProp_bSeparateTextureForMobile,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVirtualTextureBuilder_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVirtualTextureBuilder_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVirtualTextureBuilder_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVirtualTextureBuilder_Statics::ClassParams = {
	&UVirtualTextureBuilder::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UVirtualTextureBuilder_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UVirtualTextureBuilder_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVirtualTextureBuilder_Statics::Class_MetaDataParams), Z_Construct_UClass_UVirtualTextureBuilder_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVirtualTextureBuilder()
{
	if (!Z_Registration_Info_UClass_UVirtualTextureBuilder.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVirtualTextureBuilder.OuterSingleton, Z_Construct_UClass_UVirtualTextureBuilder_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVirtualTextureBuilder.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UVirtualTextureBuilder>()
{
	return UVirtualTextureBuilder::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVirtualTextureBuilder);
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UVirtualTextureBuilder)
// End Class UVirtualTextureBuilder

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_VT_VirtualTextureBuilder_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVirtualTextureBuilder, UVirtualTextureBuilder::StaticClass, TEXT("UVirtualTextureBuilder"), &Z_Registration_Info_UClass_UVirtualTextureBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVirtualTextureBuilder), 79103615U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_VT_VirtualTextureBuilder_h_3556723500(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_VT_VirtualTextureBuilder_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_VT_VirtualTextureBuilder_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
