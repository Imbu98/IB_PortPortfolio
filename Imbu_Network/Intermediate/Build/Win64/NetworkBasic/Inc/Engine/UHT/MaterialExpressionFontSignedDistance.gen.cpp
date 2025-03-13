// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/Materials/MaterialExpressionFontSignedDistance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionFontSignedDistance() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionFontSignedDistance();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionFontSignedDistance_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UMaterialExpressionFontSignedDistance
void UMaterialExpressionFontSignedDistance::StaticRegisterNativesUMaterialExpressionFontSignedDistance()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionFontSignedDistance);
UClass* Z_Construct_UClass_UMaterialExpressionFontSignedDistance_NoRegister()
{
	return UMaterialExpressionFontSignedDistance::StaticClass();
}
struct Z_Construct_UClass_UMaterialExpressionFontSignedDistance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionFontSignedDistance.h" },
		{ "ModuleRelativePath", "Public/Materials/MaterialExpressionFontSignedDistance.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionFontSignedDistance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMaterialExpressionFontSignedDistance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionFontSignedDistance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionFontSignedDistance_Statics::ClassParams = {
	&UMaterialExpressionFontSignedDistance::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionFontSignedDistance_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialExpressionFontSignedDistance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialExpressionFontSignedDistance()
{
	if (!Z_Registration_Info_UClass_UMaterialExpressionFontSignedDistance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionFontSignedDistance.OuterSingleton, Z_Construct_UClass_UMaterialExpressionFontSignedDistance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialExpressionFontSignedDistance.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UMaterialExpressionFontSignedDistance>()
{
	return UMaterialExpressionFontSignedDistance::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionFontSignedDistance);
UMaterialExpressionFontSignedDistance::~UMaterialExpressionFontSignedDistance() {}
// End Class UMaterialExpressionFontSignedDistance

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionFontSignedDistance_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionFontSignedDistance, UMaterialExpressionFontSignedDistance::StaticClass, TEXT("UMaterialExpressionFontSignedDistance"), &Z_Registration_Info_UClass_UMaterialExpressionFontSignedDistance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionFontSignedDistance), 2788162157U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionFontSignedDistance_h_3969607042(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionFontSignedDistance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionFontSignedDistance_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
