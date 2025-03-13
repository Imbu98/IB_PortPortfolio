// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayCameras/Public/Core/CameraRigTransition.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCameraRigTransition() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntVector2();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UBlendCameraNode_NoRegister();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UCameraRigTransition();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UCameraRigTransition_NoRegister();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UCameraRigTransitionCondition();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UCameraRigTransitionCondition_NoRegister();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UObjectTreeGraphObject_NoRegister();
GAMEPLAYCAMERAS_API UEnum* Z_Construct_UEnum_GameplayCameras_ECameraRigInitialOrientation();
UPackage* Z_Construct_UPackage__Script_GameplayCameras();
// End Cross Module References

// Begin Class UCameraRigTransitionCondition
void UCameraRigTransitionCondition::StaticRegisterNativesUCameraRigTransitionCondition()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCameraRigTransitionCondition);
UClass* Z_Construct_UClass_UCameraRigTransitionCondition_NoRegister()
{
	return UCameraRigTransitionCondition::StaticClass();
}
struct Z_Construct_UClass_UCameraRigTransitionCondition_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base class for a camera transition condition.\n */" },
		{ "IncludePath", "Core/CameraRigTransition.h" },
		{ "ModuleRelativePath", "Public/Core/CameraRigTransition.h" },
		{ "ObjectTreeGraphCategory", "Transition Conditions" },
		{ "ObjectTreeGraphDefaultPropertyPinDirection", "Input" },
		{ "ObjectTreeGraphSelfPinDirection", "Output" },
		{ "ToolTip", "Base class for a camera transition condition." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GraphNodePos_MetaData[] = {
		{ "Comment", "/** Position of the transition condition node in the transition graph editor. */" },
		{ "ModuleRelativePath", "Public/Core/CameraRigTransition.h" },
		{ "ToolTip", "Position of the transition condition node in the transition graph editor." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GraphNodeComment_MetaData[] = {
		{ "Comment", "/** User-written comment in the transition graph editor. */" },
		{ "ModuleRelativePath", "Public/Core/CameraRigTransition.h" },
		{ "ToolTip", "User-written comment in the transition graph editor." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GraphNodePosX_MetaData[] = {
		{ "Comment", "// Deprecated properties.\n" },
		{ "ModuleRelativePath", "Public/Core/CameraRigTransition.h" },
		{ "ToolTip", "Deprecated properties." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GraphNodePosY_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/CameraRigTransition.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_GraphNodePos;
	static const UECodeGen_Private::FStrPropertyParams NewProp_GraphNodeComment;
	static const UECodeGen_Private::FIntPropertyParams NewProp_GraphNodePosX;
	static const UECodeGen_Private::FIntPropertyParams NewProp_GraphNodePosY;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCameraRigTransitionCondition>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCameraRigTransitionCondition_Statics::NewProp_GraphNodePos = { "GraphNodePos", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCameraRigTransitionCondition, GraphNodePos), Z_Construct_UScriptStruct_FIntVector2, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GraphNodePos_MetaData), NewProp_GraphNodePos_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCameraRigTransitionCondition_Statics::NewProp_GraphNodeComment = { "GraphNodeComment", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCameraRigTransitionCondition, GraphNodeComment), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GraphNodeComment_MetaData), NewProp_GraphNodeComment_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCameraRigTransitionCondition_Statics::NewProp_GraphNodePosX = { "GraphNodePosX", nullptr, (EPropertyFlags)0x0040000820000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCameraRigTransitionCondition, GraphNodePosX_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GraphNodePosX_MetaData), NewProp_GraphNodePosX_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCameraRigTransitionCondition_Statics::NewProp_GraphNodePosY = { "GraphNodePosY", nullptr, (EPropertyFlags)0x0040000820000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCameraRigTransitionCondition, GraphNodePosY_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GraphNodePosY_MetaData), NewProp_GraphNodePosY_MetaData) };
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCameraRigTransitionCondition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraRigTransitionCondition_Statics::NewProp_GraphNodePos,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraRigTransitionCondition_Statics::NewProp_GraphNodeComment,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraRigTransitionCondition_Statics::NewProp_GraphNodePosX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraRigTransitionCondition_Statics::NewProp_GraphNodePosY,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCameraRigTransitionCondition_Statics::PropPointers) < 2048);
#endif // WITH_EDITORONLY_DATA
UObject* (*const Z_Construct_UClass_UCameraRigTransitionCondition_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayCameras,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCameraRigTransitionCondition_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UCameraRigTransitionCondition_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UObjectTreeGraphObject_NoRegister, (int32)VTABLE_OFFSET(UCameraRigTransitionCondition, IObjectTreeGraphObject), false },  // 1612724473
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCameraRigTransitionCondition_Statics::ClassParams = {
	&UCameraRigTransitionCondition::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_UCameraRigTransitionCondition_Statics::PropPointers, nullptr),
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UClass_UCameraRigTransitionCondition_Statics::PropPointers), 0),
	UE_ARRAY_COUNT(InterfaceParams),
	0x002800A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCameraRigTransitionCondition_Statics::Class_MetaDataParams), Z_Construct_UClass_UCameraRigTransitionCondition_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCameraRigTransitionCondition()
{
	if (!Z_Registration_Info_UClass_UCameraRigTransitionCondition.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCameraRigTransitionCondition.OuterSingleton, Z_Construct_UClass_UCameraRigTransitionCondition_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCameraRigTransitionCondition.OuterSingleton;
}
template<> GAMEPLAYCAMERAS_API UClass* StaticClass<UCameraRigTransitionCondition>()
{
	return UCameraRigTransitionCondition::StaticClass();
}
UCameraRigTransitionCondition::UCameraRigTransitionCondition(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCameraRigTransitionCondition);
UCameraRigTransitionCondition::~UCameraRigTransitionCondition() {}
// End Class UCameraRigTransitionCondition

// Begin Enum ECameraRigInitialOrientation
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECameraRigInitialOrientation;
static UEnum* ECameraRigInitialOrientation_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ECameraRigInitialOrientation.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ECameraRigInitialOrientation.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GameplayCameras_ECameraRigInitialOrientation, (UObject*)Z_Construct_UPackage__Script_GameplayCameras(), TEXT("ECameraRigInitialOrientation"));
	}
	return Z_Registration_Info_UEnum_ECameraRigInitialOrientation.OuterSingleton;
}
template<> GAMEPLAYCAMERAS_API UEnum* StaticEnum<ECameraRigInitialOrientation>()
{
	return ECameraRigInitialOrientation_StaticEnum();
}
struct Z_Construct_UEnum_GameplayCameras_ECameraRigInitialOrientation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "/**\n * Determines how a camera rig's initial orientation should be initialized.\n */" },
		{ "ContextYawPitch.Comment", "/** Orient the camera rig in the same direction as its context's initial transform. */" },
		{ "ContextYawPitch.Name", "ECameraRigInitialOrientation::ContextYawPitch" },
		{ "ContextYawPitch.ToolTip", "Orient the camera rig in the same direction as its context's initial transform." },
		{ "ModuleRelativePath", "Public/Core/CameraRigTransition.h" },
		{ "None.Comment", "/** Leave the camera rig to its default orientation. */" },
		{ "None.Name", "ECameraRigInitialOrientation::None" },
		{ "None.ToolTip", "Leave the camera rig to its default orientation." },
		{ "PreviousAbsoluteTarget.Comment", "/** \n\x09 * Make the camera rig point at the same target as the previously active camera rig's \n\x09 * last frame target.\n\x09 */" },
		{ "PreviousAbsoluteTarget.Name", "ECameraRigInitialOrientation::PreviousAbsoluteTarget" },
		{ "PreviousAbsoluteTarget.ToolTip", "Make the camera rig point at the same target as the previously active camera rig's\nlast frame target." },
		{ "PreviousRelativeTarget.Comment", "/** \n\x09 * Make the camera rig point at the same target as the previously active camera rig. \n\x09 * Last frame's target will be moved and turned by an offset equal to how much the \n\x09 * active evaluation context has moved and turned since last frame.\n\x09 */" },
		{ "PreviousRelativeTarget.Name", "ECameraRigInitialOrientation::PreviousRelativeTarget" },
		{ "PreviousRelativeTarget.ToolTip", "Make the camera rig point at the same target as the previously active camera rig.\nLast frame's target will be moved and turned by an offset equal to how much the\nactive evaluation context has moved and turned since last frame." },
		{ "PreviousYawPitch.Comment", "/** Orient the camera rig in the same direction as the previously active camera rig. */" },
		{ "PreviousYawPitch.Name", "ECameraRigInitialOrientation::PreviousYawPitch" },
		{ "PreviousYawPitch.ToolTip", "Orient the camera rig in the same direction as the previously active camera rig." },
		{ "ToolTip", "Determines how a camera rig's initial orientation should be initialized." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ECameraRigInitialOrientation::None", (int64)ECameraRigInitialOrientation::None },
		{ "ECameraRigInitialOrientation::ContextYawPitch", (int64)ECameraRigInitialOrientation::ContextYawPitch },
		{ "ECameraRigInitialOrientation::PreviousYawPitch", (int64)ECameraRigInitialOrientation::PreviousYawPitch },
		{ "ECameraRigInitialOrientation::PreviousAbsoluteTarget", (int64)ECameraRigInitialOrientation::PreviousAbsoluteTarget },
		{ "ECameraRigInitialOrientation::PreviousRelativeTarget", (int64)ECameraRigInitialOrientation::PreviousRelativeTarget },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GameplayCameras_ECameraRigInitialOrientation_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_GameplayCameras,
	nullptr,
	"ECameraRigInitialOrientation",
	"ECameraRigInitialOrientation",
	Z_Construct_UEnum_GameplayCameras_ECameraRigInitialOrientation_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayCameras_ECameraRigInitialOrientation_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayCameras_ECameraRigInitialOrientation_Statics::Enum_MetaDataParams), Z_Construct_UEnum_GameplayCameras_ECameraRigInitialOrientation_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_GameplayCameras_ECameraRigInitialOrientation()
{
	if (!Z_Registration_Info_UEnum_ECameraRigInitialOrientation.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECameraRigInitialOrientation.InnerSingleton, Z_Construct_UEnum_GameplayCameras_ECameraRigInitialOrientation_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ECameraRigInitialOrientation.InnerSingleton;
}
// End Enum ECameraRigInitialOrientation

// Begin Class UCameraRigTransition
void UCameraRigTransition::StaticRegisterNativesUCameraRigTransition()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCameraRigTransition);
UClass* Z_Construct_UClass_UCameraRigTransition_NoRegister()
{
	return UCameraRigTransition::StaticClass();
}
struct Z_Construct_UClass_UCameraRigTransition_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A camera transition.\n */" },
		{ "IncludePath", "Core/CameraRigTransition.h" },
		{ "ModuleRelativePath", "Public/Core/CameraRigTransition.h" },
		{ "ToolTip", "A camera transition." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Conditions_Inner_MetaData[] = {
		{ "Comment", "/** The list of conditions that must pass for this transition to be used. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Core/CameraRigTransition.h" },
		{ "ObjectTreeGraphPinDirection", "Input" },
		{ "ToolTip", "The list of conditions that must pass for this transition to be used." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Conditions_MetaData[] = {
		{ "Comment", "/** The list of conditions that must pass for this transition to be used. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Core/CameraRigTransition.h" },
		{ "ObjectTreeGraphPinDirection", "Input" },
		{ "ToolTip", "The list of conditions that must pass for this transition to be used." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Blend_MetaData[] = {
		{ "Comment", "/** The blend to use to blend a given camera rig in or out. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Core/CameraRigTransition.h" },
		{ "ToolTip", "The blend to use to blend a given camera rig in or out." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitialOrientation_MetaData[] = {
		{ "Category", "Transition" },
		{ "Comment", "/** The orientation to set on the camera rig. */" },
		{ "EditCondition", "bOverrideInitialOrientation" },
		{ "ModuleRelativePath", "Public/Core/CameraRigTransition.h" },
		{ "ToolTip", "The orientation to set on the camera rig." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideInitialOrientation_MetaData[] = {
		{ "Category", "Transition" },
		{ "Comment", "/** Whether to override the default orientation to set on the camera rig. */" },
		{ "ModuleRelativePath", "Public/Core/CameraRigTransition.h" },
		{ "ToolTip", "Whether to override the default orientation to set on the camera rig." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllowCameraRigMerging_MetaData[] = {
		{ "Category", "Advanced" },
		{ "Comment", "/**\n\x09 * Whether this transition allows merging two similar camera rigs together.\n\x09 * Similar camera rigs run the same underlying camera rig prefab with different parameter\n\x09 * overrides. When merged, instead of pushing a new camera rig instance on the blend stack,\n\x09 * only the parameter overrides are kept. These parameter overrides are blended together\n\x09 * and the underlying camera rig prefab is run only once.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Core/CameraRigTransition.h" },
		{ "ToolTip", "Whether this transition allows merging two similar camera rigs together.\nSimilar camera rigs run the same underlying camera rig prefab with different parameter\noverrides. When merged, instead of pushing a new camera rig instance on the blend stack,\nonly the parameter overrides are kept. These parameter overrides are blended together\nand the underlying camera rig prefab is run only once." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GraphNodePos_MetaData[] = {
		{ "Comment", "/** Position of the transition node in the transition graph editor. */" },
		{ "ModuleRelativePath", "Public/Core/CameraRigTransition.h" },
		{ "ToolTip", "Position of the transition node in the transition graph editor." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GraphNodeComment_MetaData[] = {
		{ "Comment", "/** User-written comment in the transition graph editor. */" },
		{ "ModuleRelativePath", "Public/Core/CameraRigTransition.h" },
		{ "ToolTip", "User-written comment in the transition graph editor." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GraphNodePosX_MetaData[] = {
		{ "Comment", "// Deprecated properties.\n" },
		{ "ModuleRelativePath", "Public/Core/CameraRigTransition.h" },
		{ "ToolTip", "Deprecated properties." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GraphNodePosY_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/CameraRigTransition.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Conditions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Conditions;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Blend;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InitialOrientation_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InitialOrientation;
	static void NewProp_bOverrideInitialOrientation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideInitialOrientation;
	static void NewProp_bAllowCameraRigMerging_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowCameraRigMerging;
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
		TCppClassTypeTraits<UCameraRigTransition>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCameraRigTransition_Statics::NewProp_Conditions_Inner = { "Conditions", nullptr, (EPropertyFlags)0x0106000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UCameraRigTransitionCondition_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Conditions_Inner_MetaData), NewProp_Conditions_Inner_MetaData) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCameraRigTransition_Statics::NewProp_Conditions = { "Conditions", nullptr, (EPropertyFlags)0x0114008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCameraRigTransition, Conditions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Conditions_MetaData), NewProp_Conditions_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCameraRigTransition_Statics::NewProp_Blend = { "Blend", nullptr, (EPropertyFlags)0x0116000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCameraRigTransition, Blend), Z_Construct_UClass_UBlendCameraNode_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Blend_MetaData), NewProp_Blend_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCameraRigTransition_Statics::NewProp_InitialOrientation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCameraRigTransition_Statics::NewProp_InitialOrientation = { "InitialOrientation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCameraRigTransition, InitialOrientation), Z_Construct_UEnum_GameplayCameras_ECameraRigInitialOrientation, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitialOrientation_MetaData), NewProp_InitialOrientation_MetaData) }; // 1354934049
void Z_Construct_UClass_UCameraRigTransition_Statics::NewProp_bOverrideInitialOrientation_SetBit(void* Obj)
{
	((UCameraRigTransition*)Obj)->bOverrideInitialOrientation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCameraRigTransition_Statics::NewProp_bOverrideInitialOrientation = { "bOverrideInitialOrientation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCameraRigTransition), &Z_Construct_UClass_UCameraRigTransition_Statics::NewProp_bOverrideInitialOrientation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideInitialOrientation_MetaData), NewProp_bOverrideInitialOrientation_MetaData) };
void Z_Construct_UClass_UCameraRigTransition_Statics::NewProp_bAllowCameraRigMerging_SetBit(void* Obj)
{
	((UCameraRigTransition*)Obj)->bAllowCameraRigMerging = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCameraRigTransition_Statics::NewProp_bAllowCameraRigMerging = { "bAllowCameraRigMerging", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCameraRigTransition), &Z_Construct_UClass_UCameraRigTransition_Statics::NewProp_bAllowCameraRigMerging_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllowCameraRigMerging_MetaData), NewProp_bAllowCameraRigMerging_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCameraRigTransition_Statics::NewProp_GraphNodePos = { "GraphNodePos", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCameraRigTransition, GraphNodePos), Z_Construct_UScriptStruct_FIntVector2, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GraphNodePos_MetaData), NewProp_GraphNodePos_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCameraRigTransition_Statics::NewProp_GraphNodeComment = { "GraphNodeComment", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCameraRigTransition, GraphNodeComment), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GraphNodeComment_MetaData), NewProp_GraphNodeComment_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCameraRigTransition_Statics::NewProp_GraphNodePosX = { "GraphNodePosX", nullptr, (EPropertyFlags)0x0040000820000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCameraRigTransition, GraphNodePosX_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GraphNodePosX_MetaData), NewProp_GraphNodePosX_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCameraRigTransition_Statics::NewProp_GraphNodePosY = { "GraphNodePosY", nullptr, (EPropertyFlags)0x0040000820000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCameraRigTransition, GraphNodePosY_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GraphNodePosY_MetaData), NewProp_GraphNodePosY_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCameraRigTransition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraRigTransition_Statics::NewProp_Conditions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraRigTransition_Statics::NewProp_Conditions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraRigTransition_Statics::NewProp_Blend,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraRigTransition_Statics::NewProp_InitialOrientation_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraRigTransition_Statics::NewProp_InitialOrientation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraRigTransition_Statics::NewProp_bOverrideInitialOrientation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraRigTransition_Statics::NewProp_bAllowCameraRigMerging,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraRigTransition_Statics::NewProp_GraphNodePos,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraRigTransition_Statics::NewProp_GraphNodeComment,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraRigTransition_Statics::NewProp_GraphNodePosX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraRigTransition_Statics::NewProp_GraphNodePosY,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCameraRigTransition_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCameraRigTransition_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayCameras,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCameraRigTransition_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UCameraRigTransition_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UObjectTreeGraphObject_NoRegister, (int32)VTABLE_OFFSET(UCameraRigTransition, IObjectTreeGraphObject), false },  // 1612724473
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCameraRigTransition_Statics::ClassParams = {
	&UCameraRigTransition::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCameraRigTransition_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCameraRigTransition_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x008800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCameraRigTransition_Statics::Class_MetaDataParams), Z_Construct_UClass_UCameraRigTransition_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCameraRigTransition()
{
	if (!Z_Registration_Info_UClass_UCameraRigTransition.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCameraRigTransition.OuterSingleton, Z_Construct_UClass_UCameraRigTransition_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCameraRigTransition.OuterSingleton;
}
template<> GAMEPLAYCAMERAS_API UClass* StaticClass<UCameraRigTransition>()
{
	return UCameraRigTransition::StaticClass();
}
UCameraRigTransition::UCameraRigTransition(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCameraRigTransition);
UCameraRigTransition::~UCameraRigTransition() {}
// End Class UCameraRigTransition

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraRigTransition_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ECameraRigInitialOrientation_StaticEnum, TEXT("ECameraRigInitialOrientation"), &Z_Registration_Info_UEnum_ECameraRigInitialOrientation, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1354934049U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCameraRigTransitionCondition, UCameraRigTransitionCondition::StaticClass, TEXT("UCameraRigTransitionCondition"), &Z_Registration_Info_UClass_UCameraRigTransitionCondition, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCameraRigTransitionCondition), 3075135701U) },
		{ Z_Construct_UClass_UCameraRigTransition, UCameraRigTransition::StaticClass, TEXT("UCameraRigTransition"), &Z_Registration_Info_UClass_UCameraRigTransition, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCameraRigTransition), 2201836561U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraRigTransition_h_2709991719(TEXT("/Script/GameplayCameras"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraRigTransition_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraRigTransition_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraRigTransition_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraRigTransition_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
