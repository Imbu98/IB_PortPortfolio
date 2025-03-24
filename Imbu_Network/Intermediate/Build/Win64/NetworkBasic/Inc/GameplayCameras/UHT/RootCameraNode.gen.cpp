// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayCameras/Public/Core/RootCameraNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRootCameraNode() {}

// Begin Cross Module References
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UCameraNode();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_URootCameraNode();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_URootCameraNode_NoRegister();
GAMEPLAYCAMERAS_API UEnum* Z_Construct_UEnum_GameplayCameras_ECameraRigLayer();
UPackage* Z_Construct_UPackage__Script_GameplayCameras();
// End Cross Module References

// Begin Enum ECameraRigLayer
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECameraRigLayer;
static UEnum* ECameraRigLayer_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ECameraRigLayer.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ECameraRigLayer.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GameplayCameras_ECameraRigLayer, (UObject*)Z_Construct_UPackage__Script_GameplayCameras(), TEXT("ECameraRigLayer"));
	}
	return Z_Registration_Info_UEnum_ECameraRigLayer.OuterSingleton;
}
template<> GAMEPLAYCAMERAS_API UEnum* StaticEnum<ECameraRigLayer>()
{
	return ECameraRigLayer_StaticEnum();
}
struct Z_Construct_UEnum_GameplayCameras_ECameraRigLayer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Base.DisplayName", "Base Layer" },
		{ "Base.Name", "ECameraRigLayer::Base" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Defines evaluation layers for camera rigs.\n */" },
		{ "Global.DisplayName", "Global Layer" },
		{ "Global.Name", "ECameraRigLayer::Global" },
		{ "Main.DisplayName", "Main Layer" },
		{ "Main.Name", "ECameraRigLayer::Main" },
		{ "ModuleRelativePath", "Public/Core/RootCameraNode.h" },
		{ "ToolTip", "Defines evaluation layers for camera rigs." },
		{ "Visual.DisplayName", "Visual Layer" },
		{ "Visual.Name", "ECameraRigLayer::Visual" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ECameraRigLayer::Base", (int64)ECameraRigLayer::Base },
		{ "ECameraRigLayer::Main", (int64)ECameraRigLayer::Main },
		{ "ECameraRigLayer::Global", (int64)ECameraRigLayer::Global },
		{ "ECameraRigLayer::Visual", (int64)ECameraRigLayer::Visual },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GameplayCameras_ECameraRigLayer_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_GameplayCameras,
	nullptr,
	"ECameraRigLayer",
	"ECameraRigLayer",
	Z_Construct_UEnum_GameplayCameras_ECameraRigLayer_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayCameras_ECameraRigLayer_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayCameras_ECameraRigLayer_Statics::Enum_MetaDataParams), Z_Construct_UEnum_GameplayCameras_ECameraRigLayer_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_GameplayCameras_ECameraRigLayer()
{
	if (!Z_Registration_Info_UEnum_ECameraRigLayer.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECameraRigLayer.InnerSingleton, Z_Construct_UEnum_GameplayCameras_ECameraRigLayer_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ECameraRigLayer.InnerSingleton;
}
// End Enum ECameraRigLayer

// Begin Class URootCameraNode
void URootCameraNode::StaticRegisterNativesURootCameraNode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URootCameraNode);
UClass* Z_Construct_UClass_URootCameraNode_NoRegister()
{
	return URootCameraNode::StaticClass();
}
struct Z_Construct_UClass_URootCameraNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * The base class for a camera node that can act as the root of the\n * camera system evaluation.\n */" },
		{ "IncludePath", "Core/RootCameraNode.h" },
		{ "ModuleRelativePath", "Public/Core/RootCameraNode.h" },
		{ "ToolTip", "The base class for a camera node that can act as the root of the\ncamera system evaluation." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URootCameraNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_URootCameraNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCameraNode,
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayCameras,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URootCameraNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URootCameraNode_Statics::ClassParams = {
	&URootCameraNode::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URootCameraNode_Statics::Class_MetaDataParams), Z_Construct_UClass_URootCameraNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URootCameraNode()
{
	if (!Z_Registration_Info_UClass_URootCameraNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URootCameraNode.OuterSingleton, Z_Construct_UClass_URootCameraNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URootCameraNode.OuterSingleton;
}
template<> GAMEPLAYCAMERAS_API UClass* StaticClass<URootCameraNode>()
{
	return URootCameraNode::StaticClass();
}
URootCameraNode::URootCameraNode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(URootCameraNode);
URootCameraNode::~URootCameraNode() {}
// End Class URootCameraNode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_RootCameraNode_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ECameraRigLayer_StaticEnum, TEXT("ECameraRigLayer"), &Z_Registration_Info_UEnum_ECameraRigLayer, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3610370937U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URootCameraNode, URootCameraNode::StaticClass, TEXT("URootCameraNode"), &Z_Registration_Info_UClass_URootCameraNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URootCameraNode), 1762651839U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_RootCameraNode_h_243024228(TEXT("/Script/GameplayCameras"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_RootCameraNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_RootCameraNode_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_RootCameraNode_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_RootCameraNode_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
