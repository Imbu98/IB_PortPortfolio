// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayCameras/Public/GameFramework/ActivateCameraRigFunctions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActivateCameraRigFunctions() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UActivateCameraRigFunctions();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UActivateCameraRigFunctions_NoRegister();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UCameraRigAsset_NoRegister();
UPackage* Z_Construct_UPackage__Script_GameplayCameras();
// End Cross Module References

// Begin Class UActivateCameraRigFunctions Function ActivatePersistentBaseCameraRig
struct Z_Construct_UFunction_UActivateCameraRigFunctions_ActivatePersistentBaseCameraRig_Statics
{
	struct ActivateCameraRigFunctions_eventActivatePersistentBaseCameraRig_Parms
	{
		UObject* WorldContextObject;
		APlayerController* PlayerController;
		UCameraRigAsset* CameraRig;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Activates the given camera rig prefab in the base layer. */" },
		{ "ModuleRelativePath", "Public/GameFramework/ActivateCameraRigFunctions.h" },
		{ "ToolTip", "Activates the given camera rig prefab in the base layer." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraRig;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UActivateCameraRigFunctions_ActivatePersistentBaseCameraRig_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ActivateCameraRigFunctions_eventActivatePersistentBaseCameraRig_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UActivateCameraRigFunctions_ActivatePersistentBaseCameraRig_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ActivateCameraRigFunctions_eventActivatePersistentBaseCameraRig_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UActivateCameraRigFunctions_ActivatePersistentBaseCameraRig_Statics::NewProp_CameraRig = { "CameraRig", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ActivateCameraRigFunctions_eventActivatePersistentBaseCameraRig_Parms, CameraRig), Z_Construct_UClass_UCameraRigAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActivateCameraRigFunctions_ActivatePersistentBaseCameraRig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActivateCameraRigFunctions_ActivatePersistentBaseCameraRig_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActivateCameraRigFunctions_ActivatePersistentBaseCameraRig_Statics::NewProp_PlayerController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActivateCameraRigFunctions_ActivatePersistentBaseCameraRig_Statics::NewProp_CameraRig,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UActivateCameraRigFunctions_ActivatePersistentBaseCameraRig_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UActivateCameraRigFunctions_ActivatePersistentBaseCameraRig_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActivateCameraRigFunctions, nullptr, "ActivatePersistentBaseCameraRig", nullptr, nullptr, Z_Construct_UFunction_UActivateCameraRigFunctions_ActivatePersistentBaseCameraRig_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActivateCameraRigFunctions_ActivatePersistentBaseCameraRig_Statics::PropPointers), sizeof(Z_Construct_UFunction_UActivateCameraRigFunctions_ActivatePersistentBaseCameraRig_Statics::ActivateCameraRigFunctions_eventActivatePersistentBaseCameraRig_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UActivateCameraRigFunctions_ActivatePersistentBaseCameraRig_Statics::Function_MetaDataParams), Z_Construct_UFunction_UActivateCameraRigFunctions_ActivatePersistentBaseCameraRig_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UActivateCameraRigFunctions_ActivatePersistentBaseCameraRig_Statics::ActivateCameraRigFunctions_eventActivatePersistentBaseCameraRig_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UActivateCameraRigFunctions_ActivatePersistentBaseCameraRig()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UActivateCameraRigFunctions_ActivatePersistentBaseCameraRig_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UActivateCameraRigFunctions::execActivatePersistentBaseCameraRig)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
	P_GET_OBJECT(UCameraRigAsset,Z_Param_CameraRig);
	P_FINISH;
	P_NATIVE_BEGIN;
	UActivateCameraRigFunctions::ActivatePersistentBaseCameraRig(Z_Param_WorldContextObject,Z_Param_PlayerController,Z_Param_CameraRig);
	P_NATIVE_END;
}
// End Class UActivateCameraRigFunctions Function ActivatePersistentBaseCameraRig

