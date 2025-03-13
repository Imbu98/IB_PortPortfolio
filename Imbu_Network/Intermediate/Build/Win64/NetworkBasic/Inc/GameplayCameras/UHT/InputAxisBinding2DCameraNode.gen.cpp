// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayCameras/Public/Nodes/Input/InputAxisBinding2DCameraNode.h"
#include "GameplayCameras/Public/Core/CameraParameters.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInputAxisBinding2DCameraNode() {}

// Begin Cross Module References
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UCameraRigInput2DSlot();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UInputAxisBinding2DCameraNode();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UInputAxisBinding2DCameraNode_NoRegister();
GAMEPLAYCAMERAS_API UScriptStruct* Z_Construct_UScriptStruct_FBooleanCameraParameter();
GAMEPLAYCAMERAS_API UScriptStruct* Z_Construct_UScriptStruct_FVector2dCameraParameter();
UPackage* Z_Construct_UPackage__Script_GameplayCameras();
// End Cross Module References

// Begin Class UInputAxisBinding2DCameraNode
void UInputAxisBinding2DCameraNode::StaticRegisterNativesUInputAxisBinding2DCameraNode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInputAxisBinding2DCameraNode);
UClass* Z_Construct_UClass_UInputAxisBinding2DCameraNode_NoRegister()
{
	return UInputAxisBinding2DCameraNode::StaticClass();
}
struct Z_Construct_UClass_UInputAxisBinding2DCameraNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "CameraNodeCategories", "Input" },
		{ "Comment", "/**\n * An input node that reads player input from an input action.\n */" },
		{ "IncludePath", "Nodes/Input/InputAxisBinding2DCameraNode.h" },
		{ "ModuleRelativePath", "Public/Nodes/Input/InputAxisBinding2DCameraNode.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "An input node that reads player input from an input action." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AxisActions_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/** The axis input action(s) to read from. */" },
		{ "ModuleRelativePath", "Public/Nodes/Input/InputAxisBinding2DCameraNode.h" },
		{ "ToolTip", "The axis input action(s) to read from." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RevertAxisX_MetaData[] = {
		{ "Category", "Input Processing" },
		{ "Comment", "/** Whether to revert the X axis. */" },
		{ "ModuleRelativePath", "Public/Nodes/Input/InputAxisBinding2DCameraNode.h" },
		{ "ToolTip", "Whether to revert the X axis." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RevertAxisY_MetaData[] = {
		{ "Category", "Input Processing" },
		{ "Comment", "/** Whether to revert the Y axis. */" },
		{ "ModuleRelativePath", "Public/Nodes/Input/InputAxisBinding2DCameraNode.h" },
		{ "ToolTip", "Whether to revert the Y axis." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Multiplier_MetaData[] = {
		{ "Category", "Input Processing" },
		{ "Comment", "/** A multiplier to use on the input values. */" },
		{ "ModuleRelativePath", "Public/Nodes/Input/InputAxisBinding2DCameraNode.h" },
		{ "ToolTip", "A multiplier to use on the input values." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AxisActions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AxisActions;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RevertAxisX;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RevertAxisY;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Multiplier;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInputAxisBinding2DCameraNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInputAxisBinding2DCameraNode_Statics::NewProp_AxisActions_Inner = { "AxisActions", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInputAxisBinding2DCameraNode_Statics::NewProp_AxisActions = { "AxisActions", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputAxisBinding2DCameraNode, AxisActions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AxisActions_MetaData), NewProp_AxisActions_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInputAxisBinding2DCameraNode_Statics::NewProp_RevertAxisX = { "RevertAxisX", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputAxisBinding2DCameraNode, RevertAxisX), Z_Construct_UScriptStruct_FBooleanCameraParameter, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RevertAxisX_MetaData), NewProp_RevertAxisX_MetaData) }; // 2798599862
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInputAxisBinding2DCameraNode_Statics::NewProp_RevertAxisY = { "RevertAxisY", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputAxisBinding2DCameraNode, RevertAxisY), Z_Construct_UScriptStruct_FBooleanCameraParameter, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RevertAxisY_MetaData), NewProp_RevertAxisY_MetaData) }; // 2798599862
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInputAxisBinding2DCameraNode_Statics::NewProp_Multiplier = { "Multiplier", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputAxisBinding2DCameraNode, Multiplier), Z_Construct_UScriptStruct_FVector2dCameraParameter, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Multiplier_MetaData), NewProp_Multiplier_MetaData) }; // 1195649529
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInputAxisBinding2DCameraNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputAxisBinding2DCameraNode_Statics::NewProp_AxisActions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputAxisBinding2DCameraNode_Statics::NewProp_AxisActions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputAxisBinding2DCameraNode_Statics::NewProp_RevertAxisX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputAxisBinding2DCameraNode_Statics::NewProp_RevertAxisY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputAxisBinding2DCameraNode_Statics::NewProp_Multiplier,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInputAxisBinding2DCameraNode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInputAxisBinding2DCameraNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCameraRigInput2DSlot,
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayCameras,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInputAxisBinding2DCameraNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInputAxisBinding2DCameraNode_Statics::ClassParams = {
	&UInputAxisBinding2DCameraNode::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UInputAxisBinding2DCameraNode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UInputAxisBinding2DCameraNode_Statics::PropPointers),
	0,
	0x002810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInputAxisBinding2DCameraNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UInputAxisBinding2DCameraNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInputAxisBinding2DCameraNode()
{
	if (!Z_Registration_Info_UClass_UInputAxisBinding2DCameraNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInputAxisBinding2DCameraNode.OuterSingleton, Z_Construct_UClass_UInputAxisBinding2DCameraNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInputAxisBinding2DCameraNode.OuterSingleton;
}
template<> GAMEPLAYCAMERAS_API UClass* StaticClass<UInputAxisBinding2DCameraNode>()
{
	return UInputAxisBinding2DCameraNode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInputAxisBinding2DCameraNode);
UInputAxisBinding2DCameraNode::~UInputAxisBinding2DCameraNode() {}
// End Class UInputAxisBinding2DCameraNode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Input_InputAxisBinding2DCameraNode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInputAxisBinding2DCameraNode, UInputAxisBinding2DCameraNode::StaticClass, TEXT("UInputAxisBinding2DCameraNode"), &Z_Registration_Info_UClass_UInputAxisBinding2DCameraNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInputAxisBinding2DCameraNode), 891496984U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Input_InputAxisBinding2DCameraNode_h_2318060234(TEXT("/Script/GameplayCameras"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Input_InputAxisBinding2DCameraNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Input_InputAxisBinding2DCameraNode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
