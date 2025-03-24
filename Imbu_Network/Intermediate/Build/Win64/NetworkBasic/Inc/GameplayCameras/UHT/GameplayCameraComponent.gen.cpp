// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayCameras/Public/GameFramework/GameplayCameraComponent.h"
#include "GameplayCameras/Public/GameFramework/BlueprintCameraPose.h"
#include "GameplayCameras/Public/GameFramework/BlueprintCameraVariableTable.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayCameraComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAutoReceiveInput();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UCameraAsset_NoRegister();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UGameplayCameraComponent();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UGameplayCameraComponent_NoRegister();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UGameplayCameraSystemHost_NoRegister();
GAMEPLAYCAMERAS_API UScriptStruct* Z_Construct_UScriptStruct_FBlueprintCameraPose();
GAMEPLAYCAMERAS_API UScriptStruct* Z_Construct_UScriptStruct_FBlueprintCameraVariableTable();
UPackage* Z_Construct_UPackage__Script_GameplayCameras();
// End Cross Module References

// Begin Class UGameplayCameraComponent Function ActivateCameraForPlayerController
struct Z_Construct_UFunction_UGameplayCameraComponent_ActivateCameraForPlayerController_Statics
{
	struct GameplayCameraComponent_eventActivateCameraForPlayerController_Parms
	{
		APlayerController* PlayerController;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Activates the camera for the given player. */" },
		{ "ModuleRelativePath", "Public/GameFramework/GameplayCameraComponent.h" },
		{ "ToolTip", "Activates the camera for the given player." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayCameraComponent_ActivateCameraForPlayerController_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameplayCameraComponent_eventActivateCameraForPlayerController_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayCameraComponent_ActivateCameraForPlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayCameraComponent_ActivateCameraForPlayerController_Statics::NewProp_PlayerController,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayCameraComponent_ActivateCameraForPlayerController_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayCameraComponent_ActivateCameraForPlayerController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayCameraComponent, nullptr, "ActivateCameraForPlayerController", nullptr, nullptr, Z_Construct_UFunction_UGameplayCameraComponent_ActivateCameraForPlayerController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayCameraComponent_ActivateCameraForPlayerController_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGameplayCameraComponent_ActivateCameraForPlayerController_Statics::GameplayCameraComponent_eventActivateCameraForPlayerController_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayCameraComponent_ActivateCameraForPlayerController_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameplayCameraComponent_ActivateCameraForPlayerController_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGameplayCameraComponent_ActivateCameraForPlayerController_Statics::GameplayCameraComponent_eventActivateCameraForPlayerController_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGameplayCameraComponent_ActivateCameraForPlayerController()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameplayCameraComponent_ActivateCameraForPlayerController_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGameplayCameraComponent::execActivateCameraForPlayerController)
{
	P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ActivateCameraForPlayerController(Z_Param_PlayerController);
	P_NATIVE_END;
}
// End Class UGameplayCameraComponent Function ActivateCameraForPlayerController

// Begin Class UGameplayCameraComponent Function ActivateCameraForPlayerIndex
struct Z_Construct_UFunction_UGameplayCameraComponent_ActivateCameraForPlayerIndex_Statics
{
	struct GameplayCameraComponent_eventActivateCameraForPlayerIndex_Parms
	{
		int32 PlayerIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Activates the camera for the given player. */" },
		{ "ModuleRelativePath", "Public/GameFramework/GameplayCameraComponent.h" },
		{ "ToolTip", "Activates the camera for the given player." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGameplayCameraComponent_ActivateCameraForPlayerIndex_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameplayCameraComponent_eventActivateCameraForPlayerIndex_Parms, PlayerIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayCameraComponent_ActivateCameraForPlayerIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayCameraComponent_ActivateCameraForPlayerIndex_Statics::NewProp_PlayerIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayCameraComponent_ActivateCameraForPlayerIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayCameraComponent_ActivateCameraForPlayerIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayCameraComponent, nullptr, "ActivateCameraForPlayerIndex", nullptr, nullptr, Z_Construct_UFunction_UGameplayCameraComponent_ActivateCameraForPlayerIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayCameraComponent_ActivateCameraForPlayerIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGameplayCameraComponent_ActivateCameraForPlayerIndex_Statics::GameplayCameraComponent_eventActivateCameraForPlayerIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayCameraComponent_ActivateCameraForPlayerIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameplayCameraComponent_ActivateCameraForPlayerIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGameplayCameraComponent_ActivateCameraForPlayerIndex_Statics::GameplayCameraComponent_eventActivateCameraForPlayerIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGameplayCameraComponent_ActivateCameraForPlayerIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameplayCameraComponent_ActivateCameraForPlayerIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGameplayCameraComponent::execActivateCameraForPlayerIndex)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_PlayerIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ActivateCameraForPlayerIndex(Z_Param_PlayerIndex);
	P_NATIVE_END;
}
// End Class UGameplayCameraComponent Function ActivateCameraForPlayerIndex

// Begin Class UGameplayCameraComponent Function DeactivateCamera
struct Z_Construct_UFunction_UGameplayCameraComponent_DeactivateCamera_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Deactivates the camera for the last player it was activated for. */" },
		{ "ModuleRelativePath", "Public/GameFramework/GameplayCameraComponent.h" },
		{ "ToolTip", "Deactivates the camera for the last player it was activated for." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayCameraComponent_DeactivateCamera_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayCameraComponent, nullptr, "DeactivateCamera", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayCameraComponent_DeactivateCamera_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameplayCameraComponent_DeactivateCamera_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UGameplayCameraComponent_DeactivateCamera()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameplayCameraComponent_DeactivateCamera_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGameplayCameraComponent::execDeactivateCamera)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DeactivateCamera();
	P_NATIVE_END;
}
// End Class UGameplayCameraComponent Function DeactivateCamera

// Begin Class UGameplayCameraComponent Function GetInitialPose
struct Z_Construct_UFunction_UGameplayCameraComponent_GetInitialPose_Statics
{
	struct GameplayCameraComponent_eventGetInitialPose_Parms
	{
		FBlueprintCameraPose ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Gets the initial camera pose for this component's camera evaluation context. */" },
		{ "ModuleRelativePath", "Public/GameFramework/GameplayCameraComponent.h" },
		{ "ToolTip", "Gets the initial camera pose for this component's camera evaluation context." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayCameraComponent_GetInitialPose_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameplayCameraComponent_eventGetInitialPose_Parms, ReturnValue), Z_Construct_UScriptStruct_FBlueprintCameraPose, METADATA_PARAMS(0, nullptr) }; // 3605729677
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayCameraComponent_GetInitialPose_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayCameraComponent_GetInitialPose_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayCameraComponent_GetInitialPose_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayCameraComponent_GetInitialPose_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayCameraComponent, nullptr, "GetInitialPose", nullptr, nullptr, Z_Construct_UFunction_UGameplayCameraComponent_GetInitialPose_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayCameraComponent_GetInitialPose_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGameplayCameraComponent_GetInitialPose_Statics::GameplayCameraComponent_eventGetInitialPose_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayCameraComponent_GetInitialPose_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameplayCameraComponent_GetInitialPose_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGameplayCameraComponent_GetInitialPose_Statics::GameplayCameraComponent_eventGetInitialPose_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGameplayCameraComponent_GetInitialPose()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameplayCameraComponent_GetInitialPose_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGameplayCameraComponent::execGetInitialPose)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FBlueprintCameraPose*)Z_Param__Result=P_THIS->GetInitialPose();
	P_NATIVE_END;
}
// End Class UGameplayCameraComponent Function GetInitialPose

