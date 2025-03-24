// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayCameras/Public/Core/CameraAsset.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCameraAsset() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntVector2();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UCameraAsset();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UCameraAsset_NoRegister();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UCameraDirector_NoRegister();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UCameraRigAsset_NoRegister();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UCameraRigTransition_NoRegister();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UHasCameraBuildStatus_NoRegister();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UObjectTreeGraphObject_NoRegister();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UObjectTreeGraphRootObject_NoRegister();
GAMEPLAYCAMERAS_API UEnum* Z_Construct_UEnum_GameplayCameras_ECameraBuildStatus();
UPackage* Z_Construct_UPackage__Script_GameplayCameras();
// End Cross Module References

// Begin Class UCameraAsset
void UCameraAsset::StaticRegisterNativesUCameraAsset()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCameraAsset);
UClass* Z_Construct_UClass_UCameraAsset_NoRegister()
{
	return UCameraAsset::StaticClass();
}
struct Z_Construct_UClass_UCameraAsset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A complete camera asset.\n */" },
		{ "IncludePath", "Core/CameraAsset.h" },
		{ "ModuleRelativePath", "Public/Core/CameraAsset.h" },
		{ "ToolTip", "A complete camera asset." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraDirector_MetaData[] = {
		{ "Comment", "/** The camera director to use in this camera. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Core/CameraAsset.h" },
		{ "ToolTip", "The camera director to use in this camera." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraRigs_MetaData[] = {
		{ "Comment", "/** The list of camera rigs used by this camera. */" },
		{ "ModuleRelativePath", "Public/Core/CameraAsset.h" },
		{ "ToolTip", "The list of camera rigs used by this camera." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnterTransitions_MetaData[] = {
		{ "Comment", "/** A list of default enter transitions for all the camera rigs in this asset. */" },
		{ "ModuleRelativePath", "Public/Core/CameraAsset.h" },
		{ "ObjectTreeGraphPinDirection", "Input" },
		{ "ToolTip", "A list of default enter transitions for all the camera rigs in this asset." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExitTransitions_MetaData[] = {
		{ "Comment", "/** A list of default exit transitions for all the camera rigs in this asset. */" },
		{ "ModuleRelativePath", "Public/Core/CameraAsset.h" },
		{ "ObjectTreeGraphPinDirection", "Output" },
		{ "ToolTip", "A list of default exit transitions for all the camera rigs in this asset." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BuildStatus_MetaData[] = {
		{ "Comment", "/** The current build state of this camera asset. */" },
		{ "ModuleRelativePath", "Public/Core/CameraAsset.h" },
		{ "ToolTip", "The current build state of this camera asset." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransitionGraphNodePos_MetaData[] = {
		{ "Comment", "/** Position of the camera node in the shared transitions graph editor. */" },
		{ "ModuleRelativePath", "Public/Core/CameraAsset.h" },
		{ "ToolTip", "Position of the camera node in the shared transitions graph editor." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransitionGraphNodeComment_MetaData[] = {
		{ "Comment", "/** User-written comment in the transition graph editor. */" },
		{ "ModuleRelativePath", "Public/Core/CameraAsset.h" },
		{ "ToolTip", "User-written comment in the transition graph editor." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AllSharedTransitionsObjects_Inner_MetaData[] = {
		{ "Comment", "/** All nodes used in the shared transitions graph editor. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Core/CameraAsset.h" },
		{ "ObjectTreeGraphHidden", "TRUE" },
		{ "ToolTip", "All nodes used in the shared transitions graph editor." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AllSharedTransitionsObjects_MetaData[] = {
		{ "Comment", "/** All nodes used in the shared transitions graph editor. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Core/CameraAsset.h" },
		{ "ObjectTreeGraphHidden", "TRUE" },
		{ "ToolTip", "All nodes used in the shared transitions graph editor." },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraDirector;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraRigs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CameraRigs;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EnterTransitions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_EnterTransitions;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ExitTransitions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ExitTransitions;
	static const UECodeGen_Private::FBytePropertyParams NewProp_BuildStatus_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_BuildStatus;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TransitionGraphNodePos;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TransitionGraphNodeComment;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AllSharedTransitionsObjects_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AllSharedTransitionsObjects;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCameraAsset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCameraAsset_Statics::NewProp_CameraDirector = { "CameraDirector", nullptr, (EPropertyFlags)0x0146000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCameraAsset, CameraDirector), Z_Construct_UClass_UCameraDirector_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraDirector_MetaData), NewProp_CameraDirector_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCameraAsset_Statics::NewProp_CameraRigs_Inner = { "CameraRigs", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UCameraRigAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCameraAsset_Statics::NewProp_CameraRigs = { "CameraRigs", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCameraAsset, CameraRigs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraRigs_MetaData), NewProp_CameraRigs_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCameraAsset_Statics::NewProp_EnterTransitions_Inner = { "EnterTransitions", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UCameraRigTransition_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCameraAsset_Statics::NewProp_EnterTransitions = { "EnterTransitions", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCameraAsset, EnterTransitions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnterTransitions_MetaData), NewProp_EnterTransitions_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCameraAsset_Statics::NewProp_ExitTransitions_Inner = { "ExitTransitions", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UCameraRigTransition_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCameraAsset_Statics::NewProp_ExitTransitions = { "ExitTransitions", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCameraAsset, ExitTransitions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExitTransitions_MetaData), NewProp_ExitTransitions_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCameraAsset_Statics::NewProp_BuildStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCameraAsset_Statics::NewProp_BuildStatus = { "BuildStatus", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCameraAsset, BuildStatus), Z_Construct_UEnum_GameplayCameras_ECameraBuildStatus, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BuildStatus_MetaData), NewProp_BuildStatus_MetaData) }; // 2777232607
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCameraAsset_Statics::NewProp_TransitionGraphNodePos = { "TransitionGraphNodePos", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCameraAsset, TransitionGraphNodePos), Z_Construct_UScriptStruct_FIntVector2, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransitionGraphNodePos_MetaData), NewProp_TransitionGraphNodePos_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCameraAsset_Statics::NewProp_TransitionGraphNodeComment = { "TransitionGraphNodeComment", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCameraAsset, TransitionGraphNodeComment), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransitionGraphNodeComment_MetaData), NewProp_TransitionGraphNodeComment_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCameraAsset_Statics::NewProp_AllSharedTransitionsObjects_Inner = { "AllSharedTransitionsObjects", nullptr, (EPropertyFlags)0x0106000800080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AllSharedTransitionsObjects_Inner_MetaData), NewProp_AllSharedTransitionsObjects_Inner_MetaData) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCameraAsset_Statics::NewProp_AllSharedTransitionsObjects = { "AllSharedTransitionsObjects", nullptr, (EPropertyFlags)0x0144008800000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCameraAsset, AllSharedTransitionsObjects), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AllSharedTransitionsObjects_MetaData), NewProp_AllSharedTransitionsObjects_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCameraAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraAsset_Statics::NewProp_CameraDirector,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraAsset_Statics::NewProp_CameraRigs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraAsset_Statics::NewProp_CameraRigs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraAsset_Statics::NewProp_EnterTransitions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraAsset_Statics::NewProp_EnterTransitions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraAsset_Statics::NewProp_ExitTransitions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraAsset_Statics::NewProp_ExitTransitions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraAsset_Statics::NewProp_BuildStatus_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraAsset_Statics::NewProp_BuildStatus,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraAsset_Statics::NewProp_TransitionGraphNodePos,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraAsset_Statics::NewProp_TransitionGraphNodeComment,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraAsset_Statics::NewProp_AllSharedTransitionsObjects_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraAsset_Statics::NewProp_AllSharedTransitionsObjects,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCameraAsset_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCameraAsset_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayCameras,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCameraAsset_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UCameraAsset_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UHasCameraBuildStatus_NoRegister, (int32)VTABLE_OFFSET(UCameraAsset, IHasCameraBuildStatus), false },  // 2979863171
	{ Z_Construct_UClass_UObjectTreeGraphObject_NoRegister, (int32)VTABLE_OFFSET(UCameraAsset, IObjectTreeGraphObject), false },  // 1612724473
	{ Z_Construct_UClass_UObjectTreeGraphRootObject_NoRegister, (int32)VTABLE_OFFSET(UCameraAsset, IObjectTreeGraphRootObject), false },  // 2327080302
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCameraAsset_Statics::ClassParams = {
	&UCameraAsset::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCameraAsset_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCameraAsset_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x008800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCameraAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_UCameraAsset_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCameraAsset()
{
	if (!Z_Registration_Info_UClass_UCameraAsset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCameraAsset.OuterSingleton, Z_Construct_UClass_UCameraAsset_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCameraAsset.OuterSingleton;
}
template<> GAMEPLAYCAMERAS_API UClass* StaticClass<UCameraAsset>()
{
	return UCameraAsset::StaticClass();
}
UCameraAsset::UCameraAsset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCameraAsset);
UCameraAsset::~UCameraAsset() {}
// End Class UCameraAsset

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraAsset_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCameraAsset, UCameraAsset::StaticClass, TEXT("UCameraAsset"), &Z_Registration_Info_UClass_UCameraAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCameraAsset), 352157596U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraAsset_h_3837126308(TEXT("/Script/GameplayCameras"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraAsset_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
