// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayCameras/Public/Nodes/Common/FilmbackCameraNode.h"
#include "GameplayCameras/Public/Core/CameraParameters.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFilmbackCameraNode() {}

// Begin Cross Module References
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAspectRatioAxisConstraint();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UCameraNode();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UFilmbackCameraNode();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UFilmbackCameraNode_NoRegister();
GAMEPLAYCAMERAS_API UScriptStruct* Z_Construct_UScriptStruct_FBooleanCameraParameter();
GAMEPLAYCAMERAS_API UScriptStruct* Z_Construct_UScriptStruct_FFloatCameraParameter();
UPackage* Z_Construct_UPackage__Script_GameplayCameras();
// End Cross Module References

// Begin Class UFilmbackCameraNode
void UFilmbackCameraNode::StaticRegisterNativesUFilmbackCameraNode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFilmbackCameraNode);
UClass* Z_Construct_UClass_UFilmbackCameraNode_NoRegister()
{
	return UFilmbackCameraNode::StaticClass();
}
struct Z_Construct_UClass_UFilmbackCameraNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "CameraNodeCategories", "Common,Body" },
		{ "Comment", "/**\n * A camera node that configures the camera filmback.\n */" },
		{ "IncludePath", "Nodes/Common/FilmbackCameraNode.h" },
		{ "ModuleRelativePath", "Public/Nodes/Common/FilmbackCameraNode.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "A camera node that configures the camera filmback." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SensorWidth_MetaData[] = {
		{ "Category", "Filmback" },
		{ "ClampMin", "0.001" },
		{ "Comment", "/** Horizontal size of filmback or digital sensor, in mm. */" },
		{ "ForceUnits", "mm" },
		{ "ModuleRelativePath", "Public/Nodes/Common/FilmbackCameraNode.h" },
		{ "ToolTip", "Horizontal size of filmback or digital sensor, in mm." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SensorHeight_MetaData[] = {
		{ "Category", "Filmback" },
		{ "ClampMin", "0.001" },
		{ "Comment", "/** Vertical size of filmback or digital sensor, in mm. */" },
		{ "ForceUnits", "mm" },
		{ "ModuleRelativePath", "Public/Nodes/Common/FilmbackCameraNode.h" },
		{ "ToolTip", "Vertical size of filmback or digital sensor, in mm." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ISO_MetaData[] = {
		{ "Category", "Filmback" },
		{ "Comment", "/** The camera sensor sensitivity in ISO. */" },
		{ "ModuleRelativePath", "Public/Nodes/Common/FilmbackCameraNode.h" },
		{ "ToolTip", "The camera sensor sensitivity in ISO." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConstrainAspectRatio_MetaData[] = {
		{ "Category", "Filmback" },
		{ "Comment", "/** Whether to constrain the aspect ratio of the evaluated camera. */" },
		{ "ModuleRelativePath", "Public/Nodes/Common/FilmbackCameraNode.h" },
		{ "ToolTip", "Whether to constrain the aspect ratio of the evaluated camera." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverrideAspectRatioAxisConstraint_MetaData[] = {
		{ "Category", "Filmback" },
		{ "Comment", "/**\n\x09 * Whether to override the default aspect ratio axis constraint defined on the player controller.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Nodes/Common/FilmbackCameraNode.h" },
		{ "ToolTip", "Whether to override the default aspect ratio axis constraint defined on the player controller." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AspectRatioAxisConstraint_MetaData[] = {
		{ "Category", "Filmback" },
		{ "Comment", "/** \n\x09 * Defines the axis along which to constrain the aspect ratio of the evaluated camera.\n\x09 * Only used when ConstrainAspectRatio is false and OverrideAspectRatioAxisConstraint is true.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Nodes/Common/FilmbackCameraNode.h" },
		{ "ToolTip", "Defines the axis along which to constrain the aspect ratio of the evaluated camera.\nOnly used when ConstrainAspectRatio is false and OverrideAspectRatioAxisConstraint is true." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SensorWidth;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SensorHeight;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ISO;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ConstrainAspectRatio;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OverrideAspectRatioAxisConstraint;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AspectRatioAxisConstraint;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFilmbackCameraNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFilmbackCameraNode_Statics::NewProp_SensorWidth = { "SensorWidth", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFilmbackCameraNode, SensorWidth), Z_Construct_UScriptStruct_FFloatCameraParameter, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SensorWidth_MetaData), NewProp_SensorWidth_MetaData) }; // 834407157
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFilmbackCameraNode_Statics::NewProp_SensorHeight = { "SensorHeight", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFilmbackCameraNode, SensorHeight), Z_Construct_UScriptStruct_FFloatCameraParameter, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SensorHeight_MetaData), NewProp_SensorHeight_MetaData) }; // 834407157
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFilmbackCameraNode_Statics::NewProp_ISO = { "ISO", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFilmbackCameraNode, ISO), Z_Construct_UScriptStruct_FFloatCameraParameter, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ISO_MetaData), NewProp_ISO_MetaData) }; // 834407157
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFilmbackCameraNode_Statics::NewProp_ConstrainAspectRatio = { "ConstrainAspectRatio", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFilmbackCameraNode, ConstrainAspectRatio), Z_Construct_UScriptStruct_FBooleanCameraParameter, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConstrainAspectRatio_MetaData), NewProp_ConstrainAspectRatio_MetaData) }; // 2798599862
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFilmbackCameraNode_Statics::NewProp_OverrideAspectRatioAxisConstraint = { "OverrideAspectRatioAxisConstraint", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFilmbackCameraNode, OverrideAspectRatioAxisConstraint), Z_Construct_UScriptStruct_FBooleanCameraParameter, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverrideAspectRatioAxisConstraint_MetaData), NewProp_OverrideAspectRatioAxisConstraint_MetaData) }; // 2798599862
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UFilmbackCameraNode_Statics::NewProp_AspectRatioAxisConstraint = { "AspectRatioAxisConstraint", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFilmbackCameraNode, AspectRatioAxisConstraint), Z_Construct_UEnum_Engine_EAspectRatioAxisConstraint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AspectRatioAxisConstraint_MetaData), NewProp_AspectRatioAxisConstraint_MetaData) }; // 707974947
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFilmbackCameraNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFilmbackCameraNode_Statics::NewProp_SensorWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFilmbackCameraNode_Statics::NewProp_SensorHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFilmbackCameraNode_Statics::NewProp_ISO,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFilmbackCameraNode_Statics::NewProp_ConstrainAspectRatio,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFilmbackCameraNode_Statics::NewProp_OverrideAspectRatioAxisConstraint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFilmbackCameraNode_Statics::NewProp_AspectRatioAxisConstraint,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFilmbackCameraNode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UFilmbackCameraNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCameraNode,
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayCameras,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFilmbackCameraNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFilmbackCameraNode_Statics::ClassParams = {
	&UFilmbackCameraNode::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UFilmbackCameraNode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UFilmbackCameraNode_Statics::PropPointers),
	0,
	0x002810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFilmbackCameraNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UFilmbackCameraNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFilmbackCameraNode()
{
	if (!Z_Registration_Info_UClass_UFilmbackCameraNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFilmbackCameraNode.OuterSingleton, Z_Construct_UClass_UFilmbackCameraNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFilmbackCameraNode.OuterSingleton;
}
template<> GAMEPLAYCAMERAS_API UClass* StaticClass<UFilmbackCameraNode>()
{
	return UFilmbackCameraNode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFilmbackCameraNode);
UFilmbackCameraNode::~UFilmbackCameraNode() {}
// End Class UFilmbackCameraNode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Common_FilmbackCameraNode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFilmbackCameraNode, UFilmbackCameraNode::StaticClass, TEXT("UFilmbackCameraNode"), &Z_Registration_Info_UClass_UFilmbackCameraNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFilmbackCameraNode), 1457869779U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Common_FilmbackCameraNode_h_548744792(TEXT("/Script/GameplayCameras"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Common_FilmbackCameraNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Common_FilmbackCameraNode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
