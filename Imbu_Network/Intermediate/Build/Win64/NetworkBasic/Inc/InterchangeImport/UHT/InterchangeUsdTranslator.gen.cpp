// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Import/Public/Usd/InterchangeUsdTranslator.h"
#include "USDClasses/Public/USDStageOptions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterchangeUsdTranslator() {}

// Begin Cross Module References
INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangeTranslatorBase();
INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangeTranslatorSettings();
INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UInterchangeAnimationPayloadInterface_NoRegister();
INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UInterchangeBlockedTexturePayloadInterface_NoRegister();
INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UInterchangeMeshPayloadInterface_NoRegister();
INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UInterchangeTexturePayloadInterface_NoRegister();
INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UInterchangeUSDTranslator();
INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UInterchangeUSDTranslator_NoRegister();
INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UInterchangeUsdTranslatorSettings();
INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UInterchangeUsdTranslatorSettings_NoRegister();
UNREALUSDWRAPPER_API UEnum* Z_Construct_UEnum_UnrealUSDWrapper_EUsdInterpolationType();
UPackage* Z_Construct_UPackage__Script_InterchangeImport();
USDCLASSES_API UScriptStruct* Z_Construct_UScriptStruct_FUsdStageOptions();
// End Cross Module References

