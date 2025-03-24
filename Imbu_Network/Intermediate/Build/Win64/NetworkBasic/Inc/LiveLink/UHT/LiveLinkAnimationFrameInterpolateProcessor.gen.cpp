// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LiveLink/Public/InterpolationProcessor/LiveLinkAnimationFrameInterpolateProcessor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiveLinkAnimationFrameInterpolateProcessor() {}

// Begin Cross Module References
LIVELINK_API UClass* Z_Construct_UClass_ULiveLinkAnimationFrameInterpolationProcessor();
LIVELINK_API UClass* Z_Construct_UClass_ULiveLinkAnimationFrameInterpolationProcessor_NoRegister();
LIVELINK_API UClass* Z_Construct_UClass_ULiveLinkBasicFrameInterpolationProcessor();
UPackage* Z_Construct_UPackage__Script_LiveLink();
// End Cross Module References

// Begin Class ULiveLinkAnimationFrameInterpolationProcessor
void ULiveLinkAnimationFrameInterpolationProcessor::StaticRegisterNativesULiveLinkAnimationFrameInterpolationProcessor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULiveLinkAnimationFrameInterpolationProcessor);
UClass* Z_Construct_UClass_ULiveLinkAnimationFrameInterpolationProcessor_NoRegister()
{
	return ULiveLinkAnimationFrameInterpolationProcessor::StaticClass();
}
struct Z_Construct_UClass_ULiveLinkAnimationFrameInterpolationProcessor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Default blending method for animation frames\n */" },
		{ "DisplayName", "Animation Interpolation" },
		{ "IncludePath", "InterpolationProcessor/LiveLinkAnimationFrameInterpolateProcessor.h" },
		{ "ModuleRelativePath", "Public/InterpolationProcessor/LiveLinkAnimationFrameInterpolateProcessor.h" },
		{ "ToolTip", "Default blending method for animation frames" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULiveLinkAnimationFrameInterpolationProcessor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ULiveLinkAnimationFrameInterpolationProcessor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ULiveLinkBasicFrameInterpolationProcessor,
	(UObject* (*)())Z_Construct_UPackage__Script_LiveLink,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkAnimationFrameInterpolationProcessor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULiveLinkAnimationFrameInterpolationProcessor_Statics::ClassParams = {
	&ULiveLinkAnimationFrameInterpolationProcessor::StaticClass,
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
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkAnimationFrameInterpolationProcessor_Statics::Class_MetaDataParams), Z_Construct_UClass_ULiveLinkAnimationFrameInterpolationProcessor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULiveLinkAnimationFrameInterpolationProcessor()
{
	if (!Z_Registration_Info_UClass_ULiveLinkAnimationFrameInterpolationProcessor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULiveLinkAnimationFrameInterpolationProcessor.OuterSingleton, Z_Construct_UClass_ULiveLinkAnimationFrameInterpolationProcessor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULiveLinkAnimationFrameInterpolationProcessor.OuterSingleton;
}
template<> LIVELINK_API UClass* StaticClass<ULiveLinkAnimationFrameInterpolationProcessor>()
{
	return ULiveLinkAnimationFrameInterpolationProcessor::StaticClass();
}
ULiveLinkAnimationFrameInterpolationProcessor::ULiveLinkAnimationFrameInterpolationProcessor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULiveLinkAnimationFrameInterpolationProcessor);
ULiveLinkAnimationFrameInterpolationProcessor::~ULiveLinkAnimationFrameInterpolationProcessor() {}
// End Class ULiveLinkAnimationFrameInterpolationProcessor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_InterpolationProcessor_LiveLinkAnimationFrameInterpolateProcessor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULiveLinkAnimationFrameInterpolationProcessor, ULiveLinkAnimationFrameInterpolationProcessor::StaticClass, TEXT("ULiveLinkAnimationFrameInterpolationProcessor"), &Z_Registration_Info_UClass_ULiveLinkAnimationFrameInterpolationProcessor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULiveLinkAnimationFrameInterpolationProcessor), 3750486613U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_InterpolationProcessor_LiveLinkAnimationFrameInterpolateProcessor_h_4196426958(TEXT("/Script/LiveLink"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_InterpolationProcessor_LiveLinkAnimationFrameInterpolateProcessor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_InterpolationProcessor_LiveLinkAnimationFrameInterpolateProcessor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
