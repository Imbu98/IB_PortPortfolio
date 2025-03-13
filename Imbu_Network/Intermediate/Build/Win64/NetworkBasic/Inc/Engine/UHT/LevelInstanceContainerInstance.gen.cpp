// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/WorldPartition/LevelInstance/LevelInstanceContainerInstance.h"
#include "Runtime/Engine/Public/WorldPartition/WorldPartitionActorContainerID.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelInstanceContainerInstance() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorDescContainer_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorDescContainerInstance();
ENGINE_API UClass* Z_Construct_UClass_ULevelInstanceContainerInstance();
ENGINE_API UClass* Z_Construct_UClass_ULevelInstanceContainerInstance_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ULevelInstancePropertyOverrideAsset_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FActorContainerID();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FActorContainerPath();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class ULevelInstanceContainerInstance
void ULevelInstanceContainerInstance::StaticRegisterNativesULevelInstanceContainerInstance()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULevelInstanceContainerInstance);
UClass* Z_Construct_UClass_ULevelInstanceContainerInstance_NoRegister()
{
	return ULevelInstanceContainerInstance::StaticClass();
}
struct Z_Construct_UClass_ULevelInstanceContainerInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "WorldPartition/LevelInstance/LevelInstanceContainerInstance.h" },
		{ "ModuleRelativePath", "Public/WorldPartition/LevelInstance/LevelInstanceContainerInstance.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverrideContainer_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/LevelInstance/LevelInstanceContainerInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParentContainerReferences_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/LevelInstance/LevelInstanceContainerInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PropertyOverrideAsset_MetaData[] = {
		{ "Comment", "// This is a Weak Ptr because parent level instance can get unloaded first and we don't want to cause a leak as we are going to get unloaded afterwards anyways\n" },
		{ "ModuleRelativePath", "Public/WorldPartition/LevelInstance/LevelInstanceContainerInstance.h" },
		{ "ToolTip", "This is a Weak Ptr because parent level instance can get unloaded first and we don't want to cause a leak as we are going to get unloaded afterwards anyways" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContainerIDToContainerPath_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/LevelInstance/LevelInstanceContainerInstance.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverrideContainer;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ParentContainerReferences_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ParentContainerReferences;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_PropertyOverrideAsset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ContainerIDToContainerPath_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ContainerIDToContainerPath_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ContainerIDToContainerPath;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULevelInstanceContainerInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULevelInstanceContainerInstance_Statics::NewProp_OverrideContainer = { "OverrideContainer", nullptr, (EPropertyFlags)0x0124080800002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULevelInstanceContainerInstance, OverrideContainer), Z_Construct_UClass_UActorDescContainer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverrideContainer_MetaData), NewProp_OverrideContainer_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULevelInstanceContainerInstance_Statics::NewProp_ParentContainerReferences_Inner = { "ParentContainerReferences", nullptr, (EPropertyFlags)0x0104000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UActorDescContainer_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULevelInstanceContainerInstance_Statics::NewProp_ParentContainerReferences = { "ParentContainerReferences", nullptr, (EPropertyFlags)0x0124080800002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULevelInstanceContainerInstance, ParentContainerReferences), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParentContainerReferences_MetaData), NewProp_ParentContainerReferences_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_ULevelInstanceContainerInstance_Statics::NewProp_PropertyOverrideAsset = { "PropertyOverrideAsset", nullptr, (EPropertyFlags)0x0024080800002000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULevelInstanceContainerInstance, PropertyOverrideAsset), Z_Construct_UClass_ULevelInstancePropertyOverrideAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PropertyOverrideAsset_MetaData), NewProp_PropertyOverrideAsset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULevelInstanceContainerInstance_Statics::NewProp_ContainerIDToContainerPath_ValueProp = { "ContainerIDToContainerPath", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FActorContainerPath, METADATA_PARAMS(0, nullptr) }; // 3981793010
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULevelInstanceContainerInstance_Statics::NewProp_ContainerIDToContainerPath_Key_KeyProp = { "ContainerIDToContainerPath_Key", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FActorContainerID, METADATA_PARAMS(0, nullptr) }; // 1291227467
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ULevelInstanceContainerInstance_Statics::NewProp_ContainerIDToContainerPath = { "ContainerIDToContainerPath", nullptr, (EPropertyFlags)0x0020080800002000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULevelInstanceContainerInstance, ContainerIDToContainerPath), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContainerIDToContainerPath_MetaData), NewProp_ContainerIDToContainerPath_MetaData) }; // 1291227467 3981793010
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULevelInstanceContainerInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelInstanceContainerInstance_Statics::NewProp_OverrideContainer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelInstanceContainerInstance_Statics::NewProp_ParentContainerReferences_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelInstanceContainerInstance_Statics::NewProp_ParentContainerReferences,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelInstanceContainerInstance_Statics::NewProp_PropertyOverrideAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelInstanceContainerInstance_Statics::NewProp_ContainerIDToContainerPath_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelInstanceContainerInstance_Statics::NewProp_ContainerIDToContainerPath_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelInstanceContainerInstance_Statics::NewProp_ContainerIDToContainerPath,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULevelInstanceContainerInstance_Statics::PropPointers) < 2048);
#endif // WITH_EDITORONLY_DATA
UObject* (*const Z_Construct_UClass_ULevelInstanceContainerInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorDescContainerInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULevelInstanceContainerInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULevelInstanceContainerInstance_Statics::ClassParams = {
	&ULevelInstanceContainerInstance::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_ULevelInstanceContainerInstance_Statics::PropPointers, nullptr),
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UClass_ULevelInstanceContainerInstance_Statics::PropPointers), 0),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULevelInstanceContainerInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_ULevelInstanceContainerInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULevelInstanceContainerInstance()
{
	if (!Z_Registration_Info_UClass_ULevelInstanceContainerInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULevelInstanceContainerInstance.OuterSingleton, Z_Construct_UClass_ULevelInstanceContainerInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULevelInstanceContainerInstance.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<ULevelInstanceContainerInstance>()
{
	return ULevelInstanceContainerInstance::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULevelInstanceContainerInstance);
// End Class ULevelInstanceContainerInstance

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_LevelInstance_LevelInstanceContainerInstance_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULevelInstanceContainerInstance, ULevelInstanceContainerInstance::StaticClass, TEXT("ULevelInstanceContainerInstance"), &Z_Registration_Info_UClass_ULevelInstanceContainerInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULevelInstanceContainerInstance), 2396818529U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_LevelInstance_LevelInstanceContainerInstance_h_1467000117(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_LevelInstance_LevelInstanceContainerInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_LevelInstance_LevelInstanceContainerInstance_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
