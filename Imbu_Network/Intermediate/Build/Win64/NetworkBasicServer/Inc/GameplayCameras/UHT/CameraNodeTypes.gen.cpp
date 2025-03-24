// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayCameras/Public/Nodes/CameraNodeTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCameraNodeTypes() {}

// Begin Cross Module References
GAMEPLAYCAMERAS_API UEnum* Z_Construct_UEnum_GameplayCameras_ECameraNodeOriginPosition();
GAMEPLAYCAMERAS_API UEnum* Z_Construct_UEnum_GameplayCameras_ECameraNodeSpace();
UPackage* Z_Construct_UPackage__Script_GameplayCameras();
// End Cross Module References

// Begin Enum ECameraNodeOriginPosition
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECameraNodeOriginPosition;
static UEnum* ECameraNodeOriginPosition_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ECameraNodeOriginPosition.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ECameraNodeOriginPosition.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GameplayCameras_ECameraNodeOriginPosition, (UObject*)Z_Construct_UPackage__Script_GameplayCameras(), TEXT("ECameraNodeOriginPosition"));
	}
	return Z_Registration_Info_UEnum_ECameraNodeOriginPosition.OuterSingleton;
}
template<> GAMEPLAYCAMERAS_API UEnum* StaticEnum<ECameraNodeOriginPosition>()
{
	return ECameraNodeOriginPosition_StaticEnum();
}
struct Z_Construct_UEnum_GameplayCameras_ECameraNodeOriginPosition_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ActiveContext.Comment", "/** The origin of the active evaluation context on the main layer's blend stack. */" },
		{ "ActiveContext.Name", "ECameraNodeOriginPosition::ActiveContext" },
		{ "ActiveContext.ToolTip", "The origin of the active evaluation context on the main layer's blend stack." },
		{ "CameraPose.Comment", "/** The position of the current camera pose. */" },
		{ "CameraPose.Name", "ECameraNodeOriginPosition::CameraPose" },
		{ "CameraPose.ToolTip", "The position of the current camera pose." },
		{ "Comment", "/**\n * Defines an origin position for a camera node to operate at.\n */" },
		{ "ModuleRelativePath", "Public/Nodes/CameraNodeTypes.h" },
		{ "OwningContext.Comment", "/** The origin of the evaluation context of the current camera node. */" },
		{ "OwningContext.Name", "ECameraNodeOriginPosition::OwningContext" },
		{ "OwningContext.ToolTip", "The origin of the evaluation context of the current camera node." },
		{ "Pawn.Comment", "/** The location of the player's controlled pawn. */" },
		{ "Pawn.Name", "ECameraNodeOriginPosition::Pawn" },
		{ "Pawn.ToolTip", "The location of the player's controlled pawn." },
		{ "Pivot.Comment", "/** The location of the current pivot. If no pivot is found, fallback to ActiveContext. */" },
		{ "Pivot.Name", "ECameraNodeOriginPosition::Pivot" },
		{ "Pivot.ToolTip", "The location of the current pivot. If no pivot is found, fallback to ActiveContext." },
		{ "ToolTip", "Defines an origin position for a camera node to operate at." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ECameraNodeOriginPosition::CameraPose", (int64)ECameraNodeOriginPosition::CameraPose },
		{ "ECameraNodeOriginPosition::ActiveContext", (int64)ECameraNodeOriginPosition::ActiveContext },
		{ "ECameraNodeOriginPosition::OwningContext", (int64)ECameraNodeOriginPosition::OwningContext },
		{ "ECameraNodeOriginPosition::Pivot", (int64)ECameraNodeOriginPosition::Pivot },
		{ "ECameraNodeOriginPosition::Pawn", (int64)ECameraNodeOriginPosition::Pawn },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GameplayCameras_ECameraNodeOriginPosition_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_GameplayCameras,
	nullptr,
	"ECameraNodeOriginPosition",
	"ECameraNodeOriginPosition",
	Z_Construct_UEnum_GameplayCameras_ECameraNodeOriginPosition_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayCameras_ECameraNodeOriginPosition_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayCameras_ECameraNodeOriginPosition_Statics::Enum_MetaDataParams), Z_Construct_UEnum_GameplayCameras_ECameraNodeOriginPosition_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_GameplayCameras_ECameraNodeOriginPosition()
{
	if (!Z_Registration_Info_UEnum_ECameraNodeOriginPosition.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECameraNodeOriginPosition.InnerSingleton, Z_Construct_UEnum_GameplayCameras_ECameraNodeOriginPosition_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ECameraNodeOriginPosition.InnerSingleton;
}
// End Enum ECameraNodeOriginPosition

// Begin Enum ECameraNodeSpace
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECameraNodeSpace;
static UEnum* ECameraNodeSpace_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ECameraNodeSpace.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ECameraNodeSpace.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GameplayCameras_ECameraNodeSpace, (UObject*)Z_Construct_UPackage__Script_GameplayCameras(), TEXT("ECameraNodeSpace"));
	}
	return Z_Registration_Info_UEnum_ECameraNodeSpace.OuterSingleton;
}
template<> GAMEPLAYCAMERAS_API UEnum* StaticEnum<ECameraNodeSpace>()
{
	return ECameraNodeSpace_StaticEnum();
}
struct Z_Construct_UEnum_GameplayCameras_ECameraNodeSpace_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ActiveContext.Comment", "/** The space of the active evaluation context on the main layer's blend stack. */" },
		{ "ActiveContext.Name", "ECameraNodeSpace::ActiveContext" },
		{ "ActiveContext.ToolTip", "The space of the active evaluation context on the main layer's blend stack." },
		{ "CameraPose.Comment", "/** The local space of the current camera pose. */" },
		{ "CameraPose.Name", "ECameraNodeSpace::CameraPose" },
		{ "CameraPose.ToolTip", "The local space of the current camera pose." },
		{ "Comment", "/**\n * Defines what space a camera node, or one of its features, should operate in.\n */" },
		{ "ModuleRelativePath", "Public/Nodes/CameraNodeTypes.h" },
		{ "OwningContext.Comment", "/** The space of the evaluation context of the current camera node. */" },
		{ "OwningContext.Name", "ECameraNodeSpace::OwningContext" },
		{ "OwningContext.ToolTip", "The space of the evaluation context of the current camera node." },
		{ "Pawn.Comment", "/** The space of the player's controlled pawn. */" },
		{ "Pawn.Name", "ECameraNodeSpace::Pawn" },
		{ "Pawn.ToolTip", "The space of the player's controlled pawn." },
		{ "Pivot.Comment", "/** The space of the current pivot. If no pivot is found, fallback to ActiveContext. */" },
		{ "Pivot.Name", "ECameraNodeSpace::Pivot" },
		{ "Pivot.ToolTip", "The space of the current pivot. If no pivot is found, fallback to ActiveContext." },
		{ "ToolTip", "Defines what space a camera node, or one of its features, should operate in." },
		{ "World.Comment", "/** The space of the world in which the camera rig evaluates. */" },
		{ "World.Name", "ECameraNodeSpace::World" },
		{ "World.ToolTip", "The space of the world in which the camera rig evaluates." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ECameraNodeSpace::CameraPose", (int64)ECameraNodeSpace::CameraPose },
		{ "ECameraNodeSpace::ActiveContext", (int64)ECameraNodeSpace::ActiveContext },
		{ "ECameraNodeSpace::OwningContext", (int64)ECameraNodeSpace::OwningContext },
		{ "ECameraNodeSpace::Pivot", (int64)ECameraNodeSpace::Pivot },
		{ "ECameraNodeSpace::Pawn", (int64)ECameraNodeSpace::Pawn },
		{ "ECameraNodeSpace::World", (int64)ECameraNodeSpace::World },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GameplayCameras_ECameraNodeSpace_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_GameplayCameras,
	nullptr,
	"ECameraNodeSpace",
	"ECameraNodeSpace",
	Z_Construct_UEnum_GameplayCameras_ECameraNodeSpace_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayCameras_ECameraNodeSpace_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayCameras_ECameraNodeSpace_Statics::Enum_MetaDataParams), Z_Construct_UEnum_GameplayCameras_ECameraNodeSpace_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_GameplayCameras_ECameraNodeSpace()
{
	if (!Z_Registration_Info_UEnum_ECameraNodeSpace.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECameraNodeSpace.InnerSingleton, Z_Construct_UEnum_GameplayCameras_ECameraNodeSpace_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ECameraNodeSpace.InnerSingleton;
}
// End Enum ECameraNodeSpace

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_CameraNodeTypes_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ECameraNodeOriginPosition_StaticEnum, TEXT("ECameraNodeOriginPosition"), &Z_Registration_Info_UEnum_ECameraNodeOriginPosition, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3879029595U) },
		{ ECameraNodeSpace_StaticEnum, TEXT("ECameraNodeSpace"), &Z_Registration_Info_UEnum_ECameraNodeSpace, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3423263223U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_CameraNodeTypes_h_3984827840(TEXT("/Script/GameplayCameras"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_CameraNodeTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_CameraNodeTypes_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
