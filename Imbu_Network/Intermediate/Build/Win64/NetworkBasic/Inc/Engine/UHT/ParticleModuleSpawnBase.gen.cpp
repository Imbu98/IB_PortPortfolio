// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Particles/Spawn/ParticleModuleSpawnBase.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleSpawnBase() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UParticleModule();
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleSpawnBase();
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleSpawnBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UParticleModuleSpawnBase
void UParticleModuleSpawnBase::StaticRegisterNativesUParticleModuleSpawnBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UParticleModuleSpawnBase);
UClass* Z_Construct_UClass_UParticleModuleSpawnBase_NoRegister()
{
	return UParticleModuleSpawnBase::StaticClass();
}
struct Z_Construct_UClass_UParticleModuleSpawnBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Spawn" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Particles/Spawn/ParticleModuleSpawnBase.h" },
		{ "ModuleRelativePath", "Classes/Particles/Spawn/ParticleModuleSpawnBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bProcessSpawnRate_MetaData[] = {
		{ "Category", "Spawn" },
		{ "Comment", "/** \n\x09 *\x09If true, the SpawnRate of the SpawnModule of the emitter will be processed.\n\x09 *\x09If mutliple Spawn modules are 'stacked' in an emitter, if ANY of them \n\x09 *\x09have this set to false, it will not process the SpawnModule SpawnRate.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/Spawn/ParticleModuleSpawnBase.h" },
		{ "ToolTip", "If true, the SpawnRate of the SpawnModule of the emitter will be processed.\nIf mutliple Spawn modules are 'stacked' in an emitter, if ANY of them\nhave this set to false, it will not process the SpawnModule SpawnRate." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bProcessBurstList_MetaData[] = {
		{ "Category", "Burst" },
		{ "Comment", "/** \n\x09 *\x09If true, the BurstList of the SpawnModule of the emitter will be processed.\n\x09 *\x09If mutliple Spawn modules are 'stacked' in an emitter, if ANY of them \n\x09 *\x09have this set to false, it will not process the SpawnModule BurstList.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/Spawn/ParticleModuleSpawnBase.h" },
		{ "ToolTip", "If true, the BurstList of the SpawnModule of the emitter will be processed.\nIf mutliple Spawn modules are 'stacked' in an emitter, if ANY of them\nhave this set to false, it will not process the SpawnModule BurstList." },
	};
#endif // WITH_METADATA
	static void NewProp_bProcessSpawnRate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bProcessSpawnRate;
	static void NewProp_bProcessBurstList_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bProcessBurstList;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleSpawnBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UParticleModuleSpawnBase_Statics::NewProp_bProcessSpawnRate_SetBit(void* Obj)
{
	((UParticleModuleSpawnBase*)Obj)->bProcessSpawnRate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleSpawnBase_Statics::NewProp_bProcessSpawnRate = { "bProcessSpawnRate", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UParticleModuleSpawnBase), &Z_Construct_UClass_UParticleModuleSpawnBase_Statics::NewProp_bProcessSpawnRate_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bProcessSpawnRate_MetaData), NewProp_bProcessSpawnRate_MetaData) };
void Z_Construct_UClass_UParticleModuleSpawnBase_Statics::NewProp_bProcessBurstList_SetBit(void* Obj)
{
	((UParticleModuleSpawnBase*)Obj)->bProcessBurstList = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleSpawnBase_Statics::NewProp_bProcessBurstList = { "bProcessBurstList", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UParticleModuleSpawnBase), &Z_Construct_UClass_UParticleModuleSpawnBase_Statics::NewProp_bProcessBurstList_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bProcessBurstList_MetaData), NewProp_bProcessBurstList_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleModuleSpawnBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleSpawnBase_Statics::NewProp_bProcessSpawnRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleSpawnBase_Statics::NewProp_bProcessBurstList,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleSpawnBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UParticleModuleSpawnBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UParticleModule,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleSpawnBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleSpawnBase_Statics::ClassParams = {
	&UParticleModuleSpawnBase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UParticleModuleSpawnBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleSpawnBase_Statics::PropPointers),
	0,
	0x000010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleSpawnBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UParticleModuleSpawnBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UParticleModuleSpawnBase()
{
	if (!Z_Registration_Info_UClass_UParticleModuleSpawnBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UParticleModuleSpawnBase.OuterSingleton, Z_Construct_UClass_UParticleModuleSpawnBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UParticleModuleSpawnBase.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UParticleModuleSpawnBase>()
{
	return UParticleModuleSpawnBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleSpawnBase);
UParticleModuleSpawnBase::~UParticleModuleSpawnBase() {}
// End Class UParticleModuleSpawnBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Spawn_ParticleModuleSpawnBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UParticleModuleSpawnBase, UParticleModuleSpawnBase::StaticClass, TEXT("UParticleModuleSpawnBase"), &Z_Registration_Info_UClass_UParticleModuleSpawnBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UParticleModuleSpawnBase), 671234093U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Spawn_ParticleModuleSpawnBase_h_1890481486(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Spawn_ParticleModuleSpawnBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Spawn_ParticleModuleSpawnBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
