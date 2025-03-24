// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Developer/AITestSuite/Classes/BehaviorTree/TestBTTask_LatentWithFlags.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTestBTTask_LatentWithFlags() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EBTNodeResult();
AITESTSUITE_API UClass* Z_Construct_UClass_UTestBTTask_LatentWithFlags();
AITESTSUITE_API UClass* Z_Construct_UClass_UTestBTTask_LatentWithFlags_NoRegister();
AITESTSUITE_API UEnum* Z_Construct_UEnum_AITestSuite_EBTTestChangeFlagBehavior();
UPackage* Z_Construct_UPackage__Script_AITestSuite();
// End Cross Module References

// Begin Enum EBTTestChangeFlagBehavior
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBTTestChangeFlagBehavior;
static UEnum* EBTTestChangeFlagBehavior_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EBTTestChangeFlagBehavior.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EBTTestChangeFlagBehavior.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AITestSuite_EBTTestChangeFlagBehavior, (UObject*)Z_Construct_UPackage__Script_AITestSuite(), TEXT("EBTTestChangeFlagBehavior"));
	}
	return Z_Registration_Info_UEnum_EBTTestChangeFlagBehavior.OuterSingleton;
}
template<> AITESTSUITE_API UEnum* StaticEnum<EBTTestChangeFlagBehavior>()
{
	return EBTTestChangeFlagBehavior_StaticEnum();
}
struct Z_Construct_UEnum_AITestSuite_EBTTestChangeFlagBehavior_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/BehaviorTree/TestBTTask_LatentWithFlags.h" },
		{ "Set.Name", "EBTTestChangeFlagBehavior::Set" },
		{ "Toggle.Name", "EBTTestChangeFlagBehavior::Toggle" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EBTTestChangeFlagBehavior::Set", (int64)EBTTestChangeFlagBehavior::Set },
		{ "EBTTestChangeFlagBehavior::Toggle", (int64)EBTTestChangeFlagBehavior::Toggle },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AITestSuite_EBTTestChangeFlagBehavior_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AITestSuite,
	nullptr,
	"EBTTestChangeFlagBehavior",
	"EBTTestChangeFlagBehavior",
	Z_Construct_UEnum_AITestSuite_EBTTestChangeFlagBehavior_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AITestSuite_EBTTestChangeFlagBehavior_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AITestSuite_EBTTestChangeFlagBehavior_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AITestSuite_EBTTestChangeFlagBehavior_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AITestSuite_EBTTestChangeFlagBehavior()
{
	if (!Z_Registration_Info_UEnum_EBTTestChangeFlagBehavior.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBTTestChangeFlagBehavior.InnerSingleton, Z_Construct_UEnum_AITestSuite_EBTTestChangeFlagBehavior_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EBTTestChangeFlagBehavior.InnerSingleton;
}
// End Enum EBTTestChangeFlagBehavior

// Begin Class UTestBTTask_LatentWithFlags
void UTestBTTask_LatentWithFlags::StaticRegisterNativesUTestBTTask_LatentWithFlags()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTestBTTask_LatentWithFlags);
UClass* Z_Construct_UClass_UTestBTTask_LatentWithFlags_NoRegister()
{
	return UTestBTTask_LatentWithFlags::StaticClass();
}
struct Z_Construct_UClass_UTestBTTask_LatentWithFlags_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HiddenNode", "" },
		{ "IncludePath", "BehaviorTree/TestBTTask_LatentWithFlags.h" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/TestBTTask_LatentWithFlags.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LogIndexExecuteStart_MetaData[] = {
		{ "ModuleRelativePath", "Classes/BehaviorTree/TestBTTask_LatentWithFlags.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LogIndexExecuting_MetaData[] = {
		{ "ModuleRelativePath", "Classes/BehaviorTree/TestBTTask_LatentWithFlags.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LogIndexExecuteFinish_MetaData[] = {
		{ "ModuleRelativePath", "Classes/BehaviorTree/TestBTTask_LatentWithFlags.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LogIndexAbortStart_MetaData[] = {
		{ "ModuleRelativePath", "Classes/BehaviorTree/TestBTTask_LatentWithFlags.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LogIndexAborting_MetaData[] = {
		{ "ModuleRelativePath", "Classes/BehaviorTree/TestBTTask_LatentWithFlags.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LogIndexAbortFinish_MetaData[] = {
		{ "ModuleRelativePath", "Classes/BehaviorTree/TestBTTask_LatentWithFlags.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExecuteHalfTicks_MetaData[] = {
		{ "Comment", "/** Num of ticks before 'execute start' and `set execute flag` and then the same num of ticks before `execute finish` */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/TestBTTask_LatentWithFlags.h" },
		{ "ToolTip", "Num of ticks before 'execute start' and `set execute flag` and then the same num of ticks before `execute finish`" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbortHalfTicks_MetaData[] = {
		{ "Comment", "/** Num of ticks before 'abort start' and `set abort flag` and then the same num of ticks before `abort finish` */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/TestBTTask_LatentWithFlags.h" },
		{ "ToolTip", "Num of ticks before 'abort start' and `set abort flag` and then the same num of ticks before `abort finish`" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KeyNameExecute_MetaData[] = {
		{ "ModuleRelativePath", "Classes/BehaviorTree/TestBTTask_LatentWithFlags.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KeyNameAbort_MetaData[] = {
		{ "ModuleRelativePath", "Classes/BehaviorTree/TestBTTask_LatentWithFlags.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChangeFlagBehavior_MetaData[] = {
		{ "ModuleRelativePath", "Classes/BehaviorTree/TestBTTask_LatentWithFlags.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LogResult_MetaData[] = {
		{ "ModuleRelativePath", "Classes/BehaviorTree/TestBTTask_LatentWithFlags.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_LogIndexExecuteStart;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LogIndexExecuting;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LogIndexExecuteFinish;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LogIndexAbortStart;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LogIndexAborting;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LogIndexAbortFinish;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ExecuteHalfTicks;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AbortHalfTicks;
	static const UECodeGen_Private::FNamePropertyParams NewProp_KeyNameExecute;
	static const UECodeGen_Private::FNamePropertyParams NewProp_KeyNameAbort;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ChangeFlagBehavior_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ChangeFlagBehavior;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LogResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTestBTTask_LatentWithFlags>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTestBTTask_LatentWithFlags_Statics::NewProp_LogIndexExecuteStart = { "LogIndexExecuteStart", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTestBTTask_LatentWithFlags, LogIndexExecuteStart), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LogIndexExecuteStart_MetaData), NewProp_LogIndexExecuteStart_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTestBTTask_LatentWithFlags_Statics::NewProp_LogIndexExecuting = { "LogIndexExecuting", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTestBTTask_LatentWithFlags, LogIndexExecuting), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LogIndexExecuting_MetaData), NewProp_LogIndexExecuting_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTestBTTask_LatentWithFlags_Statics::NewProp_LogIndexExecuteFinish = { "LogIndexExecuteFinish", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTestBTTask_LatentWithFlags, LogIndexExecuteFinish), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LogIndexExecuteFinish_MetaData), NewProp_LogIndexExecuteFinish_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTestBTTask_LatentWithFlags_Statics::NewProp_LogIndexAbortStart = { "LogIndexAbortStart", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTestBTTask_LatentWithFlags, LogIndexAbortStart), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LogIndexAbortStart_MetaData), NewProp_LogIndexAbortStart_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTestBTTask_LatentWithFlags_Statics::NewProp_LogIndexAborting = { "LogIndexAborting", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTestBTTask_LatentWithFlags, LogIndexAborting), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LogIndexAborting_MetaData), NewProp_LogIndexAborting_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTestBTTask_LatentWithFlags_Statics::NewProp_LogIndexAbortFinish = { "LogIndexAbortFinish", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTestBTTask_LatentWithFlags, LogIndexAbortFinish), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LogIndexAbortFinish_MetaData), NewProp_LogIndexAbortFinish_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTestBTTask_LatentWithFlags_Statics::NewProp_ExecuteHalfTicks = { "ExecuteHalfTicks", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTestBTTask_LatentWithFlags, ExecuteHalfTicks), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExecuteHalfTicks_MetaData), NewProp_ExecuteHalfTicks_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTestBTTask_LatentWithFlags_Statics::NewProp_AbortHalfTicks = { "AbortHalfTicks", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTestBTTask_LatentWithFlags, AbortHalfTicks), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbortHalfTicks_MetaData), NewProp_AbortHalfTicks_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UTestBTTask_LatentWithFlags_Statics::NewProp_KeyNameExecute = { "KeyNameExecute", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTestBTTask_LatentWithFlags, KeyNameExecute), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KeyNameExecute_MetaData), NewProp_KeyNameExecute_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UTestBTTask_LatentWithFlags_Statics::NewProp_KeyNameAbort = { "KeyNameAbort", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTestBTTask_LatentWithFlags, KeyNameAbort), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KeyNameAbort_MetaData), NewProp_KeyNameAbort_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTestBTTask_LatentWithFlags_Statics::NewProp_ChangeFlagBehavior_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UTestBTTask_LatentWithFlags_Statics::NewProp_ChangeFlagBehavior = { "ChangeFlagBehavior", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTestBTTask_LatentWithFlags, ChangeFlagBehavior), Z_Construct_UEnum_AITestSuite_EBTTestChangeFlagBehavior, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChangeFlagBehavior_MetaData), NewProp_ChangeFlagBehavior_MetaData) }; // 3299850336
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTestBTTask_LatentWithFlags_Statics::NewProp_LogResult = { "LogResult", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTestBTTask_LatentWithFlags, LogResult), Z_Construct_UEnum_AIModule_EBTNodeResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LogResult_MetaData), NewProp_LogResult_MetaData) }; // 3742194854
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTestBTTask_LatentWithFlags_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestBTTask_LatentWithFlags_Statics::NewProp_LogIndexExecuteStart,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestBTTask_LatentWithFlags_Statics::NewProp_LogIndexExecuting,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestBTTask_LatentWithFlags_Statics::NewProp_LogIndexExecuteFinish,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestBTTask_LatentWithFlags_Statics::NewProp_LogIndexAbortStart,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestBTTask_LatentWithFlags_Statics::NewProp_LogIndexAborting,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestBTTask_LatentWithFlags_Statics::NewProp_LogIndexAbortFinish,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestBTTask_LatentWithFlags_Statics::NewProp_ExecuteHalfTicks,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestBTTask_LatentWithFlags_Statics::NewProp_AbortHalfTicks,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestBTTask_LatentWithFlags_Statics::NewProp_KeyNameExecute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestBTTask_LatentWithFlags_Statics::NewProp_KeyNameAbort,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestBTTask_LatentWithFlags_Statics::NewProp_ChangeFlagBehavior_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestBTTask_LatentWithFlags_Statics::NewProp_ChangeFlagBehavior,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestBTTask_LatentWithFlags_Statics::NewProp_LogResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTestBTTask_LatentWithFlags_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UTestBTTask_LatentWithFlags_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
	(UObject* (*)())Z_Construct_UPackage__Script_AITestSuite,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTestBTTask_LatentWithFlags_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTestBTTask_LatentWithFlags_Statics::ClassParams = {
	&UTestBTTask_LatentWithFlags::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UTestBTTask_LatentWithFlags_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UTestBTTask_LatentWithFlags_Statics::PropPointers),
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTestBTTask_LatentWithFlags_Statics::Class_MetaDataParams), Z_Construct_UClass_UTestBTTask_LatentWithFlags_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTestBTTask_LatentWithFlags()
{
	if (!Z_Registration_Info_UClass_UTestBTTask_LatentWithFlags.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTestBTTask_LatentWithFlags.OuterSingleton, Z_Construct_UClass_UTestBTTask_LatentWithFlags_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTestBTTask_LatentWithFlags.OuterSingleton;
}
template<> AITESTSUITE_API UClass* StaticClass<UTestBTTask_LatentWithFlags>()
{
	return UTestBTTask_LatentWithFlags::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTestBTTask_LatentWithFlags);
UTestBTTask_LatentWithFlags::~UTestBTTask_LatentWithFlags() {}
// End Class UTestBTTask_LatentWithFlags

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Developer_AITestSuite_Classes_BehaviorTree_TestBTTask_LatentWithFlags_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EBTTestChangeFlagBehavior_StaticEnum, TEXT("EBTTestChangeFlagBehavior"), &Z_Registration_Info_UEnum_EBTTestChangeFlagBehavior, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3299850336U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTestBTTask_LatentWithFlags, UTestBTTask_LatentWithFlags::StaticClass, TEXT("UTestBTTask_LatentWithFlags"), &Z_Registration_Info_UClass_UTestBTTask_LatentWithFlags, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTestBTTask_LatentWithFlags), 2763647173U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_AITestSuite_Classes_BehaviorTree_TestBTTask_LatentWithFlags_h_3383822967(TEXT("/Script/AITestSuite"),
	Z_CompiledInDeferFile_FID_Engine_Source_Developer_AITestSuite_Classes_BehaviorTree_TestBTTask_LatentWithFlags_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_AITestSuite_Classes_BehaviorTree_TestBTTask_LatentWithFlags_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Developer_AITestSuite_Classes_BehaviorTree_TestBTTask_LatentWithFlags_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_AITestSuite_Classes_BehaviorTree_TestBTTask_LatentWithFlags_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
