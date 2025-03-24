// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Landscape/Public/LandscapeEditResourcesSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLandscapeEditResourcesSubsystem() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_UEngineSubsystem();
ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget_NoRegister();
LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeEditResourcesSubsystem();
LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeEditResourcesSubsystem_NoRegister();
LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeScratchRenderTarget();
LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeScratchRenderTarget_NoRegister();
UPackage* Z_Construct_UPackage__Script_Landscape();
// End Cross Module References

// Begin Class ULandscapeScratchRenderTarget
void ULandscapeScratchRenderTarget::StaticRegisterNativesULandscapeScratchRenderTarget()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULandscapeScratchRenderTarget);
UClass* Z_Construct_UClass_ULandscapeScratchRenderTarget_NoRegister()
{
	return ULandscapeScratchRenderTarget::StaticClass();
}
struct Z_Construct_UClass_ULandscapeScratchRenderTarget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** \n* ULandscapeScratchRenderTarget holds a UTextureRenderTarget2D. It can be used in the landscape tools as transient memory by requesting/releasing an instance via ULandscapeEditResourcesSubsystem\n*  It contains information about the current state (ERHIAccess) of the resource in order to automate/minimize state transitions.\n*  In order to minimize memory consumption, the internal render target can be larger than what was requested. It's therefore important to take that into account when setting up draw calls on this\n*  render target and use GetEffectiveResolution() instead of the RT's resolution\n*/" },
		{ "IncludePath", "LandscapeEditResourcesSubsystem.h" },
		{ "ModuleRelativePath", "Public/LandscapeEditResourcesSubsystem.h" },
		{ "ToolTip", "ULandscapeScratchRenderTarget holds a UTextureRenderTarget2D. It can be used in the landscape tools as transient memory by requesting/releasing an instance via ULandscapeEditResourcesSubsystem\n It contains information about the current state (ERHIAccess) of the resource in order to automate/minimize state transitions.\n In order to minimize memory consumption, the internal render target can be larger than what was requested. It's therefore important to take that into account when setting up draw calls on this\n render target and use GetEffectiveResolution() instead of the RT's resolution" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RenderTarget_MetaData[] = {
		{ "ModuleRelativePath", "Public/LandscapeEditResourcesSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RenderTarget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULandscapeScratchRenderTarget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULandscapeScratchRenderTarget_Statics::NewProp_RenderTarget = { "RenderTarget", nullptr, (EPropertyFlags)0x0144000400000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULandscapeScratchRenderTarget, RenderTarget), Z_Construct_UClass_UTextureRenderTarget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RenderTarget_MetaData), NewProp_RenderTarget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULandscapeScratchRenderTarget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeScratchRenderTarget_Statics::NewProp_RenderTarget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeScratchRenderTarget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULandscapeScratchRenderTarget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeScratchRenderTarget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULandscapeScratchRenderTarget_Statics::ClassParams = {
	&ULandscapeScratchRenderTarget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ULandscapeScratchRenderTarget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeScratchRenderTarget_Statics::PropPointers),
	0,
	0x000000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeScratchRenderTarget_Statics::Class_MetaDataParams), Z_Construct_UClass_ULandscapeScratchRenderTarget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULandscapeScratchRenderTarget()
{
	if (!Z_Registration_Info_UClass_ULandscapeScratchRenderTarget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULandscapeScratchRenderTarget.OuterSingleton, Z_Construct_UClass_ULandscapeScratchRenderTarget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULandscapeScratchRenderTarget.OuterSingleton;
}
template<> LANDSCAPE_API UClass* StaticClass<ULandscapeScratchRenderTarget>()
{
	return ULandscapeScratchRenderTarget::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULandscapeScratchRenderTarget);
ULandscapeScratchRenderTarget::~ULandscapeScratchRenderTarget() {}
// End Class ULandscapeScratchRenderTarget

// Begin Class ULandscapeEditResourcesSubsystem
void ULandscapeEditResourcesSubsystem::StaticRegisterNativesULandscapeEditResourcesSubsystem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULandscapeEditResourcesSubsystem);
UClass* Z_Construct_UClass_ULandscapeEditResourcesSubsystem_NoRegister()
{
	return ULandscapeEditResourcesSubsystem::StaticClass();
}
struct Z_Construct_UClass_ULandscapeEditResourcesSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** ULandscapeEditResourcesSubsystem provides services to manage/pool render resources used by the landscape tools, across landscape actors, in order to minimize memory consumption */" },
		{ "IncludePath", "LandscapeEditResourcesSubsystem.h" },
		{ "ModuleRelativePath", "Public/LandscapeEditResourcesSubsystem.h" },
		{ "ToolTip", "ULandscapeEditResourcesSubsystem provides services to manage/pool render resources used by the landscape tools, across landscape actors, in order to minimize memory consumption" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScratchRenderTargets_MetaData[] = {
		{ "ModuleRelativePath", "Public/LandscapeEditResourcesSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ScratchRenderTargets_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ScratchRenderTargets;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULandscapeEditResourcesSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULandscapeEditResourcesSubsystem_Statics::NewProp_ScratchRenderTargets_Inner = { "ScratchRenderTargets", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ULandscapeScratchRenderTarget_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULandscapeEditResourcesSubsystem_Statics::NewProp_ScratchRenderTargets = { "ScratchRenderTargets", nullptr, (EPropertyFlags)0x0144000400002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULandscapeEditResourcesSubsystem, ScratchRenderTargets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScratchRenderTargets_MetaData), NewProp_ScratchRenderTargets_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULandscapeEditResourcesSubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditResourcesSubsystem_Statics::NewProp_ScratchRenderTargets_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditResourcesSubsystem_Statics::NewProp_ScratchRenderTargets,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeEditResourcesSubsystem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULandscapeEditResourcesSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEngineSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeEditResourcesSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULandscapeEditResourcesSubsystem_Statics::ClassParams = {
	&ULandscapeEditResourcesSubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ULandscapeEditResourcesSubsystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeEditResourcesSubsystem_Statics::PropPointers),
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeEditResourcesSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_ULandscapeEditResourcesSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULandscapeEditResourcesSubsystem()
{
	if (!Z_Registration_Info_UClass_ULandscapeEditResourcesSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULandscapeEditResourcesSubsystem.OuterSingleton, Z_Construct_UClass_ULandscapeEditResourcesSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULandscapeEditResourcesSubsystem.OuterSingleton;
}
template<> LANDSCAPE_API UClass* StaticClass<ULandscapeEditResourcesSubsystem>()
{
	return ULandscapeEditResourcesSubsystem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULandscapeEditResourcesSubsystem);
ULandscapeEditResourcesSubsystem::~ULandscapeEditResourcesSubsystem() {}
// End Class ULandscapeEditResourcesSubsystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Public_LandscapeEditResourcesSubsystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULandscapeScratchRenderTarget, ULandscapeScratchRenderTarget::StaticClass, TEXT("ULandscapeScratchRenderTarget"), &Z_Registration_Info_UClass_ULandscapeScratchRenderTarget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULandscapeScratchRenderTarget), 882531462U) },
		{ Z_Construct_UClass_ULandscapeEditResourcesSubsystem, ULandscapeEditResourcesSubsystem::StaticClass, TEXT("ULandscapeEditResourcesSubsystem"), &Z_Registration_Info_UClass_ULandscapeEditResourcesSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULandscapeEditResourcesSubsystem), 135021447U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Public_LandscapeEditResourcesSubsystem_h_953842109(TEXT("/Script/Landscape"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Public_LandscapeEditResourcesSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Public_LandscapeEditResourcesSubsystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
