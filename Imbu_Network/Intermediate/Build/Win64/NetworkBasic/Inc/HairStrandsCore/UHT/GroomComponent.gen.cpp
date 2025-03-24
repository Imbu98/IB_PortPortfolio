// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HairStrandsCore/Public/GroomComponent.h"
#include "HairStrandsCore/Public/GroomAssetPhysics.h"
#include "HairStrandsCore/Public/GroomDesc.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGroomComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ULODSyncInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMeshComponent();
ENGINE_API UClass* Z_Construct_UClass_UMeshDeformer_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMeshDeformerInstance_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMeshDeformerInstanceSettings_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPhysicsAsset_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
HAIRSTRANDSCORE_API UClass* Z_Construct_UClass_UGroomAsset_NoRegister();
HAIRSTRANDSCORE_API UClass* Z_Construct_UClass_UGroomBindingAsset_NoRegister();
HAIRSTRANDSCORE_API UClass* Z_Construct_UClass_UGroomCache_NoRegister();
HAIRSTRANDSCORE_API UClass* Z_Construct_UClass_UGroomComponent();
HAIRSTRANDSCORE_API UClass* Z_Construct_UClass_UGroomComponent_NoRegister();
HAIRSTRANDSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FHairGroupDesc();
HAIRSTRANDSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FHairSimulationSettings();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponent_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraPhysicsAssetDICollectorInterface_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_HairStrandsCore();
// End Cross Module References

