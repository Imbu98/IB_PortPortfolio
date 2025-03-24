// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Developer/AITestSuite/Classes/BehaviorTree/TestBTDecorator_Blackboard.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTestBTDecorator_Blackboard() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator_Blackboard();
AITESTSUITE_API UClass* Z_Construct_UClass_UTestBTDecorator_Blackboard();
AITESTSUITE_API UClass* Z_Construct_UClass_UTestBTDecorator_Blackboard_NoRegister();
UPackage* Z_Construct_UPackage__Script_AITestSuite();
// End Cross Module References

// Begin Class UTestBTDecorator_Blackboard
void UTestBTDecorator_Blackboard::StaticRegisterNativesUTestBTDecorator_Blackboard()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTestBTDecorator_Blackboard);
UClass* Z_Construct_UClass_UTestBTDecorator_Blackboard_NoRegister()
{
	return UTestBTDecorator_Blackboard::StaticClass();
}
struct Z_Construct_UClass_UTestBTDecorator_Blackboard_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HiddenNode", "" },
		{ "HideCategories", "Condition" },
		{ "IncludePath", "BehaviorTree/TestBTDecorator_Blackboard.h" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/TestBTDecorator_Blackboard.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LogIndexBecomeRelevant_MetaData[] = {
		{ "ModuleRelativePath", "Classes/BehaviorTree/TestBTDecorator_Blackboard.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LogIndexCeaseRelevant_MetaData[] = {
		{ "ModuleRelativePath", "Classes/BehaviorTree/TestBTDecorator_Blackboard.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LogIndexCalculate_MetaData[] = {
		{ "ModuleRelativePath", "Classes/BehaviorTree/TestBTDecorator_Blackboard.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_LogIndexBecomeRelevant;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LogIndexCeaseRelevant;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LogIndexCalculate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTestBTDecorator_Blackboard>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTestBTDecorator_Blackboard_Statics::NewProp_LogIndexBecomeRelevant = { "LogIndexBecomeRelevant", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTestBTDecorator_Blackboard, LogIndexBecomeRelevant), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LogIndexBecomeRelevant_MetaData), NewProp_LogIndexBecomeRelevant_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTestBTDecorator_Blackboard_Statics::NewProp_LogIndexCeaseRelevant = { "LogIndexCeaseRelevant", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTestBTDecorator_Blackboard, LogIndexCeaseRelevant), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LogIndexCeaseRelevant_MetaData), NewProp_LogIndexCeaseRelevant_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTestBTDecorator_Blackboard_Statics::NewProp_LogIndexCalculate = { "LogIndexCalculate", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTestBTDecorator_Blackboard, LogIndexCalculate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LogIndexCalculate_MetaData), NewProp_LogIndexCalculate_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTestBTDecorator_Blackboard_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestBTDecorator_Blackboard_Statics::NewProp_LogIndexBecomeRelevant,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestBTDecorator_Blackboard_Statics::NewProp_LogIndexCeaseRelevant,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestBTDecorator_Blackboard_Statics::NewProp_LogIndexCalculate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTestBTDecorator_Blackboard_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UTestBTDecorator_Blackboard_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTDecorator_Blackboard,
	(UObject* (*)())Z_Construct_UPackage__Script_AITestSuite,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTestBTDecorator_Blackboard_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTestBTDecorator_Blackboard_Statics::ClassParams = {
	&UTestBTDecorator_Blackboard::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UTestBTDecorator_Blackboard_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UTestBTDecorator_Blackboard_Statics::PropPointers),
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTestBTDecorator_Blackboard_Statics::Class_MetaDataParams), Z_Construct_UClass_UTestBTDecorator_Blackboard_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTestBTDecorator_Blackboard()
{
	if (!Z_Registration_Info_UClass_UTestBTDecorator_Blackboard.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTestBTDecorator_Blackboard.OuterSingleton, Z_Construct_UClass_UTestBTDecorator_Blackboard_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTestBTDecorator_Blackboard.OuterSingleton;
}
template<> AITESTSUITE_API UClass* StaticClass<UTestBTDecorator_Blackboard>()
{
	return UTestBTDecorator_Blackboard::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTestBTDecorator_Blackboard);
UTestBTDecorator_Blackboard::~UTestBTDecorator_Blackboard() {}
// End Class UTestBTDecorator_Blackboard

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Developer_AITestSuite_Classes_BehaviorTree_TestBTDecorator_Blackboard_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTestBTDecorator_Blackboard, UTestBTDecorator_Blackboard::StaticClass, TEXT("UTestBTDecorator_Blackboard"), &Z_Registration_Info_UClass_UTestBTDecorator_Blackboard, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTestBTDecorator_Blackboard), 208863060U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_AITestSuite_Classes_BehaviorTree_TestBTDecorator_Blackboard_h_456532157(TEXT("/Script/AITestSuite"),
	Z_CompiledInDeferFile_FID_Engine_Source_Developer_AITestSuite_Classes_BehaviorTree_TestBTDecorator_Blackboard_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_AITestSuite_Classes_BehaviorTree_TestBTDecorator_Blackboard_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
