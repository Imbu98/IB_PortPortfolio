// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/Materials/MaterialExpressionParticleSize.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionParticleSize() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionParticleSize();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionParticleSize_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UMaterialExpressionParticleSize
void UMaterialExpressionParticleSize::StaticRegisterNativesUMaterialExpressionParticleSize()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionParticleSize);
UClass* Z_Construct_UClass_UMaterialExpressionParticleSize_NoRegister()
{
	return UMaterialExpressionParticleSize::StaticClass();
}
struct Z_Construct_UClass_UMaterialExpressionParticleSize_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionParticleSize.h" },
		{ "ModuleRelativePath", "Public/Materials/MaterialExpressionParticleSize.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionParticleSize>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMaterialExpressionParticleSize_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionParticleSize_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionParticleSize_Statics::ClassParams = {
	&UMaterialExpressionParticleSize::StaticClass,
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
	0x000020B0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionParticleSize_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialExpressionParticleSize_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialExpressionParticleSize()
{
	if (!Z_Registration_Info_UClass_UMaterialExpressionParticleSize.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionParticleSize.OuterSingleton, Z_Construct_UClass_UMaterialExpressionParticleSize_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialExpressionParticleSize.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UMaterialExpressionParticleSize>()
{
	return UMaterialExpressionParticleSize::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionParticleSize);
UMaterialExpressionParticleSize::~UMaterialExpressionParticleSize() {}
// End Class UMaterialExpressionParticleSize

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionParticleSize_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionParticleSize, UMaterialExpressionParticleSize::StaticClass, TEXT("UMaterialExpressionParticleSize"), &Z_Registration_Info_UClass_UMaterialExpressionParticleSize, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionParticleSize), 3978458493U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionParticleSize_h_2367412297(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionParticleSize_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionParticleSize_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