// Begin Class UGroomComponent Function AddCollisionComponent
struct Z_Construct_UFunction_UGroomComponent_AddCollisionComponent_Statics
{
	struct GroomComponent_eventAddCollisionComponent_Parms
	{
		USkeletalMeshComponent* SkeletalMeshComponent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Simulation" },
		{ "Comment", "/* Add a skeletal mesh to the collision components */" },
		{ "ModuleRelativePath", "Public/GroomComponent.h" },
		{ "ToolTip", "Add a skeletal mesh to the collision components" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SkeletalMeshComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGroomComponent_AddCollisionComponent_Statics::NewProp_SkeletalMeshComponent = { "SkeletalMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GroomComponent_eventAddCollisionComponent_Parms, SkeletalMeshComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkeletalMeshComponent_MetaData), NewProp_SkeletalMeshComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGroomComponent_AddCollisionComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGroomComponent_AddCollisionComponent_Statics::NewProp_SkeletalMeshComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomComponent_AddCollisionComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGroomComponent_AddCollisionComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGroomComponent, nullptr, "AddCollisionComponent", nullptr, nullptr, Z_Construct_UFunction_UGroomComponent_AddCollisionComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomComponent_AddCollisionComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGroomComponent_AddCollisionComponent_Statics::GroomComponent_eventAddCollisionComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomComponent_AddCollisionComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGroomComponent_AddCollisionComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGroomComponent_AddCollisionComponent_Statics::GroomComponent_eventAddCollisionComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGroomComponent_AddCollisionComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGroomComponent_AddCollisionComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGroomComponent::execAddCollisionComponent)
{
	P_GET_OBJECT(USkeletalMeshComponent,Z_Param_SkeletalMeshComponent);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddCollisionComponent(Z_Param_SkeletalMeshComponent);
	P_NATIVE_END;
}
// End Class UGroomComponent Function AddCollisionComponent

// Begin Class UGroomComponent Function GetIsHairLengthScaleEnabled
struct Z_Construct_UFunction_UGroomComponent_GetIsHairLengthScaleEnabled_Statics
{
	struct GroomComponent_eventGetIsHairLengthScaleEnabled_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Groom" },
		{ "ModuleRelativePath", "Public/GroomComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UGroomComponent_GetIsHairLengthScaleEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((GroomComponent_eventGetIsHairLengthScaleEnabled_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGroomComponent_GetIsHairLengthScaleEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GroomComponent_eventGetIsHairLengthScaleEnabled_Parms), &Z_Construct_UFunction_UGroomComponent_GetIsHairLengthScaleEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGroomComponent_GetIsHairLengthScaleEnabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGroomComponent_GetIsHairLengthScaleEnabled_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomComponent_GetIsHairLengthScaleEnabled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGroomComponent_GetIsHairLengthScaleEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGroomComponent, nullptr, "GetIsHairLengthScaleEnabled", nullptr, nullptr, Z_Construct_UFunction_UGroomComponent_GetIsHairLengthScaleEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomComponent_GetIsHairLengthScaleEnabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGroomComponent_GetIsHairLengthScaleEnabled_Statics::GroomComponent_eventGetIsHairLengthScaleEnabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomComponent_GetIsHairLengthScaleEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGroomComponent_GetIsHairLengthScaleEnabled_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGroomComponent_GetIsHairLengthScaleEnabled_Statics::GroomComponent_eventGetIsHairLengthScaleEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGroomComponent_GetIsHairLengthScaleEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGroomComponent_GetIsHairLengthScaleEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGroomComponent::execGetIsHairLengthScaleEnabled)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetIsHairLengthScaleEnabled();
	P_NATIVE_END;
}
// End Class UGroomComponent Function GetIsHairLengthScaleEnabled

// Begin Class UGroomComponent Function GetNiagaraComponent
struct Z_Construct_UFunction_UGroomComponent_GetNiagaraComponent_Statics
{
	struct GroomComponent_eventGetNiagaraComponent_Parms
	{
		int32 GroupIndex;
		UNiagaraComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Simulation" },
		{ "Comment", "/* Given the group index return the matching niagara component */" },
		{ "ModuleRelativePath", "Public/GroomComponent.h" },
		{ "ToolTip", "Given the group index return the matching niagara component" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroupIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_GroupIndex;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGroomComponent_GetNiagaraComponent_Statics::NewProp_GroupIndex = { "GroupIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GroomComponent_eventGetNiagaraComponent_Parms, GroupIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroupIndex_MetaData), NewProp_GroupIndex_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGroomComponent_GetNiagaraComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GroomComponent_eventGetNiagaraComponent_Parms, ReturnValue), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGroomComponent_GetNiagaraComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGroomComponent_GetNiagaraComponent_Statics::NewProp_GroupIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGroomComponent_GetNiagaraComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomComponent_GetNiagaraComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGroomComponent_GetNiagaraComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGroomComponent, nullptr, "GetNiagaraComponent", nullptr, nullptr, Z_Construct_UFunction_UGroomComponent_GetNiagaraComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomComponent_GetNiagaraComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGroomComponent_GetNiagaraComponent_Statics::GroomComponent_eventGetNiagaraComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomComponent_GetNiagaraComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGroomComponent_GetNiagaraComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGroomComponent_GetNiagaraComponent_Statics::GroomComponent_eventGetNiagaraComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGroomComponent_GetNiagaraComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGroomComponent_GetNiagaraComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGroomComponent::execGetNiagaraComponent)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_GroupIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UNiagaraComponent**)Z_Param__Result=P_THIS->GetNiagaraComponent(Z_Param_GroupIndex);
	P_NATIVE_END;
}
// End Class UGroomComponent Function GetNiagaraComponent

// Begin Class UGroomComponent Function ResetCollisionComponents
struct Z_Construct_UFunction_UGroomComponent_ResetCollisionComponents_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Simulation" },
		{ "Comment", "/* Reset the collision components */" },
		{ "ModuleRelativePath", "Public/GroomComponent.h" },
		{ "ToolTip", "Reset the collision components" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGroomComponent_ResetCollisionComponents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGroomComponent, nullptr, "ResetCollisionComponents", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomComponent_ResetCollisionComponents_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGroomComponent_ResetCollisionComponents_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UGroomComponent_ResetCollisionComponents()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGroomComponent_ResetCollisionComponents_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGroomComponent::execResetCollisionComponents)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetCollisionComponents();
	P_NATIVE_END;
}
// End Class UGroomComponent Function ResetCollisionComponents

// Begin Class UGroomComponent Function ResetSimulation
struct Z_Construct_UFunction_UGroomComponent_ResetSimulation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Simulation" },
		{ "Comment", "/* Reset the simulation, if enabled */" },
		{ "ModuleRelativePath", "Public/GroomComponent.h" },
		{ "ToolTip", "Reset the simulation, if enabled" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGroomComponent_ResetSimulation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGroomComponent, nullptr, "ResetSimulation", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomComponent_ResetSimulation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGroomComponent_ResetSimulation_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UGroomComponent_ResetSimulation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGroomComponent_ResetSimulation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGroomComponent::execResetSimulation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetSimulation();
	P_NATIVE_END;
}
// End Class UGroomComponent Function ResetSimulation

// Begin Class UGroomComponent Function SetBindingAsset
struct Z_Construct_UFunction_UGroomComponent_SetBindingAsset_Statics
{
	struct GroomComponent_eventSetBindingAsset_Parms
	{
		UGroomBindingAsset* InBinding;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Groom" },
		{ "Comment", "/* Accessor function for changing Groom binding asset from blueprint/sequencer */" },
		{ "ModuleRelativePath", "Public/GroomComponent.h" },
		{ "ToolTip", "Accessor function for changing Groom binding asset from blueprint/sequencer" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InBinding;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGroomComponent_SetBindingAsset_Statics::NewProp_InBinding = { "InBinding", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GroomComponent_eventSetBindingAsset_Parms, InBinding), Z_Construct_UClass_UGroomBindingAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGroomComponent_SetBindingAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGroomComponent_SetBindingAsset_Statics::NewProp_InBinding,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomComponent_SetBindingAsset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGroomComponent_SetBindingAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGroomComponent, nullptr, "SetBindingAsset", nullptr, nullptr, Z_Construct_UFunction_UGroomComponent_SetBindingAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomComponent_SetBindingAsset_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGroomComponent_SetBindingAsset_Statics::GroomComponent_eventSetBindingAsset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomComponent_SetBindingAsset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGroomComponent_SetBindingAsset_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGroomComponent_SetBindingAsset_Statics::GroomComponent_eventSetBindingAsset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGroomComponent_SetBindingAsset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGroomComponent_SetBindingAsset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGroomComponent::execSetBindingAsset)
{
	P_GET_OBJECT(UGroomBindingAsset,Z_Param_InBinding);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetBindingAsset(Z_Param_InBinding);
	P_NATIVE_END;
}
// End Class UGroomComponent Function SetBindingAsset

// Begin Class UGroomComponent Function SetEnableSimulation
struct Z_Construct_UFunction_UGroomComponent_SetEnableSimulation_Statics
{
	struct GroomComponent_eventSetEnableSimulation_Parms
	{
		bool bInEnableSimulation;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Simulation" },
		{ "Comment", "/* Accessor function for changing the enable simulation flag from blueprint/sequencer */" },
		{ "ModuleRelativePath", "Public/GroomComponent.h" },
		{ "ToolTip", "Accessor function for changing the enable simulation flag from blueprint/sequencer" },
	};
#endif // WITH_METADATA
	static void NewProp_bInEnableSimulation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInEnableSimulation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UGroomComponent_SetEnableSimulation_Statics::NewProp_bInEnableSimulation_SetBit(void* Obj)
{
	((GroomComponent_eventSetEnableSimulation_Parms*)Obj)->bInEnableSimulation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGroomComponent_SetEnableSimulation_Statics::NewProp_bInEnableSimulation = { "bInEnableSimulation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GroomComponent_eventSetEnableSimulation_Parms), &Z_Construct_UFunction_UGroomComponent_SetEnableSimulation_Statics::NewProp_bInEnableSimulation_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGroomComponent_SetEnableSimulation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGroomComponent_SetEnableSimulation_Statics::NewProp_bInEnableSimulation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomComponent_SetEnableSimulation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGroomComponent_SetEnableSimulation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGroomComponent, nullptr, "SetEnableSimulation", nullptr, nullptr, Z_Construct_UFunction_UGroomComponent_SetEnableSimulation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomComponent_SetEnableSimulation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGroomComponent_SetEnableSimulation_Statics::GroomComponent_eventSetEnableSimulation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomComponent_SetEnableSimulation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGroomComponent_SetEnableSimulation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGroomComponent_SetEnableSimulation_Statics::GroomComponent_eventSetEnableSimulation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGroomComponent_SetEnableSimulation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGroomComponent_SetEnableSimulation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGroomComponent::execSetEnableSimulation)
{
	P_GET_UBOOL(Z_Param_bInEnableSimulation);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetEnableSimulation(Z_Param_bInEnableSimulation);
	P_NATIVE_END;
}
// End Class UGroomComponent Function SetEnableSimulation

// Begin Class UGroomComponent Function SetGroomAsset
struct Z_Construct_UFunction_UGroomComponent_SetGroomAsset_Statics
{
	struct GroomComponent_eventSetGroomAsset_Parms
	{
		UGroomAsset* Asset;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Groom" },
		{ "Comment", "/* Accessor function for changing Groom asset from blueprint/sequencer */" },
		{ "ModuleRelativePath", "Public/GroomComponent.h" },
		{ "ToolTip", "Accessor function for changing Groom asset from blueprint/sequencer" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Asset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGroomComponent_SetGroomAsset_Statics::NewProp_Asset = { "Asset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GroomComponent_eventSetGroomAsset_Parms, Asset), Z_Construct_UClass_UGroomAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGroomComponent_SetGroomAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGroomComponent_SetGroomAsset_Statics::NewProp_Asset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomComponent_SetGroomAsset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGroomComponent_SetGroomAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGroomComponent, nullptr, "SetGroomAsset", nullptr, nullptr, Z_Construct_UFunction_UGroomComponent_SetGroomAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomComponent_SetGroomAsset_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGroomComponent_SetGroomAsset_Statics::GroomComponent_eventSetGroomAsset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomComponent_SetGroomAsset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGroomComponent_SetGroomAsset_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGroomComponent_SetGroomAsset_Statics::GroomComponent_eventSetGroomAsset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGroomComponent_SetGroomAsset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGroomComponent_SetGroomAsset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGroomComponent::execSetGroomAsset)
{
	P_GET_OBJECT(UGroomAsset,Z_Param_Asset);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetGroomAsset(Z_Param_Asset);
	P_NATIVE_END;
}
// End Class UGroomComponent Function SetGroomAsset

// Begin Class UGroomComponent Function SetGroomCache
struct Z_Construct_UFunction_UGroomComponent_SetGroomCache_Statics
{
	struct GroomComponent_eventSetGroomCache_Parms
	{
		UGroomCache* InGroomCache;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Groom" },
		{ "Comment", "/* Accessor function for changing GroomCache asset from blueprint/sequencer */" },
		{ "ModuleRelativePath", "Public/GroomComponent.h" },
		{ "ToolTip", "Accessor function for changing GroomCache asset from blueprint/sequencer" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InGroomCache;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGroomComponent_SetGroomCache_Statics::NewProp_InGroomCache = { "InGroomCache", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GroomComponent_eventSetGroomCache_Parms, InGroomCache), Z_Construct_UClass_UGroomCache_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGroomComponent_SetGroomCache_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGroomComponent_SetGroomCache_Statics::NewProp_InGroomCache,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomComponent_SetGroomCache_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGroomComponent_SetGroomCache_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGroomComponent, nullptr, "SetGroomCache", nullptr, nullptr, Z_Construct_UFunction_UGroomComponent_SetGroomCache_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomComponent_SetGroomCache_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGroomComponent_SetGroomCache_Statics::GroomComponent_eventSetGroomCache_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomComponent_SetGroomCache_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGroomComponent_SetGroomCache_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGroomComponent_SetGroomCache_Statics::GroomComponent_eventSetGroomCache_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGroomComponent_SetGroomCache()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGroomComponent_SetGroomCache_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGroomComponent::execSetGroomCache)
{
	P_GET_OBJECT(UGroomCache,Z_Param_InGroomCache);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetGroomCache(Z_Param_InGroomCache);
	P_NATIVE_END;
}
// End Class UGroomComponent Function SetGroomCache

// Begin Class UGroomComponent Function SetHairLengthScale
struct Z_Construct_UFunction_UGroomComponent_SetHairLengthScale_Statics
{
	struct GroomComponent_eventSetHairLengthScale_Parms
	{
		float Scale;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Groom" },
		{ "Comment", "/* Accessor function for changing hair length scale from blueprint/sequencer */" },
		{ "ModuleRelativePath", "Public/GroomComponent.h" },
		{ "ToolTip", "Accessor function for changing hair length scale from blueprint/sequencer" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Scale;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGroomComponent_SetHairLengthScale_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GroomComponent_eventSetHairLengthScale_Parms, Scale), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGroomComponent_SetHairLengthScale_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGroomComponent_SetHairLengthScale_Statics::NewProp_Scale,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomComponent_SetHairLengthScale_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGroomComponent_SetHairLengthScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGroomComponent, nullptr, "SetHairLengthScale", nullptr, nullptr, Z_Construct_UFunction_UGroomComponent_SetHairLengthScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomComponent_SetHairLengthScale_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGroomComponent_SetHairLengthScale_Statics::GroomComponent_eventSetHairLengthScale_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomComponent_SetHairLengthScale_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGroomComponent_SetHairLengthScale_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGroomComponent_SetHairLengthScale_Statics::GroomComponent_eventSetHairLengthScale_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGroomComponent_SetHairLengthScale()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGroomComponent_SetHairLengthScale_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGroomComponent::execSetHairLengthScale)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Scale);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetHairLengthScale(Z_Param_Scale);
	P_NATIVE_END;
}
// End Class UGroomComponent Function SetHairLengthScale

// Begin Class UGroomComponent Function SetHairLengthScaleEnable
struct Z_Construct_UFunction_UGroomComponent_SetHairLengthScaleEnable_Statics
{
	struct GroomComponent_eventSetHairLengthScaleEnable_Parms
	{
		bool bEnable;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Groom" },
		{ "ModuleRelativePath", "Public/GroomComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bEnable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UGroomComponent_SetHairLengthScaleEnable_Statics::NewProp_bEnable_SetBit(void* Obj)
{
	((GroomComponent_eventSetHairLengthScaleEnable_Parms*)Obj)->bEnable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGroomComponent_SetHairLengthScaleEnable_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GroomComponent_eventSetHairLengthScaleEnable_Parms), &Z_Construct_UFunction_UGroomComponent_SetHairLengthScaleEnable_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGroomComponent_SetHairLengthScaleEnable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGroomComponent_SetHairLengthScaleEnable_Statics::NewProp_bEnable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomComponent_SetHairLengthScaleEnable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGroomComponent_SetHairLengthScaleEnable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGroomComponent, nullptr, "SetHairLengthScaleEnable", nullptr, nullptr, Z_Construct_UFunction_UGroomComponent_SetHairLengthScaleEnable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomComponent_SetHairLengthScaleEnable_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGroomComponent_SetHairLengthScaleEnable_Statics::GroomComponent_eventSetHairLengthScaleEnable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomComponent_SetHairLengthScaleEnable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGroomComponent_SetHairLengthScaleEnable_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGroomComponent_SetHairLengthScaleEnable_Statics::GroomComponent_eventSetHairLengthScaleEnable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGroomComponent_SetHairLengthScaleEnable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGroomComponent_SetHairLengthScaleEnable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGroomComponent::execSetHairLengthScaleEnable)
{
	P_GET_UBOOL(Z_Param_bEnable);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetHairLengthScaleEnable(Z_Param_bEnable);
	P_NATIVE_END;
}
// End Class UGroomComponent Function SetHairLengthScaleEnable

// Begin Class UGroomComponent Function SetMeshDeformer
struct Z_Construct_UFunction_UGroomComponent_SetMeshDeformer_Statics
{
	struct GroomComponent_eventSetMeshDeformer_Parms
	{
		UMeshDeformer* InMeshDeformer;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Components|SkinnedMesh" },
		{ "Comment", "/* Change the MeshDeformer that is used for this Component. */" },
		{ "ModuleRelativePath", "Public/GroomComponent.h" },
		{ "ToolTip", "Change the MeshDeformer that is used for this Component." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InMeshDeformer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGroomComponent_SetMeshDeformer_Statics::NewProp_InMeshDeformer = { "InMeshDeformer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GroomComponent_eventSetMeshDeformer_Parms, InMeshDeformer), Z_Construct_UClass_UMeshDeformer_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGroomComponent_SetMeshDeformer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGroomComponent_SetMeshDeformer_Statics::NewProp_InMeshDeformer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomComponent_SetMeshDeformer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGroomComponent_SetMeshDeformer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGroomComponent, nullptr, "SetMeshDeformer", nullptr, nullptr, Z_Construct_UFunction_UGroomComponent_SetMeshDeformer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomComponent_SetMeshDeformer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGroomComponent_SetMeshDeformer_Statics::GroomComponent_eventSetMeshDeformer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomComponent_SetMeshDeformer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGroomComponent_SetMeshDeformer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGroomComponent_SetMeshDeformer_Statics::GroomComponent_eventSetMeshDeformer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGroomComponent_SetMeshDeformer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGroomComponent_SetMeshDeformer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGroomComponent::execSetMeshDeformer)
{
	P_GET_OBJECT(UMeshDeformer,Z_Param_InMeshDeformer);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMeshDeformer(Z_Param_InMeshDeformer);
	P_NATIVE_END;
}
// End Class UGroomComponent Function SetMeshDeformer

// Begin Class UGroomComponent Function SetPhysicsAsset
struct Z_Construct_UFunction_UGroomComponent_SetPhysicsAsset_Statics
{
	struct GroomComponent_eventSetPhysicsAsset_Parms
	{
		UPhysicsAsset* InPhysicsAsset;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Simulation" },
		{ "Comment", "/* Accessor function for changing Groom physics asset from blueprint/sequencer */" },
		{ "ModuleRelativePath", "Public/GroomComponent.h" },
		{ "ToolTip", "Accessor function for changing Groom physics asset from blueprint/sequencer" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InPhysicsAsset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGroomComponent_SetPhysicsAsset_Statics::NewProp_InPhysicsAsset = { "InPhysicsAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GroomComponent_eventSetPhysicsAsset_Parms, InPhysicsAsset), Z_Construct_UClass_UPhysicsAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGroomComponent_SetPhysicsAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGroomComponent_SetPhysicsAsset_Statics::NewProp_InPhysicsAsset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomComponent_SetPhysicsAsset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGroomComponent_SetPhysicsAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGroomComponent, nullptr, "SetPhysicsAsset", nullptr, nullptr, Z_Construct_UFunction_UGroomComponent_SetPhysicsAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomComponent_SetPhysicsAsset_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGroomComponent_SetPhysicsAsset_Statics::GroomComponent_eventSetPhysicsAsset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomComponent_SetPhysicsAsset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGroomComponent_SetPhysicsAsset_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGroomComponent_SetPhysicsAsset_Statics::GroomComponent_eventSetPhysicsAsset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGroomComponent_SetPhysicsAsset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGroomComponent_SetPhysicsAsset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGroomComponent::execSetPhysicsAsset)
{
	P_GET_OBJECT(UPhysicsAsset,Z_Param_InPhysicsAsset);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPhysicsAsset(Z_Param_InPhysicsAsset);
	P_NATIVE_END;
}
// End Class UGroomComponent Function SetPhysicsAsset

// Begin Class UGroomComponent
void UGroomComponent::StaticRegisterNativesUGroomComponent()
{
	UClass* Class = UGroomComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddCollisionComponent", &UGroomComponent::execAddCollisionComponent },
		{ "GetIsHairLengthScaleEnabled", &UGroomComponent::execGetIsHairLengthScaleEnabled },
		{ "GetNiagaraComponent", &UGroomComponent::execGetNiagaraComponent },
		{ "ResetCollisionComponents", &UGroomComponent::execResetCollisionComponents },
		{ "ResetSimulation", &UGroomComponent::execResetSimulation },
		{ "SetBindingAsset", &UGroomComponent::execSetBindingAsset },
		{ "SetEnableSimulation", &UGroomComponent::execSetEnableSimulation },
		{ "SetGroomAsset", &UGroomComponent::execSetGroomAsset },
		{ "SetGroomCache", &UGroomComponent::execSetGroomCache },
		{ "SetHairLengthScale", &UGroomComponent::execSetHairLengthScale },
		{ "SetHairLengthScaleEnable", &UGroomComponent::execSetHairLengthScaleEnable },
		{ "SetMeshDeformer", &UGroomComponent::execSetMeshDeformer },
		{ "SetPhysicsAsset", &UGroomComponent::execSetPhysicsAsset },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGroomComponent);
UClass* Z_Construct_UClass_UGroomComponent_NoRegister()
{
	return UGroomComponent::StaticClass();
}
struct Z_Construct_UClass_UGroomComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Rendering" },
		{ "HideCategories", "Object Physics Activation Mobility Components|Activation Mobility Trigger" },
		{ "IncludePath", "GroomComponent.h" },
		{ "ModuleRelativePath", "Public/GroomComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroomAsset_MetaData[] = {
		{ "Category", "Groom" },
		{ "Comment", "/** Groom asset . */" },
		{ "ModuleRelativePath", "Public/GroomComponent.h" },
		{ "ToolTip", "Groom asset ." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroomCache_MetaData[] = {
		{ "Category", "GroomCache" },
		{ "EditCondition", "BindingAsset == nullptr" },
		{ "ModuleRelativePath", "Public/GroomComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NiagaraComponents_MetaData[] = {
		{ "Comment", "/** Niagara components that will be attached to the system*/" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GroomComponent.h" },
		{ "ToolTip", "Niagara components that will be attached to the system" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceSkeletalMesh_MetaData[] = {
		{ "Comment", "// Kept for debugging mesh transfer\n" },
		{ "ModuleRelativePath", "Public/GroomComponent.h" },
		{ "ToolTip", "Kept for debugging mesh transfer" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BindingAsset_MetaData[] = {
		{ "Category", "Groom" },
		{ "Comment", "/** Optional binding asset for binding a groom onto a skeletal mesh. If the binding asset is not provided the projection is done at runtime, which implies a large GPU cost at startup time. */" },
		{ "EditCondition", "GroomCache == nullptr" },
		{ "ModuleRelativePath", "Public/GroomComponent.h" },
		{ "ToolTip", "Optional binding asset for binding a groom onto a skeletal mesh. If the binding asset is not provided the projection is done at runtime, which implies a large GPU cost at startup time." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PhysicsAsset_MetaData[] = {
		{ "Category", "Simulation" },
		{ "Comment", "/** Physics asset to be used for hair simulation */" },
		{ "ModuleRelativePath", "Public/GroomComponent.h" },
		{ "ToolTip", "Physics asset to be used for hair simulation" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SimulationSettings_MetaData[] = {
		{ "Category", "Simulation" },
		{ "Comment", "/** Groom's simulation settings */" },
		{ "ModuleRelativePath", "Public/GroomComponent.h" },
		{ "ToolTip", "Groom's simulation settings" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshDeformer_MetaData[] = {
		{ "Category", "Deformer" },
		{ "Comment", "/** If set the MeshDeformer will be applied on groom instance for deformation. */" },
		{ "ModuleRelativePath", "Public/GroomComponent.h" },
		{ "ToolTip", "If set the MeshDeformer will be applied on groom instance for deformation." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshDeformerInstance_MetaData[] = {
		{ "Category", "Deformer" },
		{ "Comment", "/** Object containing state for the bound MeshDeformer. */" },
		{ "ModuleRelativePath", "Public/GroomComponent.h" },
		{ "ToolTip", "Object containing state for the bound MeshDeformer." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshDeformerInstanceSettings_MetaData[] = {
		{ "Category", "Deformer" },
		{ "Comment", "/** Object containing instance settings for the bound MeshDeformer. */" },
		{ "DisplayName", "Deformer Settings" },
		{ "EditCondition", "MeshDeformerInstanceSettings!=nullptr" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GroomComponent.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Object containing instance settings for the bound MeshDeformer." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Strands_DebugMaterial_MetaData[] = {
		{ "Comment", "/* Reference of the default/debug materials for each geometric representation */" },
		{ "ModuleRelativePath", "Public/GroomComponent.h" },
		{ "ToolTip", "Reference of the default/debug materials for each geometric representation" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Strands_DefaultMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Public/GroomComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Cards_DefaultMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Public/GroomComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Meshes_DefaultMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Public/GroomComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AngularSpringsSystem_MetaData[] = {
		{ "ModuleRelativePath", "Public/GroomComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CosseratRodsSystem_MetaData[] = {
		{ "ModuleRelativePath", "Public/GroomComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttachmentName_MetaData[] = {
		{ "Category", "Groom" },
		{ "Comment", "/** Optional socket name, where the groom component should be attached at, when parented with a skeletal mesh */" },
		{ "ModuleRelativePath", "Public/GroomComponent.h" },
		{ "ToolTip", "Optional socket name, where the groom component should be attached at, when parented with a skeletal mesh" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroomGroupsDesc_MetaData[] = {
		{ "Category", "Groom" },
		{ "Comment", "/** Groom's groups info. */" },
		{ "ModuleRelativePath", "Public/GroomComponent.h" },
		{ "ToolTip", "Groom's groups info." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseCards_MetaData[] = {
		{ "Category", "Groom" },
		{ "Comment", "/** Force the groom to use cards/meshes geometry instead of strands. */" },
		{ "ModuleRelativePath", "Public/GroomComponent.h" },
		{ "ToolTip", "Force the groom to use cards/meshes geometry instead of strands." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRunning_MetaData[] = {
		{ "Category", "GroomCache" },
		{ "ModuleRelativePath", "Public/GroomComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLooping_MetaData[] = {
		{ "Category", "GroomCache" },
		{ "ModuleRelativePath", "Public/GroomComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bManualTick_MetaData[] = {
		{ "Category", "GroomCache" },
		{ "ModuleRelativePath", "Public/GroomComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ElapsedTime_MetaData[] = {
		{ "Category", "GroomCache" },
		{ "ModuleRelativePath", "Public/GroomComponent.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroomAssetBeingLoaded_MetaData[] = {
		{ "ModuleRelativePath", "Public/GroomComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BindingAssetBeingLoaded_MetaData[] = {
		{ "ModuleRelativePath", "Public/GroomComponent.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GroomAsset;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GroomCache;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NiagaraComponents_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_NiagaraComponents;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceSkeletalMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BindingAsset;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PhysicsAsset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SimulationSettings;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshDeformer;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshDeformerInstance;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshDeformerInstanceSettings;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Strands_DebugMaterial;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Strands_DefaultMaterial;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Cards_DefaultMaterial;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Meshes_DefaultMaterial;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AngularSpringsSystem;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CosseratRodsSystem;
	static const UECodeGen_Private::FStrPropertyParams NewProp_AttachmentName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GroomGroupsDesc_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_GroomGroupsDesc;
	static void NewProp_bUseCards_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseCards;
	static void NewProp_bRunning_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRunning;
	static void NewProp_bLooping_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLooping;
	static void NewProp_bManualTick_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bManualTick;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ElapsedTime;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GroomAssetBeingLoaded;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BindingAssetBeingLoaded;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGroomComponent_AddCollisionComponent, "AddCollisionComponent" }, // 2158216573
		{ &Z_Construct_UFunction_UGroomComponent_GetIsHairLengthScaleEnabled, "GetIsHairLengthScaleEnabled" }, // 1499870044
		{ &Z_Construct_UFunction_UGroomComponent_GetNiagaraComponent, "GetNiagaraComponent" }, // 3897470062
		{ &Z_Construct_UFunction_UGroomComponent_ResetCollisionComponents, "ResetCollisionComponents" }, // 1212294534
		{ &Z_Construct_UFunction_UGroomComponent_ResetSimulation, "ResetSimulation" }, // 1324845092
		{ &Z_Construct_UFunction_UGroomComponent_SetBindingAsset, "SetBindingAsset" }, // 1428318274
		{ &Z_Construct_UFunction_UGroomComponent_SetEnableSimulation, "SetEnableSimulation" }, // 1071166048
		{ &Z_Construct_UFunction_UGroomComponent_SetGroomAsset, "SetGroomAsset" }, // 1977933468
		{ &Z_Construct_UFunction_UGroomComponent_SetGroomCache, "SetGroomCache" }, // 1701971284
		{ &Z_Construct_UFunction_UGroomComponent_SetHairLengthScale, "SetHairLengthScale" }, // 3873198807
		{ &Z_Construct_UFunction_UGroomComponent_SetHairLengthScaleEnable, "SetHairLengthScaleEnable" }, // 2338406641
		{ &Z_Construct_UFunction_UGroomComponent_SetMeshDeformer, "SetMeshDeformer" }, // 1250562280
		{ &Z_Construct_UFunction_UGroomComponent_SetPhysicsAsset, "SetPhysicsAsset" }, // 2812825455
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGroomComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGroomComponent_Statics::NewProp_GroomAsset = { "GroomAsset", nullptr, (EPropertyFlags)0x0114000200000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGroomComponent, GroomAsset), Z_Construct_UClass_UGroomAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroomAsset_MetaData), NewProp_GroomAsset_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGroomComponent_Statics::NewProp_GroomCache = { "GroomCache", nullptr, (EPropertyFlags)0x0114000200000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGroomComponent, GroomCache), Z_Construct_UClass_UGroomCache_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroomCache_MetaData), NewProp_GroomCache_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGroomComponent_Statics::NewProp_NiagaraComponents_Inner = { "NiagaraComponents", nullptr, (EPropertyFlags)0x0104000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGroomComponent_Statics::NewProp_NiagaraComponents = { "NiagaraComponents", nullptr, (EPropertyFlags)0x0114008000002008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGroomComponent, NiagaraComponents), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NiagaraComponents_MetaData), NewProp_NiagaraComponents_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGroomComponent_Statics::NewProp_SourceSkeletalMesh = { "SourceSkeletalMesh", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGroomComponent, SourceSkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceSkeletalMesh_MetaData), NewProp_SourceSkeletalMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGroomComponent_Statics::NewProp_BindingAsset = { "BindingAsset", nullptr, (EPropertyFlags)0x0114000200000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGroomComponent, BindingAsset), Z_Construct_UClass_UGroomBindingAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BindingAsset_MetaData), NewProp_BindingAsset_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGroomComponent_Statics::NewProp_PhysicsAsset = { "PhysicsAsset", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGroomComponent, PhysicsAsset), Z_Construct_UClass_UPhysicsAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PhysicsAsset_MetaData), NewProp_PhysicsAsset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGroomComponent_Statics::NewProp_SimulationSettings = { "SimulationSettings", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGroomComponent, SimulationSettings), Z_Construct_UScriptStruct_FHairSimulationSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SimulationSettings_MetaData), NewProp_SimulationSettings_MetaData) }; // 541303691
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGroomComponent_Statics::NewProp_MeshDeformer = { "MeshDeformer", nullptr, (EPropertyFlags)0x0114000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGroomComponent, MeshDeformer), Z_Construct_UClass_UMeshDeformer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshDeformer_MetaData), NewProp_MeshDeformer_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGroomComponent_Statics::NewProp_MeshDeformerInstance = { "MeshDeformerInstance", nullptr, (EPropertyFlags)0x0114000000002014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGroomComponent, MeshDeformerInstance), Z_Construct_UClass_UMeshDeformerInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshDeformerInstance_MetaData), NewProp_MeshDeformerInstance_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGroomComponent_Statics::NewProp_MeshDeformerInstanceSettings = { "MeshDeformerInstanceSettings", nullptr, (EPropertyFlags)0x01160000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGroomComponent, MeshDeformerInstanceSettings), Z_Construct_UClass_UMeshDeformerInstanceSettings_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshDeformerInstanceSettings_MetaData), NewProp_MeshDeformerInstanceSettings_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGroomComponent_Statics::NewProp_Strands_DebugMaterial = { "Strands_DebugMaterial", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGroomComponent, Strands_DebugMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Strands_DebugMaterial_MetaData), NewProp_Strands_DebugMaterial_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGroomComponent_Statics::NewProp_Strands_DefaultMaterial = { "Strands_DefaultMaterial", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGroomComponent, Strands_DefaultMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Strands_DefaultMaterial_MetaData), NewProp_Strands_DefaultMaterial_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGroomComponent_Statics::NewProp_Cards_DefaultMaterial = { "Cards_DefaultMaterial", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGroomComponent, Cards_DefaultMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Cards_DefaultMaterial_MetaData), NewProp_Cards_DefaultMaterial_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGroomComponent_Statics::NewProp_Meshes_DefaultMaterial = { "Meshes_DefaultMaterial", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGroomComponent, Meshes_DefaultMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Meshes_DefaultMaterial_MetaData), NewProp_Meshes_DefaultMaterial_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGroomComponent_Statics::NewProp_AngularSpringsSystem = { "AngularSpringsSystem", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGroomComponent, AngularSpringsSystem), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AngularSpringsSystem_MetaData), NewProp_AngularSpringsSystem_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGroomComponent_Statics::NewProp_CosseratRodsSystem = { "CosseratRodsSystem", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGroomComponent, CosseratRodsSystem), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CosseratRodsSystem_MetaData), NewProp_CosseratRodsSystem_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UGroomComponent_Statics::NewProp_AttachmentName = { "AttachmentName", nullptr, (EPropertyFlags)0x0010040200000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGroomComponent, AttachmentName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttachmentName_MetaData), NewProp_AttachmentName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGroomComponent_Statics::NewProp_GroomGroupsDesc_Inner = { "GroomGroupsDesc", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FHairGroupDesc, METADATA_PARAMS(0, nullptr) }; // 1462074430
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGroomComponent_Statics::NewProp_GroomGroupsDesc = { "GroomGroupsDesc", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGroomComponent, GroomGroupsDesc), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroomGroupsDesc_MetaData), NewProp_GroomGroupsDesc_MetaData) }; // 1462074430
void Z_Construct_UClass_UGroomComponent_Statics::NewProp_bUseCards_SetBit(void* Obj)
{
	((UGroomComponent*)Obj)->bUseCards = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGroomComponent_Statics::NewProp_bUseCards = { "bUseCards", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGroomComponent), &Z_Construct_UClass_UGroomComponent_Statics::NewProp_bUseCards_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseCards_MetaData), NewProp_bUseCards_MetaData) };
void Z_Construct_UClass_UGroomComponent_Statics::NewProp_bRunning_SetBit(void* Obj)
{
	((UGroomComponent*)Obj)->bRunning = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGroomComponent_Statics::NewProp_bRunning = { "bRunning", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGroomComponent), &Z_Construct_UClass_UGroomComponent_Statics::NewProp_bRunning_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRunning_MetaData), NewProp_bRunning_MetaData) };
void Z_Construct_UClass_UGroomComponent_Statics::NewProp_bLooping_SetBit(void* Obj)
{
	((UGroomComponent*)Obj)->bLooping = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGroomComponent_Statics::NewProp_bLooping = { "bLooping", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGroomComponent), &Z_Construct_UClass_UGroomComponent_Statics::NewProp_bLooping_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLooping_MetaData), NewProp_bLooping_MetaData) };
void Z_Construct_UClass_UGroomComponent_Statics::NewProp_bManualTick_SetBit(void* Obj)
{
	((UGroomComponent*)Obj)->bManualTick = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGroomComponent_Statics::NewProp_bManualTick = { "bManualTick", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGroomComponent), &Z_Construct_UClass_UGroomComponent_Statics::NewProp_bManualTick_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bManualTick_MetaData), NewProp_bManualTick_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGroomComponent_Statics::NewProp_ElapsedTime = { "ElapsedTime", nullptr, (EPropertyFlags)0x0040000000022001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGroomComponent, ElapsedTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ElapsedTime_MetaData), NewProp_ElapsedTime_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGroomComponent_Statics::NewProp_GroomAssetBeingLoaded = { "GroomAssetBeingLoaded", nullptr, (EPropertyFlags)0x0144000800002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGroomComponent, GroomAssetBeingLoaded), Z_Construct_UClass_UGroomAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroomAssetBeingLoaded_MetaData), NewProp_GroomAssetBeingLoaded_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGroomComponent_Statics::NewProp_BindingAssetBeingLoaded = { "BindingAssetBeingLoaded", nullptr, (EPropertyFlags)0x0144000800002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGroomComponent, BindingAssetBeingLoaded), Z_Construct_UClass_UGroomBindingAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BindingAssetBeingLoaded_MetaData), NewProp_BindingAssetBeingLoaded_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGroomComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomComponent_Statics::NewProp_GroomAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomComponent_Statics::NewProp_GroomCache,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomComponent_Statics::NewProp_NiagaraComponents_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomComponent_Statics::NewProp_NiagaraComponents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomComponent_Statics::NewProp_SourceSkeletalMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomComponent_Statics::NewProp_BindingAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomComponent_Statics::NewProp_PhysicsAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomComponent_Statics::NewProp_SimulationSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomComponent_Statics::NewProp_MeshDeformer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomComponent_Statics::NewProp_MeshDeformerInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomComponent_Statics::NewProp_MeshDeformerInstanceSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomComponent_Statics::NewProp_Strands_DebugMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomComponent_Statics::NewProp_Strands_DefaultMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomComponent_Statics::NewProp_Cards_DefaultMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomComponent_Statics::NewProp_Meshes_DefaultMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomComponent_Statics::NewProp_AngularSpringsSystem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomComponent_Statics::NewProp_CosseratRodsSystem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomComponent_Statics::NewProp_AttachmentName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomComponent_Statics::NewProp_GroomGroupsDesc_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomComponent_Statics::NewProp_GroomGroupsDesc,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomComponent_Statics::NewProp_bUseCards,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomComponent_Statics::NewProp_bRunning,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomComponent_Statics::NewProp_bLooping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomComponent_Statics::NewProp_bManualTick,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomComponent_Statics::NewProp_ElapsedTime,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomComponent_Statics::NewProp_GroomAssetBeingLoaded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomComponent_Statics::NewProp_BindingAssetBeingLoaded,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGroomComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGroomComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMeshComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_HairStrandsCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGroomComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UGroomComponent_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_ULODSyncInterface_NoRegister, (int32)VTABLE_OFFSET(UGroomComponent, ILODSyncInterface), false },  // 3498189645
	{ Z_Construct_UClass_UNiagaraPhysicsAssetDICollectorInterface_NoRegister, (int32)VTABLE_OFFSET(UGroomComponent, INiagaraPhysicsAssetDICollectorInterface), false },  // 557137630
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGroomComponent_Statics::ClassParams = {
	&UGroomComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UGroomComponent_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UGroomComponent_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x00B010A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGroomComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UGroomComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGroomComponent()
{
	if (!Z_Registration_Info_UClass_UGroomComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGroomComponent.OuterSingleton, Z_Construct_UClass_UGroomComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGroomComponent.OuterSingleton;
}
template<> HAIRSTRANDSCORE_API UClass* StaticClass<UGroomComponent>()
{
	return UGroomComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGroomComponent);
UGroomComponent::~UGroomComponent() {}
// End Class UGroomComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGroomComponent, UGroomComponent::StaticClass, TEXT("UGroomComponent"), &Z_Registration_Info_UClass_UGroomComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGroomComponent), 1258086504U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomComponent_h_1681886407(TEXT("/Script/HairStrandsCore"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
