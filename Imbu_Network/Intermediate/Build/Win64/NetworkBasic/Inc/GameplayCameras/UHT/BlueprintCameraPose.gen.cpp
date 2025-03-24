// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayCameras/Public/GameFramework/BlueprintCameraPose.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlueprintCameraPose() {}

// Begin Cross Module References
CINEMATICCAMERA_API UClass* Z_Construct_UClass_UCineCameraComponent_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRay();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAspectRatioAxisConstraint();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UBlueprintCameraPoseFunctionLibrary();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UBlueprintCameraPoseFunctionLibrary_NoRegister();
GAMEPLAYCAMERAS_API UScriptStruct* Z_Construct_UScriptStruct_FBlueprintCameraPose();
UPackage* Z_Construct_UPackage__Script_GameplayCameras();
// End Cross Module References

// Begin ScriptStruct FBlueprintCameraPose
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BlueprintCameraPose;
class UScriptStruct* FBlueprintCameraPose::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BlueprintCameraPose.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BlueprintCameraPose.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBlueprintCameraPose, (UObject*)Z_Construct_UPackage__Script_GameplayCameras(), TEXT("BlueprintCameraPose"));
	}
	return Z_Registration_Info_UScriptStruct_BlueprintCameraPose.OuterSingleton;
}
template<> GAMEPLAYCAMERAS_API UScriptStruct* StaticStruct<FBlueprintCameraPose>()
{
	return FBlueprintCameraPose::StaticStruct();
}
struct Z_Construct_UScriptStruct_FBlueprintCameraPose_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Represents a camera pose. */" },
		{ "DisplayName", "Camera Pose" },
		{ "ModuleRelativePath", "Public/GameFramework/BlueprintCameraPose.h" },
		{ "ToolTip", "Represents a camera pose." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** The location of the camera. */" },
		{ "ModuleRelativePath", "Public/GameFramework/BlueprintCameraPose.h" },
		{ "ToolTip", "The location of the camera." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** The rotation of the camera. */" },
		{ "ModuleRelativePath", "Public/GameFramework/BlueprintCameraPose.h" },
		{ "ToolTip", "The rotation of the camera." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetDistance_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** The distance of the target of the camera. */" },
		{ "ModuleRelativePath", "Public/GameFramework/BlueprintCameraPose.h" },
		{ "ToolTip", "The distance of the target of the camera." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FieldOfView_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** The field of view of the camera. May be negative if driven by focal length. */" },
		{ "ModuleRelativePath", "Public/GameFramework/BlueprintCameraPose.h" },
		{ "ToolTip", "The field of view of the camera. May be negative if driven by focal length." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FocalLength_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** The focal length of the camera. May be negative if driven directly by field of view. */" },
		{ "ModuleRelativePath", "Public/GameFramework/BlueprintCameraPose.h" },
		{ "ToolTip", "The focal length of the camera. May be negative if driven directly by field of view." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Aperture_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** The aperture (f-stop) of the camera's lens. */" },
		{ "ModuleRelativePath", "Public/GameFramework/BlueprintCameraPose.h" },
		{ "ToolTip", "The aperture (f-stop) of the camera's lens." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShutterSpeed_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** The shutter speed of the camera's lens, in 1/seconds */" },
		{ "ModuleRelativePath", "Public/GameFramework/BlueprintCameraPose.h" },
		{ "ToolTip", "The shutter speed of the camera's lens, in 1/seconds" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FocusDistance_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** The focus distance of the camera, if different from target distance. */" },
		{ "ModuleRelativePath", "Public/GameFramework/BlueprintCameraPose.h" },
		{ "ToolTip", "The focus distance of the camera, if different from target distance." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SensorWidth_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** The width of the camera's sensor. */" },
		{ "ModuleRelativePath", "Public/GameFramework/BlueprintCameraPose.h" },
		{ "ToolTip", "The width of the camera's sensor." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SensorHeight_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** The height of the camera's sensor. */" },
		{ "ModuleRelativePath", "Public/GameFramework/BlueprintCameraPose.h" },
		{ "ToolTip", "The height of the camera's sensor." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ISO_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** The camera sensor sensitivity in ISO. */" },
		{ "ModuleRelativePath", "Public/GameFramework/BlueprintCameraPose.h" },
		{ "ToolTip", "The camera sensor sensitivity in ISO." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SqueezeFactor_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** The squeeze factor of the camera's lens. */" },
		{ "ModuleRelativePath", "Public/GameFramework/BlueprintCameraPose.h" },
		{ "ToolTip", "The squeeze factor of the camera's lens." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DiaphragmBladeCount_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Number of blades in the lens diaphragm */" },
		{ "ModuleRelativePath", "Public/GameFramework/BlueprintCameraPose.h" },
		{ "ToolTip", "Number of blades in the lens diaphragm" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NearClippingPlane_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** The camera's near clipping plane. */" },
		{ "ModuleRelativePath", "Public/GameFramework/BlueprintCameraPose.h" },
		{ "ToolTip", "The camera's near clipping plane." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FarClippingPlane_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** The camera's far clipping plane. */" },
		{ "ModuleRelativePath", "Public/GameFramework/BlueprintCameraPose.h" },
		{ "ToolTip", "The camera's far clipping plane." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PhysicalCameraBlendWeight_MetaData[] = {
		{ "Comment", "/** Internal weight for physical camera post-process settings. */" },
		{ "ModuleRelativePath", "Public/GameFramework/BlueprintCameraPose.h" },
		{ "ToolTip", "Internal weight for physical camera post-process settings." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnablePhysicalCamera_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** \n\x09 * Whether to setup post-process settings based on physical camera properties such as Aperture,\n\x09 * FocusDistance, DiaphragmBladeCount, and so on.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/BlueprintCameraPose.h" },
		{ "ToolTip", "Whether to setup post-process settings based on physical camera properties such as Aperture,\nFocusDistance, DiaphragmBladeCount, and so on." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConstrainAspectRatio_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Whether the camera should constrain aspect ratio. */" },
		{ "ModuleRelativePath", "Public/GameFramework/BlueprintCameraPose.h" },
		{ "ToolTip", "Whether the camera should constrain aspect ratio." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverrideAspectRatioAxisConstraint_MetaData[] = {
		{ "Comment", "/** Whether to override the default aspect ratio axis constraint defined on the player controller */" },
		{ "ModuleRelativePath", "Public/GameFramework/BlueprintCameraPose.h" },
		{ "ToolTip", "Whether to override the default aspect ratio axis constraint defined on the player controller" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AspectRatioAxisConstraint_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** The aspect ratio axis constraint to use if aspect ratio is constrained. */" },
		{ "ModuleRelativePath", "Public/GameFramework/BlueprintCameraPose.h" },
		{ "ToolTip", "The aspect ratio axis constraint to use if aspect ratio is constrained." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_TargetDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FieldOfView;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FocalLength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Aperture;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ShutterSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FocusDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SensorWidth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SensorHeight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ISO;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SqueezeFactor;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DiaphragmBladeCount;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NearClippingPlane;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FarClippingPlane;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PhysicalCameraBlendWeight;
	static void NewProp_EnablePhysicalCamera_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_EnablePhysicalCamera;
	static void NewProp_ConstrainAspectRatio_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ConstrainAspectRatio;
	static void NewProp_OverrideAspectRatioAxisConstraint_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_OverrideAspectRatioAxisConstraint;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AspectRatioAxisConstraint;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBlueprintCameraPose>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBlueprintCameraPose_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBlueprintCameraPose, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Location_MetaData), NewProp_Location_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBlueprintCameraPose_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBlueprintCameraPose, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rotation_MetaData), NewProp_Rotation_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FBlueprintCameraPose_Statics::NewProp_TargetDistance = { "TargetDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBlueprintCameraPose, TargetDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetDistance_MetaData), NewProp_TargetDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBlueprintCameraPose_Statics::NewProp_FieldOfView = { "FieldOfView", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBlueprintCameraPose, FieldOfView), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FieldOfView_MetaData), NewProp_FieldOfView_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBlueprintCameraPose_Statics::NewProp_FocalLength = { "FocalLength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBlueprintCameraPose, FocalLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FocalLength_MetaData), NewProp_FocalLength_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBlueprintCameraPose_Statics::NewProp_Aperture = { "Aperture", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBlueprintCameraPose, Aperture), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Aperture_MetaData), NewProp_Aperture_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBlueprintCameraPose_Statics::NewProp_ShutterSpeed = { "ShutterSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBlueprintCameraPose, ShutterSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShutterSpeed_MetaData), NewProp_ShutterSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBlueprintCameraPose_Statics::NewProp_FocusDistance = { "FocusDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBlueprintCameraPose, FocusDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FocusDistance_MetaData), NewProp_FocusDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBlueprintCameraPose_Statics::NewProp_SensorWidth = { "SensorWidth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBlueprintCameraPose, SensorWidth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SensorWidth_MetaData), NewProp_SensorWidth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBlueprintCameraPose_Statics::NewProp_SensorHeight = { "SensorHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBlueprintCameraPose, SensorHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SensorHeight_MetaData), NewProp_SensorHeight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBlueprintCameraPose_Statics::NewProp_ISO = { "ISO", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBlueprintCameraPose, ISO), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ISO_MetaData), NewProp_ISO_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBlueprintCameraPose_Statics::NewProp_SqueezeFactor = { "SqueezeFactor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBlueprintCameraPose, SqueezeFactor), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SqueezeFactor_MetaData), NewProp_SqueezeFactor_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBlueprintCameraPose_Statics::NewProp_DiaphragmBladeCount = { "DiaphragmBladeCount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBlueprintCameraPose, DiaphragmBladeCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DiaphragmBladeCount_MetaData), NewProp_DiaphragmBladeCount_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBlueprintCameraPose_Statics::NewProp_NearClippingPlane = { "NearClippingPlane", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBlueprintCameraPose, NearClippingPlane), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NearClippingPlane_MetaData), NewProp_NearClippingPlane_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBlueprintCameraPose_Statics::NewProp_FarClippingPlane = { "FarClippingPlane", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBlueprintCameraPose, FarClippingPlane), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FarClippingPlane_MetaData), NewProp_FarClippingPlane_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBlueprintCameraPose_Statics::NewProp_PhysicalCameraBlendWeight = { "PhysicalCameraBlendWeight", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBlueprintCameraPose, PhysicalCameraBlendWeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PhysicalCameraBlendWeight_MetaData), NewProp_PhysicalCameraBlendWeight_MetaData) };
void Z_Construct_UScriptStruct_FBlueprintCameraPose_Statics::NewProp_EnablePhysicalCamera_SetBit(void* Obj)
{
	((FBlueprintCameraPose*)Obj)->EnablePhysicalCamera = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBlueprintCameraPose_Statics::NewProp_EnablePhysicalCamera = { "EnablePhysicalCamera", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FBlueprintCameraPose), &Z_Construct_UScriptStruct_FBlueprintCameraPose_Statics::NewProp_EnablePhysicalCamera_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnablePhysicalCamera_MetaData), NewProp_EnablePhysicalCamera_MetaData) };
void Z_Construct_UScriptStruct_FBlueprintCameraPose_Statics::NewProp_ConstrainAspectRatio_SetBit(void* Obj)
{
	((FBlueprintCameraPose*)Obj)->ConstrainAspectRatio = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBlueprintCameraPose_Statics::NewProp_ConstrainAspectRatio = { "ConstrainAspectRatio", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FBlueprintCameraPose), &Z_Construct_UScriptStruct_FBlueprintCameraPose_Statics::NewProp_ConstrainAspectRatio_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConstrainAspectRatio_MetaData), NewProp_ConstrainAspectRatio_MetaData) };
void Z_Construct_UScriptStruct_FBlueprintCameraPose_Statics::NewProp_OverrideAspectRatioAxisConstraint_SetBit(void* Obj)
{
	((FBlueprintCameraPose*)Obj)->OverrideAspectRatioAxisConstraint = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBlueprintCameraPose_Statics::NewProp_OverrideAspectRatioAxisConstraint = { "OverrideAspectRatioAxisConstraint", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FBlueprintCameraPose), &Z_Construct_UScriptStruct_FBlueprintCameraPose_Statics::NewProp_OverrideAspectRatioAxisConstraint_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverrideAspectRatioAxisConstraint_MetaData), NewProp_OverrideAspectRatioAxisConstraint_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FBlueprintCameraPose_Statics::NewProp_AspectRatioAxisConstraint = { "AspectRatioAxisConstraint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBlueprintCameraPose, AspectRatioAxisConstraint), Z_Construct_UEnum_Engine_EAspectRatioAxisConstraint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AspectRatioAxisConstraint_MetaData), NewProp_AspectRatioAxisConstraint_MetaData) }; // 707974947
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBlueprintCameraPose_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlueprintCameraPose_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlueprintCameraPose_Statics::NewProp_Rotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlueprintCameraPose_Statics::NewProp_TargetDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlueprintCameraPose_Statics::NewProp_FieldOfView,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlueprintCameraPose_Statics::NewProp_FocalLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlueprintCameraPose_Statics::NewProp_Aperture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlueprintCameraPose_Statics::NewProp_ShutterSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlueprintCameraPose_Statics::NewProp_FocusDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlueprintCameraPose_Statics::NewProp_SensorWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlueprintCameraPose_Statics::NewProp_SensorHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlueprintCameraPose_Statics::NewProp_ISO,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlueprintCameraPose_Statics::NewProp_SqueezeFactor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlueprintCameraPose_Statics::NewProp_DiaphragmBladeCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlueprintCameraPose_Statics::NewProp_NearClippingPlane,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlueprintCameraPose_Statics::NewProp_FarClippingPlane,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlueprintCameraPose_Statics::NewProp_PhysicalCameraBlendWeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlueprintCameraPose_Statics::NewProp_EnablePhysicalCamera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlueprintCameraPose_Statics::NewProp_ConstrainAspectRatio,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlueprintCameraPose_Statics::NewProp_OverrideAspectRatioAxisConstraint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlueprintCameraPose_Statics::NewProp_AspectRatioAxisConstraint,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintCameraPose_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBlueprintCameraPose_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayCameras,
	nullptr,
	&NewStructOps,
	"BlueprintCameraPose",
	Z_Construct_UScriptStruct_FBlueprintCameraPose_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintCameraPose_Statics::PropPointers),
	sizeof(FBlueprintCameraPose),
	alignof(FBlueprintCameraPose),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintCameraPose_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FBlueprintCameraPose_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FBlueprintCameraPose()
{
	if (!Z_Registration_Info_UScriptStruct_BlueprintCameraPose.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BlueprintCameraPose.InnerSingleton, Z_Construct_UScriptStruct_FBlueprintCameraPose_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_BlueprintCameraPose.InnerSingleton;
}
// End ScriptStruct FBlueprintCameraPose

// Begin Class UBlueprintCameraPoseFunctionLibrary Function GetAimDir
struct Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetAimDir_Statics
{
	struct BlueprintCameraPoseFunctionLibrary_eventGetAimDir_Parms
	{
		FBlueprintCameraPose CameraPose;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Gets the facing direction of the camera pose. */" },
		{ "ModuleRelativePath", "Public/GameFramework/BlueprintCameraPose.h" },
		{ "ToolTip", "Gets the facing direction of the camera pose." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraPose_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CameraPose;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetAimDir_Statics::NewProp_CameraPose = { "CameraPose", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintCameraPoseFunctionLibrary_eventGetAimDir_Parms, CameraPose), Z_Construct_UScriptStruct_FBlueprintCameraPose, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraPose_MetaData), NewProp_CameraPose_MetaData) }; // 3605729677
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetAimDir_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintCameraPoseFunctionLibrary_eventGetAimDir_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetAimDir_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetAimDir_Statics::NewProp_CameraPose,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetAimDir_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetAimDir_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetAimDir_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintCameraPoseFunctionLibrary, nullptr, "GetAimDir", nullptr, nullptr, Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetAimDir_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetAimDir_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetAimDir_Statics::BlueprintCameraPoseFunctionLibrary_eventGetAimDir_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetAimDir_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetAimDir_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetAimDir_Statics::BlueprintCameraPoseFunctionLibrary_eventGetAimDir_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetAimDir()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetAimDir_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBlueprintCameraPoseFunctionLibrary::execGetAimDir)
{
	P_GET_STRUCT_REF(FBlueprintCameraPose,Z_Param_Out_CameraPose);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=UBlueprintCameraPoseFunctionLibrary::GetAimDir(Z_Param_Out_CameraPose);
	P_NATIVE_END;
}
// End Class UBlueprintCameraPoseFunctionLibrary Function GetAimDir

// Begin Class UBlueprintCameraPoseFunctionLibrary Function GetAimRay
struct Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetAimRay_Statics
{
	struct BlueprintCameraPoseFunctionLibrary_eventGetAimRay_Parms
	{
		FBlueprintCameraPose CameraPose;
		FRay ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Gets the aim ray of the camera pose. */" },
		{ "ModuleRelativePath", "Public/GameFramework/BlueprintCameraPose.h" },
		{ "ToolTip", "Gets the aim ray of the camera pose." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraPose_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CameraPose;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetAimRay_Statics::NewProp_CameraPose = { "CameraPose", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintCameraPoseFunctionLibrary_eventGetAimRay_Parms, CameraPose), Z_Construct_UScriptStruct_FBlueprintCameraPose, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraPose_MetaData), NewProp_CameraPose_MetaData) }; // 3605729677
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetAimRay_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintCameraPoseFunctionLibrary_eventGetAimRay_Parms, ReturnValue), Z_Construct_UScriptStruct_FRay, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetAimRay_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetAimRay_Statics::NewProp_CameraPose,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetAimRay_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetAimRay_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetAimRay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintCameraPoseFunctionLibrary, nullptr, "GetAimRay", nullptr, nullptr, Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetAimRay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetAimRay_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetAimRay_Statics::BlueprintCameraPoseFunctionLibrary_eventGetAimRay_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetAimRay_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetAimRay_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetAimRay_Statics::BlueprintCameraPoseFunctionLibrary_eventGetAimRay_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetAimRay()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetAimRay_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBlueprintCameraPoseFunctionLibrary::execGetAimRay)
{
	P_GET_STRUCT_REF(FBlueprintCameraPose,Z_Param_Out_CameraPose);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FRay*)Z_Param__Result=UBlueprintCameraPoseFunctionLibrary::GetAimRay(Z_Param_Out_CameraPose);
	P_NATIVE_END;
}
// End Class UBlueprintCameraPoseFunctionLibrary Function GetAimRay

// Begin Class UBlueprintCameraPoseFunctionLibrary Function GetEffectiveFieldOfView
struct Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetEffectiveFieldOfView_Statics
{
	struct BlueprintCameraPoseFunctionLibrary_eventGetEffectiveFieldOfView_Parms
	{
		FBlueprintCameraPose CameraPose;
		double ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Gets the effective field of view of the camera pose, possibly computed from focal length. */" },
		{ "ModuleRelativePath", "Public/GameFramework/BlueprintCameraPose.h" },
		{ "ToolTip", "Gets the effective field of view of the camera pose, possibly computed from focal length." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraPose_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CameraPose;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetEffectiveFieldOfView_Statics::NewProp_CameraPose = { "CameraPose", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintCameraPoseFunctionLibrary_eventGetEffectiveFieldOfView_Parms, CameraPose), Z_Construct_UScriptStruct_FBlueprintCameraPose, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraPose_MetaData), NewProp_CameraPose_MetaData) }; // 3605729677
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetEffectiveFieldOfView_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintCameraPoseFunctionLibrary_eventGetEffectiveFieldOfView_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetEffectiveFieldOfView_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetEffectiveFieldOfView_Statics::NewProp_CameraPose,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetEffectiveFieldOfView_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetEffectiveFieldOfView_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetEffectiveFieldOfView_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintCameraPoseFunctionLibrary, nullptr, "GetEffectiveFieldOfView", nullptr, nullptr, Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetEffectiveFieldOfView_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetEffectiveFieldOfView_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetEffectiveFieldOfView_Statics::BlueprintCameraPoseFunctionLibrary_eventGetEffectiveFieldOfView_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetEffectiveFieldOfView_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetEffectiveFieldOfView_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetEffectiveFieldOfView_Statics::BlueprintCameraPoseFunctionLibrary_eventGetEffectiveFieldOfView_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetEffectiveFieldOfView()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetEffectiveFieldOfView_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBlueprintCameraPoseFunctionLibrary::execGetEffectiveFieldOfView)
{
	P_GET_STRUCT_REF(FBlueprintCameraPose,Z_Param_Out_CameraPose);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(double*)Z_Param__Result=UBlueprintCameraPoseFunctionLibrary::GetEffectiveFieldOfView(Z_Param_Out_CameraPose);
	P_NATIVE_END;
}
// End Class UBlueprintCameraPoseFunctionLibrary Function GetEffectiveFieldOfView

// Begin Class UBlueprintCameraPoseFunctionLibrary Function GetFieldOfView
struct Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetFieldOfView_Statics
{
	struct BlueprintCameraPoseFunctionLibrary_eventGetFieldOfView_Parms
	{
		FBlueprintCameraPose CameraPose;
		double ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Gets the field of view of the camera pose. */" },
		{ "ModuleRelativePath", "Public/GameFramework/BlueprintCameraPose.h" },
		{ "ToolTip", "Gets the field of view of the camera pose." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraPose_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CameraPose;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetFieldOfView_Statics::NewProp_CameraPose = { "CameraPose", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintCameraPoseFunctionLibrary_eventGetFieldOfView_Parms, CameraPose), Z_Construct_UScriptStruct_FBlueprintCameraPose, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraPose_MetaData), NewProp_CameraPose_MetaData) }; // 3605729677
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetFieldOfView_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintCameraPoseFunctionLibrary_eventGetFieldOfView_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetFieldOfView_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetFieldOfView_Statics::NewProp_CameraPose,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetFieldOfView_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetFieldOfView_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetFieldOfView_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintCameraPoseFunctionLibrary, nullptr, "GetFieldOfView", nullptr, nullptr, Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetFieldOfView_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetFieldOfView_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetFieldOfView_Statics::BlueprintCameraPoseFunctionLibrary_eventGetFieldOfView_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetFieldOfView_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetFieldOfView_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetFieldOfView_Statics::BlueprintCameraPoseFunctionLibrary_eventGetFieldOfView_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetFieldOfView()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetFieldOfView_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBlueprintCameraPoseFunctionLibrary::execGetFieldOfView)
{
	P_GET_STRUCT_REF(FBlueprintCameraPose,Z_Param_Out_CameraPose);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(double*)Z_Param__Result=UBlueprintCameraPoseFunctionLibrary::GetFieldOfView(Z_Param_Out_CameraPose);
	P_NATIVE_END;
}
// End Class UBlueprintCameraPoseFunctionLibrary Function GetFieldOfView

// Begin Class UBlueprintCameraPoseFunctionLibrary Function GetFocalLength
struct Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetFocalLength_Statics
{
	struct BlueprintCameraPoseFunctionLibrary_eventGetFocalLength_Parms
	{
		FBlueprintCameraPose CameraPose;
		double ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Gets the focal length of the camera pose. */" },
		{ "ModuleRelativePath", "Public/GameFramework/BlueprintCameraPose.h" },
		{ "ToolTip", "Gets the focal length of the camera pose." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraPose_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CameraPose;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetFocalLength_Statics::NewProp_CameraPose = { "CameraPose", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintCameraPoseFunctionLibrary_eventGetFocalLength_Parms, CameraPose), Z_Construct_UScriptStruct_FBlueprintCameraPose, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraPose_MetaData), NewProp_CameraPose_MetaData) }; // 3605729677
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetFocalLength_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintCameraPoseFunctionLibrary_eventGetFocalLength_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetFocalLength_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetFocalLength_Statics::NewProp_CameraPose,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetFocalLength_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetFocalLength_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetFocalLength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintCameraPoseFunctionLibrary, nullptr, "GetFocalLength", nullptr, nullptr, Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetFocalLength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetFocalLength_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetFocalLength_Statics::BlueprintCameraPoseFunctionLibrary_eventGetFocalLength_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetFocalLength_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetFocalLength_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetFocalLength_Statics::BlueprintCameraPoseFunctionLibrary_eventGetFocalLength_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetFocalLength()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetFocalLength_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBlueprintCameraPoseFunctionLibrary::execGetFocalLength)
{
	P_GET_STRUCT_REF(FBlueprintCameraPose,Z_Param_Out_CameraPose);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(double*)Z_Param__Result=UBlueprintCameraPoseFunctionLibrary::GetFocalLength(Z_Param_Out_CameraPose);
	P_NATIVE_END;
}
// End Class UBlueprintCameraPoseFunctionLibrary Function GetFocalLength

// Begin Class UBlueprintCameraPoseFunctionLibrary Function GetLocation
struct Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetLocation_Statics
{
	struct BlueprintCameraPoseFunctionLibrary_eventGetLocation_Parms
	{
		FBlueprintCameraPose CameraPose;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Gets the location of the camera pose. */" },
		{ "ModuleRelativePath", "Public/GameFramework/BlueprintCameraPose.h" },
		{ "ToolTip", "Gets the location of the camera pose." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraPose_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CameraPose;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetLocation_Statics::NewProp_CameraPose = { "CameraPose", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintCameraPoseFunctionLibrary_eventGetLocation_Parms, CameraPose), Z_Construct_UScriptStruct_FBlueprintCameraPose, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraPose_MetaData), NewProp_CameraPose_MetaData) }; // 3605729677
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintCameraPoseFunctionLibrary_eventGetLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetLocation_Statics::NewProp_CameraPose,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetLocation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetLocation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintCameraPoseFunctionLibrary, nullptr, "GetLocation", nullptr, nullptr, Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetLocation_Statics::BlueprintCameraPoseFunctionLibrary_eventGetLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetLocation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetLocation_Statics::BlueprintCameraPoseFunctionLibrary_eventGetLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBlueprintCameraPoseFunctionLibrary::execGetLocation)
{
	P_GET_STRUCT_REF(FBlueprintCameraPose,Z_Param_Out_CameraPose);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=UBlueprintCameraPoseFunctionLibrary::GetLocation(Z_Param_Out_CameraPose);
	P_NATIVE_END;
}
// End Class UBlueprintCameraPoseFunctionLibrary Function GetLocation

// Begin Class UBlueprintCameraPoseFunctionLibrary Function GetRotation
struct Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetRotation_Statics
{
	struct BlueprintCameraPoseFunctionLibrary_eventGetRotation_Parms
	{
		FBlueprintCameraPose CameraPose;
		FRotator ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Gets the rotation of the camera pose. */" },
		{ "ModuleRelativePath", "Public/GameFramework/BlueprintCameraPose.h" },
		{ "ToolTip", "Gets the rotation of the camera pose." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraPose_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CameraPose;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetRotation_Statics::NewProp_CameraPose = { "CameraPose", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintCameraPoseFunctionLibrary_eventGetRotation_Parms, CameraPose), Z_Construct_UScriptStruct_FBlueprintCameraPose, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraPose_MetaData), NewProp_CameraPose_MetaData) }; // 3605729677
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetRotation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintCameraPoseFunctionLibrary_eventGetRotation_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetRotation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetRotation_Statics::NewProp_CameraPose,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetRotation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetRotation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintCameraPoseFunctionLibrary, nullptr, "GetRotation", nullptr, nullptr, Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetRotation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetRotation_Statics::BlueprintCameraPoseFunctionLibrary_eventGetRotation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetRotation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetRotation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetRotation_Statics::BlueprintCameraPoseFunctionLibrary_eventGetRotation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetRotation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetRotation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBlueprintCameraPoseFunctionLibrary::execGetRotation)
{
	P_GET_STRUCT_REF(FBlueprintCameraPose,Z_Param_Out_CameraPose);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FRotator*)Z_Param__Result=UBlueprintCameraPoseFunctionLibrary::GetRotation(Z_Param_Out_CameraPose);
	P_NATIVE_END;
}
// End Class UBlueprintCameraPoseFunctionLibrary Function GetRotation

// Begin Class UBlueprintCameraPoseFunctionLibrary Function GetSensorAspectRatio
struct Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetSensorAspectRatio_Statics
{
	struct BlueprintCameraPoseFunctionLibrary_eventGetSensorAspectRatio_Parms
	{
		FBlueprintCameraPose CameraPose;
		double ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Gets the effective aspect ratio of the camera pose, computed from the sensor size. */" },
		{ "ModuleRelativePath", "Public/GameFramework/BlueprintCameraPose.h" },
		{ "ToolTip", "Gets the effective aspect ratio of the camera pose, computed from the sensor size." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraPose_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CameraPose;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetSensorAspectRatio_Statics::NewProp_CameraPose = { "CameraPose", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintCameraPoseFunctionLibrary_eventGetSensorAspectRatio_Parms, CameraPose), Z_Construct_UScriptStruct_FBlueprintCameraPose, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraPose_MetaData), NewProp_CameraPose_MetaData) }; // 3605729677
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetSensorAspectRatio_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintCameraPoseFunctionLibrary_eventGetSensorAspectRatio_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetSensorAspectRatio_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetSensorAspectRatio_Statics::NewProp_CameraPose,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetSensorAspectRatio_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetSensorAspectRatio_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetSensorAspectRatio_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintCameraPoseFunctionLibrary, nullptr, "GetSensorAspectRatio", nullptr, nullptr, Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetSensorAspectRatio_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetSensorAspectRatio_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetSensorAspectRatio_Statics::BlueprintCameraPoseFunctionLibrary_eventGetSensorAspectRatio_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetSensorAspectRatio_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetSensorAspectRatio_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetSensorAspectRatio_Statics::BlueprintCameraPoseFunctionLibrary_eventGetSensorAspectRatio_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetSensorAspectRatio()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetSensorAspectRatio_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBlueprintCameraPoseFunctionLibrary::execGetSensorAspectRatio)
{
	P_GET_STRUCT_REF(FBlueprintCameraPose,Z_Param_Out_CameraPose);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(double*)Z_Param__Result=UBlueprintCameraPoseFunctionLibrary::GetSensorAspectRatio(Z_Param_Out_CameraPose);
	P_NATIVE_END;
}
// End Class UBlueprintCameraPoseFunctionLibrary Function GetSensorAspectRatio

// Begin Class UBlueprintCameraPoseFunctionLibrary Function GetTarget
struct Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetTarget_Statics
{
	struct BlueprintCameraPoseFunctionLibrary_eventGetTarget_Parms
	{
		FBlueprintCameraPose CameraPose;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Gets the target of the camera pose. */" },
		{ "ModuleRelativePath", "Public/GameFramework/BlueprintCameraPose.h" },
		{ "ToolTip", "Gets the target of the camera pose." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraPose_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CameraPose;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetTarget_Statics::NewProp_CameraPose = { "CameraPose", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintCameraPoseFunctionLibrary_eventGetTarget_Parms, CameraPose), Z_Construct_UScriptStruct_FBlueprintCameraPose, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraPose_MetaData), NewProp_CameraPose_MetaData) }; // 3605729677
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintCameraPoseFunctionLibrary_eventGetTarget_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetTarget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetTarget_Statics::NewProp_CameraPose,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetTarget_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetTarget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintCameraPoseFunctionLibrary, nullptr, "GetTarget", nullptr, nullptr, Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetTarget_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetTarget_Statics::BlueprintCameraPoseFunctionLibrary_eventGetTarget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetTarget_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetTarget_Statics::BlueprintCameraPoseFunctionLibrary_eventGetTarget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetTarget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetTarget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBlueprintCameraPoseFunctionLibrary::execGetTarget)
{
	P_GET_STRUCT_REF(FBlueprintCameraPose,Z_Param_Out_CameraPose);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=UBlueprintCameraPoseFunctionLibrary::GetTarget(Z_Param_Out_CameraPose);
	P_NATIVE_END;
}
// End Class UBlueprintCameraPoseFunctionLibrary Function GetTarget

