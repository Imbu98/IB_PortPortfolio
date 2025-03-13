// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayCameras/Public/Directors/BlueprintCameraDirector.h"
#include "GameplayCameras/Public/GameFramework/BlueprintCameraPose.h"
#include "GameplayCameras/Public/GameFramework/BlueprintCameraVariableTable.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlueprintCameraDirector() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UBlueprintCameraDirector();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UBlueprintCameraDirector_NoRegister();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UBlueprintCameraDirectorEvaluator();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UBlueprintCameraDirectorEvaluator_NoRegister();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UCameraDirector();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UCameraRigAsset_NoRegister();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UCameraRigProxyAsset_NoRegister();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UCameraRigProxyTable_NoRegister();
GAMEPLAYCAMERAS_API UScriptStruct* Z_Construct_UScriptStruct_FBlueprintCameraDirectorActivateParams();
GAMEPLAYCAMERAS_API UScriptStruct* Z_Construct_UScriptStruct_FBlueprintCameraDirectorDeactivateParams();
GAMEPLAYCAMERAS_API UScriptStruct* Z_Construct_UScriptStruct_FBlueprintCameraDirectorEvaluationParams();
GAMEPLAYCAMERAS_API UScriptStruct* Z_Construct_UScriptStruct_FBlueprintCameraPose();
GAMEPLAYCAMERAS_API UScriptStruct* Z_Construct_UScriptStruct_FBlueprintCameraVariableTable();
UPackage* Z_Construct_UPackage__Script_GameplayCameras();
// End Cross Module References

