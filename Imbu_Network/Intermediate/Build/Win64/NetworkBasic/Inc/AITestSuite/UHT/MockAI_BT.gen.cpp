// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Developer/AITestSuite/Classes/MockAI_BT.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMockAI_BT() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTreeComponent_NoRegister();
AITESTSUITE_API UClass* Z_Construct_UClass_UMockAI();
AITESTSUITE_API UClass* Z_Construct_UClass_UMockAI_BT();
AITESTSUITE_API UClass* Z_Construct_UClass_UMockAI_BT_NoRegister();
UPackage* Z_Construct_UPackage__Script_AITestSuite();
// End Cross Module References

// Begin Class UMockAI_BT
void UMockAI_BT::StaticRegisterNativesUMockAI_BT()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMockAI_BT);
UClass* Z_Construct_UClass_UMockAI_BT_NoRegister()
{
	return UMockAI_BT::StaticClass();
}
struct Z_Construct_UClass_UMockAI_BT_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MockAI_BT.h" },
		{ "ModuleRelativePath", "Classes/MockAI_BT.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BTComp_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/MockAI_BT.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BTComp;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMockAI_BT>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMockAI_BT_Statics::NewProp_BTComp = { "BTComp", nullptr, (EPropertyFlags)0x0114000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMockAI_BT, BTComp), Z_Construct_UClass_UBehaviorTreeComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BTComp_MetaData), NewProp_BTComp_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMockAI_BT_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMockAI_BT_Statics::NewProp_BTComp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMockAI_BT_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMockAI_BT_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMockAI,
	(UObject* (*)())Z_Construct_UPackage__Script_AITestSuite,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMockAI_BT_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMockAI_BT_Statics::ClassParams = {
	&UMockAI_BT::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMockAI_BT_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMockAI_BT_Statics::PropPointers),
	0,
	0x008000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMockAI_BT_Statics::Class_MetaDataParams), Z_Construct_UClass_UMockAI_BT_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMockAI_BT()
{
	if (!Z_Registration_Info_UClass_UMockAI_BT.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMockAI_BT.OuterSingleton, Z_Construct_UClass_UMockAI_BT_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMockAI_BT.OuterSingleton;
}
template<> AITESTSUITE_API UClass* StaticClass<UMockAI_BT>()
{
	return UMockAI_BT::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMockAI_BT);
UMockAI_BT::~UMockAI_BT() {}
// End Class UMockAI_BT

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Developer_AITestSuite_Classes_MockAI_BT_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMockAI_BT, UMockAI_BT::StaticClass, TEXT("UMockAI_BT"), &Z_Registration_Info_UClass_UMockAI_BT, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMockAI_BT), 3823541270U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_AITestSuite_Classes_MockAI_BT_h_20639258(TEXT("/Script/AITestSuite"),
	Z_CompiledInDeferFile_FID_Engine_Source_Developer_AITestSuite_Classes_MockAI_BT_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_AITestSuite_Classes_MockAI_BT_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
