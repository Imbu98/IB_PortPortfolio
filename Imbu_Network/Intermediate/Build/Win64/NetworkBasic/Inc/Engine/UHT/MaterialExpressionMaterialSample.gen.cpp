// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Internal/Materials/MaterialExpressionMaterialSample.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionMaterialSample() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionMaterialSample();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionMaterialSample_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UMaterialExpressionMaterialSample
void UMaterialExpressionMaterialSample::StaticRegisterNativesUMaterialExpressionMaterialSample()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionMaterialSample);
UClass* Z_Construct_UClass_UMaterialExpressionMaterialSample_NoRegister()
{
	return UMaterialExpressionMaterialSample::StaticClass();
}
struct Z_Construct_UClass_UMaterialExpressionMaterialSample_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Materials/MaterialExpressionMaterialSample.h" },
		{ "ModuleRelativePath", "Internal/Materials/MaterialExpressionMaterialSample.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialReference_MetaData[] = {
		{ "Category", "MaterialExpressionMaterialSample" },
		{ "ModuleRelativePath", "Internal/Materials/MaterialExpressionMaterialSample.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MaterialReference;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionMaterialSample>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMaterialExpressionMaterialSample_Statics::NewProp_MaterialReference = { "MaterialReference", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionMaterialSample, MaterialReference), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialReference_MetaData), NewProp_MaterialReference_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionMaterialSample_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionMaterialSample_Statics::NewProp_MaterialReference,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionMaterialSample_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMaterialExpressionMaterialSample_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionMaterialSample_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionMaterialSample_Statics::ClassParams = {
	&UMaterialExpressionMaterialSample::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMaterialExpressionMaterialSample_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionMaterialSample_Statics::PropPointers),
	0,
	0x000800B0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionMaterialSample_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialExpressionMaterialSample_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialExpressionMaterialSample()
{
	if (!Z_Registration_Info_UClass_UMaterialExpressionMaterialSample.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionMaterialSample.OuterSingleton, Z_Construct_UClass_UMaterialExpressionMaterialSample_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialExpressionMaterialSample.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UMaterialExpressionMaterialSample>()
{
	return UMaterialExpressionMaterialSample::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionMaterialSample);
UMaterialExpressionMaterialSample::~UMaterialExpressionMaterialSample() {}
// End Class UMaterialExpressionMaterialSample

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Internal_Materials_MaterialExpressionMaterialSample_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionMaterialSample, UMaterialExpressionMaterialSample::StaticClass, TEXT("UMaterialExpressionMaterialSample"), &Z_Registration_Info_UClass_UMaterialExpressionMaterialSample, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionMaterialSample), 4285715639U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Internal_Materials_MaterialExpressionMaterialSample_h_3230801507(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Internal_Materials_MaterialExpressionMaterialSample_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Internal_Materials_MaterialExpressionMaterialSample_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
