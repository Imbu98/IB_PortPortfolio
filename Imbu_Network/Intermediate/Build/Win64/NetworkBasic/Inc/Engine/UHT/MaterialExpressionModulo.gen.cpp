// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/Materials/MaterialExpressionModulo.h"
#include "Runtime/Engine/Public/Materials/MaterialExpression.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionModulo() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionModulo();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionModulo_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UMaterialExpressionModulo
void UMaterialExpressionModulo::StaticRegisterNativesUMaterialExpressionModulo()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionModulo);
UClass* Z_Construct_UClass_UMaterialExpressionModulo_NoRegister()
{
	return UMaterialExpressionModulo::StaticClass();
}
struct Z_Construct_UClass_UMaterialExpressionModulo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionModulo.h" },
		{ "ModuleRelativePath", "Public/Materials/MaterialExpressionModulo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[] = {
		{ "ModuleRelativePath", "Public/Materials/MaterialExpressionModulo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[] = {
		{ "ModuleRelativePath", "Public/Materials/MaterialExpressionModulo.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_A;
	static const UECodeGen_Private::FStructPropertyParams NewProp_B;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionModulo>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionModulo_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionModulo, A), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_A_MetaData), NewProp_A_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionModulo_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionModulo, B), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_B_MetaData), NewProp_B_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionModulo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionModulo_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionModulo_Statics::NewProp_B,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionModulo_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMaterialExpressionModulo_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionModulo_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionModulo_Statics::ClassParams = {
	&UMaterialExpressionModulo::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMaterialExpressionModulo_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionModulo_Statics::PropPointers),
	0,
	0x000820B0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionModulo_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialExpressionModulo_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialExpressionModulo()
{
	if (!Z_Registration_Info_UClass_UMaterialExpressionModulo.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionModulo.OuterSingleton, Z_Construct_UClass_UMaterialExpressionModulo_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialExpressionModulo.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UMaterialExpressionModulo>()
{
	return UMaterialExpressionModulo::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionModulo);
UMaterialExpressionModulo::~UMaterialExpressionModulo() {}
// End Class UMaterialExpressionModulo

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionModulo_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionModulo, UMaterialExpressionModulo::StaticClass, TEXT("UMaterialExpressionModulo"), &Z_Registration_Info_UClass_UMaterialExpressionModulo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionModulo), 185436958U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionModulo_h_4100729752(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionModulo_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionModulo_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
