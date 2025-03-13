// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayCameras/Public/Nodes/Collision/CollisionPushCameraNode.h"
#include "GameplayCameras/Public/Core/CameraParameters.h"
#include "GameplayCameras/Public/Core/CameraVariableReferences.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCollisionPushCameraNode() {}

// Begin Cross Module References
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UCameraNode();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UCameraValueInterpolator_NoRegister();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UCollisionPushCameraNode();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UCollisionPushCameraNode_NoRegister();
GAMEPLAYCAMERAS_API UEnum* Z_Construct_UEnum_GameplayCameras_ECollisionSafePosition();
GAMEPLAYCAMERAS_API UEnum* Z_Construct_UEnum_GameplayCameras_ECollisionSafePositionOffsetSpace();
GAMEPLAYCAMERAS_API UScriptStruct* Z_Construct_UScriptStruct_FBooleanCameraVariableReference();
GAMEPLAYCAMERAS_API UScriptStruct* Z_Construct_UScriptStruct_FFloatCameraParameter();
GAMEPLAYCAMERAS_API UScriptStruct* Z_Construct_UScriptStruct_FVector3dCameraParameter();
GAMEPLAYCAMERAS_API UScriptStruct* Z_Construct_UScriptStruct_FVector3dCameraVariableReference();
UPackage* Z_Construct_UPackage__Script_GameplayCameras();
// End Cross Module References

