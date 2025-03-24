// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayCameras/Public/Core/BlendStackCameraNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlendStackCameraNode() {}

// Begin Cross Module References
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UBlendStackCameraNode();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UBlendStackCameraNode_NoRegister();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UCameraNode();
GAMEPLAYCAMERAS_API UEnum* Z_Construct_UEnum_GameplayCameras_ECameraBlendStackType();
UPackage* Z_Construct_UPackage__Script_GameplayCameras();
// End Cross Module References

// Begin Enum ECameraBlendStackType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECameraBlendStackType;
static UEnum* ECameraBlendStackType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ECameraBlendStackType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ECameraBlendStackType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GameplayCameras_ECameraBlendStackType, (UObject*)Z_Construct_UPackage__Script_GameplayCameras(), TEXT("ECameraBlendStackType"));
	}
	return Z_Registration_Info_UEnum_ECameraBlendStackType.OuterSingleton;
}
template<> GAMEPLAYCAMERAS_API UEnum* StaticEnum<ECameraBlendStackType>()
{
	return ECameraBlendStackType_StaticEnum();
}
struct Z_Construct_UEnum_GameplayCameras_ECameraBlendStackType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AdditivePersistent.Comment", "/**\n\x09 * Camera rigs are evaluated in an additive way, i.e. the result of a lower camera rig\n\x09 * becomes the input of the next ones. Also, camera rigs stay in the stack until explicitly \n\x09 * removed.\n\x09 */" },
		{ "AdditivePersistent.Name", "ECameraBlendStackType::AdditivePersistent" },
		{ "AdditivePersistent.ToolTip", "Camera rigs are evaluated in an additive way, i.e. the result of a lower camera rig\nbecomes the input of the next ones. Also, camera rigs stay in the stack until explicitly\nremoved." },
		{ "Comment", "/**\n * Describes a type of blend stack.\n */" },
		{ "IsolatedTransient.Comment", "/**\n\x09 * Camera rigs are evaluated in isolation before being blended together, and get \n\x09 * automatically popped out of the stack when another rig has reached 100% blend above \n\x09 * them.\n\x09 */" },
		{ "IsolatedTransient.Name", "ECameraBlendStackType::IsolatedTransient" },
		{ "IsolatedTransient.ToolTip", "Camera rigs are evaluated in isolation before being blended together, and get\nautomatically popped out of the stack when another rig has reached 100% blend above\nthem." },
		{ "ModuleRelativePath", "Public/Core/BlendStackCameraNode.h" },
		{ "ToolTip", "Describes a type of blend stack." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ECameraBlendStackType::IsolatedTransient", (int64)ECameraBlendStackType::IsolatedTransient },
		{ "ECameraBlendStackType::AdditivePersistent", (int64)ECameraBlendStackType::AdditivePersistent },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GameplayCameras_ECameraBlendStackType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_GameplayCameras,
	nullptr,
	"ECameraBlendStackType",
	"ECameraBlendStackType",
	Z_Construct_UEnum_GameplayCameras_ECameraBlendStackType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayCameras_ECameraBlendStackType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayCameras_ECameraBlendStackType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_GameplayCameras_ECameraBlendStackType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_GameplayCameras_ECameraBlendStackType()
{
	if (!Z_Registration_Info_UEnum_ECameraBlendStackType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECameraBlendStackType.InnerSingleton, Z_Construct_UEnum_GameplayCameras_ECameraBlendStackType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ECameraBlendStackType.InnerSingleton;
}
// End Enum ECameraBlendStackType

// Begin Class UBlendStackCameraNode
void UBlendStackCameraNode::StaticRegisterNativesUBlendStackCameraNode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBlendStackCameraNode);
UClass* Z_Construct_UClass_UBlendStackCameraNode_NoRegister()
{
	return UBlendStackCameraNode::StaticClass();
}
struct Z_Construct_UClass_UBlendStackCameraNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A blend stack implemented as a camera node.\n */" },
		{ "IncludePath", "Core/BlendStackCameraNode.h" },
		{ "ModuleRelativePath", "Public/Core/BlendStackCameraNode.h" },
		{ "ToolTip", "A blend stack implemented as a camera node." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlendStackType_MetaData[] = {
		{ "Comment", "/** \n\x09 * The type of blend stack this should run as.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Core/BlendStackCameraNode.h" },
		{ "ToolTip", "The type of blend stack this should run as." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_BlendStackType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_BlendStackType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlendStackCameraNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UBlendStackCameraNode_Statics::NewProp_BlendStackType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UBlendStackCameraNode_Statics::NewProp_BlendStackType = { "BlendStackType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBlendStackCameraNode, BlendStackType), Z_Construct_UEnum_GameplayCameras_ECameraBlendStackType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlendStackType_MetaData), NewProp_BlendStackType_MetaData) }; // 3537467624
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBlendStackCameraNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlendStackCameraNode_Statics::NewProp_BlendStackType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlendStackCameraNode_Statics::NewProp_BlendStackType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBlendStackCameraNode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBlendStackCameraNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCameraNode,
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayCameras,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBlendStackCameraNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBlendStackCameraNode_Statics::ClassParams = {
	&UBlendStackCameraNode::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBlendStackCameraNode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBlendStackCameraNode_Statics::PropPointers),
	0,
	0x012810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBlendStackCameraNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UBlendStackCameraNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBlendStackCameraNode()
{
	if (!Z_Registration_Info_UClass_UBlendStackCameraNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBlendStackCameraNode.OuterSingleton, Z_Construct_UClass_UBlendStackCameraNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBlendStackCameraNode.OuterSingleton;
}
template<> GAMEPLAYCAMERAS_API UClass* StaticClass<UBlendStackCameraNode>()
{
	return UBlendStackCameraNode::StaticClass();
}
UBlendStackCameraNode::UBlendStackCameraNode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBlendStackCameraNode);
UBlendStackCameraNode::~UBlendStackCameraNode() {}
// End Class UBlendStackCameraNode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_BlendStackCameraNode_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ECameraBlendStackType_StaticEnum, TEXT("ECameraBlendStackType"), &Z_Registration_Info_UEnum_ECameraBlendStackType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3537467624U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBlendStackCameraNode, UBlendStackCameraNode::StaticClass, TEXT("UBlendStackCameraNode"), &Z_Registration_Info_UClass_UBlendStackCameraNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBlendStackCameraNode), 3173758636U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_BlendStackCameraNode_h_847111668(TEXT("/Script/GameplayCameras"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_BlendStackCameraNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_BlendStackCameraNode_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_BlendStackCameraNode_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_BlendStackCameraNode_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
