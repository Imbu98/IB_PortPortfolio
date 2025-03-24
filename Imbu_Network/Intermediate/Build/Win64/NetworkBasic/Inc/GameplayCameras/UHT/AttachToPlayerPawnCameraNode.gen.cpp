// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayCameras/Public/Nodes/Attach/AttachToPlayerPawnCameraNode.h"
#include "GameplayCameras/Public/Core/CameraParameters.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAttachToPlayerPawnCameraNode() {}

// Begin Cross Module References
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UAttachToPlayerPawnCameraNode();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UAttachToPlayerPawnCameraNode_NoRegister();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UCameraNode();
GAMEPLAYCAMERAS_API UScriptStruct* Z_Construct_UScriptStruct_FBooleanCameraParameter();
UPackage* Z_Construct_UPackage__Script_GameplayCameras();
// End Cross Module References

// Begin Class UAttachToPlayerPawnCameraNode
void UAttachToPlayerPawnCameraNode::StaticRegisterNativesUAttachToPlayerPawnCameraNode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAttachToPlayerPawnCameraNode);
UClass* Z_Construct_UClass_UAttachToPlayerPawnCameraNode_NoRegister()
{
	return UAttachToPlayerPawnCameraNode::StaticClass();
}
struct Z_Construct_UClass_UAttachToPlayerPawnCameraNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "CameraNodeCategories", "Attachment" },
		{ "Comment", "/**\n * A camera node that moves the camera to the player pawn.\n */" },
		{ "IncludePath", "Nodes/Attach/AttachToPlayerPawnCameraNode.h" },
		{ "ModuleRelativePath", "Public/Nodes/Attach/AttachToPlayerPawnCameraNode.h" },
		{ "ToolTip", "A camera node that moves the camera to the player pawn." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttachToLocation_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "/** Whether to move the camera to the pawn's location. */" },
		{ "ModuleRelativePath", "Public/Nodes/Attach/AttachToPlayerPawnCameraNode.h" },
		{ "ToolTip", "Whether to move the camera to the pawn's location." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttachToRotation_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "/** Whether to align the camera rotation to the pawn's orientation. */" },
		{ "ModuleRelativePath", "Public/Nodes/Attach/AttachToPlayerPawnCameraNode.h" },
		{ "ToolTip", "Whether to align the camera rotation to the pawn's orientation." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AttachToLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AttachToRotation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAttachToPlayerPawnCameraNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAttachToPlayerPawnCameraNode_Statics::NewProp_AttachToLocation = { "AttachToLocation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAttachToPlayerPawnCameraNode, AttachToLocation), Z_Construct_UScriptStruct_FBooleanCameraParameter, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttachToLocation_MetaData), NewProp_AttachToLocation_MetaData) }; // 2798599862
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAttachToPlayerPawnCameraNode_Statics::NewProp_AttachToRotation = { "AttachToRotation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAttachToPlayerPawnCameraNode, AttachToRotation), Z_Construct_UScriptStruct_FBooleanCameraParameter, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttachToRotation_MetaData), NewProp_AttachToRotation_MetaData) }; // 2798599862
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAttachToPlayerPawnCameraNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttachToPlayerPawnCameraNode_Statics::NewProp_AttachToLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttachToPlayerPawnCameraNode_Statics::NewProp_AttachToRotation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAttachToPlayerPawnCameraNode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAttachToPlayerPawnCameraNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCameraNode,
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayCameras,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAttachToPlayerPawnCameraNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAttachToPlayerPawnCameraNode_Statics::ClassParams = {
	&UAttachToPlayerPawnCameraNode::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAttachToPlayerPawnCameraNode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAttachToPlayerPawnCameraNode_Statics::PropPointers),
	0,
	0x002810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAttachToPlayerPawnCameraNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UAttachToPlayerPawnCameraNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAttachToPlayerPawnCameraNode()
{
	if (!Z_Registration_Info_UClass_UAttachToPlayerPawnCameraNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAttachToPlayerPawnCameraNode.OuterSingleton, Z_Construct_UClass_UAttachToPlayerPawnCameraNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAttachToPlayerPawnCameraNode.OuterSingleton;
}
template<> GAMEPLAYCAMERAS_API UClass* StaticClass<UAttachToPlayerPawnCameraNode>()
{
	return UAttachToPlayerPawnCameraNode::StaticClass();
}
UAttachToPlayerPawnCameraNode::UAttachToPlayerPawnCameraNode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAttachToPlayerPawnCameraNode);
UAttachToPlayerPawnCameraNode::~UAttachToPlayerPawnCameraNode() {}
// End Class UAttachToPlayerPawnCameraNode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Attach_AttachToPlayerPawnCameraNode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAttachToPlayerPawnCameraNode, UAttachToPlayerPawnCameraNode::StaticClass, TEXT("UAttachToPlayerPawnCameraNode"), &Z_Registration_Info_UClass_UAttachToPlayerPawnCameraNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAttachToPlayerPawnCameraNode), 1591826267U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Attach_AttachToPlayerPawnCameraNode_h_3137525339(TEXT("/Script/GameplayCameras"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Attach_AttachToPlayerPawnCameraNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Attach_AttachToPlayerPawnCameraNode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
