// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/WorldPartition/StaticLightingData/MapBuildDataActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMapBuildDataActor() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AMapBuildDataActor();
ENGINE_API UClass* Z_Construct_UClass_AMapBuildDataActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMapBuildDataRegistry_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class AMapBuildDataActor
void AMapBuildDataActor::StaticRegisterNativesAMapBuildDataActor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMapBuildDataActor);
UClass* Z_Construct_UClass_AMapBuildDataActor_NoRegister()
{
	return AMapBuildDataActor::StaticClass();
}
struct Z_Construct_UClass_AMapBuildDataActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Replication Collision Physics Navigation Networking Input Actor LevelInstance Cooking" },
		{ "IncludePath", "WorldPartition/StaticLightingData/MapBuildDataActor.h" },
		{ "ModuleRelativePath", "Public/WorldPartition/StaticLightingData/MapBuildDataActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BuildData_MetaData[] = {
		{ "Comment", "//~ End AActor Interface.\n" },
		{ "ModuleRelativePath", "Public/WorldPartition/StaticLightingData/MapBuildDataActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ForceLinkToActor_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/StaticLightingData/MapBuildDataActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorBounds_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/StaticLightingData/MapBuildDataActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CellPackage_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/StaticLightingData/MapBuildDataActor.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorInstances_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/StaticLightingData/MapBuildDataActor.h" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LevelBuildDataId_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/StaticLightingData/MapBuildDataActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BuildData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ForceLinkToActor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActorBounds;
	static const UECodeGen_Private::FNamePropertyParams NewProp_CellPackage;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActorInstances_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ActorInstances;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LevelBuildDataId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMapBuildDataActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMapBuildDataActor_Statics::NewProp_BuildData = { "BuildData", nullptr, (EPropertyFlags)0x0124880000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMapBuildDataActor, BuildData), Z_Construct_UClass_UMapBuildDataRegistry_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BuildData_MetaData), NewProp_BuildData_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMapBuildDataActor_Statics::NewProp_ForceLinkToActor = { "ForceLinkToActor", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMapBuildDataActor, ForceLinkToActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ForceLinkToActor_MetaData), NewProp_ForceLinkToActor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMapBuildDataActor_Statics::NewProp_ActorBounds = { "ActorBounds", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMapBuildDataActor, ActorBounds), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorBounds_MetaData), NewProp_ActorBounds_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AMapBuildDataActor_Statics::NewProp_CellPackage = { "CellPackage", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMapBuildDataActor, CellPackage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CellPackage_MetaData), NewProp_CellPackage_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMapBuildDataActor_Statics::NewProp_ActorInstances_Inner = { "ActorInstances", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMapBuildDataActor_Statics::NewProp_ActorInstances = { "ActorInstances", nullptr, (EPropertyFlags)0x0020080800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMapBuildDataActor, ActorInstances), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorInstances_MetaData), NewProp_ActorInstances_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMapBuildDataActor_Statics::NewProp_LevelBuildDataId = { "LevelBuildDataId", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMapBuildDataActor, LevelBuildDataId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LevelBuildDataId_MetaData), NewProp_LevelBuildDataId_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMapBuildDataActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapBuildDataActor_Statics::NewProp_BuildData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapBuildDataActor_Statics::NewProp_ForceLinkToActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapBuildDataActor_Statics::NewProp_ActorBounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapBuildDataActor_Statics::NewProp_CellPackage,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapBuildDataActor_Statics::NewProp_ActorInstances_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapBuildDataActor_Statics::NewProp_ActorInstances,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapBuildDataActor_Statics::NewProp_LevelBuildDataId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMapBuildDataActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMapBuildDataActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMapBuildDataActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMapBuildDataActor_Statics::ClassParams = {
	&AMapBuildDataActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AMapBuildDataActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AMapBuildDataActor_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMapBuildDataActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AMapBuildDataActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMapBuildDataActor()
{
	if (!Z_Registration_Info_UClass_AMapBuildDataActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMapBuildDataActor.OuterSingleton, Z_Construct_UClass_AMapBuildDataActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMapBuildDataActor.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<AMapBuildDataActor>()
{
	return AMapBuildDataActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMapBuildDataActor);
AMapBuildDataActor::~AMapBuildDataActor() {}
// End Class AMapBuildDataActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_StaticLightingData_MapBuildDataActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMapBuildDataActor, AMapBuildDataActor::StaticClass, TEXT("AMapBuildDataActor"), &Z_Registration_Info_UClass_AMapBuildDataActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMapBuildDataActor), 3765343587U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_StaticLightingData_MapBuildDataActor_h_3702129024(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_StaticLightingData_MapBuildDataActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_StaticLightingData_MapBuildDataActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
