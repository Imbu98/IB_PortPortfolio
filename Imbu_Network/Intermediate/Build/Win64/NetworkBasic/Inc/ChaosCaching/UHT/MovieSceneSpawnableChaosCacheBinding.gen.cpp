// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ChaosCaching/Public/Chaos/Sequencer/MovieSceneSpawnableChaosCacheBinding.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneSpawnableChaosCacheBinding() {}

// Begin Cross Module References
CHAOSCACHING_API UClass* Z_Construct_UClass_UMovieSceneSpawnableChaosCacheBinding();
CHAOSCACHING_API UClass* Z_Construct_UClass_UMovieSceneSpawnableChaosCacheBinding_NoRegister();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneSpawnableActorBinding();
UPackage* Z_Construct_UPackage__Script_ChaosCaching();
// End Cross Module References

// Begin Class UMovieSceneSpawnableChaosCacheBinding
void UMovieSceneSpawnableChaosCacheBinding::StaticRegisterNativesUMovieSceneSpawnableChaosCacheBinding()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneSpawnableChaosCacheBinding);
UClass* Z_Construct_UClass_UMovieSceneSpawnableChaosCacheBinding_NoRegister()
{
	return UMovieSceneSpawnableChaosCacheBinding::StaticClass();
}
struct Z_Construct_UClass_UMovieSceneSpawnableChaosCacheBinding_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n* An override of UMovieSceneSpawnableActorBinding that adds some custom behavior on Spawn\n* \n*/" },
		{ "DisplayName", "Spawnable Chaos Cache" },
		{ "IncludePath", "Chaos/Sequencer/MovieSceneSpawnableChaosCacheBinding.h" },
		{ "ModuleRelativePath", "Public/Chaos/Sequencer/MovieSceneSpawnableChaosCacheBinding.h" },
		{ "ToolTip", "* An override of UMovieSceneSpawnableActorBinding that adds some custom behavior on Spawn" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneSpawnableChaosCacheBinding>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMovieSceneSpawnableChaosCacheBinding_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieSceneSpawnableActorBinding,
	(UObject* (*)())Z_Construct_UPackage__Script_ChaosCaching,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSpawnableChaosCacheBinding_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneSpawnableChaosCacheBinding_Statics::ClassParams = {
	&UMovieSceneSpawnableChaosCacheBinding::StaticClass,
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
	0x002810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSpawnableChaosCacheBinding_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieSceneSpawnableChaosCacheBinding_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieSceneSpawnableChaosCacheBinding()
{
	if (!Z_Registration_Info_UClass_UMovieSceneSpawnableChaosCacheBinding.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneSpawnableChaosCacheBinding.OuterSingleton, Z_Construct_UClass_UMovieSceneSpawnableChaosCacheBinding_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieSceneSpawnableChaosCacheBinding.OuterSingleton;
}
template<> CHAOSCACHING_API UClass* StaticClass<UMovieSceneSpawnableChaosCacheBinding>()
{
	return UMovieSceneSpawnableChaosCacheBinding::StaticClass();
}
UMovieSceneSpawnableChaosCacheBinding::UMovieSceneSpawnableChaosCacheBinding(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneSpawnableChaosCacheBinding);
UMovieSceneSpawnableChaosCacheBinding::~UMovieSceneSpawnableChaosCacheBinding() {}
// End Class UMovieSceneSpawnableChaosCacheBinding

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosCaching_Source_ChaosCaching_Public_Chaos_Sequencer_MovieSceneSpawnableChaosCacheBinding_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneSpawnableChaosCacheBinding, UMovieSceneSpawnableChaosCacheBinding::StaticClass, TEXT("UMovieSceneSpawnableChaosCacheBinding"), &Z_Registration_Info_UClass_UMovieSceneSpawnableChaosCacheBinding, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneSpawnableChaosCacheBinding), 3420344958U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosCaching_Source_ChaosCaching_Public_Chaos_Sequencer_MovieSceneSpawnableChaosCacheBinding_h_930372762(TEXT("/Script/ChaosCaching"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosCaching_Source_ChaosCaching_Public_Chaos_Sequencer_MovieSceneSpawnableChaosCacheBinding_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosCaching_Source_ChaosCaching_Public_Chaos_Sequencer_MovieSceneSpawnableChaosCacheBinding_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