// Begin Class UBlueprintCameraPoseFunctionLibrary Function GetTargetAtDistance
struct Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetTargetAtDistance_Statics
{
	struct BlueprintCameraPoseFunctionLibrary_eventGetTargetAtDistance_Parms
	{
		FBlueprintCameraPose CameraPose;
		double TargetDistance;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Gets the target of the camera pose given a specific target distance. */" },
		{ "ModuleRelativePath", "Public/GameFramework/BlueprintCameraPose.h" },
		{ "ToolTip", "Gets the target of the camera pose given a specific target distance." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraPose_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CameraPose;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_TargetDistance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetTargetAtDistance_Statics::NewProp_CameraPose = { "CameraPose", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintCameraPoseFunctionLibrary_eventGetTargetAtDistance_Parms, CameraPose), Z_Construct_UScriptStruct_FBlueprintCameraPose, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraPose_MetaData), NewProp_CameraPose_MetaData) }; // 3605729677
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetTargetAtDistance_Statics::NewProp_TargetDistance = { "TargetDistance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintCameraPoseFunctionLibrary_eventGetTargetAtDistance_Parms, TargetDistance), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetTargetAtDistance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintCameraPoseFunctionLibrary_eventGetTargetAtDistance_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetTargetAtDistance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetTargetAtDistance_Statics::NewProp_CameraPose,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetTargetAtDistance_Statics::NewProp_TargetDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetTargetAtDistance_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetTargetAtDistance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetTargetAtDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintCameraPoseFunctionLibrary, nullptr, "GetTargetAtDistance", nullptr, nullptr, Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetTargetAtDistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetTargetAtDistance_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetTargetAtDistance_Statics::BlueprintCameraPoseFunctionLibrary_eventGetTargetAtDistance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetTargetAtDistance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetTargetAtDistance_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetTargetAtDistance_Statics::BlueprintCameraPoseFunctionLibrary_eventGetTargetAtDistance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetTargetAtDistance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetTargetAtDistance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBlueprintCameraPoseFunctionLibrary::execGetTargetAtDistance)
{
	P_GET_STRUCT_REF(FBlueprintCameraPose,Z_Param_Out_CameraPose);
	P_GET_PROPERTY(FDoubleProperty,Z_Param_TargetDistance);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=UBlueprintCameraPoseFunctionLibrary::GetTargetAtDistance(Z_Param_Out_CameraPose,Z_Param_TargetDistance);
	P_NATIVE_END;
}
// End Class UBlueprintCameraPoseFunctionLibrary Function GetTargetAtDistance

// Begin Class UBlueprintCameraPoseFunctionLibrary Function GetTargetDistance
struct Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetTargetDistance_Statics
{
	struct BlueprintCameraPoseFunctionLibrary_eventGetTargetDistance_Parms
	{
		FBlueprintCameraPose CameraPose;
		double ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Gets the target distance of the camera pose. */" },
		{ "ModuleRelativePath", "Public/GameFramework/BlueprintCameraPose.h" },
		{ "ToolTip", "Gets the target distance of the camera pose." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraPose_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CameraPose;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetTargetDistance_Statics::NewProp_CameraPose = { "CameraPose", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintCameraPoseFunctionLibrary_eventGetTargetDistance_Parms, CameraPose), Z_Construct_UScriptStruct_FBlueprintCameraPose, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraPose_MetaData), NewProp_CameraPose_MetaData) }; // 3605729677
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetTargetDistance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintCameraPoseFunctionLibrary_eventGetTargetDistance_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetTargetDistance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetTargetDistance_Statics::NewProp_CameraPose,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetTargetDistance_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetTargetDistance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetTargetDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintCameraPoseFunctionLibrary, nullptr, "GetTargetDistance", nullptr, nullptr, Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetTargetDistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetTargetDistance_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetTargetDistance_Statics::BlueprintCameraPoseFunctionLibrary_eventGetTargetDistance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetTargetDistance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetTargetDistance_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetTargetDistance_Statics::BlueprintCameraPoseFunctionLibrary_eventGetTargetDistance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetTargetDistance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetTargetDistance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBlueprintCameraPoseFunctionLibrary::execGetTargetDistance)
{
	P_GET_STRUCT_REF(FBlueprintCameraPose,Z_Param_Out_CameraPose);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(double*)Z_Param__Result=UBlueprintCameraPoseFunctionLibrary::GetTargetDistance(Z_Param_Out_CameraPose);
	P_NATIVE_END;
}
// End Class UBlueprintCameraPoseFunctionLibrary Function GetTargetDistance

