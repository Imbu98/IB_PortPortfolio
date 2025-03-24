// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/LevelInstance/LevelInstanceSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelInstanceSettings() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_ULevelInstancePropertyOverridePolicy_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ULevelInstanceSettings();
ENGINE_API UClass* Z_Construct_UClass_ULevelInstanceSettings_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class ULevelInstanceSettings
void ULevelInstanceSettings::StaticRegisterNativesULevelInstanceSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULevelInstanceSettings);
UClass* Z_Construct_UClass_ULevelInstanceSettings_NoRegister()
{
	return ULevelInstanceSettings::StaticClass();
}
struct Z_Construct_UClass_ULevelInstanceSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "LevelInstance/LevelInstanceSettings.h" },
		{ "ModuleRelativePath", "Public/LevelInstance/LevelInstanceSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PropertyOverridePolicyClass_MetaData[] = {
		{ "Comment", "// Keep out of WITH_EDITORONLY_DATA so that it can be properly set in -game\n" },
		{ "ModuleRelativePath", "Public/LevelInstance/LevelInstanceSettings.h" },
		{ "ToolTip", "Keep out of WITH_EDITORONLY_DATA so that it can be properly set in -game" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PropertyOverridePolicy_MetaData[] = {
		{ "ModuleRelativePath", "Public/LevelInstance/LevelInstanceSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsLevelInstanceDisabled_MetaData[] = {
		{ "ModuleRelativePath", "Public/LevelInstance/LevelInstanceSettings.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_PropertyOverridePolicyClass;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PropertyOverridePolicy;
	static void NewProp_bIsLevelInstanceDisabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsLevelInstanceDisabled;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULevelInstanceSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ULevelInstanceSettings_Statics::NewProp_PropertyOverridePolicyClass = { "PropertyOverridePolicyClass", nullptr, (EPropertyFlags)0x0020080000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULevelInstanceSettings, PropertyOverridePolicyClass), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PropertyOverridePolicyClass_MetaData), NewProp_PropertyOverridePolicyClass_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULevelInstanceSettings_Statics::NewProp_PropertyOverridePolicy = { "PropertyOverridePolicy", nullptr, (EPropertyFlags)0x0124080800002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULevelInstanceSettings, PropertyOverridePolicy), Z_Construct_UClass_ULevelInstancePropertyOverridePolicy_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PropertyOverridePolicy_MetaData), NewProp_PropertyOverridePolicy_MetaData) };
void Z_Construct_UClass_ULevelInstanceSettings_Statics::NewProp_bIsLevelInstanceDisabled_SetBit(void* Obj)
{
	((ULevelInstanceSettings*)Obj)->bIsLevelInstanceDisabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULevelInstanceSettings_Statics::NewProp_bIsLevelInstanceDisabled = { "bIsLevelInstanceDisabled", nullptr, (EPropertyFlags)0x0020080800002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ULevelInstanceSettings), &Z_Construct_UClass_ULevelInstanceSettings_Statics::NewProp_bIsLevelInstanceDisabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsLevelInstanceDisabled_MetaData), NewProp_bIsLevelInstanceDisabled_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULevelInstanceSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelInstanceSettings_Statics::NewProp_PropertyOverridePolicyClass,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelInstanceSettings_Statics::NewProp_PropertyOverridePolicy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelInstanceSettings_Statics::NewProp_bIsLevelInstanceDisabled,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULevelInstanceSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULevelInstanceSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULevelInstanceSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULevelInstanceSettings_Statics::ClassParams = {
	&ULevelInstanceSettings::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ULevelInstanceSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ULevelInstanceSettings_Statics::PropPointers),
	0,
	0x001000A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULevelInstanceSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_ULevelInstanceSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULevelInstanceSettings()
{
	if (!Z_Registration_Info_UClass_ULevelInstanceSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULevelInstanceSettings.OuterSingleton, Z_Construct_UClass_ULevelInstanceSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULevelInstanceSettings.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<ULevelInstanceSettings>()
{
	return ULevelInstanceSettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULevelInstanceSettings);
ULevelInstanceSettings::~ULevelInstanceSettings() {}
// End Class ULevelInstanceSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceSettings_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULevelInstanceSettings, ULevelInstanceSettings::StaticClass, TEXT("ULevelInstanceSettings"), &Z_Registration_Info_UClass_ULevelInstanceSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULevelInstanceSettings), 2845546068U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceSettings_h_3001435056(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceSettings_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
