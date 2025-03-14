// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Components/SceneCaptureComponent.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSceneCaptureComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneCaptureComponent();
ENGINE_API UClass* Z_Construct_UClass_USceneCaptureComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ESceneCapturePrimitiveRenderMode();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ESceneCaptureSource();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FEngineShowFlagsSetting();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin ScriptStruct FEngineShowFlagsSetting
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EngineShowFlagsSetting;
class UScriptStruct* FEngineShowFlagsSetting::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EngineShowFlagsSetting.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EngineShowFlagsSetting.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEngineShowFlagsSetting, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EngineShowFlagsSetting"));
	}
	return Z_Registration_Info_UScriptStruct_EngineShowFlagsSetting.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FEngineShowFlagsSetting>()
{
	return FEngineShowFlagsSetting::StaticStruct();
}
struct Z_Construct_UScriptStruct_FEngineShowFlagsSetting_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Components/SceneCaptureComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShowFlagName_MetaData[] = {
		{ "Category", "SceneCapture" },
		{ "ModuleRelativePath", "Classes/Components/SceneCaptureComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Enabled_MetaData[] = {
		{ "Category", "SceneCapture" },
		{ "ModuleRelativePath", "Classes/Components/SceneCaptureComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ShowFlagName;
	static void NewProp_Enabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Enabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEngineShowFlagsSetting>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEngineShowFlagsSetting_Statics::NewProp_ShowFlagName = { "ShowFlagName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEngineShowFlagsSetting, ShowFlagName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShowFlagName_MetaData), NewProp_ShowFlagName_MetaData) };
void Z_Construct_UScriptStruct_FEngineShowFlagsSetting_Statics::NewProp_Enabled_SetBit(void* Obj)
{
	((FEngineShowFlagsSetting*)Obj)->Enabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEngineShowFlagsSetting_Statics::NewProp_Enabled = { "Enabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FEngineShowFlagsSetting), &Z_Construct_UScriptStruct_FEngineShowFlagsSetting_Statics::NewProp_Enabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Enabled_MetaData), NewProp_Enabled_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEngineShowFlagsSetting_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEngineShowFlagsSetting_Statics::NewProp_ShowFlagName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEngineShowFlagsSetting_Statics::NewProp_Enabled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEngineShowFlagsSetting_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEngineShowFlagsSetting_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"EngineShowFlagsSetting",
	Z_Construct_UScriptStruct_FEngineShowFlagsSetting_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEngineShowFlagsSetting_Statics::PropPointers),
	sizeof(FEngineShowFlagsSetting),
	alignof(FEngineShowFlagsSetting),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEngineShowFlagsSetting_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FEngineShowFlagsSetting_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FEngineShowFlagsSetting()
{
	if (!Z_Registration_Info_UScriptStruct_EngineShowFlagsSetting.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EngineShowFlagsSetting.InnerSingleton, Z_Construct_UScriptStruct_FEngineShowFlagsSetting_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_EngineShowFlagsSetting.InnerSingleton;
}
// End ScriptStruct FEngineShowFlagsSetting

// Begin Enum ESceneCapturePrimitiveRenderMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESceneCapturePrimitiveRenderMode;
static UEnum* ESceneCapturePrimitiveRenderMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESceneCapturePrimitiveRenderMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESceneCapturePrimitiveRenderMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ESceneCapturePrimitiveRenderMode, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ESceneCapturePrimitiveRenderMode"));
	}
	return Z_Registration_Info_UEnum_ESceneCapturePrimitiveRenderMode.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<ESceneCapturePrimitiveRenderMode>()
{
	return ESceneCapturePrimitiveRenderMode_StaticEnum();
}
struct Z_Construct_UEnum_Engine_ESceneCapturePrimitiveRenderMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Components/SceneCaptureComponent.h" },
		{ "PRM_LegacySceneCapture.Comment", "/** Legacy */" },
		{ "PRM_LegacySceneCapture.DisplayName", "Render Scene Primitives (Legacy)" },
		{ "PRM_LegacySceneCapture.Name", "ESceneCapturePrimitiveRenderMode::PRM_LegacySceneCapture" },
		{ "PRM_LegacySceneCapture.ToolTip", "Legacy" },
		{ "PRM_RenderScenePrimitives.Comment", "/** Render primitives in the scene, minus HiddenActors. */" },
		{ "PRM_RenderScenePrimitives.DisplayName", "Render Scene Primitives" },
		{ "PRM_RenderScenePrimitives.Name", "ESceneCapturePrimitiveRenderMode::PRM_RenderScenePrimitives" },
		{ "PRM_RenderScenePrimitives.ToolTip", "Render primitives in the scene, minus HiddenActors." },
		{ "PRM_UseShowOnlyList.Comment", "/** Render only primitives in the ShowOnlyActors list, or components specified with ShowOnlyComponent(). */" },
		{ "PRM_UseShowOnlyList.DisplayName", "Use ShowOnly List" },
		{ "PRM_UseShowOnlyList.Name", "ESceneCapturePrimitiveRenderMode::PRM_UseShowOnlyList" },
		{ "PRM_UseShowOnlyList.ToolTip", "Render only primitives in the ShowOnlyActors list, or components specified with ShowOnlyComponent()." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESceneCapturePrimitiveRenderMode::PRM_LegacySceneCapture", (int64)ESceneCapturePrimitiveRenderMode::PRM_LegacySceneCapture },
		{ "ESceneCapturePrimitiveRenderMode::PRM_RenderScenePrimitives", (int64)ESceneCapturePrimitiveRenderMode::PRM_RenderScenePrimitives },
		{ "ESceneCapturePrimitiveRenderMode::PRM_UseShowOnlyList", (int64)ESceneCapturePrimitiveRenderMode::PRM_UseShowOnlyList },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ESceneCapturePrimitiveRenderMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"ESceneCapturePrimitiveRenderMode",
	"ESceneCapturePrimitiveRenderMode",
	Z_Construct_UEnum_Engine_ESceneCapturePrimitiveRenderMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ESceneCapturePrimitiveRenderMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ESceneCapturePrimitiveRenderMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_ESceneCapturePrimitiveRenderMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_ESceneCapturePrimitiveRenderMode()
{
	if (!Z_Registration_Info_UEnum_ESceneCapturePrimitiveRenderMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESceneCapturePrimitiveRenderMode.InnerSingleton, Z_Construct_UEnum_Engine_ESceneCapturePrimitiveRenderMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESceneCapturePrimitiveRenderMode.InnerSingleton;
}
// End Enum ESceneCapturePrimitiveRenderMode

// Begin Class USceneCaptureComponent Function ClearHiddenComponents
struct Z_Construct_UFunction_USceneCaptureComponent_ClearHiddenComponents_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|SceneCapture" },
		{ "Comment", "/** Clears the hidden list. */" },
		{ "ModuleRelativePath", "Classes/Components/SceneCaptureComponent.h" },
		{ "ToolTip", "Clears the hidden list." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USceneCaptureComponent_ClearHiddenComponents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USceneCaptureComponent, nullptr, "ClearHiddenComponents", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USceneCaptureComponent_ClearHiddenComponents_Statics::Function_MetaDataParams), Z_Construct_UFunction_USceneCaptureComponent_ClearHiddenComponents_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_USceneCaptureComponent_ClearHiddenComponents()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USceneCaptureComponent_ClearHiddenComponents_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USceneCaptureComponent::execClearHiddenComponents)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClearHiddenComponents();
	P_NATIVE_END;
}
// End Class USceneCaptureComponent Function ClearHiddenComponents

// Begin Class USceneCaptureComponent Function ClearShowOnlyComponents
struct Z_Construct_UFunction_USceneCaptureComponent_ClearShowOnlyComponents_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|SceneCapture" },
		{ "Comment", "/** Clears the Show Only list. */" },
		{ "ModuleRelativePath", "Classes/Components/SceneCaptureComponent.h" },
		{ "ToolTip", "Clears the Show Only list." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USceneCaptureComponent_ClearShowOnlyComponents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USceneCaptureComponent, nullptr, "ClearShowOnlyComponents", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USceneCaptureComponent_ClearShowOnlyComponents_Statics::Function_MetaDataParams), Z_Construct_UFunction_USceneCaptureComponent_ClearShowOnlyComponents_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_USceneCaptureComponent_ClearShowOnlyComponents()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USceneCaptureComponent_ClearShowOnlyComponents_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USceneCaptureComponent::execClearShowOnlyComponents)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClearShowOnlyComponents();
	P_NATIVE_END;
}
// End Class USceneCaptureComponent Function ClearShowOnlyComponents

// Begin Class USceneCaptureComponent Function GetShowFlagSettings
struct Z_Construct_UFunction_USceneCaptureComponent_GetShowFlagSettings_Statics
{
	struct SceneCaptureComponent_eventGetShowFlagSettings_Parms
	{
		TArray<FEngineShowFlagsSetting> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Comment", "/** Get the show flag settings. */" },
		{ "ModuleRelativePath", "Classes/Components/SceneCaptureComponent.h" },
		{ "ToolTip", "Get the show flag settings." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USceneCaptureComponent_GetShowFlagSettings_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FEngineShowFlagsSetting, METADATA_PARAMS(0, nullptr) }; // 3559122429
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USceneCaptureComponent_GetShowFlagSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SceneCaptureComponent_eventGetShowFlagSettings_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 3559122429
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USceneCaptureComponent_GetShowFlagSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USceneCaptureComponent_GetShowFlagSettings_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USceneCaptureComponent_GetShowFlagSettings_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USceneCaptureComponent_GetShowFlagSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USceneCaptureComponent_GetShowFlagSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USceneCaptureComponent, nullptr, "GetShowFlagSettings", nullptr, nullptr, Z_Construct_UFunction_USceneCaptureComponent_GetShowFlagSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USceneCaptureComponent_GetShowFlagSettings_Statics::PropPointers), sizeof(Z_Construct_UFunction_USceneCaptureComponent_GetShowFlagSettings_Statics::SceneCaptureComponent_eventGetShowFlagSettings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USceneCaptureComponent_GetShowFlagSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_USceneCaptureComponent_GetShowFlagSettings_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USceneCaptureComponent_GetShowFlagSettings_Statics::SceneCaptureComponent_eventGetShowFlagSettings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USceneCaptureComponent_GetShowFlagSettings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USceneCaptureComponent_GetShowFlagSettings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USceneCaptureComponent::execGetShowFlagSettings)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FEngineShowFlagsSetting>*)Z_Param__Result=P_THIS->GetShowFlagSettings();
	P_NATIVE_END;
}
// End Class USceneCaptureComponent Function GetShowFlagSettings

// Begin Class USceneCaptureComponent Function HideActorComponents
struct Z_Construct_UFunction_USceneCaptureComponent_HideActorComponents_Statics
{
	struct SceneCaptureComponent_eventHideActorComponents_Parms
	{
		AActor* InActor;
		bool bIncludeFromChildActors;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|SceneCapture" },
		{ "Comment", "/**\n\x09 * Adds all primitive components in the actor to our list of hidden components.\n\x09 * @param bIncludeFromChildActors Whether to include the components from child actors\n\x09 */" },
		{ "CPP_Default_bIncludeFromChildActors", "false" },
		{ "ModuleRelativePath", "Classes/Components/SceneCaptureComponent.h" },
		{ "ToolTip", "Adds all primitive components in the actor to our list of hidden components.\n@param bIncludeFromChildActors Whether to include the components from child actors" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIncludeFromChildActors_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InActor;
	static void NewProp_bIncludeFromChildActors_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeFromChildActors;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USceneCaptureComponent_HideActorComponents_Statics::NewProp_InActor = { "InActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SceneCaptureComponent_eventHideActorComponents_Parms, InActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USceneCaptureComponent_HideActorComponents_Statics::NewProp_bIncludeFromChildActors_SetBit(void* Obj)
{
	((SceneCaptureComponent_eventHideActorComponents_Parms*)Obj)->bIncludeFromChildActors = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USceneCaptureComponent_HideActorComponents_Statics::NewProp_bIncludeFromChildActors = { "bIncludeFromChildActors", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SceneCaptureComponent_eventHideActorComponents_Parms), &Z_Construct_UFunction_USceneCaptureComponent_HideActorComponents_Statics::NewProp_bIncludeFromChildActors_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIncludeFromChildActors_MetaData), NewProp_bIncludeFromChildActors_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USceneCaptureComponent_HideActorComponents_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USceneCaptureComponent_HideActorComponents_Statics::NewProp_InActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USceneCaptureComponent_HideActorComponents_Statics::NewProp_bIncludeFromChildActors,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USceneCaptureComponent_HideActorComponents_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USceneCaptureComponent_HideActorComponents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USceneCaptureComponent, nullptr, "HideActorComponents", nullptr, nullptr, Z_Construct_UFunction_USceneCaptureComponent_HideActorComponents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USceneCaptureComponent_HideActorComponents_Statics::PropPointers), sizeof(Z_Construct_UFunction_USceneCaptureComponent_HideActorComponents_Statics::SceneCaptureComponent_eventHideActorComponents_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USceneCaptureComponent_HideActorComponents_Statics::Function_MetaDataParams), Z_Construct_UFunction_USceneCaptureComponent_HideActorComponents_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USceneCaptureComponent_HideActorComponents_Statics::SceneCaptureComponent_eventHideActorComponents_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USceneCaptureComponent_HideActorComponents()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USceneCaptureComponent_HideActorComponents_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USceneCaptureComponent::execHideActorComponents)
{
	P_GET_OBJECT(AActor,Z_Param_InActor);
	P_GET_UBOOL(Z_Param_bIncludeFromChildActors);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HideActorComponents(Z_Param_InActor,Z_Param_bIncludeFromChildActors);
	P_NATIVE_END;
}
// End Class USceneCaptureComponent Function HideActorComponents

// Begin Class USceneCaptureComponent Function HideComponent
struct Z_Construct_UFunction_USceneCaptureComponent_HideComponent_Statics
{
	struct SceneCaptureComponent_eventHideComponent_Parms
	{
		UPrimitiveComponent* InComponent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|SceneCapture" },
		{ "Comment", "/** Adds the component to our list of hidden components. */" },
		{ "ModuleRelativePath", "Classes/Components/SceneCaptureComponent.h" },
		{ "ToolTip", "Adds the component to our list of hidden components." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USceneCaptureComponent_HideComponent_Statics::NewProp_InComponent = { "InComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SceneCaptureComponent_eventHideComponent_Parms, InComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InComponent_MetaData), NewProp_InComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USceneCaptureComponent_HideComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USceneCaptureComponent_HideComponent_Statics::NewProp_InComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USceneCaptureComponent_HideComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USceneCaptureComponent_HideComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USceneCaptureComponent, nullptr, "HideComponent", nullptr, nullptr, Z_Construct_UFunction_USceneCaptureComponent_HideComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USceneCaptureComponent_HideComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_USceneCaptureComponent_HideComponent_Statics::SceneCaptureComponent_eventHideComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USceneCaptureComponent_HideComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_USceneCaptureComponent_HideComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USceneCaptureComponent_HideComponent_Statics::SceneCaptureComponent_eventHideComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USceneCaptureComponent_HideComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USceneCaptureComponent_HideComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USceneCaptureComponent::execHideComponent)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_InComponent);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HideComponent(Z_Param_InComponent);
	P_NATIVE_END;
}
// End Class USceneCaptureComponent Function HideComponent

// Begin Class USceneCaptureComponent Function RemoveShowOnlyActorComponents
struct Z_Construct_UFunction_USceneCaptureComponent_RemoveShowOnlyActorComponents_Statics
{
	struct SceneCaptureComponent_eventRemoveShowOnlyActorComponents_Parms
	{
		AActor* InActor;
		bool bIncludeFromChildActors;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|SceneCapture" },
		{ "Comment", "/**\n\x09 * Removes an actor's components from the Show Only list.\n\x09 * @param bIncludeFromChildActors Whether to remove the components from child actors\n\x09 */" },
		{ "CPP_Default_bIncludeFromChildActors", "false" },
		{ "ModuleRelativePath", "Classes/Components/SceneCaptureComponent.h" },
		{ "ToolTip", "Removes an actor's components from the Show Only list.\n@param bIncludeFromChildActors Whether to remove the components from child actors" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIncludeFromChildActors_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InActor;
	static void NewProp_bIncludeFromChildActors_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeFromChildActors;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USceneCaptureComponent_RemoveShowOnlyActorComponents_Statics::NewProp_InActor = { "InActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SceneCaptureComponent_eventRemoveShowOnlyActorComponents_Parms, InActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USceneCaptureComponent_RemoveShowOnlyActorComponents_Statics::NewProp_bIncludeFromChildActors_SetBit(void* Obj)
{
	((SceneCaptureComponent_eventRemoveShowOnlyActorComponents_Parms*)Obj)->bIncludeFromChildActors = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USceneCaptureComponent_RemoveShowOnlyActorComponents_Statics::NewProp_bIncludeFromChildActors = { "bIncludeFromChildActors", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SceneCaptureComponent_eventRemoveShowOnlyActorComponents_Parms), &Z_Construct_UFunction_USceneCaptureComponent_RemoveShowOnlyActorComponents_Statics::NewProp_bIncludeFromChildActors_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIncludeFromChildActors_MetaData), NewProp_bIncludeFromChildActors_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USceneCaptureComponent_RemoveShowOnlyActorComponents_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USceneCaptureComponent_RemoveShowOnlyActorComponents_Statics::NewProp_InActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USceneCaptureComponent_RemoveShowOnlyActorComponents_Statics::NewProp_bIncludeFromChildActors,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USceneCaptureComponent_RemoveShowOnlyActorComponents_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USceneCaptureComponent_RemoveShowOnlyActorComponents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USceneCaptureComponent, nullptr, "RemoveShowOnlyActorComponents", nullptr, nullptr, Z_Construct_UFunction_USceneCaptureComponent_RemoveShowOnlyActorComponents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USceneCaptureComponent_RemoveShowOnlyActorComponents_Statics::PropPointers), sizeof(Z_Construct_UFunction_USceneCaptureComponent_RemoveShowOnlyActorComponents_Statics::SceneCaptureComponent_eventRemoveShowOnlyActorComponents_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USceneCaptureComponent_RemoveShowOnlyActorComponents_Statics::Function_MetaDataParams), Z_Construct_UFunction_USceneCaptureComponent_RemoveShowOnlyActorComponents_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USceneCaptureComponent_RemoveShowOnlyActorComponents_Statics::SceneCaptureComponent_eventRemoveShowOnlyActorComponents_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USceneCaptureComponent_RemoveShowOnlyActorComponents()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USceneCaptureComponent_RemoveShowOnlyActorComponents_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USceneCaptureComponent::execRemoveShowOnlyActorComponents)
{
	P_GET_OBJECT(AActor,Z_Param_InActor);
	P_GET_UBOOL(Z_Param_bIncludeFromChildActors);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveShowOnlyActorComponents(Z_Param_InActor,Z_Param_bIncludeFromChildActors);
	P_NATIVE_END;
}
// End Class USceneCaptureComponent Function RemoveShowOnlyActorComponents

// Begin Class USceneCaptureComponent Function RemoveShowOnlyComponent
struct Z_Construct_UFunction_USceneCaptureComponent_RemoveShowOnlyComponent_Statics
{
	struct SceneCaptureComponent_eventRemoveShowOnlyComponent_Parms
	{
		UPrimitiveComponent* InComponent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|SceneCapture" },
		{ "Comment", "/** Removes a component from the Show Only list. */" },
		{ "ModuleRelativePath", "Classes/Components/SceneCaptureComponent.h" },
		{ "ToolTip", "Removes a component from the Show Only list." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USceneCaptureComponent_RemoveShowOnlyComponent_Statics::NewProp_InComponent = { "InComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SceneCaptureComponent_eventRemoveShowOnlyComponent_Parms, InComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InComponent_MetaData), NewProp_InComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USceneCaptureComponent_RemoveShowOnlyComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USceneCaptureComponent_RemoveShowOnlyComponent_Statics::NewProp_InComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USceneCaptureComponent_RemoveShowOnlyComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USceneCaptureComponent_RemoveShowOnlyComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USceneCaptureComponent, nullptr, "RemoveShowOnlyComponent", nullptr, nullptr, Z_Construct_UFunction_USceneCaptureComponent_RemoveShowOnlyComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USceneCaptureComponent_RemoveShowOnlyComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_USceneCaptureComponent_RemoveShowOnlyComponent_Statics::SceneCaptureComponent_eventRemoveShowOnlyComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USceneCaptureComponent_RemoveShowOnlyComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_USceneCaptureComponent_RemoveShowOnlyComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USceneCaptureComponent_RemoveShowOnlyComponent_Statics::SceneCaptureComponent_eventRemoveShowOnlyComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USceneCaptureComponent_RemoveShowOnlyComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USceneCaptureComponent_RemoveShowOnlyComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USceneCaptureComponent::execRemoveShowOnlyComponent)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_InComponent);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveShowOnlyComponent(Z_Param_InComponent);
	P_NATIVE_END;
}
// End Class USceneCaptureComponent Function RemoveShowOnlyComponent

// Begin Class USceneCaptureComponent Function SetCaptureSortPriority
struct Z_Construct_UFunction_USceneCaptureComponent_SetCaptureSortPriority_Statics
{
	struct SceneCaptureComponent_eventSetCaptureSortPriority_Parms
	{
		int32 NewCaptureSortPriority;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|SceneCapture" },
		{ "Comment", "/** Changes the value of TranslucentSortPriority. */" },
		{ "ModuleRelativePath", "Classes/Components/SceneCaptureComponent.h" },
		{ "ToolTip", "Changes the value of TranslucentSortPriority." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewCaptureSortPriority;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USceneCaptureComponent_SetCaptureSortPriority_Statics::NewProp_NewCaptureSortPriority = { "NewCaptureSortPriority", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SceneCaptureComponent_eventSetCaptureSortPriority_Parms, NewCaptureSortPriority), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USceneCaptureComponent_SetCaptureSortPriority_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USceneCaptureComponent_SetCaptureSortPriority_Statics::NewProp_NewCaptureSortPriority,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USceneCaptureComponent_SetCaptureSortPriority_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USceneCaptureComponent_SetCaptureSortPriority_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USceneCaptureComponent, nullptr, "SetCaptureSortPriority", nullptr, nullptr, Z_Construct_UFunction_USceneCaptureComponent_SetCaptureSortPriority_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USceneCaptureComponent_SetCaptureSortPriority_Statics::PropPointers), sizeof(Z_Construct_UFunction_USceneCaptureComponent_SetCaptureSortPriority_Statics::SceneCaptureComponent_eventSetCaptureSortPriority_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USceneCaptureComponent_SetCaptureSortPriority_Statics::Function_MetaDataParams), Z_Construct_UFunction_USceneCaptureComponent_SetCaptureSortPriority_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USceneCaptureComponent_SetCaptureSortPriority_Statics::SceneCaptureComponent_eventSetCaptureSortPriority_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USceneCaptureComponent_SetCaptureSortPriority()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USceneCaptureComponent_SetCaptureSortPriority_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USceneCaptureComponent::execSetCaptureSortPriority)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_NewCaptureSortPriority);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCaptureSortPriority(Z_Param_NewCaptureSortPriority);
	P_NATIVE_END;
}
// End Class USceneCaptureComponent Function SetCaptureSortPriority

// Begin Class USceneCaptureComponent Function SetShowFlagSettings
struct Z_Construct_UFunction_USceneCaptureComponent_SetShowFlagSettings_Statics
{
	struct SceneCaptureComponent_eventSetShowFlagSettings_Parms
	{
		TArray<FEngineShowFlagsSetting> InShowFlagSettings;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Comment", "/** Set the show flag settings. */" },
		{ "ModuleRelativePath", "Classes/Components/SceneCaptureComponent.h" },
		{ "ToolTip", "Set the show flag settings." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InShowFlagSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InShowFlagSettings_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InShowFlagSettings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USceneCaptureComponent_SetShowFlagSettings_Statics::NewProp_InShowFlagSettings_Inner = { "InShowFlagSettings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FEngineShowFlagsSetting, METADATA_PARAMS(0, nullptr) }; // 3559122429
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USceneCaptureComponent_SetShowFlagSettings_Statics::NewProp_InShowFlagSettings = { "InShowFlagSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SceneCaptureComponent_eventSetShowFlagSettings_Parms, InShowFlagSettings), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InShowFlagSettings_MetaData), NewProp_InShowFlagSettings_MetaData) }; // 3559122429
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USceneCaptureComponent_SetShowFlagSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USceneCaptureComponent_SetShowFlagSettings_Statics::NewProp_InShowFlagSettings_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USceneCaptureComponent_SetShowFlagSettings_Statics::NewProp_InShowFlagSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USceneCaptureComponent_SetShowFlagSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USceneCaptureComponent_SetShowFlagSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USceneCaptureComponent, nullptr, "SetShowFlagSettings", nullptr, nullptr, Z_Construct_UFunction_USceneCaptureComponent_SetShowFlagSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USceneCaptureComponent_SetShowFlagSettings_Statics::PropPointers), sizeof(Z_Construct_UFunction_USceneCaptureComponent_SetShowFlagSettings_Statics::SceneCaptureComponent_eventSetShowFlagSettings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USceneCaptureComponent_SetShowFlagSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_USceneCaptureComponent_SetShowFlagSettings_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USceneCaptureComponent_SetShowFlagSettings_Statics::SceneCaptureComponent_eventSetShowFlagSettings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USceneCaptureComponent_SetShowFlagSettings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USceneCaptureComponent_SetShowFlagSettings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USceneCaptureComponent::execSetShowFlagSettings)
{
	P_GET_TARRAY_REF(FEngineShowFlagsSetting,Z_Param_Out_InShowFlagSettings);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetShowFlagSettings(Z_Param_Out_InShowFlagSettings);
	P_NATIVE_END;
}
// End Class USceneCaptureComponent Function SetShowFlagSettings

// Begin Class USceneCaptureComponent Function ShowOnlyActorComponents
struct Z_Construct_UFunction_USceneCaptureComponent_ShowOnlyActorComponents_Statics
{
	struct SceneCaptureComponent_eventShowOnlyActorComponents_Parms
	{
		AActor* InActor;
		bool bIncludeFromChildActors;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|SceneCapture" },
		{ "Comment", "/**\n\x09 * Adds all primitive components in the actor to our list of show-only components.\n\x09 * @param bIncludeFromChildActors Whether to include the components from child actors\n\x09 */" },
		{ "CPP_Default_bIncludeFromChildActors", "false" },
		{ "ModuleRelativePath", "Classes/Components/SceneCaptureComponent.h" },
		{ "ToolTip", "Adds all primitive components in the actor to our list of show-only components.\n@param bIncludeFromChildActors Whether to include the components from child actors" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIncludeFromChildActors_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InActor;
	static void NewProp_bIncludeFromChildActors_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeFromChildActors;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USceneCaptureComponent_ShowOnlyActorComponents_Statics::NewProp_InActor = { "InActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SceneCaptureComponent_eventShowOnlyActorComponents_Parms, InActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USceneCaptureComponent_ShowOnlyActorComponents_Statics::NewProp_bIncludeFromChildActors_SetBit(void* Obj)
{
	((SceneCaptureComponent_eventShowOnlyActorComponents_Parms*)Obj)->bIncludeFromChildActors = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USceneCaptureComponent_ShowOnlyActorComponents_Statics::NewProp_bIncludeFromChildActors = { "bIncludeFromChildActors", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SceneCaptureComponent_eventShowOnlyActorComponents_Parms), &Z_Construct_UFunction_USceneCaptureComponent_ShowOnlyActorComponents_Statics::NewProp_bIncludeFromChildActors_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIncludeFromChildActors_MetaData), NewProp_bIncludeFromChildActors_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USceneCaptureComponent_ShowOnlyActorComponents_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USceneCaptureComponent_ShowOnlyActorComponents_Statics::NewProp_InActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USceneCaptureComponent_ShowOnlyActorComponents_Statics::NewProp_bIncludeFromChildActors,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USceneCaptureComponent_ShowOnlyActorComponents_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USceneCaptureComponent_ShowOnlyActorComponents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USceneCaptureComponent, nullptr, "ShowOnlyActorComponents", nullptr, nullptr, Z_Construct_UFunction_USceneCaptureComponent_ShowOnlyActorComponents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USceneCaptureComponent_ShowOnlyActorComponents_Statics::PropPointers), sizeof(Z_Construct_UFunction_USceneCaptureComponent_ShowOnlyActorComponents_Statics::SceneCaptureComponent_eventShowOnlyActorComponents_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USceneCaptureComponent_ShowOnlyActorComponents_Statics::Function_MetaDataParams), Z_Construct_UFunction_USceneCaptureComponent_ShowOnlyActorComponents_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USceneCaptureComponent_ShowOnlyActorComponents_Statics::SceneCaptureComponent_eventShowOnlyActorComponents_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USceneCaptureComponent_ShowOnlyActorComponents()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USceneCaptureComponent_ShowOnlyActorComponents_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USceneCaptureComponent::execShowOnlyActorComponents)
{
	P_GET_OBJECT(AActor,Z_Param_InActor);
	P_GET_UBOOL(Z_Param_bIncludeFromChildActors);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ShowOnlyActorComponents(Z_Param_InActor,Z_Param_bIncludeFromChildActors);
	P_NATIVE_END;
}
// End Class USceneCaptureComponent Function ShowOnlyActorComponents

// Begin Class USceneCaptureComponent Function ShowOnlyComponent
struct Z_Construct_UFunction_USceneCaptureComponent_ShowOnlyComponent_Statics
{
	struct SceneCaptureComponent_eventShowOnlyComponent_Parms
	{
		UPrimitiveComponent* InComponent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|SceneCapture" },
		{ "Comment", "/** Adds the component to our list of show-only components. */" },
		{ "ModuleRelativePath", "Classes/Components/SceneCaptureComponent.h" },
		{ "ToolTip", "Adds the component to our list of show-only components." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USceneCaptureComponent_ShowOnlyComponent_Statics::NewProp_InComponent = { "InComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SceneCaptureComponent_eventShowOnlyComponent_Parms, InComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InComponent_MetaData), NewProp_InComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USceneCaptureComponent_ShowOnlyComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USceneCaptureComponent_ShowOnlyComponent_Statics::NewProp_InComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USceneCaptureComponent_ShowOnlyComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USceneCaptureComponent_ShowOnlyComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USceneCaptureComponent, nullptr, "ShowOnlyComponent", nullptr, nullptr, Z_Construct_UFunction_USceneCaptureComponent_ShowOnlyComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USceneCaptureComponent_ShowOnlyComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_USceneCaptureComponent_ShowOnlyComponent_Statics::SceneCaptureComponent_eventShowOnlyComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USceneCaptureComponent_ShowOnlyComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_USceneCaptureComponent_ShowOnlyComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USceneCaptureComponent_ShowOnlyComponent_Statics::SceneCaptureComponent_eventShowOnlyComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USceneCaptureComponent_ShowOnlyComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USceneCaptureComponent_ShowOnlyComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USceneCaptureComponent::execShowOnlyComponent)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_InComponent);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ShowOnlyComponent(Z_Param_InComponent);
	P_NATIVE_END;
}
// End Class USceneCaptureComponent Function ShowOnlyComponent

// Begin Class USceneCaptureComponent
void USceneCaptureComponent::StaticRegisterNativesUSceneCaptureComponent()
{
	UClass* Class = USceneCaptureComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ClearHiddenComponents", &USceneCaptureComponent::execClearHiddenComponents },
		{ "ClearShowOnlyComponents", &USceneCaptureComponent::execClearShowOnlyComponents },
		{ "GetShowFlagSettings", &USceneCaptureComponent::execGetShowFlagSettings },
		{ "HideActorComponents", &USceneCaptureComponent::execHideActorComponents },
		{ "HideComponent", &USceneCaptureComponent::execHideComponent },
		{ "RemoveShowOnlyActorComponents", &USceneCaptureComponent::execRemoveShowOnlyActorComponents },
		{ "RemoveShowOnlyComponent", &USceneCaptureComponent::execRemoveShowOnlyComponent },
		{ "SetCaptureSortPriority", &USceneCaptureComponent::execSetCaptureSortPriority },
		{ "SetShowFlagSettings", &USceneCaptureComponent::execSetShowFlagSettings },
		{ "ShowOnlyActorComponents", &USceneCaptureComponent::execShowOnlyActorComponents },
		{ "ShowOnlyComponent", &USceneCaptureComponent::execShowOnlyComponent },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USceneCaptureComponent);
UClass* Z_Construct_UClass_USceneCaptureComponent_NoRegister()
{
	return USceneCaptureComponent::StaticClass();
}
struct Z_Construct_UClass_USceneCaptureComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// -> will be exported to EngineDecalClasses.h\n" },
		{ "HideCategories", "Collision Object Physics SceneComponent Mobility Trigger PhysicsVolume" },
		{ "IncludePath", "Components/SceneCaptureComponent.h" },
		{ "ModuleRelativePath", "Classes/Components/SceneCaptureComponent.h" },
		{ "ToolTip", "-> will be exported to EngineDecalClasses.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrimitiveRenderMode_MetaData[] = {
		{ "Category", "SceneCapture" },
		{ "Comment", "/** Controls what primitives get rendered into the scene capture. */" },
		{ "ModuleRelativePath", "Classes/Components/SceneCaptureComponent.h" },
		{ "ToolTip", "Controls what primitives get rendered into the scene capture." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CaptureSource_MetaData[] = {
		{ "Category", "SceneCapture" },
		{ "DisplayName", "Capture Source" },
		{ "ModuleRelativePath", "Classes/Components/SceneCaptureComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCaptureEveryFrame_MetaData[] = {
		{ "Category", "SceneCapture" },
		{ "Comment", "/** Whether to update the capture's contents every frame.  If disabled, the component will render once on load and then only when moved. */" },
		{ "ModuleRelativePath", "Classes/Components/SceneCaptureComponent.h" },
		{ "ToolTip", "Whether to update the capture's contents every frame.  If disabled, the component will render once on load and then only when moved." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCaptureOnMovement_MetaData[] = {
		{ "Category", "SceneCapture" },
		{ "Comment", "/** Whether to update the capture's contents on movement.  Disable if you are going to capture manually from blueprint. */" },
		{ "ModuleRelativePath", "Classes/Components/SceneCaptureComponent.h" },
		{ "ToolTip", "Whether to update the capture's contents on movement.  Disable if you are going to capture manually from blueprint." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCaptureGpuNextRender_MetaData[] = {
		{ "Category", "SceneCapture" },
		{ "Comment", "/** Capture a GPU frame for this scene capture, next time it renders (capture program must be connected). */" },
		{ "ModuleRelativePath", "Classes/Components/SceneCaptureComponent.h" },
		{ "ToolTip", "Capture a GPU frame for this scene capture, next time it renders (capture program must be connected)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDumpGpuNextRender_MetaData[] = {
		{ "Category", "SceneCapture" },
		{ "Comment", "/** Run DumpGPU for this scene capture, next time it renders. */" },
		{ "ModuleRelativePath", "Classes/Components/SceneCaptureComponent.h" },
		{ "ToolTip", "Run DumpGPU for this scene capture, next time it renders." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAlwaysPersistRenderingState_MetaData[] = {
		{ "Category", "SceneCapture" },
		{ "Comment", "/** Whether to persist the rendering state even if bCaptureEveryFrame==false.  This allows velocities for Motion Blur and Temporal AA to be computed. */" },
		{ "editcondition", "!bCaptureEveryFrame" },
		{ "ModuleRelativePath", "Classes/Components/SceneCaptureComponent.h" },
		{ "ToolTip", "Whether to persist the rendering state even if bCaptureEveryFrame==false.  This allows velocities for Motion Blur and Temporal AA to be computed." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HiddenComponents_MetaData[] = {
		{ "Comment", "/** The components won't rendered by current component.*/" },
		{ "ModuleRelativePath", "Classes/Components/SceneCaptureComponent.h" },
		{ "ToolTip", "The components won't rendered by current component." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HiddenActors_MetaData[] = {
		{ "Category", "SceneCapture" },
		{ "Comment", "/** The actors to hide in the scene capture. */" },
		{ "ModuleRelativePath", "Classes/Components/SceneCaptureComponent.h" },
		{ "ToolTip", "The actors to hide in the scene capture." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShowOnlyComponents_MetaData[] = {
		{ "Comment", "/** The only components to be rendered by this scene capture, if PrimitiveRenderMode is set to UseShowOnlyList. */" },
		{ "ModuleRelativePath", "Classes/Components/SceneCaptureComponent.h" },
		{ "ToolTip", "The only components to be rendered by this scene capture, if PrimitiveRenderMode is set to UseShowOnlyList." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShowOnlyActors_MetaData[] = {
		{ "Category", "SceneCapture" },
		{ "Comment", "/** The only actors to be rendered by this scene capture, if PrimitiveRenderMode is set to UseShowOnlyList.*/" },
		{ "ModuleRelativePath", "Classes/Components/SceneCaptureComponent.h" },
		{ "ToolTip", "The only actors to be rendered by this scene capture, if PrimitiveRenderMode is set to UseShowOnlyList." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LODDistanceFactor_MetaData[] = {
		{ "Category", "PlanarReflection" },
		{ "Comment", "/** Scales the distance used by LOD. Set to values greater than 1 to cause the scene capture to use lower LODs than the main view to speed up the scene capture pass. */" },
		{ "ModuleRelativePath", "Classes/Components/SceneCaptureComponent.h" },
		{ "ToolTip", "Scales the distance used by LOD. Set to values greater than 1 to cause the scene capture to use lower LODs than the main view to speed up the scene capture pass." },
		{ "UIMax", "10" },
		{ "UIMin", ".1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxViewDistanceOverride_MetaData[] = {
		{ "Category", "SceneCapture" },
		{ "Comment", "/** if > 0, sets a maximum render distance override.  Can be used to cull distant objects from a reflection if the reflecting plane is in an enclosed area like a hallway or room */" },
		{ "ModuleRelativePath", "Classes/Components/SceneCaptureComponent.h" },
		{ "ToolTip", "if > 0, sets a maximum render distance override.  Can be used to cull distant objects from a reflection if the reflecting plane is in an enclosed area like a hallway or room" },
		{ "UIMax", "10000" },
		{ "UIMin", "100" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CaptureSortPriority_MetaData[] = {
		{ "Category", "SceneCapture" },
		{ "Comment", "/** Capture priority within the frame to sort scene capture on GPU to resolve interdependencies between multiple capture components. Highest come first. */" },
		{ "ModuleRelativePath", "Classes/Components/SceneCaptureComponent.h" },
		{ "ToolTip", "Capture priority within the frame to sort scene capture on GPU to resolve interdependencies between multiple capture components. Highest come first." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseRayTracingIfEnabled_MetaData[] = {
		{ "Category", "SceneCapture" },
		{ "Comment", "/** Whether to use ray tracing for this capture. Ray Tracing must be enabled in the project. */" },
		{ "ModuleRelativePath", "Classes/Components/SceneCaptureComponent.h" },
		{ "ToolTip", "Whether to use ray tracing for this capture. Ray Tracing must be enabled in the project." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShowFlagSettings_MetaData[] = {
		{ "BlueprintGetter", "GetShowFlagSettings" },
		{ "BlueprintSetter", "SetShowFlagSettings" },
		{ "Category", "SceneCapture" },
		{ "ModuleRelativePath", "Classes/Components/SceneCaptureComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProfilingEventName_MetaData[] = {
		{ "Category", "SceneCapture" },
		{ "Comment", "/** Name of the profiling event. */" },
		{ "ModuleRelativePath", "Classes/Components/SceneCaptureComponent.h" },
		{ "ToolTip", "Name of the profiling event." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CaptureMesh_MetaData[] = {
		{ "Comment", "/** The mesh used by ProxyMeshComponent */" },
		{ "ModuleRelativePath", "Classes/Components/SceneCaptureComponent.h" },
		{ "ToolTip", "The mesh used by ProxyMeshComponent" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_PrimitiveRenderMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PrimitiveRenderMode;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CaptureSource;
	static void NewProp_bCaptureEveryFrame_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCaptureEveryFrame;
	static void NewProp_bCaptureOnMovement_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCaptureOnMovement;
	static void NewProp_bCaptureGpuNextRender_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCaptureGpuNextRender;
	static void NewProp_bDumpGpuNextRender_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDumpGpuNextRender;
	static void NewProp_bAlwaysPersistRenderingState_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAlwaysPersistRenderingState;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_HiddenComponents_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_HiddenComponents;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HiddenActors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_HiddenActors;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_ShowOnlyComponents_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ShowOnlyComponents;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ShowOnlyActors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ShowOnlyActors;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LODDistanceFactor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxViewDistanceOverride;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CaptureSortPriority;
	static void NewProp_bUseRayTracingIfEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseRayTracingIfEnabled;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ShowFlagSettings_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ShowFlagSettings;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ProfilingEventName;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CaptureMesh;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USceneCaptureComponent_ClearHiddenComponents, "ClearHiddenComponents" }, // 3076196959
		{ &Z_Construct_UFunction_USceneCaptureComponent_ClearShowOnlyComponents, "ClearShowOnlyComponents" }, // 900308601
		{ &Z_Construct_UFunction_USceneCaptureComponent_GetShowFlagSettings, "GetShowFlagSettings" }, // 2563655977
		{ &Z_Construct_UFunction_USceneCaptureComponent_HideActorComponents, "HideActorComponents" }, // 1573034815
		{ &Z_Construct_UFunction_USceneCaptureComponent_HideComponent, "HideComponent" }, // 927350320
		{ &Z_Construct_UFunction_USceneCaptureComponent_RemoveShowOnlyActorComponents, "RemoveShowOnlyActorComponents" }, // 1997990904
		{ &Z_Construct_UFunction_USceneCaptureComponent_RemoveShowOnlyComponent, "RemoveShowOnlyComponent" }, // 1960605077
		{ &Z_Construct_UFunction_USceneCaptureComponent_SetCaptureSortPriority, "SetCaptureSortPriority" }, // 3730262159
		{ &Z_Construct_UFunction_USceneCaptureComponent_SetShowFlagSettings, "SetShowFlagSettings" }, // 1647599125
		{ &Z_Construct_UFunction_USceneCaptureComponent_ShowOnlyActorComponents, "ShowOnlyActorComponents" }, // 2087020047
		{ &Z_Construct_UFunction_USceneCaptureComponent_ShowOnlyComponent, "ShowOnlyComponent" }, // 1731265553
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USceneCaptureComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USceneCaptureComponent_Statics::NewProp_PrimitiveRenderMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USceneCaptureComponent_Statics::NewProp_PrimitiveRenderMode = { "PrimitiveRenderMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USceneCaptureComponent, PrimitiveRenderMode), Z_Construct_UEnum_Engine_ESceneCapturePrimitiveRenderMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrimitiveRenderMode_MetaData), NewProp_PrimitiveRenderMode_MetaData) }; // 1558849558
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USceneCaptureComponent_Statics::NewProp_CaptureSource = { "CaptureSource", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USceneCaptureComponent, CaptureSource), Z_Construct_UEnum_Engine_ESceneCaptureSource, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CaptureSource_MetaData), NewProp_CaptureSource_MetaData) }; // 3067947701
void Z_Construct_UClass_USceneCaptureComponent_Statics::NewProp_bCaptureEveryFrame_SetBit(void* Obj)
{
	((USceneCaptureComponent*)Obj)->bCaptureEveryFrame = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USceneCaptureComponent_Statics::NewProp_bCaptureEveryFrame = { "bCaptureEveryFrame", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(USceneCaptureComponent), &Z_Construct_UClass_USceneCaptureComponent_Statics::NewProp_bCaptureEveryFrame_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCaptureEveryFrame_MetaData), NewProp_bCaptureEveryFrame_MetaData) };
void Z_Construct_UClass_USceneCaptureComponent_Statics::NewProp_bCaptureOnMovement_SetBit(void* Obj)
{
	((USceneCaptureComponent*)Obj)->bCaptureOnMovement = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USceneCaptureComponent_Statics::NewProp_bCaptureOnMovement = { "bCaptureOnMovement", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(USceneCaptureComponent), &Z_Construct_UClass_USceneCaptureComponent_Statics::NewProp_bCaptureOnMovement_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCaptureOnMovement_MetaData), NewProp_bCaptureOnMovement_MetaData) };
void Z_Construct_UClass_USceneCaptureComponent_Statics::NewProp_bCaptureGpuNextRender_SetBit(void* Obj)
{
	((USceneCaptureComponent*)Obj)->bCaptureGpuNextRender = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USceneCaptureComponent_Statics::NewProp_bCaptureGpuNextRender = { "bCaptureGpuNextRender", nullptr, (EPropertyFlags)0x0090040400202005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(USceneCaptureComponent), &Z_Construct_UClass_USceneCaptureComponent_Statics::NewProp_bCaptureGpuNextRender_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCaptureGpuNextRender_MetaData), NewProp_bCaptureGpuNextRender_MetaData) };
void Z_Construct_UClass_USceneCaptureComponent_Statics::NewProp_bDumpGpuNextRender_SetBit(void* Obj)
{
	((USceneCaptureComponent*)Obj)->bDumpGpuNextRender = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USceneCaptureComponent_Statics::NewProp_bDumpGpuNextRender = { "bDumpGpuNextRender", nullptr, (EPropertyFlags)0x0090040400202005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(USceneCaptureComponent), &Z_Construct_UClass_USceneCaptureComponent_Statics::NewProp_bDumpGpuNextRender_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDumpGpuNextRender_MetaData), NewProp_bDumpGpuNextRender_MetaData) };
void Z_Construct_UClass_USceneCaptureComponent_Statics::NewProp_bAlwaysPersistRenderingState_SetBit(void* Obj)
{
	((USceneCaptureComponent*)Obj)->bAlwaysPersistRenderingState = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USceneCaptureComponent_Statics::NewProp_bAlwaysPersistRenderingState = { "bAlwaysPersistRenderingState", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USceneCaptureComponent), &Z_Construct_UClass_USceneCaptureComponent_Statics::NewProp_bAlwaysPersistRenderingState_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAlwaysPersistRenderingState_MetaData), NewProp_bAlwaysPersistRenderingState_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_USceneCaptureComponent_Statics::NewProp_HiddenComponents_Inner = { "HiddenComponents", nullptr, (EPropertyFlags)0x0004000000080008, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USceneCaptureComponent_Statics::NewProp_HiddenComponents = { "HiddenComponents", nullptr, (EPropertyFlags)0x0014008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USceneCaptureComponent, HiddenComponents), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HiddenComponents_MetaData), NewProp_HiddenComponents_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USceneCaptureComponent_Statics::NewProp_HiddenActors_Inner = { "HiddenActors", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USceneCaptureComponent_Statics::NewProp_HiddenActors = { "HiddenActors", nullptr, (EPropertyFlags)0x0114000000000805, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USceneCaptureComponent, HiddenActors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HiddenActors_MetaData), NewProp_HiddenActors_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_USceneCaptureComponent_Statics::NewProp_ShowOnlyComponents_Inner = { "ShowOnlyComponents", nullptr, (EPropertyFlags)0x0004000000080008, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USceneCaptureComponent_Statics::NewProp_ShowOnlyComponents = { "ShowOnlyComponents", nullptr, (EPropertyFlags)0x0014008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USceneCaptureComponent, ShowOnlyComponents), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShowOnlyComponents_MetaData), NewProp_ShowOnlyComponents_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USceneCaptureComponent_Statics::NewProp_ShowOnlyActors_Inner = { "ShowOnlyActors", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USceneCaptureComponent_Statics::NewProp_ShowOnlyActors = { "ShowOnlyActors", nullptr, (EPropertyFlags)0x0114000000000805, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USceneCaptureComponent, ShowOnlyActors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShowOnlyActors_MetaData), NewProp_ShowOnlyActors_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USceneCaptureComponent_Statics::NewProp_LODDistanceFactor = { "LODDistanceFactor", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USceneCaptureComponent, LODDistanceFactor), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LODDistanceFactor_MetaData), NewProp_LODDistanceFactor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USceneCaptureComponent_Statics::NewProp_MaxViewDistanceOverride = { "MaxViewDistanceOverride", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USceneCaptureComponent, MaxViewDistanceOverride), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxViewDistanceOverride_MetaData), NewProp_MaxViewDistanceOverride_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USceneCaptureComponent_Statics::NewProp_CaptureSortPriority = { "CaptureSortPriority", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USceneCaptureComponent, CaptureSortPriority), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CaptureSortPriority_MetaData), NewProp_CaptureSortPriority_MetaData) };
void Z_Construct_UClass_USceneCaptureComponent_Statics::NewProp_bUseRayTracingIfEnabled_SetBit(void* Obj)
{
	((USceneCaptureComponent*)Obj)->bUseRayTracingIfEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USceneCaptureComponent_Statics::NewProp_bUseRayTracingIfEnabled = { "bUseRayTracingIfEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USceneCaptureComponent), &Z_Construct_UClass_USceneCaptureComponent_Statics::NewProp_bUseRayTracingIfEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseRayTracingIfEnabled_MetaData), NewProp_bUseRayTracingIfEnabled_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USceneCaptureComponent_Statics::NewProp_ShowFlagSettings_Inner = { "ShowFlagSettings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FEngineShowFlagsSetting, METADATA_PARAMS(0, nullptr) }; // 3559122429
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USceneCaptureComponent_Statics::NewProp_ShowFlagSettings = { "ShowFlagSettings", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USceneCaptureComponent, ShowFlagSettings), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShowFlagSettings_MetaData), NewProp_ShowFlagSettings_MetaData) }; // 3559122429
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_USceneCaptureComponent_Statics::NewProp_ProfilingEventName = { "ProfilingEventName", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USceneCaptureComponent, ProfilingEventName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProfilingEventName_MetaData), NewProp_ProfilingEventName_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USceneCaptureComponent_Statics::NewProp_CaptureMesh = { "CaptureMesh", nullptr, (EPropertyFlags)0x0124080800002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USceneCaptureComponent, CaptureMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CaptureMesh_MetaData), NewProp_CaptureMesh_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USceneCaptureComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USceneCaptureComponent_Statics::NewProp_PrimitiveRenderMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USceneCaptureComponent_Statics::NewProp_PrimitiveRenderMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USceneCaptureComponent_Statics::NewProp_CaptureSource,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USceneCaptureComponent_Statics::NewProp_bCaptureEveryFrame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USceneCaptureComponent_Statics::NewProp_bCaptureOnMovement,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USceneCaptureComponent_Statics::NewProp_bCaptureGpuNextRender,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USceneCaptureComponent_Statics::NewProp_bDumpGpuNextRender,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USceneCaptureComponent_Statics::NewProp_bAlwaysPersistRenderingState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USceneCaptureComponent_Statics::NewProp_HiddenComponents_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USceneCaptureComponent_Statics::NewProp_HiddenComponents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USceneCaptureComponent_Statics::NewProp_HiddenActors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USceneCaptureComponent_Statics::NewProp_HiddenActors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USceneCaptureComponent_Statics::NewProp_ShowOnlyComponents_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USceneCaptureComponent_Statics::NewProp_ShowOnlyComponents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USceneCaptureComponent_Statics::NewProp_ShowOnlyActors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USceneCaptureComponent_Statics::NewProp_ShowOnlyActors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USceneCaptureComponent_Statics::NewProp_LODDistanceFactor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USceneCaptureComponent_Statics::NewProp_MaxViewDistanceOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USceneCaptureComponent_Statics::NewProp_CaptureSortPriority,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USceneCaptureComponent_Statics::NewProp_bUseRayTracingIfEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USceneCaptureComponent_Statics::NewProp_ShowFlagSettings_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USceneCaptureComponent_Statics::NewProp_ShowFlagSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USceneCaptureComponent_Statics::NewProp_ProfilingEventName,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USceneCaptureComponent_Statics::NewProp_CaptureMesh,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USceneCaptureComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USceneCaptureComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USceneComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USceneCaptureComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USceneCaptureComponent_Statics::ClassParams = {
	&USceneCaptureComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USceneCaptureComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USceneCaptureComponent_Statics::PropPointers),
	0,
	0x00A800A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USceneCaptureComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_USceneCaptureComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USceneCaptureComponent()
{
	if (!Z_Registration_Info_UClass_USceneCaptureComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USceneCaptureComponent.OuterSingleton, Z_Construct_UClass_USceneCaptureComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USceneCaptureComponent.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<USceneCaptureComponent>()
{
	return USceneCaptureComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USceneCaptureComponent);
USceneCaptureComponent::~USceneCaptureComponent() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(USceneCaptureComponent)
// End Class USceneCaptureComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponent_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ESceneCapturePrimitiveRenderMode_StaticEnum, TEXT("ESceneCapturePrimitiveRenderMode"), &Z_Registration_Info_UEnum_ESceneCapturePrimitiveRenderMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1558849558U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FEngineShowFlagsSetting::StaticStruct, Z_Construct_UScriptStruct_FEngineShowFlagsSetting_Statics::NewStructOps, TEXT("EngineShowFlagsSetting"), &Z_Registration_Info_UScriptStruct_EngineShowFlagsSetting, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEngineShowFlagsSetting), 3559122429U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USceneCaptureComponent, USceneCaptureComponent::StaticClass, TEXT("USceneCaptureComponent"), &Z_Registration_Info_UClass_USceneCaptureComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USceneCaptureComponent), 2930438068U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponent_h_1632087088(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponent_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponent_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponent_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