// Begin Class UBlueprintCameraPoseFunctionLibrary Function GetTransform
struct Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetTransform_Statics
{
	struct BlueprintCameraPoseFunctionLibrary_eventGetTransform_Parms
	{
		FBlueprintCameraPose CameraPose;
		FTransform ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Gets the transform matrix of the camera pose. */" },
		{ "ModuleRelativePath", "Public/GameFramework/BlueprintCameraPose.h" },
		{ "ToolTip", "Gets the transform matrix of the camera pose." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraPose_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CameraPose;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetTransform_Statics::NewProp_CameraPose = { "CameraPose", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintCameraPoseFunctionLibrary_eventGetTransform_Parms, CameraPose), Z_Construct_UScriptStruct_FBlueprintCameraPose, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraPose_MetaData), NewProp_CameraPose_MetaData) }; // 3605729677
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintCameraPoseFunctionLibrary_eventGetTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetTransform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetTransform_Statics::NewProp_CameraPose,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetTransform_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetTransform_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintCameraPoseFunctionLibrary, nullptr, "GetTransform", nullptr, nullptr, Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetTransform_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetTransform_Statics::BlueprintCameraPoseFunctionLibrary_eventGetTransform_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetTransform_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetTransform_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetTransform_Statics::BlueprintCameraPoseFunctionLibrary_eventGetTransform_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetTransform()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetTransform_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBlueprintCameraPoseFunctionLibrary::execGetTransform)
{
	P_GET_STRUCT_REF(FBlueprintCameraPose,Z_Param_Out_CameraPose);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FTransform*)Z_Param__Result=UBlueprintCameraPoseFunctionLibrary::GetTransform(Z_Param_Out_CameraPose);
	P_NATIVE_END;
}
// End Class UBlueprintCameraPoseFunctionLibrary Function GetTransform