// Begin Enum ECollisionSafePosition
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECollisionSafePosition;
static UEnum* ECollisionSafePosition_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ECollisionSafePosition.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ECollisionSafePosition.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GameplayCameras_ECollisionSafePosition, (UObject*)Z_Construct_UPackage__Script_GameplayCameras(), TEXT("ECollisionSafePosition"));
	}
	return Z_Registration_Info_UEnum_ECollisionSafePosition.OuterSingleton;
}
template<> GAMEPLAYCAMERAS_API UEnum* StaticEnum<ECollisionSafePosition>()
{
	return ECollisionSafePosition_StaticEnum();
}
struct Z_Construct_UEnum_GameplayCameras_ECollisionSafePosition_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ActiveContext.Comment", "/**\n\x09 * The initial result location of the active evaluation context on the main \n\x09 * layer's blend stack.\n\x09 */" },
		{ "ActiveContext.Name", "ECollisionSafePosition::ActiveContext" },
		{ "ActiveContext.ToolTip", "The initial result location of the active evaluation context on the main\nlayer's blend stack." },
		{ "Comment", "/**\n * Specifies how to compute the default safe position for the collision camera node\n * to push towards.\n */" },
		{ "ModuleRelativePath", "Public/Nodes/Collision/CollisionPushCameraNode.h" },
		{ "OwningContext.Comment", "/**\n\x09 * The initial result location of the evaluation context of the collision camera node.\n\x09 */" },
		{ "OwningContext.Name", "ECollisionSafePosition::OwningContext" },
		{ "OwningContext.ToolTip", "The initial result location of the evaluation context of the collision camera node." },
		{ "Pawn.Comment", "/**\n\x09 * The location of the player's controlled pawn.\n\x09 */" },
		{ "Pawn.Name", "ECollisionSafePosition::Pawn" },
		{ "Pawn.ToolTip", "The location of the player's controlled pawn." },
		{ "Pivot.Comment", "/**\n\x09 * The current pivot. If no pivot is found, fallback to ActiveContext.\n\x09 */" },
		{ "Pivot.Name", "ECollisionSafePosition::Pivot" },
		{ "Pivot.ToolTip", "The current pivot. If no pivot is found, fallback to ActiveContext." },
		{ "ToolTip", "Specifies how to compute the default safe position for the collision camera node\nto push towards." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ECollisionSafePosition::ActiveContext", (int64)ECollisionSafePosition::ActiveContext },
		{ "ECollisionSafePosition::OwningContext", (int64)ECollisionSafePosition::OwningContext },
		{ "ECollisionSafePosition::Pivot", (int64)ECollisionSafePosition::Pivot },
		{ "ECollisionSafePosition::Pawn", (int64)ECollisionSafePosition::Pawn },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GameplayCameras_ECollisionSafePosition_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_GameplayCameras,
	nullptr,
	"ECollisionSafePosition",
	"ECollisionSafePosition",
	Z_Construct_UEnum_GameplayCameras_ECollisionSafePosition_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayCameras_ECollisionSafePosition_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayCameras_ECollisionSafePosition_Statics::Enum_MetaDataParams), Z_Construct_UEnum_GameplayCameras_ECollisionSafePosition_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_GameplayCameras_ECollisionSafePosition()
{
	if (!Z_Registration_Info_UEnum_ECollisionSafePosition.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECollisionSafePosition.InnerSingleton, Z_Construct_UEnum_GameplayCameras_ECollisionSafePosition_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ECollisionSafePosition.InnerSingleton;
}
// End Enum ECollisionSafePosition

// Begin Enum ECollisionSafePositionOffsetSpace
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECollisionSafePositionOffsetSpace;
static UEnum* ECollisionSafePositionOffsetSpace_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ECollisionSafePositionOffsetSpace.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ECollisionSafePositionOffsetSpace.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GameplayCameras_ECollisionSafePositionOffsetSpace, (UObject*)Z_Construct_UPackage__Script_GameplayCameras(), TEXT("ECollisionSafePositionOffsetSpace"));
	}
	return Z_Registration_Info_UEnum_ECollisionSafePositionOffsetSpace.OuterSingleton;
}
template<> GAMEPLAYCAMERAS_API UEnum* StaticEnum<ECollisionSafePositionOffsetSpace>()
{
	return ECollisionSafePositionOffsetSpace_StaticEnum();
}
struct Z_Construct_UEnum_GameplayCameras_ECollisionSafePositionOffsetSpace_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ActiveContext.Comment", "/** The space of the active evaluation context on the main layer's blend stack. */" },
		{ "ActiveContext.Name", "ECollisionSafePositionOffsetSpace::ActiveContext" },
		{ "ActiveContext.ToolTip", "The space of the active evaluation context on the main layer's blend stack." },
		{ "CameraPose.Comment", "/** The local space of the current camera pose. */" },
		{ "CameraPose.Name", "ECollisionSafePositionOffsetSpace::CameraPose" },
		{ "CameraPose.ToolTip", "The local space of the current camera pose." },
		{ "Comment", "/**\n * Describes the coordinate system in which to offset the collision camera node's\n * safe position.\n */" },
		{ "ModuleRelativePath", "Public/Nodes/Collision/CollisionPushCameraNode.h" },
		{ "OwningContext.Comment", "/** The space of the evaluation context of the collision camera node. */" },
		{ "OwningContext.Name", "ECollisionSafePositionOffsetSpace::OwningContext" },
		{ "OwningContext.ToolTip", "The space of the evaluation context of the collision camera node." },
		{ "Pawn.Comment", "/** The space of the player's controlled pawn. */" },
		{ "Pawn.Name", "ECollisionSafePositionOffsetSpace::Pawn" },
		{ "Pawn.ToolTip", "The space of the player's controlled pawn." },
		{ "Pivot.Comment", "/** The space of the current pivot. If no pivot is found, fallback to ActiveContext. */" },
		{ "Pivot.Name", "ECollisionSafePositionOffsetSpace::Pivot" },
		{ "Pivot.ToolTip", "The space of the current pivot. If no pivot is found, fallback to ActiveContext." },
		{ "ToolTip", "Describes the coordinate system in which to offset the collision camera node's\nsafe position." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ECollisionSafePositionOffsetSpace::ActiveContext", (int64)ECollisionSafePositionOffsetSpace::ActiveContext },
		{ "ECollisionSafePositionOffsetSpace::OwningContext", (int64)ECollisionSafePositionOffsetSpace::OwningContext },
		{ "ECollisionSafePositionOffsetSpace::Pivot", (int64)ECollisionSafePositionOffsetSpace::Pivot },
		{ "ECollisionSafePositionOffsetSpace::CameraPose", (int64)ECollisionSafePositionOffsetSpace::CameraPose },
		{ "ECollisionSafePositionOffsetSpace::Pawn", (int64)ECollisionSafePositionOffsetSpace::Pawn },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GameplayCameras_ECollisionSafePositionOffsetSpace_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_GameplayCameras,
	nullptr,
	"ECollisionSafePositionOffsetSpace",
	"ECollisionSafePositionOffsetSpace",
	Z_Construct_UEnum_GameplayCameras_ECollisionSafePositionOffsetSpace_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayCameras_ECollisionSafePositionOffsetSpace_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayCameras_ECollisionSafePositionOffsetSpace_Statics::Enum_MetaDataParams), Z_Construct_UEnum_GameplayCameras_ECollisionSafePositionOffsetSpace_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_GameplayCameras_ECollisionSafePositionOffsetSpace()
{
	if (!Z_Registration_Info_UEnum_ECollisionSafePositionOffsetSpace.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECollisionSafePositionOffsetSpace.InnerSingleton, Z_Construct_UEnum_GameplayCameras_ECollisionSafePositionOffsetSpace_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ECollisionSafePositionOffsetSpace.InnerSingleton;
}
// End Enum ECollisionSafePositionOffsetSpace

// Begin Class UCollisionPushCameraNode
void UCollisionPushCameraNode::StaticRegisterNativesUCollisionPushCameraNode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCollisionPushCameraNode);
UClass* Z_Construct_UClass_UCollisionPushCameraNode_NoRegister()
{
	return UCollisionPushCameraNode::StaticClass();
}
struct Z_Construct_UClass_UCollisionPushCameraNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "CameraNodeCategories", "Collision" },
		{ "Comment", "/**\n * A node that pushes the camera towards a \"safe position\" when it is colliding with \n * the environment. By default, the \"safe position\" is the pivot of the camera (if any) \n * or the position of the player pawn.\n */" },
		{ "IncludePath", "Nodes/Collision/CollisionPushCameraNode.h" },
		{ "ModuleRelativePath", "Public/Nodes/Collision/CollisionPushCameraNode.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "A node that pushes the camera towards a \"safe position\" when it is colliding with\nthe environment. By default, the \"safe position\" is the pivot of the camera (if any)\nor the position of the player pawn." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SafePosition_MetaData[] = {
		{ "Category", "Safe Position" },
		{ "Comment", "/** How to compute the safe position. */" },
		{ "ModuleRelativePath", "Public/Nodes/Collision/CollisionPushCameraNode.h" },
		{ "ToolTip", "How to compute the safe position." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomSafePosition_MetaData[] = {
		{ "Category", "Safe Position" },
		{ "Comment", "/**\n\x09 * An optional camera variable to query for a safe position. If null, or if the variable\n\x09 * isn't set, fallback to the value defined by SafePosition.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Nodes/Collision/CollisionPushCameraNode.h" },
		{ "ToolTip", "An optional camera variable to query for a safe position. If null, or if the variable\nisn't set, fallback to the value defined by SafePosition." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SafePositionOffset_MetaData[] = {
		{ "Category", "Safe Position" },
		{ "Comment", "/** World-space offset from the target to the line trace's end. */" },
		{ "ModuleRelativePath", "Public/Nodes/Collision/CollisionPushCameraNode.h" },
		{ "ToolTip", "World-space offset from the target to the line trace's end." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SafePositionOffsetSpace_MetaData[] = {
		{ "Category", "Safe Position" },
		{ "Comment", "/** What space the safe position offset should be in. */" },
		{ "ModuleRelativePath", "Public/Nodes/Collision/CollisionPushCameraNode.h" },
		{ "ToolTip", "What space the safe position offset should be in." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnableCollision_MetaData[] = {
		{ "Category", "Collision" },
		{ "Comment", "/**\n\x09 * An optional boolean camera variable that specifies whether collision should be enabled.\n\x09 * When enabled/disabled, the collision push amount will interpolate as per the PushInterpolator\n\x09 * and PullInterpolator.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Nodes/Collision/CollisionPushCameraNode.h" },
		{ "ToolTip", "An optional boolean camera variable that specifies whether collision should be enabled.\nWhen enabled/disabled, the collision push amount will interpolate as per the PushInterpolator\nand PullInterpolator." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionSphereRadius_MetaData[] = {
		{ "Category", "Collision" },
		{ "Comment", "/** Radius of the sphere used for collision testing. */" },
		{ "ModuleRelativePath", "Public/Nodes/Collision/CollisionPushCameraNode.h" },
		{ "ToolTip", "Radius of the sphere used for collision testing." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionChannel_MetaData[] = {
		{ "Category", "Collision" },
		{ "Comment", "/** Collision channel to use for the line trace. */" },
		{ "ModuleRelativePath", "Public/Nodes/Collision/CollisionPushCameraNode.h" },
		{ "ToolTip", "Collision channel to use for the line trace." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PushInterpolator_MetaData[] = {
		{ "Category", "Collision" },
		{ "Comment", "/** The interpolation to use when pushing the camera towards the safe position. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Nodes/Collision/CollisionPushCameraNode.h" },
		{ "ToolTip", "The interpolation to use when pushing the camera towards the safe position." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PullInterpolator_MetaData[] = {
		{ "Category", "Collision" },
		{ "Comment", "/** The interpolation to use when pulling the camera back to its ideal position. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Nodes/Collision/CollisionPushCameraNode.h" },
		{ "ToolTip", "The interpolation to use when pulling the camera back to its ideal position." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRunAsyncCollision_MetaData[] = {
		{ "Category", "Collision" },
		{ "Comment", "/**\n\x09 * Whether to run the collision asynchrnously. \n\x09 * This is better for performance, but results in collision handling being one frame late.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Nodes/Collision/CollisionPushCameraNode.h" },
		{ "ToolTip", "Whether to run the collision asynchrnously.\nThis is better for performance, but results in collision handling being one frame late." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_SafePosition_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SafePosition;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CustomSafePosition;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SafePositionOffset;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SafePositionOffsetSpace_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SafePositionOffsetSpace;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EnableCollision;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CollisionSphereRadius;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CollisionChannel;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PushInterpolator;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PullInterpolator;
	static void NewProp_bRunAsyncCollision_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRunAsyncCollision;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCollisionPushCameraNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCollisionPushCameraNode_Statics::NewProp_SafePosition_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCollisionPushCameraNode_Statics::NewProp_SafePosition = { "SafePosition", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCollisionPushCameraNode, SafePosition), Z_Construct_UEnum_GameplayCameras_ECollisionSafePosition, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SafePosition_MetaData), NewProp_SafePosition_MetaData) }; // 2781536266
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCollisionPushCameraNode_Statics::NewProp_CustomSafePosition = { "CustomSafePosition", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCollisionPushCameraNode, CustomSafePosition), Z_Construct_UScriptStruct_FVector3dCameraVariableReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomSafePosition_MetaData), NewProp_CustomSafePosition_MetaData) }; // 1316263577
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCollisionPushCameraNode_Statics::NewProp_SafePositionOffset = { "SafePositionOffset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCollisionPushCameraNode, SafePositionOffset), Z_Construct_UScriptStruct_FVector3dCameraParameter, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SafePositionOffset_MetaData), NewProp_SafePositionOffset_MetaData) }; // 2998266714
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCollisionPushCameraNode_Statics::NewProp_SafePositionOffsetSpace_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCollisionPushCameraNode_Statics::NewProp_SafePositionOffsetSpace = { "SafePositionOffsetSpace", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCollisionPushCameraNode, SafePositionOffsetSpace), Z_Construct_UEnum_GameplayCameras_ECollisionSafePositionOffsetSpace, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SafePositionOffsetSpace_MetaData), NewProp_SafePositionOffsetSpace_MetaData) }; // 270043703
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCollisionPushCameraNode_Statics::NewProp_EnableCollision = { "EnableCollision", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCollisionPushCameraNode, EnableCollision), Z_Construct_UScriptStruct_FBooleanCameraVariableReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnableCollision_MetaData), NewProp_EnableCollision_MetaData) }; // 3464423664
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCollisionPushCameraNode_Statics::NewProp_CollisionSphereRadius = { "CollisionSphereRadius", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCollisionPushCameraNode, CollisionSphereRadius), Z_Construct_UScriptStruct_FFloatCameraParameter, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionSphereRadius_MetaData), NewProp_CollisionSphereRadius_MetaData) }; // 834407157
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCollisionPushCameraNode_Statics::NewProp_CollisionChannel = { "CollisionChannel", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCollisionPushCameraNode, CollisionChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionChannel_MetaData), NewProp_CollisionChannel_MetaData) }; // 756624936
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCollisionPushCameraNode_Statics::NewProp_PushInterpolator = { "PushInterpolator", nullptr, (EPropertyFlags)0x0114000000080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCollisionPushCameraNode, PushInterpolator), Z_Construct_UClass_UCameraValueInterpolator_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PushInterpolator_MetaData), NewProp_PushInterpolator_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCollisionPushCameraNode_Statics::NewProp_PullInterpolator = { "PullInterpolator", nullptr, (EPropertyFlags)0x0114000000080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCollisionPushCameraNode, PullInterpolator), Z_Construct_UClass_UCameraValueInterpolator_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PullInterpolator_MetaData), NewProp_PullInterpolator_MetaData) };
void Z_Construct_UClass_UCollisionPushCameraNode_Statics::NewProp_bRunAsyncCollision_SetBit(void* Obj)
{
	((UCollisionPushCameraNode*)Obj)->bRunAsyncCollision = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCollisionPushCameraNode_Statics::NewProp_bRunAsyncCollision = { "bRunAsyncCollision", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCollisionPushCameraNode), &Z_Construct_UClass_UCollisionPushCameraNode_Statics::NewProp_bRunAsyncCollision_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRunAsyncCollision_MetaData), NewProp_bRunAsyncCollision_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCollisionPushCameraNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCollisionPushCameraNode_Statics::NewProp_SafePosition_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCollisionPushCameraNode_Statics::NewProp_SafePosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCollisionPushCameraNode_Statics::NewProp_CustomSafePosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCollisionPushCameraNode_Statics::NewProp_SafePositionOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCollisionPushCameraNode_Statics::NewProp_SafePositionOffsetSpace_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCollisionPushCameraNode_Statics::NewProp_SafePositionOffsetSpace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCollisionPushCameraNode_Statics::NewProp_EnableCollision,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCollisionPushCameraNode_Statics::NewProp_CollisionSphereRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCollisionPushCameraNode_Statics::NewProp_CollisionChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCollisionPushCameraNode_Statics::NewProp_PushInterpolator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCollisionPushCameraNode_Statics::NewProp_PullInterpolator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCollisionPushCameraNode_Statics::NewProp_bRunAsyncCollision,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCollisionPushCameraNode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCollisionPushCameraNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCameraNode,
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayCameras,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCollisionPushCameraNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCollisionPushCameraNode_Statics::ClassParams = {
	&UCollisionPushCameraNode::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCollisionPushCameraNode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCollisionPushCameraNode_Statics::PropPointers),
	0,
	0x00A810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCollisionPushCameraNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UCollisionPushCameraNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCollisionPushCameraNode()
{
	if (!Z_Registration_Info_UClass_UCollisionPushCameraNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCollisionPushCameraNode.OuterSingleton, Z_Construct_UClass_UCollisionPushCameraNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCollisionPushCameraNode.OuterSingleton;
}
template<> GAMEPLAYCAMERAS_API UClass* StaticClass<UCollisionPushCameraNode>()
{
	return UCollisionPushCameraNode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCollisionPushCameraNode);
UCollisionPushCameraNode::~UCollisionPushCameraNode() {}
// End Class UCollisionPushCameraNode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Collision_CollisionPushCameraNode_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ECollisionSafePosition_StaticEnum, TEXT("ECollisionSafePosition"), &Z_Registration_Info_UEnum_ECollisionSafePosition, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2781536266U) },
		{ ECollisionSafePositionOffsetSpace_StaticEnum, TEXT("ECollisionSafePositionOffsetSpace"), &Z_Registration_Info_UEnum_ECollisionSafePositionOffsetSpace, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 270043703U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCollisionPushCameraNode, UCollisionPushCameraNode::StaticClass, TEXT("UCollisionPushCameraNode"), &Z_Registration_Info_UClass_UCollisionPushCameraNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCollisionPushCameraNode), 3394533367U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Collision_CollisionPushCameraNode_h_2881059122(TEXT("/Script/GameplayCameras"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Collision_CollisionPushCameraNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Collision_CollisionPushCameraNode_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Collision_CollisionPushCameraNode_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Collision_CollisionPushCameraNode_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
