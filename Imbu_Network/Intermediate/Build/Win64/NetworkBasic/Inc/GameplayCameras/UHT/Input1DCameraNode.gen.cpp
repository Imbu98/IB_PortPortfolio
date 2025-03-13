// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayCameras/Public/Nodes/Input/Input1DCameraNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInput1DCameraNode() {}

// Begin Cross Module References
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UCameraNode();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UInput1DCameraNode();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UInput1DCameraNode_NoRegister();
UPackage* Z_Construct_UPackage__Script_GameplayCameras();
// End Cross Module References

// Begin Class UInput1DCameraNode
void UInput1DCameraNode::StaticRegisterNativesUInput1DCameraNode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInput1DCameraNode);
UClass* Z_Construct_UClass_UInput1DCameraNode_NoRegister()
{
	return UInput1DCameraNode::StaticClass();
}
struct Z_Construct_UClass_UInput1DCameraNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "CameraNodeCategories", "Input" },
		{ "Comment", "/**\n * A camera node that provides a floating-point value to an input slot.\n */" },
		{ "IncludePath", "Nodes/Input/Input1DCameraNode.h" },
		{ "ModuleRelativePath", "Public/Nodes/Input/Input1DCameraNode.h" },
		{ "ObjectTreeGraphDefaultPropertyPinDirection", "Input" },
		{ "ObjectTreeGraphSelfPinDirection", "Output" },
		{ "ToolTip", "A camera node that provides a floating-point value to an input slot." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInput1DCameraNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInput1DCameraNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCameraNode,
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayCameras,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInput1DCameraNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInput1DCameraNode_Statics::ClassParams = {
	&UInput1DCameraNode::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x002810A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInput1DCameraNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UInput1DCameraNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInput1DCameraNode()
{
	if (!Z_Registration_Info_UClass_UInput1DCameraNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInput1DCameraNode.OuterSingleton, Z_Construct_UClass_UInput1DCameraNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInput1DCameraNode.OuterSingleton;
}
template<> GAMEPLAYCAMERAS_API UClass* StaticClass<UInput1DCameraNode>()
{
	return UInput1DCameraNode::StaticClass();
}
UInput1DCameraNode::UInput1DCameraNode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInput1DCameraNode);
UInput1DCameraNode::~UInput1DCameraNode() {}
// End Class UInput1DCameraNode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Input_Input1DCameraNode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInput1DCameraNode, UInput1DCameraNode::StaticClass, TEXT("UInput1DCameraNode"), &Z_Registration_Info_UClass_UInput1DCameraNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInput1DCameraNode), 2823429965U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Input_Input1DCameraNode_h_118227759(TEXT("/Script/GameplayCameras"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Input_Input1DCameraNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Input_Input1DCameraNode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