// Begin Class UInterchangeUsdTranslatorSettings
void UInterchangeUsdTranslatorSettings::StaticRegisterNativesUInterchangeUsdTranslatorSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeUsdTranslatorSettings);
UClass* Z_Construct_UClass_UInterchangeUsdTranslatorSettings_NoRegister()
{
	return UInterchangeUsdTranslatorSettings::StaticClass();
}
struct Z_Construct_UClass_UInterchangeUsdTranslatorSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Usd/InterchangeUsdTranslator.h" },
		{ "ModuleRelativePath", "Public/Usd/InterchangeUsdTranslator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GeometryPurpose_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "/Script/UnrealUSDWrapper.EUsdPurpose" },
		{ "Category", "USD Translator" },
		{ "Comment", "/** Only import geometry prims with these specific purposes from the USD file */" },
		{ "ModuleRelativePath", "Public/Usd/InterchangeUsdTranslator.h" },
		{ "ToolTip", "Only import geometry prims with these specific purposes from the USD file" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RenderContext_MetaData[] = {
		{ "Category", "USD Translator" },
		{ "Comment", "/** Specifies which set of shaders to use when parsing USD materials, in addition to the universal render context. */" },
		{ "ModuleRelativePath", "Public/Usd/InterchangeUsdTranslator.h" },
		{ "ToolTip", "Specifies which set of shaders to use when parsing USD materials, in addition to the universal render context." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialPurpose_MetaData[] = {
		{ "Category", "USD Translator" },
		{ "Comment", "/** Specifies which material purpose to use when parsing USD material bindings, in addition to the \"allPurpose\" fallback */" },
		{ "ModuleRelativePath", "Public/Usd/InterchangeUsdTranslator.h" },
		{ "ToolTip", "Specifies which material purpose to use when parsing USD material bindings, in addition to the \"allPurpose\" fallback" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InterpolationType_MetaData[] = {
		{ "Category", "USD Translator" },
		{ "Comment", "/** Describes how to interpolate between a timeSample value and the next */" },
		{ "ModuleRelativePath", "Public/Usd/InterchangeUsdTranslator.h" },
		{ "ToolTip", "Describes how to interpolate between a timeSample value and the next" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideStageOptions_MetaData[] = {
		{ "Category", "USD Translator" },
		{ "Comment", "/** Whether to use the specified StageOptions instead of the stage's own settings */" },
		{ "ModuleRelativePath", "Public/Usd/InterchangeUsdTranslator.h" },
		{ "ToolTip", "Whether to use the specified StageOptions instead of the stage's own settings" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StageOptions_MetaData[] = {
		{ "Category", "USD Translator" },
		{ "Comment", "/** Custom StageOptions to use for the stage */" },
		{ "EditCondition", "bOverrideStageOptions" },
		{ "ModuleRelativePath", "Public/Usd/InterchangeUsdTranslator.h" },
		{ "ToolTip", "Custom StageOptions to use for the stage" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_GeometryPurpose;
	static const UECodeGen_Private::FNamePropertyParams NewProp_RenderContext;
	static const UECodeGen_Private::FNamePropertyParams NewProp_MaterialPurpose;
	static const UECodeGen_Private::FBytePropertyParams NewProp_InterpolationType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InterpolationType;
	static void NewProp_bOverrideStageOptions_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideStageOptions;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StageOptions;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeUsdTranslatorSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UInterchangeUsdTranslatorSettings_Statics::NewProp_GeometryPurpose = { "GeometryPurpose", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInterchangeUsdTranslatorSettings, GeometryPurpose), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GeometryPurpose_MetaData), NewProp_GeometryPurpose_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UInterchangeUsdTranslatorSettings_Statics::NewProp_RenderContext = { "RenderContext", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInterchangeUsdTranslatorSettings, RenderContext), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RenderContext_MetaData), NewProp_RenderContext_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UInterchangeUsdTranslatorSettings_Statics::NewProp_MaterialPurpose = { "MaterialPurpose", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInterchangeUsdTranslatorSettings, MaterialPurpose), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialPurpose_MetaData), NewProp_MaterialPurpose_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UInterchangeUsdTranslatorSettings_Statics::NewProp_InterpolationType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UInterchangeUsdTranslatorSettings_Statics::NewProp_InterpolationType = { "InterpolationType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInterchangeUsdTranslatorSettings, InterpolationType), Z_Construct_UEnum_UnrealUSDWrapper_EUsdInterpolationType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InterpolationType_MetaData), NewProp_InterpolationType_MetaData) }; // 4073327177
void Z_Construct_UClass_UInterchangeUsdTranslatorSettings_Statics::NewProp_bOverrideStageOptions_SetBit(void* Obj)
{
	((UInterchangeUsdTranslatorSettings*)Obj)->bOverrideStageOptions = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterchangeUsdTranslatorSettings_Statics::NewProp_bOverrideStageOptions = { "bOverrideStageOptions", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UInterchangeUsdTranslatorSettings), &Z_Construct_UClass_UInterchangeUsdTranslatorSettings_Statics::NewProp_bOverrideStageOptions_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideStageOptions_MetaData), NewProp_bOverrideStageOptions_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInterchangeUsdTranslatorSettings_Statics::NewProp_StageOptions = { "StageOptions", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInterchangeUsdTranslatorSettings, StageOptions), Z_Construct_UScriptStruct_FUsdStageOptions, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StageOptions_MetaData), NewProp_StageOptions_MetaData) }; // 4013887880
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInterchangeUsdTranslatorSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeUsdTranslatorSettings_Statics::NewProp_GeometryPurpose,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeUsdTranslatorSettings_Statics::NewProp_RenderContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeUsdTranslatorSettings_Statics::NewProp_MaterialPurpose,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeUsdTranslatorSettings_Statics::NewProp_InterpolationType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeUsdTranslatorSettings_Statics::NewProp_InterpolationType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeUsdTranslatorSettings_Statics::NewProp_bOverrideStageOptions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeUsdTranslatorSettings_Statics::NewProp_StageOptions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeUsdTranslatorSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInterchangeUsdTranslatorSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterchangeTranslatorSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_InterchangeImport,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeUsdTranslatorSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeUsdTranslatorSettings_Statics::ClassParams = {
	&UInterchangeUsdTranslatorSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UInterchangeUsdTranslatorSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeUsdTranslatorSettings_Statics::PropPointers),
	0,
	0x000810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeUsdTranslatorSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UInterchangeUsdTranslatorSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInterchangeUsdTranslatorSettings()
{
	if (!Z_Registration_Info_UClass_UInterchangeUsdTranslatorSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeUsdTranslatorSettings.OuterSingleton, Z_Construct_UClass_UInterchangeUsdTranslatorSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInterchangeUsdTranslatorSettings.OuterSingleton;
}
template<> INTERCHANGEIMPORT_API UClass* StaticClass<UInterchangeUsdTranslatorSettings>()
{
	return UInterchangeUsdTranslatorSettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeUsdTranslatorSettings);
UInterchangeUsdTranslatorSettings::~UInterchangeUsdTranslatorSettings() {}
// End Class UInterchangeUsdTranslatorSettings

// Begin Class UInterchangeUSDTranslator
void UInterchangeUSDTranslator::StaticRegisterNativesUInterchangeUSDTranslator()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeUSDTranslator);
UClass* Z_Construct_UClass_UInterchangeUSDTranslator_NoRegister()
{
	return UInterchangeUSDTranslator::StaticClass();
}
struct Z_Construct_UClass_UInterchangeUSDTranslator_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/* For now, USD Interchange (FBX parity) translator supports textures, materials and static meshes */" },
		{ "IncludePath", "Usd/InterchangeUsdTranslator.h" },
		{ "ModuleRelativePath", "Public/Usd/InterchangeUsdTranslator.h" },
		{ "ToolTip", "For now, USD Interchange (FBX parity) translator supports textures, materials and static meshes" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TranslatorSettings_MetaData[] = {
		{ "ModuleRelativePath", "Public/Usd/InterchangeUsdTranslator.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TranslatorSettings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeUSDTranslator>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInterchangeUSDTranslator_Statics::NewProp_TranslatorSettings = { "TranslatorSettings", nullptr, (EPropertyFlags)0x0144000000202000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInterchangeUSDTranslator, TranslatorSettings), Z_Construct_UClass_UInterchangeUsdTranslatorSettings_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TranslatorSettings_MetaData), NewProp_TranslatorSettings_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInterchangeUSDTranslator_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeUSDTranslator_Statics::NewProp_TranslatorSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeUSDTranslator_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInterchangeUSDTranslator_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterchangeTranslatorBase,
	(UObject* (*)())Z_Construct_UPackage__Script_InterchangeImport,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeUSDTranslator_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UInterchangeUSDTranslator_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UInterchangeMeshPayloadInterface_NoRegister, (int32)VTABLE_OFFSET(UInterchangeUSDTranslator, IInterchangeMeshPayloadInterface), false },  // 159805936
	{ Z_Construct_UClass_UInterchangeTexturePayloadInterface_NoRegister, (int32)VTABLE_OFFSET(UInterchangeUSDTranslator, IInterchangeTexturePayloadInterface), false },  // 3669720233
	{ Z_Construct_UClass_UInterchangeBlockedTexturePayloadInterface_NoRegister, (int32)VTABLE_OFFSET(UInterchangeUSDTranslator, IInterchangeBlockedTexturePayloadInterface), false },  // 408223474
	{ Z_Construct_UClass_UInterchangeAnimationPayloadInterface_NoRegister, (int32)VTABLE_OFFSET(UInterchangeUSDTranslator, IInterchangeAnimationPayloadInterface), false },  // 790242820
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeUSDTranslator_Statics::ClassParams = {
	&UInterchangeUSDTranslator::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UInterchangeUSDTranslator_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeUSDTranslator_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeUSDTranslator_Statics::Class_MetaDataParams), Z_Construct_UClass_UInterchangeUSDTranslator_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInterchangeUSDTranslator()
{
	if (!Z_Registration_Info_UClass_UInterchangeUSDTranslator.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeUSDTranslator.OuterSingleton, Z_Construct_UClass_UInterchangeUSDTranslator_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInterchangeUSDTranslator.OuterSingleton;
}
template<> INTERCHANGEIMPORT_API UClass* StaticClass<UInterchangeUSDTranslator>()
{
	return UInterchangeUSDTranslator::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeUSDTranslator);
UInterchangeUSDTranslator::~UInterchangeUSDTranslator() {}
// End Class UInterchangeUSDTranslator

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Usd_InterchangeUsdTranslator_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInterchangeUsdTranslatorSettings, UInterchangeUsdTranslatorSettings::StaticClass, TEXT("UInterchangeUsdTranslatorSettings"), &Z_Registration_Info_UClass_UInterchangeUsdTranslatorSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeUsdTranslatorSettings), 1072781207U) },
		{ Z_Construct_UClass_UInterchangeUSDTranslator, UInterchangeUSDTranslator::StaticClass, TEXT("UInterchangeUSDTranslator"), &Z_Registration_Info_UClass_UInterchangeUSDTranslator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeUSDTranslator), 2613498275U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Usd_InterchangeUsdTranslator_h_1112841415(TEXT("/Script/InterchangeImport"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Usd_InterchangeUsdTranslator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Usd_InterchangeUsdTranslator_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
