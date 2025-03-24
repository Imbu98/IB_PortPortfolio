// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayCameras/Public/Nodes/Common/FieldOfViewCameraNode.h"
#include "GameplayCameras/Public/Core/CameraParameters.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFieldOfViewCameraNode() {}

// Begin Cross Module References
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UCameraNode();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UFieldOfViewCameraNode();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UFieldOfViewCameraNode_NoRegister();
GAMEPLAYCAMERAS_API UScriptStruct* Z_Construct_UScriptStruct_FFloatCameraParameter();
UPackage* Z_Construct_UPackage__Script_GameplayCameras();
// End Cross Module References

// Begin Class UFieldOfViewCameraNode
void UFieldOfViewCameraNode::StaticRegisterNativesUFieldOfViewCameraNode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFieldOfViewCameraNode);
UClass* Z_Construct_UClass_UFieldOfViewCameraNode_NoRegister()
{
	return UFieldOfViewCameraNode::StaticClass();
}
struct Z_Construct_UClass_UFieldOfViewCameraNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "CameraNodeCategories", "Common,Lens" },
		{ "Comment", "/**\n * A camera node that sets the field of view of the camera.\n */" },
		{ "IncludePath", "Nodes/Common/FieldOfViewCameraNode.h" },
		{ "ModuleRelativePath", "Public/Nodes/Common/FieldOfViewCameraNode.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "A camera node that sets the field of view of the camera." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FieldOfView_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "/** The field of view, in degrees. */" },
		{ "ModuleRelativePath", "Public/Nodes/Common/FieldOfViewCameraNode.h" },
		{ "ToolTip", "The field of view, in degrees." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_FieldOfView;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFieldOfViewCameraNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFieldOfViewCameraNode_Statics::NewProp_FieldOfView = { "FieldOfView", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFieldOfViewCameraNode, FieldOfView), Z_Construct_UScriptStruct_FFloatCameraParameter, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FieldOfView_MetaData), NewProp_FieldOfView_MetaData) }; // 834407157
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFieldOfViewCameraNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFieldOfViewCameraNode_Statics::NewProp_FieldOfView,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFieldOfViewCameraNode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UFieldOfViewCameraNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCameraNode,
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayCameras,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFieldOfViewCameraNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFieldOfViewCameraNode_Statics::ClassParams = {
	&UFieldOfViewCameraNode::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UFieldOfViewCameraNode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UFieldOfViewCameraNode_Statics::PropPointers),
	0,
	0x002810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFieldOfViewCameraNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UFieldOfViewCameraNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFieldOfViewCameraNode()
{
	if (!Z_Registration_Info_UClass_UFieldOfViewCameraNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFieldOfViewCameraNode.OuterSingleton, Z_Construct_UClass_UFieldOfViewCameraNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFieldOfViewCameraNode.OuterSingleton;
}
template<> GAMEPLAYCAMERAS_API UClass* StaticClass<UFieldOfViewCameraNode>()
{
	return UFieldOfViewCameraNode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFieldOfViewCameraNode);
UFieldOfViewCameraNode::~UFieldOfViewCameraNode() {}
// End Class UFieldOfViewCameraNode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Common_FieldOfViewCameraNode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFieldOfViewCameraNode, UFieldOfViewCameraNode::StaticClass, TEXT("UFieldOfViewCameraNode"), &Z_Registration_Info_UClass_UFieldOfViewCameraNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFieldOfViewCameraNode), 3586448036U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Common_FieldOfViewCameraNode_h_1155142543(TEXT("/Script/GameplayCameras"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Common_FieldOfViewCameraNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Common_FieldOfViewCameraNode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
