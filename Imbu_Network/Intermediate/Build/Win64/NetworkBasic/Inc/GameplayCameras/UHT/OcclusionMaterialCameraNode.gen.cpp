// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayCameras/Public/Nodes/Collision/OcclusionMaterialCameraNode.h"
#include "GameplayCameras/Public/Core/CameraParameters.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOcclusionMaterialCameraNode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UCameraNode();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UOcclusionMaterialCameraNode();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UOcclusionMaterialCameraNode_NoRegister();
GAMEPLAYCAMERAS_API UEnum* Z_Construct_UEnum_GameplayCameras_ECameraNodeOriginPosition();
GAMEPLAYCAMERAS_API UEnum* Z_Construct_UEnum_GameplayCameras_ECameraNodeSpace();
GAMEPLAYCAMERAS_API UScriptStruct* Z_Construct_UScriptStruct_FFloatCameraParameter();
GAMEPLAYCAMERAS_API UScriptStruct* Z_Construct_UScriptStruct_FVector3dCameraParameter();
UPackage* Z_Construct_UPackage__Script_GameplayCameras();
// End Cross Module References

// Begin Class UOcclusionMaterialCameraNode
void UOcclusionMaterialCameraNode::StaticRegisterNativesUOcclusionMaterialCameraNode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOcclusionMaterialCameraNode);
UClass* Z_Construct_UClass_UOcclusionMaterialCameraNode_NoRegister()
{
	return UOcclusionMaterialCameraNode::StaticClass();
}
struct Z_Construct_UClass_UOcclusionMaterialCameraNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "CameraNodeCategories", "Collision" },
		{ "IncludePath", "Nodes/Collision/OcclusionMaterialCameraNode.h" },
		{ "ModuleRelativePath", "Public/Nodes/Collision/OcclusionMaterialCameraNode.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OcclusionTransparencyMaterial_MetaData[] = {
		{ "Category", "Occlusion" },
		{ "Comment", "/** Material to apply on objects causing occlusion. */" },
		{ "ModuleRelativePath", "Public/Nodes/Collision/OcclusionMaterialCameraNode.h" },
		{ "ToolTip", "Material to apply on objects causing occlusion." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OcclusionSphereRadius_MetaData[] = {
		{ "Category", "Occlusion" },
		{ "Comment", "/** Radius of the sphere used for occlusion testing. */" },
		{ "ModuleRelativePath", "Public/Nodes/Collision/OcclusionMaterialCameraNode.h" },
		{ "ToolTip", "Radius of the sphere used for occlusion testing." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OcclusionChannel_MetaData[] = {
		{ "Category", "Occlusion" },
		{ "Comment", "/** Collision channel to use for the occlusion testing. */" },
		{ "ModuleRelativePath", "Public/Nodes/Collision/OcclusionMaterialCameraNode.h" },
		{ "ToolTip", "Collision channel to use for the occlusion testing." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OcclusionTargetPosition_MetaData[] = {
		{ "Category", "Occlusion Target" },
		{ "Comment", "/** \n\x09 * The position of the occlusion trace's target. Objects encountered between the current\n\x09 * camera pose location and this target will have the transparency material applied to\n\x09 * them until they move out of the way.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Nodes/Collision/OcclusionMaterialCameraNode.h" },
		{ "ToolTip", "The position of the occlusion trace's target. Objects encountered between the current\ncamera pose location and this target will have the transparency material applied to\nthem until they move out of the way." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OcclusionTargetOffsetSpace_MetaData[] = {
		{ "Category", "Occlusion Target" },
		{ "Comment", "/** The space in which to apply the occlusion target offset. */" },
		{ "ModuleRelativePath", "Public/Nodes/Collision/OcclusionMaterialCameraNode.h" },
		{ "ToolTip", "The space in which to apply the occlusion target offset." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OcclusionTargetOffset_MetaData[] = {
		{ "Category", "Occlusion Target" },
		{ "Comment", "/** Offset from the target to the occlusion trace's end. */" },
		{ "ModuleRelativePath", "Public/Nodes/Collision/OcclusionMaterialCameraNode.h" },
		{ "ToolTip", "Offset from the target to the occlusion trace's end." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OcclusionTransparencyMaterial;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OcclusionSphereRadius;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OcclusionChannel;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OcclusionTargetPosition_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OcclusionTargetPosition;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OcclusionTargetOffsetSpace_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OcclusionTargetOffsetSpace;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OcclusionTargetOffset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOcclusionMaterialCameraNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOcclusionMaterialCameraNode_Statics::NewProp_OcclusionTransparencyMaterial = { "OcclusionTransparencyMaterial", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOcclusionMaterialCameraNode, OcclusionTransparencyMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OcclusionTransparencyMaterial_MetaData), NewProp_OcclusionTransparencyMaterial_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOcclusionMaterialCameraNode_Statics::NewProp_OcclusionSphereRadius = { "OcclusionSphereRadius", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOcclusionMaterialCameraNode, OcclusionSphereRadius), Z_Construct_UScriptStruct_FFloatCameraParameter, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OcclusionSphereRadius_MetaData), NewProp_OcclusionSphereRadius_MetaData) }; // 834407157
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UOcclusionMaterialCameraNode_Statics::NewProp_OcclusionChannel = { "OcclusionChannel", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOcclusionMaterialCameraNode, OcclusionChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OcclusionChannel_MetaData), NewProp_OcclusionChannel_MetaData) }; // 756624936
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UOcclusionMaterialCameraNode_Statics::NewProp_OcclusionTargetPosition_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UOcclusionMaterialCameraNode_Statics::NewProp_OcclusionTargetPosition = { "OcclusionTargetPosition", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOcclusionMaterialCameraNode, OcclusionTargetPosition), Z_Construct_UEnum_GameplayCameras_ECameraNodeOriginPosition, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OcclusionTargetPosition_MetaData), NewProp_OcclusionTargetPosition_MetaData) }; // 3879029595
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UOcclusionMaterialCameraNode_Statics::NewProp_OcclusionTargetOffsetSpace_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UOcclusionMaterialCameraNode_Statics::NewProp_OcclusionTargetOffsetSpace = { "OcclusionTargetOffsetSpace", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOcclusionMaterialCameraNode, OcclusionTargetOffsetSpace), Z_Construct_UEnum_GameplayCameras_ECameraNodeSpace, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OcclusionTargetOffsetSpace_MetaData), NewProp_OcclusionTargetOffsetSpace_MetaData) }; // 3423263223
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOcclusionMaterialCameraNode_Statics::NewProp_OcclusionTargetOffset = { "OcclusionTargetOffset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOcclusionMaterialCameraNode, OcclusionTargetOffset), Z_Construct_UScriptStruct_FVector3dCameraParameter, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OcclusionTargetOffset_MetaData), NewProp_OcclusionTargetOffset_MetaData) }; // 2998266714
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOcclusionMaterialCameraNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOcclusionMaterialCameraNode_Statics::NewProp_OcclusionTransparencyMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOcclusionMaterialCameraNode_Statics::NewProp_OcclusionSphereRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOcclusionMaterialCameraNode_Statics::NewProp_OcclusionChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOcclusionMaterialCameraNode_Statics::NewProp_OcclusionTargetPosition_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOcclusionMaterialCameraNode_Statics::NewProp_OcclusionTargetPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOcclusionMaterialCameraNode_Statics::NewProp_OcclusionTargetOffsetSpace_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOcclusionMaterialCameraNode_Statics::NewProp_OcclusionTargetOffsetSpace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOcclusionMaterialCameraNode_Statics::NewProp_OcclusionTargetOffset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOcclusionMaterialCameraNode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOcclusionMaterialCameraNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCameraNode,
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayCameras,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOcclusionMaterialCameraNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOcclusionMaterialCameraNode_Statics::ClassParams = {
	&UOcclusionMaterialCameraNode::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UOcclusionMaterialCameraNode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UOcclusionMaterialCameraNode_Statics::PropPointers),
	0,
	0x002810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOcclusionMaterialCameraNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UOcclusionMaterialCameraNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOcclusionMaterialCameraNode()
{
	if (!Z_Registration_Info_UClass_UOcclusionMaterialCameraNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOcclusionMaterialCameraNode.OuterSingleton, Z_Construct_UClass_UOcclusionMaterialCameraNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOcclusionMaterialCameraNode.OuterSingleton;
}
template<> GAMEPLAYCAMERAS_API UClass* StaticClass<UOcclusionMaterialCameraNode>()
{
	return UOcclusionMaterialCameraNode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOcclusionMaterialCameraNode);
UOcclusionMaterialCameraNode::~UOcclusionMaterialCameraNode() {}
// End Class UOcclusionMaterialCameraNode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Collision_OcclusionMaterialCameraNode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOcclusionMaterialCameraNode, UOcclusionMaterialCameraNode::StaticClass, TEXT("UOcclusionMaterialCameraNode"), &Z_Registration_Info_UClass_UOcclusionMaterialCameraNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOcclusionMaterialCameraNode), 3660583174U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Collision_OcclusionMaterialCameraNode_h_2789678418(TEXT("/Script/GameplayCameras"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Collision_OcclusionMaterialCameraNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Collision_OcclusionMaterialCameraNode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
