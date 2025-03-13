// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayCameras/Public/ValueInterpolators/IIRValueInterpolator.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIIRValueInterpolator() {}

// Begin Cross Module References
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UCameraValueInterpolator();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UIIRValueInterpolator();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UIIRValueInterpolator_NoRegister();
UPackage* Z_Construct_UPackage__Script_GameplayCameras();
// End Cross Module References

// Begin Class UIIRValueInterpolator
void UIIRValueInterpolator::StaticRegisterNativesUIIRValueInterpolator()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIIRValueInterpolator);
UClass* Z_Construct_UClass_UIIRValueInterpolator_NoRegister()
{
	return UIIRValueInterpolator::StaticClass();
}
struct Z_Construct_UClass_UIIRValueInterpolator_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Infinite impulse response filter interpolator.\n */" },
		{ "DisplayName", "IIR" },
		{ "IncludePath", "ValueInterpolators/IIRValueInterpolator.h" },
		{ "ModuleRelativePath", "Public/ValueInterpolators/IIRValueInterpolator.h" },
		{ "ToolTip", "Infinite impulse response filter interpolator." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[] = {
		{ "Category", "Interpolation" },
		{ "Comment", "/** The speed of interpolation. */" },
		{ "ModuleRelativePath", "Public/ValueInterpolators/IIRValueInterpolator.h" },
		{ "ToolTip", "The speed of interpolation." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseFixedStep_MetaData[] = {
		{ "Category", "Interpolation" },
		{ "Comment", "/** Whether to use fixed-step evaluation. */" },
		{ "ModuleRelativePath", "Public/ValueInterpolators/IIRValueInterpolator.h" },
		{ "ToolTip", "Whether to use fixed-step evaluation." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Speed;
	static void NewProp_bUseFixedStep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseFixedStep;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIIRValueInterpolator>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIIRValueInterpolator_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIIRValueInterpolator, Speed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Speed_MetaData), NewProp_Speed_MetaData) };
void Z_Construct_UClass_UIIRValueInterpolator_Statics::NewProp_bUseFixedStep_SetBit(void* Obj)
{
	((UIIRValueInterpolator*)Obj)->bUseFixedStep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UIIRValueInterpolator_Statics::NewProp_bUseFixedStep = { "bUseFixedStep", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UIIRValueInterpolator), &Z_Construct_UClass_UIIRValueInterpolator_Statics::NewProp_bUseFixedStep_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseFixedStep_MetaData), NewProp_bUseFixedStep_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIIRValueInterpolator_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIIRValueInterpolator_Statics::NewProp_Speed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIIRValueInterpolator_Statics::NewProp_bUseFixedStep,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIIRValueInterpolator_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UIIRValueInterpolator_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCameraValueInterpolator,
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayCameras,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIIRValueInterpolator_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIIRValueInterpolator_Statics::ClassParams = {
	&UIIRValueInterpolator::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UIIRValueInterpolator_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UIIRValueInterpolator_Statics::PropPointers),
	0,
	0x002030A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIIRValueInterpolator_Statics::Class_MetaDataParams), Z_Construct_UClass_UIIRValueInterpolator_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIIRValueInterpolator()
{
	if (!Z_Registration_Info_UClass_UIIRValueInterpolator.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIIRValueInterpolator.OuterSingleton, Z_Construct_UClass_UIIRValueInterpolator_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIIRValueInterpolator.OuterSingleton;
}
template<> GAMEPLAYCAMERAS_API UClass* StaticClass<UIIRValueInterpolator>()
{
	return UIIRValueInterpolator::StaticClass();
}
UIIRValueInterpolator::UIIRValueInterpolator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIIRValueInterpolator);
UIIRValueInterpolator::~UIIRValueInterpolator() {}
// End Class UIIRValueInterpolator

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_ValueInterpolators_IIRValueInterpolator_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIIRValueInterpolator, UIIRValueInterpolator::StaticClass, TEXT("UIIRValueInterpolator"), &Z_Registration_Info_UClass_UIIRValueInterpolator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIIRValueInterpolator), 1755488879U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_ValueInterpolators_IIRValueInterpolator_h_2433083195(TEXT("/Script/GameplayCameras"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_ValueInterpolators_IIRValueInterpolator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_ValueInterpolators_IIRValueInterpolator_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
