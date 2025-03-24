// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/Materials/MaterialExpressionMeshPaintTextureReplace.h"
#include "Runtime/Engine/Public/Materials/MaterialExpression.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionMeshPaintTextureReplace() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionMeshPaintTextureReplace();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionMeshPaintTextureReplace_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UMaterialExpressionMeshPaintTextureReplace
void UMaterialExpressionMeshPaintTextureReplace::StaticRegisterNativesUMaterialExpressionMeshPaintTextureReplace()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionMeshPaintTextureReplace);
UClass* Z_Construct_UClass_UMaterialExpressionMeshPaintTextureReplace_NoRegister()
{
	return UMaterialExpressionMeshPaintTextureReplace::StaticClass();
}
struct Z_Construct_UClass_UMaterialExpressionMeshPaintTextureReplace_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionMeshPaintTextureReplace.h" },
		{ "ModuleRelativePath", "Public/Materials/MaterialExpressionMeshPaintTextureReplace.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Default_MetaData[] = {
		{ "ModuleRelativePath", "Public/Materials/MaterialExpressionMeshPaintTextureReplace.h" },
		{ "RequiredInput", "true" },
		{ "ToolTip", "Input will be used when no valid MeshPaintTexture is available" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshPaintTexture_MetaData[] = {
		{ "ModuleRelativePath", "Public/Materials/MaterialExpressionMeshPaintTextureReplace.h" },
		{ "RequiredInput", "true" },
		{ "ToolTip", "Input will be used when a valid MeshPaintTexture is available" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Default;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MeshPaintTexture;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionMeshPaintTextureReplace>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionMeshPaintTextureReplace_Statics::NewProp_Default = { "Default", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionMeshPaintTextureReplace, Default), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Default_MetaData), NewProp_Default_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionMeshPaintTextureReplace_Statics::NewProp_MeshPaintTexture = { "MeshPaintTexture", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionMeshPaintTextureReplace, MeshPaintTexture), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshPaintTexture_MetaData), NewProp_MeshPaintTexture_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionMeshPaintTextureReplace_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionMeshPaintTextureReplace_Statics::NewProp_Default,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionMeshPaintTextureReplace_Statics::NewProp_MeshPaintTexture,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionMeshPaintTextureReplace_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMaterialExpressionMeshPaintTextureReplace_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionMeshPaintTextureReplace_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionMeshPaintTextureReplace_Statics::ClassParams = {
	&UMaterialExpressionMeshPaintTextureReplace::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMaterialExpressionMeshPaintTextureReplace_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionMeshPaintTextureReplace_Statics::PropPointers),
	0,
	0x000820B0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionMeshPaintTextureReplace_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialExpressionMeshPaintTextureReplace_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialExpressionMeshPaintTextureReplace()
{
	if (!Z_Registration_Info_UClass_UMaterialExpressionMeshPaintTextureReplace.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionMeshPaintTextureReplace.OuterSingleton, Z_Construct_UClass_UMaterialExpressionMeshPaintTextureReplace_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialExpressionMeshPaintTextureReplace.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UMaterialExpressionMeshPaintTextureReplace>()
{
	return UMaterialExpressionMeshPaintTextureReplace::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionMeshPaintTextureReplace);
UMaterialExpressionMeshPaintTextureReplace::~UMaterialExpressionMeshPaintTextureReplace() {}
// End Class UMaterialExpressionMeshPaintTextureReplace

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionMeshPaintTextureReplace_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionMeshPaintTextureReplace, UMaterialExpressionMeshPaintTextureReplace::StaticClass, TEXT("UMaterialExpressionMeshPaintTextureReplace"), &Z_Registration_Info_UClass_UMaterialExpressionMeshPaintTextureReplace, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionMeshPaintTextureReplace), 21703650U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionMeshPaintTextureReplace_h_3186232937(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionMeshPaintTextureReplace_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionMeshPaintTextureReplace_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
