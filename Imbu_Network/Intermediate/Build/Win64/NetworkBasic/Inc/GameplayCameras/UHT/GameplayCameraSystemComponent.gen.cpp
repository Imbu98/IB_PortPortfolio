// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayCameras/Public/GameFramework/GameplayCameraSystemComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayCameraSystemComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBillboardComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAutoReceiveInput();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UGameplayCameraSystemComponent();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UGameplayCameraSystemComponent_NoRegister();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UGameplayCameraSystemHost_NoRegister();
UPackage* Z_Construct_UPackage__Script_GameplayCameras();
// End Cross Module References

// Begin Class UGameplayCameraSystemComponent Function ActivateCameraSystemForPlayerController
struct Z_Construct_UFunction_UGameplayCameraSystemComponent_ActivateCameraSystemForPlayerController_Statics
{
	struct GameplayCameraSystemComponent_eventActivateCameraSystemForPlayerController_Parms
	{
		APlayerController* PlayerController;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Sets this component's actor as the view target for the given player. */" },
		{ "ModuleRelativePath", "Public/GameFramework/GameplayCameraSystemComponent.h" },
		{ "ToolTip", "Sets this component's actor as the view target for the given player." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayCameraSystemComponent_ActivateCameraSystemForPlayerController_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameplayCameraSystemComponent_eventActivateCameraSystemForPlayerController_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayCameraSystemComponent_ActivateCameraSystemForPlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayCameraSystemComponent_ActivateCameraSystemForPlayerController_Statics::NewProp_PlayerController,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayCameraSystemComponent_ActivateCameraSystemForPlayerController_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayCameraSystemComponent_ActivateCameraSystemForPlayerController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayCameraSystemComponent, nullptr, "ActivateCameraSystemForPlayerController", nullptr, nullptr, Z_Construct_UFunction_UGameplayCameraSystemComponent_ActivateCameraSystemForPlayerController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayCameraSystemComponent_ActivateCameraSystemForPlayerController_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGameplayCameraSystemComponent_ActivateCameraSystemForPlayerController_Statics::GameplayCameraSystemComponent_eventActivateCameraSystemForPlayerController_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayCameraSystemComponent_ActivateCameraSystemForPlayerController_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameplayCameraSystemComponent_ActivateCameraSystemForPlayerController_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGameplayCameraSystemComponent_ActivateCameraSystemForPlayerController_Statics::GameplayCameraSystemComponent_eventActivateCameraSystemForPlayerController_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGameplayCameraSystemComponent_ActivateCameraSystemForPlayerController()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameplayCameraSystemComponent_ActivateCameraSystemForPlayerController_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGameplayCameraSystemComponent::execActivateCameraSystemForPlayerController)
{
	P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ActivateCameraSystemForPlayerController(Z_Param_PlayerController);
	P_NATIVE_END;
}
// End Class UGameplayCameraSystemComponent Function ActivateCameraSystemForPlayerController

// Begin Class UGameplayCameraSystemComponent Function ActivateCameraSystemForPlayerIndex
struct Z_Construct_UFunction_UGameplayCameraSystemComponent_ActivateCameraSystemForPlayerIndex_Statics
{
	struct GameplayCameraSystemComponent_eventActivateCameraSystemForPlayerIndex_Parms
	{
		int32 PlayerIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Sets this component's actor as the view target for the given player. */" },
		{ "ModuleRelativePath", "Public/GameFramework/GameplayCameraSystemComponent.h" },
		{ "ToolTip", "Sets this component's actor as the view target for the given player." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGameplayCameraSystemComponent_ActivateCameraSystemForPlayerIndex_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameplayCameraSystemComponent_eventActivateCameraSystemForPlayerIndex_Parms, PlayerIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayCameraSystemComponent_ActivateCameraSystemForPlayerIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayCameraSystemComponent_ActivateCameraSystemForPlayerIndex_Statics::NewProp_PlayerIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayCameraSystemComponent_ActivateCameraSystemForPlayerIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayCameraSystemComponent_ActivateCameraSystemForPlayerIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayCameraSystemComponent, nullptr, "ActivateCameraSystemForPlayerIndex", nullptr, nullptr, Z_Construct_UFunction_UGameplayCameraSystemComponent_ActivateCameraSystemForPlayerIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayCameraSystemComponent_ActivateCameraSystemForPlayerIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGameplayCameraSystemComponent_ActivateCameraSystemForPlayerIndex_Statics::GameplayCameraSystemComponent_eventActivateCameraSystemForPlayerIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayCameraSystemComponent_ActivateCameraSystemForPlayerIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameplayCameraSystemComponent_ActivateCameraSystemForPlayerIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGameplayCameraSystemComponent_ActivateCameraSystemForPlayerIndex_Statics::GameplayCameraSystemComponent_eventActivateCameraSystemForPlayerIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGameplayCameraSystemComponent_ActivateCameraSystemForPlayerIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameplayCameraSystemComponent_ActivateCameraSystemForPlayerIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGameplayCameraSystemComponent::execActivateCameraSystemForPlayerIndex)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_PlayerIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ActivateCameraSystemForPlayerIndex(Z_Param_PlayerIndex);
	P_NATIVE_END;
}
// End Class UGameplayCameraSystemComponent Function ActivateCameraSystemForPlayerIndex

// Begin Class UGameplayCameraSystemComponent Function DeactivateCameraSystem
struct Z_Construct_UFunction_UGameplayCameraSystemComponent_DeactivateCameraSystem_Statics
{
	struct GameplayCameraSystemComponent_eventDeactivateCameraSystem_Parms
	{
		AActor* NextViewTarget;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Removes this component's actor from being the view target. */" },
		{ "CPP_Default_NextViewTarget", "None" },
		{ "ModuleRelativePath", "Public/GameFramework/GameplayCameraSystemComponent.h" },
		{ "ToolTip", "Removes this component's actor from being the view target." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NextViewTarget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayCameraSystemComponent_DeactivateCameraSystem_Statics::NewProp_NextViewTarget = { "NextViewTarget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameplayCameraSystemComponent_eventDeactivateCameraSystem_Parms, NextViewTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayCameraSystemComponent_DeactivateCameraSystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayCameraSystemComponent_DeactivateCameraSystem_Statics::NewProp_NextViewTarget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayCameraSystemComponent_DeactivateCameraSystem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayCameraSystemComponent_DeactivateCameraSystem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayCameraSystemComponent, nullptr, "DeactivateCameraSystem", nullptr, nullptr, Z_Construct_UFunction_UGameplayCameraSystemComponent_DeactivateCameraSystem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayCameraSystemComponent_DeactivateCameraSystem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGameplayCameraSystemComponent_DeactivateCameraSystem_Statics::GameplayCameraSystemComponent_eventDeactivateCameraSystem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayCameraSystemComponent_DeactivateCameraSystem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameplayCameraSystemComponent_DeactivateCameraSystem_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGameplayCameraSystemComponent_DeactivateCameraSystem_Statics::GameplayCameraSystemComponent_eventDeactivateCameraSystem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGameplayCameraSystemComponent_DeactivateCameraSystem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameplayCameraSystemComponent_DeactivateCameraSystem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGameplayCameraSystemComponent::execDeactivateCameraSystem)
{
	P_GET_OBJECT(AActor,Z_Param_NextViewTarget);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DeactivateCameraSystem(Z_Param_NextViewTarget);
	P_NATIVE_END;
}
// End Class UGameplayCameraSystemComponent Function DeactivateCameraSystem

// Begin Class UGameplayCameraSystemComponent Function IsCameraSystemActiveForPlayController
struct Z_Construct_UFunction_UGameplayCameraSystemComponent_IsCameraSystemActiveForPlayController_Statics
{
	struct GameplayCameraSystemComponent_eventIsCameraSystemActiveForPlayController_Parms
	{
		APlayerController* PlayerController;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Returns whether this component's actor is set as the view target for the given player. */" },
		{ "ModuleRelativePath", "Public/GameFramework/GameplayCameraSystemComponent.h" },
		{ "ToolTip", "Returns whether this component's actor is set as the view target for the given player." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayCameraSystemComponent_IsCameraSystemActiveForPlayController_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameplayCameraSystemComponent_eventIsCameraSystemActiveForPlayController_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UGameplayCameraSystemComponent_IsCameraSystemActiveForPlayController_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((GameplayCameraSystemComponent_eventIsCameraSystemActiveForPlayController_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameplayCameraSystemComponent_IsCameraSystemActiveForPlayController_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GameplayCameraSystemComponent_eventIsCameraSystemActiveForPlayController_Parms), &Z_Construct_UFunction_UGameplayCameraSystemComponent_IsCameraSystemActiveForPlayController_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayCameraSystemComponent_IsCameraSystemActiveForPlayController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayCameraSystemComponent_IsCameraSystemActiveForPlayController_Statics::NewProp_PlayerController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayCameraSystemComponent_IsCameraSystemActiveForPlayController_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayCameraSystemComponent_IsCameraSystemActiveForPlayController_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayCameraSystemComponent_IsCameraSystemActiveForPlayController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayCameraSystemComponent, nullptr, "IsCameraSystemActiveForPlayController", nullptr, nullptr, Z_Construct_UFunction_UGameplayCameraSystemComponent_IsCameraSystemActiveForPlayController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayCameraSystemComponent_IsCameraSystemActiveForPlayController_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGameplayCameraSystemComponent_IsCameraSystemActiveForPlayController_Statics::GameplayCameraSystemComponent_eventIsCameraSystemActiveForPlayController_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayCameraSystemComponent_IsCameraSystemActiveForPlayController_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameplayCameraSystemComponent_IsCameraSystemActiveForPlayController_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGameplayCameraSystemComponent_IsCameraSystemActiveForPlayController_Statics::GameplayCameraSystemComponent_eventIsCameraSystemActiveForPlayController_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGameplayCameraSystemComponent_IsCameraSystemActiveForPlayController()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameplayCameraSystemComponent_IsCameraSystemActiveForPlayController_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGameplayCameraSystemComponent::execIsCameraSystemActiveForPlayController)
{
	P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsCameraSystemActiveForPlayController(Z_Param_PlayerController);
	P_NATIVE_END;
}
// End Class UGameplayCameraSystemComponent Function IsCameraSystemActiveForPlayController

// Begin Class UGameplayCameraSystemComponent
void UGameplayCameraSystemComponent::StaticRegisterNativesUGameplayCameraSystemComponent()
{
	UClass* Class = UGameplayCameraSystemComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ActivateCameraSystemForPlayerController", &UGameplayCameraSystemComponent::execActivateCameraSystemForPlayerController },
		{ "ActivateCameraSystemForPlayerIndex", &UGameplayCameraSystemComponent::execActivateCameraSystemForPlayerIndex },
		{ "DeactivateCameraSystem", &UGameplayCameraSystemComponent::execDeactivateCameraSystem },
		{ "IsCameraSystemActiveForPlayController", &UGameplayCameraSystemComponent::execIsCameraSystemActiveForPlayController },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameplayCameraSystemComponent);
UClass* Z_Construct_UClass_UGameplayCameraSystemComponent_NoRegister()
{
	return UGameplayCameraSystemComponent::StaticClass();
}
struct Z_Construct_UClass_UGameplayCameraSystemComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Camera" },
		{ "Comment", "/**\n * A component that hosts a camera system.\n */" },
		{ "HideCategories", "Mobility Rendering LOD Trigger PhysicsVolume" },
		{ "IncludePath", "GameFramework/GameplayCameraSystemComponent.h" },
		{ "ModuleRelativePath", "Public/GameFramework/GameplayCameraSystemComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "A component that hosts a camera system." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AutoActivateForPlayer_MetaData[] = {
		{ "Category", "Activation" },
		{ "Comment", "/**\n\x09 * If AutoActivate is set, auto-activates the camera system for the given player.\n\x09 * This sets this actor as the view target, and is equivalent to calling ActivateCameraSystem on BeginPlay.\n\x09 */" },
		{ "EditCondition", "bAutoActivate" },
		{ "ModuleRelativePath", "Public/GameFramework/GameplayCameraSystemComponent.h" },
		{ "ToolTip", "If AutoActivate is set, auto-activates the camera system for the given player.\nThis sets this actor as the view target, and is equivalent to calling ActivateCameraSystem on BeginPlay." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSetPlayerControllerRotation_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/**\n\x09 * If enabled, sets the evaluated camera orientation as the player controller rotation every frame.\n\x09 * This is set on the player controller that this component was activated for.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/GameplayCameraSystemComponent.h" },
		{ "ToolTip", "If enabled, sets the evaluated camera orientation as the player controller rotation every frame.\nThis is set on the player controller that this component was activated for." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraSystemHost_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameFramework/GameplayCameraSystemComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeakPlayerController_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameFramework/GameplayCameraSystemComponent.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EditorSpriteTextureScale_MetaData[] = {
		{ "Comment", "/** Sprite scaling for the editor. */" },
		{ "ModuleRelativePath", "Public/GameFramework/GameplayCameraSystemComponent.h" },
		{ "ToolTip", "Sprite scaling for the editor." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EditorSpriteComponent_MetaData[] = {
		{ "Comment", "/** Sprite component for the editor. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GameFramework/GameplayCameraSystemComponent.h" },
		{ "ToolTip", "Sprite component for the editor." },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_AutoActivateForPlayer;
	static void NewProp_bSetPlayerControllerRotation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSetPlayerControllerRotation;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraSystemHost;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_WeakPlayerController;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_EditorSpriteTextureScale;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EditorSpriteComponent;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGameplayCameraSystemComponent_ActivateCameraSystemForPlayerController, "ActivateCameraSystemForPlayerController" }, // 2567619971
		{ &Z_Construct_UFunction_UGameplayCameraSystemComponent_ActivateCameraSystemForPlayerIndex, "ActivateCameraSystemForPlayerIndex" }, // 1636675649
		{ &Z_Construct_UFunction_UGameplayCameraSystemComponent_DeactivateCameraSystem, "DeactivateCameraSystem" }, // 1114767465
		{ &Z_Construct_UFunction_UGameplayCameraSystemComponent_IsCameraSystemActiveForPlayController, "IsCameraSystemActiveForPlayController" }, // 4007795027
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameplayCameraSystemComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGameplayCameraSystemComponent_Statics::NewProp_AutoActivateForPlayer = { "AutoActivateForPlayer", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameplayCameraSystemComponent, AutoActivateForPlayer), Z_Construct_UEnum_Engine_EAutoReceiveInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AutoActivateForPlayer_MetaData), NewProp_AutoActivateForPlayer_MetaData) }; // 1625585255
void Z_Construct_UClass_UGameplayCameraSystemComponent_Statics::NewProp_bSetPlayerControllerRotation_SetBit(void* Obj)
{
	((UGameplayCameraSystemComponent*)Obj)->bSetPlayerControllerRotation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGameplayCameraSystemComponent_Statics::NewProp_bSetPlayerControllerRotation = { "bSetPlayerControllerRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGameplayCameraSystemComponent), &Z_Construct_UClass_UGameplayCameraSystemComponent_Statics::NewProp_bSetPlayerControllerRotation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSetPlayerControllerRotation_MetaData), NewProp_bSetPlayerControllerRotation_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameplayCameraSystemComponent_Statics::NewProp_CameraSystemHost = { "CameraSystemHost", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameplayCameraSystemComponent, CameraSystemHost), Z_Construct_UClass_UGameplayCameraSystemHost_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraSystemHost_MetaData), NewProp_CameraSystemHost_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UGameplayCameraSystemComponent_Statics::NewProp_WeakPlayerController = { "WeakPlayerController", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameplayCameraSystemComponent, WeakPlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeakPlayerController_MetaData), NewProp_WeakPlayerController_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGameplayCameraSystemComponent_Statics::NewProp_EditorSpriteTextureScale = { "EditorSpriteTextureScale", nullptr, (EPropertyFlags)0x0040000800002000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameplayCameraSystemComponent, EditorSpriteTextureScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EditorSpriteTextureScale_MetaData), NewProp_EditorSpriteTextureScale_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameplayCameraSystemComponent_Statics::NewProp_EditorSpriteComponent = { "EditorSpriteComponent", nullptr, (EPropertyFlags)0x0144000800080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameplayCameraSystemComponent, EditorSpriteComponent), Z_Construct_UClass_UBillboardComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EditorSpriteComponent_MetaData), NewProp_EditorSpriteComponent_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameplayCameraSystemComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayCameraSystemComponent_Statics::NewProp_AutoActivateForPlayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayCameraSystemComponent_Statics::NewProp_bSetPlayerControllerRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayCameraSystemComponent_Statics::NewProp_CameraSystemHost,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayCameraSystemComponent_Statics::NewProp_WeakPlayerController,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayCameraSystemComponent_Statics::NewProp_EditorSpriteTextureScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayCameraSystemComponent_Statics::NewProp_EditorSpriteComponent,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayCameraSystemComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGameplayCameraSystemComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USceneComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayCameras,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayCameraSystemComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameplayCameraSystemComponent_Statics::ClassParams = {
	&UGameplayCameraSystemComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UGameplayCameraSystemComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayCameraSystemComponent_Statics::PropPointers),
	0,
	0x00A800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayCameraSystemComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UGameplayCameraSystemComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGameplayCameraSystemComponent()
{
	if (!Z_Registration_Info_UClass_UGameplayCameraSystemComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameplayCameraSystemComponent.OuterSingleton, Z_Construct_UClass_UGameplayCameraSystemComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGameplayCameraSystemComponent.OuterSingleton;
}
template<> GAMEPLAYCAMERAS_API UClass* StaticClass<UGameplayCameraSystemComponent>()
{
	return UGameplayCameraSystemComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGameplayCameraSystemComponent);
UGameplayCameraSystemComponent::~UGameplayCameraSystemComponent() {}
// End Class UGameplayCameraSystemComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_GameplayCameraSystemComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGameplayCameraSystemComponent, UGameplayCameraSystemComponent::StaticClass, TEXT("UGameplayCameraSystemComponent"), &Z_Registration_Info_UClass_UGameplayCameraSystemComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameplayCameraSystemComponent), 3526761907U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_GameplayCameraSystemComponent_h_2027165053(TEXT("/Script/GameplayCameras"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_GameplayCameraSystemComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_GameplayCameraSystemComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
