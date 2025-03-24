// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HairStrandsCore/Public/GroomCreateBindingOptions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGroomCreateBindingOptions() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
GEOMETRYCACHE_API UClass* Z_Construct_UClass_UGeometryCache_NoRegister();
HAIRSTRANDSCORE_API UClass* Z_Construct_UClass_UGroomAsset_NoRegister();
HAIRSTRANDSCORE_API UClass* Z_Construct_UClass_UGroomCreateBindingOptions();
HAIRSTRANDSCORE_API UClass* Z_Construct_UClass_UGroomCreateBindingOptions_NoRegister();
HAIRSTRANDSCORE_API UEnum* Z_Construct_UEnum_HairStrandsCore_EGroomBindingMeshType();
UPackage* Z_Construct_UPackage__Script_HairStrandsCore();
// End Cross Module References

// Begin Class UGroomCreateBindingOptions
void UGroomCreateBindingOptions::StaticRegisterNativesUGroomCreateBindingOptions()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGroomCreateBindingOptions);
UClass* Z_Construct_UClass_UGroomCreateBindingOptions_NoRegister()
{
	return UGroomCreateBindingOptions::StaticClass();
}
struct Z_Construct_UClass_UGroomCreateBindingOptions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "AutoCollapseCategories", "Conversion" },
		{ "BlueprintType", "true" },
		{ "HideCategories", "Hidden" },
		{ "IncludePath", "GroomCreateBindingOptions.h" },
		{ "ModuleRelativePath", "Public/GroomCreateBindingOptions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroomAsset_MetaData[] = {
		{ "Comment", "/** Groom asset */" },
		{ "ModuleRelativePath", "Public/GroomCreateBindingOptions.h" },
		{ "ToolTip", "Groom asset" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroomBindingType_MetaData[] = {
		{ "Category", "BuildSettings" },
		{ "Comment", "/** Type of mesh to create groom binding for */" },
		{ "ModuleRelativePath", "Public/GroomCreateBindingOptions.h" },
		{ "ToolTip", "Type of mesh to create groom binding for" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceSkeletalMesh_MetaData[] = {
		{ "Category", "Conversion" },
		{ "Comment", "/** Skeletal mesh on which the groom has been authored. This is optional, and used only if the hair\n\x09\x09""binding is done a different mesh than the one which it has been authored, i.e., only if the curves \n\x09\x09roots and the surface geometry don't aligned and need to be wrapped/transformed. */" },
		{ "ModuleRelativePath", "Public/GroomCreateBindingOptions.h" },
		{ "ToolTip", "Skeletal mesh on which the groom has been authored. This is optional, and used only if the hair\n              binding is done a different mesh than the one which it has been authored, i.e., only if the curves\n              roots and the surface geometry don't aligned and need to be wrapped/transformed." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetSkeletalMesh_MetaData[] = {
		{ "Category", "BuildSettings" },
		{ "Comment", "/** Skeletal mesh on which the groom is attached to. */" },
		{ "ModuleRelativePath", "Public/GroomCreateBindingOptions.h" },
		{ "ToolTip", "Skeletal mesh on which the groom is attached to." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceGeometryCache_MetaData[] = {
		{ "Category", "Conversion" },
		{ "Comment", "/** GeometryCache on which the groom has been authored */" },
		{ "ModuleRelativePath", "Public/GroomCreateBindingOptions.h" },
		{ "ToolTip", "GeometryCache on which the groom has been authored" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetGeometryCache_MetaData[] = {
		{ "Category", "BuildSettings" },
		{ "Comment", "/** GeometryCache on which the groom is attached to. */" },
		{ "ModuleRelativePath", "Public/GroomCreateBindingOptions.h" },
		{ "ToolTip", "GeometryCache on which the groom is attached to." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumInterpolationPoints_MetaData[] = {
		{ "Category", "HairInterpolation" },
		{ "ClampMax", "100" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Number of points used for the rbf interpolation */" },
		{ "ModuleRelativePath", "Public/GroomCreateBindingOptions.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Number of points used for the rbf interpolation" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MatchingSection_MetaData[] = {
		{ "Category", "Conversion" },
		{ "Comment", "/** Section to pick to transfer the position */" },
		{ "ModuleRelativePath", "Public/GroomCreateBindingOptions.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Section to pick to transfer the position" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_GroomAsset;
	static const UECodeGen_Private::FBytePropertyParams NewProp_GroomBindingType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_GroomBindingType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceSkeletalMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetSkeletalMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceGeometryCache;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetGeometryCache;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumInterpolationPoints;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MatchingSection;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGroomCreateBindingOptions>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UGroomCreateBindingOptions_Statics::NewProp_GroomAsset = { "GroomAsset", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGroomCreateBindingOptions, GroomAsset), Z_Construct_UClass_UGroomAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroomAsset_MetaData), NewProp_GroomAsset_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGroomCreateBindingOptions_Statics::NewProp_GroomBindingType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UGroomCreateBindingOptions_Statics::NewProp_GroomBindingType = { "GroomBindingType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGroomCreateBindingOptions, GroomBindingType), Z_Construct_UEnum_HairStrandsCore_EGroomBindingMeshType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroomBindingType_MetaData), NewProp_GroomBindingType_MetaData) }; // 21879148
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGroomCreateBindingOptions_Statics::NewProp_SourceSkeletalMesh = { "SourceSkeletalMesh", nullptr, (EPropertyFlags)0x0114040000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGroomCreateBindingOptions, SourceSkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceSkeletalMesh_MetaData), NewProp_SourceSkeletalMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGroomCreateBindingOptions_Statics::NewProp_TargetSkeletalMesh = { "TargetSkeletalMesh", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGroomCreateBindingOptions, TargetSkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetSkeletalMesh_MetaData), NewProp_TargetSkeletalMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGroomCreateBindingOptions_Statics::NewProp_SourceGeometryCache = { "SourceGeometryCache", nullptr, (EPropertyFlags)0x0114040000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGroomCreateBindingOptions, SourceGeometryCache), Z_Construct_UClass_UGeometryCache_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceGeometryCache_MetaData), NewProp_SourceGeometryCache_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGroomCreateBindingOptions_Statics::NewProp_TargetGeometryCache = { "TargetGeometryCache", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGroomCreateBindingOptions, TargetGeometryCache), Z_Construct_UClass_UGeometryCache_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetGeometryCache_MetaData), NewProp_TargetGeometryCache_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGroomCreateBindingOptions_Statics::NewProp_NumInterpolationPoints = { "NumInterpolationPoints", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGroomCreateBindingOptions, NumInterpolationPoints), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumInterpolationPoints_MetaData), NewProp_NumInterpolationPoints_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGroomCreateBindingOptions_Statics::NewProp_MatchingSection = { "MatchingSection", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGroomCreateBindingOptions, MatchingSection), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MatchingSection_MetaData), NewProp_MatchingSection_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGroomCreateBindingOptions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomCreateBindingOptions_Statics::NewProp_GroomAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomCreateBindingOptions_Statics::NewProp_GroomBindingType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomCreateBindingOptions_Statics::NewProp_GroomBindingType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomCreateBindingOptions_Statics::NewProp_SourceSkeletalMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomCreateBindingOptions_Statics::NewProp_TargetSkeletalMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomCreateBindingOptions_Statics::NewProp_SourceGeometryCache,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomCreateBindingOptions_Statics::NewProp_TargetGeometryCache,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomCreateBindingOptions_Statics::NewProp_NumInterpolationPoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomCreateBindingOptions_Statics::NewProp_MatchingSection,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGroomCreateBindingOptions_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGroomCreateBindingOptions_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_HairStrandsCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGroomCreateBindingOptions_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGroomCreateBindingOptions_Statics::ClassParams = {
	&UGroomCreateBindingOptions::StaticClass,
	"EditorPerProjectUserSettings",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGroomCreateBindingOptions_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGroomCreateBindingOptions_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGroomCreateBindingOptions_Statics::Class_MetaDataParams), Z_Construct_UClass_UGroomCreateBindingOptions_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGroomCreateBindingOptions()
{
	if (!Z_Registration_Info_UClass_UGroomCreateBindingOptions.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGroomCreateBindingOptions.OuterSingleton, Z_Construct_UClass_UGroomCreateBindingOptions_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGroomCreateBindingOptions.OuterSingleton;
}
template<> HAIRSTRANDSCORE_API UClass* StaticClass<UGroomCreateBindingOptions>()
{
	return UGroomCreateBindingOptions::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGroomCreateBindingOptions);
UGroomCreateBindingOptions::~UGroomCreateBindingOptions() {}
// End Class UGroomCreateBindingOptions

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomCreateBindingOptions_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGroomCreateBindingOptions, UGroomCreateBindingOptions::StaticClass, TEXT("UGroomCreateBindingOptions"), &Z_Registration_Info_UClass_UGroomCreateBindingOptions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGroomCreateBindingOptions), 598434088U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomCreateBindingOptions_h_839262531(TEXT("/Script/HairStrandsCore"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomCreateBindingOptions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomCreateBindingOptions_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
