// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Developer/AITestSuite/Classes/BehaviorTree/TestBTTask_BTStopAction.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTestBTTask_BTStopAction() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EBTNodeResult();
AITESTSUITE_API UClass* Z_Construct_UClass_UTestBTTask_BTStopAction();
AITESTSUITE_API UClass* Z_Construct_UClass_UTestBTTask_BTStopAction_NoRegister();
AITESTSUITE_API UEnum* Z_Construct_UEnum_AITestSuite_EBTTestStopAction();
AITESTSUITE_API UEnum* Z_Construct_UEnum_AITestSuite_EBTTestTaskStopTiming();
UPackage* Z_Construct_UPackage__Script_AITestSuite();
// End Cross Module References

// Begin Enum EBTTestTaskStopTiming
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBTTestTaskStopTiming;
static UEnum* EBTTestTaskStopTiming_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EBTTestTaskStopTiming.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EBTTestTaskStopTiming.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AITestSuite_EBTTestTaskStopTiming, (UObject*)Z_Construct_UPackage__Script_AITestSuite(), TEXT("EBTTestTaskStopTiming"));
	}
	return Z_Registration_Info_UEnum_EBTTestTaskStopTiming.OuterSingleton;
}
template<> AITESTSUITE_API UEnum* StaticEnum<EBTTestTaskStopTiming>()
{
	return EBTTestTaskStopTiming_StaticEnum();
}
struct Z_Construct_UEnum_AITestSuite_EBTTestTaskStopTiming_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "DuringAbort.Name", "EBTTestTaskStopTiming::DuringAbort" },
		{ "DuringExecute.Name", "EBTTestTaskStopTiming::DuringExecute" },
		{ "DuringFinish.Name", "EBTTestTaskStopTiming::DuringFinish" },
		{ "DuringTick.Name", "EBTTestTaskStopTiming::DuringTick" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/TestBTTask_BTStopAction.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EBTTestTaskStopTiming::DuringExecute", (int64)EBTTestTaskStopTiming::DuringExecute },
		{ "EBTTestTaskStopTiming::DuringTick", (int64)EBTTestTaskStopTiming::DuringTick },
		{ "EBTTestTaskStopTiming::DuringAbort", (int64)EBTTestTaskStopTiming::DuringAbort },
		{ "EBTTestTaskStopTiming::DuringFinish", (int64)EBTTestTaskStopTiming::DuringFinish },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AITestSuite_EBTTestTaskStopTiming_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AITestSuite,
	nullptr,
	"EBTTestTaskStopTiming",
	"EBTTestTaskStopTiming",
	Z_Construct_UEnum_AITestSuite_EBTTestTaskStopTiming_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AITestSuite_EBTTestTaskStopTiming_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AITestSuite_EBTTestTaskStopTiming_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AITestSuite_EBTTestTaskStopTiming_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AITestSuite_EBTTestTaskStopTiming()
{
	if (!Z_Registration_Info_UEnum_EBTTestTaskStopTiming.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBTTestTaskStopTiming.InnerSingleton, Z_Construct_UEnum_AITestSuite_EBTTestTaskStopTiming_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EBTTestTaskStopTiming.InnerSingleton;
}
// End Enum EBTTestTaskStopTiming

// Begin Class UTestBTTask_BTStopAction
void UTestBTTask_BTStopAction::StaticRegisterNativesUTestBTTask_BTStopAction()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTestBTTask_BTStopAction);
UClass* Z_Construct_UClass_UTestBTTask_BTStopAction_NoRegister()
{
	return UTestBTTask_BTStopAction::StaticClass();
}
struct Z_Construct_UClass_UTestBTTask_BTStopAction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HiddenNode", "" },
		{ "IncludePath", "BehaviorTree/TestBTTask_BTStopAction.h" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/TestBTTask_BTStopAction.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StopTiming_MetaData[] = {
		{ "ModuleRelativePath", "Classes/BehaviorTree/TestBTTask_BTStopAction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StopAction_MetaData[] = {
		{ "ModuleRelativePath", "Classes/BehaviorTree/TestBTTask_BTStopAction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LogIndex_MetaData[] = {
		{ "ModuleRelativePath", "Classes/BehaviorTree/TestBTTask_BTStopAction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LogResult_MetaData[] = {
		{ "ModuleRelativePath", "Classes/BehaviorTree/TestBTTask_BTStopAction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_StopTiming_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_StopTiming;
	static const UECodeGen_Private::FBytePropertyParams NewProp_StopAction_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_StopAction;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LogIndex;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LogResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTestBTTask_BTStopAction>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTestBTTask_BTStopAction_Statics::NewProp_StopTiming_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UTestBTTask_BTStopAction_Statics::NewProp_StopTiming = { "StopTiming", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTestBTTask_BTStopAction, StopTiming), Z_Construct_UEnum_AITestSuite_EBTTestTaskStopTiming, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StopTiming_MetaData), NewProp_StopTiming_MetaData) }; // 3714267713
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTestBTTask_BTStopAction_Statics::NewProp_StopAction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UTestBTTask_BTStopAction_Statics::NewProp_StopAction = { "StopAction", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTestBTTask_BTStopAction, StopAction), Z_Construct_UEnum_AITestSuite_EBTTestStopAction, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StopAction_MetaData), NewProp_StopAction_MetaData) }; // 711851516
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTestBTTask_BTStopAction_Statics::NewProp_LogIndex = { "LogIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTestBTTask_BTStopAction, LogIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LogIndex_MetaData), NewProp_LogIndex_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTestBTTask_BTStopAction_Statics::NewProp_LogResult = { "LogResult", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTestBTTask_BTStopAction, LogResult), Z_Construct_UEnum_AIModule_EBTNodeResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LogResult_MetaData), NewProp_LogResult_MetaData) }; // 3742194854
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTestBTTask_BTStopAction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestBTTask_BTStopAction_Statics::NewProp_StopTiming_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestBTTask_BTStopAction_Statics::NewProp_StopTiming,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestBTTask_BTStopAction_Statics::NewProp_StopAction_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestBTTask_BTStopAction_Statics::NewProp_StopAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestBTTask_BTStopAction_Statics::NewProp_LogIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestBTTask_BTStopAction_Statics::NewProp_LogResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTestBTTask_BTStopAction_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UTestBTTask_BTStopAction_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
	(UObject* (*)())Z_Construct_UPackage__Script_AITestSuite,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTestBTTask_BTStopAction_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTestBTTask_BTStopAction_Statics::ClassParams = {
	&UTestBTTask_BTStopAction::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UTestBTTask_BTStopAction_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UTestBTTask_BTStopAction_Statics::PropPointers),
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTestBTTask_BTStopAction_Statics::Class_MetaDataParams), Z_Construct_UClass_UTestBTTask_BTStopAction_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTestBTTask_BTStopAction()
{
	if (!Z_Registration_Info_UClass_UTestBTTask_BTStopAction.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTestBTTask_BTStopAction.OuterSingleton, Z_Construct_UClass_UTestBTTask_BTStopAction_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTestBTTask_BTStopAction.OuterSingleton;
}
template<> AITESTSUITE_API UClass* StaticClass<UTestBTTask_BTStopAction>()
{
	return UTestBTTask_BTStopAction::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTestBTTask_BTStopAction);
UTestBTTask_BTStopAction::~UTestBTTask_BTStopAction() {}
// End Class UTestBTTask_BTStopAction

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Developer_AITestSuite_Classes_BehaviorTree_TestBTTask_BTStopAction_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EBTTestTaskStopTiming_StaticEnum, TEXT("EBTTestTaskStopTiming"), &Z_Registration_Info_UEnum_EBTTestTaskStopTiming, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3714267713U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTestBTTask_BTStopAction, UTestBTTask_BTStopAction::StaticClass, TEXT("UTestBTTask_BTStopAction"), &Z_Registration_Info_UClass_UTestBTTask_BTStopAction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTestBTTask_BTStopAction), 1385737038U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_AITestSuite_Classes_BehaviorTree_TestBTTask_BTStopAction_h_1046828138(TEXT("/Script/AITestSuite"),
	Z_CompiledInDeferFile_FID_Engine_Source_Developer_AITestSuite_Classes_BehaviorTree_TestBTTask_BTStopAction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_AITestSuite_Classes_BehaviorTree_TestBTTask_BTStopAction_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Developer_AITestSuite_Classes_BehaviorTree_TestBTTask_BTStopAction_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_AITestSuite_Classes_BehaviorTree_TestBTTask_BTStopAction_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
