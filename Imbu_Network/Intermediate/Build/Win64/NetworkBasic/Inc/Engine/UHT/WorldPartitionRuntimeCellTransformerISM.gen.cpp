// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/WorldPartition/WorldPartitionRuntimeCellTransformerISM.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWorldPartitionRuntimeCellTransformerISM() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UWorldPartitionRuntimeCellTransformer();
ENGINE_API UClass* Z_Construct_UClass_UWorldPartitionRuntimeCellTransformerISM();
ENGINE_API UClass* Z_Construct_UClass_UWorldPartitionRuntimeCellTransformerISM_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UWorldPartitionRuntimeCellTransformerISM
void UWorldPartitionRuntimeCellTransformerISM::StaticRegisterNativesUWorldPartitionRuntimeCellTransformerISM()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWorldPartitionRuntimeCellTransformerISM);
UClass* Z_Construct_UClass_UWorldPartitionRuntimeCellTransformerISM_NoRegister()
{
	return UWorldPartitionRuntimeCellTransformerISM::StaticClass();
}
struct Z_Construct_UClass_UWorldPartitionRuntimeCellTransformerISM_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "WorldPartition/WorldPartitionRuntimeCellTransformerISM.h" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeCellTransformerISM.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AllowedClasses_MetaData[] = {
		{ "Category", "ISM" },
		{ "Comment", "/** Allowed classes (recursive) to convert to instances */" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeCellTransformerISM.h" },
		{ "ToolTip", "Allowed classes (recursive) to convert to instances" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisallowedClasses_MetaData[] = {
		{ "Category", "ISM" },
		{ "Comment", "/** Disallowed classes (non-recursive) to convert to instances */" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeCellTransformerISM.h" },
		{ "ToolTip", "Disallowed classes (non-recursive) to convert to instances" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinNumInstances_MetaData[] = {
		{ "Category", "ISM" },
		{ "Comment", "/** Minimum number of instances required to allow converting actors to ISM */" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeCellTransformerISM.h" },
		{ "ToolTip", "Minimum number of instances required to allow converting actors to ISM" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_AllowedClasses_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AllowedClasses;
	static const UECodeGen_Private::FClassPropertyParams NewProp_DisallowedClasses_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DisallowedClasses;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_MinNumInstances;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWorldPartitionRuntimeCellTransformerISM>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UWorldPartitionRuntimeCellTransformerISM_Statics::NewProp_AllowedClasses_Inner = { "AllowedClasses", nullptr, (EPropertyFlags)0x0004000800000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UWorldPartitionRuntimeCellTransformerISM_Statics::NewProp_AllowedClasses = { "AllowedClasses", nullptr, (EPropertyFlags)0x0014000800000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWorldPartitionRuntimeCellTransformerISM, AllowedClasses), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AllowedClasses_MetaData), NewProp_AllowedClasses_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UWorldPartitionRuntimeCellTransformerISM_Statics::NewProp_DisallowedClasses_Inner = { "DisallowedClasses", nullptr, (EPropertyFlags)0x0004000800000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UWorldPartitionRuntimeCellTransformerISM_Statics::NewProp_DisallowedClasses = { "DisallowedClasses", nullptr, (EPropertyFlags)0x0014000800000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWorldPartitionRuntimeCellTransformerISM, DisallowedClasses), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisallowedClasses_MetaData), NewProp_DisallowedClasses_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UWorldPartitionRuntimeCellTransformerISM_Statics::NewProp_MinNumInstances = { "MinNumInstances", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWorldPartitionRuntimeCellTransformerISM, MinNumInstances), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinNumInstances_MetaData), NewProp_MinNumInstances_MetaData) };
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWorldPartitionRuntimeCellTransformerISM_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionRuntimeCellTransformerISM_Statics::NewProp_AllowedClasses_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionRuntimeCellTransformerISM_Statics::NewProp_AllowedClasses,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionRuntimeCellTransformerISM_Statics::NewProp_DisallowedClasses_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionRuntimeCellTransformerISM_Statics::NewProp_DisallowedClasses,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionRuntimeCellTransformerISM_Statics::NewProp_MinNumInstances,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionRuntimeCellTransformerISM_Statics::PropPointers) < 2048);
#endif // WITH_EDITORONLY_DATA
UObject* (*const Z_Construct_UClass_UWorldPartitionRuntimeCellTransformerISM_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWorldPartitionRuntimeCellTransformer,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionRuntimeCellTransformerISM_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWorldPartitionRuntimeCellTransformerISM_Statics::ClassParams = {
	&UWorldPartitionRuntimeCellTransformerISM::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_UWorldPartitionRuntimeCellTransformerISM_Statics::PropPointers, nullptr),
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionRuntimeCellTransformerISM_Statics::PropPointers), 0),
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionRuntimeCellTransformerISM_Statics::Class_MetaDataParams), Z_Construct_UClass_UWorldPartitionRuntimeCellTransformerISM_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWorldPartitionRuntimeCellTransformerISM()
{
	if (!Z_Registration_Info_UClass_UWorldPartitionRuntimeCellTransformerISM.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWorldPartitionRuntimeCellTransformerISM.OuterSingleton, Z_Construct_UClass_UWorldPartitionRuntimeCellTransformerISM_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWorldPartitionRuntimeCellTransformerISM.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UWorldPartitionRuntimeCellTransformerISM>()
{
	return UWorldPartitionRuntimeCellTransformerISM::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWorldPartitionRuntimeCellTransformerISM);
UWorldPartitionRuntimeCellTransformerISM::~UWorldPartitionRuntimeCellTransformerISM() {}
// End Class UWorldPartitionRuntimeCellTransformerISM

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeCellTransformerISM_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWorldPartitionRuntimeCellTransformerISM, UWorldPartitionRuntimeCellTransformerISM::StaticClass, TEXT("UWorldPartitionRuntimeCellTransformerISM"), &Z_Registration_Info_UClass_UWorldPartitionRuntimeCellTransformerISM, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWorldPartitionRuntimeCellTransformerISM), 1229013889U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeCellTransformerISM_h_1872854384(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeCellTransformerISM_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeCellTransformerISM_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