// Begin Class UActivateCameraRigFunctions Function ActivatePersistentGlobalCameraRig
struct Z_Construct_UFunction_UActivateCameraRigFunctions_ActivatePersistentGlobalCameraRig_Statics
{
	struct ActivateCameraRigFunctions_eventActivatePersistentGlobalCameraRig_Parms
	{
		UObject* WorldContextObject;
		APlayerController* PlayerController;
		UCameraRigAsset* CameraRig;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Activates the given camera rig prefab in the global layer. */" },
		{ "ModuleRelativePath", "Public/GameFramework/ActivateCameraRigFunctions.h" },
		{ "ToolTip", "Activates the given camera rig prefab in the global layer." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraRig;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UActivateCameraRigFunctions_ActivatePersistentGlobalCameraRig_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ActivateCameraRigFunctions_eventActivatePersistentGlobalCameraRig_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UActivateCameraRigFunctions_ActivatePersistentGlobalCameraRig_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ActivateCameraRigFunctions_eventActivatePersistentGlobalCameraRig_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UActivateCameraRigFunctions_ActivatePersistentGlobalCameraRig_Statics::NewProp_CameraRig = { "CameraRig", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ActivateCameraRigFunctions_eventActivatePersistentGlobalCameraRig_Parms, CameraRig), Z_Construct_UClass_UCameraRigAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActivateCameraRigFunctions_ActivatePersistentGlobalCameraRig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActivateCameraRigFunctions_ActivatePersistentGlobalCameraRig_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActivateCameraRigFunctions_ActivatePersistentGlobalCameraRig_Statics::NewProp_PlayerController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActivateCameraRigFunctions_ActivatePersistentGlobalCameraRig_Statics::NewProp_CameraRig,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UActivateCameraRigFunctions_ActivatePersistentGlobalCameraRig_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UActivateCameraRigFunctions_ActivatePersistentGlobalCameraRig_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActivateCameraRigFunctions, nullptr, "ActivatePersistentGlobalCameraRig", nullptr, nullptr, Z_Construct_UFunction_UActivateCameraRigFunctions_ActivatePersistentGlobalCameraRig_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActivateCameraRigFunctions_ActivatePersistentGlobalCameraRig_Statics::PropPointers), sizeof(Z_Construct_UFunction_UActivateCameraRigFunctions_ActivatePersistentGlobalCameraRig_Statics::ActivateCameraRigFunctions_eventActivatePersistentGlobalCameraRig_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UActivateCameraRigFunctions_ActivatePersistentGlobalCameraRig_Statics::Function_MetaDataParams), Z_Construct_UFunction_UActivateCameraRigFunctions_ActivatePersistentGlobalCameraRig_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UActivateCameraRigFunctions_ActivatePersistentGlobalCameraRig_Statics::ActivateCameraRigFunctions_eventActivatePersistentGlobalCameraRig_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UActivateCameraRigFunctions_ActivatePersistentGlobalCameraRig()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UActivateCameraRigFunctions_ActivatePersistentGlobalCameraRig_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UActivateCameraRigFunctions::execActivatePersistentGlobalCameraRig)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
	P_GET_OBJECT(UCameraRigAsset,Z_Param_CameraRig);
	P_FINISH;
	P_NATIVE_BEGIN;
	UActivateCameraRigFunctions::ActivatePersistentGlobalCameraRig(Z_Param_WorldContextObject,Z_Param_PlayerController,Z_Param_CameraRig);
	P_NATIVE_END;
}
// End Class UActivateCameraRigFunctions Function ActivatePersistentGlobalCameraRig

// Begin Class UActivateCameraRigFunctions Function ActivatePersistentVisualCameraRig
struct Z_Construct_UFunction_UActivateCameraRigFunctions_ActivatePersistentVisualCameraRig_Statics
{
	struct ActivateCameraRigFunctions_eventActivatePersistentVisualCameraRig_Parms
	{
		UObject* WorldContextObject;
		APlayerController* PlayerController;
		UCameraRigAsset* CameraRig;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Activates the given camera rig prefab in the visual layer. */" },
		{ "ModuleRelativePath", "Public/GameFramework/ActivateCameraRigFunctions.h" },
		{ "ToolTip", "Activates the given camera rig prefab in the visual layer." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraRig;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UActivateCameraRigFunctions_ActivatePersistentVisualCameraRig_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ActivateCameraRigFunctions_eventActivatePersistentVisualCameraRig_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UActivateCameraRigFunctions_ActivatePersistentVisualCameraRig_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ActivateCameraRigFunctions_eventActivatePersistentVisualCameraRig_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UActivateCameraRigFunctions_ActivatePersistentVisualCameraRig_Statics::NewProp_CameraRig = { "CameraRig", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ActivateCameraRigFunctions_eventActivatePersistentVisualCameraRig_Parms, CameraRig), Z_Construct_UClass_UCameraRigAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActivateCameraRigFunctions_ActivatePersistentVisualCameraRig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActivateCameraRigFunctions_ActivatePersistentVisualCameraRig_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActivateCameraRigFunctions_ActivatePersistentVisualCameraRig_Statics::NewProp_PlayerController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActivateCameraRigFunctions_ActivatePersistentVisualCameraRig_Statics::NewProp_CameraRig,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UActivateCameraRigFunctions_ActivatePersistentVisualCameraRig_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UActivateCameraRigFunctions_ActivatePersistentVisualCameraRig_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActivateCameraRigFunctions, nullptr, "ActivatePersistentVisualCameraRig", nullptr, nullptr, Z_Construct_UFunction_UActivateCameraRigFunctions_ActivatePersistentVisualCameraRig_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActivateCameraRigFunctions_ActivatePersistentVisualCameraRig_Statics::PropPointers), sizeof(Z_Construct_UFunction_UActivateCameraRigFunctions_ActivatePersistentVisualCameraRig_Statics::ActivateCameraRigFunctions_eventActivatePersistentVisualCameraRig_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UActivateCameraRigFunctions_ActivatePersistentVisualCameraRig_Statics::Function_MetaDataParams), Z_Construct_UFunction_UActivateCameraRigFunctions_ActivatePersistentVisualCameraRig_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UActivateCameraRigFunctions_ActivatePersistentVisualCameraRig_Statics::ActivateCameraRigFunctions_eventActivatePersistentVisualCameraRig_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UActivateCameraRigFunctions_ActivatePersistentVisualCameraRig()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UActivateCameraRigFunctions_ActivatePersistentVisualCameraRig_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UActivateCameraRigFunctions::execActivatePersistentVisualCameraRig)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
	P_GET_OBJECT(UCameraRigAsset,Z_Param_CameraRig);
	P_FINISH;
	P_NATIVE_BEGIN;
	UActivateCameraRigFunctions::ActivatePersistentVisualCameraRig(Z_Param_WorldContextObject,Z_Param_PlayerController,Z_Param_CameraRig);
	P_NATIVE_END;
}
// End Class UActivateCameraRigFunctions Function ActivatePersistentVisualCameraRig

