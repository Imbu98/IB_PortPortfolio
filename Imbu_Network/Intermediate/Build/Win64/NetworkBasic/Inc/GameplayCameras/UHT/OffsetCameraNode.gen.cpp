// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayCameras/Public/Nodes/Common/OffsetCameraNode.h"
#include "GameplayCameras/Public/Core/CameraParameters.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOffsetCameraNode() {}

// Begin Cross Module References
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UCameraNode();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UOffsetCameraNode();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UOffsetCameraNode_NoRegister();
GAMEPLAYCAMERAS_API UEnum* Z_Construct_UEnum_GameplayCameras_ECameraNodeSpace();
GAMEPLAYCAMERAS_API UScriptStruct* Z_Construct_UScriptStruct_FRotator3dCameraParameter();
GAMEPLAYCAMERAS_API UScriptStruct* Z_Construct_UScriptStruct_FVector3dCameraParameter();
UPackage* Z_Construct_UPackage__Script_GameplayCameras();
// End Cross Module References

// Begin Class UOffsetCameraNode
void UOffsetCameraNode::StaticRegisterNativesUOffsetCameraNode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOffsetCameraNode);
UClass* Z_Construct_UClass_UOffsetCameraNode_NoRegister()
{
	return UOffsetCameraNode::StaticClass();
}
struct Z_Construct_UClass_UOffsetCameraNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "CameraNodeCategories", "Common,Transform" },
		{ "Comment", "/**\n * A camera node that offsets the location of the camera.\n */" },
		{ "IncludePath", "Nodes/Common/OffsetCameraNode.h" },
		{ "ModuleRelativePath", "Public/Nodes/Common/OffsetCameraNode.h" },
		{ "ToolTip", "A camera node that offsets the location of the camera." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TranslationOffset_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "/** The translation offset to apply to the camera. */" },
		{ "ModuleRelativePath", "Public/Nodes/Common/OffsetCameraNode.h" },
		{ "ToolTip", "The translation offset to apply to the camera." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationOffset_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "/** The rotation offset to apply to the camera. */" },
		{ "ModuleRelativePath", "Public/Nodes/Common/OffsetCameraNode.h" },
		{ "ToolTip", "The rotation offset to apply to the camera." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OffsetSpace_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "/** The space in which to apply the offset. */" },
		{ "ModuleRelativePath", "Public/Nodes/Common/OffsetCameraNode.h" },
		{ "ToolTip", "The space in which to apply the offset." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TranslationOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RotationOffset;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OffsetSpace_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OffsetSpace;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOffsetCameraNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOffsetCameraNode_Statics::NewProp_TranslationOffset = { "TranslationOffset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOffsetCameraNode, TranslationOffset), Z_Construct_UScriptStruct_FVector3dCameraParameter, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TranslationOffset_MetaData), NewProp_TranslationOffset_MetaData) }; // 2998266714
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOffsetCameraNode_Statics::NewProp_RotationOffset = { "RotationOffset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOffsetCameraNode, RotationOffset), Z_Construct_UScriptStruct_FRotator3dCameraParameter, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationOffset_MetaData), NewProp_RotationOffset_MetaData) }; // 3457852835
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UOffsetCameraNode_Statics::NewProp_OffsetSpace_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UOffsetCameraNode_Statics::NewProp_OffsetSpace = { "OffsetSpace", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOffsetCameraNode, OffsetSpace), Z_Construct_UEnum_GameplayCameras_ECameraNodeSpace, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OffsetSpace_MetaData), NewProp_OffsetSpace_MetaData) }; // 3423263223
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOffsetCameraNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOffsetCameraNode_Statics::NewProp_TranslationOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOffsetCameraNode_Statics::NewProp_RotationOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOffsetCameraNode_Statics::NewProp_OffsetSpace_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOffsetCameraNode_Statics::NewProp_OffsetSpace,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOffsetCameraNode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOffsetCameraNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCameraNode,
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayCameras,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOffsetCameraNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOffsetCameraNode_Statics::ClassParams = {
	&UOffsetCameraNode::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UOffsetCameraNode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UOffsetCameraNode_Statics::PropPointers),
	0,
	0x002810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOffsetCameraNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UOffsetCameraNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOffsetCameraNode()
{
	if (!Z_Registration_Info_UClass_UOffsetCameraNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOffsetCameraNode.OuterSingleton, Z_Construct_UClass_UOffsetCameraNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOffsetCameraNode.OuterSingleton;
}
template<> GAMEPLAYCAMERAS_API UClass* StaticClass<UOffsetCameraNode>()
{
	return UOffsetCameraNode::StaticClass();
}
UOffsetCameraNode::UOffsetCameraNode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOffsetCameraNode);
UOffsetCameraNode::~UOffsetCameraNode() {}
// End Class UOffsetCameraNode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Common_OffsetCameraNode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOffsetCameraNode, UOffsetCameraNode::StaticClass, TEXT("UOffsetCameraNode"), &Z_Registration_Info_UClass_UOffsetCameraNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOffsetCameraNode), 2488198347U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Common_OffsetCameraNode_h_2316239912(TEXT("/Script/GameplayCameras"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Common_OffsetCameraNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Common_OffsetCameraNode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
