// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LiveLink/Public/Remapper/LiveLinkSkeletonRemapper.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiveLinkSkeletonRemapper() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
LIVELINK_API UClass* Z_Construct_UClass_ULiveLinkSkeletonRemapper();
LIVELINK_API UClass* Z_Construct_UClass_ULiveLinkSkeletonRemapper_NoRegister();
LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkSubjectRemapper();
UPackage* Z_Construct_UPackage__Script_LiveLink();
// End Cross Module References

// Begin Class ULiveLinkSkeletonRemapper
void ULiveLinkSkeletonRemapper::StaticRegisterNativesULiveLinkSkeletonRemapper()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULiveLinkSkeletonRemapper);
UClass* Z_Construct_UClass_ULiveLinkSkeletonRemapper_NoRegister()
{
	return ULiveLinkSkeletonRemapper::StaticClass();
}
struct Z_Construct_UClass_ULiveLinkSkeletonRemapper_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Remapper/LiveLinkSkeletonRemapper.h" },
		{ "ModuleRelativePath", "Public/Remapper/LiveLinkSkeletonRemapper.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReferenceSkeleton_MetaData[] = {
		{ "Category", "Remapper" },
		{ "DisplayThumbnail", "false" },
		{ "ModuleRelativePath", "Public/Remapper/LiveLinkSkeletonRemapper.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_ReferenceSkeleton;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULiveLinkSkeletonRemapper>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_ULiveLinkSkeletonRemapper_Statics::NewProp_ReferenceSkeleton = { "ReferenceSkeleton", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULiveLinkSkeletonRemapper, ReferenceSkeleton), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReferenceSkeleton_MetaData), NewProp_ReferenceSkeleton_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULiveLinkSkeletonRemapper_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkSkeletonRemapper_Statics::NewProp_ReferenceSkeleton,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkSkeletonRemapper_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULiveLinkSkeletonRemapper_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ULiveLinkSubjectRemapper,
	(UObject* (*)())Z_Construct_UPackage__Script_LiveLink,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkSkeletonRemapper_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULiveLinkSkeletonRemapper_Statics::ClassParams = {
	&ULiveLinkSkeletonRemapper::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ULiveLinkSkeletonRemapper_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkSkeletonRemapper_Statics::PropPointers),
	0,
	0x001000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkSkeletonRemapper_Statics::Class_MetaDataParams), Z_Construct_UClass_ULiveLinkSkeletonRemapper_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULiveLinkSkeletonRemapper()
{
	if (!Z_Registration_Info_UClass_ULiveLinkSkeletonRemapper.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULiveLinkSkeletonRemapper.OuterSingleton, Z_Construct_UClass_ULiveLinkSkeletonRemapper_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULiveLinkSkeletonRemapper.OuterSingleton;
}
template<> LIVELINK_API UClass* StaticClass<ULiveLinkSkeletonRemapper>()
{
	return ULiveLinkSkeletonRemapper::StaticClass();
}
ULiveLinkSkeletonRemapper::ULiveLinkSkeletonRemapper(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULiveLinkSkeletonRemapper);
ULiveLinkSkeletonRemapper::~ULiveLinkSkeletonRemapper() {}
// End Class ULiveLinkSkeletonRemapper

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_Remapper_LiveLinkSkeletonRemapper_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULiveLinkSkeletonRemapper, ULiveLinkSkeletonRemapper::StaticClass, TEXT("ULiveLinkSkeletonRemapper"), &Z_Registration_Info_UClass_ULiveLinkSkeletonRemapper, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULiveLinkSkeletonRemapper), 4282546170U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_Remapper_LiveLinkSkeletonRemapper_h_1209967055(TEXT("/Script/LiveLink"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_Remapper_LiveLinkSkeletonRemapper_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_Remapper_LiveLinkSkeletonRemapper_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
