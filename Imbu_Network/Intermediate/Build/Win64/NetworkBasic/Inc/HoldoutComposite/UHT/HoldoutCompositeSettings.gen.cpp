// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoldoutComposite/Public/HoldoutCompositeSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoldoutCompositeSettings() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftClassPath();
DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
HOLDOUTCOMPOSITE_API UClass* Z_Construct_UClass_UHoldoutCompositeSettings();
HOLDOUTCOMPOSITE_API UClass* Z_Construct_UClass_UHoldoutCompositeSettings_NoRegister();
UPackage* Z_Construct_UPackage__Script_HoldoutComposite();
// End Cross Module References

// Begin Class UHoldoutCompositeSettings
void UHoldoutCompositeSettings::StaticRegisterNativesUHoldoutCompositeSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHoldoutCompositeSettings);
UClass* Z_Construct_UClass_UHoldoutCompositeSettings_NoRegister()
{
	return UHoldoutCompositeSettings::StaticClass();
}
struct Z_Construct_UClass_UHoldoutCompositeSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Settings for the HoldoutComposite module.\n */" },
		{ "DisplayName", "Holdout Composite" },
		{ "IncludePath", "HoldoutCompositeSettings.h" },
		{ "ModuleRelativePath", "Public/HoldoutCompositeSettings.h" },
		{ "ToolTip", "Settings for the HoldoutComposite module." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCompositeFollowsSceneExposure_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** When enabled, the view global exposure is applied onto the separate render when composited. */" },
		{ "ModuleRelativePath", "Public/HoldoutCompositeSettings.h" },
		{ "ToolTip", "When enabled, the view global exposure is applied onto the separate render when composited." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCompositeSupportsSSR_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** When enabled, the separate composited render is also used to update screen-space reflections. */" },
		{ "ModuleRelativePath", "Public/HoldoutCompositeSettings.h" },
		{ "ToolTip", "When enabled, the separate composited render is also used to update screen-space reflections." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SceneViewExtensionPriority_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** Composite (scene view extension) pass priority, which defaults to before OpenColorIO. */" },
		{ "ModuleRelativePath", "Public/HoldoutCompositeSettings.h" },
		{ "ToolTip", "Composite (scene view extension) pass priority, which defaults to before OpenColorIO." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisabledPrimitiveClasses_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** Primitive component classes that do not support the holdout composite.*/" },
		{ "ModuleRelativePath", "Public/HoldoutCompositeSettings.h" },
		{ "ToolTip", "Primitive component classes that do not support the holdout composite." },
	};
#endif // WITH_METADATA
	static void NewProp_bCompositeFollowsSceneExposure_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCompositeFollowsSceneExposure;
	static void NewProp_bCompositeSupportsSSR_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCompositeSupportsSSR;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SceneViewExtensionPriority;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DisabledPrimitiveClasses_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DisabledPrimitiveClasses;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoldoutCompositeSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UHoldoutCompositeSettings_Statics::NewProp_bCompositeFollowsSceneExposure_SetBit(void* Obj)
{
	((UHoldoutCompositeSettings*)Obj)->bCompositeFollowsSceneExposure = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoldoutCompositeSettings_Statics::NewProp_bCompositeFollowsSceneExposure = { "bCompositeFollowsSceneExposure", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoldoutCompositeSettings), &Z_Construct_UClass_UHoldoutCompositeSettings_Statics::NewProp_bCompositeFollowsSceneExposure_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCompositeFollowsSceneExposure_MetaData), NewProp_bCompositeFollowsSceneExposure_MetaData) };
void Z_Construct_UClass_UHoldoutCompositeSettings_Statics::NewProp_bCompositeSupportsSSR_SetBit(void* Obj)
{
	((UHoldoutCompositeSettings*)Obj)->bCompositeSupportsSSR = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoldoutCompositeSettings_Statics::NewProp_bCompositeSupportsSSR = { "bCompositeSupportsSSR", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoldoutCompositeSettings), &Z_Construct_UClass_UHoldoutCompositeSettings_Statics::NewProp_bCompositeSupportsSSR_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCompositeSupportsSSR_MetaData), NewProp_bCompositeSupportsSSR_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoldoutCompositeSettings_Statics::NewProp_SceneViewExtensionPriority = { "SceneViewExtensionPriority", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoldoutCompositeSettings, SceneViewExtensionPriority), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SceneViewExtensionPriority_MetaData), NewProp_SceneViewExtensionPriority_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoldoutCompositeSettings_Statics::NewProp_DisabledPrimitiveClasses_Inner = { "DisabledPrimitiveClasses", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoldoutCompositeSettings_Statics::NewProp_DisabledPrimitiveClasses = { "DisabledPrimitiveClasses", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoldoutCompositeSettings, DisabledPrimitiveClasses), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisabledPrimitiveClasses_MetaData), NewProp_DisabledPrimitiveClasses_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoldoutCompositeSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoldoutCompositeSettings_Statics::NewProp_bCompositeFollowsSceneExposure,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoldoutCompositeSettings_Statics::NewProp_bCompositeSupportsSSR,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoldoutCompositeSettings_Statics::NewProp_SceneViewExtensionPriority,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoldoutCompositeSettings_Statics::NewProp_DisabledPrimitiveClasses_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoldoutCompositeSettings_Statics::NewProp_DisabledPrimitiveClasses,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoldoutCompositeSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UHoldoutCompositeSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_HoldoutComposite,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoldoutCompositeSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoldoutCompositeSettings_Statics::ClassParams = {
	&UHoldoutCompositeSettings::StaticClass,
	"HoldoutComposite",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UHoldoutCompositeSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UHoldoutCompositeSettings_Statics::PropPointers),
	0,
	0x000800A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoldoutCompositeSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UHoldoutCompositeSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHoldoutCompositeSettings()
{
	if (!Z_Registration_Info_UClass_UHoldoutCompositeSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoldoutCompositeSettings.OuterSingleton, Z_Construct_UClass_UHoldoutCompositeSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHoldoutCompositeSettings.OuterSingleton;
}
template<> HOLDOUTCOMPOSITE_API UClass* StaticClass<UHoldoutCompositeSettings>()
{
	return UHoldoutCompositeSettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHoldoutCompositeSettings);
UHoldoutCompositeSettings::~UHoldoutCompositeSettings() {}
// End Class UHoldoutCompositeSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Compositing_HoldoutComposite_Source_HoldoutComposite_Public_HoldoutCompositeSettings_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHoldoutCompositeSettings, UHoldoutCompositeSettings::StaticClass, TEXT("UHoldoutCompositeSettings"), &Z_Registration_Info_UClass_UHoldoutCompositeSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoldoutCompositeSettings), 2035155677U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Compositing_HoldoutComposite_Source_HoldoutComposite_Public_HoldoutCompositeSettings_h_4225052009(TEXT("/Script/HoldoutComposite"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Compositing_HoldoutComposite_Source_HoldoutComposite_Public_HoldoutCompositeSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Compositing_HoldoutComposite_Source_HoldoutComposite_Public_HoldoutCompositeSettings_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
