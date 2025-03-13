// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Developer/AITestSuite/Classes/BehaviorTree/TestBTTask_SetFlag.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTestBTTask_SetFlag() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EBTNodeResult();
AITESTSUITE_API UClass* Z_Construct_UClass_UTestBTTask_SetFlag();
AITESTSUITE_API UClass* Z_Construct_UClass_UTestBTTask_SetFlag_NoRegister();
UPackage* Z_Construct_UPackage__Script_AITestSuite();
// End Cross Module References

// Begin Class UTestBTTask_SetFlag
void UTestBTTask_SetFlag::StaticRegisterNativesUTestBTTask_SetFlag()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTestBTTask_SetFlag);
UClass* Z_Construct_UClass_UTestBTTask_SetFlag_NoRegister()
{
	return UTestBTTask_SetFlag::StaticClass();
}
struct Z_Construct_UClass_UTestBTTask_SetFlag_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HiddenNode", "" },
		{ "IncludePath", "BehaviorTree/TestBTTask_SetFlag.h" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/TestBTTask_SetFlag.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KeyName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/BehaviorTree/TestBTTask_SetFlag.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bValue_MetaData[] = {
		{ "ModuleRelativePath", "Classes/BehaviorTree/TestBTTask_SetFlag.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnAbortKeyName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/BehaviorTree/TestBTTask_SetFlag.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOnAbortValue_MetaData[] = {
		{ "ModuleRelativePath", "Classes/BehaviorTree/TestBTTask_SetFlag.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TaskResult_MetaData[] = {
		{ "ModuleRelativePath", "Classes/BehaviorTree/TestBTTask_SetFlag.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_KeyName;
	static void NewProp_bValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bValue;
	static const UECodeGen_Private::FNamePropertyParams NewProp_OnAbortKeyName;
	static void NewProp_bOnAbortValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOnAbortValue;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TaskResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTestBTTask_SetFlag>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UTestBTTask_SetFlag_Statics::NewProp_KeyName = { "KeyName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTestBTTask_SetFlag, KeyName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KeyName_MetaData), NewProp_KeyName_MetaData) };
void Z_Construct_UClass_UTestBTTask_SetFlag_Statics::NewProp_bValue_SetBit(void* Obj)
{
	((UTestBTTask_SetFlag*)Obj)->bValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTestBTTask_SetFlag_Statics::NewProp_bValue = { "bValue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UTestBTTask_SetFlag), &Z_Construct_UClass_UTestBTTask_SetFlag_Statics::NewProp_bValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bValue_MetaData), NewProp_bValue_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UTestBTTask_SetFlag_Statics::NewProp_OnAbortKeyName = { "OnAbortKeyName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTestBTTask_SetFlag, OnAbortKeyName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnAbortKeyName_MetaData), NewProp_OnAbortKeyName_MetaData) };
void Z_Construct_UClass_UTestBTTask_SetFlag_Statics::NewProp_bOnAbortValue_SetBit(void* Obj)
{
	((UTestBTTask_SetFlag*)Obj)->bOnAbortValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTestBTTask_SetFlag_Statics::NewProp_bOnAbortValue = { "bOnAbortValue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UTestBTTask_SetFlag), &Z_Construct_UClass_UTestBTTask_SetFlag_Statics::NewProp_bOnAbortValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOnAbortValue_MetaData), NewProp_bOnAbortValue_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTestBTTask_SetFlag_Statics::NewProp_TaskResult = { "TaskResult", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTestBTTask_SetFlag, TaskResult), Z_Construct_UEnum_AIModule_EBTNodeResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TaskResult_MetaData), NewProp_TaskResult_MetaData) }; // 3742194854
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTestBTTask_SetFlag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestBTTask_SetFlag_Statics::NewProp_KeyName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestBTTask_SetFlag_Statics::NewProp_bValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestBTTask_SetFlag_Statics::NewProp_OnAbortKeyName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestBTTask_SetFlag_Statics::NewProp_bOnAbortValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestBTTask_SetFlag_Statics::NewProp_TaskResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTestBTTask_SetFlag_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UTestBTTask_SetFlag_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
	(UObject* (*)())Z_Construct_UPackage__Script_AITestSuite,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTestBTTask_SetFlag_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTestBTTask_SetFlag_Statics::ClassParams = {
	&UTestBTTask_SetFlag::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UTestBTTask_SetFlag_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UTestBTTask_SetFlag_Statics::PropPointers),
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTestBTTask_SetFlag_Statics::Class_MetaDataParams), Z_Construct_UClass_UTestBTTask_SetFlag_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTestBTTask_SetFlag()
{
	if (!Z_Registration_Info_UClass_UTestBTTask_SetFlag.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTestBTTask_SetFlag.OuterSingleton, Z_Construct_UClass_UTestBTTask_SetFlag_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTestBTTask_SetFlag.OuterSingleton;
}
template<> AITESTSUITE_API UClass* StaticClass<UTestBTTask_SetFlag>()
{
	return UTestBTTask_SetFlag::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTestBTTask_SetFlag);
UTestBTTask_SetFlag::~UTestBTTask_SetFlag() {}
// End Class UTestBTTask_SetFlag

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Developer_AITestSuite_Classes_BehaviorTree_TestBTTask_SetFlag_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTestBTTask_SetFlag, UTestBTTask_SetFlag::StaticClass, TEXT("UTestBTTask_SetFlag"), &Z_Registration_Info_UClass_UTestBTTask_SetFlag, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTestBTTask_SetFlag), 3145707023U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_AITestSuite_Classes_BehaviorTree_TestBTTask_SetFlag_h_341558546(TEXT("/Script/AITestSuite"),
	Z_CompiledInDeferFile_FID_Engine_Source_Developer_AITestSuite_Classes_BehaviorTree_TestBTTask_SetFlag_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_AITestSuite_Classes_BehaviorTree_TestBTTask_SetFlag_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
