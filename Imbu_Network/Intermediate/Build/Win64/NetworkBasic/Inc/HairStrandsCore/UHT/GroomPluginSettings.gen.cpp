// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HairStrandsCore/Public/GroomPluginSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGroomPluginSettings() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
HAIRSTRANDSCORE_API UClass* Z_Construct_UClass_UGroomPluginSettings();
HAIRSTRANDSCORE_API UClass* Z_Construct_UClass_UGroomPluginSettings_NoRegister();
UPackage* Z_Construct_UPackage__Script_HairStrandsCore();
// End Cross Module References

// Begin Class UGroomPluginSettings
void UGroomPluginSettings::StaticRegisterNativesUGroomPluginSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGroomPluginSettings);
UClass* Z_Construct_UClass_UGroomPluginSettings_NoRegister()
{
	return UGroomPluginSettings::StaticClass();
}
struct Z_Construct_UClass_UGroomPluginSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** Settings for the groom plug-in */" },
		{ "IncludePath", "GroomPluginSettings.h" },
		{ "ModuleRelativePath", "Public/GroomPluginSettings.h" },
		{ "ToolTip", "Settings for the groom plug-in" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroomCacheLookAheadBuffer_MetaData[] = {
		{ "Category", "GroomCache" },
		{ "ClampMax", "60.0" },
		{ "ClampMin", "0.05" },
		{ "Comment", "/** The amount of groom cache animation (in seconds) to pre-load ahead of time by the streaming manager */" },
		{ "DisplayName", "Look-Ahead Buffer (in seconds)" },
		{ "ModuleRelativePath", "Public/GroomPluginSettings.h" },
		{ "ToolTip", "The amount of groom cache animation (in seconds) to pre-load ahead of time by the streaming manager" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GroomCacheLookAheadBuffer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGroomPluginSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGroomPluginSettings_Statics::NewProp_GroomCacheLookAheadBuffer = { "GroomCacheLookAheadBuffer", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGroomPluginSettings, GroomCacheLookAheadBuffer), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroomCacheLookAheadBuffer_MetaData), NewProp_GroomCacheLookAheadBuffer_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGroomPluginSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomPluginSettings_Statics::NewProp_GroomCacheLookAheadBuffer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGroomPluginSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGroomPluginSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_HairStrandsCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGroomPluginSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGroomPluginSettings_Statics::ClassParams = {
	&UGroomPluginSettings::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGroomPluginSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGroomPluginSettings_Statics::PropPointers),
	0,
	0x001000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGroomPluginSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UGroomPluginSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGroomPluginSettings()
{
	if (!Z_Registration_Info_UClass_UGroomPluginSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGroomPluginSettings.OuterSingleton, Z_Construct_UClass_UGroomPluginSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGroomPluginSettings.OuterSingleton;
}
template<> HAIRSTRANDSCORE_API UClass* StaticClass<UGroomPluginSettings>()
{
	return UGroomPluginSettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGroomPluginSettings);
UGroomPluginSettings::~UGroomPluginSettings() {}
// End Class UGroomPluginSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomPluginSettings_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGroomPluginSettings, UGroomPluginSettings::StaticClass, TEXT("UGroomPluginSettings"), &Z_Registration_Info_UClass_UGroomPluginSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGroomPluginSettings), 135356179U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomPluginSettings_h_2205860282(TEXT("/Script/HairStrandsCore"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomPluginSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomPluginSettings_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
