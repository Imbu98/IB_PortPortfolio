// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/ClothingSystemRuntimeInterface/Public/ClothingSystemRuntimeTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClothingSystemRuntimeTypes() {}

// Begin Cross Module References
CLOTHINGSYSTEMRUNTIMEINTERFACE_API UEnum* Z_Construct_UEnum_ClothingSystemRuntimeInterface_EClothingTeleportMode();
UPackage* Z_Construct_UPackage__Script_ClothingSystemRuntimeInterface();
// End Cross Module References

// Begin Enum EClothingTeleportMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EClothingTeleportMode;
static UEnum* EClothingTeleportMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EClothingTeleportMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EClothingTeleportMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ClothingSystemRuntimeInterface_EClothingTeleportMode, (UObject*)Z_Construct_UPackage__Script_ClothingSystemRuntimeInterface(), TEXT("EClothingTeleportMode"));
	}
	return Z_Registration_Info_UEnum_EClothingTeleportMode.OuterSingleton;
}
template<> CLOTHINGSYSTEMRUNTIMEINTERFACE_API UEnum* StaticEnum<EClothingTeleportMode>()
{
	return EClothingTeleportMode_StaticEnum();
}
struct Z_Construct_UEnum_ClothingSystemRuntimeInterface_EClothingTeleportMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "HardReset.Comment", "// Hard reset the simulation by refreshing the cloth config\n" },
		{ "HardReset.Name", "EClothingTeleportMode::HardReset" },
		{ "HardReset.ToolTip", "Hard reset the simulation by refreshing the cloth config" },
		{ "ModuleRelativePath", "Public/ClothingSystemRuntimeTypes.h" },
		{ "None.Comment", "// No teleport, simulate as normal\n" },
		{ "None.Name", "EClothingTeleportMode::None" },
		{ "None.ToolTip", "No teleport, simulate as normal" },
		{ "Teleport.Comment", "// Teleport the simulation, causing no intertial effects but keep the sim mesh shape\n" },
		{ "Teleport.Name", "EClothingTeleportMode::Teleport" },
		{ "Teleport.ToolTip", "Teleport the simulation, causing no intertial effects but keep the sim mesh shape" },
		{ "TeleportAndReset.Comment", "// Teleport the simulation, causing no intertial effects and reset the sim mesh shape\n" },
		{ "TeleportAndReset.Name", "EClothingTeleportMode::TeleportAndReset" },
		{ "TeleportAndReset.ToolTip", "Teleport the simulation, causing no intertial effects and reset the sim mesh shape" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EClothingTeleportMode::None", (int64)EClothingTeleportMode::None },
		{ "EClothingTeleportMode::Teleport", (int64)EClothingTeleportMode::Teleport },
		{ "EClothingTeleportMode::TeleportAndReset", (int64)EClothingTeleportMode::TeleportAndReset },
		{ "EClothingTeleportMode::HardReset", (int64)EClothingTeleportMode::HardReset },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ClothingSystemRuntimeInterface_EClothingTeleportMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ClothingSystemRuntimeInterface,
	nullptr,
	"EClothingTeleportMode",
	"EClothingTeleportMode",
	Z_Construct_UEnum_ClothingSystemRuntimeInterface_EClothingTeleportMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ClothingSystemRuntimeInterface_EClothingTeleportMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ClothingSystemRuntimeInterface_EClothingTeleportMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ClothingSystemRuntimeInterface_EClothingTeleportMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ClothingSystemRuntimeInterface_EClothingTeleportMode()
{
	if (!Z_Registration_Info_UEnum_EClothingTeleportMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EClothingTeleportMode.InnerSingleton, Z_Construct_UEnum_ClothingSystemRuntimeInterface_EClothingTeleportMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EClothingTeleportMode.InnerSingleton;
}
// End Enum EClothingTeleportMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeInterface_Public_ClothingSystemRuntimeTypes_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EClothingTeleportMode_StaticEnum, TEXT("EClothingTeleportMode"), &Z_Registration_Info_UEnum_EClothingTeleportMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3664216097U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeInterface_Public_ClothingSystemRuntimeTypes_h_1245614159(TEXT("/Script/ClothingSystemRuntimeInterface"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeInterface_Public_ClothingSystemRuntimeTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeInterface_Public_ClothingSystemRuntimeTypes_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
