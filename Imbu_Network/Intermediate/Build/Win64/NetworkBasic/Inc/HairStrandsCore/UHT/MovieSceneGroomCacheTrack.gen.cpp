// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HairStrandsCore/Public/MovieSceneGroomCacheTrack.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneGroomCacheTrack() {}

// Begin Cross Module References
HAIRSTRANDSCORE_API UClass* Z_Construct_UClass_UMovieSceneGroomCacheTrack();
HAIRSTRANDSCORE_API UClass* Z_Construct_UClass_UMovieSceneGroomCacheTrack_NoRegister();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneNameableTrack();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection_NoRegister();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneTrackTemplateProducer_NoRegister();
UPackage* Z_Construct_UPackage__Script_HairStrandsCore();
// End Cross Module References

// Begin Class UMovieSceneGroomCacheTrack
void UMovieSceneGroomCacheTrack::StaticRegisterNativesUMovieSceneGroomCacheTrack()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneGroomCacheTrack);
UClass* Z_Construct_UClass_UMovieSceneGroomCacheTrack_NoRegister()
{
	return UMovieSceneGroomCacheTrack::StaticClass();
}
struct Z_Construct_UClass_UMovieSceneGroomCacheTrack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Handles animation of GroomCache\n */" },
		{ "IncludePath", "MovieSceneGroomCacheTrack.h" },
		{ "ModuleRelativePath", "Public/MovieSceneGroomCacheTrack.h" },
		{ "ToolTip", "Handles animation of GroomCache" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimationSections_MetaData[] = {
		{ "Comment", "/** List of all animation sections */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MovieSceneGroomCacheTrack.h" },
		{ "ToolTip", "List of all animation sections" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimationSections_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AnimationSections;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneGroomCacheTrack>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMovieSceneGroomCacheTrack_Statics::NewProp_AnimationSections_Inner = { "AnimationSections", nullptr, (EPropertyFlags)0x0104000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMovieSceneSection_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMovieSceneGroomCacheTrack_Statics::NewProp_AnimationSections = { "AnimationSections", nullptr, (EPropertyFlags)0x0144008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneGroomCacheTrack, AnimationSections), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimationSections_MetaData), NewProp_AnimationSections_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneGroomCacheTrack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneGroomCacheTrack_Statics::NewProp_AnimationSections_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneGroomCacheTrack_Statics::NewProp_AnimationSections,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneGroomCacheTrack_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMovieSceneGroomCacheTrack_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieSceneNameableTrack,
	(UObject* (*)())Z_Construct_UPackage__Script_HairStrandsCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneGroomCacheTrack_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UMovieSceneGroomCacheTrack_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UMovieSceneTrackTemplateProducer_NoRegister, (int32)VTABLE_OFFSET(UMovieSceneGroomCacheTrack, IMovieSceneTrackTemplateProducer), false },  // 2607263461
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneGroomCacheTrack_Statics::ClassParams = {
	&UMovieSceneGroomCacheTrack::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMovieSceneGroomCacheTrack_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneGroomCacheTrack_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x00A800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneGroomCacheTrack_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieSceneGroomCacheTrack_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieSceneGroomCacheTrack()
{
	if (!Z_Registration_Info_UClass_UMovieSceneGroomCacheTrack.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneGroomCacheTrack.OuterSingleton, Z_Construct_UClass_UMovieSceneGroomCacheTrack_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieSceneGroomCacheTrack.OuterSingleton;
}
template<> HAIRSTRANDSCORE_API UClass* StaticClass<UMovieSceneGroomCacheTrack>()
{
	return UMovieSceneGroomCacheTrack::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneGroomCacheTrack);
UMovieSceneGroomCacheTrack::~UMovieSceneGroomCacheTrack() {}
// End Class UMovieSceneGroomCacheTrack

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_MovieSceneGroomCacheTrack_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneGroomCacheTrack, UMovieSceneGroomCacheTrack::StaticClass, TEXT("UMovieSceneGroomCacheTrack"), &Z_Registration_Info_UClass_UMovieSceneGroomCacheTrack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneGroomCacheTrack), 4226949126U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_MovieSceneGroomCacheTrack_h_968848837(TEXT("/Script/HairStrandsCore"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_MovieSceneGroomCacheTrack_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_MovieSceneGroomCacheTrack_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
