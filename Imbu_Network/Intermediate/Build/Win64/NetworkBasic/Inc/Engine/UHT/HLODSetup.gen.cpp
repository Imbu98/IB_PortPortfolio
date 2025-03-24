// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/HLOD/HLODSetup.h"
#include "Runtime/Engine/Public/MeshMerge/MeshApproximationSettings.h"
#include "Runtime/Engine/Public/MeshMerge/MeshMergingSettings.h"
#include "Runtime/Engine/Public/MeshMerge/MeshProxySettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHLODSetup() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_UHierarchicalLODSetup();
ENGINE_API UClass* Z_Construct_UClass_UHierarchicalLODSetup_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EHierarchicalSimplificationMethod();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHierarchicalSimplification();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMeshApproximationSettings();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMeshMergingSettings();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMeshProxySettings();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Enum EHierarchicalSimplificationMethod
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHierarchicalSimplificationMethod;
static UEnum* EHierarchicalSimplificationMethod_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EHierarchicalSimplificationMethod.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EHierarchicalSimplificationMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EHierarchicalSimplificationMethod, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EHierarchicalSimplificationMethod"));
	}
	return Z_Registration_Info_UEnum_EHierarchicalSimplificationMethod.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<EHierarchicalSimplificationMethod>()
{
	return EHierarchicalSimplificationMethod_StaticEnum();
}
struct Z_Construct_UEnum_Engine_EHierarchicalSimplificationMethod_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Approximate.Name", "EHierarchicalSimplificationMethod::Approximate" },
		{ "Merge.Name", "EHierarchicalSimplificationMethod::Merge" },
		{ "ModuleRelativePath", "Public/HLOD/HLODSetup.h" },
		{ "None.hidden", "" },
		{ "None.Name", "EHierarchicalSimplificationMethod::None" },
		{ "Simplify.Name", "EHierarchicalSimplificationMethod::Simplify" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EHierarchicalSimplificationMethod::None", (int64)EHierarchicalSimplificationMethod::None },
		{ "EHierarchicalSimplificationMethod::Merge", (int64)EHierarchicalSimplificationMethod::Merge },
		{ "EHierarchicalSimplificationMethod::Simplify", (int64)EHierarchicalSimplificationMethod::Simplify },
		{ "EHierarchicalSimplificationMethod::Approximate", (int64)EHierarchicalSimplificationMethod::Approximate },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EHierarchicalSimplificationMethod_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"EHierarchicalSimplificationMethod",
	"EHierarchicalSimplificationMethod",
	Z_Construct_UEnum_Engine_EHierarchicalSimplificationMethod_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EHierarchicalSimplificationMethod_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EHierarchicalSimplificationMethod_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_EHierarchicalSimplificationMethod_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_EHierarchicalSimplificationMethod()
{
	if (!Z_Registration_Info_UEnum_EHierarchicalSimplificationMethod.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHierarchicalSimplificationMethod.InnerSingleton, Z_Construct_UEnum_Engine_EHierarchicalSimplificationMethod_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EHierarchicalSimplificationMethod.InnerSingleton;
}
// End Enum EHierarchicalSimplificationMethod

// Begin ScriptStruct FHierarchicalSimplification
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HierarchicalSimplification;
class UScriptStruct* FHierarchicalSimplification::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HierarchicalSimplification.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HierarchicalSimplification.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHierarchicalSimplification, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("HierarchicalSimplification"));
	}
	return Z_Registration_Info_UScriptStruct_HierarchicalSimplification.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FHierarchicalSimplification>()
{
	return FHierarchicalSimplification::StaticStruct();
}
struct Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HLOD/HLODSetup.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransitionScreenSize_MetaData[] = {
		{ "Category", "FHierarchicalSimplification" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.000001" },
		{ "Comment", "/** The screen radius an mesh object should reach before swapping to the LOD actor, once one of parent displays, it won't draw any of children. */" },
		{ "ModuleRelativePath", "Public/HLOD/HLODSetup.h" },
		{ "ToolTip", "The screen radius an mesh object should reach before swapping to the LOD actor, once one of parent displays, it won't draw any of children." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.00001" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverrideDrawDistance_MetaData[] = {
		{ "Category", "FHierarchicalSimplification" },
		{ "ClampMin", "1.0" },
		{ "editcondition", "bUseOverrideDrawDistance" },
		{ "ModuleRelativePath", "Public/HLOD/HLODSetup.h" },
		{ "UIMax", "50000.0" },
		{ "UIMin", "1.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseOverrideDrawDistance_MetaData[] = {
		{ "Category", "FHierarchicalSimplification" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/HLOD/HLODSetup.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllowSpecificExclusion_MetaData[] = {
		{ "Category", "FHierarchicalSimplification" },
		{ "ModuleRelativePath", "Public/HLOD/HLODSetup.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOnlyGenerateClustersForVolumes_MetaData[] = {
		{ "Category", "FHierarchicalSimplification" },
		{ "Comment", "/** Only generate clusters for HLOD volumes */" },
		{ "DisplayAfter", "MinNumberOfActorsToBuild" },
		{ "editcondition", "!bReusePreviousLevelClusters" },
		{ "ModuleRelativePath", "Public/HLOD/HLODSetup.h" },
		{ "ToolTip", "Only generate clusters for HLOD volumes" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bReusePreviousLevelClusters_MetaData[] = {
		{ "Category", "FHierarchicalSimplification" },
		{ "Comment", "/** Will reuse the clusters generated for the previous (lower) HLOD level */" },
		{ "DisplayAfter", "bOnlyGenerateClustersForVolumes" },
		{ "ModuleRelativePath", "Public/HLOD/HLODSetup.h" },
		{ "ToolTip", "Will reuse the clusters generated for the previous (lower) HLOD level" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SimplificationMethod_MetaData[] = {
		{ "Category", "FHierarchicalSimplification" },
		{ "ModuleRelativePath", "Public/HLOD/HLODSetup.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProxySetting_MetaData[] = {
		{ "Category", "FHierarchicalSimplification" },
		{ "Comment", "/** Simplification settings, used if SimplificationMethod is Simplify */" },
		{ "ModuleRelativePath", "Public/HLOD/HLODSetup.h" },
		{ "ToolTip", "Simplification settings, used if SimplificationMethod is Simplify" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MergeSetting_MetaData[] = {
		{ "Category", "FHierarchicalSimplification" },
		{ "Comment", "/** Merge settings, used if SimplificationMethod is Merge */" },
		{ "ModuleRelativePath", "Public/HLOD/HLODSetup.h" },
		{ "ToolTip", "Merge settings, used if SimplificationMethod is Merge" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ApproximateSettings_MetaData[] = {
		{ "Category", "FHierarchicalSimplification" },
		{ "Comment", "/** Approximate settings, used if SimplificationMethod is Approximate */" },
		{ "ModuleRelativePath", "Public/HLOD/HLODSetup.h" },
		{ "ToolTip", "Approximate settings, used if SimplificationMethod is Approximate" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DesiredBoundRadius_MetaData[] = {
		{ "Category", "FHierarchicalSimplification" },
		{ "ClampMin", "10.000000" },
		{ "Comment", "/** Desired Bounding Radius for clustering - this is not guaranteed but used to calculate filling factor for auto clustering */" },
		{ "editcondition", "!bReusePreviousLevelClusters" },
		{ "ModuleRelativePath", "Public/HLOD/HLODSetup.h" },
		{ "ToolTip", "Desired Bounding Radius for clustering - this is not guaranteed but used to calculate filling factor for auto clustering" },
		{ "UIMin", "10.000000" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DesiredFillingPercentage_MetaData[] = {
		{ "Category", "FHierarchicalSimplification" },
		{ "ClampMax", "100" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Desired Filling Percentage for clustering - this is not guaranteed but used to calculate filling factor  for auto clustering */" },
		{ "editcondition", "!bReusePreviousLevelClusters" },
		{ "ModuleRelativePath", "Public/HLOD/HLODSetup.h" },
		{ "ToolTip", "Desired Filling Percentage for clustering - this is not guaranteed but used to calculate filling factor  for auto clustering" },
		{ "UIMax", "100" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinNumberOfActorsToBuild_MetaData[] = {
		{ "Category", "FHierarchicalSimplification" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Min number of actors to build LODActor */" },
		{ "editcondition", "!bReusePreviousLevelClusters" },
		{ "ModuleRelativePath", "Public/HLOD/HLODSetup.h" },
		{ "ToolTip", "Min number of actors to build LODActor" },
		{ "UIMin", "1" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSimplifyMesh_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Public/HLOD/HLODSetup.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TransitionScreenSize;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OverrideDrawDistance;
	static void NewProp_bUseOverrideDrawDistance_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseOverrideDrawDistance;
	static void NewProp_bAllowSpecificExclusion_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowSpecificExclusion;
	static void NewProp_bOnlyGenerateClustersForVolumes_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOnlyGenerateClustersForVolumes;
	static void NewProp_bReusePreviousLevelClusters_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReusePreviousLevelClusters;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SimplificationMethod_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SimplificationMethod;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ProxySetting;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MergeSetting;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ApproximateSettings;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DesiredBoundRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DesiredFillingPercentage;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MinNumberOfActorsToBuild;
#if WITH_EDITORONLY_DATA
	static void NewProp_bSimplifyMesh_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSimplifyMesh;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHierarchicalSimplification>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::NewProp_TransitionScreenSize = { "TransitionScreenSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHierarchicalSimplification, TransitionScreenSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransitionScreenSize_MetaData), NewProp_TransitionScreenSize_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::NewProp_OverrideDrawDistance = { "OverrideDrawDistance", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHierarchicalSimplification, OverrideDrawDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverrideDrawDistance_MetaData), NewProp_OverrideDrawDistance_MetaData) };
void Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::NewProp_bUseOverrideDrawDistance_SetBit(void* Obj)
{
	((FHierarchicalSimplification*)Obj)->bUseOverrideDrawDistance = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::NewProp_bUseOverrideDrawDistance = { "bUseOverrideDrawDistance", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FHierarchicalSimplification), &Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::NewProp_bUseOverrideDrawDistance_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseOverrideDrawDistance_MetaData), NewProp_bUseOverrideDrawDistance_MetaData) };
void Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::NewProp_bAllowSpecificExclusion_SetBit(void* Obj)
{
	((FHierarchicalSimplification*)Obj)->bAllowSpecificExclusion = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::NewProp_bAllowSpecificExclusion = { "bAllowSpecificExclusion", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FHierarchicalSimplification), &Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::NewProp_bAllowSpecificExclusion_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllowSpecificExclusion_MetaData), NewProp_bAllowSpecificExclusion_MetaData) };
void Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::NewProp_bOnlyGenerateClustersForVolumes_SetBit(void* Obj)
{
	((FHierarchicalSimplification*)Obj)->bOnlyGenerateClustersForVolumes = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::NewProp_bOnlyGenerateClustersForVolumes = { "bOnlyGenerateClustersForVolumes", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FHierarchicalSimplification), &Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::NewProp_bOnlyGenerateClustersForVolumes_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOnlyGenerateClustersForVolumes_MetaData), NewProp_bOnlyGenerateClustersForVolumes_MetaData) };
void Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::NewProp_bReusePreviousLevelClusters_SetBit(void* Obj)
{
	((FHierarchicalSimplification*)Obj)->bReusePreviousLevelClusters = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::NewProp_bReusePreviousLevelClusters = { "bReusePreviousLevelClusters", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FHierarchicalSimplification), &Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::NewProp_bReusePreviousLevelClusters_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bReusePreviousLevelClusters_MetaData), NewProp_bReusePreviousLevelClusters_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::NewProp_SimplificationMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::NewProp_SimplificationMethod = { "SimplificationMethod", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHierarchicalSimplification, SimplificationMethod), Z_Construct_UEnum_Engine_EHierarchicalSimplificationMethod, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SimplificationMethod_MetaData), NewProp_SimplificationMethod_MetaData) }; // 1093127541
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::NewProp_ProxySetting = { "ProxySetting", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHierarchicalSimplification, ProxySetting), Z_Construct_UScriptStruct_FMeshProxySettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProxySetting_MetaData), NewProp_ProxySetting_MetaData) }; // 2921668227
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::NewProp_MergeSetting = { "MergeSetting", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHierarchicalSimplification, MergeSetting), Z_Construct_UScriptStruct_FMeshMergingSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MergeSetting_MetaData), NewProp_MergeSetting_MetaData) }; // 779269260
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::NewProp_ApproximateSettings = { "ApproximateSettings", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHierarchicalSimplification, ApproximateSettings), Z_Construct_UScriptStruct_FMeshApproximationSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ApproximateSettings_MetaData), NewProp_ApproximateSettings_MetaData) }; // 785736594
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::NewProp_DesiredBoundRadius = { "DesiredBoundRadius", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHierarchicalSimplification, DesiredBoundRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DesiredBoundRadius_MetaData), NewProp_DesiredBoundRadius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::NewProp_DesiredFillingPercentage = { "DesiredFillingPercentage", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHierarchicalSimplification, DesiredFillingPercentage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DesiredFillingPercentage_MetaData), NewProp_DesiredFillingPercentage_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::NewProp_MinNumberOfActorsToBuild = { "MinNumberOfActorsToBuild", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHierarchicalSimplification, MinNumberOfActorsToBuild), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinNumberOfActorsToBuild_MetaData), NewProp_MinNumberOfActorsToBuild_MetaData) };
#if WITH_EDITORONLY_DATA
void Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::NewProp_bSimplifyMesh_SetBit(void* Obj)
{
	((FHierarchicalSimplification*)Obj)->bSimplifyMesh_DEPRECATED = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::NewProp_bSimplifyMesh = { "bSimplifyMesh", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FHierarchicalSimplification), &Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::NewProp_bSimplifyMesh_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSimplifyMesh_MetaData), NewProp_bSimplifyMesh_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::NewProp_TransitionScreenSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::NewProp_OverrideDrawDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::NewProp_bUseOverrideDrawDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::NewProp_bAllowSpecificExclusion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::NewProp_bOnlyGenerateClustersForVolumes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::NewProp_bReusePreviousLevelClusters,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::NewProp_SimplificationMethod_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::NewProp_SimplificationMethod,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::NewProp_ProxySetting,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::NewProp_MergeSetting,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::NewProp_ApproximateSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::NewProp_DesiredBoundRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::NewProp_DesiredFillingPercentage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::NewProp_MinNumberOfActorsToBuild,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::NewProp_bSimplifyMesh,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"HierarchicalSimplification",
	Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::PropPointers),
	sizeof(FHierarchicalSimplification),
	alignof(FHierarchicalSimplification),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FHierarchicalSimplification()
{
	if (!Z_Registration_Info_UScriptStruct_HierarchicalSimplification.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HierarchicalSimplification.InnerSingleton, Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_HierarchicalSimplification.InnerSingleton;
}
// End ScriptStruct FHierarchicalSimplification

// Begin Class UHierarchicalLODSetup
void UHierarchicalLODSetup::StaticRegisterNativesUHierarchicalLODSetup()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHierarchicalLODSetup);
UClass* Z_Construct_UClass_UHierarchicalLODSetup_NoRegister()
{
	return UHierarchicalLODSetup::StaticClass();
}
struct Z_Construct_UClass_UHierarchicalLODSetup_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "HLOD/HLODSetup.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/HLOD/HLODSetup.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HierarchicalLODSetup_MetaData[] = {
		{ "Category", "HLODSystem" },
		{ "Comment", "/** Hierarchical LOD Setup */" },
		{ "ModuleRelativePath", "Public/HLOD/HLODSetup.h" },
		{ "ToolTip", "Hierarchical LOD Setup" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverrideBaseMaterial_MetaData[] = {
		{ "Category", "HLODSystem" },
		{ "ModuleRelativePath", "Public/HLOD/HLODSetup.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_HierarchicalLODSetup_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_HierarchicalLODSetup;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_OverrideBaseMaterial;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHierarchicalLODSetup>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHierarchicalLODSetup_Statics::NewProp_HierarchicalLODSetup_Inner = { "HierarchicalLODSetup", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FHierarchicalSimplification, METADATA_PARAMS(0, nullptr) }; // 2392151881
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHierarchicalLODSetup_Statics::NewProp_HierarchicalLODSetup = { "HierarchicalLODSetup", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHierarchicalLODSetup, HierarchicalLODSetup), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HierarchicalLODSetup_MetaData), NewProp_HierarchicalLODSetup_MetaData) }; // 2392151881
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UHierarchicalLODSetup_Statics::NewProp_OverrideBaseMaterial = { "OverrideBaseMaterial", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHierarchicalLODSetup, OverrideBaseMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverrideBaseMaterial_MetaData), NewProp_OverrideBaseMaterial_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHierarchicalLODSetup_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHierarchicalLODSetup_Statics::NewProp_HierarchicalLODSetup_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHierarchicalLODSetup_Statics::NewProp_HierarchicalLODSetup,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHierarchicalLODSetup_Statics::NewProp_OverrideBaseMaterial,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHierarchicalLODSetup_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UHierarchicalLODSetup_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHierarchicalLODSetup_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHierarchicalLODSetup_Statics::ClassParams = {
	&UHierarchicalLODSetup::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UHierarchicalLODSetup_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UHierarchicalLODSetup_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHierarchicalLODSetup_Statics::Class_MetaDataParams), Z_Construct_UClass_UHierarchicalLODSetup_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHierarchicalLODSetup()
{
	if (!Z_Registration_Info_UClass_UHierarchicalLODSetup.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHierarchicalLODSetup.OuterSingleton, Z_Construct_UClass_UHierarchicalLODSetup_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHierarchicalLODSetup.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UHierarchicalLODSetup>()
{
	return UHierarchicalLODSetup::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHierarchicalLODSetup);
UHierarchicalLODSetup::~UHierarchicalLODSetup() {}
// End Class UHierarchicalLODSetup

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_HLOD_HLODSetup_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EHierarchicalSimplificationMethod_StaticEnum, TEXT("EHierarchicalSimplificationMethod"), &Z_Registration_Info_UEnum_EHierarchicalSimplificationMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1093127541U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FHierarchicalSimplification::StaticStruct, Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::NewStructOps, TEXT("HierarchicalSimplification"), &Z_Registration_Info_UScriptStruct_HierarchicalSimplification, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHierarchicalSimplification), 2392151881U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHierarchicalLODSetup, UHierarchicalLODSetup::StaticClass, TEXT("UHierarchicalLODSetup"), &Z_Registration_Info_UClass_UHierarchicalLODSetup, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHierarchicalLODSetup), 192647733U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_HLOD_HLODSetup_h_2503079614(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_HLOD_HLODSetup_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_HLOD_HLODSetup_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_HLOD_HLODSetup_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_HLOD_HLODSetup_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_HLOD_HLODSetup_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_HLOD_HLODSetup_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
