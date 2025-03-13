// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Private/WorldPartition/LevelInstance/LevelInstancePropertyOverrideContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelInstancePropertyOverrideContainer() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorDescContainer();
ENGINE_API UClass* Z_Construct_UClass_ULevelInstancePropertyOverrideContainer();
ENGINE_API UClass* Z_Construct_UClass_ULevelInstancePropertyOverrideContainer_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class ULevelInstancePropertyOverrideContainer
void ULevelInstancePropertyOverrideContainer::StaticRegisterNativesULevelInstancePropertyOverrideContainer()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULevelInstancePropertyOverrideContainer);
UClass* Z_Construct_UClass_ULevelInstancePropertyOverrideContainer_NoRegister()
{
	return ULevelInstancePropertyOverrideContainer::StaticClass();
}
struct Z_Construct_UClass_ULevelInstancePropertyOverrideContainer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * LevelInstancePropertyOverrideContainer is a proxy to its ContainerPackage ActorDescContainer\n * plus some potential ActorDesc overrides for its proxy Container or any other child Container in \n * its Container child hierarchy.\n */" },
		{ "IncludePath", "WorldPartition/LevelInstance/LevelInstancePropertyOverrideContainer.h" },
		{ "ModuleRelativePath", "Private/WorldPartition/LevelInstance/LevelInstancePropertyOverrideContainer.h" },
		{ "ToolTip", "LevelInstancePropertyOverrideContainer is a proxy to its ContainerPackage ActorDescContainer\nplus some potential ActorDesc overrides for its proxy Container or any other child Container in\nits Container child hierarchy." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULevelInstancePropertyOverrideContainer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ULevelInstancePropertyOverrideContainer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorDescContainer,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULevelInstancePropertyOverrideContainer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULevelInstancePropertyOverrideContainer_Statics::ClassParams = {
	&ULevelInstancePropertyOverrideContainer::StaticClass,
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
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULevelInstancePropertyOverrideContainer_Statics::Class_MetaDataParams), Z_Construct_UClass_ULevelInstancePropertyOverrideContainer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULevelInstancePropertyOverrideContainer()
{
	if (!Z_Registration_Info_UClass_ULevelInstancePropertyOverrideContainer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULevelInstancePropertyOverrideContainer.OuterSingleton, Z_Construct_UClass_ULevelInstancePropertyOverrideContainer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULevelInstancePropertyOverrideContainer.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<ULevelInstancePropertyOverrideContainer>()
{
	return ULevelInstancePropertyOverrideContainer::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULevelInstancePropertyOverrideContainer);
// End Class ULevelInstancePropertyOverrideContainer

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Private_WorldPartition_LevelInstance_LevelInstancePropertyOverrideContainer_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULevelInstancePropertyOverrideContainer, ULevelInstancePropertyOverrideContainer::StaticClass, TEXT("ULevelInstancePropertyOverrideContainer"), &Z_Registration_Info_UClass_ULevelInstancePropertyOverrideContainer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULevelInstancePropertyOverrideContainer), 373881516U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Private_WorldPartition_LevelInstance_LevelInstancePropertyOverrideContainer_h_3253388470(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Private_WorldPartition_LevelInstance_LevelInstancePropertyOverrideContainer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Private_WorldPartition_LevelInstance_LevelInstancePropertyOverrideContainer_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
