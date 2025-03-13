// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayCameras/Public/Core/CameraNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCameraNode() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntVector2();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UCameraNode();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UCameraNode_NoRegister();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UObjectTreeGraphObject_NoRegister();
UPackage* Z_Construct_UPackage__Script_GameplayCameras();
// End Cross Module References

// Begin Class UCameraNode
void UCameraNode::StaticRegisterNativesUCameraNode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCameraNode);
UClass* Z_Construct_UClass_UCameraNode_NoRegister()
{
	return UCameraNode::StaticClass();
}
struct Z_Construct_UClass_UCameraNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "CameraNodeCategories", "Miscellaneous" },
		{ "Comment", "/**\n * The base class for a camera node.\n */" },
		{ "IncludePath", "Core/CameraNode.h" },
		{ "ModuleRelativePath", "Public/Core/CameraNode.h" },
		{ "ToolTip", "The base class for a camera node." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsEnabled_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "/** Specifies whether this node is enabled. */" },
		{ "ModuleRelativePath", "Public/Core/CameraNode.h" },
		{ "ToolTip", "Specifies whether this node is enabled." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GraphNodePos_MetaData[] = {
		{ "Comment", "/** Position of the camera node in the node graph editor. */" },
		{ "ModuleRelativePath", "Public/Core/CameraNode.h" },
		{ "ToolTip", "Position of the camera node in the node graph editor." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GraphNodeComment_MetaData[] = {
		{ "Comment", "/** User-written comment in the node graph editor. */" },
		{ "ModuleRelativePath", "Public/Core/CameraNode.h" },
		{ "ToolTip", "User-written comment in the node graph editor." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GraphNodePosX_MetaData[] = {
		{ "Comment", "// Deprecated properties.\n" },
		{ "ModuleRelativePath", "Public/Core/CameraNode.h" },
		{ "ToolTip", "Deprecated properties." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GraphNodePosY_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/CameraNode.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static void NewProp_bIsEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsEnabled;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_GraphNodePos;
	static const UECodeGen_Private::FStrPropertyParams NewProp_GraphNodeComment;
	static const UECodeGen_Private::FIntPropertyParams NewProp_GraphNodePosX;
	static const UECodeGen_Private::FIntPropertyParams NewProp_GraphNodePosY;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCameraNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UCameraNode_Statics::NewProp_bIsEnabled_SetBit(void* Obj)
{
	((UCameraNode*)Obj)->bIsEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCameraNode_Statics::NewProp_bIsEnabled = { "bIsEnabled", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCameraNode), &Z_Construct_UClass_UCameraNode_Statics::NewProp_bIsEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsEnabled_MetaData), NewProp_bIsEnabled_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCameraNode_Statics::NewProp_GraphNodePos = { "GraphNodePos", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCameraNode, GraphNodePos), Z_Construct_UScriptStruct_FIntVector2, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GraphNodePos_MetaData), NewProp_GraphNodePos_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCameraNode_Statics::NewProp_GraphNodeComment = { "GraphNodeComment", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCameraNode, GraphNodeComment), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GraphNodeComment_MetaData), NewProp_GraphNodeComment_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCameraNode_Statics::NewProp_GraphNodePosX = { "GraphNodePosX", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCameraNode, GraphNodePosX_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GraphNodePosX_MetaData), NewProp_GraphNodePosX_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCameraNode_Statics::NewProp_GraphNodePosY = { "GraphNodePosY", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCameraNode, GraphNodePosY_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GraphNodePosY_MetaData), NewProp_GraphNodePosY_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCameraNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraNode_Statics::NewProp_bIsEnabled,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraNode_Statics::NewProp_GraphNodePos,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraNode_Statics::NewProp_GraphNodeComment,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraNode_Statics::NewProp_GraphNodePosX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraNode_Statics::NewProp_GraphNodePosY,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCameraNode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCameraNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayCameras,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCameraNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UCameraNode_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UObjectTreeGraphObject_NoRegister, (int32)VTABLE_OFFSET(UCameraNode, IObjectTreeGraphObject), false },  // 1612724473
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCameraNode_Statics::ClassParams = {
	&UCameraNode::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCameraNode_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCameraNode_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x003010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCameraNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UCameraNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCameraNode()
{
	if (!Z_Registration_Info_UClass_UCameraNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCameraNode.OuterSingleton, Z_Construct_UClass_UCameraNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCameraNode.OuterSingleton;
}
template<> GAMEPLAYCAMERAS_API UClass* StaticClass<UCameraNode>()
{
	return UCameraNode::StaticClass();
}
UCameraNode::UCameraNode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCameraNode);
UCameraNode::~UCameraNode() {}
// End Class UCameraNode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraNode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCameraNode, UCameraNode::StaticClass, TEXT("UCameraNode"), &Z_Registration_Info_UClass_UCameraNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCameraNode), 1130035094U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraNode_h_2493478839(TEXT("/Script/GameplayCameras"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraNode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
