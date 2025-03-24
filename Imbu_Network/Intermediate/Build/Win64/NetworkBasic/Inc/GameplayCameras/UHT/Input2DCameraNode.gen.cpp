// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayCameras/Public/Nodes/Input/Input2DCameraNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInput2DCameraNode() {}

// Begin Cross Module References
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UCameraNode();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UInput2DCameraNode();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UInput2DCameraNode_NoRegister();
UPackage* Z_Construct_UPackage__Script_GameplayCameras();
// End Cross Module References

// Begin Class UInput2DCameraNode
void UInput2DCameraNode::StaticRegisterNativesUInput2DCameraNode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInput2DCameraNode);
UClass* Z_Construct_UClass_UInput2DCameraNode_NoRegister()
{
	return UInput2DCameraNode::StaticClass();
}
struct Z_Construct_UClass_UInput2DCameraNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "CameraNodeCategories", "Input" },
		{ "Comment", "/**\n * A camera node that provides a two-dimensional value to an input slot.\n */" },
		{ "IncludePath", "Nodes/Input/Input2DCameraNode.h" },
		{ "ModuleRelativePath", "Public/Nodes/Input/Input2DCameraNode.h" },
		{ "ObjectTreeGraphDefaultPropertyPinDirection", "Input" },
		{ "ObjectTreeGraphSelfPinDirection", "Output" },
		{ "ToolTip", "A camera node that provides a two-dimensional value to an input slot." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInput2DCameraNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInput2DCameraNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCameraNode,
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayCameras,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInput2DCameraNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInput2DCameraNode_Statics::ClassParams = {
	&UInput2DCameraNode::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInput2DCameraNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UInput2DCameraNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInput2DCameraNode()
{
	if (!Z_Registration_Info_UClass_UInput2DCameraNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInput2DCameraNode.OuterSingleton, Z_Construct_UClass_UInput2DCameraNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInput2DCameraNode.OuterSingleton;
}
template<> GAMEPLAYCAMERAS_API UClass* StaticClass<UInput2DCameraNode>()
{
	return UInput2DCameraNode::StaticClass();
}
UInput2DCameraNode::UInput2DCameraNode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInput2DCameraNode);
UInput2DCameraNode::~UInput2DCameraNode() {}
// End Class UInput2DCameraNode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Input_Input2DCameraNode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInput2DCameraNode, UInput2DCameraNode::StaticClass, TEXT("UInput2DCameraNode"), &Z_Registration_Info_UClass_UInput2DCameraNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInput2DCameraNode), 1539668417U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Input_Input2DCameraNode_h_2156151419(TEXT("/Script/GameplayCameras"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Input_Input2DCameraNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Input_Input2DCameraNode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
