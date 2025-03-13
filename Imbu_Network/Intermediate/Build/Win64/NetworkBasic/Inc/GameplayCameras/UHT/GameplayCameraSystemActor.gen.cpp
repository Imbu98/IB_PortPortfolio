// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayCameras/Public/GameFramework/GameplayCameraSystemActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayCameraSystemActor() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_AGameplayCameraSystemActor();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_AGameplayCameraSystemActor_NoRegister();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UGameplayCameraSystemComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_GameplayCameras();
// End Cross Module References

// Begin Class AGameplayCameraSystemActor Function AutoManageActiveViewTarget
struct Z_Construct_UFunction_AGameplayCameraSystemActor_AutoManageActiveViewTarget_Statics
{
	struct GameplayCameraSystemActor_eventAutoManageActiveViewTarget_Parms
	{
		APlayerController* PlayerController;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Camera" },
		{ "Comment", "/**\n\x09 * Automatically sets a camera system actor as the view-target, spawning a unique\n\x09 * instance if needed. Doesn't do anything if bAutoSpawnCameraSystemActor is disabled\n\x09 * in the GameplayCameras settings.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/GameplayCameraSystemActor.h" },
		{ "ToolTip", "Automatically sets a camera system actor as the view-target, spawning a unique\ninstance if needed. Doesn't do anything if bAutoSpawnCameraSystemActor is disabled\nin the GameplayCameras settings." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGameplayCameraSystemActor_AutoManageActiveViewTarget_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameplayCameraSystemActor_eventAutoManageActiveViewTarget_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameplayCameraSystemActor_AutoManageActiveViewTarget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameplayCameraSystemActor_AutoManageActiveViewTarget_Statics::NewProp_PlayerController,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGameplayCameraSystemActor_AutoManageActiveViewTarget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameplayCameraSystemActor_AutoManageActiveViewTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameplayCameraSystemActor, nullptr, "AutoManageActiveViewTarget", nullptr, nullptr, Z_Construct_UFunction_AGameplayCameraSystemActor_AutoManageActiveViewTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameplayCameraSystemActor_AutoManageActiveViewTarget_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGameplayCameraSystemActor_AutoManageActiveViewTarget_Statics::GameplayCameraSystemActor_eventAutoManageActiveViewTarget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGameplayCameraSystemActor_AutoManageActiveViewTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGameplayCameraSystemActor_AutoManageActiveViewTarget_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AGameplayCameraSystemActor_AutoManageActiveViewTarget_Statics::GameplayCameraSystemActor_eventAutoManageActiveViewTarget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGameplayCameraSystemActor_AutoManageActiveViewTarget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGameplayCameraSystemActor_AutoManageActiveViewTarget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGameplayCameraSystemActor::execAutoManageActiveViewTarget)
{
	P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
	P_FINISH;
	P_NATIVE_BEGIN;
	AGameplayCameraSystemActor::AutoManageActiveViewTarget(Z_Param_PlayerController);
	P_NATIVE_END;
}
// End Class AGameplayCameraSystemActor Function AutoManageActiveViewTarget

// Begin Class AGameplayCameraSystemActor Function GetAutoSpawnedCameraSystemActor
struct Z_Construct_UFunction_AGameplayCameraSystemActor_GetAutoSpawnedCameraSystemActor_Statics
{
	struct GameplayCameraSystemActor_eventGetAutoSpawnedCameraSystemActor_Parms
	{
		APlayerController* PlayerController;
		bool bForceSpawn;
		AGameplayCameraSystemActor* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Camera" },
		{ "Comment", "/**\n\x09 * Get the automatically spawned camera system actor, if it exists.\n\x09 * Returns null if bAutoSpawnCameraSystemActor is disabled in the GameplayCameras \n\x09 * settings, or if no actor has been spawned yet.\n\x09 */" },
		{ "CPP_Default_bForceSpawn", "false" },
		{ "ModuleRelativePath", "Public/GameFramework/GameplayCameraSystemActor.h" },
		{ "ToolTip", "Get the automatically spawned camera system actor, if it exists.\nReturns null if bAutoSpawnCameraSystemActor is disabled in the GameplayCameras\nsettings, or if no actor has been spawned yet." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
	static void NewProp_bForceSpawn_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceSpawn;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGameplayCameraSystemActor_GetAutoSpawnedCameraSystemActor_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameplayCameraSystemActor_eventGetAutoSpawnedCameraSystemActor_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AGameplayCameraSystemActor_GetAutoSpawnedCameraSystemActor_Statics::NewProp_bForceSpawn_SetBit(void* Obj)
{
	((GameplayCameraSystemActor_eventGetAutoSpawnedCameraSystemActor_Parms*)Obj)->bForceSpawn = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGameplayCameraSystemActor_GetAutoSpawnedCameraSystemActor_Statics::NewProp_bForceSpawn = { "bForceSpawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GameplayCameraSystemActor_eventGetAutoSpawnedCameraSystemActor_Parms), &Z_Construct_UFunction_AGameplayCameraSystemActor_GetAutoSpawnedCameraSystemActor_Statics::NewProp_bForceSpawn_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGameplayCameraSystemActor_GetAutoSpawnedCameraSystemActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameplayCameraSystemActor_eventGetAutoSpawnedCameraSystemActor_Parms, ReturnValue), Z_Construct_UClass_AGameplayCameraSystemActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameplayCameraSystemActor_GetAutoSpawnedCameraSystemActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameplayCameraSystemActor_GetAutoSpawnedCameraSystemActor_Statics::NewProp_PlayerController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameplayCameraSystemActor_GetAutoSpawnedCameraSystemActor_Statics::NewProp_bForceSpawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameplayCameraSystemActor_GetAutoSpawnedCameraSystemActor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGameplayCameraSystemActor_GetAutoSpawnedCameraSystemActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameplayCameraSystemActor_GetAutoSpawnedCameraSystemActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameplayCameraSystemActor, nullptr, "GetAutoSpawnedCameraSystemActor", nullptr, nullptr, Z_Construct_UFunction_AGameplayCameraSystemActor_GetAutoSpawnedCameraSystemActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameplayCameraSystemActor_GetAutoSpawnedCameraSystemActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGameplayCameraSystemActor_GetAutoSpawnedCameraSystemActor_Statics::GameplayCameraSystemActor_eventGetAutoSpawnedCameraSystemActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGameplayCameraSystemActor_GetAutoSpawnedCameraSystemActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGameplayCameraSystemActor_GetAutoSpawnedCameraSystemActor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AGameplayCameraSystemActor_GetAutoSpawnedCameraSystemActor_Statics::GameplayCameraSystemActor_eventGetAutoSpawnedCameraSystemActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGameplayCameraSystemActor_GetAutoSpawnedCameraSystemActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGameplayCameraSystemActor_GetAutoSpawnedCameraSystemActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGameplayCameraSystemActor::execGetAutoSpawnedCameraSystemActor)
{
	P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
	P_GET_UBOOL(Z_Param_bForceSpawn);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AGameplayCameraSystemActor**)Z_Param__Result=AGameplayCameraSystemActor::GetAutoSpawnedCameraSystemActor(Z_Param_PlayerController,Z_Param_bForceSpawn);
	P_NATIVE_END;
}
// End Class AGameplayCameraSystemActor Function GetAutoSpawnedCameraSystemActor

// Begin Class AGameplayCameraSystemActor Function GetCameraSystemComponent
struct Z_Construct_UFunction_AGameplayCameraSystemActor_GetCameraSystemComponent_Statics
{
	struct GameplayCameraSystemActor_eventGetCameraSystemComponent_Parms
	{
		UGameplayCameraSystemComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "Camera" },
		{ "Comment", "/** Gets the camera system component. */" },
		{ "ModuleRelativePath", "Public/GameFramework/GameplayCameraSystemActor.h" },
		{ "ToolTip", "Gets the camera system component." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGameplayCameraSystemActor_GetCameraSystemComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameplayCameraSystemActor_eventGetCameraSystemComponent_Parms, ReturnValue), Z_Construct_UClass_UGameplayCameraSystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameplayCameraSystemActor_GetCameraSystemComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameplayCameraSystemActor_GetCameraSystemComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGameplayCameraSystemActor_GetCameraSystemComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameplayCameraSystemActor_GetCameraSystemComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameplayCameraSystemActor, nullptr, "GetCameraSystemComponent", nullptr, nullptr, Z_Construct_UFunction_AGameplayCameraSystemActor_GetCameraSystemComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameplayCameraSystemActor_GetCameraSystemComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGameplayCameraSystemActor_GetCameraSystemComponent_Statics::GameplayCameraSystemActor_eventGetCameraSystemComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGameplayCameraSystemActor_GetCameraSystemComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGameplayCameraSystemActor_GetCameraSystemComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AGameplayCameraSystemActor_GetCameraSystemComponent_Statics::GameplayCameraSystemActor_eventGetCameraSystemComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGameplayCameraSystemActor_GetCameraSystemComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGameplayCameraSystemActor_GetCameraSystemComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGameplayCameraSystemActor::execGetCameraSystemComponent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UGameplayCameraSystemComponent**)Z_Param__Result=P_THIS->GetCameraSystemComponent();
	P_NATIVE_END;
}
// End Class AGameplayCameraSystemActor Function GetCameraSystemComponent

// Begin Class AGameplayCameraSystemActor
void AGameplayCameraSystemActor::StaticRegisterNativesAGameplayCameraSystemActor()
{
	UClass* Class = AGameplayCameraSystemActor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AutoManageActiveViewTarget", &AGameplayCameraSystemActor::execAutoManageActiveViewTarget },
		{ "GetAutoSpawnedCameraSystemActor", &AGameplayCameraSystemActor::execGetAutoSpawnedCameraSystemActor },
		{ "GetCameraSystemComponent", &AGameplayCameraSystemActor::execGetCameraSystemComponent },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGameplayCameraSystemActor);
UClass* Z_Construct_UClass_AGameplayCameraSystemActor_NoRegister()
{
	return AGameplayCameraSystemActor::StaticClass();
}
struct Z_Construct_UClass_AGameplayCameraSystemActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Camera" },
		{ "Comment", "/**\n * An actor that hosts a camera system.\n */" },
		{ "HideCategories", "Input Rendering" },
		{ "IncludePath", "GameFramework/GameplayCameraSystemActor.h" },
		{ "ModuleRelativePath", "Public/GameFramework/GameplayCameraSystemActor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "An actor that hosts a camera system." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraSystemComponent_MetaData[] = {
		{ "BlueprintGetter", "GetCameraSystemComponent" },
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ExposeFunctionCategories", "CameraSystem" },
		{ "ModuleRelativePath", "Public/GameFramework/GameplayCameraSystemActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraSystemComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AGameplayCameraSystemActor_AutoManageActiveViewTarget, "AutoManageActiveViewTarget" }, // 713121085
		{ &Z_Construct_UFunction_AGameplayCameraSystemActor_GetAutoSpawnedCameraSystemActor, "GetAutoSpawnedCameraSystemActor" }, // 2679435612
		{ &Z_Construct_UFunction_AGameplayCameraSystemActor_GetCameraSystemComponent, "GetCameraSystemComponent" }, // 2275023134
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGameplayCameraSystemActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGameplayCameraSystemActor_Statics::NewProp_CameraSystemComponent = { "CameraSystemComponent", nullptr, (EPropertyFlags)0x01440000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameplayCameraSystemActor, CameraSystemComponent), Z_Construct_UClass_UGameplayCameraSystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraSystemComponent_MetaData), NewProp_CameraSystemComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGameplayCameraSystemActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameplayCameraSystemActor_Statics::NewProp_CameraSystemComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGameplayCameraSystemActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AGameplayCameraSystemActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayCameras,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGameplayCameraSystemActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGameplayCameraSystemActor_Statics::ClassParams = {
	&AGameplayCameraSystemActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AGameplayCameraSystemActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AGameplayCameraSystemActor_Statics::PropPointers),
	0,
	0x008800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGameplayCameraSystemActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AGameplayCameraSystemActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AGameplayCameraSystemActor()
{
	if (!Z_Registration_Info_UClass_AGameplayCameraSystemActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGameplayCameraSystemActor.OuterSingleton, Z_Construct_UClass_AGameplayCameraSystemActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGameplayCameraSystemActor.OuterSingleton;
}
template<> GAMEPLAYCAMERAS_API UClass* StaticClass<AGameplayCameraSystemActor>()
{
	return AGameplayCameraSystemActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AGameplayCameraSystemActor);
AGameplayCameraSystemActor::~AGameplayCameraSystemActor() {}
// End Class AGameplayCameraSystemActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_GameplayCameraSystemActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGameplayCameraSystemActor, AGameplayCameraSystemActor::StaticClass, TEXT("AGameplayCameraSystemActor"), &Z_Registration_Info_UClass_AGameplayCameraSystemActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGameplayCameraSystemActor), 840894432U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_GameplayCameraSystemActor_h_2679056030(TEXT("/Script/GameplayCameras"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_GameplayCameraSystemActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_GameplayCameraSystemActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
