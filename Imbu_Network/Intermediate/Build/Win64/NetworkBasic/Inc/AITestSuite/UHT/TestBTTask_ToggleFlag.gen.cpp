// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Developer/AITestSuite/Classes/BehaviorTree/TestBTTask_ToggleFlag.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTestBTTask_ToggleFlag() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EBTNodeResult();
AITESTSUITE_API UClass* Z_Construct_UClass_UTestBTTask_ToggleFlag();
AITESTSUITE_API UClass* Z_Construct_UClass_UTestBTTask_ToggleFlag_NoRegister();
UPackage* Z_Construct_UPackage__Script_AITestSuite();
// End Cross Module References

// Begin Class UTestBTTask_ToggleFlag
void UTestBTTask_ToggleFlag::StaticRegisterNativesUTestBTTask_ToggleFlag()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTestBTTask_ToggleFlag);
UClass* Z_Construct_UClass_UTestBTTask_ToggleFlag_NoRegister()
{
	return UTestBTTask_ToggleFlag::StaticClass();
}
struct Z_Construct_UClass_UTestBTTask_ToggleFlag_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HiddenNode", "" },
		{ "IncludePath", "BehaviorTree/TestBTTask_ToggleFlag.h" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/TestBTTask_ToggleFlag.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LogIndex_MetaData[] = {
		{ "ModuleRelativePath", "Classes/BehaviorTree/TestBTTask_ToggleFlag.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KeyName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/BehaviorTree/TestBTTask_ToggleFlag.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumToggles_MetaData[] = {
		{ "ModuleRelativePath", "Classes/BehaviorTree/TestBTTask_ToggleFlag.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TaskResult_MetaData[] = {
		{ "ModuleRelativePath", "Classes/BehaviorTree/TestBTTask_ToggleFlag.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_LogIndex;
	static const UECodeGen_Private::FNamePropertyParams NewProp_KeyName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumToggles;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TaskResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTestBTTask_ToggleFlag>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTestBTTask_ToggleFlag_Statics::NewProp_LogIndex = { "LogIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTestBTTask_ToggleFlag, LogIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LogIndex_MetaData), NewProp_LogIndex_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UTestBTTask_ToggleFlag_Statics::NewProp_KeyName = { "KeyName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTestBTTask_ToggleFlag, KeyName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KeyName_MetaData), NewProp_KeyName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTestBTTask_ToggleFlag_Statics::NewProp_NumToggles = { "NumToggles", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTestBTTask_ToggleFlag, NumToggles), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumToggles_MetaData), NewProp_NumToggles_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTestBTTask_ToggleFlag_Statics::NewProp_TaskResult = { "TaskResult", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTestBTTask_ToggleFlag, TaskResult), Z_Construct_UEnum_AIModule_EBTNodeResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TaskResult_MetaData), NewProp_TaskResult_MetaData) }; // 3742194854
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTestBTTask_ToggleFlag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestBTTask_ToggleFlag_Statics::NewProp_LogIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestBTTask_ToggleFlag_Statics::NewProp_KeyName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestBTTask_ToggleFlag_Statics::NewProp_NumToggles,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestBTTask_ToggleFlag_Statics::NewProp_TaskResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTestBTTask_ToggleFlag_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UTestBTTask_ToggleFlag_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
	(UObject* (*)())Z_Construct_UPackage__Script_AITestSuite,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTestBTTask_ToggleFlag_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTestBTTask_ToggleFlag_Statics::ClassParams = {
	&UTestBTTask_ToggleFlag::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UTestBTTask_ToggleFlag_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UTestBTTask_ToggleFlag_Statics::PropPointers),
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTestBTTask_ToggleFlag_Statics::Class_MetaDataParams), Z_Construct_UClass_UTestBTTask_ToggleFlag_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTestBTTask_ToggleFlag()
{
	if (!Z_Registration_Info_UClass_UTestBTTask_ToggleFlag.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTestBTTask_ToggleFlag.OuterSingleton, Z_Construct_UClass_UTestBTTask_ToggleFlag_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTestBTTask_ToggleFlag.OuterSingleton;
}
template<> AITESTSUITE_API UClass* StaticClass<UTestBTTask_ToggleFlag>()
{
	return UTestBTTask_ToggleFlag::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTestBTTask_ToggleFlag);
UTestBTTask_ToggleFlag::~UTestBTTask_ToggleFlag() {}
// End Class UTestBTTask_ToggleFlag

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Developer_AITestSuite_Classes_BehaviorTree_TestBTTask_ToggleFlag_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTestBTTask_ToggleFlag, UTestBTTask_ToggleFlag::StaticClass, TEXT("UTestBTTask_ToggleFlag"), &Z_Registration_Info_UClass_UTestBTTask_ToggleFlag, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTestBTTask_ToggleFlag), 3589030920U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_AITestSuite_Classes_BehaviorTree_TestBTTask_ToggleFlag_h_1998334043(TEXT("/Script/AITestSuite"),
	Z_CompiledInDeferFile_FID_Engine_Source_Developer_AITestSuite_Classes_BehaviorTree_TestBTTask_ToggleFlag_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_AITestSuite_Classes_BehaviorTree_TestBTTask_ToggleFlag_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
