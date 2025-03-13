// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Developer/AITestSuite/Classes/BehaviorTree/TestBTTask_SetValue.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTestBTTask_SetValue() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EBTNodeResult();
AITESTSUITE_API UClass* Z_Construct_UClass_UTestBTTask_SetValue();
AITESTSUITE_API UClass* Z_Construct_UClass_UTestBTTask_SetValue_NoRegister();
UPackage* Z_Construct_UPackage__Script_AITestSuite();
// End Cross Module References

// Begin Class UTestBTTask_SetValue
void UTestBTTask_SetValue::StaticRegisterNativesUTestBTTask_SetValue()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTestBTTask_SetValue);
UClass* Z_Construct_UClass_UTestBTTask_SetValue_NoRegister()
{
	return UTestBTTask_SetValue::StaticClass();
}
struct Z_Construct_UClass_UTestBTTask_SetValue_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HiddenNode", "" },
		{ "IncludePath", "BehaviorTree/TestBTTask_SetValue.h" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/TestBTTask_SetValue.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KeyName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/BehaviorTree/TestBTTask_SetValue.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "ModuleRelativePath", "Classes/BehaviorTree/TestBTTask_SetValue.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnAbortKeyName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/BehaviorTree/TestBTTask_SetValue.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnAbortValue_MetaData[] = {
		{ "ModuleRelativePath", "Classes/BehaviorTree/TestBTTask_SetValue.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TaskResult_MetaData[] = {
		{ "ModuleRelativePath", "Classes/BehaviorTree/TestBTTask_SetValue.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_KeyName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
	static const UECodeGen_Private::FNamePropertyParams NewProp_OnAbortKeyName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OnAbortValue;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TaskResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTestBTTask_SetValue>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UTestBTTask_SetValue_Statics::NewProp_KeyName = { "KeyName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTestBTTask_SetValue, KeyName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KeyName_MetaData), NewProp_KeyName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTestBTTask_SetValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTestBTTask_SetValue, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UTestBTTask_SetValue_Statics::NewProp_OnAbortKeyName = { "OnAbortKeyName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTestBTTask_SetValue, OnAbortKeyName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnAbortKeyName_MetaData), NewProp_OnAbortKeyName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTestBTTask_SetValue_Statics::NewProp_OnAbortValue = { "OnAbortValue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTestBTTask_SetValue, OnAbortValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnAbortValue_MetaData), NewProp_OnAbortValue_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTestBTTask_SetValue_Statics::NewProp_TaskResult = { "TaskResult", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTestBTTask_SetValue, TaskResult), Z_Construct_UEnum_AIModule_EBTNodeResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TaskResult_MetaData), NewProp_TaskResult_MetaData) }; // 3742194854
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTestBTTask_SetValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestBTTask_SetValue_Statics::NewProp_KeyName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestBTTask_SetValue_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestBTTask_SetValue_Statics::NewProp_OnAbortKeyName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestBTTask_SetValue_Statics::NewProp_OnAbortValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestBTTask_SetValue_Statics::NewProp_TaskResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTestBTTask_SetValue_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UTestBTTask_SetValue_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
	(UObject* (*)())Z_Construct_UPackage__Script_AITestSuite,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTestBTTask_SetValue_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTestBTTask_SetValue_Statics::ClassParams = {
	&UTestBTTask_SetValue::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UTestBTTask_SetValue_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UTestBTTask_SetValue_Statics::PropPointers),
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTestBTTask_SetValue_Statics::Class_MetaDataParams), Z_Construct_UClass_UTestBTTask_SetValue_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTestBTTask_SetValue()
{
	if (!Z_Registration_Info_UClass_UTestBTTask_SetValue.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTestBTTask_SetValue.OuterSingleton, Z_Construct_UClass_UTestBTTask_SetValue_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTestBTTask_SetValue.OuterSingleton;
}
template<> AITESTSUITE_API UClass* StaticClass<UTestBTTask_SetValue>()
{
	return UTestBTTask_SetValue::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTestBTTask_SetValue);
UTestBTTask_SetValue::~UTestBTTask_SetValue() {}
// End Class UTestBTTask_SetValue

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Developer_AITestSuite_Classes_BehaviorTree_TestBTTask_SetValue_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTestBTTask_SetValue, UTestBTTask_SetValue::StaticClass, TEXT("UTestBTTask_SetValue"), &Z_Registration_Info_UClass_UTestBTTask_SetValue, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTestBTTask_SetValue), 2168631230U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_AITestSuite_Classes_BehaviorTree_TestBTTask_SetValue_h_625618562(TEXT("/Script/AITestSuite"),
	Z_CompiledInDeferFile_FID_Engine_Source_Developer_AITestSuite_Classes_BehaviorTree_TestBTTask_SetValue_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_AITestSuite_Classes_BehaviorTree_TestBTTask_SetValue_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
