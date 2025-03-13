// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayCameras/Public/GameFramework/GameplayControlRotationComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayControlRotationComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAutoReceiveInput();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UGameplayCameraSystemHost_NoRegister();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UGameplayControlRotationComponent();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UGameplayControlRotationComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_GameplayCameras();
// End Cross Module References

// Begin Class UGameplayControlRotationComponent Function ActivateControlRotationManagementForPlayerController
struct Z_Construct_UFunction_UGameplayControlRotationComponent_ActivateControlRotationManagementForPlayerController_Statics
{
	struct GameplayControlRotationComponent_eventActivateControlRotationManagementForPlayerController_Parms
	{
		APlayerController* PlayerController;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Control Rotation" },
		{ "Comment", "/**\n\x09 * Activates management of a player controller's control rotation. The component will set\n\x09 * the control rotation every frame based on the latest camera system update.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/GameplayControlRotationComponent.h" },
		{ "ToolTip", "Activates management of a player controller's control rotation. The component will set\nthe control rotation every frame based on the latest camera system update." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayControlRotationComponent_ActivateControlRotationManagementForPlayerController_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameplayControlRotationComponent_eventActivateControlRotationManagementForPlayerController_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayControlRotationComponent_ActivateControlRotationManagementForPlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayControlRotationComponent_ActivateControlRotationManagementForPlayerController_Statics::NewProp_PlayerController,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayControlRotationComponent_ActivateControlRotationManagementForPlayerController_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayControlRotationComponent_ActivateControlRotationManagementForPlayerController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayControlRotationComponent, nullptr, "ActivateControlRotationManagementForPlayerController", nullptr, nullptr, Z_Construct_UFunction_UGameplayControlRotationComponent_ActivateControlRotationManagementForPlayerController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayControlRotationComponent_ActivateControlRotationManagementForPlayerController_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGameplayControlRotationComponent_ActivateControlRotationManagementForPlayerController_Statics::GameplayControlRotationComponent_eventActivateControlRotationManagementForPlayerController_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayControlRotationComponent_ActivateControlRotationManagementForPlayerController_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameplayControlRotationComponent_ActivateControlRotationManagementForPlayerController_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGameplayControlRotationComponent_ActivateControlRotationManagementForPlayerController_Statics::GameplayControlRotationComponent_eventActivateControlRotationManagementForPlayerController_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGameplayControlRotationComponent_ActivateControlRotationManagementForPlayerController()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameplayControlRotationComponent_ActivateControlRotationManagementForPlayerController_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGameplayControlRotationComponent::execActivateControlRotationManagementForPlayerController)
{
	P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ActivateControlRotationManagementForPlayerController(Z_Param_PlayerController);
	P_NATIVE_END;
}
// End Class UGameplayControlRotationComponent Function ActivateControlRotationManagementForPlayerController

// Begin Class UGameplayControlRotationComponent Function ActivateControlRotationManagementForPlayerIndex
struct Z_Construct_UFunction_UGameplayControlRotationComponent_ActivateControlRotationManagementForPlayerIndex_Statics
{
	struct GameplayControlRotationComponent_eventActivateControlRotationManagementForPlayerIndex_Parms
	{
		int32 PlayerIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Control Rotation" },
		{ "Comment", "/**\n\x09 * Activates management of a player controller's control rotation. The component will set\n\x09 * the control rotation every frame based on the latest camera system update.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/GameplayControlRotationComponent.h" },
		{ "ToolTip", "Activates management of a player controller's control rotation. The component will set\nthe control rotation every frame based on the latest camera system update." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGameplayControlRotationComponent_ActivateControlRotationManagementForPlayerIndex_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameplayControlRotationComponent_eventActivateControlRotationManagementForPlayerIndex_Parms, PlayerIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayControlRotationComponent_ActivateControlRotationManagementForPlayerIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayControlRotationComponent_ActivateControlRotationManagementForPlayerIndex_Statics::NewProp_PlayerIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayControlRotationComponent_ActivateControlRotationManagementForPlayerIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayControlRotationComponent_ActivateControlRotationManagementForPlayerIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayControlRotationComponent, nullptr, "ActivateControlRotationManagementForPlayerIndex", nullptr, nullptr, Z_Construct_UFunction_UGameplayControlRotationComponent_ActivateControlRotationManagementForPlayerIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayControlRotationComponent_ActivateControlRotationManagementForPlayerIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGameplayControlRotationComponent_ActivateControlRotationManagementForPlayerIndex_Statics::GameplayControlRotationComponent_eventActivateControlRotationManagementForPlayerIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayControlRotationComponent_ActivateControlRotationManagementForPlayerIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameplayControlRotationComponent_ActivateControlRotationManagementForPlayerIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGameplayControlRotationComponent_ActivateControlRotationManagementForPlayerIndex_Statics::GameplayControlRotationComponent_eventActivateControlRotationManagementForPlayerIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGameplayControlRotationComponent_ActivateControlRotationManagementForPlayerIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameplayControlRotationComponent_ActivateControlRotationManagementForPlayerIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGameplayControlRotationComponent::execActivateControlRotationManagementForPlayerIndex)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_PlayerIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ActivateControlRotationManagementForPlayerIndex(Z_Param_PlayerIndex);
	P_NATIVE_END;
}
// End Class UGameplayControlRotationComponent Function ActivateControlRotationManagementForPlayerIndex

// Begin Class UGameplayControlRotationComponent Function DeactivateControlRotationManagement
struct Z_Construct_UFunction_UGameplayControlRotationComponent_DeactivateControlRotationManagement_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Control Rotation" },
		{ "Comment", "/**\n\x09 * Deactivates management of a player controller's control rotation.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/GameplayControlRotationComponent.h" },
		{ "ToolTip", "Deactivates management of a player controller's control rotation." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayControlRotationComponent_DeactivateControlRotationManagement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayControlRotationComponent, nullptr, "DeactivateControlRotationManagement", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayControlRotationComponent_DeactivateControlRotationManagement_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameplayControlRotationComponent_DeactivateControlRotationManagement_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UGameplayControlRotationComponent_DeactivateControlRotationManagement()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameplayControlRotationComponent_DeactivateControlRotationManagement_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGameplayControlRotationComponent::execDeactivateControlRotationManagement)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DeactivateControlRotationManagement();
	P_NATIVE_END;
}
// End Class UGameplayControlRotationComponent Function DeactivateControlRotationManagement

// Begin Class UGameplayControlRotationComponent
void UGameplayControlRotationComponent::StaticRegisterNativesUGameplayControlRotationComponent()
{
	UClass* Class = UGameplayControlRotationComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ActivateControlRotationManagementForPlayerController", &UGameplayControlRotationComponent::execActivateControlRotationManagementForPlayerController },
		{ "ActivateControlRotationManagementForPlayerIndex", &UGameplayControlRotationComponent::execActivateControlRotationManagementForPlayerIndex },
		{ "DeactivateControlRotationManagement", &UGameplayControlRotationComponent::execDeactivateControlRotationManagement },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameplayControlRotationComponent);
UClass* Z_Construct_UClass_UGameplayControlRotationComponent_NoRegister()
{
	return UGameplayControlRotationComponent::StaticClass();
}
struct Z_Construct_UClass_UGameplayControlRotationComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Camera" },
		{ "Comment", "/**\n * An example component that works with the GameplayCameraComponent to manage a player's\n * control rotation when the camera changes or moves in a way that was not initiated \n * by the player themselves.\n */" },
		{ "HideCategories", "Mobility Rendering LOD" },
		{ "IncludePath", "GameFramework/GameplayControlRotationComponent.h" },
		{ "ModuleRelativePath", "Public/GameFramework/GameplayControlRotationComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "An example component that works with the GameplayCameraComponent to manage a player's\ncontrol rotation when the camera changes or moves in a way that was not initiated\nby the player themselves." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AxisActions_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/** The axis input action(s) to read from. */" },
		{ "ModuleRelativePath", "Public/GameFramework/GameplayControlRotationComponent.h" },
		{ "ToolTip", "The axis input action(s) to read from." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AxisActionAngularSpeedThreshold_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/**\n\x09 * The angular speed, in degrees per second, past which a change in the player input\n\x09 * will thaw a frozen control rotation.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/GameplayControlRotationComponent.h" },
		{ "ToolTip", "The angular speed, in degrees per second, past which a change in the player input\nwill thaw a frozen control rotation." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AxisActionMagnitudeThreshold_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/**\n\x09 * The player input magnitude under which the frozen control rotation is thawed.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/GameplayControlRotationComponent.h" },
		{ "ToolTip", "The player input magnitude under which the frozen control rotation is thawed." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AutoActivateForPlayer_MetaData[] = {
		{ "Category", "Activation" },
		{ "Comment", "/**\n\x09 * If AutoActivate is set, auto-activates control rotation management for the given player.\n\x09 * This is equivalent to calling ActivateControlRotationManagement on BeginPlay.\n\x09 */" },
		{ "EditCondition", "bAutoActivate" },
		{ "ModuleRelativePath", "Public/GameFramework/GameplayControlRotationComponent.h" },
		{ "ToolTip", "If AutoActivate is set, auto-activates control rotation management for the given player.\nThis is equivalent to calling ActivateControlRotationManagement on BeginPlay." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerController_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameFramework/GameplayControlRotationComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraSystemHost_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameFramework/GameplayControlRotationComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AxisActions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AxisActions;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AxisActionAngularSpeedThreshold;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AxisActionMagnitudeThreshold;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AutoActivateForPlayer;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraSystemHost;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGameplayControlRotationComponent_ActivateControlRotationManagementForPlayerController, "ActivateControlRotationManagementForPlayerController" }, // 1927677845
		{ &Z_Construct_UFunction_UGameplayControlRotationComponent_ActivateControlRotationManagementForPlayerIndex, "ActivateControlRotationManagementForPlayerIndex" }, // 3446990011
		{ &Z_Construct_UFunction_UGameplayControlRotationComponent_DeactivateControlRotationManagement, "DeactivateControlRotationManagement" }, // 3926616590
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameplayControlRotationComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameplayControlRotationComponent_Statics::NewProp_AxisActions_Inner = { "AxisActions", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGameplayControlRotationComponent_Statics::NewProp_AxisActions = { "AxisActions", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameplayControlRotationComponent, AxisActions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AxisActions_MetaData), NewProp_AxisActions_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGameplayControlRotationComponent_Statics::NewProp_AxisActionAngularSpeedThreshold = { "AxisActionAngularSpeedThreshold", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameplayControlRotationComponent, AxisActionAngularSpeedThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AxisActionAngularSpeedThreshold_MetaData), NewProp_AxisActionAngularSpeedThreshold_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGameplayControlRotationComponent_Statics::NewProp_AxisActionMagnitudeThreshold = { "AxisActionMagnitudeThreshold", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameplayControlRotationComponent, AxisActionMagnitudeThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AxisActionMagnitudeThreshold_MetaData), NewProp_AxisActionMagnitudeThreshold_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGameplayControlRotationComponent_Statics::NewProp_AutoActivateForPlayer = { "AutoActivateForPlayer", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameplayControlRotationComponent, AutoActivateForPlayer), Z_Construct_UEnum_Engine_EAutoReceiveInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AutoActivateForPlayer_MetaData), NewProp_AutoActivateForPlayer_MetaData) }; // 1625585255
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameplayControlRotationComponent_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameplayControlRotationComponent, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerController_MetaData), NewProp_PlayerController_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameplayControlRotationComponent_Statics::NewProp_CameraSystemHost = { "CameraSystemHost", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameplayControlRotationComponent, CameraSystemHost), Z_Construct_UClass_UGameplayCameraSystemHost_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraSystemHost_MetaData), NewProp_CameraSystemHost_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameplayControlRotationComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayControlRotationComponent_Statics::NewProp_AxisActions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayControlRotationComponent_Statics::NewProp_AxisActions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayControlRotationComponent_Statics::NewProp_AxisActionAngularSpeedThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayControlRotationComponent_Statics::NewProp_AxisActionMagnitudeThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayControlRotationComponent_Statics::NewProp_AutoActivateForPlayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayControlRotationComponent_Statics::NewProp_PlayerController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayControlRotationComponent_Statics::NewProp_CameraSystemHost,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayControlRotationComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGameplayControlRotationComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayCameras,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayControlRotationComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameplayControlRotationComponent_Statics::ClassParams = {
	&UGameplayControlRotationComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UGameplayControlRotationComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayControlRotationComponent_Statics::PropPointers),
	0,
	0x00A800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayControlRotationComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UGameplayControlRotationComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGameplayControlRotationComponent()
{
	if (!Z_Registration_Info_UClass_UGameplayControlRotationComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameplayControlRotationComponent.OuterSingleton, Z_Construct_UClass_UGameplayControlRotationComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGameplayControlRotationComponent.OuterSingleton;
}
template<> GAMEPLAYCAMERAS_API UClass* StaticClass<UGameplayControlRotationComponent>()
{
	return UGameplayControlRotationComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGameplayControlRotationComponent);
UGameplayControlRotationComponent::~UGameplayControlRotationComponent() {}
// End Class UGameplayControlRotationComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_GameplayControlRotationComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGameplayControlRotationComponent, UGameplayControlRotationComponent::StaticClass, TEXT("UGameplayControlRotationComponent"), &Z_Registration_Info_UClass_UGameplayControlRotationComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameplayControlRotationComponent), 2452185898U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_GameplayControlRotationComponent_h_2953197027(TEXT("/Script/GameplayCameras"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_GameplayControlRotationComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_GameplayControlRotationComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
