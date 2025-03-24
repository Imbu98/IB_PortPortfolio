// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Developer/AITestSuite/Classes/MockAI.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMockAI() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UAIPerceptionComponent_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UBlackboardComponent_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UBrainComponent_NoRegister();
AITESTSUITE_API UClass* Z_Construct_UClass_UMockAI();
AITESTSUITE_API UClass* Z_Construct_UClass_UMockAI_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_AITestSuite();
// End Cross Module References

// Begin Class UMockAI
void UMockAI::StaticRegisterNativesUMockAI()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMockAI);
UClass* Z_Construct_UClass_UMockAI_NoRegister()
{
	return UMockAI::StaticClass();
}
struct Z_Construct_UClass_UMockAI_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MockAI.h" },
		{ "ModuleRelativePath", "Classes/MockAI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Actor_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MockAI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BBComp_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/MockAI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BrainComp_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/MockAI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PerceptionComp_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/MockAI.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BBComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BrainComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PerceptionComp;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMockAI>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMockAI_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMockAI, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Actor_MetaData), NewProp_Actor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMockAI_Statics::NewProp_BBComp = { "BBComp", nullptr, (EPropertyFlags)0x0114000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMockAI, BBComp), Z_Construct_UClass_UBlackboardComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BBComp_MetaData), NewProp_BBComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMockAI_Statics::NewProp_BrainComp = { "BrainComp", nullptr, (EPropertyFlags)0x0114000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMockAI, BrainComp), Z_Construct_UClass_UBrainComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BrainComp_MetaData), NewProp_BrainComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMockAI_Statics::NewProp_PerceptionComp = { "PerceptionComp", nullptr, (EPropertyFlags)0x0114000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMockAI, PerceptionComp), Z_Construct_UClass_UAIPerceptionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PerceptionComp_MetaData), NewProp_PerceptionComp_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMockAI_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMockAI_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMockAI_Statics::NewProp_BBComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMockAI_Statics::NewProp_BrainComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMockAI_Statics::NewProp_PerceptionComp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMockAI_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMockAI_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_AITestSuite,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMockAI_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMockAI_Statics::ClassParams = {
	&UMockAI::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMockAI_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMockAI_Statics::PropPointers),
	0,
	0x008000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMockAI_Statics::Class_MetaDataParams), Z_Construct_UClass_UMockAI_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMockAI()
{
	if (!Z_Registration_Info_UClass_UMockAI.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMockAI.OuterSingleton, Z_Construct_UClass_UMockAI_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMockAI.OuterSingleton;
}
template<> AITESTSUITE_API UClass* StaticClass<UMockAI>()
{
	return UMockAI::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMockAI);
// End Class UMockAI

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Developer_AITestSuite_Classes_MockAI_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMockAI, UMockAI::StaticClass, TEXT("UMockAI"), &Z_Registration_Info_UClass_UMockAI, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMockAI), 3064970419U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_AITestSuite_Classes_MockAI_h_217439470(TEXT("/Script/AITestSuite"),
	Z_CompiledInDeferFile_FID_Engine_Source_Developer_AITestSuite_Classes_MockAI_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_AITestSuite_Classes_MockAI_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
