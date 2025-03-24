// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FractureEngine/Public/FractureEngineUtility.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFractureEngineUtility() {}

// Begin Cross Module References
FRACTUREENGINE_API UEnum* Z_Construct_UEnum_FractureEngine_EFixTinyGeoGeometrySelectionMethod();
FRACTUREENGINE_API UEnum* Z_Construct_UEnum_FractureEngine_EFixTinyGeoMergeType();
FRACTUREENGINE_API UEnum* Z_Construct_UEnum_FractureEngine_EFixTinyGeoNeighborSelectionMethod();
FRACTUREENGINE_API UEnum* Z_Construct_UEnum_FractureEngine_EFixTinyGeoUseBoneSelection();
UPackage* Z_Construct_UPackage__Script_FractureEngine();
// End Cross Module References

// Begin Enum EFixTinyGeoMergeType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFixTinyGeoMergeType;
static UEnum* EFixTinyGeoMergeType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EFixTinyGeoMergeType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EFixTinyGeoMergeType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_FractureEngine_EFixTinyGeoMergeType, (UObject*)Z_Construct_UPackage__Script_FractureEngine(), TEXT("EFixTinyGeoMergeType"));
	}
	return Z_Registration_Info_UEnum_EFixTinyGeoMergeType.OuterSingleton;
}
template<> FRACTUREENGINE_API UEnum* StaticEnum<EFixTinyGeoMergeType>()
{
	return EFixTinyGeoMergeType_StaticEnum();
}
struct Z_Construct_UEnum_FractureEngine_EFixTinyGeoMergeType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "MergeClusters.DisplayName", "Merge Clusters" },
		{ "MergeClusters.Name", "EFixTinyGeoMergeType::MergeClusters" },
		{ "MergeGeometry.DisplayName", "Merge Geometry" },
		{ "MergeGeometry.Name", "EFixTinyGeoMergeType::MergeGeometry" },
		{ "ModuleRelativePath", "Public/FractureEngineUtility.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EFixTinyGeoMergeType::MergeGeometry", (int64)EFixTinyGeoMergeType::MergeGeometry },
		{ "EFixTinyGeoMergeType::MergeClusters", (int64)EFixTinyGeoMergeType::MergeClusters },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_FractureEngine_EFixTinyGeoMergeType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_FractureEngine,
	nullptr,
	"EFixTinyGeoMergeType",
	"EFixTinyGeoMergeType",
	Z_Construct_UEnum_FractureEngine_EFixTinyGeoMergeType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_FractureEngine_EFixTinyGeoMergeType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_FractureEngine_EFixTinyGeoMergeType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_FractureEngine_EFixTinyGeoMergeType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_FractureEngine_EFixTinyGeoMergeType()
{
	if (!Z_Registration_Info_UEnum_EFixTinyGeoMergeType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFixTinyGeoMergeType.InnerSingleton, Z_Construct_UEnum_FractureEngine_EFixTinyGeoMergeType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EFixTinyGeoMergeType.InnerSingleton;
}
// End Enum EFixTinyGeoMergeType

// Begin Enum EFixTinyGeoNeighborSelectionMethod
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFixTinyGeoNeighborSelectionMethod;
static UEnum* EFixTinyGeoNeighborSelectionMethod_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EFixTinyGeoNeighborSelectionMethod.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EFixTinyGeoNeighborSelectionMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_FractureEngine_EFixTinyGeoNeighborSelectionMethod, (UObject*)Z_Construct_UPackage__Script_FractureEngine(), TEXT("EFixTinyGeoNeighborSelectionMethod"));
	}
	return Z_Registration_Info_UEnum_EFixTinyGeoNeighborSelectionMethod.OuterSingleton;
}
template<> FRACTUREENGINE_API UEnum* StaticEnum<EFixTinyGeoNeighborSelectionMethod>()
{
	return EFixTinyGeoNeighborSelectionMethod_StaticEnum();
}
struct Z_Construct_UEnum_FractureEngine_EFixTinyGeoNeighborSelectionMethod_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "LargestNeighbor.Comment", "// Merge to the neighbor with the largest volume\n" },
		{ "LargestNeighbor.DisplayName", "Largest Neighbor" },
		{ "LargestNeighbor.Name", "EFixTinyGeoNeighborSelectionMethod::LargestNeighbor" },
		{ "LargestNeighbor.ToolTip", "Merge to the neighbor with the largest volume" },
		{ "ModuleRelativePath", "Public/FractureEngineUtility.h" },
		{ "NearestCenter.Comment", "// Merge to the neighbor with the closest center\n" },
		{ "NearestCenter.DisplayName", "Nearest Center" },
		{ "NearestCenter.Name", "EFixTinyGeoNeighborSelectionMethod::NearestCenter" },
		{ "NearestCenter.ToolTip", "Merge to the neighbor with the closest center" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EFixTinyGeoNeighborSelectionMethod::LargestNeighbor", (int64)EFixTinyGeoNeighborSelectionMethod::LargestNeighbor },
		{ "EFixTinyGeoNeighborSelectionMethod::NearestCenter", (int64)EFixTinyGeoNeighborSelectionMethod::NearestCenter },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_FractureEngine_EFixTinyGeoNeighborSelectionMethod_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_FractureEngine,
	nullptr,
	"EFixTinyGeoNeighborSelectionMethod",
	"EFixTinyGeoNeighborSelectionMethod",
	Z_Construct_UEnum_FractureEngine_EFixTinyGeoNeighborSelectionMethod_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_FractureEngine_EFixTinyGeoNeighborSelectionMethod_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_FractureEngine_EFixTinyGeoNeighborSelectionMethod_Statics::Enum_MetaDataParams), Z_Construct_UEnum_FractureEngine_EFixTinyGeoNeighborSelectionMethod_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_FractureEngine_EFixTinyGeoNeighborSelectionMethod()
{
	if (!Z_Registration_Info_UEnum_EFixTinyGeoNeighborSelectionMethod.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFixTinyGeoNeighborSelectionMethod.InnerSingleton, Z_Construct_UEnum_FractureEngine_EFixTinyGeoNeighborSelectionMethod_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EFixTinyGeoNeighborSelectionMethod.InnerSingleton;
}
// End Enum EFixTinyGeoNeighborSelectionMethod

// Begin Enum EFixTinyGeoUseBoneSelection
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFixTinyGeoUseBoneSelection;
static UEnum* EFixTinyGeoUseBoneSelection_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EFixTinyGeoUseBoneSelection.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EFixTinyGeoUseBoneSelection.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_FractureEngine_EFixTinyGeoUseBoneSelection, (UObject*)Z_Construct_UPackage__Script_FractureEngine(), TEXT("EFixTinyGeoUseBoneSelection"));
	}
	return Z_Registration_Info_UEnum_EFixTinyGeoUseBoneSelection.OuterSingleton;
}
template<> FRACTUREENGINE_API UEnum* StaticEnum<EFixTinyGeoUseBoneSelection>()
{
	return EFixTinyGeoUseBoneSelection_StaticEnum();
}
struct Z_Construct_UEnum_FractureEngine_EFixTinyGeoUseBoneSelection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AlsoMergeSelected.DisplayName", "Also Merge Selected" },
		{ "AlsoMergeSelected.Name", "EFixTinyGeoUseBoneSelection::AlsoMergeSelected" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/FractureEngineUtility.h" },
		{ "NoEffect.DisplayName", "No Effect" },
		{ "NoEffect.Name", "EFixTinyGeoUseBoneSelection::NoEffect" },
		{ "OnlyMergeSelected.DisplayName", "Only Merge Selected" },
		{ "OnlyMergeSelected.Name", "EFixTinyGeoUseBoneSelection::OnlyMergeSelected" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EFixTinyGeoUseBoneSelection::NoEffect", (int64)EFixTinyGeoUseBoneSelection::NoEffect },
		{ "EFixTinyGeoUseBoneSelection::AlsoMergeSelected", (int64)EFixTinyGeoUseBoneSelection::AlsoMergeSelected },
		{ "EFixTinyGeoUseBoneSelection::OnlyMergeSelected", (int64)EFixTinyGeoUseBoneSelection::OnlyMergeSelected },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_FractureEngine_EFixTinyGeoUseBoneSelection_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_FractureEngine,
	nullptr,
	"EFixTinyGeoUseBoneSelection",
	"EFixTinyGeoUseBoneSelection",
	Z_Construct_UEnum_FractureEngine_EFixTinyGeoUseBoneSelection_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_FractureEngine_EFixTinyGeoUseBoneSelection_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_FractureEngine_EFixTinyGeoUseBoneSelection_Statics::Enum_MetaDataParams), Z_Construct_UEnum_FractureEngine_EFixTinyGeoUseBoneSelection_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_FractureEngine_EFixTinyGeoUseBoneSelection()
{
	if (!Z_Registration_Info_UEnum_EFixTinyGeoUseBoneSelection.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFixTinyGeoUseBoneSelection.InnerSingleton, Z_Construct_UEnum_FractureEngine_EFixTinyGeoUseBoneSelection_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EFixTinyGeoUseBoneSelection.InnerSingleton;
}
// End Enum EFixTinyGeoUseBoneSelection

// Begin Enum EFixTinyGeoGeometrySelectionMethod
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFixTinyGeoGeometrySelectionMethod;
static UEnum* EFixTinyGeoGeometrySelectionMethod_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EFixTinyGeoGeometrySelectionMethod.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EFixTinyGeoGeometrySelectionMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_FractureEngine_EFixTinyGeoGeometrySelectionMethod, (UObject*)Z_Construct_UPackage__Script_FractureEngine(), TEXT("EFixTinyGeoGeometrySelectionMethod"));
	}
	return Z_Registration_Info_UEnum_EFixTinyGeoGeometrySelectionMethod.OuterSingleton;
}
template<> FRACTUREENGINE_API UEnum* StaticEnum<EFixTinyGeoGeometrySelectionMethod>()
{
	return EFixTinyGeoGeometrySelectionMethod_StaticEnum();
}
struct Z_Construct_UEnum_FractureEngine_EFixTinyGeoGeometrySelectionMethod_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/FractureEngineUtility.h" },
		{ "RelativeVolume.Comment", "// Select by cube root of volume relative to the overall shape's cube root of volume\n" },
		{ "RelativeVolume.DisplayName", "Relative Volume" },
		{ "RelativeVolume.Name", "EFixTinyGeoGeometrySelectionMethod::RelativeVolume" },
		{ "RelativeVolume.ToolTip", "Select by cube root of volume relative to the overall shape's cube root of volume" },
		{ "VolumeCubeRoot.Comment", "// Select by cube root of volume\n" },
		{ "VolumeCubeRoot.DisplayName", "Size" },
		{ "VolumeCubeRoot.Name", "EFixTinyGeoGeometrySelectionMethod::VolumeCubeRoot" },
		{ "VolumeCubeRoot.ToolTip", "Select by cube root of volume" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EFixTinyGeoGeometrySelectionMethod::VolumeCubeRoot", (int64)EFixTinyGeoGeometrySelectionMethod::VolumeCubeRoot },
		{ "EFixTinyGeoGeometrySelectionMethod::RelativeVolume", (int64)EFixTinyGeoGeometrySelectionMethod::RelativeVolume },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_FractureEngine_EFixTinyGeoGeometrySelectionMethod_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_FractureEngine,
	nullptr,
	"EFixTinyGeoGeometrySelectionMethod",
	"EFixTinyGeoGeometrySelectionMethod",
	Z_Construct_UEnum_FractureEngine_EFixTinyGeoGeometrySelectionMethod_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_FractureEngine_EFixTinyGeoGeometrySelectionMethod_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_FractureEngine_EFixTinyGeoGeometrySelectionMethod_Statics::Enum_MetaDataParams), Z_Construct_UEnum_FractureEngine_EFixTinyGeoGeometrySelectionMethod_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_FractureEngine_EFixTinyGeoGeometrySelectionMethod()
{
	if (!Z_Registration_Info_UEnum_EFixTinyGeoGeometrySelectionMethod.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFixTinyGeoGeometrySelectionMethod.InnerSingleton, Z_Construct_UEnum_FractureEngine_EFixTinyGeoGeometrySelectionMethod_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EFixTinyGeoGeometrySelectionMethod.InnerSingleton;
}
// End Enum EFixTinyGeoGeometrySelectionMethod

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Fracture_Source_FractureEngine_Public_FractureEngineUtility_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EFixTinyGeoMergeType_StaticEnum, TEXT("EFixTinyGeoMergeType"), &Z_Registration_Info_UEnum_EFixTinyGeoMergeType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 615145477U) },
		{ EFixTinyGeoNeighborSelectionMethod_StaticEnum, TEXT("EFixTinyGeoNeighborSelectionMethod"), &Z_Registration_Info_UEnum_EFixTinyGeoNeighborSelectionMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1767557541U) },
		{ EFixTinyGeoUseBoneSelection_StaticEnum, TEXT("EFixTinyGeoUseBoneSelection"), &Z_Registration_Info_UEnum_EFixTinyGeoUseBoneSelection, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1462676408U) },
		{ EFixTinyGeoGeometrySelectionMethod_StaticEnum, TEXT("EFixTinyGeoGeometrySelectionMethod"), &Z_Registration_Info_UEnum_EFixTinyGeoGeometrySelectionMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2945303395U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Fracture_Source_FractureEngine_Public_FractureEngineUtility_h_505542096(TEXT("/Script/FractureEngine"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Fracture_Source_FractureEngine_Public_FractureEngineUtility_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Fracture_Source_FractureEngine_Public_FractureEngineUtility_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