// Begin Class UActivateCameraRigFunctions
void UActivateCameraRigFunctions::StaticRegisterNativesUActivateCameraRigFunctions()
{
	UClass* Class = UActivateCameraRigFunctions::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ActivatePersistentBaseCameraRig", &UActivateCameraRigFunctions::execActivatePersistentBaseCameraRig },
		{ "ActivatePersistentGlobalCameraRig", &UActivateCameraRigFunctions::execActivatePersistentGlobalCameraRig },
		{ "ActivatePersistentVisualCameraRig", &UActivateCameraRigFunctions::execActivatePersistentVisualCameraRig },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UActivateCameraRigFunctions);
UClass* Z_Construct_UClass_UActivateCameraRigFunctions_NoRegister()
{
	return UActivateCameraRigFunctions::StaticClass();
}
struct Z_Construct_UClass_UActivateCameraRigFunctions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Blueprint functions for activating camera rigs in the base/global/visual layers.\n *\n * These camera rigs run with a global, shared evaluation context that doesn't provide any\n * meaningful initial result. They are activated on the camera system found to be running\n * on the given player controller.\n */" },
		{ "IncludePath", "GameFramework/ActivateCameraRigFunctions.h" },
		{ "ModuleRelativePath", "Public/GameFramework/ActivateCameraRigFunctions.h" },
		{ "ToolTip", "Blueprint functions for activating camera rigs in the base/global/visual layers.\n\nThese camera rigs run with a global, shared evaluation context that doesn't provide any\nmeaningful initial result. They are activated on the camera system found to be running\non the given player controller." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UActivateCameraRigFunctions_ActivatePersistentBaseCameraRig, "ActivatePersistentBaseCameraRig" }, // 762271251
		{ &Z_Construct_UFunction_UActivateCameraRigFunctions_ActivatePersistentGlobalCameraRig, "ActivatePersistentGlobalCameraRig" }, // 2799281967
		{ &Z_Construct_UFunction_UActivateCameraRigFunctions_ActivatePersistentVisualCameraRig, "ActivatePersistentVisualCameraRig" }, // 943173959
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActivateCameraRigFunctions>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UActivateCameraRigFunctions_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayCameras,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UActivateCameraRigFunctions_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UActivateCameraRigFunctions_Statics::ClassParams = {
	&UActivateCameraRigFunctions::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UActivateCameraRigFunctions_Statics::Class_MetaDataParams), Z_Construct_UClass_UActivateCameraRigFunctions_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UActivateCameraRigFunctions()
{
	if (!Z_Registration_Info_UClass_UActivateCameraRigFunctions.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UActivateCameraRigFunctions.OuterSingleton, Z_Construct_UClass_UActivateCameraRigFunctions_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UActivateCameraRigFunctions.OuterSingleton;
}
template<> GAMEPLAYCAMERAS_API UClass* StaticClass<UActivateCameraRigFunctions>()
{
	return UActivateCameraRigFunctions::StaticClass();
}
UActivateCameraRigFunctions::UActivateCameraRigFunctions(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UActivateCameraRigFunctions);
UActivateCameraRigFunctions::~UActivateCameraRigFunctions() {}
// End Class UActivateCameraRigFunctions

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_ActivateCameraRigFunctions_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UActivateCameraRigFunctions, UActivateCameraRigFunctions::StaticClass, TEXT("UActivateCameraRigFunctions"), &Z_Registration_Info_UClass_UActivateCameraRigFunctions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UActivateCameraRigFunctions), 1684425691U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_ActivateCameraRigFunctions_h_3636410865(TEXT("/Script/GameplayCameras"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_ActivateCameraRigFunctions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_ActivateCameraRigFunctions_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
