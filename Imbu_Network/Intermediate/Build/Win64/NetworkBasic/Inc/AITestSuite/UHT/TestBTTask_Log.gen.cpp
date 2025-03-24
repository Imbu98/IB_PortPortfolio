// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Developer/AITestSuite/Classes/BehaviorTree/TestBTTask_Log.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTestBTTask_Log() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EBTNodeResult();
AITESTSUITE_API UClass* Z_Construct_UClass_UTestBTTask_Log();
AITESTSUITE_API UClass* Z_Construct_UClass_UTestBTTask_Log_NoRegister();
UPackage* Z_Construct_UPackage__Script_AITestSuite();
// End Cross Module References

// Begin Class UTestBTTask_Log
void UTestBTTask_Log::StaticRegisterNativesUTestBTTask_Log()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTestBTTask_Log);
UClass* Z_Construct_UClass_UTestBTTask_Log_NoRegister()
{
	return UTestBTTask_Log::StaticClass();
}
struct Z_Construct_UClass_UTestBTTask_Log_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HiddenNode", "" },
		{ "IncludePath", "BehaviorTree/TestBTTask_Log.h" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/TestBTTask_Log.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LogIndex_MetaData[] = {
		{ "ModuleRelativePath", "Classes/BehaviorTree/TestBTTask_Log.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LogFinished_MetaData[] = {
		{ "ModuleRelativePath", "Classes/BehaviorTree/TestBTTask_Log.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExecutionTicks_MetaData[] = {
		{ "ModuleRelativePath", "Classes/BehaviorTree/TestBTTask_Log.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LogTickIndex_MetaData[] = {
		{ "ModuleRelativePath", "Classes/BehaviorTree/TestBTTask_Log.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LogResult_MetaData[] = {
		{ "ModuleRelativePath", "Classes/BehaviorTree/TestBTTask_Log.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_LogIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LogFinished;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ExecutionTicks;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LogTickIndex;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LogResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTestBTTask_Log>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTestBTTask_Log_Statics::NewProp_LogIndex = { "LogIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTestBTTask_Log, LogIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LogIndex_MetaData), NewProp_LogIndex_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTestBTTask_Log_Statics::NewProp_LogFinished = { "LogFinished", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTestBTTask_Log, LogFinished), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LogFinished_MetaData), NewProp_LogFinished_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTestBTTask_Log_Statics::NewProp_ExecutionTicks = { "ExecutionTicks", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTestBTTask_Log, ExecutionTicks), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExecutionTicks_MetaData), NewProp_ExecutionTicks_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTestBTTask_Log_Statics::NewProp_LogTickIndex = { "LogTickIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTestBTTask_Log, LogTickIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LogTickIndex_MetaData), NewProp_LogTickIndex_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTestBTTask_Log_Statics::NewProp_LogResult = { "LogResult", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTestBTTask_Log, LogResult), Z_Construct_UEnum_AIModule_EBTNodeResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LogResult_MetaData), NewProp_LogResult_MetaData) }; // 3742194854
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTestBTTask_Log_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestBTTask_Log_Statics::NewProp_LogIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestBTTask_Log_Statics::NewProp_LogFinished,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestBTTask_Log_Statics::NewProp_ExecutionTicks,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestBTTask_Log_Statics::NewProp_LogTickIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestBTTask_Log_Statics::NewProp_LogResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTestBTTask_Log_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UTestBTTask_Log_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
	(UObject* (*)())Z_Construct_UPackage__Script_AITestSuite,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTestBTTask_Log_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTestBTTask_Log_Statics::ClassParams = {
	&UTestBTTask_Log::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UTestBTTask_Log_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UTestBTTask_Log_Statics::PropPointers),
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTestBTTask_Log_Statics::Class_MetaDataParams), Z_Construct_UClass_UTestBTTask_Log_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTestBTTask_Log()
{
	if (!Z_Registration_Info_UClass_UTestBTTask_Log.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTestBTTask_Log.OuterSingleton, Z_Construct_UClass_UTestBTTask_Log_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTestBTTask_Log.OuterSingleton;
}
template<> AITESTSUITE_API UClass* StaticClass<UTestBTTask_Log>()
{
	return UTestBTTask_Log::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTestBTTask_Log);
UTestBTTask_Log::~UTestBTTask_Log() {}
// End Class UTestBTTask_Log

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Developer_AITestSuite_Classes_BehaviorTree_TestBTTask_Log_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTestBTTask_Log, UTestBTTask_Log::StaticClass, TEXT("UTestBTTask_Log"), &Z_Registration_Info_UClass_UTestBTTask_Log, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTestBTTask_Log), 3572656597U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_AITestSuite_Classes_BehaviorTree_TestBTTask_Log_h_1891301575(TEXT("/Script/AITestSuite"),
	Z_CompiledInDeferFile_FID_Engine_Source_Developer_AITestSuite_Classes_BehaviorTree_TestBTTask_Log_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_AITestSuite_Classes_BehaviorTree_TestBTTask_Log_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
