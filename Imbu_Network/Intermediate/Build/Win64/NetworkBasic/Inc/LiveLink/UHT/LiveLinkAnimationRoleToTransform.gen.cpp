// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LiveLink/Public/Translator/LiveLinkAnimationRoleToTransform.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiveLinkAnimationRoleToTransform() {}

// Begin Cross Module References
LIVELINK_API UClass* Z_Construct_UClass_ULiveLinkAnimationRoleToTransform();
LIVELINK_API UClass* Z_Construct_UClass_ULiveLinkAnimationRoleToTransform_NoRegister();
LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkFrameTranslator();
UPackage* Z_Construct_UPackage__Script_LiveLink();
// End Cross Module References

// Begin Class ULiveLinkAnimationRoleToTransform
void ULiveLinkAnimationRoleToTransform::StaticRegisterNativesULiveLinkAnimationRoleToTransform()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULiveLinkAnimationRoleToTransform);
UClass* Z_Construct_UClass_ULiveLinkAnimationRoleToTransform_NoRegister()
{
	return ULiveLinkAnimationRoleToTransform::StaticClass();
}
struct Z_Construct_UClass_ULiveLinkAnimationRoleToTransform_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Basic object to translate data from one role to another\n */" },
		{ "DisplayName", "Animation To Transform" },
		{ "IncludePath", "Translator/LiveLinkAnimationRoleToTransform.h" },
		{ "ModuleRelativePath", "Public/Translator/LiveLinkAnimationRoleToTransform.h" },
		{ "ToolTip", "Basic object to translate data from one role to another" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "ModuleRelativePath", "Public/Translator/LiveLinkAnimationRoleToTransform.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULiveLinkAnimationRoleToTransform>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ULiveLinkAnimationRoleToTransform_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULiveLinkAnimationRoleToTransform, BoneName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoneName_MetaData), NewProp_BoneName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULiveLinkAnimationRoleToTransform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkAnimationRoleToTransform_Statics::NewProp_BoneName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkAnimationRoleToTransform_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULiveLinkAnimationRoleToTransform_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ULiveLinkFrameTranslator,
	(UObject* (*)())Z_Construct_UPackage__Script_LiveLink,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkAnimationRoleToTransform_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULiveLinkAnimationRoleToTransform_Statics::ClassParams = {
	&ULiveLinkAnimationRoleToTransform::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ULiveLinkAnimationRoleToTransform_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkAnimationRoleToTransform_Statics::PropPointers),
	0,
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkAnimationRoleToTransform_Statics::Class_MetaDataParams), Z_Construct_UClass_ULiveLinkAnimationRoleToTransform_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULiveLinkAnimationRoleToTransform()
{
	if (!Z_Registration_Info_UClass_ULiveLinkAnimationRoleToTransform.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULiveLinkAnimationRoleToTransform.OuterSingleton, Z_Construct_UClass_ULiveLinkAnimationRoleToTransform_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULiveLinkAnimationRoleToTransform.OuterSingleton;
}
template<> LIVELINK_API UClass* StaticClass<ULiveLinkAnimationRoleToTransform>()
{
	return ULiveLinkAnimationRoleToTransform::StaticClass();
}
ULiveLinkAnimationRoleToTransform::ULiveLinkAnimationRoleToTransform(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULiveLinkAnimationRoleToTransform);
ULiveLinkAnimationRoleToTransform::~ULiveLinkAnimationRoleToTransform() {}
// End Class ULiveLinkAnimationRoleToTransform

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_Translator_LiveLinkAnimationRoleToTransform_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULiveLinkAnimationRoleToTransform, ULiveLinkAnimationRoleToTransform::StaticClass, TEXT("ULiveLinkAnimationRoleToTransform"), &Z_Registration_Info_UClass_ULiveLinkAnimationRoleToTransform, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULiveLinkAnimationRoleToTransform), 1812004248U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_Translator_LiveLinkAnimationRoleToTransform_h_424339779(TEXT("/Script/LiveLink"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_Translator_LiveLinkAnimationRoleToTransform_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_Translator_LiveLinkAnimationRoleToTransform_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
