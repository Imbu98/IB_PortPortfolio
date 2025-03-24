// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LiveLink/Private/LiveLinkMessageBusSourceSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiveLinkMessageBusSourceSettings() {}

// Begin Cross Module References
LIVELINK_API UClass* Z_Construct_UClass_ULiveLinkMessageBusSourceSettings();
LIVELINK_API UClass* Z_Construct_UClass_ULiveLinkMessageBusSourceSettings_NoRegister();
LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkSourceSettings();
UPackage* Z_Construct_UPackage__Script_LiveLink();
// End Cross Module References

// Begin Class ULiveLinkMessageBusSourceSettings
void ULiveLinkMessageBusSourceSettings::StaticRegisterNativesULiveLinkMessageBusSourceSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULiveLinkMessageBusSourceSettings);
UClass* Z_Construct_UClass_ULiveLinkMessageBusSourceSettings_NoRegister()
{
	return ULiveLinkMessageBusSourceSettings::StaticClass();
}
struct Z_Construct_UClass_ULiveLinkMessageBusSourceSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Settings for LiveLinkMessageBusSource.\n * Used to apply default Evaluation mode from project settings when constructed\n */" },
		{ "IncludePath", "LiveLinkMessageBusSourceSettings.h" },
		{ "ModuleRelativePath", "Private/LiveLinkMessageBusSourceSettings.h" },
		{ "ToolTip", "Settings for LiveLinkMessageBusSource.\nUsed to apply default Evaluation mode from project settings when constructed" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULiveLinkMessageBusSourceSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ULiveLinkMessageBusSourceSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ULiveLinkSourceSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_LiveLink,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkMessageBusSourceSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULiveLinkMessageBusSourceSettings_Statics::ClassParams = {
	&ULiveLinkMessageBusSourceSettings::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkMessageBusSourceSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_ULiveLinkMessageBusSourceSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULiveLinkMessageBusSourceSettings()
{
	if (!Z_Registration_Info_UClass_ULiveLinkMessageBusSourceSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULiveLinkMessageBusSourceSettings.OuterSingleton, Z_Construct_UClass_ULiveLinkMessageBusSourceSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULiveLinkMessageBusSourceSettings.OuterSingleton;
}
template<> LIVELINK_API UClass* StaticClass<ULiveLinkMessageBusSourceSettings>()
{
	return ULiveLinkMessageBusSourceSettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULiveLinkMessageBusSourceSettings);
ULiveLinkMessageBusSourceSettings::~ULiveLinkMessageBusSourceSettings() {}
// End Class ULiveLinkMessageBusSourceSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Private_LiveLinkMessageBusSourceSettings_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULiveLinkMessageBusSourceSettings, ULiveLinkMessageBusSourceSettings::StaticClass, TEXT("ULiveLinkMessageBusSourceSettings"), &Z_Registration_Info_UClass_ULiveLinkMessageBusSourceSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULiveLinkMessageBusSourceSettings), 1916718708U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Private_LiveLinkMessageBusSourceSettings_h_1462969959(TEXT("/Script/LiveLink"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Private_LiveLinkMessageBusSourceSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Private_LiveLinkMessageBusSourceSettings_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
