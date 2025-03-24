// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Developer/AITestSuite/Classes/BehaviorTree/TestBTDecorator_Blueprint.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTestBTDecorator_Blueprint() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator_BlueprintBase();
AITESTSUITE_API UClass* Z_Construct_UClass_UTestBTDecorator_Blueprint();
AITESTSUITE_API UClass* Z_Construct_UClass_UTestBTDecorator_Blueprint_NoRegister();
AITESTSUITE_API UEnum* Z_Construct_UEnum_AITestSuite_EBPConditionType();
UPackage* Z_Construct_UPackage__Script_AITestSuite();
// End Cross Module References

// Begin Enum EBPConditionType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBPConditionType;
static UEnum* EBPConditionType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EBPConditionType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EBPConditionType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AITestSuite_EBPConditionType, (UObject*)Z_Construct_UPackage__Script_AITestSuite(), TEXT("EBPConditionType"));
	}
	return Z_Registration_Info_UEnum_EBPConditionType.OuterSingleton;
}
template<> AITESTSUITE_API UEnum* StaticEnum<EBPConditionType>()
{
	return EBPConditionType_StaticEnum();
}
struct Z_Construct_UEnum_AITestSuite_EBPConditionType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "FalseCondition.Name", "EBPConditionType::FalseCondition" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/TestBTDecorator_Blueprint.h" },
		{ "NoCondition.Name", "EBPConditionType::NoCondition" },
		{ "TrueCondition.Name", "EBPConditionType::TrueCondition" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EBPConditionType::NoCondition", (int64)EBPConditionType::NoCondition },
		{ "EBPConditionType::TrueCondition", (int64)EBPConditionType::TrueCondition },
		{ "EBPConditionType::FalseCondition", (int64)EBPConditionType::FalseCondition },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AITestSuite_EBPConditionType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AITestSuite,
	nullptr,
	"EBPConditionType",
	"EBPConditionType",
	Z_Construct_UEnum_AITestSuite_EBPConditionType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AITestSuite_EBPConditionType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AITestSuite_EBPConditionType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AITestSuite_EBPConditionType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AITestSuite_EBPConditionType()
{
	if (!Z_Registration_Info_UEnum_EBPConditionType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBPConditionType.InnerSingleton, Z_Construct_UEnum_AITestSuite_EBPConditionType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EBPConditionType.InnerSingleton;
}
// End Enum EBPConditionType

// Begin Class UTestBTDecorator_Blueprint
void UTestBTDecorator_Blueprint::StaticRegisterNativesUTestBTDecorator_Blueprint()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTestBTDecorator_Blueprint);
UClass* Z_Construct_UClass_UTestBTDecorator_Blueprint_NoRegister()
{
	return UTestBTDecorator_Blueprint::StaticClass();
}
struct Z_Construct_UClass_UTestBTDecorator_Blueprint_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HiddenNode", "" },
		{ "IncludePath", "BehaviorTree/TestBTDecorator_Blueprint.h" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/TestBTDecorator_Blueprint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BPConditionType_MetaData[] = {
		{ "ModuleRelativePath", "Classes/BehaviorTree/TestBTDecorator_Blueprint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LogIndexBecomeRelevant_MetaData[] = {
		{ "ModuleRelativePath", "Classes/BehaviorTree/TestBTDecorator_Blueprint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LogIndexCeaseRelevant_MetaData[] = {
		{ "ModuleRelativePath", "Classes/BehaviorTree/TestBTDecorator_Blueprint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LogIndexCalculate_MetaData[] = {
		{ "ModuleRelativePath", "Classes/BehaviorTree/TestBTDecorator_Blueprint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObservingKeyName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/BehaviorTree/TestBTDecorator_Blueprint.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_BPConditionType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_BPConditionType;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LogIndexBecomeRelevant;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LogIndexCeaseRelevant;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LogIndexCalculate;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ObservingKeyName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTestBTDecorator_Blueprint>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTestBTDecorator_Blueprint_Statics::NewProp_BPConditionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UTestBTDecorator_Blueprint_Statics::NewProp_BPConditionType = { "BPConditionType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTestBTDecorator_Blueprint, BPConditionType), Z_Construct_UEnum_AITestSuite_EBPConditionType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BPConditionType_MetaData), NewProp_BPConditionType_MetaData) }; // 4274118502
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTestBTDecorator_Blueprint_Statics::NewProp_LogIndexBecomeRelevant = { "LogIndexBecomeRelevant", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTestBTDecorator_Blueprint, LogIndexBecomeRelevant), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LogIndexBecomeRelevant_MetaData), NewProp_LogIndexBecomeRelevant_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTestBTDecorator_Blueprint_Statics::NewProp_LogIndexCeaseRelevant = { "LogIndexCeaseRelevant", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTestBTDecorator_Blueprint, LogIndexCeaseRelevant), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LogIndexCeaseRelevant_MetaData), NewProp_LogIndexCeaseRelevant_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTestBTDecorator_Blueprint_Statics::NewProp_LogIndexCalculate = { "LogIndexCalculate", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTestBTDecorator_Blueprint, LogIndexCalculate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LogIndexCalculate_MetaData), NewProp_LogIndexCalculate_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UTestBTDecorator_Blueprint_Statics::NewProp_ObservingKeyName = { "ObservingKeyName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTestBTDecorator_Blueprint, ObservingKeyName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObservingKeyName_MetaData), NewProp_ObservingKeyName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTestBTDecorator_Blueprint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestBTDecorator_Blueprint_Statics::NewProp_BPConditionType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestBTDecorator_Blueprint_Statics::NewProp_BPConditionType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestBTDecorator_Blueprint_Statics::NewProp_LogIndexBecomeRelevant,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestBTDecorator_Blueprint_Statics::NewProp_LogIndexCeaseRelevant,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestBTDecorator_Blueprint_Statics::NewProp_LogIndexCalculate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestBTDecorator_Blueprint_Statics::NewProp_ObservingKeyName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTestBTDecorator_Blueprint_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UTestBTDecorator_Blueprint_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTDecorator_BlueprintBase,
	(UObject* (*)())Z_Construct_UPackage__Script_AITestSuite,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTestBTDecorator_Blueprint_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTestBTDecorator_Blueprint_Statics::ClassParams = {
	&UTestBTDecorator_Blueprint::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UTestBTDecorator_Blueprint_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UTestBTDecorator_Blueprint_Statics::PropPointers),
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTestBTDecorator_Blueprint_Statics::Class_MetaDataParams), Z_Construct_UClass_UTestBTDecorator_Blueprint_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTestBTDecorator_Blueprint()
{
	if (!Z_Registration_Info_UClass_UTestBTDecorator_Blueprint.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTestBTDecorator_Blueprint.OuterSingleton, Z_Construct_UClass_UTestBTDecorator_Blueprint_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTestBTDecorator_Blueprint.OuterSingleton;
}
template<> AITESTSUITE_API UClass* StaticClass<UTestBTDecorator_Blueprint>()
{
	return UTestBTDecorator_Blueprint::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTestBTDecorator_Blueprint);
UTestBTDecorator_Blueprint::~UTestBTDecorator_Blueprint() {}
// End Class UTestBTDecorator_Blueprint

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Developer_AITestSuite_Classes_BehaviorTree_TestBTDecorator_Blueprint_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EBPConditionType_StaticEnum, TEXT("EBPConditionType"), &Z_Registration_Info_UEnum_EBPConditionType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4274118502U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTestBTDecorator_Blueprint, UTestBTDecorator_Blueprint::StaticClass, TEXT("UTestBTDecorator_Blueprint"), &Z_Registration_Info_UClass_UTestBTDecorator_Blueprint, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTestBTDecorator_Blueprint), 4072517746U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_AITestSuite_Classes_BehaviorTree_TestBTDecorator_Blueprint_h_2830657792(TEXT("/Script/AITestSuite"),
	Z_CompiledInDeferFile_FID_Engine_Source_Developer_AITestSuite_Classes_BehaviorTree_TestBTDecorator_Blueprint_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_AITestSuite_Classes_BehaviorTree_TestBTDecorator_Blueprint_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Developer_AITestSuite_Classes_BehaviorTree_TestBTDecorator_Blueprint_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_AITestSuite_Classes_BehaviorTree_TestBTDecorator_Blueprint_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
