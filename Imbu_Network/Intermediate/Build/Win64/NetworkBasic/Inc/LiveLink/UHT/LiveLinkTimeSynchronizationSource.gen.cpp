// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LiveLink/Public/LiveLinkTimeSynchronizationSource.h"
#include "Runtime/LiveLinkInterface/Public/LiveLinkTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiveLinkTimeSynchronizationSource() {}

// Begin Cross Module References
LIVELINK_API UClass* Z_Construct_UClass_ULiveLinkTimeSynchronizationSource();
LIVELINK_API UClass* Z_Construct_UClass_ULiveLinkTimeSynchronizationSource_NoRegister();
LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkSubjectName();
TIMEMANAGEMENT_API UClass* Z_Construct_UClass_UTimeSynchronizationSource();
UPackage* Z_Construct_UPackage__Script_LiveLink();
// End Cross Module References

// Begin Class ULiveLinkTimeSynchronizationSource
void ULiveLinkTimeSynchronizationSource::StaticRegisterNativesULiveLinkTimeSynchronizationSource()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULiveLinkTimeSynchronizationSource);
UClass* Z_Construct_UClass_ULiveLinkTimeSynchronizationSource_NoRegister()
{
	return ULiveLinkTimeSynchronizationSource::StaticClass();
}
struct Z_Construct_UClass_ULiveLinkTimeSynchronizationSource_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "LiveLinkTimeSynchronizationSource.h" },
		{ "ModuleRelativePath", "Public/LiveLinkTimeSynchronizationSource.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SubjectName_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "ModuleRelativePath", "Public/LiveLinkTimeSynchronizationSource.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SubjectName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULiveLinkTimeSynchronizationSource>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULiveLinkTimeSynchronizationSource_Statics::NewProp_SubjectName = { "SubjectName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULiveLinkTimeSynchronizationSource, SubjectName), Z_Construct_UScriptStruct_FLiveLinkSubjectName, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SubjectName_MetaData), NewProp_SubjectName_MetaData) }; // 463217522
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULiveLinkTimeSynchronizationSource_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkTimeSynchronizationSource_Statics::NewProp_SubjectName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkTimeSynchronizationSource_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULiveLinkTimeSynchronizationSource_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UTimeSynchronizationSource,
	(UObject* (*)())Z_Construct_UPackage__Script_LiveLink,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkTimeSynchronizationSource_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULiveLinkTimeSynchronizationSource_Statics::ClassParams = {
	&ULiveLinkTimeSynchronizationSource::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ULiveLinkTimeSynchronizationSource_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkTimeSynchronizationSource_Statics::PropPointers),
	0,
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkTimeSynchronizationSource_Statics::Class_MetaDataParams), Z_Construct_UClass_ULiveLinkTimeSynchronizationSource_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULiveLinkTimeSynchronizationSource()
{
	if (!Z_Registration_Info_UClass_ULiveLinkTimeSynchronizationSource.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULiveLinkTimeSynchronizationSource.OuterSingleton, Z_Construct_UClass_ULiveLinkTimeSynchronizationSource_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULiveLinkTimeSynchronizationSource.OuterSingleton;
}
template<> LIVELINK_API UClass* StaticClass<ULiveLinkTimeSynchronizationSource>()
{
	return ULiveLinkTimeSynchronizationSource::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULiveLinkTimeSynchronizationSource);
ULiveLinkTimeSynchronizationSource::~ULiveLinkTimeSynchronizationSource() {}
// End Class ULiveLinkTimeSynchronizationSource

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkTimeSynchronizationSource_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULiveLinkTimeSynchronizationSource, ULiveLinkTimeSynchronizationSource::StaticClass, TEXT("ULiveLinkTimeSynchronizationSource"), &Z_Registration_Info_UClass_ULiveLinkTimeSynchronizationSource, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULiveLinkTimeSynchronizationSource), 3716214751U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkTimeSynchronizationSource_h_732145996(TEXT("/Script/LiveLink"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkTimeSynchronizationSource_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkTimeSynchronizationSource_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
