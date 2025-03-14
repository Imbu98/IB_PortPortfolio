// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Distributions/DistributionFloatConstant.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDistributionFloatConstant() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UDistributionFloat();
ENGINE_API UClass* Z_Construct_UClass_UDistributionFloatConstant();
ENGINE_API UClass* Z_Construct_UClass_UDistributionFloatConstant_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UDistributionFloatConstant
void UDistributionFloatConstant::StaticRegisterNativesUDistributionFloatConstant()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDistributionFloatConstant);
UClass* Z_Construct_UClass_UDistributionFloatConstant_NoRegister()
{
	return UDistributionFloatConstant::StaticClass();
}
struct Z_Construct_UClass_UDistributionFloatConstant_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Distributions/DistributionFloatConstant.h" },
		{ "ModuleRelativePath", "Classes/Distributions/DistributionFloatConstant.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Constant_MetaData[] = {
		{ "Category", "DistributionFloatConstant" },
		{ "Comment", "/** This float will be returned for all values of time. */" },
		{ "ModuleRelativePath", "Classes/Distributions/DistributionFloatConstant.h" },
		{ "ToolTip", "This float will be returned for all values of time." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Constant;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDistributionFloatConstant>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDistributionFloatConstant_Statics::NewProp_Constant = { "Constant", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDistributionFloatConstant, Constant), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Constant_MetaData), NewProp_Constant_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDistributionFloatConstant_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDistributionFloatConstant_Statics::NewProp_Constant,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDistributionFloatConstant_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDistributionFloatConstant_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDistributionFloat,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDistributionFloatConstant_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDistributionFloatConstant_Statics::ClassParams = {
	&UDistributionFloatConstant::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDistributionFloatConstant_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDistributionFloatConstant_Statics::PropPointers),
	0,
	0x002830A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDistributionFloatConstant_Statics::Class_MetaDataParams), Z_Construct_UClass_UDistributionFloatConstant_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDistributionFloatConstant()
{
	if (!Z_Registration_Info_UClass_UDistributionFloatConstant.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDistributionFloatConstant.OuterSingleton, Z_Construct_UClass_UDistributionFloatConstant_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDistributionFloatConstant.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UDistributionFloatConstant>()
{
	return UDistributionFloatConstant::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDistributionFloatConstant);
UDistributionFloatConstant::~UDistributionFloatConstant() {}
// End Class UDistributionFloatConstant

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Distributions_DistributionFloatConstant_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDistributionFloatConstant, UDistributionFloatConstant::StaticClass, TEXT("UDistributionFloatConstant"), &Z_Registration_Info_UClass_UDistributionFloatConstant, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDistributionFloatConstant), 1257958957U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Distributions_DistributionFloatConstant_h_2192486527(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Distributions_DistributionFloatConstant_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Distributions_DistributionFloatConstant_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