// Begin Class UBlueprintCameraPoseFunctionLibrary Function MakeCameraPoseFromCameraComponent
struct Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_MakeCameraPoseFromCameraComponent_Statics
{
	struct BlueprintCameraPoseFunctionLibrary_eventMakeCameraPoseFromCameraComponent_Parms
	{
		const UCameraComponent* CameraComponent;
		FBlueprintCameraPose ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Creates a new camera pose given a camera component. */" },
		{ "ModuleRelativePath", "Public/GameFramework/BlueprintCameraPose.h" },
		{ "ToolTip", "Creates a new camera pose given a camera component." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraComponent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_MakeCameraPoseFromCameraComponent_Statics::NewProp_CameraComponent = { "CameraComponent", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintCameraPoseFunctionLibrary_eventMakeCameraPoseFromCameraComponent_Parms, CameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraComponent_MetaData), NewProp_CameraComponent_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_MakeCameraPoseFromCameraComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintCameraPoseFunctionLibrary_eventMakeCameraPoseFromCameraComponent_Parms, ReturnValue), Z_Construct_UScriptStruct_FBlueprintCameraPose, METADATA_PARAMS(0, nullptr) }; // 3605729677
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_MakeCameraPoseFromCameraComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_MakeCameraPoseFromCameraComponent_Statics::NewProp_CameraComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_MakeCameraPoseFromCameraComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_MakeCameraPoseFromCameraComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_MakeCameraPoseFromCameraComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintCameraPoseFunctionLibrary, nullptr, "MakeCameraPoseFromCameraComponent", nullptr, nullptr, Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_MakeCameraPoseFromCameraComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_MakeCameraPoseFromCameraComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_MakeCameraPoseFromCameraComponent_Statics::BlueprintCameraPoseFunctionLibrary_eventMakeCameraPoseFromCameraComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_MakeCameraPoseFromCameraComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_MakeCameraPoseFromCameraComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_MakeCameraPoseFromCameraComponent_Statics::BlueprintCameraPoseFunctionLibrary_eventMakeCameraPoseFromCameraComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_MakeCameraPoseFromCameraComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_MakeCameraPoseFromCameraComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBlueprintCameraPoseFunctionLibrary::execMakeCameraPoseFromCameraComponent)
{
	P_GET_OBJECT(UCameraComponent,Z_Param_CameraComponent);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FBlueprintCameraPose*)Z_Param__Result=UBlueprintCameraPoseFunctionLibrary::MakeCameraPoseFromCameraComponent(Z_Param_CameraComponent);
	P_NATIVE_END;
}
// End Class UBlueprintCameraPoseFunctionLibrary Function MakeCameraPoseFromCameraComponent