// Begin Class UGameplayCameraComponent Function GetInitialVariableTable
struct Z_Construct_UFunction_UGameplayCameraComponent_GetInitialVariableTable_Statics
{
	struct GameplayCameraComponent_eventGetInitialVariableTable_Parms
	{
		FBlueprintCameraVariableTable ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Gets the initial camera variable table for this component's camera evaluation context. */" },
		{ "ModuleRelativePath", "Public/GameFramework/GameplayCameraComponent.h" },
		{ "ToolTip", "Gets the initial camera variable table for this component's camera evaluation context." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayCameraComponent_GetInitialVariableTable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameplayCameraComponent_eventGetInitialVariableTable_Parms, ReturnValue), Z_Construct_UScriptStruct_FBlueprintCameraVariableTable, METADATA_PARAMS(0, nullptr) }; // 2718450583
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayCameraComponent_GetInitialVariableTable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayCameraComponent_GetInitialVariableTable_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayCameraComponent_GetInitialVariableTable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayCameraComponent_GetInitialVariableTable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayCameraComponent, nullptr, "GetInitialVariableTable", nullptr, nullptr, Z_Construct_UFunction_UGameplayCameraComponent_GetInitialVariableTable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayCameraComponent_GetInitialVariableTable_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGameplayCameraComponent_GetInitialVariableTable_Statics::GameplayCameraComponent_eventGetInitialVariableTable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayCameraComponent_GetInitialVariableTable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameplayCameraComponent_GetInitialVariableTable_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGameplayCameraComponent_GetInitialVariableTable_Statics::GameplayCameraComponent_eventGetInitialVariableTable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGameplayCameraComponent_GetInitialVariableTable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameplayCameraComponent_GetInitialVariableTable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGameplayCameraComponent::execGetInitialVariableTable)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FBlueprintCameraVariableTable*)Z_Param__Result=P_THIS->GetInitialVariableTable();
	P_NATIVE_END;
}
// End Class UGameplayCameraComponent Function GetInitialVariableTable

