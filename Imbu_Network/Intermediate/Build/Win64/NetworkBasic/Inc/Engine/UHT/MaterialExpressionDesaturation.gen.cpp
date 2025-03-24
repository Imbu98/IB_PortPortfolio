// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/Materials/MaterialExpressionDesaturation.h"
#include "Runtime/Engine/Public/Materials/MaterialExpression.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionDesaturation() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionDesaturation();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionDesaturation_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UMaterialExpressionDesaturation
void UMaterialExpressionDesaturation::StaticRegisterNativesUMaterialExpressionDesaturation()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionDesaturation);
UClass* Z_Construct_UClass_UMaterialExpressionDesaturation_NoRegister()
{
	return UMaterialExpressionDesaturation::StaticClass();
}
struct Z_Construct_UClass_UMaterialExpressionDesaturation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionDesaturation.h" },
		{ "ModuleRelativePath", "Public/Materials/MaterialExpressionDesaturation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
		{ "Comment", "// Outputs: Lerp(Input,dot(Input,LuminanceFactors)),Fraction)\n" },
		{ "ModuleRelativePath", "Public/Materials/MaterialExpressionDesaturation.h" },
		{ "ToolTip", "Outputs: Lerp(Input,dot(Input,LuminanceFactors)),Fraction)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Fraction_MetaData[] = {
		{ "ModuleRelativePath", "Public/Materials/MaterialExpressionDesaturation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LuminanceFactors_MetaData[] = {
		{ "Category", "MaterialExpressionDesaturation" },
		{ "Comment", "/* \n\x09 * Luminance factors for converting a color to greyscale.\n\x09 * \n\x09 * The default luminance factors values are now derived from the working color space. For uses cases\n\x09 * outside scene rendering, users are responsible for updating these factors accordingly. For example,\n\x09 * factors derived from an AP1 working color space would not be applicable to UI domain materials that\n\x09 * remain in sRGB/Rec.709 and thus should instead use approximately [0.2126, 0.7152, 0.0722].\n\x09 */" },
		{ "ModuleRelativePath", "Public/Materials/MaterialExpressionDesaturation.h" },
		{ "ShowAsInputPin", "Advanced" },
		{ "ToolTip", "* Luminance factors for converting a color to greyscale.\n*\n* The default luminance factors values are now derived from the working color space. For uses cases\n* outside scene rendering, users are responsible for updating these factors accordingly. For example,\n* factors derived from an AP1 working color space would not be applicable to UI domain materials that\n* remain in sRGB/Rec.709 and thus should instead use approximately [0.2126, 0.7152, 0.0722]." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Fraction;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LuminanceFactors;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionDesaturation>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionDesaturation_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionDesaturation, Input), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_MetaData), NewProp_Input_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionDesaturation_Statics::NewProp_Fraction = { "Fraction", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionDesaturation, Fraction), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Fraction_MetaData), NewProp_Fraction_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionDesaturation_Statics::NewProp_LuminanceFactors = { "LuminanceFactors", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionDesaturation, LuminanceFactors), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LuminanceFactors_MetaData), NewProp_LuminanceFactors_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionDesaturation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionDesaturation_Statics::NewProp_Input,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionDesaturation_Statics::NewProp_Fraction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionDesaturation_Statics::NewProp_LuminanceFactors,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionDesaturation_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMaterialExpressionDesaturation_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionDesaturation_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionDesaturation_Statics::ClassParams = {
	&UMaterialExpressionDesaturation::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMaterialExpressionDesaturation_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionDesaturation_Statics::PropPointers),
	0,
	0x000820B0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionDesaturation_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialExpressionDesaturation_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialExpressionDesaturation()
{
	if (!Z_Registration_Info_UClass_UMaterialExpressionDesaturation.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionDesaturation.OuterSingleton, Z_Construct_UClass_UMaterialExpressionDesaturation_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialExpressionDesaturation.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UMaterialExpressionDesaturation>()
{
	return UMaterialExpressionDesaturation::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionDesaturation);
UMaterialExpressionDesaturation::~UMaterialExpressionDesaturation() {}
// End Class UMaterialExpressionDesaturation

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionDesaturation_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionDesaturation, UMaterialExpressionDesaturation::StaticClass, TEXT("UMaterialExpressionDesaturation"), &Z_Registration_Info_UClass_UMaterialExpressionDesaturation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionDesaturation), 209213230U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionDesaturation_h_1162459135(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionDesaturation_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionDesaturation_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
