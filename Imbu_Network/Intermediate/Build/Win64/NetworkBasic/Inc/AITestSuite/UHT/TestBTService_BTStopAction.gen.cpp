// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Developer/AITestSuite/Classes/BehaviorTree/TestBTService_BTStopAction.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTestBTService_BTStopAction() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBTService();
AITESTSUITE_API UClass* Z_Construct_UClass_UTestBTService_BTStopAction();
AITESTSUITE_API UClass* Z_Construct_UClass_UTestBTService_BTStopAction_NoRegister();
AITESTSUITE_API UEnum* Z_Construct_UEnum_AITestSuite_EBTTestServiceStopTiming();
AITESTSUITE_API UEnum* Z_Construct_UEnum_AITestSuite_EBTTestStopAction();
UPackage* Z_Construct_UPackage__Script_AITestSuite();
// End Cross Module References

// Begin Enum EBTTestServiceStopTiming
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBTTestServiceStopTiming;
static UEnum* EBTTestServiceStopTiming_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EBTTestServiceStopTiming.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EBTTestServiceStopTiming.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AITestSuite_EBTTestServiceStopTiming, (UObject*)Z_Construct_UPackage__Script_AITestSuite(), TEXT("EBTTestServiceStopTiming"));
	}
	return Z_Registration_Info_UEnum_EBTTestServiceStopTiming.OuterSingleton;
}
template<> AITESTSUITE_API UEnum* StaticEnum<EBTTestServiceStopTiming>()
{
	return EBTTestServiceStopTiming_StaticEnum();
}
struct Z_Construct_UEnum_AITestSuite_EBTTestServiceStopTiming_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "DuringBecomeRelevant.Name", "EBTTestServiceStopTiming::DuringBecomeRelevant" },
		{ "DuringCeaseRelevant.Name", "EBTTestServiceStopTiming::DuringCeaseRelevant" },
		{ "DuringTick.Name", "EBTTestServiceStopTiming::DuringTick" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/TestBTService_BTStopAction.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EBTTestServiceStopTiming::DuringBecomeRelevant", (int64)EBTTestServiceStopTiming::DuringBecomeRelevant },
		{ "EBTTestServiceStopTiming::DuringTick", (int64)EBTTestServiceStopTiming::DuringTick },
		{ "EBTTestServiceStopTiming::DuringCeaseRelevant", (int64)EBTTestServiceStopTiming::DuringCeaseRelevant },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AITestSuite_EBTTestServiceStopTiming_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AITestSuite,
	nullptr,
	"EBTTestServiceStopTiming",
	"EBTTestServiceStopTiming",
	Z_Construct_UEnum_AITestSuite_EBTTestServiceStopTiming_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AITestSuite_EBTTestServiceStopTiming_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AITestSuite_EBTTestServiceStopTiming_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AITestSuite_EBTTestServiceStopTiming_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AITestSuite_EBTTestServiceStopTiming()
{
	if (!Z_Registration_Info_UEnum_EBTTestServiceStopTiming.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBTTestServiceStopTiming.InnerSingleton, Z_Construct_UEnum_AITestSuite_EBTTestServiceStopTiming_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EBTTestServiceStopTiming.InnerSingleton;
}
// End Enum EBTTestServiceStopTiming

// Begin Class UTestBTService_BTStopAction
void UTestBTService_BTStopAction::StaticRegisterNativesUTestBTService_BTStopAction()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTestBTService_BTStopAction);
UClass* Z_Construct_UClass_UTestBTService_BTStopAction_NoRegister()
{
	return UTestBTService_BTStopAction::StaticClass();
}
struct Z_Construct_UClass_UTestBTService_BTStopAction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HiddenNode", "" },
		{ "IncludePath", "BehaviorTree/TestBTService_BTStopAction.h" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/TestBTService_BTStopAction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LogIndex_MetaData[] = {
		{ "ModuleRelativePath", "Classes/BehaviorTree/TestBTService_BTStopAction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StopTiming_MetaData[] = {
		{ "ModuleRelativePath", "Classes/BehaviorTree/TestBTService_BTStopAction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StopAction_MetaData[] = {
		{ "ModuleRelativePath", "Classes/BehaviorTree/TestBTService_BTStopAction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_LogIndex;
	static const UECodeGen_Private::FBytePropertyParams NewProp_StopTiming_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_StopTiming;
	static const UECodeGen_Private::FBytePropertyParams NewProp_StopAction_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_StopAction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTestBTService_BTStopAction>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTestBTService_BTStopAction_Statics::NewProp_LogIndex = { "LogIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTestBTService_BTStopAction, LogIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LogIndex_MetaData), NewProp_LogIndex_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTestBTService_BTStopAction_Statics::NewProp_StopTiming_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UTestBTService_BTStopAction_Statics::NewProp_StopTiming = { "StopTiming", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTestBTService_BTStopAction, StopTiming), Z_Construct_UEnum_AITestSuite_EBTTestServiceStopTiming, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StopTiming_MetaData), NewProp_StopTiming_MetaData) }; // 2643898064
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTestBTService_BTStopAction_Statics::NewProp_StopAction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UTestBTService_BTStopAction_Statics::NewProp_StopAction = { "StopAction", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTestBTService_BTStopAction, StopAction), Z_Construct_UEnum_AITestSuite_EBTTestStopAction, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StopAction_MetaData), NewProp_StopAction_MetaData) }; // 711851516
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTestBTService_BTStopAction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestBTService_BTStopAction_Statics::NewProp_LogIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestBTService_BTStopAction_Statics::NewProp_StopTiming_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestBTService_BTStopAction_Statics::NewProp_StopTiming,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestBTService_BTStopAction_Statics::NewProp_StopAction_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestBTService_BTStopAction_Statics::NewProp_StopAction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTestBTService_BTStopAction_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UTestBTService_BTStopAction_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTService,
	(UObject* (*)())Z_Construct_UPackage__Script_AITestSuite,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTestBTService_BTStopAction_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTestBTService_BTStopAction_Statics::ClassParams = {
	&UTestBTService_BTStopAction::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UTestBTService_BTStopAction_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UTestBTService_BTStopAction_Statics::PropPointers),
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTestBTService_BTStopAction_Statics::Class_MetaDataParams), Z_Construct_UClass_UTestBTService_BTStopAction_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTestBTService_BTStopAction()
{
	if (!Z_Registration_Info_UClass_UTestBTService_BTStopAction.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTestBTService_BTStopAction.OuterSingleton, Z_Construct_UClass_UTestBTService_BTStopAction_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTestBTService_BTStopAction.OuterSingleton;
}
template<> AITESTSUITE_API UClass* StaticClass<UTestBTService_BTStopAction>()
{
	return UTestBTService_BTStopAction::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTestBTService_BTStopAction);
UTestBTService_BTStopAction::~UTestBTService_BTStopAction() {}
// End Class UTestBTService_BTStopAction

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Developer_AITestSuite_Classes_BehaviorTree_TestBTService_BTStopAction_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EBTTestServiceStopTiming_StaticEnum, TEXT("EBTTestServiceStopTiming"), &Z_Registration_Info_UEnum_EBTTestServiceStopTiming, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2643898064U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTestBTService_BTStopAction, UTestBTService_BTStopAction::StaticClass, TEXT("UTestBTService_BTStopAction"), &Z_Registration_Info_UClass_UTestBTService_BTStopAction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTestBTService_BTStopAction), 390438928U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_AITestSuite_Classes_BehaviorTree_TestBTService_BTStopAction_h_1842650625(TEXT("/Script/AITestSuite"),
	Z_CompiledInDeferFile_FID_Engine_Source_Developer_AITestSuite_Classes_BehaviorTree_TestBTService_BTStopAction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_AITestSuite_Classes_BehaviorTree_TestBTService_BTStopAction_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Developer_AITestSuite_Classes_BehaviorTree_TestBTService_BTStopAction_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_AITestSuite_Classes_BehaviorTree_TestBTService_BTStopAction_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
