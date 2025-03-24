// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/LevelInstance/LevelInstancePropertyOverrideAsset.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelInstancePropertyOverrideAsset() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ULevelInstancePropertyOverrideAsset();
ENGINE_API UClass* Z_Construct_UClass_ULevelInstancePropertyOverrideAsset_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UWorldPartitionPropertyOverride();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class ULevelInstancePropertyOverrideAsset
void ULevelInstancePropertyOverrideAsset::StaticRegisterNativesULevelInstancePropertyOverrideAsset()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULevelInstancePropertyOverrideAsset);
UClass* Z_Construct_UClass_ULevelInstancePropertyOverrideAsset_NoRegister()
{
	return ULevelInstancePropertyOverrideAsset::StaticClass();
}
struct Z_Construct_UClass_ULevelInstancePropertyOverrideAsset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "LevelInstance/LevelInstancePropertyOverrideAsset.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/LevelInstance/LevelInstancePropertyOverrideAsset.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldAsset_MetaData[] = {
		{ "Category", "Level" },
		{ "DisplayName", "Level" },
		{ "ModuleRelativePath", "Public/LevelInstance/LevelInstancePropertyOverrideAsset.h" },
		{ "NoCreate", "" },
		{ "ToolTip", "Reset Property Override to change level" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSavingOverrideEdit_MetaData[] = {
		{ "ModuleRelativePath", "Public/LevelInstance/LevelInstancePropertyOverrideAsset.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_WorldAsset;
	static void NewProp_bSavingOverrideEdit_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSavingOverrideEdit;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULevelInstancePropertyOverrideAsset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_ULevelInstancePropertyOverrideAsset_Statics::NewProp_WorldAsset = { "WorldAsset", nullptr, (EPropertyFlags)0x0044000800020001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULevelInstancePropertyOverrideAsset, WorldAsset), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldAsset_MetaData), NewProp_WorldAsset_MetaData) };
void Z_Construct_UClass_ULevelInstancePropertyOverrideAsset_Statics::NewProp_bSavingOverrideEdit_SetBit(void* Obj)
{
	((ULevelInstancePropertyOverrideAsset*)Obj)->bSavingOverrideEdit = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULevelInstancePropertyOverrideAsset_Statics::NewProp_bSavingOverrideEdit = { "bSavingOverrideEdit", nullptr, (EPropertyFlags)0x0040000800002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ULevelInstancePropertyOverrideAsset), &Z_Construct_UClass_ULevelInstancePropertyOverrideAsset_Statics::NewProp_bSavingOverrideEdit_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSavingOverrideEdit_MetaData), NewProp_bSavingOverrideEdit_MetaData) };
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULevelInstancePropertyOverrideAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelInstancePropertyOverrideAsset_Statics::NewProp_WorldAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelInstancePropertyOverrideAsset_Statics::NewProp_bSavingOverrideEdit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULevelInstancePropertyOverrideAsset_Statics::PropPointers) < 2048);
#endif // WITH_EDITORONLY_DATA
UObject* (*const Z_Construct_UClass_ULevelInstancePropertyOverrideAsset_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWorldPartitionPropertyOverride,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULevelInstancePropertyOverrideAsset_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULevelInstancePropertyOverrideAsset_Statics::ClassParams = {
	&ULevelInstancePropertyOverrideAsset::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_ULevelInstancePropertyOverrideAsset_Statics::PropPointers, nullptr),
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UClass_ULevelInstancePropertyOverrideAsset_Statics::PropPointers), 0),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULevelInstancePropertyOverrideAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_ULevelInstancePropertyOverrideAsset_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULevelInstancePropertyOverrideAsset()
{
	if (!Z_Registration_Info_UClass_ULevelInstancePropertyOverrideAsset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULevelInstancePropertyOverrideAsset.OuterSingleton, Z_Construct_UClass_ULevelInstancePropertyOverrideAsset_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULevelInstancePropertyOverrideAsset.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<ULevelInstancePropertyOverrideAsset>()
{
	return ULevelInstancePropertyOverrideAsset::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULevelInstancePropertyOverrideAsset);
// End Class ULevelInstancePropertyOverrideAsset

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstancePropertyOverrideAsset_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULevelInstancePropertyOverrideAsset, ULevelInstancePropertyOverrideAsset::StaticClass, TEXT("ULevelInstancePropertyOverrideAsset"), &Z_Registration_Info_UClass_ULevelInstancePropertyOverrideAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULevelInstancePropertyOverrideAsset), 1942514486U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstancePropertyOverrideAsset_h_4236741478(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstancePropertyOverrideAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstancePropertyOverrideAsset_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
