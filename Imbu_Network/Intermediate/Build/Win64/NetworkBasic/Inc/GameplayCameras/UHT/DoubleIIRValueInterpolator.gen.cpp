// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayCameras/Public/ValueInterpolators/DoubleIIRValueInterpolator.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDoubleIIRValueInterpolator() {}

// Begin Cross Module References
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UCameraValueInterpolator();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UDoubleIIRValueInterpolator();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UDoubleIIRValueInterpolator_NoRegister();
UPackage* Z_Construct_UPackage__Script_GameplayCameras();
// End Cross Module References

// Begin Class UDoubleIIRValueInterpolator
void UDoubleIIRValueInterpolator::StaticRegisterNativesUDoubleIIRValueInterpolator()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDoubleIIRValueInterpolator);
UClass* Z_Construct_UClass_UDoubleIIRValueInterpolator_NoRegister()
{
	return UDoubleIIRValueInterpolator::StaticClass();
}
struct Z_Construct_UClass_UDoubleIIRValueInterpolator_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Double infinite impulse response filter interpolator.\n */" },
		{ "DisplayName", "Double-IIR" },
		{ "IncludePath", "ValueInterpolators/DoubleIIRValueInterpolator.h" },
		{ "ModuleRelativePath", "Public/ValueInterpolators/DoubleIIRValueInterpolator.h" },
		{ "ToolTip", "Double infinite impulse response filter interpolator." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrimarySpeed_MetaData[] = {
		{ "Category", "Speed" },
		{ "Comment", "/** The primary speed of interpolation. */" },
		{ "ModuleRelativePath", "Public/ValueInterpolators/DoubleIIRValueInterpolator.h" },
		{ "ToolTip", "The primary speed of interpolation." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IntermediateSpeed_MetaData[] = {
		{ "Category", "Speed" },
		{ "Comment", "/** The intermediate speed of interpolation. */" },
		{ "ModuleRelativePath", "Public/ValueInterpolators/DoubleIIRValueInterpolator.h" },
		{ "ToolTip", "The intermediate speed of interpolation." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseFixedStep_MetaData[] = {
		{ "Category", "Interpolation" },
		{ "Comment", "/** Whether to use fixed-step evaluation. */" },
		{ "ModuleRelativePath", "Public/ValueInterpolators/DoubleIIRValueInterpolator.h" },
		{ "ToolTip", "Whether to use fixed-step evaluation." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PrimarySpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_IntermediateSpeed;
	static void NewProp_bUseFixedStep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseFixedStep;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDoubleIIRValueInterpolator>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDoubleIIRValueInterpolator_Statics::NewProp_PrimarySpeed = { "PrimarySpeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDoubleIIRValueInterpolator, PrimarySpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrimarySpeed_MetaData), NewProp_PrimarySpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDoubleIIRValueInterpolator_Statics::NewProp_IntermediateSpeed = { "IntermediateSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDoubleIIRValueInterpolator, IntermediateSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IntermediateSpeed_MetaData), NewProp_IntermediateSpeed_MetaData) };
void Z_Construct_UClass_UDoubleIIRValueInterpolator_Statics::NewProp_bUseFixedStep_SetBit(void* Obj)
{
	((UDoubleIIRValueInterpolator*)Obj)->bUseFixedStep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDoubleIIRValueInterpolator_Statics::NewProp_bUseFixedStep = { "bUseFixedStep", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDoubleIIRValueInterpolator), &Z_Construct_UClass_UDoubleIIRValueInterpolator_Statics::NewProp_bUseFixedStep_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseFixedStep_MetaData), NewProp_bUseFixedStep_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDoubleIIRValueInterpolator_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDoubleIIRValueInterpolator_Statics::NewProp_PrimarySpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDoubleIIRValueInterpolator_Statics::NewProp_IntermediateSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDoubleIIRValueInterpolator_Statics::NewProp_bUseFixedStep,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDoubleIIRValueInterpolator_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDoubleIIRValueInterpolator_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCameraValueInterpolator,
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayCameras,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDoubleIIRValueInterpolator_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDoubleIIRValueInterpolator_Statics::ClassParams = {
	&UDoubleIIRValueInterpolator::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDoubleIIRValueInterpolator_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDoubleIIRValueInterpolator_Statics::PropPointers),
	0,
	0x002030A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDoubleIIRValueInterpolator_Statics::Class_MetaDataParams), Z_Construct_UClass_UDoubleIIRValueInterpolator_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDoubleIIRValueInterpolator()
{
	if (!Z_Registration_Info_UClass_UDoubleIIRValueInterpolator.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDoubleIIRValueInterpolator.OuterSingleton, Z_Construct_UClass_UDoubleIIRValueInterpolator_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDoubleIIRValueInterpolator.OuterSingleton;
}
template<> GAMEPLAYCAMERAS_API UClass* StaticClass<UDoubleIIRValueInterpolator>()
{
	return UDoubleIIRValueInterpolator::StaticClass();
}
UDoubleIIRValueInterpolator::UDoubleIIRValueInterpolator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDoubleIIRValueInterpolator);
UDoubleIIRValueInterpolator::~UDoubleIIRValueInterpolator() {}
// End Class UDoubleIIRValueInterpolator

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_ValueInterpolators_DoubleIIRValueInterpolator_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDoubleIIRValueInterpolator, UDoubleIIRValueInterpolator::StaticClass, TEXT("UDoubleIIRValueInterpolator"), &Z_Registration_Info_UClass_UDoubleIIRValueInterpolator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDoubleIIRValueInterpolator), 2533018914U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_ValueInterpolators_DoubleIIRValueInterpolator_h_3943880737(TEXT("/Script/GameplayCameras"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_ValueInterpolators_DoubleIIRValueInterpolator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_ValueInterpolators_DoubleIIRValueInterpolator_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