// Begin Class UGameplayCameraComponent Function SetInitialPose
struct Z_Construct_UFunction_UGameplayCameraComponent_SetInitialPose_Statics
{
	struct GameplayCameraComponent_eventSetInitialPose_Parms
	{
		FBlueprintCameraPose CameraPose;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Sets the initial camera pose for this component's camera evaluation context. */" },
		{ "ModuleRelativePath", "Public/GameFramework/GameplayCameraComponent.h" },
		{ "ToolTip", "Sets the initial camera pose for this component's camera evaluation context." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraPose_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CameraPose;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayCameraComponent_SetInitialPose_Statics::NewProp_CameraPose = { "CameraPose", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameplayCameraComponent_eventSetInitialPose_Parms, CameraPose), Z_Construct_UScriptStruct_FBlueprintCameraPose, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraPose_MetaData), NewProp_CameraPose_MetaData) }; // 3605729677
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayCameraComponent_SetInitialPose_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayCameraComponent_SetInitialPose_Statics::NewProp_CameraPose,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayCameraComponent_SetInitialPose_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayCameraComponent_SetInitialPose_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayCameraComponent, nullptr, "SetInitialPose", nullptr, nullptr, Z_Construct_UFunction_UGameplayCameraComponent_SetInitialPose_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayCameraComponent_SetInitialPose_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGameplayCameraComponent_SetInitialPose_Statics::GameplayCameraComponent_eventSetInitialPose_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayCameraComponent_SetInitialPose_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameplayCameraComponent_SetInitialPose_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGameplayCameraComponent_SetInitialPose_Statics::GameplayCameraComponent_eventSetInitialPose_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGameplayCameraComponent_SetInitialPose()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameplayCameraComponent_SetInitialPose_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGameplayCameraComponent::execSetInitialPose)
{
	P_GET_STRUCT_REF(FBlueprintCameraPose,Z_Param_Out_CameraPose);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetInitialPose(Z_Param_Out_CameraPose);
	P_NATIVE_END;
}
// End Class UGameplayCameraComponent Function SetInitialPose

// Begin Class UGameplayCameraComponent
void UGameplayCameraComponent::StaticRegisterNativesUGameplayCameraComponent()
{
	UClass* Class = UGameplayCameraComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ActivateCameraForPlayerController", &UGameplayCameraComponent::execActivateCameraForPlayerController },
		{ "ActivateCameraForPlayerIndex", &UGameplayCameraComponent::execActivateCameraForPlayerIndex },
		{ "DeactivateCamera", &UGameplayCameraComponent::execDeactivateCamera },
		{ "GetInitialPose", &UGameplayCameraComponent::execGetInitialPose },
		{ "GetInitialVariableTable", &UGameplayCameraComponent::execGetInitialVariableTable },
		{ "SetInitialPose", &UGameplayCameraComponent::execSetInitialPose },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameplayCameraComponent);
