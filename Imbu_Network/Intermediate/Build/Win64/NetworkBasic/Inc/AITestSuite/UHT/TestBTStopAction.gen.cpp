// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Developer/AITestSuite/Classes/BehaviorTree/TestBTStopAction.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTestBTStopAction() {}

// Begin Cross Module References
AITESTSUITE_API UEnum* Z_Construct_UEnum_AITestSuite_EBTTestStopAction();
UPackage* Z_Construct_UPackage__Script_AITestSuite();
// End Cross Module References

// Begin Enum EBTTestStopAction
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBTTestStopAction;
static UEnum* EBTTestStopAction_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EBTTestStopAction.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EBTTestStopAction.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AITestSuite_EBTTestStopAction, (UObject*)Z_Construct_UPackage__Script_AITestSuite(), TEXT("EBTTestStopAction"));
	}
	return Z_Registration_Info_UEnum_EBTTestStopAction.OuterSingleton;
}
template<> AITESTSUITE_API UEnum* StaticEnum<EBTTestStopAction>()
{
	return EBTTestStopAction_StaticEnum();
}
struct Z_Construct_UEnum_AITestSuite_EBTTestStopAction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Cleanup.Name", "EBTTestStopAction::Cleanup" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/TestBTStopAction.h" },
		{ "Restart_Complete.Name", "EBTTestStopAction::Restart_Complete" },
		{ "Restart_ForceReevaluateRootNode.Name", "EBTTestStopAction::Restart_ForceReevaluateRootNode" },
		{ "StartTree.Name", "EBTTestStopAction::StartTree" },
		{ "StopTree.Name", "EBTTestStopAction::StopTree" },
		{ "UnInitialize.Name", "EBTTestStopAction::UnInitialize" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EBTTestStopAction::StopTree", (int64)EBTTestStopAction::StopTree },
		{ "EBTTestStopAction::UnInitialize", (int64)EBTTestStopAction::UnInitialize },
		{ "EBTTestStopAction::Cleanup", (int64)EBTTestStopAction::Cleanup },
		{ "EBTTestStopAction::Restart_ForceReevaluateRootNode", (int64)EBTTestStopAction::Restart_ForceReevaluateRootNode },
		{ "EBTTestStopAction::Restart_Complete", (int64)EBTTestStopAction::Restart_Complete },
		{ "EBTTestStopAction::StartTree", (int64)EBTTestStopAction::StartTree },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AITestSuite_EBTTestStopAction_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AITestSuite,
	nullptr,
	"EBTTestStopAction",
	"EBTTestStopAction",
	Z_Construct_UEnum_AITestSuite_EBTTestStopAction_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AITestSuite_EBTTestStopAction_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AITestSuite_EBTTestStopAction_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AITestSuite_EBTTestStopAction_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AITestSuite_EBTTestStopAction()
{
	if (!Z_Registration_Info_UEnum_EBTTestStopAction.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBTTestStopAction.InnerSingleton, Z_Construct_UEnum_AITestSuite_EBTTestStopAction_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EBTTestStopAction.InnerSingleton;
}
// End Enum EBTTestStopAction

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Developer_AITestSuite_Classes_BehaviorTree_TestBTStopAction_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EBTTestStopAction_StaticEnum, TEXT("EBTTestStopAction"), &Z_Registration_Info_UEnum_EBTTestStopAction, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 711851516U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_AITestSuite_Classes_BehaviorTree_TestBTStopAction_h_2000333406(TEXT("/Script/AITestSuite"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Developer_AITestSuite_Classes_BehaviorTree_TestBTStopAction_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_AITestSuite_Classes_BehaviorTree_TestBTStopAction_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
