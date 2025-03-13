// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/Materials/MaterialExpressionUserSceneTexture.h"
#include "Runtime/Engine/Public/Materials/MaterialExpression.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionUserSceneTexture() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionUserSceneTexture();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionUserSceneTexture_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UMaterialExpressionUserSceneTexture
void UMaterialExpressionUserSceneTexture::StaticRegisterNativesUMaterialExpressionUserSceneTexture()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionUserSceneTexture);
UClass* Z_Construct_UClass_UMaterialExpressionUserSceneTexture_NoRegister()
{
	return UMaterialExpressionUserSceneTexture::StaticClass();
}
struct Z_Construct_UClass_UMaterialExpressionUserSceneTexture_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionUserSceneTexture.h" },
		{ "ModuleRelativePath", "Public/Materials/MaterialExpressionUserSceneTexture.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Coordinates_MetaData[] = {
		{ "ModuleRelativePath", "Public/Materials/MaterialExpressionUserSceneTexture.h" },
		{ "RequiredInput", "false" },
		{ "ToolTip", "Ignored if not specified" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserSceneTexture_MetaData[] = {
		{ "Category", "UMaterialExpressionUserSceneTexture" },
		{ "Comment", "/** User Scene Texture (screen space texture with a user specified name, written by a previous PostProcess shader) to make a lookup into */" },
		{ "DisplayName", "User Scene Texture" },
		{ "ModuleRelativePath", "Public/Materials/MaterialExpressionUserSceneTexture.h" },
		{ "ShowAsInputPin", "Advanced" },
		{ "ToolTip", "User Scene Texture (screen space texture with a user specified name, written by a previous PostProcess shader) to make a lookup into" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFiltered_MetaData[] = {
		{ "Category", "UMaterialExpressionUserSceneTexture" },
		{ "Comment", "/** Whether to use point sampled texture lookup (default) or using [bi-linear] filtered (can be slower, avoid faceted lock with distortions) */" },
		{ "DisplayName", "Filtered" },
		{ "ModuleRelativePath", "Public/Materials/MaterialExpressionUserSceneTexture.h" },
		{ "ShowAsInputPin", "Advanced" },
		{ "ToolTip", "Whether to use point sampled texture lookup (default) or using [bi-linear] filtered (can be slower, avoid faceted lock with distortions)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bClamped_MetaData[] = {
		{ "Category", "UMaterialExpressionUserSceneTexture" },
		{ "Comment", "/** Whether to clamp the texture lookup.  Necessary when sampling a UserSceneTexture at reduced resolution with filtering, to avoid blending out of bounds pixels. */" },
		{ "DisplayName", "Clamped" },
		{ "ModuleRelativePath", "Public/Materials/MaterialExpressionUserSceneTexture.h" },
		{ "ShowAsInputPin", "Advanced" },
		{ "ToolTip", "Whether to clamp the texture lookup.  Necessary when sampling a UserSceneTexture at reduced resolution with filtering, to avoid blending out of bounds pixels." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Coordinates;
	static const UECodeGen_Private::FNamePropertyParams NewProp_UserSceneTexture;
	static void NewProp_bFiltered_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFiltered;
	static void NewProp_bClamped_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bClamped;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionUserSceneTexture>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionUserSceneTexture_Statics::NewProp_Coordinates = { "Coordinates", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionUserSceneTexture, Coordinates), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Coordinates_MetaData), NewProp_Coordinates_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMaterialExpressionUserSceneTexture_Statics::NewProp_UserSceneTexture = { "UserSceneTexture", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionUserSceneTexture, UserSceneTexture), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserSceneTexture_MetaData), NewProp_UserSceneTexture_MetaData) };
void Z_Construct_UClass_UMaterialExpressionUserSceneTexture_Statics::NewProp_bFiltered_SetBit(void* Obj)
{
	((UMaterialExpressionUserSceneTexture*)Obj)->bFiltered = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialExpressionUserSceneTexture_Statics::NewProp_bFiltered = { "bFiltered", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMaterialExpressionUserSceneTexture), &Z_Construct_UClass_UMaterialExpressionUserSceneTexture_Statics::NewProp_bFiltered_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFiltered_MetaData), NewProp_bFiltered_MetaData) };
void Z_Construct_UClass_UMaterialExpressionUserSceneTexture_Statics::NewProp_bClamped_SetBit(void* Obj)
{
	((UMaterialExpressionUserSceneTexture*)Obj)->bClamped = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialExpressionUserSceneTexture_Statics::NewProp_bClamped = { "bClamped", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMaterialExpressionUserSceneTexture), &Z_Construct_UClass_UMaterialExpressionUserSceneTexture_Statics::NewProp_bClamped_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bClamped_MetaData), NewProp_bClamped_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionUserSceneTexture_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionUserSceneTexture_Statics::NewProp_Coordinates,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionUserSceneTexture_Statics::NewProp_UserSceneTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionUserSceneTexture_Statics::NewProp_bFiltered,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionUserSceneTexture_Statics::NewProp_bClamped,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionUserSceneTexture_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMaterialExpressionUserSceneTexture_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionUserSceneTexture_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionUserSceneTexture_Statics::ClassParams = {
	&UMaterialExpressionUserSceneTexture::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMaterialExpressionUserSceneTexture_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionUserSceneTexture_Statics::PropPointers),
	0,
	0x000820B0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionUserSceneTexture_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialExpressionUserSceneTexture_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialExpressionUserSceneTexture()
{
	if (!Z_Registration_Info_UClass_UMaterialExpressionUserSceneTexture.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionUserSceneTexture.OuterSingleton, Z_Construct_UClass_UMaterialExpressionUserSceneTexture_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialExpressionUserSceneTexture.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UMaterialExpressionUserSceneTexture>()
{
	return UMaterialExpressionUserSceneTexture::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionUserSceneTexture);
UMaterialExpressionUserSceneTexture::~UMaterialExpressionUserSceneTexture() {}
// End Class UMaterialExpressionUserSceneTexture

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionUserSceneTexture_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionUserSceneTexture, UMaterialExpressionUserSceneTexture::StaticClass, TEXT("UMaterialExpressionUserSceneTexture"), &Z_Registration_Info_UClass_UMaterialExpressionUserSceneTexture, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionUserSceneTexture), 2088979971U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionUserSceneTexture_h_124784928(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionUserSceneTexture_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionUserSceneTexture_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
