// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Nodes/Public/InterchangeMeshDefinitions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterchangeMeshDefinitions() {}

// Begin Cross Module References
INTERCHANGENODES_API UEnum* Z_Construct_UEnum_InterchangeNodes_EInterchangeMeshCollision();
UPackage* Z_Construct_UPackage__Script_InterchangeNodes();
// End Cross Module References

// Begin Enum EInterchangeMeshCollision
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EInterchangeMeshCollision;
static UEnum* EInterchangeMeshCollision_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EInterchangeMeshCollision.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EInterchangeMeshCollision.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_InterchangeNodes_EInterchangeMeshCollision, (UObject*)Z_Construct_UPackage__Script_InterchangeNodes(), TEXT("EInterchangeMeshCollision"));
	}
	return Z_Registration_Info_UEnum_EInterchangeMeshCollision.OuterSingleton;
}
template<> INTERCHANGENODES_API UEnum* StaticEnum<EInterchangeMeshCollision>()
{
	return EInterchangeMeshCollision_StaticEnum();
}
struct Z_Construct_UEnum_InterchangeNodes_EInterchangeMeshCollision_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Box.Comment", "/** Generates a new box collision mesh encompassing the static mesh*/" },
		{ "Box.Name", "EInterchangeMeshCollision::Box" },
		{ "Box.ToolTip", "Generates a new box collision mesh encompassing the static mesh" },
		{ "Capsule.Comment", "/** Generates a new capsule collision mesh encompassing the static mesh*/" },
		{ "Capsule.Name", "EInterchangeMeshCollision::Capsule" },
		{ "Capsule.ToolTip", "Generates a new capsule collision mesh encompassing the static mesh" },
		{ "Convex10DOP_X.Comment", "/** Generates a new axis-aligned box collision mesh with the 4 X-axis aligned edges beveled (10 total sides) encompassing the static mesh*/" },
		{ "Convex10DOP_X.DisplayName", "10DOP-X Simplified" },
		{ "Convex10DOP_X.Name", "EInterchangeMeshCollision::Convex10DOP_X" },
		{ "Convex10DOP_X.ToolTip", "Generates a new axis-aligned box collision mesh with the 4 X-axis aligned edges beveled (10 total sides) encompassing the static mesh" },
		{ "Convex10DOP_Y.Comment", "/** Generates a new axis-aligned box collision mesh with the 4 Y-axis aligned edges beveled (10 total sides) encompassing the static mesh*/" },
		{ "Convex10DOP_Y.DisplayName", "10DOP-Y Simplified" },
		{ "Convex10DOP_Y.Name", "EInterchangeMeshCollision::Convex10DOP_Y" },
		{ "Convex10DOP_Y.ToolTip", "Generates a new axis-aligned box collision mesh with the 4 Y-axis aligned edges beveled (10 total sides) encompassing the static mesh" },
		{ "Convex10DOP_Z.Comment", "/** Generates a new axis-aligned box collision mesh with the 4 Z-axis aligned edges beveled (10 total sides) encompassing the static mesh*/" },
		{ "Convex10DOP_Z.DisplayName", "10DOP-Z Simplified" },
		{ "Convex10DOP_Z.Name", "EInterchangeMeshCollision::Convex10DOP_Z" },
		{ "Convex10DOP_Z.ToolTip", "Generates a new axis-aligned box collision mesh with the 4 Z-axis aligned edges beveled (10 total sides) encompassing the static mesh" },
		{ "Convex18DOP.Comment", "/** Generates a new axis-aligned box collision mesh with all edges beveled (18 total sides) encompassing the static mesh*/" },
		{ "Convex18DOP.DisplayName", "18DOP Simplified" },
		{ "Convex18DOP.Name", "EInterchangeMeshCollision::Convex18DOP" },
		{ "Convex18DOP.ToolTip", "Generates a new axis-aligned box collision mesh with all edges beveled (18 total sides) encompassing the static mesh" },
		{ "Convex26DOP.Comment", "/** Generates a new axis-aligned box collision mesh with all edges and corners beveled (26 total sides) encompassing the static mesh*/" },
		{ "Convex26DOP.DisplayName", "26DOP Simplified" },
		{ "Convex26DOP.Name", "EInterchangeMeshCollision::Convex26DOP" },
		{ "Convex26DOP.ToolTip", "Generates a new axis-aligned box collision mesh with all edges and corners beveled (26 total sides) encompassing the static mesh" },
		{ "ModuleRelativePath", "Public/InterchangeMeshDefinitions.h" },
		{ "None.Comment", "/** Generates no collisions, but continue to import custom collisions if the file has ones*/" },
		{ "None.Name", "EInterchangeMeshCollision::None" },
		{ "None.ToolTip", "Generates no collisions, but continue to import custom collisions if the file has ones" },
		{ "Sphere.Comment", "/** Generates a new sphere collision mesh encompassing the static mesh*/" },
		{ "Sphere.Name", "EInterchangeMeshCollision::Sphere" },
		{ "Sphere.ToolTip", "Generates a new sphere collision mesh encompassing the static mesh" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EInterchangeMeshCollision::Box", (int64)EInterchangeMeshCollision::Box },
		{ "EInterchangeMeshCollision::Sphere", (int64)EInterchangeMeshCollision::Sphere },
		{ "EInterchangeMeshCollision::Capsule", (int64)EInterchangeMeshCollision::Capsule },
		{ "EInterchangeMeshCollision::Convex10DOP_X", (int64)EInterchangeMeshCollision::Convex10DOP_X },
		{ "EInterchangeMeshCollision::Convex10DOP_Y", (int64)EInterchangeMeshCollision::Convex10DOP_Y },
		{ "EInterchangeMeshCollision::Convex10DOP_Z", (int64)EInterchangeMeshCollision::Convex10DOP_Z },
		{ "EInterchangeMeshCollision::Convex18DOP", (int64)EInterchangeMeshCollision::Convex18DOP },
		{ "EInterchangeMeshCollision::Convex26DOP", (int64)EInterchangeMeshCollision::Convex26DOP },
		{ "EInterchangeMeshCollision::None", (int64)EInterchangeMeshCollision::None },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_InterchangeNodes_EInterchangeMeshCollision_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_InterchangeNodes,
	nullptr,
	"EInterchangeMeshCollision",
	"EInterchangeMeshCollision",
	Z_Construct_UEnum_InterchangeNodes_EInterchangeMeshCollision_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_InterchangeNodes_EInterchangeMeshCollision_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_InterchangeNodes_EInterchangeMeshCollision_Statics::Enum_MetaDataParams), Z_Construct_UEnum_InterchangeNodes_EInterchangeMeshCollision_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_InterchangeNodes_EInterchangeMeshCollision()
{
	if (!Z_Registration_Info_UEnum_EInterchangeMeshCollision.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EInterchangeMeshCollision.InnerSingleton, Z_Construct_UEnum_InterchangeNodes_EInterchangeMeshCollision_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EInterchangeMeshCollision.InnerSingleton;
}
// End Enum EInterchangeMeshCollision

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeMeshDefinitions_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EInterchangeMeshCollision_StaticEnum, TEXT("EInterchangeMeshCollision"), &Z_Registration_Info_UEnum_EInterchangeMeshCollision, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 987414362U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeMeshDefinitions_h_3475354231(TEXT("/Script/InterchangeNodes"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeMeshDefinitions_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeMeshDefinitions_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
