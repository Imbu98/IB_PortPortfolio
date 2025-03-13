// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Developer/AITestSuite/Classes/BehaviorTree/TestBTDecorator_CantExecute.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTestBTDecorator_CantExecute() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator();
AITESTSUITE_API UClass* Z_Construct_UClass_UTestBTDecorator_CantExecute();
AITESTSUITE_API UClass* Z_Construct_UClass_UTestBTDecorator_CantExecute_NoRegister();
UPackage* Z_Construct_UPackage__Script_AITestSuite();
// End Cross Module References

// Begin Class UTestBTDecorator_CantExecute
void UTestBTDecorator_CantExecute::StaticRegisterNativesUTestBTDecorator_CantExecute()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTestBTDecorator_CantExecute);
UClass* Z_Construct_UClass_UTestBTDecorator_CantExecute_NoRegister()
{
	return UTestBTDecorator_CantExecute::StaticClass();
}
struct Z_Construct_UClass_UTestBTDecorator_CantExecute_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HiddenNode", "" },
		{ "IncludePath", "BehaviorTree/TestBTDecorator_CantExecute.h" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/TestBTDecorator_CantExecute.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTestBTDecorator_CantExecute>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UTestBTDecorator_CantExecute_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTDecorator,
	(UObject* (*)())Z_Construct_UPackage__Script_AITestSuite,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTestBTDecorator_CantExecute_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTestBTDecorator_CantExecute_Statics::ClassParams = {
	&UTestBTDecorator_CantExecute::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTestBTDecorator_CantExecute_Statics::Class_MetaDataParams), Z_Construct_UClass_UTestBTDecorator_CantExecute_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTestBTDecorator_CantExecute()
{
	if (!Z_Registration_Info_UClass_UTestBTDecorator_CantExecute.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTestBTDecorator_CantExecute.OuterSingleton, Z_Construct_UClass_UTestBTDecorator_CantExecute_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTestBTDecorator_CantExecute.OuterSingleton;
}
template<> AITESTSUITE_API UClass* StaticClass<UTestBTDecorator_CantExecute>()
{
	return UTestBTDecorator_CantExecute::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTestBTDecorator_CantExecute);
UTestBTDecorator_CantExecute::~UTestBTDecorator_CantExecute() {}
// End Class UTestBTDecorator_CantExecute

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Developer_AITestSuite_Classes_BehaviorTree_TestBTDecorator_CantExecute_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTestBTDecorator_CantExecute, UTestBTDecorator_CantExecute::StaticClass, TEXT("UTestBTDecorator_CantExecute"), &Z_Registration_Info_UClass_UTestBTDecorator_CantExecute, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTestBTDecorator_CantExecute), 936431345U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_AITestSuite_Classes_BehaviorTree_TestBTDecorator_CantExecute_h_3277160294(TEXT("/Script/AITestSuite"),
	Z_CompiledInDeferFile_FID_Engine_Source_Developer_AITestSuite_Classes_BehaviorTree_TestBTDecorator_CantExecute_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_AITestSuite_Classes_BehaviorTree_TestBTDecorator_CantExecute_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
