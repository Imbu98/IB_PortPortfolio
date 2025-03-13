// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HairStrandsCore/Public/GroomImportOptions.h"
#include "HairStrandsCore/Public/GroomAssetInterpolation.h"
#include "HairStrandsCore/Public/GroomSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGroomImportOptions() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
HAIRSTRANDSCORE_API UClass* Z_Construct_UClass_UGroomHairGroupsPreview();
HAIRSTRANDSCORE_API UClass* Z_Construct_UClass_UGroomHairGroupsPreview_NoRegister();
HAIRSTRANDSCORE_API UClass* Z_Construct_UClass_UGroomImportOptions();
HAIRSTRANDSCORE_API UClass* Z_Construct_UClass_UGroomImportOptions_NoRegister();
HAIRSTRANDSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGroomConversionSettings();
HAIRSTRANDSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGroomHairGroupPreview();
HAIRSTRANDSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FHairGroupsInterpolation();
UPackage* Z_Construct_UPackage__Script_HairStrandsCore();
// End Cross Module References

// Begin Class UGroomImportOptions
void UGroomImportOptions::StaticRegisterNativesUGroomImportOptions()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGroomImportOptions);
UClass* Z_Construct_UClass_UGroomImportOptions_NoRegister()
{
	return UGroomImportOptions::StaticClass();
}
struct Z_Construct_UClass_UGroomImportOptions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Hidden" },
		{ "IncludePath", "GroomImportOptions.h" },
		{ "ModuleRelativePath", "Public/GroomImportOptions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConversionSettings_MetaData[] = {
		{ "Category", "Conversion" },
		{ "ModuleRelativePath", "Public/GroomImportOptions.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InterpolationSettings_MetaData[] = {
		{ "Category", "Hidden" },
		{ "Comment", "/* Interpolation settings per group */" },
		{ "ModuleRelativePath", "Public/GroomImportOptions.h" },
		{ "ToolTip", "Interpolation settings per group" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ConversionSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InterpolationSettings_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InterpolationSettings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGroomImportOptions>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGroomImportOptions_Statics::NewProp_ConversionSettings = { "ConversionSettings", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGroomImportOptions, ConversionSettings), Z_Construct_UScriptStruct_FGroomConversionSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConversionSettings_MetaData), NewProp_ConversionSettings_MetaData) }; // 3627081983
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGroomImportOptions_Statics::NewProp_InterpolationSettings_Inner = { "InterpolationSettings", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FHairGroupsInterpolation, METADATA_PARAMS(0, nullptr) }; // 2997172139
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGroomImportOptions_Statics::NewProp_InterpolationSettings = { "InterpolationSettings", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGroomImportOptions, InterpolationSettings), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InterpolationSettings_MetaData), NewProp_InterpolationSettings_MetaData) }; // 2997172139
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGroomImportOptions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomImportOptions_Statics::NewProp_ConversionSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomImportOptions_Statics::NewProp_InterpolationSettings_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomImportOptions_Statics::NewProp_InterpolationSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGroomImportOptions_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGroomImportOptions_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_HairStrandsCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGroomImportOptions_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGroomImportOptions_Statics::ClassParams = {
	&UGroomImportOptions::StaticClass,
	"EditorPerProjectUserSettings",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGroomImportOptions_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGroomImportOptions_Statics::PropPointers),
	0,
	0x001000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGroomImportOptions_Statics::Class_MetaDataParams), Z_Construct_UClass_UGroomImportOptions_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGroomImportOptions()
{
	if (!Z_Registration_Info_UClass_UGroomImportOptions.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGroomImportOptions.OuterSingleton, Z_Construct_UClass_UGroomImportOptions_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGroomImportOptions.OuterSingleton;
}
template<> HAIRSTRANDSCORE_API UClass* StaticClass<UGroomImportOptions>()
{
	return UGroomImportOptions::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGroomImportOptions);
UGroomImportOptions::~UGroomImportOptions() {}
// End Class UGroomImportOptions

// Begin ScriptStruct FGroomHairGroupPreview
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GroomHairGroupPreview;
class UScriptStruct* FGroomHairGroupPreview::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GroomHairGroupPreview.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GroomHairGroupPreview.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGroomHairGroupPreview, (UObject*)Z_Construct_UPackage__Script_HairStrandsCore(), TEXT("GroomHairGroupPreview"));
	}
	return Z_Registration_Info_UScriptStruct_GroomHairGroupPreview.OuterSingleton;
}
template<> HAIRSTRANDSCORE_API UScriptStruct* StaticStruct<FGroomHairGroupPreview>()
{
	return FGroomHairGroupPreview::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGroomHairGroupPreview_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GroomImportOptions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroupName_MetaData[] = {
		{ "Category", "Preview" },
		{ "ModuleRelativePath", "Public/GroomImportOptions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroupID_MetaData[] = {
		{ "Category", "Preview" },
		{ "ModuleRelativePath", "Public/GroomImportOptions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurveCount_MetaData[] = {
		{ "Category", "Preview" },
		{ "ModuleRelativePath", "Public/GroomImportOptions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GuideCount_MetaData[] = {
		{ "Category", "Preview" },
		{ "ModuleRelativePath", "Public/GroomImportOptions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Attributes_MetaData[] = {
		{ "ModuleRelativePath", "Public/GroomImportOptions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeFlags_MetaData[] = {
		{ "ModuleRelativePath", "Public/GroomImportOptions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Flags_MetaData[] = {
		{ "ModuleRelativePath", "Public/GroomImportOptions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InterpolationSettings_MetaData[] = {
		{ "Category", "Preview" },
		{ "ModuleRelativePath", "Public/GroomImportOptions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_GroupName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_GroupID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurveCount;
	static const UECodeGen_Private::FIntPropertyParams NewProp_GuideCount;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_Attributes;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_AttributeFlags;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_Flags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InterpolationSettings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGroomHairGroupPreview>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FGroomHairGroupPreview_Statics::NewProp_GroupName = { "GroupName", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGroomHairGroupPreview, GroupName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroupName_MetaData), NewProp_GroupName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGroomHairGroupPreview_Statics::NewProp_GroupID = { "GroupID", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGroomHairGroupPreview, GroupID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroupID_MetaData), NewProp_GroupID_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGroomHairGroupPreview_Statics::NewProp_CurveCount = { "CurveCount", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGroomHairGroupPreview, CurveCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurveCount_MetaData), NewProp_CurveCount_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGroomHairGroupPreview_Statics::NewProp_GuideCount = { "GuideCount", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGroomHairGroupPreview, GuideCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GuideCount_MetaData), NewProp_GuideCount_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FGroomHairGroupPreview_Statics::NewProp_Attributes = { "Attributes", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGroomHairGroupPreview, Attributes), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Attributes_MetaData), NewProp_Attributes_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FGroomHairGroupPreview_Statics::NewProp_AttributeFlags = { "AttributeFlags", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGroomHairGroupPreview, AttributeFlags), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeFlags_MetaData), NewProp_AttributeFlags_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FGroomHairGroupPreview_Statics::NewProp_Flags = { "Flags", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGroomHairGroupPreview, Flags), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Flags_MetaData), NewProp_Flags_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGroomHairGroupPreview_Statics::NewProp_InterpolationSettings = { "InterpolationSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGroomHairGroupPreview, InterpolationSettings), Z_Construct_UScriptStruct_FHairGroupsInterpolation, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InterpolationSettings_MetaData), NewProp_InterpolationSettings_MetaData) }; // 2997172139
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGroomHairGroupPreview_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroomHairGroupPreview_Statics::NewProp_GroupName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroomHairGroupPreview_Statics::NewProp_GroupID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroomHairGroupPreview_Statics::NewProp_CurveCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroomHairGroupPreview_Statics::NewProp_GuideCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroomHairGroupPreview_Statics::NewProp_Attributes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroomHairGroupPreview_Statics::NewProp_AttributeFlags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroomHairGroupPreview_Statics::NewProp_Flags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroomHairGroupPreview_Statics::NewProp_InterpolationSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroomHairGroupPreview_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGroomHairGroupPreview_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_HairStrandsCore,
	nullptr,
	&NewStructOps,
	"GroomHairGroupPreview",
	Z_Construct_UScriptStruct_FGroomHairGroupPreview_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroomHairGroupPreview_Statics::PropPointers),
	sizeof(FGroomHairGroupPreview),
	alignof(FGroomHairGroupPreview),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroomHairGroupPreview_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGroomHairGroupPreview_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGroomHairGroupPreview()
{
	if (!Z_Registration_Info_UScriptStruct_GroomHairGroupPreview.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GroomHairGroupPreview.InnerSingleton, Z_Construct_UScriptStruct_FGroomHairGroupPreview_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GroomHairGroupPreview.InnerSingleton;
}
// End ScriptStruct FGroomHairGroupPreview

// Begin Class UGroomHairGroupsPreview
void UGroomHairGroupsPreview::StaticRegisterNativesUGroomHairGroupsPreview()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGroomHairGroupsPreview);
UClass* Z_Construct_UClass_UGroomHairGroupsPreview_NoRegister()
{
	return UGroomHairGroupsPreview::StaticClass();
}
struct Z_Construct_UClass_UGroomHairGroupsPreview_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Hidden" },
		{ "IncludePath", "GroomImportOptions.h" },
		{ "ModuleRelativePath", "Public/GroomImportOptions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Groups_MetaData[] = {
		{ "Category", "Preview" },
		{ "ModuleRelativePath", "Public/GroomImportOptions.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Groups_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Groups;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGroomHairGroupsPreview>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGroomHairGroupsPreview_Statics::NewProp_Groups_Inner = { "Groups", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGroomHairGroupPreview, METADATA_PARAMS(0, nullptr) }; // 2908672956
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGroomHairGroupsPreview_Statics::NewProp_Groups = { "Groups", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGroomHairGroupsPreview, Groups), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Groups_MetaData), NewProp_Groups_MetaData) }; // 2908672956
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGroomHairGroupsPreview_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomHairGroupsPreview_Statics::NewProp_Groups_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomHairGroupsPreview_Statics::NewProp_Groups,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGroomHairGroupsPreview_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGroomHairGroupsPreview_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_HairStrandsCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGroomHairGroupsPreview_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGroomHairGroupsPreview_Statics::ClassParams = {
	&UGroomHairGroupsPreview::StaticClass,
	"EditorPerProjectUserSettings",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGroomHairGroupsPreview_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGroomHairGroupsPreview_Statics::PropPointers),
	0,
	0x001000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGroomHairGroupsPreview_Statics::Class_MetaDataParams), Z_Construct_UClass_UGroomHairGroupsPreview_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGroomHairGroupsPreview()
{
	if (!Z_Registration_Info_UClass_UGroomHairGroupsPreview.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGroomHairGroupsPreview.OuterSingleton, Z_Construct_UClass_UGroomHairGroupsPreview_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGroomHairGroupsPreview.OuterSingleton;
}
template<> HAIRSTRANDSCORE_API UClass* StaticClass<UGroomHairGroupsPreview>()
{
	return UGroomHairGroupsPreview::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGroomHairGroupsPreview);
UGroomHairGroupsPreview::~UGroomHairGroupsPreview() {}
// End Class UGroomHairGroupsPreview

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomImportOptions_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FGroomHairGroupPreview::StaticStruct, Z_Construct_UScriptStruct_FGroomHairGroupPreview_Statics::NewStructOps, TEXT("GroomHairGroupPreview"), &Z_Registration_Info_UScriptStruct_GroomHairGroupPreview, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGroomHairGroupPreview), 2908672956U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGroomImportOptions, UGroomImportOptions::StaticClass, TEXT("UGroomImportOptions"), &Z_Registration_Info_UClass_UGroomImportOptions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGroomImportOptions), 3657559534U) },
		{ Z_Construct_UClass_UGroomHairGroupsPreview, UGroomHairGroupsPreview::StaticClass, TEXT("UGroomHairGroupsPreview"), &Z_Registration_Info_UClass_UGroomHairGroupsPreview, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGroomHairGroupsPreview), 1254750094U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomImportOptions_h_2678218612(TEXT("/Script/HairStrandsCore"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomImportOptions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomImportOptions_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomImportOptions_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomImportOptions_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