UClass* Z_Construct_UClass_UGameplayCameraComponent_NoRegister()
{
	return UGameplayCameraComponent::StaticClass();
}
struct Z_Construct_UClass_UGameplayCameraComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Camera" },
		{ "Comment", "/**\n * A component that can run a camera asset inside its own camera evaluation context.\n */" },
		{ "HideCategories", "Mobility Rendering LOD Trigger PhysicsVolume" },
		{ "IncludePath", "GameFramework/GameplayCameraComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/GameFramework/GameplayCameraComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "A component that can run a camera asset inside its own camera evaluation context." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** The camera asset to run. */" },
		{ "ModuleRelativePath", "Public/GameFramework/GameplayCameraComponent.h" },
		{ "ToolTip", "The camera asset to run." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AutoActivateForPlayer_MetaData[] = {
		{ "Category", "Activation" },
		{ "Comment", "/**\n\x09 * If AutoActivate is set, auto-activates this component's camera for the given player.\n\x09 * This is equivalent to calling ActivateCamera on BeginPlay.\n\x09 */" },
		{ "EditCondition", "bAutoActivate" },
		{ "ModuleRelativePath", "Public/GameFramework/GameplayCameraComponent.h" },
		{ "ToolTip", "If AutoActivate is set, auto-activates this component's camera for the given player.\nThis is equivalent to calling ActivateCamera on BeginPlay." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraSystemHost_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameFramework/GameplayCameraComponent.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviewMesh_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameFramework/GameplayCameraComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviewMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GameFramework/GameplayCameraComponent.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Camera;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AutoActivateForPlayer;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraSystemHost;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PreviewMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PreviewMeshComponent;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGameplayCameraComponent_ActivateCameraForPlayerController, "ActivateCameraForPlayerController" }, // 375208276
		{ &Z_Construct_UFunction_UGameplayCameraComponent_ActivateCameraForPlayerIndex, "ActivateCameraForPlayerIndex" }, // 2274679208
		{ &Z_Construct_UFunction_UGameplayCameraComponent_DeactivateCamera, "DeactivateCamera" }, // 2191679704
		{ &Z_Construct_UFunction_UGameplayCameraComponent_GetInitialPose, "GetInitialPose" }, // 2429263272
		{ &Z_Construct_UFunction_UGameplayCameraComponent_GetInitialVariableTable, "GetInitialVariableTable" }, // 4123713242
		{ &Z_Construct_UFunction_UGameplayCameraComponent_SetInitialPose, "SetInitialPose" }, // 3319875611
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameplayCameraComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameplayCameraComponent_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameplayCameraComponent, Camera), Z_Construct_UClass_UCameraAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Camera_MetaData), NewProp_Camera_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGameplayCameraComponent_Statics::NewProp_AutoActivateForPlayer = { "AutoActivateForPlayer", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameplayCameraComponent, AutoActivateForPlayer), Z_Construct_UEnum_Engine_EAutoReceiveInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AutoActivateForPlayer_MetaData), NewProp_AutoActivateForPlayer_MetaData) }; // 1625585255
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameplayCameraComponent_Statics::NewProp_CameraSystemHost = { "CameraSystemHost", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameplayCameraComponent, CameraSystemHost), Z_Construct_UClass_UGameplayCameraSystemHost_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraSystemHost_MetaData), NewProp_CameraSystemHost_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameplayCameraComponent_Statics::NewProp_PreviewMesh = { "PreviewMesh", nullptr, (EPropertyFlags)0x0124080800002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameplayCameraComponent, PreviewMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviewMesh_MetaData), NewProp_PreviewMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameplayCameraComponent_Statics::NewProp_PreviewMeshComponent = { "PreviewMeshComponent", nullptr, (EPropertyFlags)0x0124080800082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameplayCameraComponent, PreviewMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviewMeshComponent_MetaData), NewProp_PreviewMeshComponent_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameplayCameraComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayCameraComponent_Statics::NewProp_Camera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayCameraComponent_Statics::NewProp_AutoActivateForPlayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayCameraComponent_Statics::NewProp_CameraSystemHost,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayCameraComponent_Statics::NewProp_PreviewMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayCameraComponent_Statics::NewProp_PreviewMeshComponent,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayCameraComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGameplayCameraComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USceneComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayCameras,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayCameraComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameplayCameraComponent_Statics::ClassParams = {
	&UGameplayCameraComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UGameplayCameraComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayCameraComponent_Statics::PropPointers),
	0,
	0x00A800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayCameraComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UGameplayCameraComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGameplayCameraComponent()
{
	if (!Z_Registration_Info_UClass_UGameplayCameraComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameplayCameraComponent.OuterSingleton, Z_Construct_UClass_UGameplayCameraComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGameplayCameraComponent.OuterSingleton;
}
template<> GAMEPLAYCAMERAS_API UClass* StaticClass<UGameplayCameraComponent>()
{
	return UGameplayCameraComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGameplayCameraComponent);
UGameplayCameraComponent::~UGameplayCameraComponent() {}
// End Class UGameplayCameraComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_GameplayCameraComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGameplayCameraComponent, UGameplayCameraComponent::StaticClass, TEXT("UGameplayCameraComponent"), &Z_Registration_Info_UClass_UGameplayCameraComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameplayCameraComponent), 4039968134U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_GameplayCameraComponent_h_1328163766(TEXT("/Script/GameplayCameras"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_GameplayCameraComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_GameplayCameraComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