// Begin ScriptStruct FBlueprintCameraDirectorActivateParams
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BlueprintCameraDirectorActivateParams;
class UScriptStruct* FBlueprintCameraDirectorActivateParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BlueprintCameraDirectorActivateParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BlueprintCameraDirectorActivateParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBlueprintCameraDirectorActivateParams, (UObject*)Z_Construct_UPackage__Script_GameplayCameras(), TEXT("BlueprintCameraDirectorActivateParams"));
	}
	return Z_Registration_Info_UScriptStruct_BlueprintCameraDirectorActivateParams.OuterSingleton;
}
template<> GAMEPLAYCAMERAS_API UScriptStruct* StaticStruct<FBlueprintCameraDirectorActivateParams>()
{
	return FBlueprintCameraDirectorActivateParams::StaticStruct();
}
struct Z_Construct_UScriptStruct_FBlueprintCameraDirectorActivateParams_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Parameter struct for activating the Blueprint camera director evaluator.\n */" },
		{ "ModuleRelativePath", "Public/Directors/BlueprintCameraDirector.h" },
		{ "ToolTip", "Parameter struct for activating the Blueprint camera director evaluator." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EvaluationContextOwner_MetaData[] = {
		{ "Category", "Evaluation" },
		{ "Comment", "/** The owner (if any) of the evaluation context we are running inside of. */" },
		{ "ModuleRelativePath", "Public/Directors/BlueprintCameraDirector.h" },
		{ "ToolTip", "The owner (if any) of the evaluation context we are running inside of." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EvaluationContextOwner;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBlueprintCameraDirectorActivateParams>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FBlueprintCameraDirectorActivateParams_Statics::NewProp_EvaluationContextOwner = { "EvaluationContextOwner", nullptr, (EPropertyFlags)0x0114000000000004, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBlueprintCameraDirectorActivateParams, EvaluationContextOwner), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EvaluationContextOwner_MetaData), NewProp_EvaluationContextOwner_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBlueprintCameraDirectorActivateParams_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlueprintCameraDirectorActivateParams_Statics::NewProp_EvaluationContextOwner,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintCameraDirectorActivateParams_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBlueprintCameraDirectorActivateParams_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayCameras,
	nullptr,
	&NewStructOps,
	"BlueprintCameraDirectorActivateParams",
	Z_Construct_UScriptStruct_FBlueprintCameraDirectorActivateParams_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintCameraDirectorActivateParams_Statics::PropPointers),
	sizeof(FBlueprintCameraDirectorActivateParams),
	alignof(FBlueprintCameraDirectorActivateParams),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintCameraDirectorActivateParams_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FBlueprintCameraDirectorActivateParams_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FBlueprintCameraDirectorActivateParams()
{
	if (!Z_Registration_Info_UScriptStruct_BlueprintCameraDirectorActivateParams.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BlueprintCameraDirectorActivateParams.InnerSingleton, Z_Construct_UScriptStruct_FBlueprintCameraDirectorActivateParams_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_BlueprintCameraDirectorActivateParams.InnerSingleton;
}
// End ScriptStruct FBlueprintCameraDirectorActivateParams

// Begin ScriptStruct FBlueprintCameraDirectorDeactivateParams
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BlueprintCameraDirectorDeactivateParams;
class UScriptStruct* FBlueprintCameraDirectorDeactivateParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BlueprintCameraDirectorDeactivateParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BlueprintCameraDirectorDeactivateParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBlueprintCameraDirectorDeactivateParams, (UObject*)Z_Construct_UPackage__Script_GameplayCameras(), TEXT("BlueprintCameraDirectorDeactivateParams"));
	}
	return Z_Registration_Info_UScriptStruct_BlueprintCameraDirectorDeactivateParams.OuterSingleton;
}
template<> GAMEPLAYCAMERAS_API UScriptStruct* StaticStruct<FBlueprintCameraDirectorDeactivateParams>()
{
	return FBlueprintCameraDirectorDeactivateParams::StaticStruct();
}
struct Z_Construct_UScriptStruct_FBlueprintCameraDirectorDeactivateParams_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Parameter struct for deactivating the Blueprint camera director evaluator.\n */" },
		{ "ModuleRelativePath", "Public/Directors/BlueprintCameraDirector.h" },
		{ "ToolTip", "Parameter struct for deactivating the Blueprint camera director evaluator." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EvaluationContextOwner_MetaData[] = {
		{ "Category", "Evaluation" },
		{ "Comment", "/** The owner (if any) of the evaluation context we were running inside of. */" },
		{ "ModuleRelativePath", "Public/Directors/BlueprintCameraDirector.h" },
		{ "ToolTip", "The owner (if any) of the evaluation context we were running inside of." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EvaluationContextOwner;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBlueprintCameraDirectorDeactivateParams>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FBlueprintCameraDirectorDeactivateParams_Statics::NewProp_EvaluationContextOwner = { "EvaluationContextOwner", nullptr, (EPropertyFlags)0x0114000000000004, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBlueprintCameraDirectorDeactivateParams, EvaluationContextOwner), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EvaluationContextOwner_MetaData), NewProp_EvaluationContextOwner_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBlueprintCameraDirectorDeactivateParams_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlueprintCameraDirectorDeactivateParams_Statics::NewProp_EvaluationContextOwner,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintCameraDirectorDeactivateParams_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBlueprintCameraDirectorDeactivateParams_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayCameras,
	nullptr,
	&NewStructOps,
	"BlueprintCameraDirectorDeactivateParams",
	Z_Construct_UScriptStruct_FBlueprintCameraDirectorDeactivateParams_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintCameraDirectorDeactivateParams_Statics::PropPointers),
	sizeof(FBlueprintCameraDirectorDeactivateParams),
	alignof(FBlueprintCameraDirectorDeactivateParams),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintCameraDirectorDeactivateParams_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FBlueprintCameraDirectorDeactivateParams_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FBlueprintCameraDirectorDeactivateParams()
{
	if (!Z_Registration_Info_UScriptStruct_BlueprintCameraDirectorDeactivateParams.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BlueprintCameraDirectorDeactivateParams.InnerSingleton, Z_Construct_UScriptStruct_FBlueprintCameraDirectorDeactivateParams_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_BlueprintCameraDirectorDeactivateParams.InnerSingleton;
}
// End ScriptStruct FBlueprintCameraDirectorDeactivateParams

// Begin ScriptStruct FBlueprintCameraDirectorEvaluationParams
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BlueprintCameraDirectorEvaluationParams;
class UScriptStruct* FBlueprintCameraDirectorEvaluationParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BlueprintCameraDirectorEvaluationParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BlueprintCameraDirectorEvaluationParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBlueprintCameraDirectorEvaluationParams, (UObject*)Z_Construct_UPackage__Script_GameplayCameras(), TEXT("BlueprintCameraDirectorEvaluationParams"));
	}
	return Z_Registration_Info_UScriptStruct_BlueprintCameraDirectorEvaluationParams.OuterSingleton;
}
template<> GAMEPLAYCAMERAS_API UScriptStruct* StaticStruct<FBlueprintCameraDirectorEvaluationParams>()
{
	return FBlueprintCameraDirectorEvaluationParams::StaticStruct();
}
struct Z_Construct_UScriptStruct_FBlueprintCameraDirectorEvaluationParams_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Parameter struct for running the Blueprint camera director evaluator.\n */" },
		{ "ModuleRelativePath", "Public/Directors/BlueprintCameraDirector.h" },
		{ "ToolTip", "Parameter struct for running the Blueprint camera director evaluator." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeltaTime_MetaData[] = {
		{ "Category", "Evaluation" },
		{ "Comment", "/** The elapsed time since the last evaluation. */" },
		{ "ModuleRelativePath", "Public/Directors/BlueprintCameraDirector.h" },
		{ "ToolTip", "The elapsed time since the last evaluation." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EvaluationContextOwner_MetaData[] = {
		{ "Category", "Evaluation" },
		{ "Comment", "/** The owner (if any) of the evaluation context we are running inside of. */" },
		{ "ModuleRelativePath", "Public/Directors/BlueprintCameraDirector.h" },
		{ "ToolTip", "The owner (if any) of the evaluation context we are running inside of." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EvaluationContextOwner;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBlueprintCameraDirectorEvaluationParams>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBlueprintCameraDirectorEvaluationParams_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBlueprintCameraDirectorEvaluationParams, DeltaTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeltaTime_MetaData), NewProp_DeltaTime_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FBlueprintCameraDirectorEvaluationParams_Statics::NewProp_EvaluationContextOwner = { "EvaluationContextOwner", nullptr, (EPropertyFlags)0x0114000000000004, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBlueprintCameraDirectorEvaluationParams, EvaluationContextOwner), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EvaluationContextOwner_MetaData), NewProp_EvaluationContextOwner_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBlueprintCameraDirectorEvaluationParams_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlueprintCameraDirectorEvaluationParams_Statics::NewProp_DeltaTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlueprintCameraDirectorEvaluationParams_Statics::NewProp_EvaluationContextOwner,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintCameraDirectorEvaluationParams_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBlueprintCameraDirectorEvaluationParams_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayCameras,
	nullptr,
	&NewStructOps,
	"BlueprintCameraDirectorEvaluationParams",
	Z_Construct_UScriptStruct_FBlueprintCameraDirectorEvaluationParams_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintCameraDirectorEvaluationParams_Statics::PropPointers),
	sizeof(FBlueprintCameraDirectorEvaluationParams),
	alignof(FBlueprintCameraDirectorEvaluationParams),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintCameraDirectorEvaluationParams_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FBlueprintCameraDirectorEvaluationParams_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FBlueprintCameraDirectorEvaluationParams()
{
	if (!Z_Registration_Info_UScriptStruct_BlueprintCameraDirectorEvaluationParams.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BlueprintCameraDirectorEvaluationParams.InnerSingleton, Z_Construct_UScriptStruct_FBlueprintCameraDirectorEvaluationParams_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_BlueprintCameraDirectorEvaluationParams.InnerSingleton;
}
// End ScriptStruct FBlueprintCameraDirectorEvaluationParams

// Begin Class UBlueprintCameraDirectorEvaluator Function ActivateCameraDirector
struct BlueprintCameraDirectorEvaluator_eventActivateCameraDirector_Parms
{
	FBlueprintCameraDirectorActivateParams Params;
};
static const FName NAME_UBlueprintCameraDirectorEvaluator_ActivateCameraDirector = FName(TEXT("ActivateCameraDirector"));
void UBlueprintCameraDirectorEvaluator::ActivateCameraDirector(FBlueprintCameraDirectorActivateParams const& Params)
{
	BlueprintCameraDirectorEvaluator_eventActivateCameraDirector_Parms Parms;
	Parms.Params=Params;
	UFunction* Func = FindFunctionChecked(NAME_UBlueprintCameraDirectorEvaluator_ActivateCameraDirector);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_ActivateCameraDirector_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Activation" },
		{ "Comment", "/**\n\x09 * Override this method in Blueprint to execute custom logic when this\n\x09 * camera director gets activated.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Directors/BlueprintCameraDirector.h" },
		{ "ToolTip", "Override this method in Blueprint to execute custom logic when this\ncamera director gets activated." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Params_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Params;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_ActivateCameraDirector_Statics::NewProp_Params = { "Params", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintCameraDirectorEvaluator_eventActivateCameraDirector_Parms, Params), Z_Construct_UScriptStruct_FBlueprintCameraDirectorActivateParams, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Params_MetaData), NewProp_Params_MetaData) }; // 4074802415
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_ActivateCameraDirector_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_ActivateCameraDirector_Statics::NewProp_Params,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_ActivateCameraDirector_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_ActivateCameraDirector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintCameraDirectorEvaluator, nullptr, "ActivateCameraDirector", nullptr, nullptr, Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_ActivateCameraDirector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_ActivateCameraDirector_Statics::PropPointers), sizeof(BlueprintCameraDirectorEvaluator_eventActivateCameraDirector_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_ActivateCameraDirector_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_ActivateCameraDirector_Statics::Function_MetaDataParams) };
static_assert(sizeof(BlueprintCameraDirectorEvaluator_eventActivateCameraDirector_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_ActivateCameraDirector()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_ActivateCameraDirector_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UBlueprintCameraDirectorEvaluator Function ActivateCameraDirector

// Begin Class UBlueprintCameraDirectorEvaluator Function ActivateCameraRig
struct Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_ActivateCameraRig_Statics
{
	struct BlueprintCameraDirectorEvaluator_eventActivateCameraRig_Parms
	{
		UCameraRigAsset* CameraRig;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Evaluation" },
		{ "Comment", "/** Specifies a camera rig to be active this frame. */" },
		{ "ModuleRelativePath", "Public/Directors/BlueprintCameraDirector.h" },
		{ "ToolTip", "Specifies a camera rig to be active this frame." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraRig_MetaData[] = {
		{ "UseBlueprintCameraDirectorRigPicker", "TRUE" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraRig;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_ActivateCameraRig_Statics::NewProp_CameraRig = { "CameraRig", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintCameraDirectorEvaluator_eventActivateCameraRig_Parms, CameraRig), Z_Construct_UClass_UCameraRigAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraRig_MetaData), NewProp_CameraRig_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_ActivateCameraRig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_ActivateCameraRig_Statics::NewProp_CameraRig,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_ActivateCameraRig_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_ActivateCameraRig_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintCameraDirectorEvaluator, nullptr, "ActivateCameraRig", nullptr, nullptr, Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_ActivateCameraRig_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_ActivateCameraRig_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_ActivateCameraRig_Statics::BlueprintCameraDirectorEvaluator_eventActivateCameraRig_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_ActivateCameraRig_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_ActivateCameraRig_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_ActivateCameraRig_Statics::BlueprintCameraDirectorEvaluator_eventActivateCameraRig_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_ActivateCameraRig()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_ActivateCameraRig_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBlueprintCameraDirectorEvaluator::execActivateCameraRig)
{
	P_GET_OBJECT(UCameraRigAsset,Z_Param_CameraRig);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ActivateCameraRig(Z_Param_CameraRig);
	P_NATIVE_END;
}
// End Class UBlueprintCameraDirectorEvaluator Function ActivateCameraRig

// Begin Class UBlueprintCameraDirectorEvaluator Function ActivateCameraRigPrefab
struct Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_ActivateCameraRigPrefab_Statics
{
	struct BlueprintCameraDirectorEvaluator_eventActivateCameraRigPrefab_Parms
	{
		UCameraRigAsset* CameraRig;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Evaluation" },
		{ "Comment", "/**\n\x09 * Specifies an external camera rig prefab asset to be active this frame.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Directors/BlueprintCameraDirector.h" },
		{ "ToolTip", "Specifies an external camera rig prefab asset to be active this frame." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraRig;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_ActivateCameraRigPrefab_Statics::NewProp_CameraRig = { "CameraRig", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintCameraDirectorEvaluator_eventActivateCameraRigPrefab_Parms, CameraRig), Z_Construct_UClass_UCameraRigAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_ActivateCameraRigPrefab_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_ActivateCameraRigPrefab_Statics::NewProp_CameraRig,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_ActivateCameraRigPrefab_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_ActivateCameraRigPrefab_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintCameraDirectorEvaluator, nullptr, "ActivateCameraRigPrefab", nullptr, nullptr, Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_ActivateCameraRigPrefab_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_ActivateCameraRigPrefab_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_ActivateCameraRigPrefab_Statics::BlueprintCameraDirectorEvaluator_eventActivateCameraRigPrefab_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_ActivateCameraRigPrefab_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_ActivateCameraRigPrefab_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_ActivateCameraRigPrefab_Statics::BlueprintCameraDirectorEvaluator_eventActivateCameraRigPrefab_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_ActivateCameraRigPrefab()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_ActivateCameraRigPrefab_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBlueprintCameraDirectorEvaluator::execActivateCameraRigPrefab)
{
	P_GET_OBJECT(UCameraRigAsset,Z_Param_CameraRig);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ActivateCameraRigPrefab(Z_Param_CameraRig);
	P_NATIVE_END;
}
// End Class UBlueprintCameraDirectorEvaluator Function ActivateCameraRigPrefab

// Begin Class UBlueprintCameraDirectorEvaluator Function ActivateCameraRigViaProxy
struct Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_ActivateCameraRigViaProxy_Statics
{
	struct BlueprintCameraDirectorEvaluator_eventActivateCameraRigViaProxy_Parms
	{
		UCameraRigProxyAsset* CameraRigProxy;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Evaluation" },
		{ "Comment", "/**\n\x09 * Specifies a camera rig to be active this frame, via a proxy which is later resolved\n\x09 * via the proxy table of the Blueprint camera director.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Directors/BlueprintCameraDirector.h" },
		{ "ToolTip", "Specifies a camera rig to be active this frame, via a proxy which is later resolved\nvia the proxy table of the Blueprint camera director." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraRigProxy;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_ActivateCameraRigViaProxy_Statics::NewProp_CameraRigProxy = { "CameraRigProxy", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintCameraDirectorEvaluator_eventActivateCameraRigViaProxy_Parms, CameraRigProxy), Z_Construct_UClass_UCameraRigProxyAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_ActivateCameraRigViaProxy_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_ActivateCameraRigViaProxy_Statics::NewProp_CameraRigProxy,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_ActivateCameraRigViaProxy_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_ActivateCameraRigViaProxy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintCameraDirectorEvaluator, nullptr, "ActivateCameraRigViaProxy", nullptr, nullptr, Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_ActivateCameraRigViaProxy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_ActivateCameraRigViaProxy_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_ActivateCameraRigViaProxy_Statics::BlueprintCameraDirectorEvaluator_eventActivateCameraRigViaProxy_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_ActivateCameraRigViaProxy_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_ActivateCameraRigViaProxy_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_ActivateCameraRigViaProxy_Statics::BlueprintCameraDirectorEvaluator_eventActivateCameraRigViaProxy_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_ActivateCameraRigViaProxy()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_ActivateCameraRigViaProxy_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBlueprintCameraDirectorEvaluator::execActivateCameraRigViaProxy)
{
	P_GET_OBJECT(UCameraRigProxyAsset,Z_Param_CameraRigProxy);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ActivateCameraRigViaProxy(Z_Param_CameraRigProxy);
	P_NATIVE_END;
}
// End Class UBlueprintCameraDirectorEvaluator Function ActivateCameraRigViaProxy

// Begin Class UBlueprintCameraDirectorEvaluator Function ActivatePersistentBaseCameraRig
struct Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_ActivatePersistentBaseCameraRig_Statics
{
	struct BlueprintCameraDirectorEvaluator_eventActivatePersistentBaseCameraRig_Parms
	{
		UCameraRigAsset* CameraRigPrefab;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Activation" },
		{ "Comment", "/** Activates the given camera rig prefab in the base layer. */" },
		{ "ModuleRelativePath", "Public/Directors/BlueprintCameraDirector.h" },
		{ "ToolTip", "Activates the given camera rig prefab in the base layer." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraRigPrefab;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_ActivatePersistentBaseCameraRig_Statics::NewProp_CameraRigPrefab = { "CameraRigPrefab", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintCameraDirectorEvaluator_eventActivatePersistentBaseCameraRig_Parms, CameraRigPrefab), Z_Construct_UClass_UCameraRigAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_ActivatePersistentBaseCameraRig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_ActivatePersistentBaseCameraRig_Statics::NewProp_CameraRigPrefab,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_ActivatePersistentBaseCameraRig_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_ActivatePersistentBaseCameraRig_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintCameraDirectorEvaluator, nullptr, "ActivatePersistentBaseCameraRig", nullptr, nullptr, Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_ActivatePersistentBaseCameraRig_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_ActivatePersistentBaseCameraRig_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_ActivatePersistentBaseCameraRig_Statics::BlueprintCameraDirectorEvaluator_eventActivatePersistentBaseCameraRig_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_ActivatePersistentBaseCameraRig_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_ActivatePersistentBaseCameraRig_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_ActivatePersistentBaseCameraRig_Statics::BlueprintCameraDirectorEvaluator_eventActivatePersistentBaseCameraRig_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_ActivatePersistentBaseCameraRig()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_ActivatePersistentBaseCameraRig_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBlueprintCameraDirectorEvaluator::execActivatePersistentBaseCameraRig)
{
	P_GET_OBJECT(UCameraRigAsset,Z_Param_CameraRigPrefab);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ActivatePersistentBaseCameraRig(Z_Param_CameraRigPrefab);
	P_NATIVE_END;
}
// End Class UBlueprintCameraDirectorEvaluator Function ActivatePersistentBaseCameraRig

// Begin Class UBlueprintCameraDirectorEvaluator Function ActivatePersistentGlobalCameraRig
struct Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_ActivatePersistentGlobalCameraRig_Statics
{
	struct BlueprintCameraDirectorEvaluator_eventActivatePersistentGlobalCameraRig_Parms
	{
		UCameraRigAsset* CameraRigPrefab;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Activation" },
		{ "Comment", "/** Activates the given camera rig prefab in the global layer. */" },
		{ "ModuleRelativePath", "Public/Directors/BlueprintCameraDirector.h" },
		{ "ToolTip", "Activates the given camera rig prefab in the global layer." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraRigPrefab;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_ActivatePersistentGlobalCameraRig_Statics::NewProp_CameraRigPrefab = { "CameraRigPrefab", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintCameraDirectorEvaluator_eventActivatePersistentGlobalCameraRig_Parms, CameraRigPrefab), Z_Construct_UClass_UCameraRigAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_ActivatePersistentGlobalCameraRig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_ActivatePersistentGlobalCameraRig_Statics::NewProp_CameraRigPrefab,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_ActivatePersistentGlobalCameraRig_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_ActivatePersistentGlobalCameraRig_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintCameraDirectorEvaluator, nullptr, "ActivatePersistentGlobalCameraRig", nullptr, nullptr, Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_ActivatePersistentGlobalCameraRig_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_ActivatePersistentGlobalCameraRig_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_ActivatePersistentGlobalCameraRig_Statics::BlueprintCameraDirectorEvaluator_eventActivatePersistentGlobalCameraRig_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_ActivatePersistentGlobalCameraRig_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_ActivatePersistentGlobalCameraRig_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_ActivatePersistentGlobalCameraRig_Statics::BlueprintCameraDirectorEvaluator_eventActivatePersistentGlobalCameraRig_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_ActivatePersistentGlobalCameraRig()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_ActivatePersistentGlobalCameraRig_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBlueprintCameraDirectorEvaluator::execActivatePersistentGlobalCameraRig)
{
	P_GET_OBJECT(UCameraRigAsset,Z_Param_CameraRigPrefab);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ActivatePersistentGlobalCameraRig(Z_Param_CameraRigPrefab);
	P_NATIVE_END;
}
// End Class UBlueprintCameraDirectorEvaluator Function ActivatePersistentGlobalCameraRig

// Begin Class UBlueprintCameraDirectorEvaluator Function ActivatePersistentVisualCameraRig
struct Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_ActivatePersistentVisualCameraRig_Statics
{
	struct BlueprintCameraDirectorEvaluator_eventActivatePersistentVisualCameraRig_Parms
	{
		UCameraRigAsset* CameraRigPrefab;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Activation" },
		{ "Comment", "/** Activates the given camera rig prefab in the visual layer. */" },
		{ "ModuleRelativePath", "Public/Directors/BlueprintCameraDirector.h" },
		{ "ToolTip", "Activates the given camera rig prefab in the visual layer." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraRigPrefab;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_ActivatePersistentVisualCameraRig_Statics::NewProp_CameraRigPrefab = { "CameraRigPrefab", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintCameraDirectorEvaluator_eventActivatePersistentVisualCameraRig_Parms, CameraRigPrefab), Z_Construct_UClass_UCameraRigAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_ActivatePersistentVisualCameraRig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_ActivatePersistentVisualCameraRig_Statics::NewProp_CameraRigPrefab,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_ActivatePersistentVisualCameraRig_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_ActivatePersistentVisualCameraRig_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintCameraDirectorEvaluator, nullptr, "ActivatePersistentVisualCameraRig", nullptr, nullptr, Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_ActivatePersistentVisualCameraRig_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_ActivatePersistentVisualCameraRig_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_ActivatePersistentVisualCameraRig_Statics::BlueprintCameraDirectorEvaluator_eventActivatePersistentVisualCameraRig_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_ActivatePersistentVisualCameraRig_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_ActivatePersistentVisualCameraRig_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_ActivatePersistentVisualCameraRig_Statics::BlueprintCameraDirectorEvaluator_eventActivatePersistentVisualCameraRig_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_ActivatePersistentVisualCameraRig()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_ActivatePersistentVisualCameraRig_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBlueprintCameraDirectorEvaluator::execActivatePersistentVisualCameraRig)
{
	P_GET_OBJECT(UCameraRigAsset,Z_Param_CameraRigPrefab);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ActivatePersistentVisualCameraRig(Z_Param_CameraRigPrefab);
	P_NATIVE_END;
}
// End Class UBlueprintCameraDirectorEvaluator Function ActivatePersistentVisualCameraRig

// Begin Class UBlueprintCameraDirectorEvaluator Function DeactivateCameraDirector
struct BlueprintCameraDirectorEvaluator_eventDeactivateCameraDirector_Parms
{
	FBlueprintCameraDirectorDeactivateParams Params;
};
static const FName NAME_UBlueprintCameraDirectorEvaluator_DeactivateCameraDirector = FName(TEXT("DeactivateCameraDirector"));
void UBlueprintCameraDirectorEvaluator::DeactivateCameraDirector(FBlueprintCameraDirectorDeactivateParams const& Params)
{
	BlueprintCameraDirectorEvaluator_eventDeactivateCameraDirector_Parms Parms;
	Parms.Params=Params;
	UFunction* Func = FindFunctionChecked(NAME_UBlueprintCameraDirectorEvaluator_DeactivateCameraDirector);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_DeactivateCameraDirector_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Activation" },
		{ "Comment", "/**\n\x09 * Override this method in Blueprint to execute custom logic when this\n\x09 * camera director gets deactivated.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Directors/BlueprintCameraDirector.h" },
		{ "ToolTip", "Override this method in Blueprint to execute custom logic when this\ncamera director gets deactivated." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Params_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Params;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_DeactivateCameraDirector_Statics::NewProp_Params = { "Params", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintCameraDirectorEvaluator_eventDeactivateCameraDirector_Parms, Params), Z_Construct_UScriptStruct_FBlueprintCameraDirectorDeactivateParams, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Params_MetaData), NewProp_Params_MetaData) }; // 3744004262
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_DeactivateCameraDirector_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_DeactivateCameraDirector_Statics::NewProp_Params,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_DeactivateCameraDirector_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_DeactivateCameraDirector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintCameraDirectorEvaluator, nullptr, "DeactivateCameraDirector", nullptr, nullptr, Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_DeactivateCameraDirector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_DeactivateCameraDirector_Statics::PropPointers), sizeof(BlueprintCameraDirectorEvaluator_eventDeactivateCameraDirector_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_DeactivateCameraDirector_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_DeactivateCameraDirector_Statics::Function_MetaDataParams) };
static_assert(sizeof(BlueprintCameraDirectorEvaluator_eventDeactivateCameraDirector_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_DeactivateCameraDirector()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_DeactivateCameraDirector_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UBlueprintCameraDirectorEvaluator Function DeactivateCameraDirector

// Begin Class UBlueprintCameraDirectorEvaluator Function DeactivatePersistentBaseCameraRig
struct Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_DeactivatePersistentBaseCameraRig_Statics
{
	struct BlueprintCameraDirectorEvaluator_eventDeactivatePersistentBaseCameraRig_Parms
	{
		UCameraRigAsset* CameraRigPrefab;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Activation" },
		{ "Comment", "/** Deactivates the given camera rig prefab in the base layer. */" },
		{ "ModuleRelativePath", "Public/Directors/BlueprintCameraDirector.h" },
		{ "ToolTip", "Deactivates the given camera rig prefab in the base layer." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraRigPrefab;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_DeactivatePersistentBaseCameraRig_Statics::NewProp_CameraRigPrefab = { "CameraRigPrefab", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintCameraDirectorEvaluator_eventDeactivatePersistentBaseCameraRig_Parms, CameraRigPrefab), Z_Construct_UClass_UCameraRigAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_DeactivatePersistentBaseCameraRig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_DeactivatePersistentBaseCameraRig_Statics::NewProp_CameraRigPrefab,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_DeactivatePersistentBaseCameraRig_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_DeactivatePersistentBaseCameraRig_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintCameraDirectorEvaluator, nullptr, "DeactivatePersistentBaseCameraRig", nullptr, nullptr, Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_DeactivatePersistentBaseCameraRig_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_DeactivatePersistentBaseCameraRig_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_DeactivatePersistentBaseCameraRig_Statics::BlueprintCameraDirectorEvaluator_eventDeactivatePersistentBaseCameraRig_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_DeactivatePersistentBaseCameraRig_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_DeactivatePersistentBaseCameraRig_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_DeactivatePersistentBaseCameraRig_Statics::BlueprintCameraDirectorEvaluator_eventDeactivatePersistentBaseCameraRig_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_DeactivatePersistentBaseCameraRig()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_DeactivatePersistentBaseCameraRig_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBlueprintCameraDirectorEvaluator::execDeactivatePersistentBaseCameraRig)
{
	P_GET_OBJECT(UCameraRigAsset,Z_Param_CameraRigPrefab);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DeactivatePersistentBaseCameraRig(Z_Param_CameraRigPrefab);
	P_NATIVE_END;
}
// End Class UBlueprintCameraDirectorEvaluator Function DeactivatePersistentBaseCameraRig

// Begin Class UBlueprintCameraDirectorEvaluator Function DeactivatePersistentGlobalCameraRig
struct Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_DeactivatePersistentGlobalCameraRig_Statics
{
	struct BlueprintCameraDirectorEvaluator_eventDeactivatePersistentGlobalCameraRig_Parms
	{
		UCameraRigAsset* CameraRigPrefab;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Activation" },
		{ "Comment", "/** Deactivates the given camera rig prefab in the global layer. */" },
		{ "ModuleRelativePath", "Public/Directors/BlueprintCameraDirector.h" },
		{ "ToolTip", "Deactivates the given camera rig prefab in the global layer." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraRigPrefab;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_DeactivatePersistentGlobalCameraRig_Statics::NewProp_CameraRigPrefab = { "CameraRigPrefab", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintCameraDirectorEvaluator_eventDeactivatePersistentGlobalCameraRig_Parms, CameraRigPrefab), Z_Construct_UClass_UCameraRigAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_DeactivatePersistentGlobalCameraRig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_DeactivatePersistentGlobalCameraRig_Statics::NewProp_CameraRigPrefab,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_DeactivatePersistentGlobalCameraRig_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_DeactivatePersistentGlobalCameraRig_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintCameraDirectorEvaluator, nullptr, "DeactivatePersistentGlobalCameraRig", nullptr, nullptr, Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_DeactivatePersistentGlobalCameraRig_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_DeactivatePersistentGlobalCameraRig_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_DeactivatePersistentGlobalCameraRig_Statics::BlueprintCameraDirectorEvaluator_eventDeactivatePersistentGlobalCameraRig_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_DeactivatePersistentGlobalCameraRig_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_DeactivatePersistentGlobalCameraRig_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_DeactivatePersistentGlobalCameraRig_Statics::BlueprintCameraDirectorEvaluator_eventDeactivatePersistentGlobalCameraRig_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_DeactivatePersistentGlobalCameraRig()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_DeactivatePersistentGlobalCameraRig_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBlueprintCameraDirectorEvaluator::execDeactivatePersistentGlobalCameraRig)
{
	P_GET_OBJECT(UCameraRigAsset,Z_Param_CameraRigPrefab);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DeactivatePersistentGlobalCameraRig(Z_Param_CameraRigPrefab);
	P_NATIVE_END;
}
// End Class UBlueprintCameraDirectorEvaluator Function DeactivatePersistentGlobalCameraRig

// Begin Class UBlueprintCameraDirectorEvaluator Function DeactivatePersistentVisualCameraRig
struct Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_DeactivatePersistentVisualCameraRig_Statics
{
	struct BlueprintCameraDirectorEvaluator_eventDeactivatePersistentVisualCameraRig_Parms
	{
		UCameraRigAsset* CameraRigPrefab;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Activation" },
		{ "Comment", "/** Deactivates the given camera rig prefab in the visual layer. */" },
		{ "ModuleRelativePath", "Public/Directors/BlueprintCameraDirector.h" },
		{ "ToolTip", "Deactivates the given camera rig prefab in the visual layer." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraRigPrefab;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_DeactivatePersistentVisualCameraRig_Statics::NewProp_CameraRigPrefab = { "CameraRigPrefab", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintCameraDirectorEvaluator_eventDeactivatePersistentVisualCameraRig_Parms, CameraRigPrefab), Z_Construct_UClass_UCameraRigAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_DeactivatePersistentVisualCameraRig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_DeactivatePersistentVisualCameraRig_Statics::NewProp_CameraRigPrefab,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_DeactivatePersistentVisualCameraRig_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_DeactivatePersistentVisualCameraRig_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintCameraDirectorEvaluator, nullptr, "DeactivatePersistentVisualCameraRig", nullptr, nullptr, Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_DeactivatePersistentVisualCameraRig_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_DeactivatePersistentVisualCameraRig_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_DeactivatePersistentVisualCameraRig_Statics::BlueprintCameraDirectorEvaluator_eventDeactivatePersistentVisualCameraRig_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_DeactivatePersistentVisualCameraRig_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_DeactivatePersistentVisualCameraRig_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_DeactivatePersistentVisualCameraRig_Statics::BlueprintCameraDirectorEvaluator_eventDeactivatePersistentVisualCameraRig_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_DeactivatePersistentVisualCameraRig()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_DeactivatePersistentVisualCameraRig_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBlueprintCameraDirectorEvaluator::execDeactivatePersistentVisualCameraRig)
{
	P_GET_OBJECT(UCameraRigAsset,Z_Param_CameraRigPrefab);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DeactivatePersistentVisualCameraRig(Z_Param_CameraRigPrefab);
	P_NATIVE_END;
}
// End Class UBlueprintCameraDirectorEvaluator Function DeactivatePersistentVisualCameraRig

// Begin Class UBlueprintCameraDirectorEvaluator Function FindEvaluationContextOwnerActor
struct Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_FindEvaluationContextOwnerActor_Statics
{
	struct BlueprintCameraDirectorEvaluator_eventFindEvaluationContextOwnerActor_Parms
	{
		TSubclassOf<AActor> ActorClass;
		AActor* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Evaluation" },
		{ "Comment", "/**\n\x09 * A utility function that tries to find if an actor owns the evaluation context.\n\x09 * Handles the situation where the evaluation context is an actor component (like a\n\x09 * UGameplayCameraComponent) or an actor itself.\n\x09 */" },
		{ "DeterminesOutputType", "ActorClass" },
		{ "ModuleRelativePath", "Public/Directors/BlueprintCameraDirector.h" },
		{ "ToolTip", "A utility function that tries to find if an actor owns the evaluation context.\nHandles the situation where the evaluation context is an actor component (like a\nUGameplayCameraComponent) or an actor itself." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ActorClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_FindEvaluationContextOwnerActor_Statics::NewProp_ActorClass = { "ActorClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintCameraDirectorEvaluator_eventFindEvaluationContextOwnerActor_Parms, ActorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_FindEvaluationContextOwnerActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintCameraDirectorEvaluator_eventFindEvaluationContextOwnerActor_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_FindEvaluationContextOwnerActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_FindEvaluationContextOwnerActor_Statics::NewProp_ActorClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_FindEvaluationContextOwnerActor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_FindEvaluationContextOwnerActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_FindEvaluationContextOwnerActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintCameraDirectorEvaluator, nullptr, "FindEvaluationContextOwnerActor", nullptr, nullptr, Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_FindEvaluationContextOwnerActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_FindEvaluationContextOwnerActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_FindEvaluationContextOwnerActor_Statics::BlueprintCameraDirectorEvaluator_eventFindEvaluationContextOwnerActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_FindEvaluationContextOwnerActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_FindEvaluationContextOwnerActor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_FindEvaluationContextOwnerActor_Statics::BlueprintCameraDirectorEvaluator_eventFindEvaluationContextOwnerActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_FindEvaluationContextOwnerActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_FindEvaluationContextOwnerActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBlueprintCameraDirectorEvaluator::execFindEvaluationContextOwnerActor)
{
	P_GET_OBJECT(UClass,Z_Param_ActorClass);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AActor**)Z_Param__Result=P_THIS->FindEvaluationContextOwnerActor(Z_Param_ActorClass);
	P_NATIVE_END;
}
// End Class UBlueprintCameraDirectorEvaluator Function FindEvaluationContextOwnerActor

// Begin Class UBlueprintCameraDirectorEvaluator Function GetCameraRig
struct Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_GetCameraRig_Statics
{
	struct BlueprintCameraDirectorEvaluator_eventGetCameraRig_Parms
	{
		UCameraRigAsset* CameraRig;
		UCameraRigAsset* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Evaluation" },
		{ "Comment", "/** Gets a camera rig from the referencing camera asset. */" },
		{ "HideSelfPin", "TRUE" },
		{ "ModuleRelativePath", "Public/Directors/BlueprintCameraDirector.h" },
		{ "ToolTip", "Gets a camera rig from the referencing camera asset." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraRig_MetaData[] = {
		{ "UseBlueprintCameraDirectorRigPicker", "TRUE" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraRig;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_GetCameraRig_Statics::NewProp_CameraRig = { "CameraRig", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintCameraDirectorEvaluator_eventGetCameraRig_Parms, CameraRig), Z_Construct_UClass_UCameraRigAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraRig_MetaData), NewProp_CameraRig_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_GetCameraRig_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintCameraDirectorEvaluator_eventGetCameraRig_Parms, ReturnValue), Z_Construct_UClass_UCameraRigAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_GetCameraRig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_GetCameraRig_Statics::NewProp_CameraRig,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_GetCameraRig_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_GetCameraRig_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_GetCameraRig_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintCameraDirectorEvaluator, nullptr, "GetCameraRig", nullptr, nullptr, Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_GetCameraRig_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_GetCameraRig_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_GetCameraRig_Statics::BlueprintCameraDirectorEvaluator_eventGetCameraRig_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_GetCameraRig_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_GetCameraRig_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_GetCameraRig_Statics::BlueprintCameraDirectorEvaluator_eventGetCameraRig_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_GetCameraRig()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_GetCameraRig_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBlueprintCameraDirectorEvaluator::execGetCameraRig)
{
	P_GET_OBJECT(UCameraRigAsset,Z_Param_CameraRig);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UCameraRigAsset**)Z_Param__Result=P_THIS->GetCameraRig(Z_Param_CameraRig);
	P_NATIVE_END;
}
// End Class UBlueprintCameraDirectorEvaluator Function GetCameraRig

// Begin Class UBlueprintCameraDirectorEvaluator Function GetInitialContextCameraPose
struct Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_GetInitialContextCameraPose_Statics
{
	struct BlueprintCameraDirectorEvaluator_eventGetInitialContextCameraPose_Parms
	{
		FBlueprintCameraPose ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Evaluation" },
		{ "Comment", "/**\n\x09 * Gets the initial evaluation context camera pose.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Directors/BlueprintCameraDirector.h" },
		{ "ToolTip", "Gets the initial evaluation context camera pose." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_GetInitialContextCameraPose_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintCameraDirectorEvaluator_eventGetInitialContextCameraPose_Parms, ReturnValue), Z_Construct_UScriptStruct_FBlueprintCameraPose, METADATA_PARAMS(0, nullptr) }; // 3605729677
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_GetInitialContextCameraPose_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_GetInitialContextCameraPose_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_GetInitialContextCameraPose_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_GetInitialContextCameraPose_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintCameraDirectorEvaluator, nullptr, "GetInitialContextCameraPose", nullptr, nullptr, Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_GetInitialContextCameraPose_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_GetInitialContextCameraPose_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_GetInitialContextCameraPose_Statics::BlueprintCameraDirectorEvaluator_eventGetInitialContextCameraPose_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_GetInitialContextCameraPose_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_GetInitialContextCameraPose_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_GetInitialContextCameraPose_Statics::BlueprintCameraDirectorEvaluator_eventGetInitialContextCameraPose_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_GetInitialContextCameraPose()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_GetInitialContextCameraPose_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBlueprintCameraDirectorEvaluator::execGetInitialContextCameraPose)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FBlueprintCameraPose*)Z_Param__Result=P_THIS->GetInitialContextCameraPose();
	P_NATIVE_END;
}
// End Class UBlueprintCameraDirectorEvaluator Function GetInitialContextCameraPose

// Begin Class UBlueprintCameraDirectorEvaluator Function GetInitialContextVariableTable
struct Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_GetInitialContextVariableTable_Statics
{
	struct BlueprintCameraDirectorEvaluator_eventGetInitialContextVariableTable_Parms
	{
		FBlueprintCameraVariableTable ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Evaluation" },
		{ "Comment", "/**\n\x09 * Gets the initial evaluation context camera variable table.\n\x09 * WARNING: setting variables here will affect ALL running camera rigs!\n\x09 */" },
		{ "ModuleRelativePath", "Public/Directors/BlueprintCameraDirector.h" },
		{ "ToolTip", "Gets the initial evaluation context camera variable table.\nWARNING: setting variables here will affect ALL running camera rigs!" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_GetInitialContextVariableTable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintCameraDirectorEvaluator_eventGetInitialContextVariableTable_Parms, ReturnValue), Z_Construct_UScriptStruct_FBlueprintCameraVariableTable, METADATA_PARAMS(0, nullptr) }; // 2718450583
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_GetInitialContextVariableTable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_GetInitialContextVariableTable_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_GetInitialContextVariableTable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_GetInitialContextVariableTable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintCameraDirectorEvaluator, nullptr, "GetInitialContextVariableTable", nullptr, nullptr, Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_GetInitialContextVariableTable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_GetInitialContextVariableTable_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_GetInitialContextVariableTable_Statics::BlueprintCameraDirectorEvaluator_eventGetInitialContextVariableTable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_GetInitialContextVariableTable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_GetInitialContextVariableTable_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_GetInitialContextVariableTable_Statics::BlueprintCameraDirectorEvaluator_eventGetInitialContextVariableTable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_GetInitialContextVariableTable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_GetInitialContextVariableTable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBlueprintCameraDirectorEvaluator::execGetInitialContextVariableTable)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FBlueprintCameraVariableTable*)Z_Param__Result=P_THIS->GetInitialContextVariableTable();
	P_NATIVE_END;
}
// End Class UBlueprintCameraDirectorEvaluator Function GetInitialContextVariableTable

// Begin Class UBlueprintCameraDirectorEvaluator Function RunCameraDirector
struct BlueprintCameraDirectorEvaluator_eventRunCameraDirector_Parms
{
	FBlueprintCameraDirectorEvaluationParams Params;
};
static const FName NAME_UBlueprintCameraDirectorEvaluator_RunCameraDirector = FName(TEXT("RunCameraDirector"));
void UBlueprintCameraDirectorEvaluator::RunCameraDirector(FBlueprintCameraDirectorEvaluationParams const& Params)
{
	BlueprintCameraDirectorEvaluator_eventRunCameraDirector_Parms Parms;
	Parms.Params=Params;
	UFunction* Func = FindFunctionChecked(NAME_UBlueprintCameraDirectorEvaluator_RunCameraDirector);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_RunCameraDirector_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Evaluation" },
		{ "Comment", "/**\n\x09 * Override this method in Blueprint to execute the custom logic that determines\n\x09 * what camera rig(s) should be active every frame.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Directors/BlueprintCameraDirector.h" },
		{ "ToolTip", "Override this method in Blueprint to execute the custom logic that determines\nwhat camera rig(s) should be active every frame." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Params_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Params;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_RunCameraDirector_Statics::NewProp_Params = { "Params", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintCameraDirectorEvaluator_eventRunCameraDirector_Parms, Params), Z_Construct_UScriptStruct_FBlueprintCameraDirectorEvaluationParams, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Params_MetaData), NewProp_Params_MetaData) }; // 1157715188
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_RunCameraDirector_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_RunCameraDirector_Statics::NewProp_Params,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_RunCameraDirector_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_RunCameraDirector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintCameraDirectorEvaluator, nullptr, "RunCameraDirector", nullptr, nullptr, Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_RunCameraDirector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_RunCameraDirector_Statics::PropPointers), sizeof(BlueprintCameraDirectorEvaluator_eventRunCameraDirector_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_RunCameraDirector_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_RunCameraDirector_Statics::Function_MetaDataParams) };
static_assert(sizeof(BlueprintCameraDirectorEvaluator_eventRunCameraDirector_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_RunCameraDirector()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_RunCameraDirector_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UBlueprintCameraDirectorEvaluator Function RunCameraDirector

// Begin Class UBlueprintCameraDirectorEvaluator Function SetInitialContextCameraPose
struct Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_SetInitialContextCameraPose_Statics
{
	struct BlueprintCameraDirectorEvaluator_eventSetInitialContextCameraPose_Parms
	{
		FBlueprintCameraPose InCameraPose;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Evaluation" },
		{ "Comment", "/**\n\x09 * Sets the initial evaluation context camera pose.\n\x09 * WARNING: this will change the initial pose of ALL running camera rigs!\n\x09 */" },
		{ "ModuleRelativePath", "Public/Directors/BlueprintCameraDirector.h" },
		{ "ToolTip", "Sets the initial evaluation context camera pose.\nWARNING: this will change the initial pose of ALL running camera rigs!" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InCameraPose_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InCameraPose;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_SetInitialContextCameraPose_Statics::NewProp_InCameraPose = { "InCameraPose", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintCameraDirectorEvaluator_eventSetInitialContextCameraPose_Parms, InCameraPose), Z_Construct_UScriptStruct_FBlueprintCameraPose, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InCameraPose_MetaData), NewProp_InCameraPose_MetaData) }; // 3605729677
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_SetInitialContextCameraPose_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_SetInitialContextCameraPose_Statics::NewProp_InCameraPose,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_SetInitialContextCameraPose_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_SetInitialContextCameraPose_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintCameraDirectorEvaluator, nullptr, "SetInitialContextCameraPose", nullptr, nullptr, Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_SetInitialContextCameraPose_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_SetInitialContextCameraPose_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_SetInitialContextCameraPose_Statics::BlueprintCameraDirectorEvaluator_eventSetInitialContextCameraPose_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_SetInitialContextCameraPose_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_SetInitialContextCameraPose_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_SetInitialContextCameraPose_Statics::BlueprintCameraDirectorEvaluator_eventSetInitialContextCameraPose_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_SetInitialContextCameraPose()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_SetInitialContextCameraPose_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBlueprintCameraDirectorEvaluator::execSetInitialContextCameraPose)
{
	P_GET_STRUCT_REF(FBlueprintCameraPose,Z_Param_Out_InCameraPose);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetInitialContextCameraPose(Z_Param_Out_InCameraPose);
	P_NATIVE_END;
}
// End Class UBlueprintCameraDirectorEvaluator Function SetInitialContextCameraPose

// Begin Class UBlueprintCameraDirectorEvaluator
void UBlueprintCameraDirectorEvaluator::StaticRegisterNativesUBlueprintCameraDirectorEvaluator()
{
	UClass* Class = UBlueprintCameraDirectorEvaluator::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ActivateCameraRig", &UBlueprintCameraDirectorEvaluator::execActivateCameraRig },
		{ "ActivateCameraRigPrefab", &UBlueprintCameraDirectorEvaluator::execActivateCameraRigPrefab },
		{ "ActivateCameraRigViaProxy", &UBlueprintCameraDirectorEvaluator::execActivateCameraRigViaProxy },
		{ "ActivatePersistentBaseCameraRig", &UBlueprintCameraDirectorEvaluator::execActivatePersistentBaseCameraRig },
		{ "ActivatePersistentGlobalCameraRig", &UBlueprintCameraDirectorEvaluator::execActivatePersistentGlobalCameraRig },
		{ "ActivatePersistentVisualCameraRig", &UBlueprintCameraDirectorEvaluator::execActivatePersistentVisualCameraRig },
		{ "DeactivatePersistentBaseCameraRig", &UBlueprintCameraDirectorEvaluator::execDeactivatePersistentBaseCameraRig },
		{ "DeactivatePersistentGlobalCameraRig", &UBlueprintCameraDirectorEvaluator::execDeactivatePersistentGlobalCameraRig },
		{ "DeactivatePersistentVisualCameraRig", &UBlueprintCameraDirectorEvaluator::execDeactivatePersistentVisualCameraRig },
		{ "FindEvaluationContextOwnerActor", &UBlueprintCameraDirectorEvaluator::execFindEvaluationContextOwnerActor },
		{ "GetCameraRig", &UBlueprintCameraDirectorEvaluator::execGetCameraRig },
		{ "GetInitialContextCameraPose", &UBlueprintCameraDirectorEvaluator::execGetInitialContextCameraPose },
		{ "GetInitialContextVariableTable", &UBlueprintCameraDirectorEvaluator::execGetInitialContextVariableTable },
		{ "SetInitialContextCameraPose", &UBlueprintCameraDirectorEvaluator::execSetInitialContextCameraPose },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBlueprintCameraDirectorEvaluator);
UClass* Z_Construct_UClass_UBlueprintCameraDirectorEvaluator_NoRegister()
{
	return UBlueprintCameraDirectorEvaluator::StaticClass();
}
struct Z_Construct_UClass_UBlueprintCameraDirectorEvaluator_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Base class for a Blueprint camera director evaluator.\n */" },
		{ "IncludePath", "Directors/BlueprintCameraDirector.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Directors/BlueprintCameraDirector.h" },
		{ "ToolTip", "Base class for a Blueprint camera director evaluator." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_ActivateCameraDirector, "ActivateCameraDirector" }, // 215293444
		{ &Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_ActivateCameraRig, "ActivateCameraRig" }, // 1595215314
		{ &Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_ActivateCameraRigPrefab, "ActivateCameraRigPrefab" }, // 22713104
		{ &Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_ActivateCameraRigViaProxy, "ActivateCameraRigViaProxy" }, // 360344353
		{ &Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_ActivatePersistentBaseCameraRig, "ActivatePersistentBaseCameraRig" }, // 326912124
		{ &Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_ActivatePersistentGlobalCameraRig, "ActivatePersistentGlobalCameraRig" }, // 3715800797
		{ &Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_ActivatePersistentVisualCameraRig, "ActivatePersistentVisualCameraRig" }, // 4188672789
		{ &Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_DeactivateCameraDirector, "DeactivateCameraDirector" }, // 3548820138
		{ &Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_DeactivatePersistentBaseCameraRig, "DeactivatePersistentBaseCameraRig" }, // 2954804182
		{ &Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_DeactivatePersistentGlobalCameraRig, "DeactivatePersistentGlobalCameraRig" }, // 652067969
		{ &Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_DeactivatePersistentVisualCameraRig, "DeactivatePersistentVisualCameraRig" }, // 2770681729
		{ &Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_FindEvaluationContextOwnerActor, "FindEvaluationContextOwnerActor" }, // 2072994551
		{ &Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_GetCameraRig, "GetCameraRig" }, // 2330579718
		{ &Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_GetInitialContextCameraPose, "GetInitialContextCameraPose" }, // 73763952
		{ &Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_GetInitialContextVariableTable, "GetInitialContextVariableTable" }, // 3694643755
		{ &Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_RunCameraDirector, "RunCameraDirector" }, // 2346240327
		{ &Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_SetInitialContextCameraPose, "SetInitialContextCameraPose" }, // 67053947
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlueprintCameraDirectorEvaluator>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBlueprintCameraDirectorEvaluator_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayCameras,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintCameraDirectorEvaluator_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBlueprintCameraDirectorEvaluator_Statics::ClassParams = {
	&UBlueprintCameraDirectorEvaluator::StaticClass,
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
	0x000800A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintCameraDirectorEvaluator_Statics::Class_MetaDataParams), Z_Construct_UClass_UBlueprintCameraDirectorEvaluator_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBlueprintCameraDirectorEvaluator()
{
	if (!Z_Registration_Info_UClass_UBlueprintCameraDirectorEvaluator.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBlueprintCameraDirectorEvaluator.OuterSingleton, Z_Construct_UClass_UBlueprintCameraDirectorEvaluator_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBlueprintCameraDirectorEvaluator.OuterSingleton;
}
template<> GAMEPLAYCAMERAS_API UClass* StaticClass<UBlueprintCameraDirectorEvaluator>()
{
	return UBlueprintCameraDirectorEvaluator::StaticClass();
}
UBlueprintCameraDirectorEvaluator::UBlueprintCameraDirectorEvaluator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBlueprintCameraDirectorEvaluator);
UBlueprintCameraDirectorEvaluator::~UBlueprintCameraDirectorEvaluator() {}
// End Class UBlueprintCameraDirectorEvaluator

// Begin Class UBlueprintCameraDirector
void UBlueprintCameraDirector::StaticRegisterNativesUBlueprintCameraDirector()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBlueprintCameraDirector);
UClass* Z_Construct_UClass_UBlueprintCameraDirector_NoRegister()
{
	return UBlueprintCameraDirector::StaticClass();
}
struct Z_Construct_UClass_UBlueprintCameraDirector_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A camera director that will instantiate the given Blueprint and run it.\n */" },
		{ "IncludePath", "Directors/BlueprintCameraDirector.h" },
		{ "ModuleRelativePath", "Public/Directors/BlueprintCameraDirector.h" },
		{ "ToolTip", "A camera director that will instantiate the given Blueprint and run it." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraDirectorEvaluatorClass_MetaData[] = {
		{ "Category", "Evaluation" },
		{ "Comment", "/** The blueprint class that we should instantiate and run. */" },
		{ "ModuleRelativePath", "Public/Directors/BlueprintCameraDirector.h" },
		{ "ToolTip", "The blueprint class that we should instantiate and run." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraRigProxyTable_MetaData[] = {
		{ "Category", "Evaluation" },
		{ "Comment", "/** \n\x09 * The table that maps camera rig proxies (used in the evaluator Blueprint graph)\n\x09 * to actual camera rigs.\n\x09 */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Directors/BlueprintCameraDirector.h" },
		{ "ToolTip", "The table that maps camera rig proxies (used in the evaluator Blueprint graph)\nto actual camera rigs." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_CameraDirectorEvaluatorClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraRigProxyTable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlueprintCameraDirector>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UBlueprintCameraDirector_Statics::NewProp_CameraDirectorEvaluatorClass = { "CameraDirectorEvaluatorClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBlueprintCameraDirector, CameraDirectorEvaluatorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UBlueprintCameraDirectorEvaluator_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraDirectorEvaluatorClass_MetaData), NewProp_CameraDirectorEvaluatorClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBlueprintCameraDirector_Statics::NewProp_CameraRigProxyTable = { "CameraRigProxyTable", nullptr, (EPropertyFlags)0x0116000000080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBlueprintCameraDirector, CameraRigProxyTable), Z_Construct_UClass_UCameraRigProxyTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraRigProxyTable_MetaData), NewProp_CameraRigProxyTable_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBlueprintCameraDirector_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintCameraDirector_Statics::NewProp_CameraDirectorEvaluatorClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintCameraDirector_Statics::NewProp_CameraRigProxyTable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintCameraDirector_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBlueprintCameraDirector_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCameraDirector,
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayCameras,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintCameraDirector_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBlueprintCameraDirector_Statics::ClassParams = {
	&UBlueprintCameraDirector::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBlueprintCameraDirector_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintCameraDirector_Statics::PropPointers),
	0,
	0x00A810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintCameraDirector_Statics::Class_MetaDataParams), Z_Construct_UClass_UBlueprintCameraDirector_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBlueprintCameraDirector()
{
	if (!Z_Registration_Info_UClass_UBlueprintCameraDirector.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBlueprintCameraDirector.OuterSingleton, Z_Construct_UClass_UBlueprintCameraDirector_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBlueprintCameraDirector.OuterSingleton;
}
template<> GAMEPLAYCAMERAS_API UClass* StaticClass<UBlueprintCameraDirector>()
{
	return UBlueprintCameraDirector::StaticClass();
}
UBlueprintCameraDirector::UBlueprintCameraDirector(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBlueprintCameraDirector);
UBlueprintCameraDirector::~UBlueprintCameraDirector() {}
// End Class UBlueprintCameraDirector

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Directors_BlueprintCameraDirector_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FBlueprintCameraDirectorActivateParams::StaticStruct, Z_Construct_UScriptStruct_FBlueprintCameraDirectorActivateParams_Statics::NewStructOps, TEXT("BlueprintCameraDirectorActivateParams"), &Z_Registration_Info_UScriptStruct_BlueprintCameraDirectorActivateParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBlueprintCameraDirectorActivateParams), 4074802415U) },
		{ FBlueprintCameraDirectorDeactivateParams::StaticStruct, Z_Construct_UScriptStruct_FBlueprintCameraDirectorDeactivateParams_Statics::NewStructOps, TEXT("BlueprintCameraDirectorDeactivateParams"), &Z_Registration_Info_UScriptStruct_BlueprintCameraDirectorDeactivateParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBlueprintCameraDirectorDeactivateParams), 3744004262U) },
		{ FBlueprintCameraDirectorEvaluationParams::StaticStruct, Z_Construct_UScriptStruct_FBlueprintCameraDirectorEvaluationParams_Statics::NewStructOps, TEXT("BlueprintCameraDirectorEvaluationParams"), &Z_Registration_Info_UScriptStruct_BlueprintCameraDirectorEvaluationParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBlueprintCameraDirectorEvaluationParams), 1157715188U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBlueprintCameraDirectorEvaluator, UBlueprintCameraDirectorEvaluator::StaticClass, TEXT("UBlueprintCameraDirectorEvaluator"), &Z_Registration_Info_UClass_UBlueprintCameraDirectorEvaluator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBlueprintCameraDirectorEvaluator), 1064224304U) },
		{ Z_Construct_UClass_UBlueprintCameraDirector, UBlueprintCameraDirector::StaticClass, TEXT("UBlueprintCameraDirector"), &Z_Registration_Info_UClass_UBlueprintCameraDirector, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBlueprintCameraDirector), 1847227266U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Directors_BlueprintCameraDirector_h_3875599386(TEXT("/Script/GameplayCameras"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Directors_BlueprintCameraDirector_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Directors_BlueprintCameraDirector_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Directors_BlueprintCameraDirector_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Directors_BlueprintCameraDirector_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
