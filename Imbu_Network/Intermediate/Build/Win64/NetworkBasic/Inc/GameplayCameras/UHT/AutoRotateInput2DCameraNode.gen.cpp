// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayCameras/Public/Nodes/Input/AutoRotateInput2DCameraNode.h"
#include "GameplayCameras/Public/Core/CameraParameters.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAutoRotateInput2DCameraNode() {}

// Begin Cross Module References
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UAutoRotateInput2DCameraNode();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UAutoRotateInput2DCameraNode_NoRegister();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UCameraValueInterpolator_NoRegister();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UInput2DCameraNode();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UInput2DCameraNode_NoRegister();
GAMEPLAYCAMERAS_API UEnum* Z_Construct_UEnum_GameplayCameras_ECameraAutoRotateDirection();
GAMEPLAYCAMERAS_API UScriptStruct* Z_Construct_UScriptStruct_FBooleanCameraParameter();
GAMEPLAYCAMERAS_API UScriptStruct* Z_Construct_UScriptStruct_FFloatCameraParameter();
UPackage* Z_Construct_UPackage__Script_GameplayCameras();
// End Cross Module References

// Begin Enum ECameraAutoRotateDirection
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECameraAutoRotateDirection;
static UEnum* ECameraAutoRotateDirection_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ECameraAutoRotateDirection.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ECameraAutoRotateDirection.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GameplayCameras_ECameraAutoRotateDirection, (UObject*)Z_Construct_UPackage__Script_GameplayCameras(), TEXT("ECameraAutoRotateDirection"));
	}
	return Z_Registration_Info_UEnum_ECameraAutoRotateDirection.OuterSingleton;
}
template<> GAMEPLAYCAMERAS_API UEnum* StaticEnum<ECameraAutoRotateDirection>()
{
	return ECameraAutoRotateDirection_StaticEnum();
}
struct Z_Construct_UEnum_GameplayCameras_ECameraAutoRotateDirection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "/** Describes the type of auto-rotate. */" },
		{ "Facing.Comment", "/** Re-align towards the evaluation context's facing. */" },
		{ "Facing.Name", "ECameraAutoRotateDirection::Facing" },
		{ "Facing.ToolTip", "Re-align towards the evaluation context's facing." },
		{ "ModuleRelativePath", "Public/Nodes/Input/AutoRotateInput2DCameraNode.h" },
		{ "Movement.Comment", "/** Re-align towards the evaluation context's movement direction. */" },
		{ "Movement.Name", "ECameraAutoRotateDirection::Movement" },
		{ "Movement.ToolTip", "Re-align towards the evaluation context's movement direction." },
		{ "ToolTip", "Describes the type of auto-rotate." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ECameraAutoRotateDirection::Facing", (int64)ECameraAutoRotateDirection::Facing },
		{ "ECameraAutoRotateDirection::Movement", (int64)ECameraAutoRotateDirection::Movement },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GameplayCameras_ECameraAutoRotateDirection_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_GameplayCameras,
	nullptr,
	"ECameraAutoRotateDirection",
	"ECameraAutoRotateDirection",
	Z_Construct_UEnum_GameplayCameras_ECameraAutoRotateDirection_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayCameras_ECameraAutoRotateDirection_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayCameras_ECameraAutoRotateDirection_Statics::Enum_MetaDataParams), Z_Construct_UEnum_GameplayCameras_ECameraAutoRotateDirection_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_GameplayCameras_ECameraAutoRotateDirection()
{
	if (!Z_Registration_Info_UEnum_ECameraAutoRotateDirection.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECameraAutoRotateDirection.InnerSingleton, Z_Construct_UEnum_GameplayCameras_ECameraAutoRotateDirection_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ECameraAutoRotateDirection.InnerSingleton;
}
// End Enum ECameraAutoRotateDirection

// Begin Class UAutoRotateInput2DCameraNode
void UAutoRotateInput2DCameraNode::StaticRegisterNativesUAutoRotateInput2DCameraNode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAutoRotateInput2DCameraNode);
UClass* Z_Construct_UClass_UAutoRotateInput2DCameraNode_NoRegister()
{
	return UAutoRotateInput2DCameraNode::StaticClass();
}
struct Z_Construct_UClass_UAutoRotateInput2DCameraNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "CameraNodeCategories", "Input" },
		{ "Comment", "/**\n * An input node that modifies a yaw/pitch input in order to re-align its\n * values to a given default direction.\n */" },
		{ "IncludePath", "Nodes/Input/AutoRotateInput2DCameraNode.h" },
		{ "ModuleRelativePath", "Public/Nodes/Input/AutoRotateInput2DCameraNode.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "An input node that modifies a yaw/pitch input in order to re-align its\nvalues to a given default direction." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[] = {
		{ "Category", "Auto-Rotate" },
		{ "Comment", "/** The direction to re-align towards. */" },
		{ "ModuleRelativePath", "Public/Nodes/Input/AutoRotateInput2DCameraNode.h" },
		{ "ToolTip", "The direction to re-align towards." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WaitTime_MetaData[] = {
		{ "Category", "Auto-Rotate" },
		{ "Comment", "/** The time, in seconds, to wait before re-aligning. */" },
		{ "ModuleRelativePath", "Public/Nodes/Input/AutoRotateInput2DCameraNode.h" },
		{ "ToolTip", "The time, in seconds, to wait before re-aligning." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeactivationThreshold_MetaData[] = {
		{ "Category", "Auto-Rotate" },
		{ "Comment", "/** The minimum player-induced/manual rotation, in degrees, to deactivate auto-rotation. */" },
		{ "ModuleRelativePath", "Public/Nodes/Input/AutoRotateInput2DCameraNode.h" },
		{ "ToolTip", "The minimum player-induced/manual rotation, in degrees, to deactivate auto-rotation." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Interpolator_MetaData[] = {
		{ "Category", "Auto-Rotate" },
		{ "Comment", "/** The interpolation for re-alignment. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Nodes/Input/AutoRotateInput2DCameraNode.h" },
		{ "ToolTip", "The interpolation for re-alignment." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FreezeControlRotation_MetaData[] = {
		{ "Category", "Auto-Rotate" },
		{ "Comment", "/** Whether to suggest freezing the input control rotation. */" },
		{ "ModuleRelativePath", "Public/Nodes/Input/AutoRotateInput2DCameraNode.h" },
		{ "ToolTip", "Whether to suggest freezing the input control rotation." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnableAutoRotate_MetaData[] = {
		{ "Category", "Auto-Rotate Toggle" },
		{ "Comment", "/** Whether to enable auto-rotation. */" },
		{ "ModuleRelativePath", "Public/Nodes/Input/AutoRotateInput2DCameraNode.h" },
		{ "ToolTip", "Whether to enable auto-rotation." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AutoRotateYaw_MetaData[] = {
		{ "Category", "Auto-Rotate Toggle" },
		{ "Comment", "/** Whether to auto-rotate yaw. */" },
		{ "ModuleRelativePath", "Public/Nodes/Input/AutoRotateInput2DCameraNode.h" },
		{ "ToolTip", "Whether to auto-rotate yaw." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AutoRotatePitch_MetaData[] = {
		{ "Category", "Auto-Rotate Toggle" },
		{ "Comment", "/** Whether to auto-rotate pitch. */" },
		{ "ModuleRelativePath", "Public/Nodes/Input/AutoRotateInput2DCameraNode.h" },
		{ "ToolTip", "Whether to auto-rotate pitch." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputNode_MetaData[] = {
		{ "Comment", "/** The underlying input node. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Nodes/Input/AutoRotateInput2DCameraNode.h" },
		{ "ToolTip", "The underlying input node." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Direction_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Direction;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WaitTime;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DeactivationThreshold;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Interpolator;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FreezeControlRotation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EnableAutoRotate;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AutoRotateYaw;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AutoRotatePitch;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputNode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAutoRotateInput2DCameraNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAutoRotateInput2DCameraNode_Statics::NewProp_Direction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAutoRotateInput2DCameraNode_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAutoRotateInput2DCameraNode, Direction), Z_Construct_UEnum_GameplayCameras_ECameraAutoRotateDirection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Direction_MetaData), NewProp_Direction_MetaData) }; // 990877215
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAutoRotateInput2DCameraNode_Statics::NewProp_WaitTime = { "WaitTime", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAutoRotateInput2DCameraNode, WaitTime), Z_Construct_UScriptStruct_FFloatCameraParameter, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WaitTime_MetaData), NewProp_WaitTime_MetaData) }; // 834407157
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAutoRotateInput2DCameraNode_Statics::NewProp_DeactivationThreshold = { "DeactivationThreshold", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAutoRotateInput2DCameraNode, DeactivationThreshold), Z_Construct_UScriptStruct_FFloatCameraParameter, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeactivationThreshold_MetaData), NewProp_DeactivationThreshold_MetaData) }; // 834407157
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAutoRotateInput2DCameraNode_Statics::NewProp_Interpolator = { "Interpolator", nullptr, (EPropertyFlags)0x0114000000080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAutoRotateInput2DCameraNode, Interpolator), Z_Construct_UClass_UCameraValueInterpolator_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Interpolator_MetaData), NewProp_Interpolator_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAutoRotateInput2DCameraNode_Statics::NewProp_FreezeControlRotation = { "FreezeControlRotation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAutoRotateInput2DCameraNode, FreezeControlRotation), Z_Construct_UScriptStruct_FBooleanCameraParameter, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FreezeControlRotation_MetaData), NewProp_FreezeControlRotation_MetaData) }; // 2798599862
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAutoRotateInput2DCameraNode_Statics::NewProp_EnableAutoRotate = { "EnableAutoRotate", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAutoRotateInput2DCameraNode, EnableAutoRotate), Z_Construct_UScriptStruct_FBooleanCameraParameter, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnableAutoRotate_MetaData), NewProp_EnableAutoRotate_MetaData) }; // 2798599862
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAutoRotateInput2DCameraNode_Statics::NewProp_AutoRotateYaw = { "AutoRotateYaw", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAutoRotateInput2DCameraNode, AutoRotateYaw), Z_Construct_UScriptStruct_FBooleanCameraParameter, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AutoRotateYaw_MetaData), NewProp_AutoRotateYaw_MetaData) }; // 2798599862
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAutoRotateInput2DCameraNode_Statics::NewProp_AutoRotatePitch = { "AutoRotatePitch", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAutoRotateInput2DCameraNode, AutoRotatePitch), Z_Construct_UScriptStruct_FBooleanCameraParameter, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AutoRotatePitch_MetaData), NewProp_AutoRotatePitch_MetaData) }; // 2798599862
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAutoRotateInput2DCameraNode_Statics::NewProp_InputNode = { "InputNode", nullptr, (EPropertyFlags)0x0114000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAutoRotateInput2DCameraNode, InputNode), Z_Construct_UClass_UInput2DCameraNode_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputNode_MetaData), NewProp_InputNode_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAutoRotateInput2DCameraNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoRotateInput2DCameraNode_Statics::NewProp_Direction_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoRotateInput2DCameraNode_Statics::NewProp_Direction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoRotateInput2DCameraNode_Statics::NewProp_WaitTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoRotateInput2DCameraNode_Statics::NewProp_DeactivationThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoRotateInput2DCameraNode_Statics::NewProp_Interpolator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoRotateInput2DCameraNode_Statics::NewProp_FreezeControlRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoRotateInput2DCameraNode_Statics::NewProp_EnableAutoRotate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoRotateInput2DCameraNode_Statics::NewProp_AutoRotateYaw,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoRotateInput2DCameraNode_Statics::NewProp_AutoRotatePitch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoRotateInput2DCameraNode_Statics::NewProp_InputNode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAutoRotateInput2DCameraNode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAutoRotateInput2DCameraNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInput2DCameraNode,
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayCameras,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAutoRotateInput2DCameraNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAutoRotateInput2DCameraNode_Statics::ClassParams = {
	&UAutoRotateInput2DCameraNode::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAutoRotateInput2DCameraNode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAutoRotateInput2DCameraNode_Statics::PropPointers),
	0,
	0x00A810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAutoRotateInput2DCameraNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UAutoRotateInput2DCameraNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAutoRotateInput2DCameraNode()
{
	if (!Z_Registration_Info_UClass_UAutoRotateInput2DCameraNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAutoRotateInput2DCameraNode.OuterSingleton, Z_Construct_UClass_UAutoRotateInput2DCameraNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAutoRotateInput2DCameraNode.OuterSingleton;
}
template<> GAMEPLAYCAMERAS_API UClass* StaticClass<UAutoRotateInput2DCameraNode>()
{
	return UAutoRotateInput2DCameraNode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAutoRotateInput2DCameraNode);
UAutoRotateInput2DCameraNode::~UAutoRotateInput2DCameraNode() {}
// End Class UAutoRotateInput2DCameraNode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Input_AutoRotateInput2DCameraNode_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ECameraAutoRotateDirection_StaticEnum, TEXT("ECameraAutoRotateDirection"), &Z_Registration_Info_UEnum_ECameraAutoRotateDirection, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 990877215U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAutoRotateInput2DCameraNode, UAutoRotateInput2DCameraNode::StaticClass, TEXT("UAutoRotateInput2DCameraNode"), &Z_Registration_Info_UClass_UAutoRotateInput2DCameraNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAutoRotateInput2DCameraNode), 188637796U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Input_AutoRotateInput2DCameraNode_h_2179430441(TEXT("/Script/GameplayCameras"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Input_AutoRotateInput2DCameraNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Input_AutoRotateInput2DCameraNode_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Input_AutoRotateInput2DCameraNode_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Input_AutoRotateInput2DCameraNode_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
