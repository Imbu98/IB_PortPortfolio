// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/WorldPartition/StaticLightingData/VolumetricLightmapGrid.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVolumetricLightmapGrid() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVolumetricLightMapGridCell();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVolumetricLightMapGridDesc();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin ScriptStruct FVolumetricLightMapGridCell
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VolumetricLightMapGridCell;
class UScriptStruct* FVolumetricLightMapGridCell::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VolumetricLightMapGridCell.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VolumetricLightMapGridCell.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVolumetricLightMapGridCell, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("VolumetricLightMapGridCell"));
	}
	return Z_Registration_Info_UScriptStruct_VolumetricLightMapGridCell.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FVolumetricLightMapGridCell>()
{
	return FVolumetricLightMapGridCell::StaticStruct();
}
struct Z_Construct_UScriptStruct_FVolumetricLightMapGridCell_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/StaticLightingData/VolumetricLightmapGrid.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Bounds_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/StaticLightingData/VolumetricLightmapGrid.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CellID_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/StaticLightingData/VolumetricLightmapGrid.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Bounds;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_CellID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVolumetricLightMapGridCell>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVolumetricLightMapGridCell_Statics::NewProp_Bounds = { "Bounds", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVolumetricLightMapGridCell, Bounds), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Bounds_MetaData), NewProp_Bounds_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FVolumetricLightMapGridCell_Statics::NewProp_CellID = { "CellID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVolumetricLightMapGridCell, CellID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CellID_MetaData), NewProp_CellID_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVolumetricLightMapGridCell_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVolumetricLightMapGridCell_Statics::NewProp_Bounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVolumetricLightMapGridCell_Statics::NewProp_CellID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVolumetricLightMapGridCell_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVolumetricLightMapGridCell_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"VolumetricLightMapGridCell",
	Z_Construct_UScriptStruct_FVolumetricLightMapGridCell_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVolumetricLightMapGridCell_Statics::PropPointers),
	sizeof(FVolumetricLightMapGridCell),
	alignof(FVolumetricLightMapGridCell),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVolumetricLightMapGridCell_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVolumetricLightMapGridCell_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FVolumetricLightMapGridCell()
{
	if (!Z_Registration_Info_UScriptStruct_VolumetricLightMapGridCell.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VolumetricLightMapGridCell.InnerSingleton, Z_Construct_UScriptStruct_FVolumetricLightMapGridCell_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_VolumetricLightMapGridCell.InnerSingleton;
}
// End ScriptStruct FVolumetricLightMapGridCell

// Begin ScriptStruct FVolumetricLightMapGridDesc
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VolumetricLightMapGridDesc;
class UScriptStruct* FVolumetricLightMapGridDesc::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VolumetricLightMapGridDesc.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VolumetricLightMapGridDesc.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVolumetricLightMapGridDesc, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("VolumetricLightMapGridDesc"));
	}
	return Z_Registration_Info_UScriptStruct_VolumetricLightMapGridDesc.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FVolumetricLightMapGridDesc>()
{
	return FVolumetricLightMapGridDesc::StaticStruct();
}
struct Z_Construct_UScriptStruct_FVolumetricLightMapGridDesc_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/StaticLightingData/VolumetricLightmapGrid.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridBounds_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/StaticLightingData/VolumetricLightmapGrid.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Guid_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/StaticLightingData/VolumetricLightmapGrid.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CellSize_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/StaticLightingData/VolumetricLightmapGrid.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DetailCellSize_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/StaticLightingData/VolumetricLightmapGrid.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BrickSize_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/StaticLightingData/VolumetricLightmapGrid.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Cells_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/StaticLightingData/VolumetricLightmapGrid.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_GridBounds;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Guid;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CellSize;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DetailCellSize;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BrickSize;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Cells_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Cells;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVolumetricLightMapGridDesc>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVolumetricLightMapGridDesc_Statics::NewProp_GridBounds = { "GridBounds", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVolumetricLightMapGridDesc, GridBounds), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridBounds_MetaData), NewProp_GridBounds_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVolumetricLightMapGridDesc_Statics::NewProp_Guid = { "Guid", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVolumetricLightMapGridDesc, Guid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Guid_MetaData), NewProp_Guid_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVolumetricLightMapGridDesc_Statics::NewProp_CellSize = { "CellSize", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVolumetricLightMapGridDesc, CellSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CellSize_MetaData), NewProp_CellSize_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVolumetricLightMapGridDesc_Statics::NewProp_DetailCellSize = { "DetailCellSize", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVolumetricLightMapGridDesc, DetailCellSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DetailCellSize_MetaData), NewProp_DetailCellSize_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVolumetricLightMapGridDesc_Statics::NewProp_BrickSize = { "BrickSize", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVolumetricLightMapGridDesc, BrickSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BrickSize_MetaData), NewProp_BrickSize_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVolumetricLightMapGridDesc_Statics::NewProp_Cells_Inner = { "Cells", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVolumetricLightMapGridCell, METADATA_PARAMS(0, nullptr) }; // 704981209
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVolumetricLightMapGridDesc_Statics::NewProp_Cells = { "Cells", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVolumetricLightMapGridDesc, Cells), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Cells_MetaData), NewProp_Cells_MetaData) }; // 704981209
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVolumetricLightMapGridDesc_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVolumetricLightMapGridDesc_Statics::NewProp_GridBounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVolumetricLightMapGridDesc_Statics::NewProp_Guid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVolumetricLightMapGridDesc_Statics::NewProp_CellSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVolumetricLightMapGridDesc_Statics::NewProp_DetailCellSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVolumetricLightMapGridDesc_Statics::NewProp_BrickSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVolumetricLightMapGridDesc_Statics::NewProp_Cells_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVolumetricLightMapGridDesc_Statics::NewProp_Cells,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVolumetricLightMapGridDesc_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVolumetricLightMapGridDesc_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"VolumetricLightMapGridDesc",
	Z_Construct_UScriptStruct_FVolumetricLightMapGridDesc_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVolumetricLightMapGridDesc_Statics::PropPointers),
	sizeof(FVolumetricLightMapGridDesc),
	alignof(FVolumetricLightMapGridDesc),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVolumetricLightMapGridDesc_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVolumetricLightMapGridDesc_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FVolumetricLightMapGridDesc()
{
	if (!Z_Registration_Info_UScriptStruct_VolumetricLightMapGridDesc.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VolumetricLightMapGridDesc.InnerSingleton, Z_Construct_UScriptStruct_FVolumetricLightMapGridDesc_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_VolumetricLightMapGridDesc.InnerSingleton;
}
// End ScriptStruct FVolumetricLightMapGridDesc

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_StaticLightingData_VolumetricLightmapGrid_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FVolumetricLightMapGridCell::StaticStruct, Z_Construct_UScriptStruct_FVolumetricLightMapGridCell_Statics::NewStructOps, TEXT("VolumetricLightMapGridCell"), &Z_Registration_Info_UScriptStruct_VolumetricLightMapGridCell, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVolumetricLightMapGridCell), 704981209U) },
		{ FVolumetricLightMapGridDesc::StaticStruct, Z_Construct_UScriptStruct_FVolumetricLightMapGridDesc_Statics::NewStructOps, TEXT("VolumetricLightMapGridDesc"), &Z_Registration_Info_UScriptStruct_VolumetricLightMapGridDesc, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVolumetricLightMapGridDesc), 279783591U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_StaticLightingData_VolumetricLightmapGrid_h_1141026751(TEXT("/Script/Engine"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_StaticLightingData_VolumetricLightmapGrid_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_StaticLightingData_VolumetricLightmapGrid_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
