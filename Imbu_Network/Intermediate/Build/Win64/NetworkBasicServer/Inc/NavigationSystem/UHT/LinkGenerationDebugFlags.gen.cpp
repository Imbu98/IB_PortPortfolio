// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/NavigationSystem/Public/NavMesh/LinkGenerationDebugFlags.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLinkGenerationDebugFlags() {}

// Begin Cross Module References
NAVIGATIONSYSTEM_API UEnum* Z_Construct_UEnum_NavigationSystem_ELinkGenerationDebugFlags();
UPackage* Z_Construct_UPackage__Script_NavigationSystem();
// End Cross Module References

// Begin Enum ELinkGenerationDebugFlags
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELinkGenerationDebugFlags;
static UEnum* ELinkGenerationDebugFlags_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ELinkGenerationDebugFlags.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ELinkGenerationDebugFlags.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_NavigationSystem_ELinkGenerationDebugFlags, (UObject*)Z_Construct_UPackage__Script_NavigationSystem(), TEXT("ELinkGenerationDebugFlags"));
	}
	return Z_Registration_Info_UEnum_ELinkGenerationDebugFlags.OuterSingleton;
}
template<> NAVIGATIONSYSTEM_API UEnum* StaticEnum<ELinkGenerationDebugFlags>()
{
	return ELinkGenerationDebugFlags_StaticEnum();
}
struct Z_Construct_UEnum_NavigationSystem_ELinkGenerationDebugFlags_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Bitflags", "" },
		{ "FilteredLinks.Name", "ELinkGenerationDebugFlags::FilteredLinks" },
		{ "Links.Name", "ELinkGenerationDebugFlags::Links" },
		{ "ModuleRelativePath", "Public/NavMesh/LinkGenerationDebugFlags.h" },
		{ "SelectedEdge.Name", "ELinkGenerationDebugFlags::SelectedEdge" },
		{ "SelectedEdgeCollisions.Name", "ELinkGenerationDebugFlags::SelectedEdgeCollisions" },
		{ "SelectedEdgeLandingSamples.Name", "ELinkGenerationDebugFlags::SelectedEdgeLandingSamples" },
		{ "SelectedEdgeTrajectory.Name", "ELinkGenerationDebugFlags::SelectedEdgeTrajectory" },
		{ "UseEnumValuesAsMaskValuesInEditor", "true" },
		{ "WalkableBorders.Name", "ELinkGenerationDebugFlags::WalkableBorders" },
		{ "WalkableSurface.Name", "ELinkGenerationDebugFlags::WalkableSurface" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ELinkGenerationDebugFlags::WalkableSurface", (int64)ELinkGenerationDebugFlags::WalkableSurface },
		{ "ELinkGenerationDebugFlags::WalkableBorders", (int64)ELinkGenerationDebugFlags::WalkableBorders },
		{ "ELinkGenerationDebugFlags::SelectedEdge", (int64)ELinkGenerationDebugFlags::SelectedEdge },
		{ "ELinkGenerationDebugFlags::SelectedEdgeTrajectory", (int64)ELinkGenerationDebugFlags::SelectedEdgeTrajectory },
		{ "ELinkGenerationDebugFlags::SelectedEdgeLandingSamples", (int64)ELinkGenerationDebugFlags::SelectedEdgeLandingSamples },
		{ "ELinkGenerationDebugFlags::SelectedEdgeCollisions", (int64)ELinkGenerationDebugFlags::SelectedEdgeCollisions },
		{ "ELinkGenerationDebugFlags::Links", (int64)ELinkGenerationDebugFlags::Links },
		{ "ELinkGenerationDebugFlags::FilteredLinks", (int64)ELinkGenerationDebugFlags::FilteredLinks },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_NavigationSystem_ELinkGenerationDebugFlags_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_NavigationSystem,
	nullptr,
	"ELinkGenerationDebugFlags",
	"ELinkGenerationDebugFlags",
	Z_Construct_UEnum_NavigationSystem_ELinkGenerationDebugFlags_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_NavigationSystem_ELinkGenerationDebugFlags_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_NavigationSystem_ELinkGenerationDebugFlags_Statics::Enum_MetaDataParams), Z_Construct_UEnum_NavigationSystem_ELinkGenerationDebugFlags_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_NavigationSystem_ELinkGenerationDebugFlags()
{
	if (!Z_Registration_Info_UEnum_ELinkGenerationDebugFlags.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELinkGenerationDebugFlags.InnerSingleton, Z_Construct_UEnum_NavigationSystem_ELinkGenerationDebugFlags_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ELinkGenerationDebugFlags.InnerSingleton;
}
// End Enum ELinkGenerationDebugFlags

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavMesh_LinkGenerationDebugFlags_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ELinkGenerationDebugFlags_StaticEnum, TEXT("ELinkGenerationDebugFlags"), &Z_Registration_Info_UEnum_ELinkGenerationDebugFlags, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 340236397U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavMesh_LinkGenerationDebugFlags_h_2221581437(TEXT("/Script/NavigationSystem"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavMesh_LinkGenerationDebugFlags_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavMesh_LinkGenerationDebugFlags_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
