// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayCameras/Public/ValueInterpolators/AccelerationDecelerationValueInterpolator.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAccelerationDecelerationValueInterpolator() {}

// Begin Cross Module References
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UAccelerationDecelerationValueInterpolator();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UAccelerationDecelerationValueInterpolator_NoRegister();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UCameraValueInterpolator();
UPackage* Z_Construct_UPackage__Script_GameplayCameras();
// End Cross Module References

// Begin Class UAccelerationDecelerationValueInterpolator
void UAccelerationDecelerationValueInterpolator::StaticRegisterNativesUAccelerationDecelerationValueInterpolator()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAccelerationDecelerationValueInterpolator);
UClass* Z_Construct_UClass_UAccelerationDecelerationValueInterpolator_NoRegister()
{
	return UAccelerationDecelerationValueInterpolator::StaticClass();
}
struct Z_Construct_UClass_UAccelerationDecelerationValueInterpolator_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A value interpolator that first accelerates up to a maximum speed, and then decelerates\n * before reaching the target value.\n */" },
		{ "DisplayName", "Acceleration-Deceleration" },
		{ "IncludePath", "ValueInterpolators/AccelerationDecelerationValueInterpolator.h" },
		{ "ModuleRelativePath", "Public/ValueInterpolators/AccelerationDecelerationValueInterpolator.h" },
		{ "ToolTip", "A value interpolator that first accelerates up to a maximum speed, and then decelerates\nbefore reaching the target value." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Acceleration_MetaData[] = {
		{ "Category", "Speed" },
		{ "Comment", "/** The acceleration rate at the start of interpolation. */" },
		{ "ModuleRelativePath", "Public/ValueInterpolators/AccelerationDecelerationValueInterpolator.h" },
		{ "ToolTip", "The acceleration rate at the start of interpolation." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxSpeed_MetaData[] = {
		{ "Category", "Speed" },
		{ "Comment", "/** The maximum speed reachable during interpolation. */" },
		{ "ModuleRelativePath", "Public/ValueInterpolators/AccelerationDecelerationValueInterpolator.h" },
		{ "ToolTip", "The maximum speed reachable during interpolation." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Deceleration_MetaData[] = {
		{ "Category", "Speed" },
		{ "Comment", "/** The deceleration rate at the end of interpolation. */" },
		{ "ModuleRelativePath", "Public/ValueInterpolators/AccelerationDecelerationValueInterpolator.h" },
		{ "ToolTip", "The deceleration rate at the end of interpolation." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Acceleration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Deceleration;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAccelerationDecelerationValueInterpolator>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAccelerationDecelerationValueInterpolator_Statics::NewProp_Acceleration = { "Acceleration", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAccelerationDecelerationValueInterpolator, Acceleration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Acceleration_MetaData), NewProp_Acceleration_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAccelerationDecelerationValueInterpolator_Statics::NewProp_MaxSpeed = { "MaxSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAccelerationDecelerationValueInterpolator, MaxSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxSpeed_MetaData), NewProp_MaxSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAccelerationDecelerationValueInterpolator_Statics::NewProp_Deceleration = { "Deceleration", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAccelerationDecelerationValueInterpolator, Deceleration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Deceleration_MetaData), NewProp_Deceleration_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAccelerationDecelerationValueInterpolator_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAccelerationDecelerationValueInterpolator_Statics::NewProp_Acceleration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAccelerationDecelerationValueInterpolator_Statics::NewProp_MaxSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAccelerationDecelerationValueInterpolator_Statics::NewProp_Deceleration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAccelerationDecelerationValueInterpolator_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAccelerationDecelerationValueInterpolator_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCameraValueInterpolator,
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayCameras,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAccelerationDecelerationValueInterpolator_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAccelerationDecelerationValueInterpolator_Statics::ClassParams = {
	&UAccelerationDecelerationValueInterpolator::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAccelerationDecelerationValueInterpolator_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAccelerationDecelerationValueInterpolator_Statics::PropPointers),
	0,
	0x002030A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAccelerationDecelerationValueInterpolator_Statics::Class_MetaDataParams), Z_Construct_UClass_UAccelerationDecelerationValueInterpolator_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAccelerationDecelerationValueInterpolator()
{
	if (!Z_Registration_Info_UClass_UAccelerationDecelerationValueInterpolator.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAccelerationDecelerationValueInterpolator.OuterSingleton, Z_Construct_UClass_UAccelerationDecelerationValueInterpolator_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAccelerationDecelerationValueInterpolator.OuterSingleton;
}
template<> GAMEPLAYCAMERAS_API UClass* StaticClass<UAccelerationDecelerationValueInterpolator>()
{
	return UAccelerationDecelerationValueInterpolator::StaticClass();
}
UAccelerationDecelerationValueInterpolator::UAccelerationDecelerationValueInterpolator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAccelerationDecelerationValueInterpolator);
UAccelerationDecelerationValueInterpolator::~UAccelerationDecelerationValueInterpolator() {}
// End Class UAccelerationDecelerationValueInterpolator

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_ValueInterpolators_AccelerationDecelerationValueInterpolator_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAccelerationDecelerationValueInterpolator, UAccelerationDecelerationValueInterpolator::StaticClass, TEXT("UAccelerationDecelerationValueInterpolator"), &Z_Registration_Info_UClass_UAccelerationDecelerationValueInterpolator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAccelerationDecelerationValueInterpolator), 1548215570U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_ValueInterpolators_AccelerationDecelerationValueInterpolator_h_1233460056(TEXT("/Script/GameplayCameras"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_ValueInterpolators_AccelerationDecelerationValueInterpolator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_ValueInterpolators_AccelerationDecelerationValueInterpolator_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
