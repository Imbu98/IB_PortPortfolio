// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayCameras/Public/Nodes/Common/LensParametersCameraNode.h"
#include "GameplayCameras/Public/Core/CameraParameters.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLensParametersCameraNode() {}

// Begin Cross Module References
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UCameraNode();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_ULensParametersCameraNode();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_ULensParametersCameraNode_NoRegister();
GAMEPLAYCAMERAS_API UScriptStruct* Z_Construct_UScriptStruct_FBooleanCameraParameter();
GAMEPLAYCAMERAS_API UScriptStruct* Z_Construct_UScriptStruct_FFloatCameraParameter();
UPackage* Z_Construct_UPackage__Script_GameplayCameras();
// End Cross Module References

// Begin Class ULensParametersCameraNode
void ULensParametersCameraNode::StaticRegisterNativesULensParametersCameraNode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULensParametersCameraNode);
UClass* Z_Construct_UClass_ULensParametersCameraNode_NoRegister()
{
	return ULensParametersCameraNode::StaticClass();
}
struct Z_Construct_UClass_ULensParametersCameraNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "CameraNodeCategories", "Common,Lens" },
		{ "Comment", "/**\n * A camera node that sets parameter values on the camera lens.\n */" },
		{ "IncludePath", "Nodes/Common/LensParametersCameraNode.h" },
		{ "ModuleRelativePath", "Public/Nodes/Common/LensParametersCameraNode.h" },
		{ "ToolTip", "A camera node that sets parameter values on the camera lens." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FocalLength_MetaData[] = {
		{ "Category", "Lens Parameters" },
		{ "Comment", "/** Current focal length of the camera (i.e. controls FoV, zoom) */" },
		{ "ModuleRelativePath", "Public/Nodes/Common/LensParametersCameraNode.h" },
		{ "ToolTip", "Current focal length of the camera (i.e. controls FoV, zoom)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FocusDistance_MetaData[] = {
		{ "Category", "Lens Parameters" },
		{ "Comment", "/** Manually-controlled focus distance (manual focus mode only) */" },
		{ "ModuleRelativePath", "Public/Nodes/Common/LensParametersCameraNode.h" },
		{ "ToolTip", "Manually-controlled focus distance (manual focus mode only)" },
		{ "Units", "cm" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Aperture_MetaData[] = {
		{ "Category", "Lens Parameters" },
		{ "Comment", "/** Current aperture, in terms of f-stop (e.g. 2.8 for f/2.8) */" },
		{ "ModuleRelativePath", "Public/Nodes/Common/LensParametersCameraNode.h" },
		{ "ToolTip", "Current aperture, in terms of f-stop (e.g. 2.8 for f/2.8)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShutterSpeed_MetaData[] = {
		{ "Category", "Lens Parameters" },
		{ "Comment", "/** Current shutter speed, in 1/seconds */" },
		{ "DisplayName", "Shutter Speed (1/s)" },
		{ "ModuleRelativePath", "Public/Nodes/Common/LensParametersCameraNode.h" },
		{ "ToolTip", "Current shutter speed, in 1/seconds" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnablePhysicalCamera_MetaData[] = {
		{ "Category", "Lens Parameters" },
		{ "Comment", "/** \n\x09 * Whether post-process settings should be automatically applied to reflect\n\x09 * the lens settings.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Nodes/Common/LensParametersCameraNode.h" },
		{ "ToolTip", "Whether post-process settings should be automatically applied to reflect\nthe lens settings." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_FocalLength;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FocusDistance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Aperture;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ShutterSpeed;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EnablePhysicalCamera;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULensParametersCameraNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULensParametersCameraNode_Statics::NewProp_FocalLength = { "FocalLength", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULensParametersCameraNode, FocalLength), Z_Construct_UScriptStruct_FFloatCameraParameter, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FocalLength_MetaData), NewProp_FocalLength_MetaData) }; // 834407157
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULensParametersCameraNode_Statics::NewProp_FocusDistance = { "FocusDistance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULensParametersCameraNode, FocusDistance), Z_Construct_UScriptStruct_FFloatCameraParameter, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FocusDistance_MetaData), NewProp_FocusDistance_MetaData) }; // 834407157
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULensParametersCameraNode_Statics::NewProp_Aperture = { "Aperture", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULensParametersCameraNode, Aperture), Z_Construct_UScriptStruct_FFloatCameraParameter, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Aperture_MetaData), NewProp_Aperture_MetaData) }; // 834407157
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULensParametersCameraNode_Statics::NewProp_ShutterSpeed = { "ShutterSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULensParametersCameraNode, ShutterSpeed), Z_Construct_UScriptStruct_FFloatCameraParameter, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShutterSpeed_MetaData), NewProp_ShutterSpeed_MetaData) }; // 834407157
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULensParametersCameraNode_Statics::NewProp_EnablePhysicalCamera = { "EnablePhysicalCamera", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULensParametersCameraNode, EnablePhysicalCamera), Z_Construct_UScriptStruct_FBooleanCameraParameter, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnablePhysicalCamera_MetaData), NewProp_EnablePhysicalCamera_MetaData) }; // 2798599862
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULensParametersCameraNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULensParametersCameraNode_Statics::NewProp_FocalLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULensParametersCameraNode_Statics::NewProp_FocusDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULensParametersCameraNode_Statics::NewProp_Aperture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULensParametersCameraNode_Statics::NewProp_ShutterSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULensParametersCameraNode_Statics::NewProp_EnablePhysicalCamera,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULensParametersCameraNode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULensParametersCameraNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCameraNode,
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayCameras,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULensParametersCameraNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULensParametersCameraNode_Statics::ClassParams = {
	&ULensParametersCameraNode::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ULensParametersCameraNode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ULensParametersCameraNode_Statics::PropPointers),
	0,
	0x002810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULensParametersCameraNode_Statics::Class_MetaDataParams), Z_Construct_UClass_ULensParametersCameraNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULensParametersCameraNode()
{
	if (!Z_Registration_Info_UClass_ULensParametersCameraNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULensParametersCameraNode.OuterSingleton, Z_Construct_UClass_ULensParametersCameraNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULensParametersCameraNode.OuterSingleton;
}
template<> GAMEPLAYCAMERAS_API UClass* StaticClass<ULensParametersCameraNode>()
{
	return ULensParametersCameraNode::StaticClass();
}
ULensParametersCameraNode::ULensParametersCameraNode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULensParametersCameraNode);
ULensParametersCameraNode::~ULensParametersCameraNode() {}
// End Class ULensParametersCameraNode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Common_LensParametersCameraNode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULensParametersCameraNode, ULensParametersCameraNode::StaticClass, TEXT("ULensParametersCameraNode"), &Z_Registration_Info_UClass_ULensParametersCameraNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULensParametersCameraNode), 289269148U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Common_LensParametersCameraNode_h_1158725247(TEXT("/Script/GameplayCameras"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Common_LensParametersCameraNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Common_LensParametersCameraNode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