// Begin Class UBlueprintCameraPoseFunctionLibrary Function MakeCameraPoseFromCineCameraComponent
struct Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_MakeCameraPoseFromCineCameraComponent_Statics
{
	struct BlueprintCameraPoseFunctionLibrary_eventMakeCameraPoseFromCineCameraComponent_Parms
	{
		const UCineCameraComponent* CameraComponent;
		FBlueprintCameraPose ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Creates a new camera pose given a cine-camera component. */" },
		{ "ModuleRelativePath", "Public/GameFramework/BlueprintCameraPose.h" },
		{ "ToolTip", "Creates a new camera pose given a cine-camera component." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraComponent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_MakeCameraPoseFromCineCameraComponent_Statics::NewProp_CameraComponent = { "CameraComponent", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintCameraPoseFunctionLibrary_eventMakeCameraPoseFromCineCameraComponent_Parms, CameraComponent), Z_Construct_UClass_UCineCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraComponent_MetaData), NewProp_CameraComponent_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_MakeCameraPoseFromCineCameraComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintCameraPoseFunctionLibrary_eventMakeCameraPoseFromCineCameraComponent_Parms, ReturnValue), Z_Construct_UScriptStruct_FBlueprintCameraPose, METADATA_PARAMS(0, nullptr) }; // 3605729677
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_MakeCameraPoseFromCineCameraComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_MakeCameraPoseFromCineCameraComponent_Statics::NewProp_CameraComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_MakeCameraPoseFromCineCameraComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_MakeCameraPoseFromCineCameraComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_MakeCameraPoseFromCineCameraComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintCameraPoseFunctionLibrary, nullptr, "MakeCameraPoseFromCineCameraComponent", nullptr, nullptr, Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_MakeCameraPoseFromCineCameraComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_MakeCameraPoseFromCineCameraComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_MakeCameraPoseFromCineCameraComponent_Statics::BlueprintCameraPoseFunctionLibrary_eventMakeCameraPoseFromCineCameraComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_MakeCameraPoseFromCineCameraComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_MakeCameraPoseFromCineCameraComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_MakeCameraPoseFromCineCameraComponent_Statics::BlueprintCameraPoseFunctionLibrary_eventMakeCameraPoseFromCineCameraComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_MakeCameraPoseFromCineCameraComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_MakeCameraPoseFromCineCameraComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBlueprintCameraPoseFunctionLibrary::execMakeCameraPoseFromCineCameraComponent)
{
	P_GET_OBJECT(UCineCameraComponent,Z_Param_CameraComponent);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FBlueprintCameraPose*)Z_Param__Result=UBlueprintCameraPoseFunctionLibrary::MakeCameraPoseFromCineCameraComponent(Z_Param_CameraComponent);
	P_NATIVE_END;
}
// End Class UBlueprintCameraPoseFunctionLibrary Function MakeCameraPoseFromCineCameraComponent

