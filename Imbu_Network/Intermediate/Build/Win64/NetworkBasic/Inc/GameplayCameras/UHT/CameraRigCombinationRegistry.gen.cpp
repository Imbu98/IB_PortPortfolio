// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayCameras/Private/Core/CameraRigCombinationRegistry.h"
#include "GameplayCameras/Public/Core/CameraRigAssetReference.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCameraRigCombinationRegistry() {}

// Begin Cross Module References
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UCameraNode();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UCombinedCameraRigsCameraNode();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UCombinedCameraRigsCameraNode_NoRegister();
GAMEPLAYCAMERAS_API UScriptStruct* Z_Construct_UScriptStruct_FCameraRigAssetReference();
UPackage* Z_Construct_UPackage__Script_GameplayCameras();
// End Cross Module References

// Begin Class UCombinedCameraRigsCameraNode
void UCombinedCameraRigsCameraNode::StaticRegisterNativesUCombinedCameraRigsCameraNode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCombinedCameraRigsCameraNode);
UClass* Z_Construct_UClass_UCombinedCameraRigsCameraNode_NoRegister()
{
	return UCombinedCameraRigsCameraNode::StaticClass();
}
struct Z_Construct_UClass_UCombinedCameraRigsCameraNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// namespace UE::Cameras\n" },
		{ "IncludePath", "Core/CameraRigCombinationRegistry.h" },
		{ "ModuleRelativePath", "Private/Core/CameraRigCombinationRegistry.h" },
		{ "ToolTip", "namespace UE::Cameras" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraRigReferences_MetaData[] = {
		{ "Comment", "/** The camera rigs to run. */" },
		{ "ModuleRelativePath", "Private/Core/CameraRigCombinationRegistry.h" },
		{ "ToolTip", "The camera rigs to run." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CameraRigReferences_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CameraRigReferences;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCombinedCameraRigsCameraNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCombinedCameraRigsCameraNode_Statics::NewProp_CameraRigReferences_Inner = { "CameraRigReferences", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCameraRigAssetReference, METADATA_PARAMS(0, nullptr) }; // 1437874377
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCombinedCameraRigsCameraNode_Statics::NewProp_CameraRigReferences = { "CameraRigReferences", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombinedCameraRigsCameraNode, CameraRigReferences), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraRigReferences_MetaData), NewProp_CameraRigReferences_MetaData) }; // 1437874377
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCombinedCameraRigsCameraNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombinedCameraRigsCameraNode_Statics::NewProp_CameraRigReferences_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombinedCameraRigsCameraNode_Statics::NewProp_CameraRigReferences,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCombinedCameraRigsCameraNode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCombinedCameraRigsCameraNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCameraNode,
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayCameras,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCombinedCameraRigsCameraNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCombinedCameraRigsCameraNode_Statics::ClassParams = {
	&UCombinedCameraRigsCameraNode::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCombinedCameraRigsCameraNode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCombinedCameraRigsCameraNode_Statics::PropPointers),
	0,
	0x012810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCombinedCameraRigsCameraNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UCombinedCameraRigsCameraNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCombinedCameraRigsCameraNode()
{
	if (!Z_Registration_Info_UClass_UCombinedCameraRigsCameraNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCombinedCameraRigsCameraNode.OuterSingleton, Z_Construct_UClass_UCombinedCameraRigsCameraNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCombinedCameraRigsCameraNode.OuterSingleton;
}
template<> GAMEPLAYCAMERAS_API UClass* StaticClass<UCombinedCameraRigsCameraNode>()
{
	return UCombinedCameraRigsCameraNode::StaticClass();
}
UCombinedCameraRigsCameraNode::UCombinedCameraRigsCameraNode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCombinedCameraRigsCameraNode);
UCombinedCameraRigsCameraNode::~UCombinedCameraRigsCameraNode() {}
// End Class UCombinedCameraRigsCameraNode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Private_Core_CameraRigCombinationRegistry_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCombinedCameraRigsCameraNode, UCombinedCameraRigsCameraNode::StaticClass, TEXT("UCombinedCameraRigsCameraNode"), &Z_Registration_Info_UClass_UCombinedCameraRigsCameraNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCombinedCameraRigsCameraNode), 1900692001U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Private_Core_CameraRigCombinationRegistry_h_2743042335(TEXT("/Script/GameplayCameras"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Private_Core_CameraRigCombinationRegistry_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Private_Core_CameraRigCombinationRegistry_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
