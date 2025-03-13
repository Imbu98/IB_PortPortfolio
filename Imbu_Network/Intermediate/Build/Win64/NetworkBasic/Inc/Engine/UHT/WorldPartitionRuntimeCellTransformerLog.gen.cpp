// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/WorldPartition/WorldPartitionRuntimeCellTransformerLog.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWorldPartitionRuntimeCellTransformerLog() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UWorldPartitionRuntimeCellTransformer();
ENGINE_API UClass* Z_Construct_UClass_UWorldPartitionRuntimeCellTransformerLog();
ENGINE_API UClass* Z_Construct_UClass_UWorldPartitionRuntimeCellTransformerLog_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UWorldPartitionRuntimeCellTransformerLog
void UWorldPartitionRuntimeCellTransformerLog::StaticRegisterNativesUWorldPartitionRuntimeCellTransformerLog()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWorldPartitionRuntimeCellTransformerLog);
UClass* Z_Construct_UClass_UWorldPartitionRuntimeCellTransformerLog_NoRegister()
{
	return UWorldPartitionRuntimeCellTransformerLog::StaticClass();
}
struct Z_Construct_UClass_UWorldPartitionRuntimeCellTransformerLog_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "WorldPartition/WorldPartitionRuntimeCellTransformerLog.h" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeCellTransformerLog.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOnlyLogDifferences_MetaData[] = {
		{ "Category", "ISM" },
		{ "Comment", "/** Only log when the level was actually transformed */" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeCellTransformerLog.h" },
		{ "ToolTip", "Only log when the level was actually transformed" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static void NewProp_bOnlyLogDifferences_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOnlyLogDifferences;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWorldPartitionRuntimeCellTransformerLog>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
#if WITH_EDITORONLY_DATA
void Z_Construct_UClass_UWorldPartitionRuntimeCellTransformerLog_Statics::NewProp_bOnlyLogDifferences_SetBit(void* Obj)
{
	((UWorldPartitionRuntimeCellTransformerLog*)Obj)->bOnlyLogDifferences = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWorldPartitionRuntimeCellTransformerLog_Statics::NewProp_bOnlyLogDifferences = { "bOnlyLogDifferences", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UWorldPartitionRuntimeCellTransformerLog), &Z_Construct_UClass_UWorldPartitionRuntimeCellTransformerLog_Statics::NewProp_bOnlyLogDifferences_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOnlyLogDifferences_MetaData), NewProp_bOnlyLogDifferences_MetaData) };
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWorldPartitionRuntimeCellTransformerLog_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionRuntimeCellTransformerLog_Statics::NewProp_bOnlyLogDifferences,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionRuntimeCellTransformerLog_Statics::PropPointers) < 2048);
#endif // WITH_EDITORONLY_DATA
UObject* (*const Z_Construct_UClass_UWorldPartitionRuntimeCellTransformerLog_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWorldPartitionRuntimeCellTransformer,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionRuntimeCellTransformerLog_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWorldPartitionRuntimeCellTransformerLog_Statics::ClassParams = {
	&UWorldPartitionRuntimeCellTransformerLog::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_UWorldPartitionRuntimeCellTransformerLog_Statics::PropPointers, nullptr),
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionRuntimeCellTransformerLog_Statics::PropPointers), 0),
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionRuntimeCellTransformerLog_Statics::Class_MetaDataParams), Z_Construct_UClass_UWorldPartitionRuntimeCellTransformerLog_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWorldPartitionRuntimeCellTransformerLog()
{
	if (!Z_Registration_Info_UClass_UWorldPartitionRuntimeCellTransformerLog.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWorldPartitionRuntimeCellTransformerLog.OuterSingleton, Z_Construct_UClass_UWorldPartitionRuntimeCellTransformerLog_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWorldPartitionRuntimeCellTransformerLog.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UWorldPartitionRuntimeCellTransformerLog>()
{
	return UWorldPartitionRuntimeCellTransformerLog::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWorldPartitionRuntimeCellTransformerLog);
UWorldPartitionRuntimeCellTransformerLog::~UWorldPartitionRuntimeCellTransformerLog() {}
// End Class UWorldPartitionRuntimeCellTransformerLog

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeCellTransformerLog_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWorldPartitionRuntimeCellTransformerLog, UWorldPartitionRuntimeCellTransformerLog::StaticClass, TEXT("UWorldPartitionRuntimeCellTransformerLog"), &Z_Registration_Info_UClass_UWorldPartitionRuntimeCellTransformerLog, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWorldPartitionRuntimeCellTransformerLog), 1221683771U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeCellTransformerLog_h_181759061(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeCellTransformerLog_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeCellTransformerLog_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
