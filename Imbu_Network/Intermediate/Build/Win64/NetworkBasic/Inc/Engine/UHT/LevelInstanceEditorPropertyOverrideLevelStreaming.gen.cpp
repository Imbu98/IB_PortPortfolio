// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Private/LevelInstance/LevelInstanceEditorPropertyOverrideLevelStreaming.h"
#include "Runtime/Engine/Classes/Engine/World.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelInstanceEditorPropertyOverrideLevelStreaming() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ULevelStreamingDynamic();
ENGINE_API UClass* Z_Construct_UClass_ULevelStreamingLevelInstanceEditorPropertyOverride();
ENGINE_API UClass* Z_Construct_UClass_ULevelStreamingLevelInstanceEditorPropertyOverride_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class ULevelStreamingLevelInstanceEditorPropertyOverride
void ULevelStreamingLevelInstanceEditorPropertyOverride::StaticRegisterNativesULevelStreamingLevelInstanceEditorPropertyOverride()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULevelStreamingLevelInstanceEditorPropertyOverride);
UClass* Z_Construct_UClass_ULevelStreamingLevelInstanceEditorPropertyOverride_NoRegister()
{
	return ULevelStreamingLevelInstanceEditorPropertyOverride::StaticClass();
}
struct Z_Construct_UClass_ULevelStreamingLevelInstanceEditorPropertyOverride_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "LevelInstance/LevelInstanceEditorPropertyOverrideLevelStreaming.h" },
		{ "ModuleRelativePath", "Private/LevelInstance/LevelInstanceEditorPropertyOverrideLevelStreaming.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArchetypeWorld_MetaData[] = {
		{ "ModuleRelativePath", "Private/LevelInstance/LevelInstanceEditorPropertyOverrideLevelStreaming.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ArchetypeWorld;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULevelStreamingLevelInstanceEditorPropertyOverride>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULevelStreamingLevelInstanceEditorPropertyOverride_Statics::NewProp_ArchetypeWorld = { "ArchetypeWorld", nullptr, (EPropertyFlags)0x0144000800002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULevelStreamingLevelInstanceEditorPropertyOverride, ArchetypeWorld), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArchetypeWorld_MetaData), NewProp_ArchetypeWorld_MetaData) };
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULevelStreamingLevelInstanceEditorPropertyOverride_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelStreamingLevelInstanceEditorPropertyOverride_Statics::NewProp_ArchetypeWorld,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULevelStreamingLevelInstanceEditorPropertyOverride_Statics::PropPointers) < 2048);
#endif // WITH_EDITORONLY_DATA
UObject* (*const Z_Construct_UClass_ULevelStreamingLevelInstanceEditorPropertyOverride_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ULevelStreamingDynamic,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULevelStreamingLevelInstanceEditorPropertyOverride_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULevelStreamingLevelInstanceEditorPropertyOverride_Statics::ClassParams = {
	&ULevelStreamingLevelInstanceEditorPropertyOverride::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_ULevelStreamingLevelInstanceEditorPropertyOverride_Statics::PropPointers, nullptr),
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UClass_ULevelStreamingLevelInstanceEditorPropertyOverride_Statics::PropPointers), 0),
	0,
	0x008810A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULevelStreamingLevelInstanceEditorPropertyOverride_Statics::Class_MetaDataParams), Z_Construct_UClass_ULevelStreamingLevelInstanceEditorPropertyOverride_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULevelStreamingLevelInstanceEditorPropertyOverride()
{
	if (!Z_Registration_Info_UClass_ULevelStreamingLevelInstanceEditorPropertyOverride.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULevelStreamingLevelInstanceEditorPropertyOverride.OuterSingleton, Z_Construct_UClass_ULevelStreamingLevelInstanceEditorPropertyOverride_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULevelStreamingLevelInstanceEditorPropertyOverride.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<ULevelStreamingLevelInstanceEditorPropertyOverride>()
{
	return ULevelStreamingLevelInstanceEditorPropertyOverride::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULevelStreamingLevelInstanceEditorPropertyOverride);
ULevelStreamingLevelInstanceEditorPropertyOverride::~ULevelStreamingLevelInstanceEditorPropertyOverride() {}
// End Class ULevelStreamingLevelInstanceEditorPropertyOverride

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Private_LevelInstance_LevelInstanceEditorPropertyOverrideLevelStreaming_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULevelStreamingLevelInstanceEditorPropertyOverride, ULevelStreamingLevelInstanceEditorPropertyOverride::StaticClass, TEXT("ULevelStreamingLevelInstanceEditorPropertyOverride"), &Z_Registration_Info_UClass_ULevelStreamingLevelInstanceEditorPropertyOverride, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULevelStreamingLevelInstanceEditorPropertyOverride), 1036420652U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Private_LevelInstance_LevelInstanceEditorPropertyOverrideLevelStreaming_h_733258765(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Private_LevelInstance_LevelInstanceEditorPropertyOverrideLevelStreaming_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Private_LevelInstance_LevelInstanceEditorPropertyOverrideLevelStreaming_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
