// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Developer/AITestSuite/Classes/BehaviorTree/TestBTDecorator_DelayedAbort.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTestBTDecorator_DelayedAbort() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator();
AITESTSUITE_API UClass* Z_Construct_UClass_UTestBTDecorator_DelayedAbort();
AITESTSUITE_API UClass* Z_Construct_UClass_UTestBTDecorator_DelayedAbort_NoRegister();
UPackage* Z_Construct_UPackage__Script_AITestSuite();
// End Cross Module References

// Begin Class UTestBTDecorator_DelayedAbort
void UTestBTDecorator_DelayedAbort::StaticRegisterNativesUTestBTDecorator_DelayedAbort()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTestBTDecorator_DelayedAbort);
UClass* Z_Construct_UClass_UTestBTDecorator_DelayedAbort_NoRegister()
{
	return UTestBTDecorator_DelayedAbort::StaticClass();
}
struct Z_Construct_UClass_UTestBTDecorator_DelayedAbort_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HiddenNode", "" },
		{ "IncludePath", "BehaviorTree/TestBTDecorator_DelayedAbort.h" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/TestBTDecorator_DelayedAbort.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DelayTicks_MetaData[] = {
		{ "ModuleRelativePath", "Classes/BehaviorTree/TestBTDecorator_DelayedAbort.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOnlyOnce_MetaData[] = {
		{ "ModuleRelativePath", "Classes/BehaviorTree/TestBTDecorator_DelayedAbort.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_DelayTicks;
	static void NewProp_bOnlyOnce_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOnlyOnce;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTestBTDecorator_DelayedAbort>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTestBTDecorator_DelayedAbort_Statics::NewProp_DelayTicks = { "DelayTicks", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTestBTDecorator_DelayedAbort, DelayTicks), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DelayTicks_MetaData), NewProp_DelayTicks_MetaData) };
void Z_Construct_UClass_UTestBTDecorator_DelayedAbort_Statics::NewProp_bOnlyOnce_SetBit(void* Obj)
{
	((UTestBTDecorator_DelayedAbort*)Obj)->bOnlyOnce = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTestBTDecorator_DelayedAbort_Statics::NewProp_bOnlyOnce = { "bOnlyOnce", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UTestBTDecorator_DelayedAbort), &Z_Construct_UClass_UTestBTDecorator_DelayedAbort_Statics::NewProp_bOnlyOnce_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOnlyOnce_MetaData), NewProp_bOnlyOnce_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTestBTDecorator_DelayedAbort_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestBTDecorator_DelayedAbort_Statics::NewProp_DelayTicks,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestBTDecorator_DelayedAbort_Statics::NewProp_bOnlyOnce,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTestBTDecorator_DelayedAbort_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UTestBTDecorator_DelayedAbort_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTDecorator,
	(UObject* (*)())Z_Construct_UPackage__Script_AITestSuite,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTestBTDecorator_DelayedAbort_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTestBTDecorator_DelayedAbort_Statics::ClassParams = {
	&UTestBTDecorator_DelayedAbort::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UTestBTDecorator_DelayedAbort_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UTestBTDecorator_DelayedAbort_Statics::PropPointers),
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTestBTDecorator_DelayedAbort_Statics::Class_MetaDataParams), Z_Construct_UClass_UTestBTDecorator_DelayedAbort_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTestBTDecorator_DelayedAbort()
{
	if (!Z_Registration_Info_UClass_UTestBTDecorator_DelayedAbort.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTestBTDecorator_DelayedAbort.OuterSingleton, Z_Construct_UClass_UTestBTDecorator_DelayedAbort_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTestBTDecorator_DelayedAbort.OuterSingleton;
}
template<> AITESTSUITE_API UClass* StaticClass<UTestBTDecorator_DelayedAbort>()
{
	return UTestBTDecorator_DelayedAbort::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTestBTDecorator_DelayedAbort);
UTestBTDecorator_DelayedAbort::~UTestBTDecorator_DelayedAbort() {}
// End Class UTestBTDecorator_DelayedAbort

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Developer_AITestSuite_Classes_BehaviorTree_TestBTDecorator_DelayedAbort_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTestBTDecorator_DelayedAbort, UTestBTDecorator_DelayedAbort::StaticClass, TEXT("UTestBTDecorator_DelayedAbort"), &Z_Registration_Info_UClass_UTestBTDecorator_DelayedAbort, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTestBTDecorator_DelayedAbort), 2138860264U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_AITestSuite_Classes_BehaviorTree_TestBTDecorator_DelayedAbort_h_2858157015(TEXT("/Script/AITestSuite"),
	Z_CompiledInDeferFile_FID_Engine_Source_Developer_AITestSuite_Classes_BehaviorTree_TestBTDecorator_DelayedAbort_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_AITestSuite_Classes_BehaviorTree_TestBTDecorator_DelayedAbort_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
