// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/WorldPartition/WorldPartitionRuntimeCellTransformer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWorldPartitionRuntimeCellTransformer() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_UWorldPartitionRuntimeCellTransformer();
ENGINE_API UClass* Z_Construct_UClass_UWorldPartitionRuntimeCellTransformer_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UWorldPartitionRuntimeCellTransformer
void UWorldPartitionRuntimeCellTransformer::StaticRegisterNativesUWorldPartitionRuntimeCellTransformer()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWorldPartitionRuntimeCellTransformer);
UClass* Z_Construct_UClass_UWorldPartitionRuntimeCellTransformer_NoRegister()
{
	return UWorldPartitionRuntimeCellTransformer::StaticClass();
}
struct Z_Construct_UClass_UWorldPartitionRuntimeCellTransformer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "WorldPartition/WorldPartitionRuntimeCellTransformer.h" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeCellTransformer.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWorldPartitionRuntimeCellTransformer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UWorldPartitionRuntimeCellTransformer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionRuntimeCellTransformer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWorldPartitionRuntimeCellTransformer_Statics::ClassParams = {
	&UWorldPartitionRuntimeCellTransformer::StaticClass,
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
	0x000000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionRuntimeCellTransformer_Statics::Class_MetaDataParams), Z_Construct_UClass_UWorldPartitionRuntimeCellTransformer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWorldPartitionRuntimeCellTransformer()
{
	if (!Z_Registration_Info_UClass_UWorldPartitionRuntimeCellTransformer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWorldPartitionRuntimeCellTransformer.OuterSingleton, Z_Construct_UClass_UWorldPartitionRuntimeCellTransformer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWorldPartitionRuntimeCellTransformer.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UWorldPartitionRuntimeCellTransformer>()
{
	return UWorldPartitionRuntimeCellTransformer::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWorldPartitionRuntimeCellTransformer);
UWorldPartitionRuntimeCellTransformer::~UWorldPartitionRuntimeCellTransformer() {}
// End Class UWorldPartitionRuntimeCellTransformer

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeCellTransformer_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWorldPartitionRuntimeCellTransformer, UWorldPartitionRuntimeCellTransformer::StaticClass, TEXT("UWorldPartitionRuntimeCellTransformer"), &Z_Registration_Info_UClass_UWorldPartitionRuntimeCellTransformer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWorldPartitionRuntimeCellTransformer), 2777270820U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeCellTransformer_h_3754261391(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeCellTransformer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeCellTransformer_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
