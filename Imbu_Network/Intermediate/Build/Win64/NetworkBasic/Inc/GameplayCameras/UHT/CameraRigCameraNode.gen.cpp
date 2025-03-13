// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayCameras/Public/Nodes/Common/CameraRigCameraNode.h"
#include "GameplayCameras/Public/Core/CameraRigAssetReference.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCameraRigCameraNode() {}

// Begin Cross Module References
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UCameraNode();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UCameraRigAsset_NoRegister();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UCameraRigCameraNode();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UCameraRigCameraNode_NoRegister();
GAMEPLAYCAMERAS_API UScriptStruct* Z_Construct_UScriptStruct_FBooleanCameraRigParameterOverride();
GAMEPLAYCAMERAS_API UScriptStruct* Z_Construct_UScriptStruct_FCameraRigAssetReference();
GAMEPLAYCAMERAS_API UScriptStruct* Z_Construct_UScriptStruct_FDoubleCameraRigParameterOverride();
GAMEPLAYCAMERAS_API UScriptStruct* Z_Construct_UScriptStruct_FFloatCameraRigParameterOverride();
GAMEPLAYCAMERAS_API UScriptStruct* Z_Construct_UScriptStruct_FInteger32CameraRigParameterOverride();
GAMEPLAYCAMERAS_API UScriptStruct* Z_Construct_UScriptStruct_FRotator3dCameraRigParameterOverride();
GAMEPLAYCAMERAS_API UScriptStruct* Z_Construct_UScriptStruct_FRotator3fCameraRigParameterOverride();
GAMEPLAYCAMERAS_API UScriptStruct* Z_Construct_UScriptStruct_FTransform3dCameraRigParameterOverride();
GAMEPLAYCAMERAS_API UScriptStruct* Z_Construct_UScriptStruct_FTransform3fCameraRigParameterOverride();
GAMEPLAYCAMERAS_API UScriptStruct* Z_Construct_UScriptStruct_FVector2dCameraRigParameterOverride();
GAMEPLAYCAMERAS_API UScriptStruct* Z_Construct_UScriptStruct_FVector2fCameraRigParameterOverride();
GAMEPLAYCAMERAS_API UScriptStruct* Z_Construct_UScriptStruct_FVector3dCameraRigParameterOverride();
GAMEPLAYCAMERAS_API UScriptStruct* Z_Construct_UScriptStruct_FVector3fCameraRigParameterOverride();
GAMEPLAYCAMERAS_API UScriptStruct* Z_Construct_UScriptStruct_FVector4dCameraRigParameterOverride();
GAMEPLAYCAMERAS_API UScriptStruct* Z_Construct_UScriptStruct_FVector4fCameraRigParameterOverride();
UPackage* Z_Construct_UPackage__Script_GameplayCameras();
// End Cross Module References

