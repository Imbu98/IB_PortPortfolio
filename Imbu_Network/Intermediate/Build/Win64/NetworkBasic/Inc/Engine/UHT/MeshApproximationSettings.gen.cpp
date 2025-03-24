// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/MeshMerge/MeshApproximationSettings.h"
#include "Runtime/Engine/Classes/Engine/MaterialMerging.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeshApproximationSettings() {}

// Begin Cross Module References
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMeshApproximationBaseCappingType();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMeshApproximationGroundPlaneClippingPolicy();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMeshApproximationSimplificationPolicy();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMeshApproximationType();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMeshApproximationUVGenerationPolicy();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ENaniteFallbackTarget();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EOccludedGeometryFilteringPolicy();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialProxySettings();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMeshApproximationSettings();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Enum EMeshApproximationType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMeshApproximationType;
static UEnum* EMeshApproximationType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMeshApproximationType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMeshApproximationType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EMeshApproximationType, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EMeshApproximationType"));
	}
	return Z_Registration_Info_UEnum_EMeshApproximationType.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<EMeshApproximationType>()
{
	return EMeshApproximationType_StaticEnum();
}
struct Z_Construct_UEnum_Engine_EMeshApproximationType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "MeshAndMaterials.Name", "EMeshApproximationType::MeshAndMaterials" },
		{ "MeshShapeOnly.Name", "EMeshApproximationType::MeshShapeOnly" },
		{ "ModuleRelativePath", "Public/MeshMerge/MeshApproximationSettings.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMeshApproximationType::MeshAndMaterials", (int64)EMeshApproximationType::MeshAndMaterials },
		{ "EMeshApproximationType::MeshShapeOnly", (int64)EMeshApproximationType::MeshShapeOnly },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EMeshApproximationType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"EMeshApproximationType",
	"EMeshApproximationType",
	Z_Construct_UEnum_Engine_EMeshApproximationType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EMeshApproximationType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EMeshApproximationType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_EMeshApproximationType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_EMeshApproximationType()
{
	if (!Z_Registration_Info_UEnum_EMeshApproximationType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMeshApproximationType.InnerSingleton, Z_Construct_UEnum_Engine_EMeshApproximationType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMeshApproximationType.InnerSingleton;
}
// End Enum EMeshApproximationType

// Begin Enum EMeshApproximationBaseCappingType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMeshApproximationBaseCappingType;
static UEnum* EMeshApproximationBaseCappingType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMeshApproximationBaseCappingType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMeshApproximationBaseCappingType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EMeshApproximationBaseCappingType, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EMeshApproximationBaseCappingType"));
	}
	return Z_Registration_Info_UEnum_EMeshApproximationBaseCappingType.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<EMeshApproximationBaseCappingType>()
{
	return EMeshApproximationBaseCappingType_StaticEnum();
}
struct Z_Construct_UEnum_Engine_EMeshApproximationBaseCappingType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ConvexPolygon.Name", "EMeshApproximationBaseCappingType::ConvexPolygon" },
		{ "ConvexSolid.Name", "EMeshApproximationBaseCappingType::ConvexSolid" },
		{ "ModuleRelativePath", "Public/MeshMerge/MeshApproximationSettings.h" },
		{ "NoBaseCapping.Name", "EMeshApproximationBaseCappingType::NoBaseCapping" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMeshApproximationBaseCappingType::NoBaseCapping", (int64)EMeshApproximationBaseCappingType::NoBaseCapping },
		{ "EMeshApproximationBaseCappingType::ConvexPolygon", (int64)EMeshApproximationBaseCappingType::ConvexPolygon },
		{ "EMeshApproximationBaseCappingType::ConvexSolid", (int64)EMeshApproximationBaseCappingType::ConvexSolid },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EMeshApproximationBaseCappingType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"EMeshApproximationBaseCappingType",
	"EMeshApproximationBaseCappingType",
	Z_Construct_UEnum_Engine_EMeshApproximationBaseCappingType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EMeshApproximationBaseCappingType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EMeshApproximationBaseCappingType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_EMeshApproximationBaseCappingType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_EMeshApproximationBaseCappingType()
{
	if (!Z_Registration_Info_UEnum_EMeshApproximationBaseCappingType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMeshApproximationBaseCappingType.InnerSingleton, Z_Construct_UEnum_Engine_EMeshApproximationBaseCappingType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMeshApproximationBaseCappingType.InnerSingleton;
}
// End Enum EMeshApproximationBaseCappingType

// Begin Enum EOccludedGeometryFilteringPolicy
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOccludedGeometryFilteringPolicy;
static UEnum* EOccludedGeometryFilteringPolicy_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOccludedGeometryFilteringPolicy.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOccludedGeometryFilteringPolicy.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EOccludedGeometryFilteringPolicy, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EOccludedGeometryFilteringPolicy"));
	}
	return Z_Registration_Info_UEnum_EOccludedGeometryFilteringPolicy.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<EOccludedGeometryFilteringPolicy>()
{
	return EOccludedGeometryFilteringPolicy_StaticEnum();
}
struct Z_Construct_UEnum_Engine_EOccludedGeometryFilteringPolicy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MeshMerge/MeshApproximationSettings.h" },
		{ "NoOcclusionFiltering.Name", "EOccludedGeometryFilteringPolicy::NoOcclusionFiltering" },
		{ "VisibilityBasedFiltering.Name", "EOccludedGeometryFilteringPolicy::VisibilityBasedFiltering" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOccludedGeometryFilteringPolicy::NoOcclusionFiltering", (int64)EOccludedGeometryFilteringPolicy::NoOcclusionFiltering },
		{ "EOccludedGeometryFilteringPolicy::VisibilityBasedFiltering", (int64)EOccludedGeometryFilteringPolicy::VisibilityBasedFiltering },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EOccludedGeometryFilteringPolicy_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"EOccludedGeometryFilteringPolicy",
	"EOccludedGeometryFilteringPolicy",
	Z_Construct_UEnum_Engine_EOccludedGeometryFilteringPolicy_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EOccludedGeometryFilteringPolicy_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EOccludedGeometryFilteringPolicy_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_EOccludedGeometryFilteringPolicy_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_EOccludedGeometryFilteringPolicy()
{
	if (!Z_Registration_Info_UEnum_EOccludedGeometryFilteringPolicy.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOccludedGeometryFilteringPolicy.InnerSingleton, Z_Construct_UEnum_Engine_EOccludedGeometryFilteringPolicy_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOccludedGeometryFilteringPolicy.InnerSingleton;
}
// End Enum EOccludedGeometryFilteringPolicy

// Begin Enum EMeshApproximationSimplificationPolicy
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMeshApproximationSimplificationPolicy;
static UEnum* EMeshApproximationSimplificationPolicy_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMeshApproximationSimplificationPolicy.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMeshApproximationSimplificationPolicy.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EMeshApproximationSimplificationPolicy, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EMeshApproximationSimplificationPolicy"));
	}
	return Z_Registration_Info_UEnum_EMeshApproximationSimplificationPolicy.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<EMeshApproximationSimplificationPolicy>()
{
	return EMeshApproximationSimplificationPolicy_StaticEnum();
}
struct Z_Construct_UEnum_Engine_EMeshApproximationSimplificationPolicy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "FixedTriangleCount.Name", "EMeshApproximationSimplificationPolicy::FixedTriangleCount" },
		{ "GeometricTolerance.Name", "EMeshApproximationSimplificationPolicy::GeometricTolerance" },
		{ "ModuleRelativePath", "Public/MeshMerge/MeshApproximationSettings.h" },
		{ "TrianglesPerArea.Name", "EMeshApproximationSimplificationPolicy::TrianglesPerArea" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMeshApproximationSimplificationPolicy::FixedTriangleCount", (int64)EMeshApproximationSimplificationPolicy::FixedTriangleCount },
		{ "EMeshApproximationSimplificationPolicy::TrianglesPerArea", (int64)EMeshApproximationSimplificationPolicy::TrianglesPerArea },
		{ "EMeshApproximationSimplificationPolicy::GeometricTolerance", (int64)EMeshApproximationSimplificationPolicy::GeometricTolerance },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EMeshApproximationSimplificationPolicy_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"EMeshApproximationSimplificationPolicy",
	"EMeshApproximationSimplificationPolicy",
	Z_Construct_UEnum_Engine_EMeshApproximationSimplificationPolicy_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EMeshApproximationSimplificationPolicy_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EMeshApproximationSimplificationPolicy_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_EMeshApproximationSimplificationPolicy_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_EMeshApproximationSimplificationPolicy()
{
	if (!Z_Registration_Info_UEnum_EMeshApproximationSimplificationPolicy.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMeshApproximationSimplificationPolicy.InnerSingleton, Z_Construct_UEnum_Engine_EMeshApproximationSimplificationPolicy_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMeshApproximationSimplificationPolicy.InnerSingleton;
}
// End Enum EMeshApproximationSimplificationPolicy

// Begin Enum EMeshApproximationGroundPlaneClippingPolicy
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMeshApproximationGroundPlaneClippingPolicy;
static UEnum* EMeshApproximationGroundPlaneClippingPolicy_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMeshApproximationGroundPlaneClippingPolicy.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMeshApproximationGroundPlaneClippingPolicy.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EMeshApproximationGroundPlaneClippingPolicy, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EMeshApproximationGroundPlaneClippingPolicy"));
	}
	return Z_Registration_Info_UEnum_EMeshApproximationGroundPlaneClippingPolicy.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<EMeshApproximationGroundPlaneClippingPolicy>()
{
	return EMeshApproximationGroundPlaneClippingPolicy_StaticEnum();
}
struct Z_Construct_UEnum_Engine_EMeshApproximationGroundPlaneClippingPolicy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "CutAndFillWithZPlane.Name", "EMeshApproximationGroundPlaneClippingPolicy::CutAndFillWithZPlane" },
		{ "CutWithZPlane.Name", "EMeshApproximationGroundPlaneClippingPolicy::CutWithZPlane" },
		{ "DiscardWithZPlane.Name", "EMeshApproximationGroundPlaneClippingPolicy::DiscardWithZPlane" },
		{ "ModuleRelativePath", "Public/MeshMerge/MeshApproximationSettings.h" },
		{ "NoGroundClipping.Name", "EMeshApproximationGroundPlaneClippingPolicy::NoGroundClipping" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMeshApproximationGroundPlaneClippingPolicy::NoGroundClipping", (int64)EMeshApproximationGroundPlaneClippingPolicy::NoGroundClipping },
		{ "EMeshApproximationGroundPlaneClippingPolicy::DiscardWithZPlane", (int64)EMeshApproximationGroundPlaneClippingPolicy::DiscardWithZPlane },
		{ "EMeshApproximationGroundPlaneClippingPolicy::CutWithZPlane", (int64)EMeshApproximationGroundPlaneClippingPolicy::CutWithZPlane },
		{ "EMeshApproximationGroundPlaneClippingPolicy::CutAndFillWithZPlane", (int64)EMeshApproximationGroundPlaneClippingPolicy::CutAndFillWithZPlane },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EMeshApproximationGroundPlaneClippingPolicy_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"EMeshApproximationGroundPlaneClippingPolicy",
	"EMeshApproximationGroundPlaneClippingPolicy",
	Z_Construct_UEnum_Engine_EMeshApproximationGroundPlaneClippingPolicy_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EMeshApproximationGroundPlaneClippingPolicy_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EMeshApproximationGroundPlaneClippingPolicy_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_EMeshApproximationGroundPlaneClippingPolicy_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_EMeshApproximationGroundPlaneClippingPolicy()
{
	if (!Z_Registration_Info_UEnum_EMeshApproximationGroundPlaneClippingPolicy.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMeshApproximationGroundPlaneClippingPolicy.InnerSingleton, Z_Construct_UEnum_Engine_EMeshApproximationGroundPlaneClippingPolicy_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMeshApproximationGroundPlaneClippingPolicy.InnerSingleton;
}
// End Enum EMeshApproximationGroundPlaneClippingPolicy

// Begin Enum EMeshApproximationUVGenerationPolicy
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMeshApproximationUVGenerationPolicy;
static UEnum* EMeshApproximationUVGenerationPolicy_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMeshApproximationUVGenerationPolicy.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMeshApproximationUVGenerationPolicy.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EMeshApproximationUVGenerationPolicy, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EMeshApproximationUVGenerationPolicy"));
	}
	return Z_Registration_Info_UEnum_EMeshApproximationUVGenerationPolicy.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<EMeshApproximationUVGenerationPolicy>()
{
	return EMeshApproximationUVGenerationPolicy_StaticEnum();
}
struct Z_Construct_UEnum_Engine_EMeshApproximationUVGenerationPolicy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MeshMerge/MeshApproximationSettings.h" },
		{ "PreferPatchBuilder.Name", "EMeshApproximationUVGenerationPolicy::PreferPatchBuilder" },
		{ "PreferUVAtlas.Name", "EMeshApproximationUVGenerationPolicy::PreferUVAtlas" },
		{ "PreferXAtlas.Name", "EMeshApproximationUVGenerationPolicy::PreferXAtlas" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMeshApproximationUVGenerationPolicy::PreferUVAtlas", (int64)EMeshApproximationUVGenerationPolicy::PreferUVAtlas },
		{ "EMeshApproximationUVGenerationPolicy::PreferXAtlas", (int64)EMeshApproximationUVGenerationPolicy::PreferXAtlas },
		{ "EMeshApproximationUVGenerationPolicy::PreferPatchBuilder", (int64)EMeshApproximationUVGenerationPolicy::PreferPatchBuilder },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EMeshApproximationUVGenerationPolicy_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"EMeshApproximationUVGenerationPolicy",
	"EMeshApproximationUVGenerationPolicy",
	Z_Construct_UEnum_Engine_EMeshApproximationUVGenerationPolicy_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EMeshApproximationUVGenerationPolicy_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EMeshApproximationUVGenerationPolicy_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_EMeshApproximationUVGenerationPolicy_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_EMeshApproximationUVGenerationPolicy()
{
	if (!Z_Registration_Info_UEnum_EMeshApproximationUVGenerationPolicy.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMeshApproximationUVGenerationPolicy.InnerSingleton, Z_Construct_UEnum_Engine_EMeshApproximationUVGenerationPolicy_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMeshApproximationUVGenerationPolicy.InnerSingleton;
}
// End Enum EMeshApproximationUVGenerationPolicy

// Begin ScriptStruct FMeshApproximationSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MeshApproximationSettings;
class UScriptStruct* FMeshApproximationSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MeshApproximationSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MeshApproximationSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMeshApproximationSettings, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("MeshApproximationSettings"));
	}
	return Z_Registration_Info_UScriptStruct_MeshApproximationSettings.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FMeshApproximationSettings>()
{
	return FMeshApproximationSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MeshMerge/MeshApproximationSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputType_MetaData[] = {
		{ "Category", "ShapeSettings" },
		{ "Comment", "/** Type of output from mesh approximation process */" },
		{ "ModuleRelativePath", "Public/MeshMerge/MeshApproximationSettings.h" },
		{ "ToolTip", "Type of output from mesh approximation process" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ApproximationAccuracy_MetaData[] = {
		{ "Category", "ShapeSettings" },
		{ "ClampMin", "0.001" },
		{ "Comment", "/** Approximation Accuracy in Meters, will determine (eg) voxel resolution */" },
		{ "DisplayName", "Approximation Accuracy (meters)" },
		{ "ModuleRelativePath", "Public/MeshMerge/MeshApproximationSettings.h" },
		{ "ToolTip", "Approximation Accuracy in Meters, will determine (eg) voxel resolution" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClampVoxelDimension_MetaData[] = {
		{ "Category", "ShapeSettings" },
		{ "ClampMax", "1290" },
		{ "ClampMin", "64" },
		{ "Comment", "/** Maximum allowable voxel count along main directions. This is a limit on ApproximationAccuracy. Max of 1290 (1290^3 is the last integer < 2^31, using a bigger number results in failures in TArray code & probably elsewhere) */" },
		{ "ModuleRelativePath", "Public/MeshMerge/MeshApproximationSettings.h" },
		{ "ToolTip", "Maximum allowable voxel count along main directions. This is a limit on ApproximationAccuracy. Max of 1290 (1290^3 is the last integer < 2^31, using a bigger number results in failures in TArray code & probably elsewhere)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAttemptAutoThickening_MetaData[] = {
		{ "Category", "ShapeSettings" },
		{ "Comment", "/** if enabled, we will attempt to auto-thicken thin parts or flat sheets */" },
		{ "ModuleRelativePath", "Public/MeshMerge/MeshApproximationSettings.h" },
		{ "ToolTip", "if enabled, we will attempt to auto-thicken thin parts or flat sheets" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetMinThicknessMultiplier_MetaData[] = {
		{ "Category", "ShapeSettings" },
		{ "ClampMin", "0.001" },
		{ "Comment", "/** Multiplier on Approximation Accuracy used for auto-thickening */" },
		{ "EditCondition", "bAttemptAutoThickening" },
		{ "ModuleRelativePath", "Public/MeshMerge/MeshApproximationSettings.h" },
		{ "ToolTip", "Multiplier on Approximation Accuracy used for auto-thickening" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreTinyParts_MetaData[] = {
		{ "Category", "ShapeSettings" },
		{ "Comment", "/** If enabled, tiny parts will be excluded from the mesh merging, which can improve performance */" },
		{ "ModuleRelativePath", "Public/MeshMerge/MeshApproximationSettings.h" },
		{ "ToolTip", "If enabled, tiny parts will be excluded from the mesh merging, which can improve performance" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TinyPartSizeMultiplier_MetaData[] = {
		{ "Category", "ShapeSettings" },
		{ "ClampMin", "0.001" },
		{ "Comment", "/** Multiplier on Approximation Accuracy used to define tiny-part threshold, using maximum bounding-box dimension */" },
		{ "EditCondition", "bIgnoreTinyParts" },
		{ "ModuleRelativePath", "Public/MeshMerge/MeshApproximationSettings.h" },
		{ "ToolTip", "Multiplier on Approximation Accuracy used to define tiny-part threshold, using maximum bounding-box dimension" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseCapping_MetaData[] = {
		{ "Category", "ShapeSettings" },
		{ "Comment", "/** Optional methods to attempt to close off the bottom of open meshes */" },
		{ "ModuleRelativePath", "Public/MeshMerge/MeshApproximationSettings.h" },
		{ "ToolTip", "Optional methods to attempt to close off the bottom of open meshes" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WindingThreshold_MetaData[] = {
		{ "Category", "ShapeSettings" },
		{ "ClampMax", "0.99" },
		{ "ClampMin", "0.01" },
		{ "Comment", "/** Winding Threshold controls hole filling at open mesh borders. Smaller value means \"more/rounder\" filling */" },
		{ "ModuleRelativePath", "Public/MeshMerge/MeshApproximationSettings.h" },
		{ "ToolTip", "Winding Threshold controls hole filling at open mesh borders. Smaller value means \"more/rounder\" filling" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFillGaps_MetaData[] = {
		{ "Category", "ShapeSettings" },
		{ "Comment", "/** If true, topological expand/contract is used to try to fill small gaps between objects. */" },
		{ "ModuleRelativePath", "Public/MeshMerge/MeshApproximationSettings.h" },
		{ "ToolTip", "If true, topological expand/contract is used to try to fill small gaps between objects." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GapDistance_MetaData[] = {
		{ "Category", "ShapeSettings" },
		{ "ClampMin", "0.001" },
		{ "Comment", "/** Distance in Meters to expand/contract to fill gaps */" },
		{ "DisplayName", "Gap Filling Distance (meters)" },
		{ "EditCondition", "bFillGaps" },
		{ "ModuleRelativePath", "Public/MeshMerge/MeshApproximationSettings.h" },
		{ "ToolTip", "Distance in Meters to expand/contract to fill gaps" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OcclusionMethod_MetaData[] = {
		{ "Category", "SimplifySettings" },
		{ "Comment", "/** Type of hidden geometry removal to apply */" },
		{ "ModuleRelativePath", "Public/MeshMerge/MeshApproximationSettings.h" },
		{ "ToolTip", "Type of hidden geometry removal to apply" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOccludeFromBottom_MetaData[] = {
		{ "Category", "SimplifySettings" },
		{ "Comment", "/** If true, then the OcclusionMethod computation is configured to try to consider downward-facing \"bottom\" geometry as occluded */" },
		{ "ModuleRelativePath", "Public/MeshMerge/MeshApproximationSettings.h" },
		{ "ToolTip", "If true, then the OcclusionMethod computation is configured to try to consider downward-facing \"bottom\" geometry as occluded" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SimplifyMethod_MetaData[] = {
		{ "Category", "SimplifySettings" },
		{ "Comment", "/** Mesh Simplification criteria */" },
		{ "ModuleRelativePath", "Public/MeshMerge/MeshApproximationSettings.h" },
		{ "ToolTip", "Mesh Simplification criteria" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetTriCount_MetaData[] = {
		{ "Category", "SimplifySettings" },
		{ "ClampMin", "16" },
		{ "Comment", "/** Target triangle count for Mesh Simplification, for SimplifyMethods that use a Count*/" },
		{ "EditCondition", "SimplifyMethod == EMeshApproximationSimplificationPolicy::FixedTriangleCount" },
		{ "ModuleRelativePath", "Public/MeshMerge/MeshApproximationSettings.h" },
		{ "ToolTip", "Target triangle count for Mesh Simplification, for SimplifyMethods that use a Count" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrianglesPerM_MetaData[] = {
		{ "Category", "SimplifySettings" },
		{ "ClampMin", "0.01" },
		{ "Comment", "/** Approximate Number of triangles per Square Meter, for SimplifyMethods that use such a constraint */" },
		{ "EditCondition", "SimplifyMethod == EMeshApproximationSimplificationPolicy::TrianglesPerArea" },
		{ "ModuleRelativePath", "Public/MeshMerge/MeshApproximationSettings.h" },
		{ "ToolTip", "Approximate Number of triangles per Square Meter, for SimplifyMethods that use such a constraint" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GeometricDeviation_MetaData[] = {
		{ "Category", "SimplifySettings" },
		{ "ClampMin", "0.0001" },
		{ "Comment", "/** Allowable Geometric Deviation in Meters when SimplifyMethod incorporates a Geometric Tolerance */" },
		{ "DisplayName", "Geometric Deviation (meters)" },
		{ "EditCondition", "SimplifyMethod == EMeshApproximationSimplificationPolicy::GeometricTolerance" },
		{ "ModuleRelativePath", "Public/MeshMerge/MeshApproximationSettings.h" },
		{ "ToolTip", "Allowable Geometric Deviation in Meters when SimplifyMethod incorporates a Geometric Tolerance" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroundClipping_MetaData[] = {
		{ "Category", "SimplifySettings" },
		{ "Comment", "/** Configure how the final mesh should be clipped with a ground plane, if desired */" },
		{ "ModuleRelativePath", "Public/MeshMerge/MeshApproximationSettings.h" },
		{ "ToolTip", "Configure how the final mesh should be clipped with a ground plane, if desired" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroundClippingZHeight_MetaData[] = {
		{ "Category", "SimplifySettings" },
		{ "Comment", "/** Z-Height for the ground clipping plane, if enabled */" },
		{ "EditCondition", "GroundClipping != EMeshApproximationGroundPlaneClippingPolicy::NoGroundClipping" },
		{ "ModuleRelativePath", "Public/MeshMerge/MeshApproximationSettings.h" },
		{ "ToolTip", "Z-Height for the ground clipping plane, if enabled" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEstimateHardNormals_MetaData[] = {
		{ "Category", "NormalsSettings" },
		{ "Comment", "/** If true, normal angle will be used to estimate hard normals */" },
		{ "ModuleRelativePath", "Public/MeshMerge/MeshApproximationSettings.h" },
		{ "ToolTip", "If true, normal angle will be used to estimate hard normals" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HardNormalAngle_MetaData[] = {
		{ "Category", "NormalsSettings" },
		{ "ClampMax", "90.0" },
		{ "ClampMin", "0.0" },
		{ "EditCondition", "bEstimateHardNormals" },
		{ "ModuleRelativePath", "Public/MeshMerge/MeshApproximationSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UVGenerationMethod_MetaData[] = {
		{ "Category", "UVSettings" },
		{ "Comment", "//\n// Mesh UV Generation Settings\n//\n" },
		{ "ModuleRelativePath", "Public/MeshMerge/MeshApproximationSettings.h" },
		{ "ToolTip", "Mesh UV Generation Settings" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitialPatchCount_MetaData[] = {
		{ "Category", "UVSettings" },
		{ "ClampMax", "99999999" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Number of initial patches mesh will be split into before computing island merging */" },
		{ "EditCondition", "UVGenerationMethod == EMeshApproximationUVGenerationPolicy::PreferPatchBuilder" },
		{ "ModuleRelativePath", "Public/MeshMerge/MeshApproximationSettings.h" },
		{ "ToolTip", "Number of initial patches mesh will be split into before computing island merging" },
		{ "UIMax", "1000" },
		{ "UIMin", "1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurvatureAlignment_MetaData[] = {
		{ "Category", "UVSettings" },
		{ "ClampMax", "100.0" },
		{ "ClampMin", "0.01" },
		{ "Comment", "/** This parameter controls alignment of the initial patches to creases in the mesh */" },
		{ "EditCondition", "UVGenerationMethod == EMeshApproximationUVGenerationPolicy::PreferPatchBuilder" },
		{ "ModuleRelativePath", "Public/MeshMerge/MeshApproximationSettings.h" },
		{ "ToolTip", "This parameter controls alignment of the initial patches to creases in the mesh" },
		{ "UIMax", "2.0" },
		{ "UIMin", "0.1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MergingThreshold_MetaData[] = {
		{ "Category", "UVSettings" },
		{ "ClampMin", "1.0" },
		{ "Comment", "/** Distortion/Stretching Threshold for island merging - larger values increase the allowable UV stretching */" },
		{ "EditCondition", "UVGenerationMethod == EMeshApproximationUVGenerationPolicy::PreferPatchBuilder" },
		{ "ModuleRelativePath", "Public/MeshMerge/MeshApproximationSettings.h" },
		{ "ToolTip", "Distortion/Stretching Threshold for island merging - larger values increase the allowable UV stretching" },
		{ "UIMax", "5.0" },
		{ "UIMin", "1.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxAngleDeviation_MetaData[] = {
		{ "Category", "UVSettings" },
		{ "ClampMax", "180.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** UV islands will not be merged if their average face normals deviate by larger than this amount */" },
		{ "EditCondition", "UVGenerationMethod == EMeshApproximationUVGenerationPolicy::PreferPatchBuilder" },
		{ "ModuleRelativePath", "Public/MeshMerge/MeshApproximationSettings.h" },
		{ "ToolTip", "UV islands will not be merged if their average face normals deviate by larger than this amount" },
		{ "UIMax", "90.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bGenerateNaniteEnabledMesh_MetaData[] = {
		{ "Category", "MeshSettings" },
		{ "Comment", "/** Whether to generate a nanite-enabled mesh */" },
		{ "ModuleRelativePath", "Public/MeshMerge/MeshApproximationSettings.h" },
		{ "ToolTip", "Whether to generate a nanite-enabled mesh" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NaniteFallbackTarget_MetaData[] = {
		{ "Category", "MeshSettings" },
		{ "Comment", "/** Which heuristic to use when generating the Nanite fallback mesh. */" },
		{ "EditCondition", "bGenerateNaniteEnabledMesh" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/MeshMerge/MeshApproximationSettings.h" },
		{ "ToolTip", "Which heuristic to use when generating the Nanite fallback mesh." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NaniteFallbackPercentTriangles_MetaData[] = {
		{ "Category", "MeshSettings" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Percentage of triangles to keep from source Nanite mesh for fallback. 1.0 = no reduction, 0.0 = no triangles. */" },
		{ "EditCondition", "bGenerateNaniteEnabledMesh && NaniteFallbackTarget == ENaniteFallbackTarget::PercentTriangles" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/MeshMerge/MeshApproximationSettings.h" },
		{ "ToolTip", "Percentage of triangles to keep from source Nanite mesh for fallback. 1.0 = no reduction, 0.0 = no triangles." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NaniteFallbackRelativeError_MetaData[] = {
		{ "Category", "MeshSettings" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Reduce Nanite fallback mesh until at least this amount of error is reached relative to size of the mesh. */" },
		{ "EditCondition", "bGenerateNaniteEnabledMesh && NaniteFallbackTarget == ENaniteFallbackTarget::RelativeError" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/MeshMerge/MeshApproximationSettings.h" },
		{ "ToolTip", "Reduce Nanite fallback mesh until at least this amount of error is reached relative to size of the mesh." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSupportRayTracing_MetaData[] = {
		{ "Category", "MeshSettings" },
		{ "Comment", "/** Whether ray tracing will be supported on this mesh. Disable this to save memory if the generated mesh will only be rendered in the distance. */" },
		{ "ModuleRelativePath", "Public/MeshMerge/MeshApproximationSettings.h" },
		{ "ToolTip", "Whether ray tracing will be supported on this mesh. Disable this to save memory if the generated mesh will only be rendered in the distance." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllowDistanceField_MetaData[] = {
		{ "Category", "MeshSettings" },
		{ "Comment", "/** Whether to allow distance field to be computed for this mesh. Disable this to save memory if the generated mesh will only be rendered in the distance. */" },
		{ "ModuleRelativePath", "Public/MeshMerge/MeshApproximationSettings.h" },
		{ "ToolTip", "Whether to allow distance field to be computed for this mesh. Disable this to save memory if the generated mesh will only be rendered in the distance." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MultiSamplingAA_MetaData[] = {
		{ "Category", "MaterialSettings" },
		{ "ClampMax", "8" },
		{ "ClampMin", "0" },
		{ "Comment", "/** If Value is > 1, Multisample output baked textures by this amount in each direction (eg 4 == 16x supersampling) */" },
		{ "ModuleRelativePath", "Public/MeshMerge/MeshApproximationSettings.h" },
		{ "ToolTip", "If Value is > 1, Multisample output baked textures by this amount in each direction (eg 4 == 16x supersampling)" },
		{ "UIMax", "4" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RenderCaptureResolution_MetaData[] = {
		{ "Category", "MaterialSettings" },
		{ "ClampMin", "0" },
		{ "Comment", "/** If Value is zero, use MaterialSettings resolution, otherwise override the render capture resolution */" },
		{ "ModuleRelativePath", "Public/MeshMerge/MeshApproximationSettings.h" },
		{ "ToolTip", "If Value is zero, use MaterialSettings resolution, otherwise override the render capture resolution" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialSettings_MetaData[] = {
		{ "Category", "MaterialSettings" },
		{ "Comment", "/** Material generation settings */" },
		{ "ModuleRelativePath", "Public/MeshMerge/MeshApproximationSettings.h" },
		{ "ToolTip", "Material generation settings" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CaptureFieldOfView_MetaData[] = {
		{ "Category", "MaterialSettings" },
		{ "ClampMax", "160.0" },
		{ "ClampMin", "5.0" },
		{ "ModuleRelativePath", "Public/MeshMerge/MeshApproximationSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NearPlaneDist_MetaData[] = {
		{ "Category", "MaterialSettings" },
		{ "ClampMax", "1000.0" },
		{ "ClampMin", "0.001" },
		{ "ModuleRelativePath", "Public/MeshMerge/MeshApproximationSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseRenderLODMeshes_MetaData[] = {
		{ "Category", "PerformanceSettings" },
		{ "Comment", "/** If true, LOD0 Render Meshes (or Nanite Fallback meshes) are used instead of Source Mesh data. This can significantly reduce computation time and memory usage, but potentially at the cost of lower quality output. */" },
		{ "ModuleRelativePath", "Public/MeshMerge/MeshApproximationSettings.h" },
		{ "ToolTip", "If true, LOD0 Render Meshes (or Nanite Fallback meshes) are used instead of Source Mesh data. This can significantly reduce computation time and memory usage, but potentially at the cost of lower quality output." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableSimplifyPrePass_MetaData[] = {
		{ "Category", "PerformanceSettings" },
		{ "Comment", "/** If true, a faster mesh simplfication strategy will be used. This can significantly reduce computation time and memory usage, but potentially at the cost of lower quality output. */" },
		{ "ModuleRelativePath", "Public/MeshMerge/MeshApproximationSettings.h" },
		{ "ToolTip", "If true, a faster mesh simplfication strategy will be used. This can significantly reduce computation time and memory usage, but potentially at the cost of lower quality output." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableParallelBaking_MetaData[] = {
		{ "Category", "PerformanceSettings" },
		{ "Comment", "/** If false, texture capture and baking will be done serially after mesh generation, rather than in parallel when possible. This will reduce the maximum memory requirements of the process.  */" },
		{ "ModuleRelativePath", "Public/MeshMerge/MeshApproximationSettings.h" },
		{ "ToolTip", "If false, texture capture and baking will be done serially after mesh generation, rather than in parallel when possible. This will reduce the maximum memory requirements of the process." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPrintDebugMessages_MetaData[] = {
		{ "Category", "DebugSettings" },
		{ "Comment", "/** If true, print out debugging messages */" },
		{ "ModuleRelativePath", "Public/MeshMerge/MeshApproximationSettings.h" },
		{ "ToolTip", "If true, print out debugging messages" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEmitFullDebugMesh_MetaData[] = {
		{ "Category", "DebugSettings" },
		{ "Comment", "/** If true, write the full mesh triangle set (ie flattened, non-instanced) used for mesh generation. Warning: this asset may be extremely large!! */" },
		{ "ModuleRelativePath", "Public/MeshMerge/MeshApproximationSettings.h" },
		{ "ToolTip", "If true, write the full mesh triangle set (ie flattened, non-instanced) used for mesh generation. Warning: this asset may be extremely large!!" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NaniteProxyTrianglePercent_MetaData[] = {
		{ "ModuleRelativePath", "Public/MeshMerge/MeshApproximationSettings.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutputType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OutputType;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ApproximationAccuracy;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ClampVoxelDimension;
	static void NewProp_bAttemptAutoThickening_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAttemptAutoThickening;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TargetMinThicknessMultiplier;
	static void NewProp_bIgnoreTinyParts_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreTinyParts;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TinyPartSizeMultiplier;
	static const UECodeGen_Private::FBytePropertyParams NewProp_BaseCapping_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_BaseCapping;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WindingThreshold;
	static void NewProp_bFillGaps_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFillGaps;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GapDistance;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OcclusionMethod_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OcclusionMethod;
	static void NewProp_bOccludeFromBottom_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOccludeFromBottom;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SimplifyMethod_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SimplifyMethod;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TargetTriCount;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TrianglesPerM;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GeometricDeviation;
	static const UECodeGen_Private::FBytePropertyParams NewProp_GroundClipping_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_GroundClipping;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GroundClippingZHeight;
	static void NewProp_bEstimateHardNormals_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEstimateHardNormals;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HardNormalAngle;
	static const UECodeGen_Private::FBytePropertyParams NewProp_UVGenerationMethod_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_UVGenerationMethod;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InitialPatchCount;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurvatureAlignment;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MergingThreshold;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxAngleDeviation;
	static void NewProp_bGenerateNaniteEnabledMesh_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGenerateNaniteEnabledMesh;
	static const UECodeGen_Private::FBytePropertyParams NewProp_NaniteFallbackTarget_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NaniteFallbackTarget;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NaniteFallbackPercentTriangles;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NaniteFallbackRelativeError;
	static void NewProp_bSupportRayTracing_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSupportRayTracing;
	static void NewProp_bAllowDistanceField_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowDistanceField;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MultiSamplingAA;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RenderCaptureResolution;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaterialSettings;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CaptureFieldOfView;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NearPlaneDist;
	static void NewProp_bUseRenderLODMeshes_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseRenderLODMeshes;
	static void NewProp_bEnableSimplifyPrePass_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableSimplifyPrePass;
	static void NewProp_bEnableParallelBaking_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableParallelBaking;
	static void NewProp_bPrintDebugMessages_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPrintDebugMessages;
	static void NewProp_bEmitFullDebugMesh_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEmitFullDebugMesh;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NaniteProxyTrianglePercent;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMeshApproximationSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_OutputType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_OutputType = { "OutputType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMeshApproximationSettings, OutputType), Z_Construct_UEnum_Engine_EMeshApproximationType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputType_MetaData), NewProp_OutputType_MetaData) }; // 2568529976
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_ApproximationAccuracy = { "ApproximationAccuracy", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMeshApproximationSettings, ApproximationAccuracy), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ApproximationAccuracy_MetaData), NewProp_ApproximationAccuracy_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_ClampVoxelDimension = { "ClampVoxelDimension", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMeshApproximationSettings, ClampVoxelDimension), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClampVoxelDimension_MetaData), NewProp_ClampVoxelDimension_MetaData) };
void Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_bAttemptAutoThickening_SetBit(void* Obj)
{
	((FMeshApproximationSettings*)Obj)->bAttemptAutoThickening = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_bAttemptAutoThickening = { "bAttemptAutoThickening", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMeshApproximationSettings), &Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_bAttemptAutoThickening_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAttemptAutoThickening_MetaData), NewProp_bAttemptAutoThickening_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_TargetMinThicknessMultiplier = { "TargetMinThicknessMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMeshApproximationSettings, TargetMinThicknessMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetMinThicknessMultiplier_MetaData), NewProp_TargetMinThicknessMultiplier_MetaData) };
void Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_bIgnoreTinyParts_SetBit(void* Obj)
{
	((FMeshApproximationSettings*)Obj)->bIgnoreTinyParts = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_bIgnoreTinyParts = { "bIgnoreTinyParts", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMeshApproximationSettings), &Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_bIgnoreTinyParts_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIgnoreTinyParts_MetaData), NewProp_bIgnoreTinyParts_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_TinyPartSizeMultiplier = { "TinyPartSizeMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMeshApproximationSettings, TinyPartSizeMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TinyPartSizeMultiplier_MetaData), NewProp_TinyPartSizeMultiplier_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_BaseCapping_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_BaseCapping = { "BaseCapping", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMeshApproximationSettings, BaseCapping), Z_Construct_UEnum_Engine_EMeshApproximationBaseCappingType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseCapping_MetaData), NewProp_BaseCapping_MetaData) }; // 415527764
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_WindingThreshold = { "WindingThreshold", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMeshApproximationSettings, WindingThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WindingThreshold_MetaData), NewProp_WindingThreshold_MetaData) };
void Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_bFillGaps_SetBit(void* Obj)
{
	((FMeshApproximationSettings*)Obj)->bFillGaps = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_bFillGaps = { "bFillGaps", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMeshApproximationSettings), &Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_bFillGaps_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFillGaps_MetaData), NewProp_bFillGaps_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_GapDistance = { "GapDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMeshApproximationSettings, GapDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GapDistance_MetaData), NewProp_GapDistance_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_OcclusionMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_OcclusionMethod = { "OcclusionMethod", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMeshApproximationSettings, OcclusionMethod), Z_Construct_UEnum_Engine_EOccludedGeometryFilteringPolicy, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OcclusionMethod_MetaData), NewProp_OcclusionMethod_MetaData) }; // 1089274586
void Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_bOccludeFromBottom_SetBit(void* Obj)
{
	((FMeshApproximationSettings*)Obj)->bOccludeFromBottom = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_bOccludeFromBottom = { "bOccludeFromBottom", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMeshApproximationSettings), &Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_bOccludeFromBottom_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOccludeFromBottom_MetaData), NewProp_bOccludeFromBottom_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_SimplifyMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_SimplifyMethod = { "SimplifyMethod", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMeshApproximationSettings, SimplifyMethod), Z_Construct_UEnum_Engine_EMeshApproximationSimplificationPolicy, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SimplifyMethod_MetaData), NewProp_SimplifyMethod_MetaData) }; // 13234020
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_TargetTriCount = { "TargetTriCount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMeshApproximationSettings, TargetTriCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetTriCount_MetaData), NewProp_TargetTriCount_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_TrianglesPerM = { "TrianglesPerM", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMeshApproximationSettings, TrianglesPerM), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrianglesPerM_MetaData), NewProp_TrianglesPerM_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_GeometricDeviation = { "GeometricDeviation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMeshApproximationSettings, GeometricDeviation), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GeometricDeviation_MetaData), NewProp_GeometricDeviation_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_GroundClipping_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_GroundClipping = { "GroundClipping", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMeshApproximationSettings, GroundClipping), Z_Construct_UEnum_Engine_EMeshApproximationGroundPlaneClippingPolicy, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroundClipping_MetaData), NewProp_GroundClipping_MetaData) }; // 1555015288
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_GroundClippingZHeight = { "GroundClippingZHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMeshApproximationSettings, GroundClippingZHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroundClippingZHeight_MetaData), NewProp_GroundClippingZHeight_MetaData) };
void Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_bEstimateHardNormals_SetBit(void* Obj)
{
	((FMeshApproximationSettings*)Obj)->bEstimateHardNormals = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_bEstimateHardNormals = { "bEstimateHardNormals", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMeshApproximationSettings), &Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_bEstimateHardNormals_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEstimateHardNormals_MetaData), NewProp_bEstimateHardNormals_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_HardNormalAngle = { "HardNormalAngle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMeshApproximationSettings, HardNormalAngle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HardNormalAngle_MetaData), NewProp_HardNormalAngle_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_UVGenerationMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_UVGenerationMethod = { "UVGenerationMethod", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMeshApproximationSettings, UVGenerationMethod), Z_Construct_UEnum_Engine_EMeshApproximationUVGenerationPolicy, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UVGenerationMethod_MetaData), NewProp_UVGenerationMethod_MetaData) }; // 1585862913
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_InitialPatchCount = { "InitialPatchCount", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMeshApproximationSettings, InitialPatchCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitialPatchCount_MetaData), NewProp_InitialPatchCount_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_CurvatureAlignment = { "CurvatureAlignment", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMeshApproximationSettings, CurvatureAlignment), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurvatureAlignment_MetaData), NewProp_CurvatureAlignment_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_MergingThreshold = { "MergingThreshold", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMeshApproximationSettings, MergingThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MergingThreshold_MetaData), NewProp_MergingThreshold_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_MaxAngleDeviation = { "MaxAngleDeviation", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMeshApproximationSettings, MaxAngleDeviation), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxAngleDeviation_MetaData), NewProp_MaxAngleDeviation_MetaData) };
void Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_bGenerateNaniteEnabledMesh_SetBit(void* Obj)
{
	((FMeshApproximationSettings*)Obj)->bGenerateNaniteEnabledMesh = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_bGenerateNaniteEnabledMesh = { "bGenerateNaniteEnabledMesh", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMeshApproximationSettings), &Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_bGenerateNaniteEnabledMesh_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bGenerateNaniteEnabledMesh_MetaData), NewProp_bGenerateNaniteEnabledMesh_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_NaniteFallbackTarget_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_NaniteFallbackTarget = { "NaniteFallbackTarget", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMeshApproximationSettings, NaniteFallbackTarget), Z_Construct_UEnum_Engine_ENaniteFallbackTarget, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NaniteFallbackTarget_MetaData), NewProp_NaniteFallbackTarget_MetaData) }; // 3054841591
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_NaniteFallbackPercentTriangles = { "NaniteFallbackPercentTriangles", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMeshApproximationSettings, NaniteFallbackPercentTriangles), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NaniteFallbackPercentTriangles_MetaData), NewProp_NaniteFallbackPercentTriangles_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_NaniteFallbackRelativeError = { "NaniteFallbackRelativeError", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMeshApproximationSettings, NaniteFallbackRelativeError), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NaniteFallbackRelativeError_MetaData), NewProp_NaniteFallbackRelativeError_MetaData) };
void Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_bSupportRayTracing_SetBit(void* Obj)
{
	((FMeshApproximationSettings*)Obj)->bSupportRayTracing = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_bSupportRayTracing = { "bSupportRayTracing", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMeshApproximationSettings), &Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_bSupportRayTracing_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSupportRayTracing_MetaData), NewProp_bSupportRayTracing_MetaData) };
void Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_bAllowDistanceField_SetBit(void* Obj)
{
	((FMeshApproximationSettings*)Obj)->bAllowDistanceField = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_bAllowDistanceField = { "bAllowDistanceField", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMeshApproximationSettings), &Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_bAllowDistanceField_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllowDistanceField_MetaData), NewProp_bAllowDistanceField_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_MultiSamplingAA = { "MultiSamplingAA", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMeshApproximationSettings, MultiSamplingAA), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MultiSamplingAA_MetaData), NewProp_MultiSamplingAA_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_RenderCaptureResolution = { "RenderCaptureResolution", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMeshApproximationSettings, RenderCaptureResolution), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RenderCaptureResolution_MetaData), NewProp_RenderCaptureResolution_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_MaterialSettings = { "MaterialSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMeshApproximationSettings, MaterialSettings), Z_Construct_UScriptStruct_FMaterialProxySettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialSettings_MetaData), NewProp_MaterialSettings_MetaData) }; // 2102831604
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_CaptureFieldOfView = { "CaptureFieldOfView", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMeshApproximationSettings, CaptureFieldOfView), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CaptureFieldOfView_MetaData), NewProp_CaptureFieldOfView_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_NearPlaneDist = { "NearPlaneDist", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMeshApproximationSettings, NearPlaneDist), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NearPlaneDist_MetaData), NewProp_NearPlaneDist_MetaData) };
void Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_bUseRenderLODMeshes_SetBit(void* Obj)
{
	((FMeshApproximationSettings*)Obj)->bUseRenderLODMeshes = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_bUseRenderLODMeshes = { "bUseRenderLODMeshes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMeshApproximationSettings), &Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_bUseRenderLODMeshes_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseRenderLODMeshes_MetaData), NewProp_bUseRenderLODMeshes_MetaData) };
void Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_bEnableSimplifyPrePass_SetBit(void* Obj)
{
	((FMeshApproximationSettings*)Obj)->bEnableSimplifyPrePass = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_bEnableSimplifyPrePass = { "bEnableSimplifyPrePass", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMeshApproximationSettings), &Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_bEnableSimplifyPrePass_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableSimplifyPrePass_MetaData), NewProp_bEnableSimplifyPrePass_MetaData) };
void Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_bEnableParallelBaking_SetBit(void* Obj)
{
	((FMeshApproximationSettings*)Obj)->bEnableParallelBaking = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_bEnableParallelBaking = { "bEnableParallelBaking", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMeshApproximationSettings), &Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_bEnableParallelBaking_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableParallelBaking_MetaData), NewProp_bEnableParallelBaking_MetaData) };
void Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_bPrintDebugMessages_SetBit(void* Obj)
{
	((FMeshApproximationSettings*)Obj)->bPrintDebugMessages = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_bPrintDebugMessages = { "bPrintDebugMessages", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMeshApproximationSettings), &Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_bPrintDebugMessages_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPrintDebugMessages_MetaData), NewProp_bPrintDebugMessages_MetaData) };
void Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_bEmitFullDebugMesh_SetBit(void* Obj)
{
	((FMeshApproximationSettings*)Obj)->bEmitFullDebugMesh = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_bEmitFullDebugMesh = { "bEmitFullDebugMesh", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMeshApproximationSettings), &Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_bEmitFullDebugMesh_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEmitFullDebugMesh_MetaData), NewProp_bEmitFullDebugMesh_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_NaniteProxyTrianglePercent = { "NaniteProxyTrianglePercent", nullptr, (EPropertyFlags)0x0040000820000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMeshApproximationSettings, NaniteProxyTrianglePercent_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NaniteProxyTrianglePercent_MetaData), NewProp_NaniteProxyTrianglePercent_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_OutputType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_OutputType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_ApproximationAccuracy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_ClampVoxelDimension,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_bAttemptAutoThickening,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_TargetMinThicknessMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_bIgnoreTinyParts,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_TinyPartSizeMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_BaseCapping_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_BaseCapping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_WindingThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_bFillGaps,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_GapDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_OcclusionMethod_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_OcclusionMethod,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_bOccludeFromBottom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_SimplifyMethod_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_SimplifyMethod,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_TargetTriCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_TrianglesPerM,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_GeometricDeviation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_GroundClipping_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_GroundClipping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_GroundClippingZHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_bEstimateHardNormals,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_HardNormalAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_UVGenerationMethod_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_UVGenerationMethod,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_InitialPatchCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_CurvatureAlignment,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_MergingThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_MaxAngleDeviation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_bGenerateNaniteEnabledMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_NaniteFallbackTarget_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_NaniteFallbackTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_NaniteFallbackPercentTriangles,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_NaniteFallbackRelativeError,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_bSupportRayTracing,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_bAllowDistanceField,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_MultiSamplingAA,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_RenderCaptureResolution,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_MaterialSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_CaptureFieldOfView,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_NearPlaneDist,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_bUseRenderLODMeshes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_bEnableSimplifyPrePass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_bEnableParallelBaking,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_bPrintDebugMessages,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_bEmitFullDebugMesh,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_NaniteProxyTrianglePercent,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"MeshApproximationSettings",
	Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::PropPointers),
	sizeof(FMeshApproximationSettings),
	alignof(FMeshApproximationSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMeshApproximationSettings()
{
	if (!Z_Registration_Info_UScriptStruct_MeshApproximationSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MeshApproximationSettings.InnerSingleton, Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MeshApproximationSettings.InnerSingleton;
}
// End ScriptStruct FMeshApproximationSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_MeshMerge_MeshApproximationSettings_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EMeshApproximationType_StaticEnum, TEXT("EMeshApproximationType"), &Z_Registration_Info_UEnum_EMeshApproximationType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2568529976U) },
		{ EMeshApproximationBaseCappingType_StaticEnum, TEXT("EMeshApproximationBaseCappingType"), &Z_Registration_Info_UEnum_EMeshApproximationBaseCappingType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 415527764U) },
		{ EOccludedGeometryFilteringPolicy_StaticEnum, TEXT("EOccludedGeometryFilteringPolicy"), &Z_Registration_Info_UEnum_EOccludedGeometryFilteringPolicy, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1089274586U) },
		{ EMeshApproximationSimplificationPolicy_StaticEnum, TEXT("EMeshApproximationSimplificationPolicy"), &Z_Registration_Info_UEnum_EMeshApproximationSimplificationPolicy, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 13234020U) },
		{ EMeshApproximationGroundPlaneClippingPolicy_StaticEnum, TEXT("EMeshApproximationGroundPlaneClippingPolicy"), &Z_Registration_Info_UEnum_EMeshApproximationGroundPlaneClippingPolicy, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1555015288U) },
		{ EMeshApproximationUVGenerationPolicy_StaticEnum, TEXT("EMeshApproximationUVGenerationPolicy"), &Z_Registration_Info_UEnum_EMeshApproximationUVGenerationPolicy, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1585862913U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMeshApproximationSettings::StaticStruct, Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewStructOps, TEXT("MeshApproximationSettings"), &Z_Registration_Info_UScriptStruct_MeshApproximationSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMeshApproximationSettings), 785736594U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_MeshMerge_MeshApproximationSettings_h_2236696918(TEXT("/Script/Engine"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_MeshMerge_MeshApproximationSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_MeshMerge_MeshApproximationSettings_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_MeshMerge_MeshApproximationSettings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_MeshMerge_MeshApproximationSettings_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
