// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Engine/SplineMeshComponentDescriptor.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BodyInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSplineMeshComponentDescriptor() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_URuntimeVirtualTexture_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USplineMeshComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EComponentMobility();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EDetailMode();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EHasCustomNavigableGeometry();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EHLODBatchingPolicy();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ELightmapType();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ERayTracingGroupCullingPriority();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ERendererStencilMask();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ERuntimeVirtualTextureMainPassType();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EShadowCacheInvalidationBehavior();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBodyInstance();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLightingChannels();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSoftSplineMeshComponentDescriptor();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSplineMeshComponentDescriptor();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin ScriptStruct FSplineMeshComponentDescriptorBase
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SplineMeshComponentDescriptorBase;
class UScriptStruct* FSplineMeshComponentDescriptorBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SplineMeshComponentDescriptorBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SplineMeshComponentDescriptorBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("SplineMeshComponentDescriptorBase"));
	}
	return Z_Registration_Info_UScriptStruct_SplineMeshComponentDescriptorBase.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FSplineMeshComponentDescriptorBase>()
{
	return FSplineMeshComponentDescriptorBase::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/SplineMeshComponentDescriptor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Hash_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/SplineMeshComponentDescriptor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComponentClass_MetaData[] = {
		{ "Category", "Component Settings" },
		{ "ModuleRelativePath", "Classes/Engine/SplineMeshComponentDescriptor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mobility_MetaData[] = {
		{ "Category", "Component Settings" },
		{ "ModuleRelativePath", "Classes/Engine/SplineMeshComponentDescriptor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VirtualTextureRenderPassType_MetaData[] = {
		{ "Category", "Component Settings" },
		{ "ModuleRelativePath", "Classes/Engine/SplineMeshComponentDescriptor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LightmapType_MetaData[] = {
		{ "Category", "Component Settings" },
		{ "ModuleRelativePath", "Classes/Engine/SplineMeshComponentDescriptor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LightingChannels_MetaData[] = {
		{ "Category", "Component Settings" },
		{ "ModuleRelativePath", "Classes/Engine/SplineMeshComponentDescriptor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RayTracingGroupId_MetaData[] = {
		{ "Category", "Component Settings" },
		{ "ModuleRelativePath", "Classes/Engine/SplineMeshComponentDescriptor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RayTracingGroupCullingPriority_MetaData[] = {
		{ "Category", "Component Settings" },
		{ "ModuleRelativePath", "Classes/Engine/SplineMeshComponentDescriptor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasCustomNavigableGeometry_MetaData[] = {
		{ "Category", "Component Settings" },
		{ "ModuleRelativePath", "Classes/Engine/SplineMeshComponentDescriptor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomDepthStencilWriteMask_MetaData[] = {
		{ "Category", "Component Settings" },
		{ "ModuleRelativePath", "Classes/Engine/SplineMeshComponentDescriptor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BodyInstance_MetaData[] = {
		{ "Category", "Component Settings" },
		{ "ModuleRelativePath", "Classes/Engine/SplineMeshComponentDescriptor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VirtualTextureCullMips_MetaData[] = {
		{ "Category", "Component Settings" },
		{ "ModuleRelativePath", "Classes/Engine/SplineMeshComponentDescriptor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TranslucencySortPriority_MetaData[] = {
		{ "Category", "Component Settings" },
		{ "ModuleRelativePath", "Classes/Engine/SplineMeshComponentDescriptor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverriddenLightMapRes_MetaData[] = {
		{ "Category", "Component Settings" },
		{ "ModuleRelativePath", "Classes/Engine/SplineMeshComponentDescriptor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomDepthStencilValue_MetaData[] = {
		{ "Category", "Component Settings" },
		{ "ModuleRelativePath", "Classes/Engine/SplineMeshComponentDescriptor.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HLODBatchingPolicy_MetaData[] = {
		{ "Category", "Component Settings" },
		{ "ModuleRelativePath", "Classes/Engine/SplineMeshComponentDescriptor.h" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCastShadow_MetaData[] = {
		{ "Category", "Component Settings" },
		{ "ModuleRelativePath", "Classes/Engine/SplineMeshComponentDescriptor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEmissiveLightSource_MetaData[] = {
		{ "Category", "Component Settings" },
		{ "ModuleRelativePath", "Classes/Engine/SplineMeshComponentDescriptor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCastDynamicShadow_MetaData[] = {
		{ "Category", "Component Settings" },
		{ "ModuleRelativePath", "Classes/Engine/SplineMeshComponentDescriptor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCastStaticShadow_MetaData[] = {
		{ "Category", "Component Settings" },
		{ "ModuleRelativePath", "Classes/Engine/SplineMeshComponentDescriptor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCastContactShadow_MetaData[] = {
		{ "Category", "Component Settings" },
		{ "ModuleRelativePath", "Classes/Engine/SplineMeshComponentDescriptor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCastShadowAsTwoSided_MetaData[] = {
		{ "Category", "Component Settings" },
		{ "ModuleRelativePath", "Classes/Engine/SplineMeshComponentDescriptor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCastHiddenShadow_MetaData[] = {
		{ "Category", "Component Settings" },
		{ "ModuleRelativePath", "Classes/Engine/SplineMeshComponentDescriptor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAffectDynamicIndirectLighting_MetaData[] = {
		{ "Category", "Component Settings" },
		{ "ModuleRelativePath", "Classes/Engine/SplineMeshComponentDescriptor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAffectDynamicIndirectLightingWhileHidden_MetaData[] = {
		{ "Category", "Component Settings" },
		{ "ModuleRelativePath", "Classes/Engine/SplineMeshComponentDescriptor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAffectDistanceFieldLighting_MetaData[] = {
		{ "Category", "Component Settings" },
		{ "ModuleRelativePath", "Classes/Engine/SplineMeshComponentDescriptor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bReceivesDecals_MetaData[] = {
		{ "Category", "Component Settings" },
		{ "ModuleRelativePath", "Classes/Engine/SplineMeshComponentDescriptor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideLightMapRes_MetaData[] = {
		{ "Category", "Component Settings" },
		{ "ModuleRelativePath", "Classes/Engine/SplineMeshComponentDescriptor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseAsOccluder_MetaData[] = {
		{ "Category", "Component Settings" },
		{ "ModuleRelativePath", "Classes/Engine/SplineMeshComponentDescriptor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableDiscardOnLoad_MetaData[] = {
		{ "Category", "Component Settings" },
		{ "ModuleRelativePath", "Classes/Engine/SplineMeshComponentDescriptor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRenderCustomDepth_MetaData[] = {
		{ "Category", "Component Settings" },
		{ "ModuleRelativePath", "Classes/Engine/SplineMeshComponentDescriptor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bVisibleInRayTracing_MetaData[] = {
		{ "Category", "Component Settings" },
		{ "ModuleRelativePath", "Classes/Engine/SplineMeshComponentDescriptor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHiddenInGame_MetaData[] = {
		{ "Category", "Component Settings" },
		{ "ModuleRelativePath", "Classes/Engine/SplineMeshComponentDescriptor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsEditorOnly_MetaData[] = {
		{ "Category", "Component Settings" },
		{ "ModuleRelativePath", "Classes/Engine/SplineMeshComponentDescriptor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bVisible_MetaData[] = {
		{ "Category", "Component Settings" },
		{ "ModuleRelativePath", "Classes/Engine/SplineMeshComponentDescriptor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEvaluateWorldPositionOffset_MetaData[] = {
		{ "Category", "Component Settings" },
		{ "ModuleRelativePath", "Classes/Engine/SplineMeshComponentDescriptor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bReverseCulling_MetaData[] = {
		{ "Category", "Component Settings" },
		{ "ModuleRelativePath", "Classes/Engine/SplineMeshComponentDescriptor.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIncludeInHLOD_MetaData[] = {
		{ "Category", "Component Settings" },
		{ "ModuleRelativePath", "Classes/Engine/SplineMeshComponentDescriptor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bConsiderForActorPlacementWhenHidden_MetaData[] = {
		{ "Category", "Component Settings" },
		{ "ModuleRelativePath", "Classes/Engine/SplineMeshComponentDescriptor.h" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseDefaultCollision_MetaData[] = {
		{ "Category", "Component Settings" },
		{ "DisplayAfter", "bGenerateOverlapEvents" },
		{ "ModuleRelativePath", "Classes/Engine/SplineMeshComponentDescriptor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bGenerateOverlapEvents_MetaData[] = {
		{ "Category", "Component Settings" },
		{ "DisplayAfter", "CustomDepthStencilWriteMask" },
		{ "ModuleRelativePath", "Classes/Engine/SplineMeshComponentDescriptor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideNavigationExport_MetaData[] = {
		{ "Category", "Component Settings" },
		{ "ModuleRelativePath", "Classes/Engine/SplineMeshComponentDescriptor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bForceNavigationObstacle_MetaData[] = {
		{ "Category", "Component Settings" },
		{ "ModuleRelativePath", "Classes/Engine/SplineMeshComponentDescriptor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFillCollisionUnderneathForNavmesh_MetaData[] = {
		{ "Category", "Component Settings" },
		{ "ModuleRelativePath", "Classes/Engine/SplineMeshComponentDescriptor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldPositionOffsetDisableDistance_MetaData[] = {
		{ "Category", "Component Settings" },
		{ "ModuleRelativePath", "Classes/Engine/SplineMeshComponentDescriptor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShadowCacheInvalidationBehavior_MetaData[] = {
		{ "Category", "Component Settings" },
		{ "ModuleRelativePath", "Classes/Engine/SplineMeshComponentDescriptor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DetailMode_MetaData[] = {
		{ "Category", "Component Settings" },
		{ "ModuleRelativePath", "Classes/Engine/SplineMeshComponentDescriptor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_Hash;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ComponentClass;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Mobility;
	static const UECodeGen_Private::FBytePropertyParams NewProp_VirtualTextureRenderPassType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_VirtualTextureRenderPassType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LightmapType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_LightmapType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LightingChannels;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RayTracingGroupId;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RayTracingGroupCullingPriority_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_RayTracingGroupCullingPriority;
	static const UECodeGen_Private::FBytePropertyParams NewProp_bHasCustomNavigableGeometry;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CustomDepthStencilWriteMask_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CustomDepthStencilWriteMask;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BodyInstance;
	static const UECodeGen_Private::FIntPropertyParams NewProp_VirtualTextureCullMips;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TranslucencySortPriority;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OverriddenLightMapRes;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CustomDepthStencilValue;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_HLODBatchingPolicy_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_HLODBatchingPolicy;
#endif // WITH_EDITORONLY_DATA
	static void NewProp_bCastShadow_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCastShadow;
	static void NewProp_bEmissiveLightSource_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEmissiveLightSource;
	static void NewProp_bCastDynamicShadow_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCastDynamicShadow;
	static void NewProp_bCastStaticShadow_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCastStaticShadow;
	static void NewProp_bCastContactShadow_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCastContactShadow;
	static void NewProp_bCastShadowAsTwoSided_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCastShadowAsTwoSided;
	static void NewProp_bCastHiddenShadow_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCastHiddenShadow;
	static void NewProp_bAffectDynamicIndirectLighting_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAffectDynamicIndirectLighting;
	static void NewProp_bAffectDynamicIndirectLightingWhileHidden_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAffectDynamicIndirectLightingWhileHidden;
	static void NewProp_bAffectDistanceFieldLighting_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAffectDistanceFieldLighting;
	static void NewProp_bReceivesDecals_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReceivesDecals;
	static void NewProp_bOverrideLightMapRes_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideLightMapRes;
	static void NewProp_bUseAsOccluder_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseAsOccluder;
	static void NewProp_bEnableDiscardOnLoad_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableDiscardOnLoad;
	static void NewProp_bRenderCustomDepth_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRenderCustomDepth;
	static void NewProp_bVisibleInRayTracing_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bVisibleInRayTracing;
	static void NewProp_bHiddenInGame_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHiddenInGame;
	static void NewProp_bIsEditorOnly_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsEditorOnly;
	static void NewProp_bVisible_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bVisible;
	static void NewProp_bEvaluateWorldPositionOffset_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEvaluateWorldPositionOffset;
	static void NewProp_bReverseCulling_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReverseCulling;
#if WITH_EDITORONLY_DATA
	static void NewProp_bIncludeInHLOD_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeInHLOD;
	static void NewProp_bConsiderForActorPlacementWhenHidden_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bConsiderForActorPlacementWhenHidden;
#endif // WITH_EDITORONLY_DATA
	static void NewProp_bUseDefaultCollision_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseDefaultCollision;
	static void NewProp_bGenerateOverlapEvents_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGenerateOverlapEvents;
	static void NewProp_bOverrideNavigationExport_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideNavigationExport;
	static void NewProp_bForceNavigationObstacle_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceNavigationObstacle;
	static void NewProp_bFillCollisionUnderneathForNavmesh_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFillCollisionUnderneathForNavmesh;
	static const UECodeGen_Private::FIntPropertyParams NewProp_WorldPositionOffsetDisableDistance;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ShadowCacheInvalidationBehavior_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ShadowCacheInvalidationBehavior;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DetailMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSplineMeshComponentDescriptorBase>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase_Statics::NewProp_Hash = { "Hash", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSplineMeshComponentDescriptorBase, Hash), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Hash_MetaData), NewProp_Hash_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase_Statics::NewProp_ComponentClass = { "ComponentClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSplineMeshComponentDescriptorBase, ComponentClass), Z_Construct_UClass_UClass, Z_Construct_UClass_USplineMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComponentClass_MetaData), NewProp_ComponentClass_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase_Statics::NewProp_Mobility = { "Mobility", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSplineMeshComponentDescriptorBase, Mobility), Z_Construct_UEnum_Engine_EComponentMobility, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mobility_MetaData), NewProp_Mobility_MetaData) }; // 2012069661
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase_Statics::NewProp_VirtualTextureRenderPassType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase_Statics::NewProp_VirtualTextureRenderPassType = { "VirtualTextureRenderPassType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSplineMeshComponentDescriptorBase, VirtualTextureRenderPassType), Z_Construct_UEnum_Engine_ERuntimeVirtualTextureMainPassType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VirtualTextureRenderPassType_MetaData), NewProp_VirtualTextureRenderPassType_MetaData) }; // 531654431
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase_Statics::NewProp_LightmapType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase_Statics::NewProp_LightmapType = { "LightmapType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSplineMeshComponentDescriptorBase, LightmapType), Z_Construct_UEnum_Engine_ELightmapType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LightmapType_MetaData), NewProp_LightmapType_MetaData) }; // 1850895107
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase_Statics::NewProp_LightingChannels = { "LightingChannels", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSplineMeshComponentDescriptorBase, LightingChannels), Z_Construct_UScriptStruct_FLightingChannels, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LightingChannels_MetaData), NewProp_LightingChannels_MetaData) }; // 828539464
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase_Statics::NewProp_RayTracingGroupId = { "RayTracingGroupId", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSplineMeshComponentDescriptorBase, RayTracingGroupId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RayTracingGroupId_MetaData), NewProp_RayTracingGroupId_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase_Statics::NewProp_RayTracingGroupCullingPriority_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase_Statics::NewProp_RayTracingGroupCullingPriority = { "RayTracingGroupCullingPriority", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSplineMeshComponentDescriptorBase, RayTracingGroupCullingPriority), Z_Construct_UEnum_Engine_ERayTracingGroupCullingPriority, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RayTracingGroupCullingPriority_MetaData), NewProp_RayTracingGroupCullingPriority_MetaData) }; // 1987203214
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase_Statics::NewProp_bHasCustomNavigableGeometry = { "bHasCustomNavigableGeometry", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSplineMeshComponentDescriptorBase, bHasCustomNavigableGeometry), Z_Construct_UEnum_Engine_EHasCustomNavigableGeometry, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasCustomNavigableGeometry_MetaData), NewProp_bHasCustomNavigableGeometry_MetaData) }; // 2809952948
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase_Statics::NewProp_CustomDepthStencilWriteMask_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase_Statics::NewProp_CustomDepthStencilWriteMask = { "CustomDepthStencilWriteMask", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSplineMeshComponentDescriptorBase, CustomDepthStencilWriteMask), Z_Construct_UEnum_Engine_ERendererStencilMask, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomDepthStencilWriteMask_MetaData), NewProp_CustomDepthStencilWriteMask_MetaData) }; // 2385485039
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase_Statics::NewProp_BodyInstance = { "BodyInstance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSplineMeshComponentDescriptorBase, BodyInstance), Z_Construct_UScriptStruct_FBodyInstance, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BodyInstance_MetaData), NewProp_BodyInstance_MetaData) }; // 2628089528
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase_Statics::NewProp_VirtualTextureCullMips = { "VirtualTextureCullMips", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSplineMeshComponentDescriptorBase, VirtualTextureCullMips), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VirtualTextureCullMips_MetaData), NewProp_VirtualTextureCullMips_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase_Statics::NewProp_TranslucencySortPriority = { "TranslucencySortPriority", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSplineMeshComponentDescriptorBase, TranslucencySortPriority), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TranslucencySortPriority_MetaData), NewProp_TranslucencySortPriority_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase_Statics::NewProp_OverriddenLightMapRes = { "OverriddenLightMapRes", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSplineMeshComponentDescriptorBase, OverriddenLightMapRes), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverriddenLightMapRes_MetaData), NewProp_OverriddenLightMapRes_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase_Statics::NewProp_CustomDepthStencilValue = { "CustomDepthStencilValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSplineMeshComponentDescriptorBase, CustomDepthStencilValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomDepthStencilValue_MetaData), NewProp_CustomDepthStencilValue_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase_Statics::NewProp_HLODBatchingPolicy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase_Statics::NewProp_HLODBatchingPolicy = { "HLODBatchingPolicy", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSplineMeshComponentDescriptorBase, HLODBatchingPolicy), Z_Construct_UEnum_Engine_EHLODBatchingPolicy, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HLODBatchingPolicy_MetaData), NewProp_HLODBatchingPolicy_MetaData) }; // 2028751023
#endif // WITH_EDITORONLY_DATA
void Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase_Statics::NewProp_bCastShadow_SetBit(void* Obj)
{
	((FSplineMeshComponentDescriptorBase*)Obj)->bCastShadow = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase_Statics::NewProp_bCastShadow = { "bCastShadow", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FSplineMeshComponentDescriptorBase), &Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase_Statics::NewProp_bCastShadow_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCastShadow_MetaData), NewProp_bCastShadow_MetaData) };
void Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase_Statics::NewProp_bEmissiveLightSource_SetBit(void* Obj)
{
	((FSplineMeshComponentDescriptorBase*)Obj)->bEmissiveLightSource = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase_Statics::NewProp_bEmissiveLightSource = { "bEmissiveLightSource", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FSplineMeshComponentDescriptorBase), &Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase_Statics::NewProp_bEmissiveLightSource_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEmissiveLightSource_MetaData), NewProp_bEmissiveLightSource_MetaData) };
void Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase_Statics::NewProp_bCastDynamicShadow_SetBit(void* Obj)
{
	((FSplineMeshComponentDescriptorBase*)Obj)->bCastDynamicShadow = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase_Statics::NewProp_bCastDynamicShadow = { "bCastDynamicShadow", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FSplineMeshComponentDescriptorBase), &Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase_Statics::NewProp_bCastDynamicShadow_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCastDynamicShadow_MetaData), NewProp_bCastDynamicShadow_MetaData) };
void Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase_Statics::NewProp_bCastStaticShadow_SetBit(void* Obj)
{
	((FSplineMeshComponentDescriptorBase*)Obj)->bCastStaticShadow = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase_Statics::NewProp_bCastStaticShadow = { "bCastStaticShadow", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FSplineMeshComponentDescriptorBase), &Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase_Statics::NewProp_bCastStaticShadow_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCastStaticShadow_MetaData), NewProp_bCastStaticShadow_MetaData) };
void Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase_Statics::NewProp_bCastContactShadow_SetBit(void* Obj)
{
	((FSplineMeshComponentDescriptorBase*)Obj)->bCastContactShadow = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase_Statics::NewProp_bCastContactShadow = { "bCastContactShadow", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FSplineMeshComponentDescriptorBase), &Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase_Statics::NewProp_bCastContactShadow_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCastContactShadow_MetaData), NewProp_bCastContactShadow_MetaData) };
void Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase_Statics::NewProp_bCastShadowAsTwoSided_SetBit(void* Obj)
{
	((FSplineMeshComponentDescriptorBase*)Obj)->bCastShadowAsTwoSided = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase_Statics::NewProp_bCastShadowAsTwoSided = { "bCastShadowAsTwoSided", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FSplineMeshComponentDescriptorBase), &Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase_Statics::NewProp_bCastShadowAsTwoSided_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCastShadowAsTwoSided_MetaData), NewProp_bCastShadowAsTwoSided_MetaData) };
void Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase_Statics::NewProp_bCastHiddenShadow_SetBit(void* Obj)
{
	((FSplineMeshComponentDescriptorBase*)Obj)->bCastHiddenShadow = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase_Statics::NewProp_bCastHiddenShadow = { "bCastHiddenShadow", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FSplineMeshComponentDescriptorBase), &Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase_Statics::NewProp_bCastHiddenShadow_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCastHiddenShadow_MetaData), NewProp_bCastHiddenShadow_MetaData) };
void Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase_Statics::NewProp_bAffectDynamicIndirectLighting_SetBit(void* Obj)
{
	((FSplineMeshComponentDescriptorBase*)Obj)->bAffectDynamicIndirectLighting = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase_Statics::NewProp_bAffectDynamicIndirectLighting = { "bAffectDynamicIndirectLighting", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FSplineMeshComponentDescriptorBase), &Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase_Statics::NewProp_bAffectDynamicIndirectLighting_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAffectDynamicIndirectLighting_MetaData), NewProp_bAffectDynamicIndirectLighting_MetaData) };
void Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase_Statics::NewProp_bAffectDynamicIndirectLightingWhileHidden_SetBit(void* Obj)
{
	((FSplineMeshComponentDescriptorBase*)Obj)->bAffectDynamicIndirectLightingWhileHidden = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase_Statics::NewProp_bAffectDynamicIndirectLightingWhileHidden = { "bAffectDynamicIndirectLightingWhileHidden", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FSplineMeshComponentDescriptorBase), &Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase_Statics::NewProp_bAffectDynamicIndirectLightingWhileHidden_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAffectDynamicIndirectLightingWhileHidden_MetaData), NewProp_bAffectDynamicIndirectLightingWhileHidden_MetaData) };
void Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase_Statics::NewProp_bAffectDistanceFieldLighting_SetBit(void* Obj)
{
	((FSplineMeshComponentDescriptorBase*)Obj)->bAffectDistanceFieldLighting = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase_Statics::NewProp_bAffectDistanceFieldLighting = { "bAffectDistanceFieldLighting", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FSplineMeshComponentDescriptorBase), &Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase_Statics::NewProp_bAffectDistanceFieldLighting_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAffectDistanceFieldLighting_MetaData), NewProp_bAffectDistanceFieldLighting_MetaData) };
void Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase_Statics::NewProp_bReceivesDecals_SetBit(void* Obj)
{
	((FSplineMeshComponentDescriptorBase*)Obj)->bReceivesDecals = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase_Statics::NewProp_bReceivesDecals = { "bReceivesDecals", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FSplineMeshComponentDescriptorBase), &Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase_Statics::NewProp_bReceivesDecals_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bReceivesDecals_MetaData), NewProp_bReceivesDecals_MetaData) };
void Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase_Statics::NewProp_bOverrideLightMapRes_SetBit(void* Obj)
{
	((FSplineMeshComponentDescriptorBase*)Obj)->bOverrideLightMapRes = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase_Statics::NewProp_bOverrideLightMapRes = { "bOverrideLightMapRes", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FSplineMeshComponentDescriptorBase), &Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase_Statics::NewProp_bOverrideLightMapRes_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideLightMapRes_MetaData), NewProp_bOverrideLightMapRes_MetaData) };
void Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase_Statics::NewProp_bUseAsOccluder_SetBit(void* Obj)
{
	((FSplineMeshComponentDescriptorBase*)Obj)->bUseAsOccluder = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase_Statics::NewProp_bUseAsOccluder = { "bUseAsOccluder", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FSplineMeshComponentDescriptorBase), &Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase_Statics::NewProp_bUseAsOccluder_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseAsOccluder_MetaData), NewProp_bUseAsOccluder_MetaData) };
void Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase_Statics::NewProp_bEnableDiscardOnLoad_SetBit(void* Obj)
{
	((FSplineMeshComponentDescriptorBase*)Obj)->bEnableDiscardOnLoad = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase_Statics::NewProp_bEnableDiscardOnLoad = { "bEnableDiscardOnLoad", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FSplineMeshComponentDescriptorBase), &Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase_Statics::NewProp_bEnableDiscardOnLoad_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableDiscardOnLoad_MetaData), NewProp_bEnableDiscardOnLoad_MetaData) };
void Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase_Statics::NewProp_bRenderCustomDepth_SetBit(void* Obj)
{
	((FSplineMeshComponentDescriptorBase*)Obj)->bRenderCustomDepth = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase_Statics::NewProp_bRenderCustomDepth = { "bRenderCustomDepth", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FSplineMeshComponentDescriptorBase), &Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase_Statics::NewProp_bRenderCustomDepth_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRenderCustomDepth_MetaData), NewProp_bRenderCustomDepth_MetaData) };
void Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase_Statics::NewProp_bVisibleInRayTracing_SetBit(void* Obj)
{
	((FSplineMeshComponentDescriptorBase*)Obj)->bVisibleInRayTracing = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase_Statics::NewProp_bVisibleInRayTracing = { "bVisibleInRayTracing", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FSplineMeshComponentDescriptorBase), &Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase_Statics::NewProp_bVisibleInRayTracing_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bVisibleInRayTracing_MetaData), NewProp_bVisibleInRayTracing_MetaData) };
void Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase_Statics::NewProp_bHiddenInGame_SetBit(void* Obj)
{
	((FSplineMeshComponentDescriptorBase*)Obj)->bHiddenInGame = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase_Statics::NewProp_bHiddenInGame = { "bHiddenInGame", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FSplineMeshComponentDescriptorBase), &Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase_Statics::NewProp_bHiddenInGame_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHiddenInGame_MetaData), NewProp_bHiddenInGame_MetaData) };
void Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase_Statics::NewProp_bIsEditorOnly_SetBit(void* Obj)
{
	((FSplineMeshComponentDescriptorBase*)Obj)->bIsEditorOnly = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase_Statics::NewProp_bIsEditorOnly = { "bIsEditorOnly", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FSplineMeshComponentDescriptorBase), &Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase_Statics::NewProp_bIsEditorOnly_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsEditorOnly_MetaData), NewProp_bIsEditorOnly_MetaData) };
void Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase_Statics::NewProp_bVisible_SetBit(void* Obj)
{
	((FSplineMeshComponentDescriptorBase*)Obj)->bVisible = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase_Statics::NewProp_bVisible = { "bVisible", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FSplineMeshComponentDescriptorBase), &Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase_Statics::NewProp_bVisible_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bVisible_MetaData), NewProp_bVisible_MetaData) };
void Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase_Statics::NewProp_bEvaluateWorldPositionOffset_SetBit(void* Obj)
{
	((FSplineMeshComponentDescriptorBase*)Obj)->bEvaluateWorldPositionOffset = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase_Statics::NewProp_bEvaluateWorldPositionOffset = { "bEvaluateWorldPositionOffset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FSplineMeshComponentDescriptorBase), &Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase_Statics::NewProp_bEvaluateWorldPositionOffset_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEvaluateWorldPositionOffset_MetaData), NewProp_bEvaluateWorldPositionOffset_MetaData) };
void Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase_Statics::NewProp_bReverseCulling_SetBit(void* Obj)
{
	((FSplineMeshComponentDescriptorBase*)Obj)->bReverseCulling = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase_Statics::NewProp_bReverseCulling = { "bReverseCulling", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FSplineMeshComponentDescriptorBase), &Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase_Statics::NewProp_bReverseCulling_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bReverseCulling_MetaData), NewProp_bReverseCulling_MetaData) };
#if WITH_EDITORONLY_DATA
void Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase_Statics::NewProp_bIncludeInHLOD_SetBit(void* Obj)
{
	((FSplineMeshComponentDescriptorBase*)Obj)->bIncludeInHLOD = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase_Statics::NewProp_bIncludeInHLOD = { "bIncludeInHLOD", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FSplineMeshComponentDescriptorBase), &Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase_Statics::NewProp_bIncludeInHLOD_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIncludeInHLOD_MetaData), NewProp_bIncludeInHLOD_MetaData) };
void Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase_Statics::NewProp_bConsiderForActorPlacementWhenHidden_SetBit(void* Obj)
{
	((FSplineMeshComponentDescriptorBase*)Obj)->bConsiderForActorPlacementWhenHidden = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase_Statics::NewProp_bConsiderForActorPlacementWhenHidden = { "bConsiderForActorPlacementWhenHidden", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FSplineMeshComponentDescriptorBase), &Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase_Statics::NewProp_bConsiderForActorPlacementWhenHidden_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bConsiderForActorPlacementWhenHidden_MetaData), NewProp_bConsiderForActorPlacementWhenHidden_MetaData) };
#endif // WITH_EDITORONLY_DATA
void Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase_Statics::NewProp_bUseDefaultCollision_SetBit(void* Obj)
{
	((FSplineMeshComponentDescriptorBase*)Obj)->bUseDefaultCollision = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase_Statics::NewProp_bUseDefaultCollision = { "bUseDefaultCollision", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FSplineMeshComponentDescriptorBase), &Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase_Statics::NewProp_bUseDefaultCollision_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseDefaultCollision_MetaData), NewProp_bUseDefaultCollision_MetaData) };
void Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase_Statics::NewProp_bGenerateOverlapEvents_SetBit(void* Obj)
{
	((FSplineMeshComponentDescriptorBase*)Obj)->bGenerateOverlapEvents = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase_Statics::NewProp_bGenerateOverlapEvents = { "bGenerateOverlapEvents", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FSplineMeshComponentDescriptorBase), &Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase_Statics::NewProp_bGenerateOverlapEvents_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bGenerateOverlapEvents_MetaData), NewProp_bGenerateOverlapEvents_MetaData) };
void Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase_Statics::NewProp_bOverrideNavigationExport_SetBit(void* Obj)
{
	((FSplineMeshComponentDescriptorBase*)Obj)->bOverrideNavigationExport = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase_Statics::NewProp_bOverrideNavigationExport = { "bOverrideNavigationExport", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FSplineMeshComponentDescriptorBase), &Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase_Statics::NewProp_bOverrideNavigationExport_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideNavigationExport_MetaData), NewProp_bOverrideNavigationExport_MetaData) };
void Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase_Statics::NewProp_bForceNavigationObstacle_SetBit(void* Obj)
{
	((FSplineMeshComponentDescriptorBase*)Obj)->bForceNavigationObstacle = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase_Statics::NewProp_bForceNavigationObstacle = { "bForceNavigationObstacle", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FSplineMeshComponentDescriptorBase), &Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase_Statics::NewProp_bForceNavigationObstacle_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bForceNavigationObstacle_MetaData), NewProp_bForceNavigationObstacle_MetaData) };
void Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase_Statics::NewProp_bFillCollisionUnderneathForNavmesh_SetBit(void* Obj)
{
	((FSplineMeshComponentDescriptorBase*)Obj)->bFillCollisionUnderneathForNavmesh = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase_Statics::NewProp_bFillCollisionUnderneathForNavmesh = { "bFillCollisionUnderneathForNavmesh", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FSplineMeshComponentDescriptorBase), &Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase_Statics::NewProp_bFillCollisionUnderneathForNavmesh_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFillCollisionUnderneathForNavmesh_MetaData), NewProp_bFillCollisionUnderneathForNavmesh_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase_Statics::NewProp_WorldPositionOffsetDisableDistance = { "WorldPositionOffsetDisableDistance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSplineMeshComponentDescriptorBase, WorldPositionOffsetDisableDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldPositionOffsetDisableDistance_MetaData), NewProp_WorldPositionOffsetDisableDistance_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase_Statics::NewProp_ShadowCacheInvalidationBehavior_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase_Statics::NewProp_ShadowCacheInvalidationBehavior = { "ShadowCacheInvalidationBehavior", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSplineMeshComponentDescriptorBase, ShadowCacheInvalidationBehavior), Z_Construct_UEnum_Engine_EShadowCacheInvalidationBehavior, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShadowCacheInvalidationBehavior_MetaData), NewProp_ShadowCacheInvalidationBehavior_MetaData) }; // 2141891292
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase_Statics::NewProp_DetailMode = { "DetailMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSplineMeshComponentDescriptorBase, DetailMode), Z_Construct_UEnum_Engine_EDetailMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DetailMode_MetaData), NewProp_DetailMode_MetaData) }; // 3549946733
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase_Statics::NewProp_Hash,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase_Statics::NewProp_ComponentClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase_Statics::NewProp_Mobility,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase_Statics::NewProp_VirtualTextureRenderPassType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase_Statics::NewProp_VirtualTextureRenderPassType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase_Statics::NewProp_LightmapType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase_Statics::NewProp_LightmapType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase_Statics::NewProp_LightingChannels,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase_Statics::NewProp_RayTracingGroupId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase_Statics::NewProp_RayTracingGroupCullingPriority_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase_Statics::NewProp_RayTracingGroupCullingPriority,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase_Statics::NewProp_bHasCustomNavigableGeometry,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase_Statics::NewProp_CustomDepthStencilWriteMask_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase_Statics::NewProp_CustomDepthStencilWriteMask,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase_Statics::NewProp_BodyInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase_Statics::NewProp_VirtualTextureCullMips,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase_Statics::NewProp_TranslucencySortPriority,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase_Statics::NewProp_OverriddenLightMapRes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase_Statics::NewProp_CustomDepthStencilValue,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase_Statics::NewProp_HLODBatchingPolicy_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase_Statics::NewProp_HLODBatchingPolicy,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase_Statics::NewProp_bCastShadow,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase_Statics::NewProp_bEmissiveLightSource,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase_Statics::NewProp_bCastDynamicShadow,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase_Statics::NewProp_bCastStaticShadow,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase_Statics::NewProp_bCastContactShadow,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase_Statics::NewProp_bCastShadowAsTwoSided,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase_Statics::NewProp_bCastHiddenShadow,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase_Statics::NewProp_bAffectDynamicIndirectLighting,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase_Statics::NewProp_bAffectDynamicIndirectLightingWhileHidden,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase_Statics::NewProp_bAffectDistanceFieldLighting,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase_Statics::NewProp_bReceivesDecals,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase_Statics::NewProp_bOverrideLightMapRes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase_Statics::NewProp_bUseAsOccluder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase_Statics::NewProp_bEnableDiscardOnLoad,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase_Statics::NewProp_bRenderCustomDepth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase_Statics::NewProp_bVisibleInRayTracing,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase_Statics::NewProp_bHiddenInGame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase_Statics::NewProp_bIsEditorOnly,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase_Statics::NewProp_bVisible,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase_Statics::NewProp_bEvaluateWorldPositionOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase_Statics::NewProp_bReverseCulling,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase_Statics::NewProp_bIncludeInHLOD,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase_Statics::NewProp_bConsiderForActorPlacementWhenHidden,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase_Statics::NewProp_bUseDefaultCollision,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase_Statics::NewProp_bGenerateOverlapEvents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase_Statics::NewProp_bOverrideNavigationExport,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase_Statics::NewProp_bForceNavigationObstacle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase_Statics::NewProp_bFillCollisionUnderneathForNavmesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase_Statics::NewProp_WorldPositionOffsetDisableDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase_Statics::NewProp_ShadowCacheInvalidationBehavior_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase_Statics::NewProp_ShadowCacheInvalidationBehavior,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase_Statics::NewProp_DetailMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"SplineMeshComponentDescriptorBase",
	Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase_Statics::PropPointers),
	sizeof(FSplineMeshComponentDescriptorBase),
	alignof(FSplineMeshComponentDescriptorBase),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase()
{
	if (!Z_Registration_Info_UScriptStruct_SplineMeshComponentDescriptorBase.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SplineMeshComponentDescriptorBase.InnerSingleton, Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SplineMeshComponentDescriptorBase.InnerSingleton;
}
// End ScriptStruct FSplineMeshComponentDescriptorBase

// Begin ScriptStruct FSplineMeshComponentDescriptor
static_assert(std::is_polymorphic<FSplineMeshComponentDescriptor>() == std::is_polymorphic<FSplineMeshComponentDescriptorBase>(), "USTRUCT FSplineMeshComponentDescriptor cannot be polymorphic unless super FSplineMeshComponentDescriptorBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SplineMeshComponentDescriptor;
class UScriptStruct* FSplineMeshComponentDescriptor::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SplineMeshComponentDescriptor.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SplineMeshComponentDescriptor.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSplineMeshComponentDescriptor, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("SplineMeshComponentDescriptor"));
	}
	return Z_Registration_Info_UScriptStruct_SplineMeshComponentDescriptor.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FSplineMeshComponentDescriptor>()
{
	return FSplineMeshComponentDescriptor::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSplineMeshComponentDescriptor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/SplineMeshComponentDescriptor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[] = {
		{ "Category", "Component Settings" },
		{ "DisplayAfter", "ComponentClass" },
		{ "ModuleRelativePath", "Classes/Engine/SplineMeshComponentDescriptor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverrideMaterials_MetaData[] = {
		{ "Category", "Component Settings" },
		{ "DisplayAfter", "ComponentClass" },
		{ "ModuleRelativePath", "Classes/Engine/SplineMeshComponentDescriptor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlayMaterial_MetaData[] = {
		{ "Category", "Component Settings" },
		{ "DisplayAfter", "ComponentClass" },
		{ "ModuleRelativePath", "Classes/Engine/SplineMeshComponentDescriptor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RuntimeVirtualTextures_MetaData[] = {
		{ "Category", "Component Settings" },
		{ "DisplayAfter", "ComponentClass" },
		{ "ModuleRelativePath", "Classes/Engine/SplineMeshComponentDescriptor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverrideMaterials_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OverrideMaterials;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlayMaterial;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RuntimeVirtualTextures_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RuntimeVirtualTextures;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSplineMeshComponentDescriptor>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSplineMeshComponentDescriptor_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSplineMeshComponentDescriptor, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticMesh_MetaData), NewProp_StaticMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSplineMeshComponentDescriptor_Statics::NewProp_OverrideMaterials_Inner = { "OverrideMaterials", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSplineMeshComponentDescriptor_Statics::NewProp_OverrideMaterials = { "OverrideMaterials", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSplineMeshComponentDescriptor, OverrideMaterials), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverrideMaterials_MetaData), NewProp_OverrideMaterials_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSplineMeshComponentDescriptor_Statics::NewProp_OverlayMaterial = { "OverlayMaterial", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSplineMeshComponentDescriptor, OverlayMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlayMaterial_MetaData), NewProp_OverlayMaterial_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSplineMeshComponentDescriptor_Statics::NewProp_RuntimeVirtualTextures_Inner = { "RuntimeVirtualTextures", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_URuntimeVirtualTexture_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSplineMeshComponentDescriptor_Statics::NewProp_RuntimeVirtualTextures = { "RuntimeVirtualTextures", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSplineMeshComponentDescriptor, RuntimeVirtualTextures), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RuntimeVirtualTextures_MetaData), NewProp_RuntimeVirtualTextures_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSplineMeshComponentDescriptor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSplineMeshComponentDescriptor_Statics::NewProp_StaticMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSplineMeshComponentDescriptor_Statics::NewProp_OverrideMaterials_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSplineMeshComponentDescriptor_Statics::NewProp_OverrideMaterials,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSplineMeshComponentDescriptor_Statics::NewProp_OverlayMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSplineMeshComponentDescriptor_Statics::NewProp_RuntimeVirtualTextures_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSplineMeshComponentDescriptor_Statics::NewProp_RuntimeVirtualTextures,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSplineMeshComponentDescriptor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSplineMeshComponentDescriptor_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase,
	&NewStructOps,
	"SplineMeshComponentDescriptor",
	Z_Construct_UScriptStruct_FSplineMeshComponentDescriptor_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSplineMeshComponentDescriptor_Statics::PropPointers),
	sizeof(FSplineMeshComponentDescriptor),
	alignof(FSplineMeshComponentDescriptor),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSplineMeshComponentDescriptor_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSplineMeshComponentDescriptor_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSplineMeshComponentDescriptor()
{
	if (!Z_Registration_Info_UScriptStruct_SplineMeshComponentDescriptor.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SplineMeshComponentDescriptor.InnerSingleton, Z_Construct_UScriptStruct_FSplineMeshComponentDescriptor_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SplineMeshComponentDescriptor.InnerSingleton;
}
// End ScriptStruct FSplineMeshComponentDescriptor

// Begin ScriptStruct FSoftSplineMeshComponentDescriptor
static_assert(std::is_polymorphic<FSoftSplineMeshComponentDescriptor>() == std::is_polymorphic<FSplineMeshComponentDescriptorBase>(), "USTRUCT FSoftSplineMeshComponentDescriptor cannot be polymorphic unless super FSplineMeshComponentDescriptorBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SoftSplineMeshComponentDescriptor;
class UScriptStruct* FSoftSplineMeshComponentDescriptor::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SoftSplineMeshComponentDescriptor.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SoftSplineMeshComponentDescriptor.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSoftSplineMeshComponentDescriptor, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("SoftSplineMeshComponentDescriptor"));
	}
	return Z_Registration_Info_UScriptStruct_SoftSplineMeshComponentDescriptor.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FSoftSplineMeshComponentDescriptor>()
{
	return FSoftSplineMeshComponentDescriptor::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSoftSplineMeshComponentDescriptor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/SplineMeshComponentDescriptor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[] = {
		{ "Category", "Component Settings" },
		{ "DisplayAfter", "ComponentClass" },
		{ "ModuleRelativePath", "Classes/Engine/SplineMeshComponentDescriptor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverrideMaterials_MetaData[] = {
		{ "Category", "Component Settings" },
		{ "DisplayAfter", "ComponentClass" },
		{ "ModuleRelativePath", "Classes/Engine/SplineMeshComponentDescriptor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlayMaterial_MetaData[] = {
		{ "Category", "Component Settings" },
		{ "DisplayAfter", "ComponentClass" },
		{ "ModuleRelativePath", "Classes/Engine/SplineMeshComponentDescriptor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RuntimeVirtualTextures_MetaData[] = {
		{ "Category", "Component Settings" },
		{ "DisplayAfter", "ComponentClass" },
		{ "ModuleRelativePath", "Classes/Engine/SplineMeshComponentDescriptor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_StaticMesh;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_OverrideMaterials_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OverrideMaterials;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_OverlayMaterial;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_RuntimeVirtualTextures_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RuntimeVirtualTextures;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSoftSplineMeshComponentDescriptor>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FSoftSplineMeshComponentDescriptor_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoftSplineMeshComponentDescriptor, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticMesh_MetaData), NewProp_StaticMesh_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FSoftSplineMeshComponentDescriptor_Statics::NewProp_OverrideMaterials_Inner = { "OverrideMaterials", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSoftSplineMeshComponentDescriptor_Statics::NewProp_OverrideMaterials = { "OverrideMaterials", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoftSplineMeshComponentDescriptor, OverrideMaterials), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverrideMaterials_MetaData), NewProp_OverrideMaterials_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FSoftSplineMeshComponentDescriptor_Statics::NewProp_OverlayMaterial = { "OverlayMaterial", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoftSplineMeshComponentDescriptor, OverlayMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlayMaterial_MetaData), NewProp_OverlayMaterial_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FSoftSplineMeshComponentDescriptor_Statics::NewProp_RuntimeVirtualTextures_Inner = { "RuntimeVirtualTextures", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_URuntimeVirtualTexture_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSoftSplineMeshComponentDescriptor_Statics::NewProp_RuntimeVirtualTextures = { "RuntimeVirtualTextures", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoftSplineMeshComponentDescriptor, RuntimeVirtualTextures), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RuntimeVirtualTextures_MetaData), NewProp_RuntimeVirtualTextures_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSoftSplineMeshComponentDescriptor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoftSplineMeshComponentDescriptor_Statics::NewProp_StaticMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoftSplineMeshComponentDescriptor_Statics::NewProp_OverrideMaterials_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoftSplineMeshComponentDescriptor_Statics::NewProp_OverrideMaterials,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoftSplineMeshComponentDescriptor_Statics::NewProp_OverlayMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoftSplineMeshComponentDescriptor_Statics::NewProp_RuntimeVirtualTextures_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoftSplineMeshComponentDescriptor_Statics::NewProp_RuntimeVirtualTextures,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoftSplineMeshComponentDescriptor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSoftSplineMeshComponentDescriptor_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase,
	&NewStructOps,
	"SoftSplineMeshComponentDescriptor",
	Z_Construct_UScriptStruct_FSoftSplineMeshComponentDescriptor_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoftSplineMeshComponentDescriptor_Statics::PropPointers),
	sizeof(FSoftSplineMeshComponentDescriptor),
	alignof(FSoftSplineMeshComponentDescriptor),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoftSplineMeshComponentDescriptor_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSoftSplineMeshComponentDescriptor_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSoftSplineMeshComponentDescriptor()
{
	if (!Z_Registration_Info_UScriptStruct_SoftSplineMeshComponentDescriptor.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SoftSplineMeshComponentDescriptor.InnerSingleton, Z_Construct_UScriptStruct_FSoftSplineMeshComponentDescriptor_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SoftSplineMeshComponentDescriptor.InnerSingleton;
}
// End ScriptStruct FSoftSplineMeshComponentDescriptor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SplineMeshComponentDescriptor_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSplineMeshComponentDescriptorBase::StaticStruct, Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase_Statics::NewStructOps, TEXT("SplineMeshComponentDescriptorBase"), &Z_Registration_Info_UScriptStruct_SplineMeshComponentDescriptorBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSplineMeshComponentDescriptorBase), 1507188209U) },
		{ FSplineMeshComponentDescriptor::StaticStruct, Z_Construct_UScriptStruct_FSplineMeshComponentDescriptor_Statics::NewStructOps, TEXT("SplineMeshComponentDescriptor"), &Z_Registration_Info_UScriptStruct_SplineMeshComponentDescriptor, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSplineMeshComponentDescriptor), 331892919U) },
		{ FSoftSplineMeshComponentDescriptor::StaticStruct, Z_Construct_UScriptStruct_FSoftSplineMeshComponentDescriptor_Statics::NewStructOps, TEXT("SoftSplineMeshComponentDescriptor"), &Z_Registration_Info_UScriptStruct_SoftSplineMeshComponentDescriptor, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSoftSplineMeshComponentDescriptor), 1590689601U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SplineMeshComponentDescriptor_h_3533131679(TEXT("/Script/Engine"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SplineMeshComponentDescriptor_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SplineMeshComponentDescriptor_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