// Begin Class UCameraRigCameraNode
void UCameraRigCameraNode::StaticRegisterNativesUCameraRigCameraNode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCameraRigCameraNode);
UClass* Z_Construct_UClass_UCameraRigCameraNode_NoRegister()
{
	return UCameraRigCameraNode::StaticClass();
}
struct Z_Construct_UClass_UCameraRigCameraNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "CameraNodeCategories", "Common,Utility" },
		{ "Comment", "/**\n * A camera node that runs a camera rig's own node tree.\n */" },
		{ "DisplayName", "Camera Rig Prefab" },
		{ "IncludePath", "Nodes/Common/CameraRigCameraNode.h" },
		{ "ModuleRelativePath", "Public/Nodes/Common/CameraRigCameraNode.h" },
		{ "ToolTip", "A camera node that runs a camera rig's own node tree." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraRigReference_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "/** The camera rig to run. */" },
		{ "ModuleRelativePath", "Public/Nodes/Common/CameraRigCameraNode.h" },
		{ "ObjectTreeGraphHidden", "TRUE" },
		{ "ToolTip", "The camera rig to run." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraRig_MetaData[] = {
		{ "Comment", "// Deprecated properties, predating FCameraRigAssetReference\n" },
		{ "ModuleRelativePath", "Public/Nodes/Common/CameraRigCameraNode.h" },
		{ "ObjectTreeGraphHidden", "TRUE" },
		{ "ToolTip", "Deprecated properties, predating FCameraRigAssetReference" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BooleanOverrides_MetaData[] = {
		{ "ModuleRelativePath", "Public/Nodes/Common/CameraRigCameraNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Integer32Overrides_MetaData[] = {
		{ "ModuleRelativePath", "Public/Nodes/Common/CameraRigCameraNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FloatOverrides_MetaData[] = {
		{ "ModuleRelativePath", "Public/Nodes/Common/CameraRigCameraNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DoubleOverrides_MetaData[] = {
		{ "ModuleRelativePath", "Public/Nodes/Common/CameraRigCameraNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Vector2fOverrides_MetaData[] = {
		{ "ModuleRelativePath", "Public/Nodes/Common/CameraRigCameraNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Vector2dOverrides_MetaData[] = {
		{ "ModuleRelativePath", "Public/Nodes/Common/CameraRigCameraNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Vector3fOverrides_MetaData[] = {
		{ "ModuleRelativePath", "Public/Nodes/Common/CameraRigCameraNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Vector3dOverrides_MetaData[] = {
		{ "ModuleRelativePath", "Public/Nodes/Common/CameraRigCameraNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Vector4fOverrides_MetaData[] = {
		{ "ModuleRelativePath", "Public/Nodes/Common/CameraRigCameraNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Vector4dOverrides_MetaData[] = {
		{ "ModuleRelativePath", "Public/Nodes/Common/CameraRigCameraNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rotator3fOverrides_MetaData[] = {
		{ "ModuleRelativePath", "Public/Nodes/Common/CameraRigCameraNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rotator3dOverrides_MetaData[] = {
		{ "ModuleRelativePath", "Public/Nodes/Common/CameraRigCameraNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Transform3fOverrides_MetaData[] = {
		{ "ModuleRelativePath", "Public/Nodes/Common/CameraRigCameraNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Transform3dOverrides_MetaData[] = {
		{ "ModuleRelativePath", "Public/Nodes/Common/CameraRigCameraNode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CameraRigReference;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraRig;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BooleanOverrides_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BooleanOverrides;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Integer32Overrides_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Integer32Overrides;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FloatOverrides_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_FloatOverrides;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DoubleOverrides_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DoubleOverrides;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Vector2fOverrides_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Vector2fOverrides;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Vector2dOverrides_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Vector2dOverrides;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Vector3fOverrides_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Vector3fOverrides;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Vector3dOverrides_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Vector3dOverrides;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Vector4fOverrides_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Vector4fOverrides;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Vector4dOverrides_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Vector4dOverrides;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Rotator3fOverrides_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Rotator3fOverrides;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Rotator3dOverrides_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Rotator3dOverrides;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Transform3fOverrides_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Transform3fOverrides;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Transform3dOverrides_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Transform3dOverrides;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCameraRigCameraNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCameraRigCameraNode_Statics::NewProp_CameraRigReference = { "CameraRigReference", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCameraRigCameraNode, CameraRigReference), Z_Construct_UScriptStruct_FCameraRigAssetReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraRigReference_MetaData), NewProp_CameraRigReference_MetaData) }; // 1437874377
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCameraRigCameraNode_Statics::NewProp_CameraRig = { "CameraRig", nullptr, (EPropertyFlags)0x0144000020000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCameraRigCameraNode, CameraRig_DEPRECATED), Z_Construct_UClass_UCameraRigAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraRig_MetaData), NewProp_CameraRig_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCameraRigCameraNode_Statics::NewProp_BooleanOverrides_Inner = { "BooleanOverrides", nullptr, (EPropertyFlags)0x0000000020000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FBooleanCameraRigParameterOverride, METADATA_PARAMS(0, nullptr) }; // 1421122142
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCameraRigCameraNode_Statics::NewProp_BooleanOverrides = { "BooleanOverrides", nullptr, (EPropertyFlags)0x0040000020000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCameraRigCameraNode, BooleanOverrides_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BooleanOverrides_MetaData), NewProp_BooleanOverrides_MetaData) }; // 1421122142
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCameraRigCameraNode_Statics::NewProp_Integer32Overrides_Inner = { "Integer32Overrides", nullptr, (EPropertyFlags)0x0000000020000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInteger32CameraRigParameterOverride, METADATA_PARAMS(0, nullptr) }; // 4052694847
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCameraRigCameraNode_Statics::NewProp_Integer32Overrides = { "Integer32Overrides", nullptr, (EPropertyFlags)0x0040000020000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCameraRigCameraNode, Integer32Overrides_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Integer32Overrides_MetaData), NewProp_Integer32Overrides_MetaData) }; // 4052694847
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCameraRigCameraNode_Statics::NewProp_FloatOverrides_Inner = { "FloatOverrides", nullptr, (EPropertyFlags)0x0000000020000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FFloatCameraRigParameterOverride, METADATA_PARAMS(0, nullptr) }; // 2405677883
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCameraRigCameraNode_Statics::NewProp_FloatOverrides = { "FloatOverrides", nullptr, (EPropertyFlags)0x0040000020000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCameraRigCameraNode, FloatOverrides_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FloatOverrides_MetaData), NewProp_FloatOverrides_MetaData) }; // 2405677883
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCameraRigCameraNode_Statics::NewProp_DoubleOverrides_Inner = { "DoubleOverrides", nullptr, (EPropertyFlags)0x0000000020000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDoubleCameraRigParameterOverride, METADATA_PARAMS(0, nullptr) }; // 1815048600
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCameraRigCameraNode_Statics::NewProp_DoubleOverrides = { "DoubleOverrides", nullptr, (EPropertyFlags)0x0040000020000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCameraRigCameraNode, DoubleOverrides_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DoubleOverrides_MetaData), NewProp_DoubleOverrides_MetaData) }; // 1815048600
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCameraRigCameraNode_Statics::NewProp_Vector2fOverrides_Inner = { "Vector2fOverrides", nullptr, (EPropertyFlags)0x0000000020000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector2fCameraRigParameterOverride, METADATA_PARAMS(0, nullptr) }; // 1044709128
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCameraRigCameraNode_Statics::NewProp_Vector2fOverrides = { "Vector2fOverrides", nullptr, (EPropertyFlags)0x0040000020000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCameraRigCameraNode, Vector2fOverrides_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Vector2fOverrides_MetaData), NewProp_Vector2fOverrides_MetaData) }; // 1044709128
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCameraRigCameraNode_Statics::NewProp_Vector2dOverrides_Inner = { "Vector2dOverrides", nullptr, (EPropertyFlags)0x0000000020000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector2dCameraRigParameterOverride, METADATA_PARAMS(0, nullptr) }; // 794216237
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCameraRigCameraNode_Statics::NewProp_Vector2dOverrides = { "Vector2dOverrides", nullptr, (EPropertyFlags)0x0040000020000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCameraRigCameraNode, Vector2dOverrides_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Vector2dOverrides_MetaData), NewProp_Vector2dOverrides_MetaData) }; // 794216237
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCameraRigCameraNode_Statics::NewProp_Vector3fOverrides_Inner = { "Vector3fOverrides", nullptr, (EPropertyFlags)0x0000000020000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector3fCameraRigParameterOverride, METADATA_PARAMS(0, nullptr) }; // 4349358
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCameraRigCameraNode_Statics::NewProp_Vector3fOverrides = { "Vector3fOverrides", nullptr, (EPropertyFlags)0x0040000020000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCameraRigCameraNode, Vector3fOverrides_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Vector3fOverrides_MetaData), NewProp_Vector3fOverrides_MetaData) }; // 4349358
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCameraRigCameraNode_Statics::NewProp_Vector3dOverrides_Inner = { "Vector3dOverrides", nullptr, (EPropertyFlags)0x0000000020000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector3dCameraRigParameterOverride, METADATA_PARAMS(0, nullptr) }; // 2580943505
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCameraRigCameraNode_Statics::NewProp_Vector3dOverrides = { "Vector3dOverrides", nullptr, (EPropertyFlags)0x0040000020000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCameraRigCameraNode, Vector3dOverrides_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Vector3dOverrides_MetaData), NewProp_Vector3dOverrides_MetaData) }; // 2580943505
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCameraRigCameraNode_Statics::NewProp_Vector4fOverrides_Inner = { "Vector4fOverrides", nullptr, (EPropertyFlags)0x0000000020000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector4fCameraRigParameterOverride, METADATA_PARAMS(0, nullptr) }; // 2657815540
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCameraRigCameraNode_Statics::NewProp_Vector4fOverrides = { "Vector4fOverrides", nullptr, (EPropertyFlags)0x0040000020000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCameraRigCameraNode, Vector4fOverrides_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Vector4fOverrides_MetaData), NewProp_Vector4fOverrides_MetaData) }; // 2657815540
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCameraRigCameraNode_Statics::NewProp_Vector4dOverrides_Inner = { "Vector4dOverrides", nullptr, (EPropertyFlags)0x0000000020000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector4dCameraRigParameterOverride, METADATA_PARAMS(0, nullptr) }; // 4135969363
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCameraRigCameraNode_Statics::NewProp_Vector4dOverrides = { "Vector4dOverrides", nullptr, (EPropertyFlags)0x0040000020000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCameraRigCameraNode, Vector4dOverrides_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Vector4dOverrides_MetaData), NewProp_Vector4dOverrides_MetaData) }; // 4135969363
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCameraRigCameraNode_Statics::NewProp_Rotator3fOverrides_Inner = { "Rotator3fOverrides", nullptr, (EPropertyFlags)0x0000000020000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRotator3fCameraRigParameterOverride, METADATA_PARAMS(0, nullptr) }; // 401730230
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCameraRigCameraNode_Statics::NewProp_Rotator3fOverrides = { "Rotator3fOverrides", nullptr, (EPropertyFlags)0x0040000020000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCameraRigCameraNode, Rotator3fOverrides_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rotator3fOverrides_MetaData), NewProp_Rotator3fOverrides_MetaData) }; // 401730230
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCameraRigCameraNode_Statics::NewProp_Rotator3dOverrides_Inner = { "Rotator3dOverrides", nullptr, (EPropertyFlags)0x0000000020000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRotator3dCameraRigParameterOverride, METADATA_PARAMS(0, nullptr) }; // 1578366775
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCameraRigCameraNode_Statics::NewProp_Rotator3dOverrides = { "Rotator3dOverrides", nullptr, (EPropertyFlags)0x0040000020000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCameraRigCameraNode, Rotator3dOverrides_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rotator3dOverrides_MetaData), NewProp_Rotator3dOverrides_MetaData) }; // 1578366775
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCameraRigCameraNode_Statics::NewProp_Transform3fOverrides_Inner = { "Transform3fOverrides", nullptr, (EPropertyFlags)0x0000000020000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTransform3fCameraRigParameterOverride, METADATA_PARAMS(0, nullptr) }; // 105074159
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCameraRigCameraNode_Statics::NewProp_Transform3fOverrides = { "Transform3fOverrides", nullptr, (EPropertyFlags)0x0040000020000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCameraRigCameraNode, Transform3fOverrides_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Transform3fOverrides_MetaData), NewProp_Transform3fOverrides_MetaData) }; // 105074159
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCameraRigCameraNode_Statics::NewProp_Transform3dOverrides_Inner = { "Transform3dOverrides", nullptr, (EPropertyFlags)0x0000000020000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTransform3dCameraRigParameterOverride, METADATA_PARAMS(0, nullptr) }; // 3076768964
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCameraRigCameraNode_Statics::NewProp_Transform3dOverrides = { "Transform3dOverrides", nullptr, (EPropertyFlags)0x0040000020000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCameraRigCameraNode, Transform3dOverrides_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Transform3dOverrides_MetaData), NewProp_Transform3dOverrides_MetaData) }; // 3076768964
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCameraRigCameraNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraRigCameraNode_Statics::NewProp_CameraRigReference,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraRigCameraNode_Statics::NewProp_CameraRig,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraRigCameraNode_Statics::NewProp_BooleanOverrides_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraRigCameraNode_Statics::NewProp_BooleanOverrides,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraRigCameraNode_Statics::NewProp_Integer32Overrides_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraRigCameraNode_Statics::NewProp_Integer32Overrides,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraRigCameraNode_Statics::NewProp_FloatOverrides_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraRigCameraNode_Statics::NewProp_FloatOverrides,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraRigCameraNode_Statics::NewProp_DoubleOverrides_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraRigCameraNode_Statics::NewProp_DoubleOverrides,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraRigCameraNode_Statics::NewProp_Vector2fOverrides_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraRigCameraNode_Statics::NewProp_Vector2fOverrides,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraRigCameraNode_Statics::NewProp_Vector2dOverrides_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraRigCameraNode_Statics::NewProp_Vector2dOverrides,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraRigCameraNode_Statics::NewProp_Vector3fOverrides_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraRigCameraNode_Statics::NewProp_Vector3fOverrides,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraRigCameraNode_Statics::NewProp_Vector3dOverrides_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraRigCameraNode_Statics::NewProp_Vector3dOverrides,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraRigCameraNode_Statics::NewProp_Vector4fOverrides_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraRigCameraNode_Statics::NewProp_Vector4fOverrides,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraRigCameraNode_Statics::NewProp_Vector4dOverrides_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraRigCameraNode_Statics::NewProp_Vector4dOverrides,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraRigCameraNode_Statics::NewProp_Rotator3fOverrides_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraRigCameraNode_Statics::NewProp_Rotator3fOverrides,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraRigCameraNode_Statics::NewProp_Rotator3dOverrides_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraRigCameraNode_Statics::NewProp_Rotator3dOverrides,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraRigCameraNode_Statics::NewProp_Transform3fOverrides_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraRigCameraNode_Statics::NewProp_Transform3fOverrides,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraRigCameraNode_Statics::NewProp_Transform3dOverrides_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraRigCameraNode_Statics::NewProp_Transform3dOverrides,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCameraRigCameraNode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCameraRigCameraNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCameraNode,
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayCameras,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCameraRigCameraNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCameraRigCameraNode_Statics::ClassParams = {
	&UCameraRigCameraNode::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCameraRigCameraNode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCameraRigCameraNode_Statics::PropPointers),
	0,
	0x002810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCameraRigCameraNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UCameraRigCameraNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCameraRigCameraNode()
{
	if (!Z_Registration_Info_UClass_UCameraRigCameraNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCameraRigCameraNode.OuterSingleton, Z_Construct_UClass_UCameraRigCameraNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCameraRigCameraNode.OuterSingleton;
}
template<> GAMEPLAYCAMERAS_API UClass* StaticClass<UCameraRigCameraNode>()
{
	return UCameraRigCameraNode::StaticClass();
}
UCameraRigCameraNode::UCameraRigCameraNode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCameraRigCameraNode);
UCameraRigCameraNode::~UCameraRigCameraNode() {}
// End Class UCameraRigCameraNode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Common_CameraRigCameraNode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCameraRigCameraNode, UCameraRigCameraNode::StaticClass, TEXT("UCameraRigCameraNode"), &Z_Registration_Info_UClass_UCameraRigCameraNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCameraRigCameraNode), 2355633922U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Common_CameraRigCameraNode_h_3898916535(TEXT("/Script/GameplayCameras"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Common_CameraRigCameraNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Common_CameraRigCameraNode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
