// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayCameras/Public/Nodes/Common/BoomArmCameraNode.h"
#include "GameplayCameras/Public/Core/CameraParameters.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBoomArmCameraNode() {}

// Begin Cross Module References
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UBoomArmCameraNode();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UBoomArmCameraNode_NoRegister();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UCameraNode();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UCameraValueInterpolator_NoRegister();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UInput2DCameraNode_NoRegister();
GAMEPLAYCAMERAS_API UScriptStruct* Z_Construct_UScriptStruct_FDoubleCameraParameter();
GAMEPLAYCAMERAS_API UScriptStruct* Z_Construct_UScriptStruct_FVector3dCameraParameter();
UPackage* Z_Construct_UPackage__Script_GameplayCameras();
// End Cross Module References

// Begin Class UBoomArmCameraNode
void UBoomArmCameraNode::StaticRegisterNativesUBoomArmCameraNode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBoomArmCameraNode);
UClass* Z_Construct_UClass_UBoomArmCameraNode_NoRegister()
{
	return UBoomArmCameraNode::StaticClass();
}
struct Z_Construct_UClass_UBoomArmCameraNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "CameraNodeCategories", "Common,Transform" },
		{ "Comment", "/**\n * A camera node that can rotate the camera in yaw and pitch based on player input.\n */" },
		{ "IncludePath", "Nodes/Common/BoomArmCameraNode.h" },
		{ "ModuleRelativePath", "Public/Nodes/Common/BoomArmCameraNode.h" },
		{ "ToolTip", "A camera node that can rotate the camera in yaw and pitch based on player input." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoomOffset_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "/** The offset of the boom. Rotation occurs at the base (i.e. before the offset). */" },
		{ "ModuleRelativePath", "Public/Nodes/Common/BoomArmCameraNode.h" },
		{ "ToolTip", "The offset of the boom. Rotation occurs at the base (i.e. before the offset)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoomLengthInterpolator_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "/** The interpolator to use for changing the boom length based on its pivot's movements. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Nodes/Common/BoomArmCameraNode.h" },
		{ "ToolTip", "The interpolator to use for changing the boom length based on its pivot's movements." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxForwardInterpolationFactor_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "/** \n\x09 * The maximum amount of forward movement the interpolator can introduce, expressed\n\x09 * as a factor of the default boom length.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Nodes/Common/BoomArmCameraNode.h" },
		{ "ToolTip", "The maximum amount of forward movement the interpolator can introduce, expressed\nas a factor of the default boom length." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxBackwardInterpolationFactor_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "/** \n\x09 * The maximum amount of backward movement the interpolator can introduce, expressed\n\x09 * as a factor of the default boom length.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Nodes/Common/BoomArmCameraNode.h" },
		{ "ToolTip", "The maximum amount of backward movement the interpolator can introduce, expressed\nas a factor of the default boom length." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputSlot_MetaData[] = {
		{ "Comment", "/**\n\x09 * The input slot for controlling the boom arm.\n\x09 * If no input slot is specified, the boom arm will use the player controller view rotation.\n\x09 */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Nodes/Common/BoomArmCameraNode.h" },
		{ "ObjectTreeGraphPinDirection", "Input" },
		{ "ToolTip", "The input slot for controlling the boom arm.\nIf no input slot is specified, the boom arm will use the player controller view rotation." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_BoomOffset;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BoomLengthInterpolator;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaxForwardInterpolationFactor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaxBackwardInterpolationFactor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputSlot;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBoomArmCameraNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBoomArmCameraNode_Statics::NewProp_BoomOffset = { "BoomOffset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBoomArmCameraNode, BoomOffset), Z_Construct_UScriptStruct_FVector3dCameraParameter, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoomOffset_MetaData), NewProp_BoomOffset_MetaData) }; // 2998266714
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBoomArmCameraNode_Statics::NewProp_BoomLengthInterpolator = { "BoomLengthInterpolator", nullptr, (EPropertyFlags)0x0114000000080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBoomArmCameraNode, BoomLengthInterpolator), Z_Construct_UClass_UCameraValueInterpolator_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoomLengthInterpolator_MetaData), NewProp_BoomLengthInterpolator_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBoomArmCameraNode_Statics::NewProp_MaxForwardInterpolationFactor = { "MaxForwardInterpolationFactor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBoomArmCameraNode, MaxForwardInterpolationFactor), Z_Construct_UScriptStruct_FDoubleCameraParameter, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxForwardInterpolationFactor_MetaData), NewProp_MaxForwardInterpolationFactor_MetaData) }; // 60259665
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBoomArmCameraNode_Statics::NewProp_MaxBackwardInterpolationFactor = { "MaxBackwardInterpolationFactor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBoomArmCameraNode, MaxBackwardInterpolationFactor), Z_Construct_UScriptStruct_FDoubleCameraParameter, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxBackwardInterpolationFactor_MetaData), NewProp_MaxBackwardInterpolationFactor_MetaData) }; // 60259665
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBoomArmCameraNode_Statics::NewProp_InputSlot = { "InputSlot", nullptr, (EPropertyFlags)0x0114000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBoomArmCameraNode, InputSlot), Z_Construct_UClass_UInput2DCameraNode_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputSlot_MetaData), NewProp_InputSlot_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBoomArmCameraNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBoomArmCameraNode_Statics::NewProp_BoomOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBoomArmCameraNode_Statics::NewProp_BoomLengthInterpolator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBoomArmCameraNode_Statics::NewProp_MaxForwardInterpolationFactor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBoomArmCameraNode_Statics::NewProp_MaxBackwardInterpolationFactor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBoomArmCameraNode_Statics::NewProp_InputSlot,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBoomArmCameraNode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBoomArmCameraNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCameraNode,
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayCameras,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBoomArmCameraNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBoomArmCameraNode_Statics::ClassParams = {
	&UBoomArmCameraNode::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBoomArmCameraNode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBoomArmCameraNode_Statics::PropPointers),
	0,
	0x00A810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBoomArmCameraNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UBoomArmCameraNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBoomArmCameraNode()
{
	if (!Z_Registration_Info_UClass_UBoomArmCameraNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBoomArmCameraNode.OuterSingleton, Z_Construct_UClass_UBoomArmCameraNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBoomArmCameraNode.OuterSingleton;
}
template<> GAMEPLAYCAMERAS_API UClass* StaticClass<UBoomArmCameraNode>()
{
	return UBoomArmCameraNode::StaticClass();
}
UBoomArmCameraNode::UBoomArmCameraNode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBoomArmCameraNode);
UBoomArmCameraNode::~UBoomArmCameraNode() {}
// End Class UBoomArmCameraNode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Common_BoomArmCameraNode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBoomArmCameraNode, UBoomArmCameraNode::StaticClass, TEXT("UBoomArmCameraNode"), &Z_Registration_Info_UClass_UBoomArmCameraNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBoomArmCameraNode), 19217728U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Common_BoomArmCameraNode_h_1741030955(TEXT("/Script/GameplayCameras"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Common_BoomArmCameraNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Common_BoomArmCameraNode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
