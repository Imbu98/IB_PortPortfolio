// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/Materials/MaterialExpressionPostVolumeUserFlagTest.h"
#include "Runtime/Engine/Public/Materials/MaterialExpression.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionPostVolumeUserFlagTest() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionPostVolumeUserFlagTest();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionPostVolumeUserFlagTest_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UMaterialExpressionPostVolumeUserFlagTest
void UMaterialExpressionPostVolumeUserFlagTest::StaticRegisterNativesUMaterialExpressionPostVolumeUserFlagTest()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionPostVolumeUserFlagTest);
UClass* Z_Construct_UClass_UMaterialExpressionPostVolumeUserFlagTest_NoRegister()
{
	return UMaterialExpressionPostVolumeUserFlagTest::StaticClass();
}
struct Z_Construct_UClass_UMaterialExpressionPostVolumeUserFlagTest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Materials/MaterialExpressionPostVolumeUserFlagTest.h" },
		{ "ModuleRelativePath", "Public/Materials/MaterialExpressionPostVolumeUserFlagTest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BitIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/Materials/MaterialExpressionPostVolumeUserFlagTest.h" },
		{ "RequiredInput", "false" },
		{ "ToolTip", "Defaults to 'ConstBitIndex' if not specified" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConstBitIndex_MetaData[] = {
		{ "Category", "MaterialExpressionPostVolumeUserFlagTest" },
		{ "Comment", "/** only used if Input is not hooked up */" },
		{ "ModuleRelativePath", "Public/Materials/MaterialExpressionPostVolumeUserFlagTest.h" },
		{ "OverridingInputProperty", "BitIndex" },
		{ "ToolTip", "only used if Input is not hooked up" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_BitIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ConstBitIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionPostVolumeUserFlagTest>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionPostVolumeUserFlagTest_Statics::NewProp_BitIndex = { "BitIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionPostVolumeUserFlagTest, BitIndex), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BitIndex_MetaData), NewProp_BitIndex_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMaterialExpressionPostVolumeUserFlagTest_Statics::NewProp_ConstBitIndex = { "ConstBitIndex", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionPostVolumeUserFlagTest, ConstBitIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConstBitIndex_MetaData), NewProp_ConstBitIndex_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionPostVolumeUserFlagTest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionPostVolumeUserFlagTest_Statics::NewProp_BitIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionPostVolumeUserFlagTest_Statics::NewProp_ConstBitIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionPostVolumeUserFlagTest_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMaterialExpressionPostVolumeUserFlagTest_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionPostVolumeUserFlagTest_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionPostVolumeUserFlagTest_Statics::ClassParams = {
	&UMaterialExpressionPostVolumeUserFlagTest::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMaterialExpressionPostVolumeUserFlagTest_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionPostVolumeUserFlagTest_Statics::PropPointers),
	0,
	0x000800B0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionPostVolumeUserFlagTest_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialExpressionPostVolumeUserFlagTest_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialExpressionPostVolumeUserFlagTest()
{
	if (!Z_Registration_Info_UClass_UMaterialExpressionPostVolumeUserFlagTest.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionPostVolumeUserFlagTest.OuterSingleton, Z_Construct_UClass_UMaterialExpressionPostVolumeUserFlagTest_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialExpressionPostVolumeUserFlagTest.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UMaterialExpressionPostVolumeUserFlagTest>()
{
	return UMaterialExpressionPostVolumeUserFlagTest::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionPostVolumeUserFlagTest);
UMaterialExpressionPostVolumeUserFlagTest::~UMaterialExpressionPostVolumeUserFlagTest() {}
// End Class UMaterialExpressionPostVolumeUserFlagTest

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionPostVolumeUserFlagTest_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionPostVolumeUserFlagTest, UMaterialExpressionPostVolumeUserFlagTest::StaticClass, TEXT("UMaterialExpressionPostVolumeUserFlagTest"), &Z_Registration_Info_UClass_UMaterialExpressionPostVolumeUserFlagTest, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionPostVolumeUserFlagTest), 1705387503U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionPostVolumeUserFlagTest_h_1272434416(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionPostVolumeUserFlagTest_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionPostVolumeUserFlagTest_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