// Begin Class UBlueprintCameraPoseFunctionLibrary Function SetFieldOfView
struct Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_SetFieldOfView_Statics
{
	struct BlueprintCameraPoseFunctionLibrary_eventSetFieldOfView_Parms
	{
		FBlueprintCameraPose CameraPose;
		float FieldOfView;
		FBlueprintCameraPose ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Creates a copy of the given camera pose with the given field of view. */" },
		{ "ModuleRelativePath", "Public/GameFramework/BlueprintCameraPose.h" },
		{ "ToolTip", "Creates a copy of the given camera pose with the given field of view." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraPose_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CameraPose;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FieldOfView;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_SetFieldOfView_Statics::NewProp_CameraPose = { "CameraPose", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintCameraPoseFunctionLibrary_eventSetFieldOfView_Parms, CameraPose), Z_Construct_UScriptStruct_FBlueprintCameraPose, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraPose_MetaData), NewProp_CameraPose_MetaData) }; // 3605729677
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_SetFieldOfView_Statics::NewProp_FieldOfView = { "FieldOfView", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintCameraPoseFunctionLibrary_eventSetFieldOfView_Parms, FieldOfView), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_SetFieldOfView_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintCameraPoseFunctionLibrary_eventSetFieldOfView_Parms, ReturnValue), Z_Construct_UScriptStruct_FBlueprintCameraPose, METADATA_PARAMS(0, nullptr) }; // 3605729677
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_SetFieldOfView_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_SetFieldOfView_Statics::NewProp_CameraPose,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_SetFieldOfView_Statics::NewProp_FieldOfView,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_SetFieldOfView_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_SetFieldOfView_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_SetFieldOfView_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintCameraPoseFunctionLibrary, nullptr, "SetFieldOfView", nullptr, nullptr, Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_SetFieldOfView_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_SetFieldOfView_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_SetFieldOfView_Statics::BlueprintCameraPoseFunctionLibrary_eventSetFieldOfView_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_SetFieldOfView_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_SetFieldOfView_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_SetFieldOfView_Statics::BlueprintCameraPoseFunctionLibrary_eventSetFieldOfView_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_SetFieldOfView()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_SetFieldOfView_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBlueprintCameraPoseFunctionLibrary::execSetFieldOfView)
{
	P_GET_STRUCT_REF(FBlueprintCameraPose,Z_Param_Out_CameraPose);
	P_GET_PROPERTY(FFloatProperty,Z_Param_FieldOfView);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FBlueprintCameraPose*)Z_Param__Result=UBlueprintCameraPoseFunctionLibrary::SetFieldOfView(Z_Param_Out_CameraPose,Z_Param_FieldOfView);
	P_NATIVE_END;
}
// End Class UBlueprintCameraPoseFunctionLibrary Function SetFieldOfView

// Begin Class UBlueprintCameraPoseFunctionLibrary Function SetFocalLength
struct Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_SetFocalLength_Statics
{
	struct BlueprintCameraPoseFunctionLibrary_eventSetFocalLength_Parms
	{
		FBlueprintCameraPose CameraPose;
		float FocalLength;
		FBlueprintCameraPose ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Creates a copy of the given camera pose with the given focal length. */" },
		{ "ModuleRelativePath", "Public/GameFramework/BlueprintCameraPose.h" },
		{ "ToolTip", "Creates a copy of the given camera pose with the given focal length." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraPose_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CameraPose;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FocalLength;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_SetFocalLength_Statics::NewProp_CameraPose = { "CameraPose", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintCameraPoseFunctionLibrary_eventSetFocalLength_Parms, CameraPose), Z_Construct_UScriptStruct_FBlueprintCameraPose, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraPose_MetaData), NewProp_CameraPose_MetaData) }; // 3605729677
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_SetFocalLength_Statics::NewProp_FocalLength = { "FocalLength", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintCameraPoseFunctionLibrary_eventSetFocalLength_Parms, FocalLength), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_SetFocalLength_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintCameraPoseFunctionLibrary_eventSetFocalLength_Parms, ReturnValue), Z_Construct_UScriptStruct_FBlueprintCameraPose, METADATA_PARAMS(0, nullptr) }; // 3605729677
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_SetFocalLength_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_SetFocalLength_Statics::NewProp_CameraPose,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_SetFocalLength_Statics::NewProp_FocalLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_SetFocalLength_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_SetFocalLength_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_SetFocalLength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintCameraPoseFunctionLibrary, nullptr, "SetFocalLength", nullptr, nullptr, Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_SetFocalLength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_SetFocalLength_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_SetFocalLength_Statics::BlueprintCameraPoseFunctionLibrary_eventSetFocalLength_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_SetFocalLength_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_SetFocalLength_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_SetFocalLength_Statics::BlueprintCameraPoseFunctionLibrary_eventSetFocalLength_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_SetFocalLength()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_SetFocalLength_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBlueprintCameraPoseFunctionLibrary::execSetFocalLength)
{
	P_GET_STRUCT_REF(FBlueprintCameraPose,Z_Param_Out_CameraPose);
	P_GET_PROPERTY(FFloatProperty,Z_Param_FocalLength);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FBlueprintCameraPose*)Z_Param__Result=UBlueprintCameraPoseFunctionLibrary::SetFocalLength(Z_Param_Out_CameraPose,Z_Param_FocalLength);
	P_NATIVE_END;
}
// End Class UBlueprintCameraPoseFunctionLibrary Function SetFocalLength

