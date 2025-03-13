// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayCameras/Public/Nodes/Common/DampenPositionCameraNode.h"
#include "GameplayCameras/Public/Core/CameraParameters.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDampenPositionCameraNode() {}

// Begin Cross Module References
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UCameraNode();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UDampenPositionCameraNode();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UDampenPositionCameraNode_NoRegister();
GAMEPLAYCAMERAS_API UEnum* Z_Construct_UEnum_GameplayCameras_ECameraNodeSpace();
GAMEPLAYCAMERAS_API UScriptStruct* Z_Construct_UScriptStruct_FFloatCameraParameter();
UPackage* Z_Construct_UPackage__Script_GameplayCameras();
// End Cross Module References

// Begin Class UDampenPositionCameraNode
void UDampenPositionCameraNode::StaticRegisterNativesUDampenPositionCameraNode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDampenPositionCameraNode);
UClass* Z_Construct_UClass_UDampenPositionCameraNode_NoRegister()
{
	return UDampenPositionCameraNode::StaticClass();
}
struct Z_Construct_UClass_UDampenPositionCameraNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "CameraNodeCategories", "Common,Transform" },
		{ "Comment", "/**\n * A camera node that offsets the location of the camera.\n */" },
		{ "IncludePath", "Nodes/Common/DampenPositionCameraNode.h" },
		{ "ModuleRelativePath", "Public/Nodes/Common/DampenPositionCameraNode.h" },
		{ "ToolTip", "A camera node that offsets the location of the camera." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ForwardDampingFactor_MetaData[] = {
		{ "Category", "Damping" },
		{ "Comment", "/** Damping factor for forward/backward camera movement. */" },
		{ "ModuleRelativePath", "Public/Nodes/Common/DampenPositionCameraNode.h" },
		{ "ToolTip", "Damping factor for forward/backward camera movement." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LateralDampingFactor_MetaData[] = {
		{ "Category", "Damping" },
		{ "Comment", "/** Damping factor for left/right camera movement. */" },
		{ "ModuleRelativePath", "Public/Nodes/Common/DampenPositionCameraNode.h" },
		{ "ToolTip", "Damping factor for left/right camera movement." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VerticalDampingFactor_MetaData[] = {
		{ "Category", "Damping" },
		{ "Comment", "/** Damping factor for up/down camera movement. */" },
		{ "ModuleRelativePath", "Public/Nodes/Common/DampenPositionCameraNode.h" },
		{ "ToolTip", "Damping factor for up/down camera movement." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DampenSpace_MetaData[] = {
		{ "Category", "Damping" },
		{ "Comment", "/** What space the damping should be in. */" },
		{ "ModuleRelativePath", "Public/Nodes/Common/DampenPositionCameraNode.h" },
		{ "ToolTip", "What space the damping should be in." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ForwardDampingFactor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LateralDampingFactor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VerticalDampingFactor;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DampenSpace_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DampenSpace;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDampenPositionCameraNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDampenPositionCameraNode_Statics::NewProp_ForwardDampingFactor = { "ForwardDampingFactor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDampenPositionCameraNode, ForwardDampingFactor), Z_Construct_UScriptStruct_FFloatCameraParameter, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ForwardDampingFactor_MetaData), NewProp_ForwardDampingFactor_MetaData) }; // 834407157
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDampenPositionCameraNode_Statics::NewProp_LateralDampingFactor = { "LateralDampingFactor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDampenPositionCameraNode, LateralDampingFactor), Z_Construct_UScriptStruct_FFloatCameraParameter, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LateralDampingFactor_MetaData), NewProp_LateralDampingFactor_MetaData) }; // 834407157
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDampenPositionCameraNode_Statics::NewProp_VerticalDampingFactor = { "VerticalDampingFactor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDampenPositionCameraNode, VerticalDampingFactor), Z_Construct_UScriptStruct_FFloatCameraParameter, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VerticalDampingFactor_MetaData), NewProp_VerticalDampingFactor_MetaData) }; // 834407157
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDampenPositionCameraNode_Statics::NewProp_DampenSpace_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDampenPositionCameraNode_Statics::NewProp_DampenSpace = { "DampenSpace", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDampenPositionCameraNode, DampenSpace), Z_Construct_UEnum_GameplayCameras_ECameraNodeSpace, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DampenSpace_MetaData), NewProp_DampenSpace_MetaData) }; // 3423263223
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDampenPositionCameraNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDampenPositionCameraNode_Statics::NewProp_ForwardDampingFactor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDampenPositionCameraNode_Statics::NewProp_LateralDampingFactor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDampenPositionCameraNode_Statics::NewProp_VerticalDampingFactor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDampenPositionCameraNode_Statics::NewProp_DampenSpace_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDampenPositionCameraNode_Statics::NewProp_DampenSpace,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDampenPositionCameraNode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDampenPositionCameraNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCameraNode,
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayCameras,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDampenPositionCameraNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDampenPositionCameraNode_Statics::ClassParams = {
	&UDampenPositionCameraNode::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDampenPositionCameraNode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDampenPositionCameraNode_Statics::PropPointers),
	0,
	0x002810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDampenPositionCameraNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UDampenPositionCameraNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDampenPositionCameraNode()
{
	if (!Z_Registration_Info_UClass_UDampenPositionCameraNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDampenPositionCameraNode.OuterSingleton, Z_Construct_UClass_UDampenPositionCameraNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDampenPositionCameraNode.OuterSingleton;
}
template<> GAMEPLAYCAMERAS_API UClass* StaticClass<UDampenPositionCameraNode>()
{
	return UDampenPositionCameraNode::StaticClass();
}
UDampenPositionCameraNode::UDampenPositionCameraNode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDampenPositionCameraNode);
UDampenPositionCameraNode::~UDampenPositionCameraNode() {}
// End Class UDampenPositionCameraNode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Common_DampenPositionCameraNode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDampenPositionCameraNode, UDampenPositionCameraNode::StaticClass, TEXT("UDampenPositionCameraNode"), &Z_Registration_Info_UClass_UDampenPositionCameraNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDampenPositionCameraNode), 3177572268U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Common_DampenPositionCameraNode_h_4106400898(TEXT("/Script/GameplayCameras"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Common_DampenPositionCameraNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Common_DampenPositionCameraNode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
