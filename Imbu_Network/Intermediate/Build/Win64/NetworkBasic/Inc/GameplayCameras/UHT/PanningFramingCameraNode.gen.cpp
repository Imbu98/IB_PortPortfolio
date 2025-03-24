// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayCameras/Public/Nodes/Framing/PanningFramingCameraNode.h"
#include "GameplayCameras/Public/Core/CameraParameters.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePanningFramingCameraNode() {}

// Begin Cross Module References
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UBaseFramingCameraNode();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UPanningFramingCameraNode();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UPanningFramingCameraNode_NoRegister();
GAMEPLAYCAMERAS_API UScriptStruct* Z_Construct_UScriptStruct_FBooleanCameraParameter();
UPackage* Z_Construct_UPackage__Script_GameplayCameras();
// End Cross Module References

// Begin Class UPanningFramingCameraNode
void UPanningFramingCameraNode::StaticRegisterNativesUPanningFramingCameraNode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPanningFramingCameraNode);
UClass* Z_Construct_UClass_UPanningFramingCameraNode_NoRegister()
{
	return UPanningFramingCameraNode::StaticClass();
}
struct Z_Construct_UClass_UPanningFramingCameraNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A camera node that frames a target by rotating in place.\n */" },
		{ "IncludePath", "Nodes/Framing/PanningFramingCameraNode.h" },
		{ "ModuleRelativePath", "Public/Nodes/Framing/PanningFramingCameraNode.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "A camera node that frames a target by rotating in place." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CanPanLaterally_MetaData[] = {
		{ "Category", "Panning" },
		{ "Comment", "/** Whether the camera can rotate laterally (yaw). */" },
		{ "ModuleRelativePath", "Public/Nodes/Framing/PanningFramingCameraNode.h" },
		{ "ToolTip", "Whether the camera can rotate laterally (yaw)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CanPanVertically_MetaData[] = {
		{ "Category", "Panning" },
		{ "Comment", "/** Whether the camera can rotate vertically (pitch). */" },
		{ "ModuleRelativePath", "Public/Nodes/Framing/PanningFramingCameraNode.h" },
		{ "ToolTip", "Whether the camera can rotate vertically (pitch)." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CanPanLaterally;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CanPanVertically;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPanningFramingCameraNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPanningFramingCameraNode_Statics::NewProp_CanPanLaterally = { "CanPanLaterally", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPanningFramingCameraNode, CanPanLaterally), Z_Construct_UScriptStruct_FBooleanCameraParameter, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CanPanLaterally_MetaData), NewProp_CanPanLaterally_MetaData) }; // 2798599862
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPanningFramingCameraNode_Statics::NewProp_CanPanVertically = { "CanPanVertically", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPanningFramingCameraNode, CanPanVertically), Z_Construct_UScriptStruct_FBooleanCameraParameter, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CanPanVertically_MetaData), NewProp_CanPanVertically_MetaData) }; // 2798599862
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPanningFramingCameraNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPanningFramingCameraNode_Statics::NewProp_CanPanLaterally,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPanningFramingCameraNode_Statics::NewProp_CanPanVertically,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPanningFramingCameraNode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPanningFramingCameraNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBaseFramingCameraNode,
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayCameras,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPanningFramingCameraNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPanningFramingCameraNode_Statics::ClassParams = {
	&UPanningFramingCameraNode::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPanningFramingCameraNode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPanningFramingCameraNode_Statics::PropPointers),
	0,
	0x002810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPanningFramingCameraNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UPanningFramingCameraNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPanningFramingCameraNode()
{
	if (!Z_Registration_Info_UClass_UPanningFramingCameraNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPanningFramingCameraNode.OuterSingleton, Z_Construct_UClass_UPanningFramingCameraNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPanningFramingCameraNode.OuterSingleton;
}
template<> GAMEPLAYCAMERAS_API UClass* StaticClass<UPanningFramingCameraNode>()
{
	return UPanningFramingCameraNode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPanningFramingCameraNode);
UPanningFramingCameraNode::~UPanningFramingCameraNode() {}
// End Class UPanningFramingCameraNode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Framing_PanningFramingCameraNode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPanningFramingCameraNode, UPanningFramingCameraNode::StaticClass, TEXT("UPanningFramingCameraNode"), &Z_Registration_Info_UClass_UPanningFramingCameraNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPanningFramingCameraNode), 1881817553U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Framing_PanningFramingCameraNode_h_3660733994(TEXT("/Script/GameplayCameras"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Framing_PanningFramingCameraNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Framing_PanningFramingCameraNode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
