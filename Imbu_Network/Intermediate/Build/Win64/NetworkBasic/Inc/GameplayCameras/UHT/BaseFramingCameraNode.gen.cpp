// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayCameras/Public/Nodes/Framing/BaseFramingCameraNode.h"
#include "GameplayCameras/Public/Core/CameraParameters.h"
#include "GameplayCameras/Public/Core/CameraVariableReferences.h"
#include "GameplayCameras/Public/Nodes/Framing/CameraFramingZone.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseFramingCameraNode() {}

// Begin Cross Module References
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UBaseFramingCameraNode();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UBaseFramingCameraNode_NoRegister();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UCameraNode();
GAMEPLAYCAMERAS_API UScriptStruct* Z_Construct_UScriptStruct_FCameraFramingZone();
GAMEPLAYCAMERAS_API UScriptStruct* Z_Construct_UScriptStruct_FDoubleCameraParameter();
GAMEPLAYCAMERAS_API UScriptStruct* Z_Construct_UScriptStruct_FFloatCameraParameter();
GAMEPLAYCAMERAS_API UScriptStruct* Z_Construct_UScriptStruct_FVector3dCameraVariableReference();
UPackage* Z_Construct_UPackage__Script_GameplayCameras();
// End Cross Module References

// Begin Class UBaseFramingCameraNode
void UBaseFramingCameraNode::StaticRegisterNativesUBaseFramingCameraNode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBaseFramingCameraNode);
UClass* Z_Construct_UClass_UBaseFramingCameraNode_NoRegister()
{
	return UBaseFramingCameraNode::StaticClass();
}
struct Z_Construct_UClass_UBaseFramingCameraNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "CameraNodeCategories", "Framing" },
		{ "Comment", "/**\n * The base class for a standard scren-space framing camera node.\n */" },
		{ "IncludePath", "Nodes/Framing/BaseFramingCameraNode.h" },
		{ "ModuleRelativePath", "Public/Nodes/Framing/BaseFramingCameraNode.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "The base class for a standard scren-space framing camera node." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetLocation_MetaData[] = {
		{ "Category", "Target" },
		{ "Comment", "/**\n\x09 * A camera variable providing the location of the target to frame. If unspecified,\n\x09 * the player pawn's location will be used by default.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Nodes/Framing/BaseFramingCameraNode.h" },
		{ "ToolTip", "A camera variable providing the location of the target to frame. If unspecified,\nthe player pawn's location will be used by default." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HorizontalFraming_MetaData[] = {
		{ "Category", "Framing Target" },
		{ "Comment", "/** The ideal horizontal screen-space position of the target. */" },
		{ "ModuleRelativePath", "Public/Nodes/Framing/BaseFramingCameraNode.h" },
		{ "ToolTip", "The ideal horizontal screen-space position of the target." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VerticalFraming_MetaData[] = {
		{ "Category", "Framing Target" },
		{ "Comment", "/** The ideal vertical screen-space position of the target. */" },
		{ "ModuleRelativePath", "Public/Nodes/Framing/BaseFramingCameraNode.h" },
		{ "ToolTip", "The ideal vertical screen-space position of the target." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReframeDampingFactor_MetaData[] = {
		{ "Category", "Framing Target" },
		{ "Comment", "/** The damping factor for how fast the framing recenters on the target. */" },
		{ "ModuleRelativePath", "Public/Nodes/Framing/BaseFramingCameraNode.h" },
		{ "ToolTip", "The damping factor for how fast the framing recenters on the target." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LowReframeDampingFactor_MetaData[] = {
		{ "Category", "Framing Target" },
		{ "Comment", "/** \n\x09 * If valid, the recentering damping factor will interpolate between LowReframeDampingFactor \n\x09 * and ReframeDampingFactor as the target moves between the ideal target position and the\n\x09 * boundaries of the hard-zone. If invalid, no interpolation occurs and the damping factor\n\x09 * is always equal to ReframeDampingFactor. */" },
		{ "ModuleRelativePath", "Public/Nodes/Framing/BaseFramingCameraNode.h" },
		{ "ToolTip", "If valid, the recentering damping factor will interpolate between LowReframeDampingFactor\nand ReframeDampingFactor as the target moves between the ideal target position and the\nboundaries of the hard-zone. If invalid, no interpolation occurs and the damping factor\nis always equal to ReframeDampingFactor." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReframeUnlockRadius_MetaData[] = {
		{ "Category", "Framing Target" },
		{ "Comment", "/**\n\x09 * The distance from the ideal framing position at which we can disengage reframing.\n\x09 * This should be a very small value, but if it is too small the reframing will keep \"chasing\"\n\x09 * the target for a long time even if it stays in the dead zone.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Nodes/Framing/BaseFramingCameraNode.h" },
		{ "ToolTip", "The distance from the ideal framing position at which we can disengage reframing.\nThis should be a very small value, but if it is too small the reframing will keep \"chasing\"\nthe target for a long time even if it stays in the dead zone." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeadZone_MetaData[] = {
		{ "Category", "Framing Zones" },
		{ "Comment", "/** \n\x09 * The margins of the dead zone, i.e. the zone inside which the target can freely move.\n\x09 * Margins are expressed in screen percentages from the edges.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Nodes/Framing/BaseFramingCameraNode.h" },
		{ "ToolTip", "The margins of the dead zone, i.e. the zone inside which the target can freely move.\nMargins are expressed in screen percentages from the edges." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SoftZone_MetaData[] = {
		{ "Category", "Framing Zones" },
		{ "Comment", "/**\n\x09 * The margins of the soft zone, i.e. the zone inside which the reframing will engage, in order\n\x09 * to bring the target back towards the ideal framing position. If the target is outside of the\n\x09 * soft zone, it will be forcibly and immedialy brought back to its edges, so this zone also \n\x09 * defines the \"hard\" or \"safe\" zone of framing.\n\x09 * Margins are expressed in screen percentages from the edges.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Nodes/Framing/BaseFramingCameraNode.h" },
		{ "ToolTip", "The margins of the soft zone, i.e. the zone inside which the reframing will engage, in order\nto bring the target back towards the ideal framing position. If the target is outside of the\nsoft zone, it will be forcibly and immedialy brought back to its edges, so this zone also\ndefines the \"hard\" or \"safe\" zone of framing.\nMargins are expressed in screen percentages from the edges." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HorizontalFraming;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VerticalFraming;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReframeDampingFactor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LowReframeDampingFactor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReframeUnlockRadius;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DeadZone;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SoftZone;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseFramingCameraNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBaseFramingCameraNode_Statics::NewProp_TargetLocation = { "TargetLocation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseFramingCameraNode, TargetLocation), Z_Construct_UScriptStruct_FVector3dCameraVariableReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetLocation_MetaData), NewProp_TargetLocation_MetaData) }; // 1316263577
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBaseFramingCameraNode_Statics::NewProp_HorizontalFraming = { "HorizontalFraming", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseFramingCameraNode, HorizontalFraming), Z_Construct_UScriptStruct_FDoubleCameraParameter, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HorizontalFraming_MetaData), NewProp_HorizontalFraming_MetaData) }; // 60259665
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBaseFramingCameraNode_Statics::NewProp_VerticalFraming = { "VerticalFraming", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseFramingCameraNode, VerticalFraming), Z_Construct_UScriptStruct_FDoubleCameraParameter, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VerticalFraming_MetaData), NewProp_VerticalFraming_MetaData) }; // 60259665
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBaseFramingCameraNode_Statics::NewProp_ReframeDampingFactor = { "ReframeDampingFactor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseFramingCameraNode, ReframeDampingFactor), Z_Construct_UScriptStruct_FFloatCameraParameter, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReframeDampingFactor_MetaData), NewProp_ReframeDampingFactor_MetaData) }; // 834407157
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBaseFramingCameraNode_Statics::NewProp_LowReframeDampingFactor = { "LowReframeDampingFactor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseFramingCameraNode, LowReframeDampingFactor), Z_Construct_UScriptStruct_FFloatCameraParameter, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LowReframeDampingFactor_MetaData), NewProp_LowReframeDampingFactor_MetaData) }; // 834407157
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBaseFramingCameraNode_Statics::NewProp_ReframeUnlockRadius = { "ReframeUnlockRadius", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseFramingCameraNode, ReframeUnlockRadius), Z_Construct_UScriptStruct_FFloatCameraParameter, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReframeUnlockRadius_MetaData), NewProp_ReframeUnlockRadius_MetaData) }; // 834407157
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBaseFramingCameraNode_Statics::NewProp_DeadZone = { "DeadZone", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseFramingCameraNode, DeadZone), Z_Construct_UScriptStruct_FCameraFramingZone, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeadZone_MetaData), NewProp_DeadZone_MetaData) }; // 1126394329
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBaseFramingCameraNode_Statics::NewProp_SoftZone = { "SoftZone", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseFramingCameraNode, SoftZone), Z_Construct_UScriptStruct_FCameraFramingZone, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SoftZone_MetaData), NewProp_SoftZone_MetaData) }; // 1126394329
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBaseFramingCameraNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseFramingCameraNode_Statics::NewProp_TargetLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseFramingCameraNode_Statics::NewProp_HorizontalFraming,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseFramingCameraNode_Statics::NewProp_VerticalFraming,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseFramingCameraNode_Statics::NewProp_ReframeDampingFactor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseFramingCameraNode_Statics::NewProp_LowReframeDampingFactor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseFramingCameraNode_Statics::NewProp_ReframeUnlockRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseFramingCameraNode_Statics::NewProp_DeadZone,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseFramingCameraNode_Statics::NewProp_SoftZone,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseFramingCameraNode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBaseFramingCameraNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCameraNode,
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayCameras,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseFramingCameraNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBaseFramingCameraNode_Statics::ClassParams = {
	&UBaseFramingCameraNode::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBaseFramingCameraNode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBaseFramingCameraNode_Statics::PropPointers),
	0,
	0x002810A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseFramingCameraNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UBaseFramingCameraNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBaseFramingCameraNode()
{
	if (!Z_Registration_Info_UClass_UBaseFramingCameraNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBaseFramingCameraNode.OuterSingleton, Z_Construct_UClass_UBaseFramingCameraNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBaseFramingCameraNode.OuterSingleton;
}
template<> GAMEPLAYCAMERAS_API UClass* StaticClass<UBaseFramingCameraNode>()
{
	return UBaseFramingCameraNode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseFramingCameraNode);
UBaseFramingCameraNode::~UBaseFramingCameraNode() {}
// End Class UBaseFramingCameraNode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Framing_BaseFramingCameraNode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBaseFramingCameraNode, UBaseFramingCameraNode::StaticClass, TEXT("UBaseFramingCameraNode"), &Z_Registration_Info_UClass_UBaseFramingCameraNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBaseFramingCameraNode), 1622101722U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Framing_BaseFramingCameraNode_h_3179275048(TEXT("/Script/GameplayCameras"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Framing_BaseFramingCameraNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Framing_BaseFramingCameraNode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
