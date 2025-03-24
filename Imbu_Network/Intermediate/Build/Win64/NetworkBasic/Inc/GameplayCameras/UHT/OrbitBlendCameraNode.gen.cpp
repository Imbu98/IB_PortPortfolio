// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayCameras/Public/Nodes/Blends/OrbitBlendCameraNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOrbitBlendCameraNode() {}

// Begin Cross Module References
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UBlendCameraNode();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UOrbitBlendCameraNode();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UOrbitBlendCameraNode_NoRegister();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_USimpleBlendCameraNode_NoRegister();
UPackage* Z_Construct_UPackage__Script_GameplayCameras();
// End Cross Module References

// Begin Class UOrbitBlendCameraNode
void UOrbitBlendCameraNode::StaticRegisterNativesUOrbitBlendCameraNode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOrbitBlendCameraNode);
UClass* Z_Construct_UClass_UOrbitBlendCameraNode_NoRegister()
{
	return UOrbitBlendCameraNode::StaticClass();
}
struct Z_Construct_UClass_UOrbitBlendCameraNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Orbit blend node.\n */" },
		{ "IncludePath", "Nodes/Blends/OrbitBlendCameraNode.h" },
		{ "ModuleRelativePath", "Public/Nodes/Blends/OrbitBlendCameraNode.h" },
		{ "ToolTip", "Orbit blend node." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DrivingBlend_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Nodes/Blends/OrbitBlendCameraNode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DrivingBlend;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrbitBlendCameraNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOrbitBlendCameraNode_Statics::NewProp_DrivingBlend = { "DrivingBlend", nullptr, (EPropertyFlags)0x0114000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOrbitBlendCameraNode, DrivingBlend), Z_Construct_UClass_USimpleBlendCameraNode_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DrivingBlend_MetaData), NewProp_DrivingBlend_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOrbitBlendCameraNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrbitBlendCameraNode_Statics::NewProp_DrivingBlend,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrbitBlendCameraNode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOrbitBlendCameraNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlendCameraNode,
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayCameras,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrbitBlendCameraNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrbitBlendCameraNode_Statics::ClassParams = {
	&UOrbitBlendCameraNode::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UOrbitBlendCameraNode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UOrbitBlendCameraNode_Statics::PropPointers),
	0,
	0x00A810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrbitBlendCameraNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrbitBlendCameraNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOrbitBlendCameraNode()
{
	if (!Z_Registration_Info_UClass_UOrbitBlendCameraNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrbitBlendCameraNode.OuterSingleton, Z_Construct_UClass_UOrbitBlendCameraNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrbitBlendCameraNode.OuterSingleton;
}
template<> GAMEPLAYCAMERAS_API UClass* StaticClass<UOrbitBlendCameraNode>()
{
	return UOrbitBlendCameraNode::StaticClass();
}
UOrbitBlendCameraNode::UOrbitBlendCameraNode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOrbitBlendCameraNode);
UOrbitBlendCameraNode::~UOrbitBlendCameraNode() {}
// End Class UOrbitBlendCameraNode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Blends_OrbitBlendCameraNode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOrbitBlendCameraNode, UOrbitBlendCameraNode::StaticClass, TEXT("UOrbitBlendCameraNode"), &Z_Registration_Info_UClass_UOrbitBlendCameraNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrbitBlendCameraNode), 1698148239U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Blends_OrbitBlendCameraNode_h_3571328976(TEXT("/Script/GameplayCameras"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Blends_OrbitBlendCameraNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Blends_OrbitBlendCameraNode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
