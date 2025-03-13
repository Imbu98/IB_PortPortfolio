// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/Materials/MaterialExpressionFirstPersonOutput.h"
#include "Runtime/Engine/Public/Materials/MaterialExpression.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionFirstPersonOutput() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionCustomOutput();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionFirstPersonOutput();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionFirstPersonOutput_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UMaterialExpressionFirstPersonOutput
void UMaterialExpressionFirstPersonOutput::StaticRegisterNativesUMaterialExpressionFirstPersonOutput()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionFirstPersonOutput);
UClass* Z_Construct_UClass_UMaterialExpressionFirstPersonOutput_NoRegister()
{
	return UMaterialExpressionFirstPersonOutput::StaticClass();
}
struct Z_Construct_UClass_UMaterialExpressionFirstPersonOutput_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** Material output expression for writing first person rendering properties. */" },
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionFirstPersonOutput.h" },
		{ "ModuleRelativePath", "Public/Materials/MaterialExpressionFirstPersonOutput.h" },
		{ "ToolTip", "Material output expression for writing first person rendering properties." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FirstPersonInterpolationAlpha_MetaData[] = {
		{ "ModuleRelativePath", "Public/Materials/MaterialExpressionFirstPersonOutput.h" },
		{ "RequiredInput", "false" },
		{ "ToolTip", "Interpolates between world space and first person space. Valid range is [0, 1], from world space to first person space. Defaults to 'ConstFirstPersonInterpolationAlpha' if not specified." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConstFirstPersonInterpolationAlpha_MetaData[] = {
		{ "Category", "First Person" },
		{ "ClampMax", "1.000000" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "/** Only used if FirstPersonInterpolationAlpha is not hooked up. Interpolates between world space and first person space. Valid range is [0, 1], from world space to first person space. */" },
		{ "ModuleRelativePath", "Public/Materials/MaterialExpressionFirstPersonOutput.h" },
		{ "OverridingInputProperty", "FirstPersonInterpolationAlpha" },
		{ "ToolTip", "Only used if FirstPersonInterpolationAlpha is not hooked up. Interpolates between world space and first person space. Valid range is [0, 1], from world space to first person space." },
		{ "UIMax", "1.000000" },
		{ "UIMin", "0.000000" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_FirstPersonInterpolationAlpha;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ConstFirstPersonInterpolationAlpha;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionFirstPersonOutput>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionFirstPersonOutput_Statics::NewProp_FirstPersonInterpolationAlpha = { "FirstPersonInterpolationAlpha", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionFirstPersonOutput, FirstPersonInterpolationAlpha), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FirstPersonInterpolationAlpha_MetaData), NewProp_FirstPersonInterpolationAlpha_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterialExpressionFirstPersonOutput_Statics::NewProp_ConstFirstPersonInterpolationAlpha = { "ConstFirstPersonInterpolationAlpha", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionFirstPersonOutput, ConstFirstPersonInterpolationAlpha), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConstFirstPersonInterpolationAlpha_MetaData), NewProp_ConstFirstPersonInterpolationAlpha_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionFirstPersonOutput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionFirstPersonOutput_Statics::NewProp_FirstPersonInterpolationAlpha,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionFirstPersonOutput_Statics::NewProp_ConstFirstPersonInterpolationAlpha,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionFirstPersonOutput_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMaterialExpressionFirstPersonOutput_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMaterialExpressionCustomOutput,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionFirstPersonOutput_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionFirstPersonOutput_Statics::ClassParams = {
	&UMaterialExpressionFirstPersonOutput::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMaterialExpressionFirstPersonOutput_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionFirstPersonOutput_Statics::PropPointers),
	0,
	0x000820B0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionFirstPersonOutput_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialExpressionFirstPersonOutput_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialExpressionFirstPersonOutput()
{
	if (!Z_Registration_Info_UClass_UMaterialExpressionFirstPersonOutput.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionFirstPersonOutput.OuterSingleton, Z_Construct_UClass_UMaterialExpressionFirstPersonOutput_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialExpressionFirstPersonOutput.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UMaterialExpressionFirstPersonOutput>()
{
	return UMaterialExpressionFirstPersonOutput::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionFirstPersonOutput);
UMaterialExpressionFirstPersonOutput::~UMaterialExpressionFirstPersonOutput() {}
// End Class UMaterialExpressionFirstPersonOutput

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionFirstPersonOutput_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionFirstPersonOutput, UMaterialExpressionFirstPersonOutput::StaticClass, TEXT("UMaterialExpressionFirstPersonOutput"), &Z_Registration_Info_UClass_UMaterialExpressionFirstPersonOutput, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionFirstPersonOutput), 1256450077U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionFirstPersonOutput_h_331670780(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionFirstPersonOutput_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionFirstPersonOutput_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
