// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayCameras/Public/Nodes/Common/PostProcessCameraNode.h"
#include "Runtime/Engine/Classes/Engine/Scene.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePostProcessCameraNode() {}

// Begin Cross Module References
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPostProcessSettings();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UCameraNode();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UPostProcessCameraNode();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UPostProcessCameraNode_NoRegister();
UPackage* Z_Construct_UPackage__Script_GameplayCameras();
// End Cross Module References

// Begin Class UPostProcessCameraNode
void UPostProcessCameraNode::StaticRegisterNativesUPostProcessCameraNode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPostProcessCameraNode);
UClass* Z_Construct_UClass_UPostProcessCameraNode_NoRegister()
{
	return UPostProcessCameraNode::StaticClass();
}
struct Z_Construct_UClass_UPostProcessCameraNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "CameraNodeCategories", "Common,Rendering" },
		{ "Comment", "/**\n * A camera node that adds post-process settings on the evaluated camera.\n */" },
		{ "IncludePath", "Nodes/Common/PostProcessCameraNode.h" },
		{ "ModuleRelativePath", "Public/Nodes/Common/PostProcessCameraNode.h" },
		{ "ToolTip", "A camera node that adds post-process settings on the evaluated camera." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PostProcessSettings_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/Nodes/Common/PostProcessCameraNode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PostProcessSettings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPostProcessCameraNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPostProcessCameraNode_Statics::NewProp_PostProcessSettings = { "PostProcessSettings", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPostProcessCameraNode, PostProcessSettings), Z_Construct_UScriptStruct_FPostProcessSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PostProcessSettings_MetaData), NewProp_PostProcessSettings_MetaData) }; // 2541518506
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPostProcessCameraNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPostProcessCameraNode_Statics::NewProp_PostProcessSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPostProcessCameraNode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPostProcessCameraNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCameraNode,
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayCameras,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPostProcessCameraNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPostProcessCameraNode_Statics::ClassParams = {
	&UPostProcessCameraNode::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPostProcessCameraNode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPostProcessCameraNode_Statics::PropPointers),
	0,
	0x002810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPostProcessCameraNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UPostProcessCameraNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPostProcessCameraNode()
{
	if (!Z_Registration_Info_UClass_UPostProcessCameraNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPostProcessCameraNode.OuterSingleton, Z_Construct_UClass_UPostProcessCameraNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPostProcessCameraNode.OuterSingleton;
}
template<> GAMEPLAYCAMERAS_API UClass* StaticClass<UPostProcessCameraNode>()
{
	return UPostProcessCameraNode::StaticClass();
}
UPostProcessCameraNode::UPostProcessCameraNode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPostProcessCameraNode);
UPostProcessCameraNode::~UPostProcessCameraNode() {}
// End Class UPostProcessCameraNode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Common_PostProcessCameraNode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPostProcessCameraNode, UPostProcessCameraNode::StaticClass, TEXT("UPostProcessCameraNode"), &Z_Registration_Info_UClass_UPostProcessCameraNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPostProcessCameraNode), 708164896U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Common_PostProcessCameraNode_h_1344356053(TEXT("/Script/GameplayCameras"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Common_PostProcessCameraNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Common_PostProcessCameraNode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
