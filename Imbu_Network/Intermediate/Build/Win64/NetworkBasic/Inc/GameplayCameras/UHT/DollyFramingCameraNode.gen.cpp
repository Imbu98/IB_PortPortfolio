// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayCameras/Public/Nodes/Framing/DollyFramingCameraNode.h"
#include "GameplayCameras/Public/Core/CameraParameters.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDollyFramingCameraNode() {}

// Begin Cross Module References
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UBaseFramingCameraNode();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UDollyFramingCameraNode();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UDollyFramingCameraNode_NoRegister();
GAMEPLAYCAMERAS_API UScriptStruct* Z_Construct_UScriptStruct_FBooleanCameraParameter();
UPackage* Z_Construct_UPackage__Script_GameplayCameras();
// End Cross Module References

// Begin Class UDollyFramingCameraNode
void UDollyFramingCameraNode::StaticRegisterNativesUDollyFramingCameraNode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDollyFramingCameraNode);
UClass* Z_Construct_UClass_UDollyFramingCameraNode_NoRegister()
{
	return UDollyFramingCameraNode::StaticClass();
}
struct Z_Construct_UClass_UDollyFramingCameraNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A camera node that frames a target by moving along a sideways rail (left/right relative to \n * the camera transform) and optionally also up and down.\n */" },
		{ "IncludePath", "Nodes/Framing/DollyFramingCameraNode.h" },
		{ "ModuleRelativePath", "Public/Nodes/Framing/DollyFramingCameraNode.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "A camera node that frames a target by moving along a sideways rail (left/right relative to\nthe camera transform) and optionally also up and down." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CanMoveLaterally_MetaData[] = {
		{ "Category", "Dolly" },
		{ "Comment", "/** Whether the dolly can move laterally. */" },
		{ "ModuleRelativePath", "Public/Nodes/Framing/DollyFramingCameraNode.h" },
		{ "ToolTip", "Whether the dolly can move laterally." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CanMoveVertically_MetaData[] = {
		{ "Category", "Dolly" },
		{ "Comment", "/** Whether the dolly can move vertically. */" },
		{ "ModuleRelativePath", "Public/Nodes/Framing/DollyFramingCameraNode.h" },
		{ "ToolTip", "Whether the dolly can move vertically." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CanMoveLaterally;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CanMoveVertically;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDollyFramingCameraNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDollyFramingCameraNode_Statics::NewProp_CanMoveLaterally = { "CanMoveLaterally", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDollyFramingCameraNode, CanMoveLaterally), Z_Construct_UScriptStruct_FBooleanCameraParameter, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CanMoveLaterally_MetaData), NewProp_CanMoveLaterally_MetaData) }; // 2798599862
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDollyFramingCameraNode_Statics::NewProp_CanMoveVertically = { "CanMoveVertically", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDollyFramingCameraNode, CanMoveVertically), Z_Construct_UScriptStruct_FBooleanCameraParameter, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CanMoveVertically_MetaData), NewProp_CanMoveVertically_MetaData) }; // 2798599862
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDollyFramingCameraNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDollyFramingCameraNode_Statics::NewProp_CanMoveLaterally,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDollyFramingCameraNode_Statics::NewProp_CanMoveVertically,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDollyFramingCameraNode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDollyFramingCameraNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBaseFramingCameraNode,
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayCameras,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDollyFramingCameraNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDollyFramingCameraNode_Statics::ClassParams = {
	&UDollyFramingCameraNode::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDollyFramingCameraNode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDollyFramingCameraNode_Statics::PropPointers),
	0,
	0x002810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDollyFramingCameraNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UDollyFramingCameraNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDollyFramingCameraNode()
{
	if (!Z_Registration_Info_UClass_UDollyFramingCameraNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDollyFramingCameraNode.OuterSingleton, Z_Construct_UClass_UDollyFramingCameraNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDollyFramingCameraNode.OuterSingleton;
}
template<> GAMEPLAYCAMERAS_API UClass* StaticClass<UDollyFramingCameraNode>()
{
	return UDollyFramingCameraNode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDollyFramingCameraNode);
UDollyFramingCameraNode::~UDollyFramingCameraNode() {}
// End Class UDollyFramingCameraNode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Framing_DollyFramingCameraNode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDollyFramingCameraNode, UDollyFramingCameraNode::StaticClass, TEXT("UDollyFramingCameraNode"), &Z_Registration_Info_UClass_UDollyFramingCameraNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDollyFramingCameraNode), 3896530981U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Framing_DollyFramingCameraNode_h_2932266963(TEXT("/Script/GameplayCameras"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Framing_DollyFramingCameraNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Framing_DollyFramingCameraNode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
