// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayCameras/Public/Nodes/Common/ClippingPlanesCameraNode.h"
#include "GameplayCameras/Public/Core/CameraParameters.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClippingPlanesCameraNode() {}

// Begin Cross Module References
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UCameraNode();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UClippingPlanesCameraNode();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UClippingPlanesCameraNode_NoRegister();
GAMEPLAYCAMERAS_API UScriptStruct* Z_Construct_UScriptStruct_FDoubleCameraParameter();
UPackage* Z_Construct_UPackage__Script_GameplayCameras();
// End Cross Module References

// Begin Class UClippingPlanesCameraNode
void UClippingPlanesCameraNode::StaticRegisterNativesUClippingPlanesCameraNode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UClippingPlanesCameraNode);
UClass* Z_Construct_UClass_UClippingPlanesCameraNode_NoRegister()
{
	return UClippingPlanesCameraNode::StaticClass();
}
struct Z_Construct_UClass_UClippingPlanesCameraNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "CameraNodeCategories", "Common,Rendering" },
		{ "Comment", "/**\n * A camera node that sets the clipping planes for the evaluated camera.\n */" },
		{ "IncludePath", "Nodes/Common/ClippingPlanesCameraNode.h" },
		{ "ModuleRelativePath", "Public/Nodes/Common/ClippingPlanesCameraNode.h" },
		{ "ToolTip", "A camera node that sets the clipping planes for the evaluated camera." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NearPlane_MetaData[] = {
		{ "Category", "Clipping" },
		{ "ClampMin", "0.001" },
		{ "ModuleRelativePath", "Public/Nodes/Common/ClippingPlanesCameraNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FarPlane_MetaData[] = {
		{ "Category", "Clipping" },
		{ "ClampMin", "0.001" },
		{ "ModuleRelativePath", "Public/Nodes/Common/ClippingPlanesCameraNode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NearPlane;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FarPlane;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UClippingPlanesCameraNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UClippingPlanesCameraNode_Statics::NewProp_NearPlane = { "NearPlane", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UClippingPlanesCameraNode, NearPlane), Z_Construct_UScriptStruct_FDoubleCameraParameter, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NearPlane_MetaData), NewProp_NearPlane_MetaData) }; // 60259665
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UClippingPlanesCameraNode_Statics::NewProp_FarPlane = { "FarPlane", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UClippingPlanesCameraNode, FarPlane), Z_Construct_UScriptStruct_FDoubleCameraParameter, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FarPlane_MetaData), NewProp_FarPlane_MetaData) }; // 60259665
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UClippingPlanesCameraNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClippingPlanesCameraNode_Statics::NewProp_NearPlane,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClippingPlanesCameraNode_Statics::NewProp_FarPlane,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UClippingPlanesCameraNode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UClippingPlanesCameraNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCameraNode,
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayCameras,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UClippingPlanesCameraNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UClippingPlanesCameraNode_Statics::ClassParams = {
	&UClippingPlanesCameraNode::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UClippingPlanesCameraNode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UClippingPlanesCameraNode_Statics::PropPointers),
	0,
	0x002810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UClippingPlanesCameraNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UClippingPlanesCameraNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UClippingPlanesCameraNode()
{
	if (!Z_Registration_Info_UClass_UClippingPlanesCameraNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UClippingPlanesCameraNode.OuterSingleton, Z_Construct_UClass_UClippingPlanesCameraNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UClippingPlanesCameraNode.OuterSingleton;
}
template<> GAMEPLAYCAMERAS_API UClass* StaticClass<UClippingPlanesCameraNode>()
{
	return UClippingPlanesCameraNode::StaticClass();
}
UClippingPlanesCameraNode::UClippingPlanesCameraNode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UClippingPlanesCameraNode);
UClippingPlanesCameraNode::~UClippingPlanesCameraNode() {}
// End Class UClippingPlanesCameraNode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Common_ClippingPlanesCameraNode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UClippingPlanesCameraNode, UClippingPlanesCameraNode::StaticClass, TEXT("UClippingPlanesCameraNode"), &Z_Registration_Info_UClass_UClippingPlanesCameraNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UClippingPlanesCameraNode), 761183813U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Common_ClippingPlanesCameraNode_h_12168848(TEXT("/Script/GameplayCameras"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Common_ClippingPlanesCameraNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Common_ClippingPlanesCameraNode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
