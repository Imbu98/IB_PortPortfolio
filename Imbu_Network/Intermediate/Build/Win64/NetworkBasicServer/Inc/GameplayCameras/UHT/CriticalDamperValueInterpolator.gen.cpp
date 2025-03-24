// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayCameras/Public/ValueInterpolators/CriticalDamperValueInterpolator.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCriticalDamperValueInterpolator() {}

// Begin Cross Module References
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UCameraValueInterpolator();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UCriticalDamperValueInterpolator();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UCriticalDamperValueInterpolator_NoRegister();
UPackage* Z_Construct_UPackage__Script_GameplayCameras();
// End Cross Module References

// Begin Class UCriticalDamperValueInterpolator
void UCriticalDamperValueInterpolator::StaticRegisterNativesUCriticalDamperValueInterpolator()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCriticalDamperValueInterpolator);
UClass* Z_Construct_UClass_UCriticalDamperValueInterpolator_NoRegister()
{
	return UCriticalDamperValueInterpolator::StaticClass();
}
struct Z_Construct_UClass_UCriticalDamperValueInterpolator_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A value interpolator that uses a spring-mass system to converge towards the target value.\n */" },
		{ "DisplayName", "Critical Damper" },
		{ "IncludePath", "ValueInterpolators/CriticalDamperValueInterpolator.h" },
		{ "ModuleRelativePath", "Public/ValueInterpolators/CriticalDamperValueInterpolator.h" },
		{ "ToolTip", "A value interpolator that uses a spring-mass system to converge towards the target value." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DampingFactor_MetaData[] = {
		{ "Category", "Damping" },
		{ "Comment", "/** The damping factor of the spring-mass system. */" },
		{ "ModuleRelativePath", "Public/ValueInterpolators/CriticalDamperValueInterpolator.h" },
		{ "ToolTip", "The damping factor of the spring-mass system." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DampingFactor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCriticalDamperValueInterpolator>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCriticalDamperValueInterpolator_Statics::NewProp_DampingFactor = { "DampingFactor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCriticalDamperValueInterpolator, DampingFactor), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DampingFactor_MetaData), NewProp_DampingFactor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCriticalDamperValueInterpolator_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriticalDamperValueInterpolator_Statics::NewProp_DampingFactor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCriticalDamperValueInterpolator_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCriticalDamperValueInterpolator_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCameraValueInterpolator,
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayCameras,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCriticalDamperValueInterpolator_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCriticalDamperValueInterpolator_Statics::ClassParams = {
	&UCriticalDamperValueInterpolator::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCriticalDamperValueInterpolator_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCriticalDamperValueInterpolator_Statics::PropPointers),
	0,
	0x002030A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCriticalDamperValueInterpolator_Statics::Class_MetaDataParams), Z_Construct_UClass_UCriticalDamperValueInterpolator_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCriticalDamperValueInterpolator()
{
	if (!Z_Registration_Info_UClass_UCriticalDamperValueInterpolator.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCriticalDamperValueInterpolator.OuterSingleton, Z_Construct_UClass_UCriticalDamperValueInterpolator_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCriticalDamperValueInterpolator.OuterSingleton;
}
template<> GAMEPLAYCAMERAS_API UClass* StaticClass<UCriticalDamperValueInterpolator>()
{
	return UCriticalDamperValueInterpolator::StaticClass();
}
UCriticalDamperValueInterpolator::UCriticalDamperValueInterpolator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCriticalDamperValueInterpolator);
UCriticalDamperValueInterpolator::~UCriticalDamperValueInterpolator() {}
// End Class UCriticalDamperValueInterpolator

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_ValueInterpolators_CriticalDamperValueInterpolator_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCriticalDamperValueInterpolator, UCriticalDamperValueInterpolator::StaticClass, TEXT("UCriticalDamperValueInterpolator"), &Z_Registration_Info_UClass_UCriticalDamperValueInterpolator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCriticalDamperValueInterpolator), 2572783748U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_ValueInterpolators_CriticalDamperValueInterpolator_h_1174412887(TEXT("/Script/GameplayCameras"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_ValueInterpolators_CriticalDamperValueInterpolator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_ValueInterpolators_CriticalDamperValueInterpolator_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
