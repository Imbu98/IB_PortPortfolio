// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayCameras/Public/Core/CameraValueInterpolator.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCameraValueInterpolator() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UCameraValueInterpolator();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UCameraValueInterpolator_NoRegister();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UPopValueInterpolator();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UPopValueInterpolator_NoRegister();
UPackage* Z_Construct_UPackage__Script_GameplayCameras();
// End Cross Module References

// Begin Class UCameraValueInterpolator
void UCameraValueInterpolator::StaticRegisterNativesUCameraValueInterpolator()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCameraValueInterpolator);
UClass* Z_Construct_UClass_UCameraValueInterpolator_NoRegister()
{
	return UCameraValueInterpolator::StaticClass();
}
struct Z_Construct_UClass_UCameraValueInterpolator_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base class for value interpolator parameters.\n */" },
		{ "IncludePath", "Core/CameraValueInterpolator.h" },
		{ "ModuleRelativePath", "Public/Core/CameraValueInterpolator.h" },
		{ "ToolTip", "Base class for value interpolator parameters." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCameraValueInterpolator>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCameraValueInterpolator_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayCameras,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCameraValueInterpolator_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCameraValueInterpolator_Statics::ClassParams = {
	&UCameraValueInterpolator::StaticClass,
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
	0x002830A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCameraValueInterpolator_Statics::Class_MetaDataParams), Z_Construct_UClass_UCameraValueInterpolator_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCameraValueInterpolator()
{
	if (!Z_Registration_Info_UClass_UCameraValueInterpolator.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCameraValueInterpolator.OuterSingleton, Z_Construct_UClass_UCameraValueInterpolator_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCameraValueInterpolator.OuterSingleton;
}
template<> GAMEPLAYCAMERAS_API UClass* StaticClass<UCameraValueInterpolator>()
{
	return UCameraValueInterpolator::StaticClass();
}
UCameraValueInterpolator::UCameraValueInterpolator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCameraValueInterpolator);
UCameraValueInterpolator::~UCameraValueInterpolator() {}
// End Class UCameraValueInterpolator

// Begin Class UPopValueInterpolator
void UPopValueInterpolator::StaticRegisterNativesUPopValueInterpolator()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPopValueInterpolator);
UClass* Z_Construct_UClass_UPopValueInterpolator_NoRegister()
{
	return UPopValueInterpolator::StaticClass();
}
struct Z_Construct_UClass_UPopValueInterpolator_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** Simple interpolator that immediately \"pops\" to the target value. */" },
		{ "DisplayName", "Immediate Pop" },
		{ "IncludePath", "Core/CameraValueInterpolator.h" },
		{ "ModuleRelativePath", "Public/Core/CameraValueInterpolator.h" },
		{ "ToolTip", "Simple interpolator that immediately \"pops\" to the target value." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPopValueInterpolator>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPopValueInterpolator_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCameraValueInterpolator,
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayCameras,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPopValueInterpolator_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPopValueInterpolator_Statics::ClassParams = {
	&UPopValueInterpolator::StaticClass,
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
	0x002030A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPopValueInterpolator_Statics::Class_MetaDataParams), Z_Construct_UClass_UPopValueInterpolator_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPopValueInterpolator()
{
	if (!Z_Registration_Info_UClass_UPopValueInterpolator.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPopValueInterpolator.OuterSingleton, Z_Construct_UClass_UPopValueInterpolator_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPopValueInterpolator.OuterSingleton;
}
template<> GAMEPLAYCAMERAS_API UClass* StaticClass<UPopValueInterpolator>()
{
	return UPopValueInterpolator::StaticClass();
}
UPopValueInterpolator::UPopValueInterpolator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPopValueInterpolator);
UPopValueInterpolator::~UPopValueInterpolator() {}
// End Class UPopValueInterpolator

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraValueInterpolator_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCameraValueInterpolator, UCameraValueInterpolator::StaticClass, TEXT("UCameraValueInterpolator"), &Z_Registration_Info_UClass_UCameraValueInterpolator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCameraValueInterpolator), 1120779937U) },
		{ Z_Construct_UClass_UPopValueInterpolator, UPopValueInterpolator::StaticClass, TEXT("UPopValueInterpolator"), &Z_Registration_Info_UClass_UPopValueInterpolator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPopValueInterpolator), 475680260U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraValueInterpolator_h_1308108325(TEXT("/Script/GameplayCameras"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraValueInterpolator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraValueInterpolator_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
