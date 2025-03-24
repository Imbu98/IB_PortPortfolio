// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HairStrandsCore/Public/MovieSceneGroomCacheSection.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneGroomCacheSection() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameNumber();
HAIRSTRANDSCORE_API UClass* Z_Construct_UClass_UGroomCache_NoRegister();
HAIRSTRANDSCORE_API UClass* Z_Construct_UClass_UMovieSceneGroomCacheSection();
HAIRSTRANDSCORE_API UClass* Z_Construct_UClass_UMovieSceneGroomCacheSection_NoRegister();
HAIRSTRANDSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneGroomCacheParams();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection();
UPackage* Z_Construct_UPackage__Script_HairStrandsCore();
// End Cross Module References

// Begin ScriptStruct FMovieSceneGroomCacheParams
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneGroomCacheParams;
class UScriptStruct* FMovieSceneGroomCacheParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneGroomCacheParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneGroomCacheParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneGroomCacheParams, (UObject*)Z_Construct_UPackage__Script_HairStrandsCore(), TEXT("MovieSceneGroomCacheParams"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneGroomCacheParams.OuterSingleton;
}
template<> HAIRSTRANDSCORE_API UScriptStruct* StaticStruct<FMovieSceneGroomCacheParams>()
{
	return FMovieSceneGroomCacheParams::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMovieSceneGroomCacheParams_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MovieSceneGroomCacheSection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroomCache_MetaData[] = {
		{ "Category", "GroomCache" },
		{ "Comment", "/** The animation this section plays */" },
		{ "ModuleRelativePath", "Public/MovieSceneGroomCacheSection.h" },
		{ "ToolTip", "The animation this section plays" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FirstLoopStartFrameOffset_MetaData[] = {
		{ "Category", "GroomCache" },
		{ "Comment", "/** The offset for the first loop of the animation clip */" },
		{ "ModuleRelativePath", "Public/MovieSceneGroomCacheSection.h" },
		{ "ToolTip", "The offset for the first loop of the animation clip" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartFrameOffset_MetaData[] = {
		{ "Category", "GroomCache" },
		{ "Comment", "/** The offset into the beginning of the animation clip */" },
		{ "ModuleRelativePath", "Public/MovieSceneGroomCacheSection.h" },
		{ "ToolTip", "The offset into the beginning of the animation clip" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndFrameOffset_MetaData[] = {
		{ "Category", "GroomCache" },
		{ "Comment", "/** The offset into the end of the animation clip */" },
		{ "ModuleRelativePath", "Public/MovieSceneGroomCacheSection.h" },
		{ "ToolTip", "The offset into the end of the animation clip" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayRate_MetaData[] = {
		{ "Category", "GroomCache" },
		{ "Comment", "/** The playback rate of the animation clip */" },
		{ "ModuleRelativePath", "Public/MovieSceneGroomCacheSection.h" },
		{ "ToolTip", "The playback rate of the animation clip" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bReverse_MetaData[] = {
		{ "Category", "Animation" },
		{ "Comment", "/** Reverse the playback of the animation clip */" },
		{ "ModuleRelativePath", "Public/MovieSceneGroomCacheSection.h" },
		{ "ToolTip", "Reverse the playback of the animation clip" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GroomCache;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FirstLoopStartFrameOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartFrameOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EndFrameOffset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PlayRate;
	static void NewProp_bReverse_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReverse;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneGroomCacheParams>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMovieSceneGroomCacheParams_Statics::NewProp_GroomCache = { "GroomCache", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneGroomCacheParams, GroomCache), Z_Construct_UClass_UGroomCache_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroomCache_MetaData), NewProp_GroomCache_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneGroomCacheParams_Statics::NewProp_FirstLoopStartFrameOffset = { "FirstLoopStartFrameOffset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneGroomCacheParams, FirstLoopStartFrameOffset), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FirstLoopStartFrameOffset_MetaData), NewProp_FirstLoopStartFrameOffset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneGroomCacheParams_Statics::NewProp_StartFrameOffset = { "StartFrameOffset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneGroomCacheParams, StartFrameOffset), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartFrameOffset_MetaData), NewProp_StartFrameOffset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneGroomCacheParams_Statics::NewProp_EndFrameOffset = { "EndFrameOffset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneGroomCacheParams, EndFrameOffset), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndFrameOffset_MetaData), NewProp_EndFrameOffset_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMovieSceneGroomCacheParams_Statics::NewProp_PlayRate = { "PlayRate", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneGroomCacheParams, PlayRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayRate_MetaData), NewProp_PlayRate_MetaData) };
void Z_Construct_UScriptStruct_FMovieSceneGroomCacheParams_Statics::NewProp_bReverse_SetBit(void* Obj)
{
	((FMovieSceneGroomCacheParams*)Obj)->bReverse = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieSceneGroomCacheParams_Statics::NewProp_bReverse = { "bReverse", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FMovieSceneGroomCacheParams), &Z_Construct_UScriptStruct_FMovieSceneGroomCacheParams_Statics::NewProp_bReverse_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bReverse_MetaData), NewProp_bReverse_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneGroomCacheParams_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneGroomCacheParams_Statics::NewProp_GroomCache,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneGroomCacheParams_Statics::NewProp_FirstLoopStartFrameOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneGroomCacheParams_Statics::NewProp_StartFrameOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneGroomCacheParams_Statics::NewProp_EndFrameOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneGroomCacheParams_Statics::NewProp_PlayRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneGroomCacheParams_Statics::NewProp_bReverse,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneGroomCacheParams_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneGroomCacheParams_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_HairStrandsCore,
	nullptr,
	&NewStructOps,
	"MovieSceneGroomCacheParams",
	Z_Construct_UScriptStruct_FMovieSceneGroomCacheParams_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneGroomCacheParams_Statics::PropPointers),
	sizeof(FMovieSceneGroomCacheParams),
	alignof(FMovieSceneGroomCacheParams),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneGroomCacheParams_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovieSceneGroomCacheParams_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneGroomCacheParams()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneGroomCacheParams.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneGroomCacheParams.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneGroomCacheParams_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneGroomCacheParams.InnerSingleton;
}
// End ScriptStruct FMovieSceneGroomCacheParams

// Begin Class UMovieSceneGroomCacheSection
void UMovieSceneGroomCacheSection::StaticRegisterNativesUMovieSceneGroomCacheSection()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneGroomCacheSection);
UClass* Z_Construct_UClass_UMovieSceneGroomCacheSection_NoRegister()
{
	return UMovieSceneGroomCacheSection::StaticClass();
}
struct Z_Construct_UClass_UMovieSceneGroomCacheSection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Movie scene section that control GroomCache playback\n */" },
		{ "IncludePath", "MovieSceneGroomCacheSection.h" },
		{ "ModuleRelativePath", "Public/MovieSceneGroomCacheSection.h" },
		{ "ToolTip", "Movie scene section that control GroomCache playback" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Params_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/MovieSceneGroomCacheSection.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Params;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneGroomCacheSection>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneGroomCacheSection_Statics::NewProp_Params = { "Params", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneGroomCacheSection, Params), Z_Construct_UScriptStruct_FMovieSceneGroomCacheParams, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Params_MetaData), NewProp_Params_MetaData) }; // 4202183959
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneGroomCacheSection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneGroomCacheSection_Statics::NewProp_Params,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneGroomCacheSection_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMovieSceneGroomCacheSection_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieSceneSection,
	(UObject* (*)())Z_Construct_UPackage__Script_HairStrandsCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneGroomCacheSection_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneGroomCacheSection_Statics::ClassParams = {
	&UMovieSceneGroomCacheSection::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMovieSceneGroomCacheSection_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneGroomCacheSection_Statics::PropPointers),
	0,
	0x00A800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneGroomCacheSection_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieSceneGroomCacheSection_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieSceneGroomCacheSection()
{
	if (!Z_Registration_Info_UClass_UMovieSceneGroomCacheSection.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneGroomCacheSection.OuterSingleton, Z_Construct_UClass_UMovieSceneGroomCacheSection_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieSceneGroomCacheSection.OuterSingleton;
}
template<> HAIRSTRANDSCORE_API UClass* StaticClass<UMovieSceneGroomCacheSection>()
{
	return UMovieSceneGroomCacheSection::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneGroomCacheSection);
UMovieSceneGroomCacheSection::~UMovieSceneGroomCacheSection() {}
// End Class UMovieSceneGroomCacheSection

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_MovieSceneGroomCacheSection_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMovieSceneGroomCacheParams::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneGroomCacheParams_Statics::NewStructOps, TEXT("MovieSceneGroomCacheParams"), &Z_Registration_Info_UScriptStruct_MovieSceneGroomCacheParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneGroomCacheParams), 4202183959U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneGroomCacheSection, UMovieSceneGroomCacheSection::StaticClass, TEXT("UMovieSceneGroomCacheSection"), &Z_Registration_Info_UClass_UMovieSceneGroomCacheSection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneGroomCacheSection), 237946529U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_MovieSceneGroomCacheSection_h_1466532304(TEXT("/Script/HairStrandsCore"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_MovieSceneGroomCacheSection_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_MovieSceneGroomCacheSection_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_MovieSceneGroomCacheSection_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_MovieSceneGroomCacheSection_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