// Begin Class UBlueprintCameraPoseFunctionLibrary Function SetLocation
struct Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_SetLocation_Statics
{
	struct BlueprintCameraPoseFunctionLibrary_eventSetLocation_Parms
	{
		FBlueprintCameraPose CameraPose;
		FVector Location;
		FBlueprintCameraPose ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Creates a copy of the given camera pose with the given location. */" },
		{ "ModuleRelativePath", "Public/GameFramework/BlueprintCameraPose.h" },
		{ "ToolTip", "Creates a copy of the given camera pose with the given location." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraPose_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CameraPose;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_SetLocation_Statics::NewProp_CameraPose = { "CameraPose", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintCameraPoseFunctionLibrary_eventSetLocation_Parms, CameraPose), Z_Construct_UScriptStruct_FBlueprintCameraPose, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraPose_MetaData), NewProp_CameraPose_MetaData) }; // 3605729677
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_SetLocation_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintCameraPoseFunctionLibrary_eventSetLocation_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Location_MetaData), NewProp_Location_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_SetLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintCameraPoseFunctionLibrary_eventSetLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FBlueprintCameraPose, METADATA_PARAMS(0, nullptr) }; // 3605729677
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_SetLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_SetLocation_Statics::NewProp_CameraPose,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_SetLocation_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_SetLocation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_SetLocation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_SetLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintCameraPoseFunctionLibrary, nullptr, "SetLocation", nullptr, nullptr, Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_SetLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_SetLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_SetLocation_Statics::BlueprintCameraPoseFunctionLibrary_eventSetLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_SetLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_SetLocation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_SetLocation_Statics::BlueprintCameraPoseFunctionLibrary_eventSetLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_SetLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_SetLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBlueprintCameraPoseFunctionLibrary::execSetLocation)
{
	P_GET_STRUCT_REF(FBlueprintCameraPose,Z_Param_Out_CameraPose);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Location);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FBlueprintCameraPose*)Z_Param__Result=UBlueprintCameraPoseFunctionLibrary::SetLocation(Z_Param_Out_CameraPose,Z_Param_Out_Location);
	P_NATIVE_END;
}
// End Class UBlueprintCameraPoseFunctionLibrary Function SetLocation

// Begin Class UBlueprintCameraPoseFunctionLibrary Function SetRotation
struct Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_SetRotation_Statics
{
	struct BlueprintCameraPoseFunctionLibrary_eventSetRotation_Parms
	{
		FBlueprintCameraPose CameraPose;
		FRotator Rotation;
		FBlueprintCameraPose ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Creates a copy of the given camera pose with the given rotation. */" },
		{ "ModuleRelativePath", "Public/GameFramework/BlueprintCameraPose.h" },
		{ "ToolTip", "Creates a copy of the given camera pose with the given rotation." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraPose_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CameraPose;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_SetRotation_Statics::NewProp_CameraPose = { "CameraPose", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintCameraPoseFunctionLibrary_eventSetRotation_Parms, CameraPose), Z_Construct_UScriptStruct_FBlueprintCameraPose, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraPose_MetaData), NewProp_CameraPose_MetaData) }; // 3605729677
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_SetRotation_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintCameraPoseFunctionLibrary_eventSetRotation_Parms, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rotation_MetaData), NewProp_Rotation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_SetRotation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintCameraPoseFunctionLibrary_eventSetRotation_Parms, ReturnValue), Z_Construct_UScriptStruct_FBlueprintCameraPose, METADATA_PARAMS(0, nullptr) }; // 3605729677
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_SetRotation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_SetRotation_Statics::NewProp_CameraPose,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_SetRotation_Statics::NewProp_Rotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_SetRotation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_SetRotation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_SetRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintCameraPoseFunctionLibrary, nullptr, "SetRotation", nullptr, nullptr, Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_SetRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_SetRotation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_SetRotation_Statics::BlueprintCameraPoseFunctionLibrary_eventSetRotation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_SetRotation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_SetRotation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_SetRotation_Statics::BlueprintCameraPoseFunctionLibrary_eventSetRotation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_SetRotation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_SetRotation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBlueprintCameraPoseFunctionLibrary::execSetRotation)
{
	P_GET_STRUCT_REF(FBlueprintCameraPose,Z_Param_Out_CameraPose);
	P_GET_STRUCT_REF(FRotator,Z_Param_Out_Rotation);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FBlueprintCameraPose*)Z_Param__Result=UBlueprintCameraPoseFunctionLibrary::SetRotation(Z_Param_Out_CameraPose,Z_Param_Out_Rotation);
	P_NATIVE_END;
}
// End Class UBlueprintCameraPoseFunctionLibrary Function SetRotation

// Begin Class UBlueprintCameraPoseFunctionLibrary Function SetTargetDistance
struct Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_SetTargetDistance_Statics
{
	struct BlueprintCameraPoseFunctionLibrary_eventSetTargetDistance_Parms
	{
		FBlueprintCameraPose CameraPose;
		double TargetDistance;
		FBlueprintCameraPose ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Creates a copy of the given camera pose with the given target distance. */" },
		{ "ModuleRelativePath", "Public/GameFramework/BlueprintCameraPose.h" },
		{ "ToolTip", "Creates a copy of the given camera pose with the given target distance." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraPose_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CameraPose;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_TargetDistance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_SetTargetDistance_Statics::NewProp_CameraPose = { "CameraPose", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintCameraPoseFunctionLibrary_eventSetTargetDistance_Parms, CameraPose), Z_Construct_UScriptStruct_FBlueprintCameraPose, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraPose_MetaData), NewProp_CameraPose_MetaData) }; // 3605729677
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_SetTargetDistance_Statics::NewProp_TargetDistance = { "TargetDistance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintCameraPoseFunctionLibrary_eventSetTargetDistance_Parms, TargetDistance), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_SetTargetDistance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintCameraPoseFunctionLibrary_eventSetTargetDistance_Parms, ReturnValue), Z_Construct_UScriptStruct_FBlueprintCameraPose, METADATA_PARAMS(0, nullptr) }; // 3605729677
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_SetTargetDistance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_SetTargetDistance_Statics::NewProp_CameraPose,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_SetTargetDistance_Statics::NewProp_TargetDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_SetTargetDistance_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_SetTargetDistance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_SetTargetDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintCameraPoseFunctionLibrary, nullptr, "SetTargetDistance", nullptr, nullptr, Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_SetTargetDistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_SetTargetDistance_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_SetTargetDistance_Statics::BlueprintCameraPoseFunctionLibrary_eventSetTargetDistance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_SetTargetDistance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_SetTargetDistance_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_SetTargetDistance_Statics::BlueprintCameraPoseFunctionLibrary_eventSetTargetDistance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_SetTargetDistance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_SetTargetDistance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBlueprintCameraPoseFunctionLibrary::execSetTargetDistance)
{
	P_GET_STRUCT_REF(FBlueprintCameraPose,Z_Param_Out_CameraPose);
	P_GET_PROPERTY(FDoubleProperty,Z_Param_TargetDistance);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FBlueprintCameraPose*)Z_Param__Result=UBlueprintCameraPoseFunctionLibrary::SetTargetDistance(Z_Param_Out_CameraPose,Z_Param_TargetDistance);
	P_NATIVE_END;
}
// End Class UBlueprintCameraPoseFunctionLibrary Function SetTargetDistance

