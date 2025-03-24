// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/Materials/MaterialExpressionMeshPaintTextureCoordinateIndex.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionMeshPaintTextureCoordinateIndex() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionMeshPaintTextureCoordinateIndex();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionMeshPaintTextureCoordinateIndex_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UMaterialExpressionMeshPaintTextureCoordinateIndex
void UMaterialExpressionMeshPaintTextureCoordinateIndex::StaticRegisterNativesUMaterialExpressionMeshPaintTextureCoordinateIndex()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionMeshPaintTextureCoordinateIndex);
UClass* Z_Construct_UClass_UMaterialExpressionMeshPaintTextureCoordinateIndex_NoRegister()
{
	return UMaterialExpressionMeshPaintTextureCoordinateIndex::StaticClass();
}
struct Z_Construct_UClass_UMaterialExpressionMeshPaintTextureCoordinateIndex_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionMeshPaintTextureCoordinateIndex.h" },
		{ "ModuleRelativePath", "Public/Materials/MaterialExpressionMeshPaintTextureCoordinateIndex.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionMeshPaintTextureCoordinateIndex>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMaterialExpressionMeshPaintTextureCoordinateIndex_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionMeshPaintTextureCoordinateIndex_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionMeshPaintTextureCoordinateIndex_Statics::ClassParams = {
	&UMaterialExpressionMeshPaintTextureCoordinateIndex::StaticClass,
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
	0x000820B0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionMeshPaintTextureCoordinateIndex_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialExpressionMeshPaintTextureCoordinateIndex_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialExpressionMeshPaintTextureCoordinateIndex()
{
	if (!Z_Registration_Info_UClass_UMaterialExpressionMeshPaintTextureCoordinateIndex.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionMeshPaintTextureCoordinateIndex.OuterSingleton, Z_Construct_UClass_UMaterialExpressionMeshPaintTextureCoordinateIndex_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialExpressionMeshPaintTextureCoordinateIndex.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UMaterialExpressionMeshPaintTextureCoordinateIndex>()
{
	return UMaterialExpressionMeshPaintTextureCoordinateIndex::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionMeshPaintTextureCoordinateIndex);
UMaterialExpressionMeshPaintTextureCoordinateIndex::~UMaterialExpressionMeshPaintTextureCoordinateIndex() {}
// End Class UMaterialExpressionMeshPaintTextureCoordinateIndex

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionMeshPaintTextureCoordinateIndex_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionMeshPaintTextureCoordinateIndex, UMaterialExpressionMeshPaintTextureCoordinateIndex::StaticClass, TEXT("UMaterialExpressionMeshPaintTextureCoordinateIndex"), &Z_Registration_Info_UClass_UMaterialExpressionMeshPaintTextureCoordinateIndex, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionMeshPaintTextureCoordinateIndex), 3652359684U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionMeshPaintTextureCoordinateIndex_h_390648432(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionMeshPaintTextureCoordinateIndex_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionMeshPaintTextureCoordinateIndex_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
