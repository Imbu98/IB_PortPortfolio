// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayCameras/Public/Nodes/Common/TargetRayCastCameraNode.h"
#include "GameplayCameras/Public/Core/CameraParameters.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTargetRayCastCameraNode() {}

// Begin Cross Module References
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UCameraNode();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UTargetRayCastCameraNode();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UTargetRayCastCameraNode_NoRegister();
GAMEPLAYCAMERAS_API UScriptStruct* Z_Construct_UScriptStruct_FBooleanCameraParameter();
UPackage* Z_Construct_UPackage__Script_GameplayCameras();
// End Cross Module References

// Begin Class UTargetRayCastCameraNode
void UTargetRayCastCameraNode::StaticRegisterNativesUTargetRayCastCameraNode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTargetRayCastCameraNode);
UClass* Z_Construct_UClass_UTargetRayCastCameraNode_NoRegister()
{
	return UTargetRayCastCameraNode::StaticClass();
}
struct Z_Construct_UClass_UTargetRayCastCameraNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "CameraNodeCategories", "Common,Target" },
		{ "Comment", "/**\n * A camera node that determines and sets the camera's target by running a ray-cast\n * from the current camera position.\n */" },
		{ "IncludePath", "Nodes/Common/TargetRayCastCameraNode.h" },
		{ "ModuleRelativePath", "Public/Nodes/Common/TargetRayCastCameraNode.h" },
		{ "ToolTip", "A camera node that determines and sets the camera's target by running a ray-cast\nfrom the current camera position." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TraceChannel_MetaData[] = {
		{ "Category", "Ray-Cast" },
		{ "Comment", "/** Trace channel to use for the ray-cast. */" },
		{ "ModuleRelativePath", "Public/Nodes/Common/TargetRayCastCameraNode.h" },
		{ "ToolTip", "Trace channel to use for the ray-cast." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AutoFocus_MetaData[] = {
		{ "Category", "Auto-Focus" },
		{ "Comment", "/** Whether to set the focus distance to the ray-cast hit result. */" },
		{ "ModuleRelativePath", "Public/Nodes/Common/TargetRayCastCameraNode.h" },
		{ "ToolTip", "Whether to set the focus distance to the ray-cast hit result." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_TraceChannel;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AutoFocus;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTargetRayCastCameraNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTargetRayCastCameraNode_Statics::NewProp_TraceChannel = { "TraceChannel", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTargetRayCastCameraNode, TraceChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TraceChannel_MetaData), NewProp_TraceChannel_MetaData) }; // 756624936
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTargetRayCastCameraNode_Statics::NewProp_AutoFocus = { "AutoFocus", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTargetRayCastCameraNode, AutoFocus), Z_Construct_UScriptStruct_FBooleanCameraParameter, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AutoFocus_MetaData), NewProp_AutoFocus_MetaData) }; // 2798599862
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTargetRayCastCameraNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTargetRayCastCameraNode_Statics::NewProp_TraceChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTargetRayCastCameraNode_Statics::NewProp_AutoFocus,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTargetRayCastCameraNode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UTargetRayCastCameraNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCameraNode,
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayCameras,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTargetRayCastCameraNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTargetRayCastCameraNode_Statics::ClassParams = {
	&UTargetRayCastCameraNode::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UTargetRayCastCameraNode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UTargetRayCastCameraNode_Statics::PropPointers),
	0,
	0x002810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTargetRayCastCameraNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UTargetRayCastCameraNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTargetRayCastCameraNode()
{
	if (!Z_Registration_Info_UClass_UTargetRayCastCameraNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTargetRayCastCameraNode.OuterSingleton, Z_Construct_UClass_UTargetRayCastCameraNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTargetRayCastCameraNode.OuterSingleton;
}
template<> GAMEPLAYCAMERAS_API UClass* StaticClass<UTargetRayCastCameraNode>()
{
	return UTargetRayCastCameraNode::StaticClass();
}
UTargetRayCastCameraNode::UTargetRayCastCameraNode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTargetRayCastCameraNode);
UTargetRayCastCameraNode::~UTargetRayCastCameraNode() {}
// End Class UTargetRayCastCameraNode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Common_TargetRayCastCameraNode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTargetRayCastCameraNode, UTargetRayCastCameraNode::StaticClass, TEXT("UTargetRayCastCameraNode"), &Z_Registration_Info_UClass_UTargetRayCastCameraNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTargetRayCastCameraNode), 3330526291U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Common_TargetRayCastCameraNode_h_496519483(TEXT("/Script/GameplayCameras"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Common_TargetRayCastCameraNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Common_TargetRayCastCameraNode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