// Begin Class UBlueprintCameraPoseFunctionLibrary Function SetTransform
struct Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_SetTransform_Statics
{
	struct BlueprintCameraPoseFunctionLibrary_eventSetTransform_Parms
	{
		FBlueprintCameraPose CameraPose;
		FTransform Transform;
		FBlueprintCameraPose ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Creates a copy of the given camera pose with the given location and rotation. */" },
		{ "ModuleRelativePath", "Public/GameFramework/BlueprintCameraPose.h" },
		{ "ToolTip", "Creates a copy of the given camera pose with the given location and rotation." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraPose_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CameraPose;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_SetTransform_Statics::NewProp_CameraPose = { "CameraPose", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintCameraPoseFunctionLibrary_eventSetTransform_Parms, CameraPose), Z_Construct_UScriptStruct_FBlueprintCameraPose, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraPose_MetaData), NewProp_CameraPose_MetaData) }; // 3605729677
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_SetTransform_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintCameraPoseFunctionLibrary_eventSetTransform_Parms, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Transform_MetaData), NewProp_Transform_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_SetTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintCameraPoseFunctionLibrary_eventSetTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FBlueprintCameraPose, METADATA_PARAMS(0, nullptr) }; // 3605729677
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_SetTransform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_SetTransform_Statics::NewProp_CameraPose,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_SetTransform_Statics::NewProp_Transform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_SetTransform_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_SetTransform_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_SetTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintCameraPoseFunctionLibrary, nullptr, "SetTransform", nullptr, nullptr, Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_SetTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_SetTransform_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_SetTransform_Statics::BlueprintCameraPoseFunctionLibrary_eventSetTransform_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_SetTransform_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_SetTransform_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_SetTransform_Statics::BlueprintCameraPoseFunctionLibrary_eventSetTransform_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_SetTransform()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_SetTransform_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBlueprintCameraPoseFunctionLibrary::execSetTransform)
{
	P_GET_STRUCT_REF(FBlueprintCameraPose,Z_Param_Out_CameraPose);
	P_GET_STRUCT_REF(FTransform,Z_Param_Out_Transform);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FBlueprintCameraPose*)Z_Param__Result=UBlueprintCameraPoseFunctionLibrary::SetTransform(Z_Param_Out_CameraPose,Z_Param_Out_Transform);
	P_NATIVE_END;
}
// End Class UBlueprintCameraPoseFunctionLibrary Function SetTransform

// Begin Class UBlueprintCameraPoseFunctionLibrary
void UBlueprintCameraPoseFunctionLibrary::StaticRegisterNativesUBlueprintCameraPoseFunctionLibrary()
{
	UClass* Class = UBlueprintCameraPoseFunctionLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetAimDir", &UBlueprintCameraPoseFunctionLibrary::execGetAimDir },
		{ "GetAimRay", &UBlueprintCameraPoseFunctionLibrary::execGetAimRay },
		{ "GetEffectiveFieldOfView", &UBlueprintCameraPoseFunctionLibrary::execGetEffectiveFieldOfView },
		{ "GetFieldOfView", &UBlueprintCameraPoseFunctionLibrary::execGetFieldOfView },
		{ "GetFocalLength", &UBlueprintCameraPoseFunctionLibrary::execGetFocalLength },
		{ "GetLocation", &UBlueprintCameraPoseFunctionLibrary::execGetLocation },
		{ "GetRotation", &UBlueprintCameraPoseFunctionLibrary::execGetRotation },
		{ "GetSensorAspectRatio", &UBlueprintCameraPoseFunctionLibrary::execGetSensorAspectRatio },
		{ "GetTarget", &UBlueprintCameraPoseFunctionLibrary::execGetTarget },
		{ "GetTargetAtDistance", &UBlueprintCameraPoseFunctionLibrary::execGetTargetAtDistance },
		{ "GetTargetDistance", &UBlueprintCameraPoseFunctionLibrary::execGetTargetDistance },
		{ "GetTransform", &UBlueprintCameraPoseFunctionLibrary::execGetTransform },
		{ "MakeCameraPoseFromCameraComponent", &UBlueprintCameraPoseFunctionLibrary::execMakeCameraPoseFromCameraComponent },
		{ "MakeCameraPoseFromCineCameraComponent", &UBlueprintCameraPoseFunctionLibrary::execMakeCameraPoseFromCineCameraComponent },
		{ "SetFieldOfView", &UBlueprintCameraPoseFunctionLibrary::execSetFieldOfView },
		{ "SetFocalLength", &UBlueprintCameraPoseFunctionLibrary::execSetFocalLength },
		{ "SetLocation", &UBlueprintCameraPoseFunctionLibrary::execSetLocation },
		{ "SetRotation", &UBlueprintCameraPoseFunctionLibrary::execSetRotation },
		{ "SetTargetDistance", &UBlueprintCameraPoseFunctionLibrary::execSetTargetDistance },
		{ "SetTransform", &UBlueprintCameraPoseFunctionLibrary::execSetTransform },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBlueprintCameraPoseFunctionLibrary);
UClass* Z_Construct_UClass_UBlueprintCameraPoseFunctionLibrary_NoRegister()
{
	return UBlueprintCameraPoseFunctionLibrary::StaticClass();
}
struct Z_Construct_UClass_UBlueprintCameraPoseFunctionLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Utility Blueprint functions for camera poses.\n */" },
		{ "IncludePath", "GameFramework/BlueprintCameraPose.h" },
		{ "ModuleRelativePath", "Public/GameFramework/BlueprintCameraPose.h" },
		{ "ToolTip", "Utility Blueprint functions for camera poses." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetAimDir, "GetAimDir" }, // 2536067365
		{ &Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetAimRay, "GetAimRay" }, // 4182885675
		{ &Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetEffectiveFieldOfView, "GetEffectiveFieldOfView" }, // 4055117249
		{ &Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetFieldOfView, "GetFieldOfView" }, // 1993175599
		{ &Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetFocalLength, "GetFocalLength" }, // 4001972722
		{ &Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetLocation, "GetLocation" }, // 4035145646
		{ &Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetRotation, "GetRotation" }, // 461071623
		{ &Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetSensorAspectRatio, "GetSensorAspectRatio" }, // 2815262614
		{ &Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetTarget, "GetTarget" }, // 3806491594
		{ &Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetTargetAtDistance, "GetTargetAtDistance" }, // 3675258107
		{ &Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetTargetDistance, "GetTargetDistance" }, // 755370424
		{ &Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetTransform, "GetTransform" }, // 2814746450
		{ &Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_MakeCameraPoseFromCameraComponent, "MakeCameraPoseFromCameraComponent" }, // 1228651823
		{ &Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_MakeCameraPoseFromCineCameraComponent, "MakeCameraPoseFromCineCameraComponent" }, // 2693934611
		{ &Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_SetFieldOfView, "SetFieldOfView" }, // 3866107987
		{ &Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_SetFocalLength, "SetFocalLength" }, // 3365848117
		{ &Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_SetLocation, "SetLocation" }, // 3573353167
		{ &Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_SetRotation, "SetRotation" }, // 1381004666
		{ &Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_SetTargetDistance, "SetTargetDistance" }, // 128707235
		{ &Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_SetTransform, "SetTransform" }, // 265576936
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlueprintCameraPoseFunctionLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBlueprintCameraPoseFunctionLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayCameras,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintCameraPoseFunctionLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBlueprintCameraPoseFunctionLibrary_Statics::ClassParams = {
	&UBlueprintCameraPoseFunctionLibrary::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintCameraPoseFunctionLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UBlueprintCameraPoseFunctionLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBlueprintCameraPoseFunctionLibrary()
{
	if (!Z_Registration_Info_UClass_UBlueprintCameraPoseFunctionLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBlueprintCameraPoseFunctionLibrary.OuterSingleton, Z_Construct_UClass_UBlueprintCameraPoseFunctionLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBlueprintCameraPoseFunctionLibrary.OuterSingleton;
}
template<> GAMEPLAYCAMERAS_API UClass* StaticClass<UBlueprintCameraPoseFunctionLibrary>()
{
	return UBlueprintCameraPoseFunctionLibrary::StaticClass();
}
UBlueprintCameraPoseFunctionLibrary::UBlueprintCameraPoseFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBlueprintCameraPoseFunctionLibrary);
UBlueprintCameraPoseFunctionLibrary::~UBlueprintCameraPoseFunctionLibrary() {}
// End Class UBlueprintCameraPoseFunctionLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_BlueprintCameraPose_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FBlueprintCameraPose::StaticStruct, Z_Construct_UScriptStruct_FBlueprintCameraPose_Statics::NewStructOps, TEXT("BlueprintCameraPose"), &Z_Registration_Info_UScriptStruct_BlueprintCameraPose, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBlueprintCameraPose), 3605729677U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBlueprintCameraPoseFunctionLibrary, UBlueprintCameraPoseFunctionLibrary::StaticClass, TEXT("UBlueprintCameraPoseFunctionLibrary"), &Z_Registration_Info_UClass_UBlueprintCameraPoseFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBlueprintCameraPoseFunctionLibrary), 1606186696U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_BlueprintCameraPose_h_533008996(TEXT("/Script/GameplayCameras"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_BlueprintCameraPose_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_BlueprintCameraPose_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_BlueprintCameraPose_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_BlueprintCameraPose_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
