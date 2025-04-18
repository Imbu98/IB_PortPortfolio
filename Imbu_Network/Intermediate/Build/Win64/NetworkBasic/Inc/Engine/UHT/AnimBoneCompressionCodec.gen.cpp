// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Animation/AnimBoneCompressionCodec.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimBoneCompressionCodec() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_UAnimBoneCompressionCodec();
ENGINE_API UClass* Z_Construct_UClass_UAnimBoneCompressionCodec_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UAnimBoneCompressionCodec
void UAnimBoneCompressionCodec::StaticRegisterNativesUAnimBoneCompressionCodec()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimBoneCompressionCodec);
UClass* Z_Construct_UClass_UAnimBoneCompressionCodec_NoRegister()
{
	return UAnimBoneCompressionCodec::StaticClass();
}
struct Z_Construct_UClass_UAnimBoneCompressionCodec_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/*\n * Base class for all bone compression codecs.\n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Animation/AnimBoneCompressionCodec.h" },
		{ "ModuleRelativePath", "Classes/Animation/AnimBoneCompressionCodec.h" },
		{ "ToolTip", "* Base class for all bone compression codecs." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[] = {
		{ "Category", "Compression" },
		{ "Comment", "/** Description for this codec. */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimBoneCompressionCodec.h" },
		{ "ToolTip", "Description for this codec." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Description;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimBoneCompressionCodec>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAnimBoneCompressionCodec_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimBoneCompressionCodec, Description), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Description_MetaData), NewProp_Description_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimBoneCompressionCodec_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimBoneCompressionCodec_Statics::NewProp_Description,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimBoneCompressionCodec_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAnimBoneCompressionCodec_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimBoneCompressionCodec_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimBoneCompressionCodec_Statics::ClassParams = {
	&UAnimBoneCompressionCodec::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAnimBoneCompressionCodec_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAnimBoneCompressionCodec_Statics::PropPointers),
	0,
	0x000810A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimBoneCompressionCodec_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimBoneCompressionCodec_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAnimBoneCompressionCodec()
{
	if (!Z_Registration_Info_UClass_UAnimBoneCompressionCodec.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimBoneCompressionCodec.OuterSingleton, Z_Construct_UClass_UAnimBoneCompressionCodec_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAnimBoneCompressionCodec.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UAnimBoneCompressionCodec>()
{
	return UAnimBoneCompressionCodec::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimBoneCompressionCodec);
UAnimBoneCompressionCodec::~UAnimBoneCompressionCodec() {}
// End Class UAnimBoneCompressionCodec

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimBoneCompressionCodec_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAnimBoneCompressionCodec, UAnimBoneCompressionCodec::StaticClass, TEXT("UAnimBoneCompressionCodec"), &Z_Registration_Info_UClass_UAnimBoneCompressionCodec, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimBoneCompressionCodec), 4275319690U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimBoneCompressionCodec_h_354738186(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimBoneCompressionCodec_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimBoneCompressionCodec_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
