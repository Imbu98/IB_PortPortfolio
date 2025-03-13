// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Developer/AITestSuite/Classes/BehaviorTree/TestBTTask_TimerBasedLatent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTestBTTask_TimerBasedLatent() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EBTNodeResult();
AITESTSUITE_API UClass* Z_Construct_UClass_UTestBTTask_TimerBasedLatent();
AITESTSUITE_API UClass* Z_Construct_UClass_UTestBTTask_TimerBasedLatent_NoRegister();
UPackage* Z_Construct_UPackage__Script_AITestSuite();
// End Cross Module References

// Begin Class UTestBTTask_TimerBasedLatent
void UTestBTTask_TimerBasedLatent::StaticRegisterNativesUTestBTTask_TimerBasedLatent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTestBTTask_TimerBasedLatent);
UClass* Z_Construct_UClass_UTestBTTask_TimerBasedLatent_NoRegister()
{
	return UTestBTTask_TimerBasedLatent::StaticClass();
}
struct Z_Construct_UClass_UTestBTTask_TimerBasedLatent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HiddenNode", "" },
		{ "IncludePath", "BehaviorTree/TestBTTask_TimerBasedLatent.h" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/TestBTTask_TimerBasedLatent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LogIndexExecuteStart_MetaData[] = {
		{ "ModuleRelativePath", "Classes/BehaviorTree/TestBTTask_TimerBasedLatent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LogIndexExecuteFinish_MetaData[] = {
		{ "ModuleRelativePath", "Classes/BehaviorTree/TestBTTask_TimerBasedLatent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LogIndexAbortStart_MetaData[] = {
		{ "ModuleRelativePath", "Classes/BehaviorTree/TestBTTask_TimerBasedLatent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LogIndexAbortFinish_MetaData[] = {
		{ "ModuleRelativePath", "Classes/BehaviorTree/TestBTTask_TimerBasedLatent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumTicksExecuting_MetaData[] = {
		{ "Comment", "/** Num of ticks from 'execute start' to 'execute finish' */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/TestBTTask_TimerBasedLatent.h" },
		{ "ToolTip", "Num of ticks from 'execute start' to 'execute finish'" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumTicksAborting_MetaData[] = {
		{ "Comment", "/** Num of ticks from 'abort start' to 'abort finish' */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/TestBTTask_TimerBasedLatent.h" },
		{ "ToolTip", "Num of ticks from 'abort start' to 'abort finish'" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LogResult_MetaData[] = {
		{ "ModuleRelativePath", "Classes/BehaviorTree/TestBTTask_TimerBasedLatent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_LogIndexExecuteStart;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LogIndexExecuteFinish;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LogIndexAbortStart;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LogIndexAbortFinish;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumTicksExecuting;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumTicksAborting;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LogResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTestBTTask_TimerBasedLatent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTestBTTask_TimerBasedLatent_Statics::NewProp_LogIndexExecuteStart = { "LogIndexExecuteStart", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTestBTTask_TimerBasedLatent, LogIndexExecuteStart), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LogIndexExecuteStart_MetaData), NewProp_LogIndexExecuteStart_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTestBTTask_TimerBasedLatent_Statics::NewProp_LogIndexExecuteFinish = { "LogIndexExecuteFinish", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTestBTTask_TimerBasedLatent, LogIndexExecuteFinish), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LogIndexExecuteFinish_MetaData), NewProp_LogIndexExecuteFinish_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTestBTTask_TimerBasedLatent_Statics::NewProp_LogIndexAbortStart = { "LogIndexAbortStart", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTestBTTask_TimerBasedLatent, LogIndexAbortStart), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LogIndexAbortStart_MetaData), NewProp_LogIndexAbortStart_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTestBTTask_TimerBasedLatent_Statics::NewProp_LogIndexAbortFinish = { "LogIndexAbortFinish", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTestBTTask_TimerBasedLatent, LogIndexAbortFinish), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LogIndexAbortFinish_MetaData), NewProp_LogIndexAbortFinish_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTestBTTask_TimerBasedLatent_Statics::NewProp_NumTicksExecuting = { "NumTicksExecuting", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTestBTTask_TimerBasedLatent, NumTicksExecuting), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumTicksExecuting_MetaData), NewProp_NumTicksExecuting_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTestBTTask_TimerBasedLatent_Statics::NewProp_NumTicksAborting = { "NumTicksAborting", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTestBTTask_TimerBasedLatent, NumTicksAborting), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumTicksAborting_MetaData), NewProp_NumTicksAborting_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTestBTTask_TimerBasedLatent_Statics::NewProp_LogResult = { "LogResult", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTestBTTask_TimerBasedLatent, LogResult), Z_Construct_UEnum_AIModule_EBTNodeResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LogResult_MetaData), NewProp_LogResult_MetaData) }; // 3742194854
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTestBTTask_TimerBasedLatent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestBTTask_TimerBasedLatent_Statics::NewProp_LogIndexExecuteStart,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestBTTask_TimerBasedLatent_Statics::NewProp_LogIndexExecuteFinish,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestBTTask_TimerBasedLatent_Statics::NewProp_LogIndexAbortStart,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestBTTask_TimerBasedLatent_Statics::NewProp_LogIndexAbortFinish,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestBTTask_TimerBasedLatent_Statics::NewProp_NumTicksExecuting,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestBTTask_TimerBasedLatent_Statics::NewProp_NumTicksAborting,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestBTTask_TimerBasedLatent_Statics::NewProp_LogResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTestBTTask_TimerBasedLatent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UTestBTTask_TimerBasedLatent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
	(UObject* (*)())Z_Construct_UPackage__Script_AITestSuite,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTestBTTask_TimerBasedLatent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTestBTTask_TimerBasedLatent_Statics::ClassParams = {
	&UTestBTTask_TimerBasedLatent::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UTestBTTask_TimerBasedLatent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UTestBTTask_TimerBasedLatent_Statics::PropPointers),
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTestBTTask_TimerBasedLatent_Statics::Class_MetaDataParams), Z_Construct_UClass_UTestBTTask_TimerBasedLatent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTestBTTask_TimerBasedLatent()
{
	if (!Z_Registration_Info_UClass_UTestBTTask_TimerBasedLatent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTestBTTask_TimerBasedLatent.OuterSingleton, Z_Construct_UClass_UTestBTTask_TimerBasedLatent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTestBTTask_TimerBasedLatent.OuterSingleton;
}
template<> AITESTSUITE_API UClass* StaticClass<UTestBTTask_TimerBasedLatent>()
{
	return UTestBTTask_TimerBasedLatent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTestBTTask_TimerBasedLatent);
UTestBTTask_TimerBasedLatent::~UTestBTTask_TimerBasedLatent() {}
// End Class UTestBTTask_TimerBasedLatent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Developer_AITestSuite_Classes_BehaviorTree_TestBTTask_TimerBasedLatent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTestBTTask_TimerBasedLatent, UTestBTTask_TimerBasedLatent::StaticClass, TEXT("UTestBTTask_TimerBasedLatent"), &Z_Registration_Info_UClass_UTestBTTask_TimerBasedLatent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTestBTTask_TimerBasedLatent), 1604485773U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_AITestSuite_Classes_BehaviorTree_TestBTTask_TimerBasedLatent_h_2882451132(TEXT("/Script/AITestSuite"),
	Z_CompiledInDeferFile_FID_Engine_Source_Developer_AITestSuite_Classes_BehaviorTree_TestBTTask_TimerBasedLatent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_AITestSuite_Classes_BehaviorTree_TestBTTask_TimerBasedLatent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
