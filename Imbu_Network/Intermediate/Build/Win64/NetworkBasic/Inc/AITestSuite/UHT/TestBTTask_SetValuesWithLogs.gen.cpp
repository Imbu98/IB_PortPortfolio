// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Developer/AITestSuite/Classes/BehaviorTree/TestBTTask_SetValuesWithLogs.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTestBTTask_SetValuesWithLogs() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EBTNodeResult();
AITESTSUITE_API UClass* Z_Construct_UClass_UTestBTTask_SetValuesWithLogs();
AITESTSUITE_API UClass* Z_Construct_UClass_UTestBTTask_SetValuesWithLogs_NoRegister();
UPackage* Z_Construct_UPackage__Script_AITestSuite();
// End Cross Module References

// Begin Class UTestBTTask_SetValuesWithLogs
void UTestBTTask_SetValuesWithLogs::StaticRegisterNativesUTestBTTask_SetValuesWithLogs()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTestBTTask_SetValuesWithLogs);
UClass* Z_Construct_UClass_UTestBTTask_SetValuesWithLogs_NoRegister()
{
	return UTestBTTask_SetValuesWithLogs::StaticClass();
}
struct Z_Construct_UClass_UTestBTTask_SetValuesWithLogs_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HiddenNode", "" },
		{ "IncludePath", "BehaviorTree/TestBTTask_SetValuesWithLogs.h" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/TestBTTask_SetValuesWithLogs.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LogIndex_MetaData[] = {
		{ "Comment", "/** Index logged when we execute the task */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/TestBTTask_SetValuesWithLogs.h" },
		{ "ToolTip", "Index logged when we execute the task" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LogFinished_MetaData[] = {
		{ "Comment", "/** Index logged when we finish the task */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/TestBTTask_SetValuesWithLogs.h" },
		{ "ToolTip", "Index logged when we finish the task" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExecutionTicks1_MetaData[] = {
		{ "Comment", "/** Number of execution ticks until we set Blackboard KeyName2 Value2 */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/TestBTTask_SetValuesWithLogs.h" },
		{ "ToolTip", "Number of execution ticks until we set Blackboard KeyName2 Value2" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExecutionTicks2_MetaData[] = {
		{ "Comment", "/** Number of execution ticks after ExecutionTicks1 that we end the task */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/TestBTTask_SetValuesWithLogs.h" },
		{ "ToolTip", "Number of execution ticks after ExecutionTicks1 that we end the task" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LogTickIndex_MetaData[] = {
		{ "Comment", "/** Index logged when we tick the task */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/TestBTTask_SetValuesWithLogs.h" },
		{ "ToolTip", "Index logged when we tick the task" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KeyName1_MetaData[] = {
		{ "Comment", "/** Blackboard keyname used when we start the task */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/TestBTTask_SetValuesWithLogs.h" },
		{ "ToolTip", "Blackboard keyname used when we start the task" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value1_MetaData[] = {
		{ "Comment", "/** Blackboard value set when we start the task */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/TestBTTask_SetValuesWithLogs.h" },
		{ "ToolTip", "Blackboard value set when we start the task" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KeyName2_MetaData[] = {
		{ "Comment", "/** Blackboard keyname used after ExecutionTicks1 execution ticks */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/TestBTTask_SetValuesWithLogs.h" },
		{ "ToolTip", "Blackboard keyname used after ExecutionTicks1 execution ticks" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value2_MetaData[] = {
		{ "Comment", "/** Blackboard value set after ExecutionTicks1 execution ticks */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/TestBTTask_SetValuesWithLogs.h" },
		{ "ToolTip", "Blackboard value set after ExecutionTicks1 execution ticks" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnAbortKeyName_MetaData[] = {
		{ "Comment", "/** Blackboard keyname used when we abort the task */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/TestBTTask_SetValuesWithLogs.h" },
		{ "ToolTip", "Blackboard keyname used when we abort the task" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnAbortValue_MetaData[] = {
		{ "Comment", "/** Blackboard value set when we abort the task */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/TestBTTask_SetValuesWithLogs.h" },
		{ "ToolTip", "Blackboard value set when we abort the task" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TaskResult_MetaData[] = {
		{ "Comment", "/** Result when we finish the task */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/TestBTTask_SetValuesWithLogs.h" },
		{ "ToolTip", "Result when we finish the task" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_LogIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LogFinished;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ExecutionTicks1;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ExecutionTicks2;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LogTickIndex;
	static const UECodeGen_Private::FNamePropertyParams NewProp_KeyName1;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Value1;
	static const UECodeGen_Private::FNamePropertyParams NewProp_KeyName2;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Value2;
	static const UECodeGen_Private::FNamePropertyParams NewProp_OnAbortKeyName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OnAbortValue;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TaskResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTestBTTask_SetValuesWithLogs>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTestBTTask_SetValuesWithLogs_Statics::NewProp_LogIndex = { "LogIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTestBTTask_SetValuesWithLogs, LogIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LogIndex_MetaData), NewProp_LogIndex_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTestBTTask_SetValuesWithLogs_Statics::NewProp_LogFinished = { "LogFinished", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTestBTTask_SetValuesWithLogs, LogFinished), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LogFinished_MetaData), NewProp_LogFinished_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTestBTTask_SetValuesWithLogs_Statics::NewProp_ExecutionTicks1 = { "ExecutionTicks1", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTestBTTask_SetValuesWithLogs, ExecutionTicks1), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExecutionTicks1_MetaData), NewProp_ExecutionTicks1_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTestBTTask_SetValuesWithLogs_Statics::NewProp_ExecutionTicks2 = { "ExecutionTicks2", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTestBTTask_SetValuesWithLogs, ExecutionTicks2), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExecutionTicks2_MetaData), NewProp_ExecutionTicks2_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTestBTTask_SetValuesWithLogs_Statics::NewProp_LogTickIndex = { "LogTickIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTestBTTask_SetValuesWithLogs, LogTickIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LogTickIndex_MetaData), NewProp_LogTickIndex_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UTestBTTask_SetValuesWithLogs_Statics::NewProp_KeyName1 = { "KeyName1", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTestBTTask_SetValuesWithLogs, KeyName1), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KeyName1_MetaData), NewProp_KeyName1_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTestBTTask_SetValuesWithLogs_Statics::NewProp_Value1 = { "Value1", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTestBTTask_SetValuesWithLogs, Value1), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value1_MetaData), NewProp_Value1_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UTestBTTask_SetValuesWithLogs_Statics::NewProp_KeyName2 = { "KeyName2", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTestBTTask_SetValuesWithLogs, KeyName2), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KeyName2_MetaData), NewProp_KeyName2_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTestBTTask_SetValuesWithLogs_Statics::NewProp_Value2 = { "Value2", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTestBTTask_SetValuesWithLogs, Value2), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value2_MetaData), NewProp_Value2_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UTestBTTask_SetValuesWithLogs_Statics::NewProp_OnAbortKeyName = { "OnAbortKeyName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTestBTTask_SetValuesWithLogs, OnAbortKeyName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnAbortKeyName_MetaData), NewProp_OnAbortKeyName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTestBTTask_SetValuesWithLogs_Statics::NewProp_OnAbortValue = { "OnAbortValue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTestBTTask_SetValuesWithLogs, OnAbortValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnAbortValue_MetaData), NewProp_OnAbortValue_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTestBTTask_SetValuesWithLogs_Statics::NewProp_TaskResult = { "TaskResult", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTestBTTask_SetValuesWithLogs, TaskResult), Z_Construct_UEnum_AIModule_EBTNodeResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TaskResult_MetaData), NewProp_TaskResult_MetaData) }; // 3742194854
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTestBTTask_SetValuesWithLogs_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestBTTask_SetValuesWithLogs_Statics::NewProp_LogIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestBTTask_SetValuesWithLogs_Statics::NewProp_LogFinished,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestBTTask_SetValuesWithLogs_Statics::NewProp_ExecutionTicks1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestBTTask_SetValuesWithLogs_Statics::NewProp_ExecutionTicks2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestBTTask_SetValuesWithLogs_Statics::NewProp_LogTickIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestBTTask_SetValuesWithLogs_Statics::NewProp_KeyName1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestBTTask_SetValuesWithLogs_Statics::NewProp_Value1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestBTTask_SetValuesWithLogs_Statics::NewProp_KeyName2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestBTTask_SetValuesWithLogs_Statics::NewProp_Value2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestBTTask_SetValuesWithLogs_Statics::NewProp_OnAbortKeyName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestBTTask_SetValuesWithLogs_Statics::NewProp_OnAbortValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestBTTask_SetValuesWithLogs_Statics::NewProp_TaskResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTestBTTask_SetValuesWithLogs_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UTestBTTask_SetValuesWithLogs_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
	(UObject* (*)())Z_Construct_UPackage__Script_AITestSuite,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTestBTTask_SetValuesWithLogs_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTestBTTask_SetValuesWithLogs_Statics::ClassParams = {
	&UTestBTTask_SetValuesWithLogs::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UTestBTTask_SetValuesWithLogs_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UTestBTTask_SetValuesWithLogs_Statics::PropPointers),
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTestBTTask_SetValuesWithLogs_Statics::Class_MetaDataParams), Z_Construct_UClass_UTestBTTask_SetValuesWithLogs_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTestBTTask_SetValuesWithLogs()
{
	if (!Z_Registration_Info_UClass_UTestBTTask_SetValuesWithLogs.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTestBTTask_SetValuesWithLogs.OuterSingleton, Z_Construct_UClass_UTestBTTask_SetValuesWithLogs_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTestBTTask_SetValuesWithLogs.OuterSingleton;
}
template<> AITESTSUITE_API UClass* StaticClass<UTestBTTask_SetValuesWithLogs>()
{
	return UTestBTTask_SetValuesWithLogs::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTestBTTask_SetValuesWithLogs);
UTestBTTask_SetValuesWithLogs::~UTestBTTask_SetValuesWithLogs() {}
// End Class UTestBTTask_SetValuesWithLogs

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Developer_AITestSuite_Classes_BehaviorTree_TestBTTask_SetValuesWithLogs_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTestBTTask_SetValuesWithLogs, UTestBTTask_SetValuesWithLogs::StaticClass, TEXT("UTestBTTask_SetValuesWithLogs"), &Z_Registration_Info_UClass_UTestBTTask_SetValuesWithLogs, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTestBTTask_SetValuesWithLogs), 1841928169U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_AITestSuite_Classes_BehaviorTree_TestBTTask_SetValuesWithLogs_h_3781588750(TEXT("/Script/AITestSuite"),
	Z_CompiledInDeferFile_FID_Engine_Source_Developer_AITestSuite_Classes_BehaviorTree_TestBTTask_SetValuesWithLogs_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_AITestSuite_Classes_BehaviorTree_TestBTTask_SetValuesWithLogs_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
