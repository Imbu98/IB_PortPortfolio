// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/WorldPartition/RuntimeHashSet/WorldPartitionRuntimeCellDataHashSet.h"
#include "Runtime/Engine/Public/WorldPartition/WorldPartitionRuntimeCell.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWorldPartitionRuntimeCellDataHashSet() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UWorldPartitionRuntimeCellData();
ENGINE_API UClass* Z_Construct_UClass_UWorldPartitionRuntimeCellDataHashSet();
ENGINE_API UClass* Z_Construct_UClass_UWorldPartitionRuntimeCellDataHashSet_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UWorldPartitionRuntimeCellDataHashSet
void UWorldPartitionRuntimeCellDataHashSet::StaticRegisterNativesUWorldPartitionRuntimeCellDataHashSet()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWorldPartitionRuntimeCellDataHashSet);
UClass* Z_Construct_UClass_UWorldPartitionRuntimeCellDataHashSet_NoRegister()
{
	return UWorldPartitionRuntimeCellDataHashSet::StaticClass();
}
struct Z_Construct_UClass_UWorldPartitionRuntimeCellDataHashSet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "WorldPartition/RuntimeHashSet/WorldPartitionRuntimeCellDataHashSet.h" },
		{ "ModuleRelativePath", "Public/WorldPartition/RuntimeHashSet/WorldPartitionRuntimeCellDataHashSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIs2D_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/RuntimeHashSet/WorldPartitionRuntimeCellDataHashSet.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bIs2D_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIs2D;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWorldPartitionRuntimeCellDataHashSet>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UWorldPartitionRuntimeCellDataHashSet_Statics::NewProp_bIs2D_SetBit(void* Obj)
{
	((UWorldPartitionRuntimeCellDataHashSet*)Obj)->bIs2D = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWorldPartitionRuntimeCellDataHashSet_Statics::NewProp_bIs2D = { "bIs2D", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UWorldPartitionRuntimeCellDataHashSet), &Z_Construct_UClass_UWorldPartitionRuntimeCellDataHashSet_Statics::NewProp_bIs2D_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIs2D_MetaData), NewProp_bIs2D_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWorldPartitionRuntimeCellDataHashSet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionRuntimeCellDataHashSet_Statics::NewProp_bIs2D,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionRuntimeCellDataHashSet_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UWorldPartitionRuntimeCellDataHashSet_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWorldPartitionRuntimeCellData,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionRuntimeCellDataHashSet_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWorldPartitionRuntimeCellDataHashSet_Statics::ClassParams = {
	&UWorldPartitionRuntimeCellDataHashSet::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UWorldPartitionRuntimeCellDataHashSet_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionRuntimeCellDataHashSet_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionRuntimeCellDataHashSet_Statics::Class_MetaDataParams), Z_Construct_UClass_UWorldPartitionRuntimeCellDataHashSet_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWorldPartitionRuntimeCellDataHashSet()
{
	if (!Z_Registration_Info_UClass_UWorldPartitionRuntimeCellDataHashSet.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWorldPartitionRuntimeCellDataHashSet.OuterSingleton, Z_Construct_UClass_UWorldPartitionRuntimeCellDataHashSet_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWorldPartitionRuntimeCellDataHashSet.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UWorldPartitionRuntimeCellDataHashSet>()
{
	return UWorldPartitionRuntimeCellDataHashSet::StaticClass();
}
UWorldPartitionRuntimeCellDataHashSet::UWorldPartitionRuntimeCellDataHashSet(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWorldPartitionRuntimeCellDataHashSet);
UWorldPartitionRuntimeCellDataHashSet::~UWorldPartitionRuntimeCellDataHashSet() {}
// End Class UWorldPartitionRuntimeCellDataHashSet

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_RuntimeHashSet_WorldPartitionRuntimeCellDataHashSet_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWorldPartitionRuntimeCellDataHashSet, UWorldPartitionRuntimeCellDataHashSet::StaticClass, TEXT("UWorldPartitionRuntimeCellDataHashSet"), &Z_Registration_Info_UClass_UWorldPartitionRuntimeCellDataHashSet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWorldPartitionRuntimeCellDataHashSet), 3308241583U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_RuntimeHashSet_WorldPartitionRuntimeCellDataHashSet_h_1373664646(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_RuntimeHashSet_WorldPartitionRuntimeCellDataHashSet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_RuntimeHashSet_WorldPartitionRuntimeCellDataHashSet_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
