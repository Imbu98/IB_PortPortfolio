// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Pipelines/Public/InterchangeGenericMeshPipeline.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterchangeGenericMeshPipeline() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UPhysicsAsset_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangePipelineBase();
INTERCHANGEFACTORYNODES_API UEnum* Z_Construct_UEnum_InterchangeFactoryNodes_EInterchangeSkeletalMeshContentType();
INTERCHANGENODES_API UEnum* Z_Construct_UEnum_InterchangeNodes_EInterchangeMeshCollision();
INTERCHANGEPIPELINES_API UClass* Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties_NoRegister();
INTERCHANGEPIPELINES_API UClass* Z_Construct_UClass_UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties_NoRegister();
INTERCHANGEPIPELINES_API UClass* Z_Construct_UClass_UInterchangeGenericMeshPipeline();
INTERCHANGEPIPELINES_API UClass* Z_Construct_UClass_UInterchangeGenericMeshPipeline_NoRegister();
UPackage* Z_Construct_UPackage__Script_InterchangePipelines();
// End Cross Module References

// Begin Class UInterchangeGenericMeshPipeline Function GetCombineSkeletalMeshes
struct Z_Construct_UFunction_UInterchangeGenericMeshPipeline_GetCombineSkeletalMeshes_Statics
{
	struct InterchangeGenericMeshPipeline_eventGetCombineSkeletalMeshes_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "bCombineSkeletalMeshes is no longer used" },
		{ "ModuleRelativePath", "Public/InterchangeGenericMeshPipeline.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UInterchangeGenericMeshPipeline_GetCombineSkeletalMeshes_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeGenericMeshPipeline_eventGetCombineSkeletalMeshes_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeGenericMeshPipeline_GetCombineSkeletalMeshes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeGenericMeshPipeline_eventGetCombineSkeletalMeshes_Parms), &Z_Construct_UFunction_UInterchangeGenericMeshPipeline_GetCombineSkeletalMeshes_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeGenericMeshPipeline_GetCombineSkeletalMeshes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeGenericMeshPipeline_GetCombineSkeletalMeshes_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeGenericMeshPipeline_GetCombineSkeletalMeshes_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeGenericMeshPipeline_GetCombineSkeletalMeshes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeGenericMeshPipeline, nullptr, "GetCombineSkeletalMeshes", nullptr, nullptr, Z_Construct_UFunction_UInterchangeGenericMeshPipeline_GetCombineSkeletalMeshes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeGenericMeshPipeline_GetCombineSkeletalMeshes_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeGenericMeshPipeline_GetCombineSkeletalMeshes_Statics::InterchangeGenericMeshPipeline_eventGetCombineSkeletalMeshes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeGenericMeshPipeline_GetCombineSkeletalMeshes_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeGenericMeshPipeline_GetCombineSkeletalMeshes_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeGenericMeshPipeline_GetCombineSkeletalMeshes_Statics::InterchangeGenericMeshPipeline_eventGetCombineSkeletalMeshes_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeGenericMeshPipeline_GetCombineSkeletalMeshes()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeGenericMeshPipeline_GetCombineSkeletalMeshes_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeGenericMeshPipeline::execGetCombineSkeletalMeshes)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCombineSkeletalMeshes();
	P_NATIVE_END;
}
// End Class UInterchangeGenericMeshPipeline Function GetCombineSkeletalMeshes

// Begin Class UInterchangeGenericMeshPipeline Function SetCombineSkeletalMeshes
struct Z_Construct_UFunction_UInterchangeGenericMeshPipeline_SetCombineSkeletalMeshes_Statics
{
	struct InterchangeGenericMeshPipeline_eventSetCombineSkeletalMeshes_Parms
	{
		bool InbCombineSkeletalMeshes;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "bCombineSkeletalMeshes is no longer used" },
		{ "ModuleRelativePath", "Public/InterchangeGenericMeshPipeline.h" },
	};
#endif // WITH_METADATA
	static void NewProp_InbCombineSkeletalMeshes_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_InbCombineSkeletalMeshes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UInterchangeGenericMeshPipeline_SetCombineSkeletalMeshes_Statics::NewProp_InbCombineSkeletalMeshes_SetBit(void* Obj)
{
	((InterchangeGenericMeshPipeline_eventSetCombineSkeletalMeshes_Parms*)Obj)->InbCombineSkeletalMeshes = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeGenericMeshPipeline_SetCombineSkeletalMeshes_Statics::NewProp_InbCombineSkeletalMeshes = { "InbCombineSkeletalMeshes", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeGenericMeshPipeline_eventSetCombineSkeletalMeshes_Parms), &Z_Construct_UFunction_UInterchangeGenericMeshPipeline_SetCombineSkeletalMeshes_Statics::NewProp_InbCombineSkeletalMeshes_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeGenericMeshPipeline_SetCombineSkeletalMeshes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeGenericMeshPipeline_SetCombineSkeletalMeshes_Statics::NewProp_InbCombineSkeletalMeshes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeGenericMeshPipeline_SetCombineSkeletalMeshes_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeGenericMeshPipeline_SetCombineSkeletalMeshes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeGenericMeshPipeline, nullptr, "SetCombineSkeletalMeshes", nullptr, nullptr, Z_Construct_UFunction_UInterchangeGenericMeshPipeline_SetCombineSkeletalMeshes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeGenericMeshPipeline_SetCombineSkeletalMeshes_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeGenericMeshPipeline_SetCombineSkeletalMeshes_Statics::InterchangeGenericMeshPipeline_eventSetCombineSkeletalMeshes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeGenericMeshPipeline_SetCombineSkeletalMeshes_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeGenericMeshPipeline_SetCombineSkeletalMeshes_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeGenericMeshPipeline_SetCombineSkeletalMeshes_Statics::InterchangeGenericMeshPipeline_eventSetCombineSkeletalMeshes_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeGenericMeshPipeline_SetCombineSkeletalMeshes()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeGenericMeshPipeline_SetCombineSkeletalMeshes_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeGenericMeshPipeline::execSetCombineSkeletalMeshes)
{
	P_GET_UBOOL(Z_Param_InbCombineSkeletalMeshes);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCombineSkeletalMeshes(Z_Param_InbCombineSkeletalMeshes);
	P_NATIVE_END;
}
// End Class UInterchangeGenericMeshPipeline Function SetCombineSkeletalMeshes

// Begin Class UInterchangeGenericMeshPipeline
void UInterchangeGenericMeshPipeline::StaticRegisterNativesUInterchangeGenericMeshPipeline()
{
	UClass* Class = UInterchangeGenericMeshPipeline::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetCombineSkeletalMeshes", &UInterchangeGenericMeshPipeline::execGetCombineSkeletalMeshes },
		{ "SetCombineSkeletalMeshes", &UInterchangeGenericMeshPipeline::execSetCombineSkeletalMeshes },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeGenericMeshPipeline);
UClass* Z_Construct_UClass_UInterchangeGenericMeshPipeline_NoRegister()
{
	return UInterchangeGenericMeshPipeline::StaticClass();
}
struct Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/* Hide drop down will make sure the class is not showing in the class picker */" },
		{ "IncludePath", "InterchangeGenericMeshPipeline.h" },
		{ "ModuleRelativePath", "Public/InterchangeGenericMeshPipeline.h" },
		{ "ToolTip", "Hide drop down will make sure the class is not showing in the class picker" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CommonMeshesProperties_MetaData[] = {
		{ "Comment", "//Common Meshes Properties Settings Pointer\n" },
		{ "ModuleRelativePath", "Public/InterchangeGenericMeshPipeline.h" },
		{ "ToolTip", "Common Meshes Properties Settings Pointer" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CommonSkeletalMeshesAndAnimationsProperties_MetaData[] = {
		{ "Comment", "//Common SkeletalMeshes And Animations Properties Settings Pointer\n" },
		{ "ModuleRelativePath", "Public/InterchangeGenericMeshPipeline.h" },
		{ "ToolTip", "Common SkeletalMeshes And Animations Properties Settings Pointer" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bImportStaticMeshes_MetaData[] = {
		{ "Category", "Static Meshes" },
		{ "Comment", "/** If enabled, imports all static mesh assets found in the sources. */" },
		{ "ModuleRelativePath", "Public/InterchangeGenericMeshPipeline.h" },
		{ "ToolTip", "If enabled, imports all static mesh assets found in the sources." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCombineStaticMeshes_MetaData[] = {
		{ "Category", "Static Meshes" },
		{ "Comment", "/** If enabled, all translated static mesh nodes will be imported as a single static mesh. */" },
		{ "ModuleRelativePath", "Public/InterchangeGenericMeshPipeline.h" },
		{ "ToolTip", "If enabled, all translated static mesh nodes will be imported as a single static mesh." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LodGroup_MetaData[] = {
		{ "Category", "Static Meshes" },
		{ "Comment", "/** The LOD group that will be assigned to this mesh. */" },
		{ "DisplayName", "LOD Group" },
		{ "ModuleRelativePath", "Public/InterchangeGenericMeshPipeline.h" },
		{ "ReimportRestrict", "true" },
		{ "ToolTip", "The LOD group that will be assigned to this mesh." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoComputeLODScreenSizes_MetaData[] = {
		{ "Category", "Static Meshes" },
		{ "Comment", "/** If enabled, LOD Screen Sizes would be auto-computed. */" },
		{ "ModuleRelativePath", "Public/InterchangeGenericMeshPipeline.h" },
		{ "ReimportRestrict", "true" },
		{ "ToolTip", "If enabled, LOD Screen Sizes would be auto-computed." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LODScreenSizes_MetaData[] = {
		{ "Category", "Static Meshes" },
		{ "Comment", "/** This setting is only used if the Auto Compute LOD Screen Sizes setting is disabled. */" },
		{ "DisplayName", "LOD Screen Sizes" },
		{ "EditCondition", "!bAutoComputeLODScreenSizes" },
		{ "ModuleRelativePath", "Public/InterchangeGenericMeshPipeline.h" },
		{ "ReimportRestrict", "true" },
		{ "ToolTip", "This setting is only used if the Auto Compute LOD Screen Sizes setting is disabled." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bImportCollision_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Use Collision instead." },
		{ "ModuleRelativePath", "Public/InterchangeGenericMeshPipeline.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCollision_MetaData[] = {
		{ "Category", "Static Meshes" },
		{ "Comment", "/** If enabled, custom collision will be imported. If enabled and there is no custom collision, a generic collision will be automatically generated.\n\x09 * If disabled, no collision will be created or imported.\n\x09 */" },
		{ "DisplayName", "Import Collisions" },
		{ "ModuleRelativePath", "Public/InterchangeGenericMeshPipeline.h" },
		{ "SubCategory", "Collision" },
		{ "ToolTip", "If enabled, custom collision will be imported. If enabled and there is no custom collision, a generic collision will be automatically generated.\nIf disabled, no collision will be created or imported." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bImportCollisionAccordingToMeshName_MetaData[] = {
		{ "Category", "Static Meshes" },
		{ "Comment", "/**\n\x09 * If enabled, meshes with certain prefixes will be imported as collision primitives for the mesh with the corresponding unprefixed name.\n\x09 * \n\x09 * Supported prefixes are:\n\x09 * UBX_ Box collision\n\x09 * UCP_ Capsule collision\n\x09 * USP_ Sphere collision\n\x09 * UCX_ Convex collision\n\x09 */" },
		{ "DisplayName", "Import Collisions According To Mesh Name" },
		{ "editcondition", "bCollision == true" },
		{ "ModuleRelativePath", "Public/InterchangeGenericMeshPipeline.h" },
		{ "SubCategory", "Collision" },
		{ "ToolTip", "If enabled, meshes with certain prefixes will be imported as collision primitives for the mesh with the corresponding unprefixed name.\n\nSupported prefixes are:\nUBX_ Box collision\nUCP_ Capsule collision\nUSP_ Sphere collision\nUCX_ Convex collision" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOneConvexHullPerUCX_MetaData[] = {
		{ "Category", "Static Meshes" },
		{ "Comment", "/** If enabled, each UCX collision mesh will be imported as a single convex hull. If disabled, a UCX mesh will be decomposed into its separate pieces and a convex hull generated for each. */" },
		{ "editcondition", "bCollision == true && bImportCollisionAccordingToMeshName" },
		{ "ModuleRelativePath", "Public/InterchangeGenericMeshPipeline.h" },
		{ "SubCategory", "Collision" },
		{ "ToolTip", "If enabled, each UCX collision mesh will be imported as a single convex hull. If disabled, a UCX mesh will be decomposed into its separate pieces and a convex hull generated for each." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Collision_MetaData[] = {
		{ "Category", "Static Meshes" },
		{ "Comment", "/** Type used to generate a collision when no custom collisions are present in the file. */" },
		{ "DisplayName", "Fallback Collision Type" },
		{ "editcondition", "bCollision == true" },
		{ "ModuleRelativePath", "Public/InterchangeGenericMeshPipeline.h" },
		{ "ScriptName", "FallbackCollisionType" },
		{ "SubCategory", "Collision" },
		{ "ToolTip", "Type used to generate a collision when no custom collisions are present in the file." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bBuildNanite_MetaData[] = {
		{ "Category", "Static Meshes" },
		{ "Comment", "/** If enabled, imported meshes will be rendered by Nanite at runtime. Make sure your meshes and materials meet the requirements for Nanite. */" },
		{ "ModuleRelativePath", "Public/InterchangeGenericMeshPipeline.h" },
		{ "SubCategory", "Build" },
		{ "ToolTip", "If enabled, imported meshes will be rendered by Nanite at runtime. Make sure your meshes and materials meet the requirements for Nanite." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bBuildReversedIndexBuffer_MetaData[] = {
		{ "Category", "Static Meshes" },
		{ "Comment", "/** If enabled, builds a reversed index buffer for each static mesh. */" },
		{ "ModuleRelativePath", "Public/InterchangeGenericMeshPipeline.h" },
		{ "SubCategory", "Build" },
		{ "ToolTip", "If enabled, builds a reversed index buffer for each static mesh." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bGenerateLightmapUVs_MetaData[] = {
		{ "Category", "Static Meshes" },
		{ "Comment", "/** If enabled, generates lightmap UVs for each static mesh. */" },
		{ "ModuleRelativePath", "Public/InterchangeGenericMeshPipeline.h" },
		{ "SubCategory", "Build" },
		{ "ToolTip", "If enabled, generates lightmap UVs for each static mesh." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bGenerateDistanceFieldAsIfTwoSided_MetaData[] = {
		{ "Category", "Static Meshes" },
		{ "Comment", "/** \n\x09 * Determines whether to generate the distance field treating every triangle hit as a front face.  \n\x09 * When enabled, prevents the distance field from being discarded due to the mesh being open, but also lowers distance field ambient occlusion quality.\n\x09 */" },
		{ "DisplayName", "Two-Sided Distance Field Generation" },
		{ "ModuleRelativePath", "Public/InterchangeGenericMeshPipeline.h" },
		{ "SubCategory", "Build" },
		{ "ToolTip", "Determines whether to generate the distance field treating every triangle hit as a front face.\nWhen enabled, prevents the distance field from being discarded due to the mesh being open, but also lowers distance field ambient occlusion quality." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSupportFaceRemap_MetaData[] = {
		{ "Category", "Static Meshes" },
		{ "Comment", "/* If enabled, imported static meshes are set up for use with physical material masks. */" },
		{ "DisplayName", "Enable Physical Material Mask" },
		{ "ModuleRelativePath", "Public/InterchangeGenericMeshPipeline.h" },
		{ "SubCategory", "Build" },
		{ "ToolTip", "If enabled, imported static meshes are set up for use with physical material masks." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinLightmapResolution_MetaData[] = {
		{ "Category", "Static Meshes" },
		{ "Comment", "/* When generating lightmaps, determines the amount of padding used to pack UVs. Set this value to the lowest-resolution lightmap you expect to use with the imported meshes. */" },
		{ "ModuleRelativePath", "Public/InterchangeGenericMeshPipeline.h" },
		{ "SubCategory", "Build" },
		{ "ToolTip", "When generating lightmaps, determines the amount of padding used to pack UVs. Set this value to the lowest-resolution lightmap you expect to use with the imported meshes." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SrcLightmapIndex_MetaData[] = {
		{ "Category", "Static Meshes" },
		{ "Comment", "/* Specifies the index of the UV channel that will be used as the source when generating lightmaps. */" },
		{ "DisplayName", "Source Lightmap Index" },
		{ "ModuleRelativePath", "Public/InterchangeGenericMeshPipeline.h" },
		{ "SubCategory", "Build" },
		{ "ToolTip", "Specifies the index of the UV channel that will be used as the source when generating lightmaps." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DstLightmapIndex_MetaData[] = {
		{ "Category", "Static Meshes" },
		{ "Comment", "/* Specifies the index of the UV channel that will store generated lightmap UVs. */" },
		{ "DisplayName", "Destination Lightmap Index" },
		{ "ModuleRelativePath", "Public/InterchangeGenericMeshPipeline.h" },
		{ "SubCategory", "Build" },
		{ "ToolTip", "Specifies the index of the UV channel that will store generated lightmap UVs." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BuildScale3D_MetaData[] = {
		{ "Category", "Static Meshes" },
		{ "Comment", "/** The local scale applied when building the mesh. */" },
		{ "DisplayName", "Build Scale" },
		{ "ModuleRelativePath", "Public/InterchangeGenericMeshPipeline.h" },
		{ "SubCategory", "Build" },
		{ "ToolTip", "The local scale applied when building the mesh." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DistanceFieldResolutionScale_MetaData[] = {
		{ "Category", "Static Meshes" },
		{ "Comment", "/** \n\x09 * Scale to apply to the mesh when allocating the distance field volume texture.\n\x09 * The default scale is 1, which assumes that the mesh will be placed unscaled in the world.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeGenericMeshPipeline.h" },
		{ "SubCategory", "Build" },
		{ "ToolTip", "Scale to apply to the mesh when allocating the distance field volume texture.\nThe default scale is 1, which assumes that the mesh will be placed unscaled in the world." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DistanceFieldReplacementMesh_MetaData[] = {
		{ "Category", "Static Meshes" },
		{ "Comment", "/**\n\x09 * If set, replaces the distance field for all imported meshes with the distance field of the specified Static Mesh.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeGenericMeshPipeline.h" },
		{ "SubCategory", "Build" },
		{ "ToolTip", "If set, replaces the distance field for all imported meshes with the distance field of the specified Static Mesh." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxLumenMeshCards_MetaData[] = {
		{ "Category", "Static Meshes" },
		{ "Comment", "/** \n\x09 * The maximum number of Lumen mesh cards to generate for this mesh.\n\x09 * More cards means that the surface will have better coverage, but will result in increased runtime overhead.\n\x09 * Set this to 0 to disable mesh card generation for this mesh.\n\x09 * The default is 12.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeGenericMeshPipeline.h" },
		{ "SubCategory", "Build" },
		{ "ToolTip", "The maximum number of Lumen mesh cards to generate for this mesh.\nMore cards means that the surface will have better coverage, but will result in increased runtime overhead.\nSet this to 0 to disable mesh card generation for this mesh.\nThe default is 12." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bImportSkeletalMeshes_MetaData[] = {
		{ "Category", "Skeletal Meshes" },
		{ "Comment", "/** If enabled, imports all skeletal mesh assets found in the sources. */" },
		{ "ModuleRelativePath", "Public/InterchangeGenericMeshPipeline.h" },
		{ "ToolTip", "If enabled, imports all skeletal mesh assets found in the sources." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalMeshImportContentType_MetaData[] = {
		{ "Category", "Skeletal Meshes" },
		{ "Comment", "/** Determines what types of information are imported for skeletal meshes. */" },
		{ "DisplayName", "Import Content Type" },
		{ "ModuleRelativePath", "Public/InterchangeGenericMeshPipeline.h" },
		{ "ToolTip", "Determines what types of information are imported for skeletal meshes." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastSkeletalMeshImportContentType_MetaData[] = {
		{ "Comment", "/** The value of the content type during the last import. This cannot be edited and is set only on successful import or reimport. */" },
		{ "ModuleRelativePath", "Public/InterchangeGenericMeshPipeline.h" },
		{ "ToolTip", "The value of the content type during the last import. This cannot be edited and is set only on successful import or reimport." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCombineSkeletalMeshes_MetaData[] = {
		{ "BlueprintGetter", "GetCombineSkeletalMeshes" },
		{ "BlueprintSetter", "SetCombineSkeletalMeshes" },
		{ "Category", "Skeletal Meshes" },
		{ "ModuleRelativePath", "Public/InterchangeGenericMeshPipeline.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bImportMorphTargets_MetaData[] = {
		{ "Category", "Skeletal Meshes" },
		{ "Comment", "/** If enabled, imports all morph target shapes found in the source. */" },
		{ "ModuleRelativePath", "Public/InterchangeGenericMeshPipeline.h" },
		{ "ToolTip", "If enabled, imports all morph target shapes found in the source." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMergeMorphTargetsWithSameName_MetaData[] = {
		{ "Category", "Skeletal Meshes" },
		{ "Comment", "/** If enabled, all morph target shapes with the same name will be merge together. Turn it to false if you want to control those morph with different values. */" },
		{ "EditCondition", "bImportMorphTargets" },
		{ "ModuleRelativePath", "Public/InterchangeGenericMeshPipeline.h" },
		{ "ToolTip", "If enabled, all morph target shapes with the same name will be merge together. Turn it to false if you want to control those morph with different values." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bImportVertexAttributes_MetaData[] = {
		{ "Category", "Skeletal Meshes" },
		{ "ModuleRelativePath", "Public/InterchangeGenericMeshPipeline.h" },
		{ "ToolTip", "If enabled, creates named vertex attributes for secondary vertex color data." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUpdateSkeletonReferencePose_MetaData[] = {
		{ "Category", "Skeletal Meshes" },
		{ "Comment", "/** Enable this option to update the reference pose of the Skeleton (of the mesh). The reference pose of the mesh is always updated.  */" },
		{ "ModuleRelativePath", "Public/InterchangeGenericMeshPipeline.h" },
		{ "ToolTip", "Enable this option to update the reference pose of the Skeleton (of the mesh). The reference pose of the mesh is always updated." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCreatePhysicsAsset_MetaData[] = {
		{ "Category", "Skeletal Meshes" },
		{ "Comment", "/** If enabled, create new PhysicsAsset if one doesn't exist. */" },
		{ "ModuleRelativePath", "Public/InterchangeGenericMeshPipeline.h" },
		{ "ToolTip", "If enabled, create new PhysicsAsset if one doesn't exist." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PhysicsAsset_MetaData[] = {
		{ "Category", "Skeletal Meshes" },
		{ "Comment", "/** If set, use the specified PhysicsAsset. If not set and the Create Physics Asset setting is not enabled, the importer will not generate or set any physics asset. */" },
		{ "editcondition", "!bCreatePhysicsAsset" },
		{ "ModuleRelativePath", "Public/InterchangeGenericMeshPipeline.h" },
		{ "ToolTip", "If set, use the specified PhysicsAsset. If not set and the Create Physics Asset setting is not enabled, the importer will not generate or set any physics asset." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseHighPrecisionSkinWeights_MetaData[] = {
		{ "Category", "Skeletal Meshes" },
		{ "Comment", "/** If enabled, imported skin weights use 16 bits instead of 8 bits. */" },
		{ "ModuleRelativePath", "Public/InterchangeGenericMeshPipeline.h" },
		{ "SubCategory", "Build" },
		{ "ToolTip", "If enabled, imported skin weights use 16 bits instead of 8 bits." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThresholdPosition_MetaData[] = {
		{ "Category", "Skeletal Meshes" },
		{ "Comment", "/** Threshold value that is used to decide whether two vertex positions are equal. */" },
		{ "ModuleRelativePath", "Public/InterchangeGenericMeshPipeline.h" },
		{ "SubCategory", "Build" },
		{ "ToolTip", "Threshold value that is used to decide whether two vertex positions are equal." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThresholdTangentNormal_MetaData[] = {
		{ "Category", "Skeletal Meshes" },
		{ "Comment", "/** Threshold value that is used to decide whether two normals, tangents, or bi-normals are equal. */" },
		{ "ModuleRelativePath", "Public/InterchangeGenericMeshPipeline.h" },
		{ "SubCategory", "Build" },
		{ "ToolTip", "Threshold value that is used to decide whether two normals, tangents, or bi-normals are equal." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThresholdUV_MetaData[] = {
		{ "Category", "Skeletal Meshes" },
		{ "Comment", "/** Threshold value that is used to decide whether two UVs are equal. */" },
		{ "ModuleRelativePath", "Public/InterchangeGenericMeshPipeline.h" },
		{ "SubCategory", "Build" },
		{ "ToolTip", "Threshold value that is used to decide whether two UVs are equal." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MorphThresholdPosition_MetaData[] = {
		{ "Category", "Skeletal Meshes" },
		{ "Comment", "/** Threshold to compare vertex position equality when computing morph target deltas. */" },
		{ "ModuleRelativePath", "Public/InterchangeGenericMeshPipeline.h" },
		{ "SubCategory", "Build" },
		{ "ToolTip", "Threshold to compare vertex position equality when computing morph target deltas." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoneInfluenceLimit_MetaData[] = {
		{ "Category", "Skeletal Meshes" },
		{ "Comment", "/**\n\x09 * The maximum number of bone influences to allow each vertex in this mesh to use.\n\x09 * If set higher than the limit determined by the project settings, it has no effect.\n\x09 * If set to 0, the value is taken from the DefaultBoneInfluenceLimit project setting.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeGenericMeshPipeline.h" },
		{ "SubCategory", "Build" },
		{ "ToolTip", "The maximum number of bone influences to allow each vertex in this mesh to use.\nIf set higher than the limit determined by the project settings, it has no effect.\nIf set to 0, the value is taken from the DefaultBoneInfluenceLimit project setting." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_CommonMeshesProperties;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_CommonSkeletalMeshesAndAnimationsProperties;
	static void NewProp_bImportStaticMeshes_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bImportStaticMeshes;
	static void NewProp_bCombineStaticMeshes_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCombineStaticMeshes;
	static const UECodeGen_Private::FNamePropertyParams NewProp_LodGroup;
	static void NewProp_bAutoComputeLODScreenSizes_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoComputeLODScreenSizes;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LODScreenSizes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LODScreenSizes;
	static void NewProp_bImportCollision_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bImportCollision;
	static void NewProp_bCollision_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCollision;
	static void NewProp_bImportCollisionAccordingToMeshName_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bImportCollisionAccordingToMeshName;
	static void NewProp_bOneConvexHullPerUCX_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOneConvexHullPerUCX;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Collision_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Collision;
	static void NewProp_bBuildNanite_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bBuildNanite;
	static void NewProp_bBuildReversedIndexBuffer_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bBuildReversedIndexBuffer;
	static void NewProp_bGenerateLightmapUVs_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGenerateLightmapUVs;
	static void NewProp_bGenerateDistanceFieldAsIfTwoSided_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGenerateDistanceFieldAsIfTwoSided;
	static void NewProp_bSupportFaceRemap_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSupportFaceRemap;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MinLightmapResolution;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SrcLightmapIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DstLightmapIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BuildScale3D;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DistanceFieldResolutionScale;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_DistanceFieldReplacementMesh;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxLumenMeshCards;
	static void NewProp_bImportSkeletalMeshes_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bImportSkeletalMeshes;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SkeletalMeshImportContentType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SkeletalMeshImportContentType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LastSkeletalMeshImportContentType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_LastSkeletalMeshImportContentType;
	static void NewProp_bCombineSkeletalMeshes_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCombineSkeletalMeshes;
	static void NewProp_bImportMorphTargets_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bImportMorphTargets;
	static void NewProp_bMergeMorphTargetsWithSameName_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMergeMorphTargetsWithSameName;
	static void NewProp_bImportVertexAttributes_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bImportVertexAttributes;
	static void NewProp_bUpdateSkeletonReferencePose_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdateSkeletonReferencePose;
	static void NewProp_bCreatePhysicsAsset_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCreatePhysicsAsset;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_PhysicsAsset;
	static void NewProp_bUseHighPrecisionSkinWeights_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseHighPrecisionSkinWeights;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ThresholdPosition;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ThresholdTangentNormal;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ThresholdUV;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MorphThresholdPosition;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BoneInfluenceLimit;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInterchangeGenericMeshPipeline_GetCombineSkeletalMeshes, "GetCombineSkeletalMeshes" }, // 3677173757
		{ &Z_Construct_UFunction_UInterchangeGenericMeshPipeline_SetCombineSkeletalMeshes, "SetCombineSkeletalMeshes" }, // 2495004537
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeGenericMeshPipeline>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_CommonMeshesProperties = { "CommonMeshesProperties", nullptr, (EPropertyFlags)0x0014000000002000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInterchangeGenericMeshPipeline, CommonMeshesProperties), Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CommonMeshesProperties_MetaData), NewProp_CommonMeshesProperties_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_CommonSkeletalMeshesAndAnimationsProperties = { "CommonSkeletalMeshesAndAnimationsProperties", nullptr, (EPropertyFlags)0x0014000000002000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInterchangeGenericMeshPipeline, CommonSkeletalMeshesAndAnimationsProperties), Z_Construct_UClass_UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CommonSkeletalMeshesAndAnimationsProperties_MetaData), NewProp_CommonSkeletalMeshesAndAnimationsProperties_MetaData) };
void Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_bImportStaticMeshes_SetBit(void* Obj)
{
	((UInterchangeGenericMeshPipeline*)Obj)->bImportStaticMeshes = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_bImportStaticMeshes = { "bImportStaticMeshes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UInterchangeGenericMeshPipeline), &Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_bImportStaticMeshes_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bImportStaticMeshes_MetaData), NewProp_bImportStaticMeshes_MetaData) };
void Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_bCombineStaticMeshes_SetBit(void* Obj)
{
	((UInterchangeGenericMeshPipeline*)Obj)->bCombineStaticMeshes = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_bCombineStaticMeshes = { "bCombineStaticMeshes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UInterchangeGenericMeshPipeline), &Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_bCombineStaticMeshes_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCombineStaticMeshes_MetaData), NewProp_bCombineStaticMeshes_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_LodGroup = { "LodGroup", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInterchangeGenericMeshPipeline, LodGroup), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LodGroup_MetaData), NewProp_LodGroup_MetaData) };
void Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_bAutoComputeLODScreenSizes_SetBit(void* Obj)
{
	((UInterchangeGenericMeshPipeline*)Obj)->bAutoComputeLODScreenSizes = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_bAutoComputeLODScreenSizes = { "bAutoComputeLODScreenSizes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UInterchangeGenericMeshPipeline), &Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_bAutoComputeLODScreenSizes_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoComputeLODScreenSizes_MetaData), NewProp_bAutoComputeLODScreenSizes_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_LODScreenSizes_Inner = { "LODScreenSizes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_LODScreenSizes = { "LODScreenSizes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInterchangeGenericMeshPipeline, LODScreenSizes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LODScreenSizes_MetaData), NewProp_LODScreenSizes_MetaData) };
void Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_bImportCollision_SetBit(void* Obj)
{
	((UInterchangeGenericMeshPipeline*)Obj)->bImportCollision_DEPRECATED = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_bImportCollision = { "bImportCollision", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UInterchangeGenericMeshPipeline), &Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_bImportCollision_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bImportCollision_MetaData), NewProp_bImportCollision_MetaData) };
void Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_bCollision_SetBit(void* Obj)
{
	((UInterchangeGenericMeshPipeline*)Obj)->bCollision = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_bCollision = { "bCollision", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UInterchangeGenericMeshPipeline), &Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_bCollision_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCollision_MetaData), NewProp_bCollision_MetaData) };
void Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_bImportCollisionAccordingToMeshName_SetBit(void* Obj)
{
	((UInterchangeGenericMeshPipeline*)Obj)->bImportCollisionAccordingToMeshName = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_bImportCollisionAccordingToMeshName = { "bImportCollisionAccordingToMeshName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UInterchangeGenericMeshPipeline), &Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_bImportCollisionAccordingToMeshName_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bImportCollisionAccordingToMeshName_MetaData), NewProp_bImportCollisionAccordingToMeshName_MetaData) };
void Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_bOneConvexHullPerUCX_SetBit(void* Obj)
{
	((UInterchangeGenericMeshPipeline*)Obj)->bOneConvexHullPerUCX = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_bOneConvexHullPerUCX = { "bOneConvexHullPerUCX", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UInterchangeGenericMeshPipeline), &Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_bOneConvexHullPerUCX_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOneConvexHullPerUCX_MetaData), NewProp_bOneConvexHullPerUCX_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_Collision_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_Collision = { "Collision", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInterchangeGenericMeshPipeline, Collision), Z_Construct_UEnum_InterchangeNodes_EInterchangeMeshCollision, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Collision_MetaData), NewProp_Collision_MetaData) }; // 987414362
void Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_bBuildNanite_SetBit(void* Obj)
{
	((UInterchangeGenericMeshPipeline*)Obj)->bBuildNanite = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_bBuildNanite = { "bBuildNanite", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UInterchangeGenericMeshPipeline), &Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_bBuildNanite_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bBuildNanite_MetaData), NewProp_bBuildNanite_MetaData) };
void Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_bBuildReversedIndexBuffer_SetBit(void* Obj)
{
	((UInterchangeGenericMeshPipeline*)Obj)->bBuildReversedIndexBuffer = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_bBuildReversedIndexBuffer = { "bBuildReversedIndexBuffer", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UInterchangeGenericMeshPipeline), &Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_bBuildReversedIndexBuffer_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bBuildReversedIndexBuffer_MetaData), NewProp_bBuildReversedIndexBuffer_MetaData) };
void Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_bGenerateLightmapUVs_SetBit(void* Obj)
{
	((UInterchangeGenericMeshPipeline*)Obj)->bGenerateLightmapUVs = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_bGenerateLightmapUVs = { "bGenerateLightmapUVs", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UInterchangeGenericMeshPipeline), &Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_bGenerateLightmapUVs_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bGenerateLightmapUVs_MetaData), NewProp_bGenerateLightmapUVs_MetaData) };
void Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_bGenerateDistanceFieldAsIfTwoSided_SetBit(void* Obj)
{
	((UInterchangeGenericMeshPipeline*)Obj)->bGenerateDistanceFieldAsIfTwoSided = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_bGenerateDistanceFieldAsIfTwoSided = { "bGenerateDistanceFieldAsIfTwoSided", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UInterchangeGenericMeshPipeline), &Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_bGenerateDistanceFieldAsIfTwoSided_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bGenerateDistanceFieldAsIfTwoSided_MetaData), NewProp_bGenerateDistanceFieldAsIfTwoSided_MetaData) };
void Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_bSupportFaceRemap_SetBit(void* Obj)
{
	((UInterchangeGenericMeshPipeline*)Obj)->bSupportFaceRemap = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_bSupportFaceRemap = { "bSupportFaceRemap", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UInterchangeGenericMeshPipeline), &Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_bSupportFaceRemap_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSupportFaceRemap_MetaData), NewProp_bSupportFaceRemap_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_MinLightmapResolution = { "MinLightmapResolution", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInterchangeGenericMeshPipeline, MinLightmapResolution), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinLightmapResolution_MetaData), NewProp_MinLightmapResolution_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_SrcLightmapIndex = { "SrcLightmapIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInterchangeGenericMeshPipeline, SrcLightmapIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SrcLightmapIndex_MetaData), NewProp_SrcLightmapIndex_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_DstLightmapIndex = { "DstLightmapIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInterchangeGenericMeshPipeline, DstLightmapIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DstLightmapIndex_MetaData), NewProp_DstLightmapIndex_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_BuildScale3D = { "BuildScale3D", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInterchangeGenericMeshPipeline, BuildScale3D), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BuildScale3D_MetaData), NewProp_BuildScale3D_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_DistanceFieldResolutionScale = { "DistanceFieldResolutionScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInterchangeGenericMeshPipeline, DistanceFieldResolutionScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DistanceFieldResolutionScale_MetaData), NewProp_DistanceFieldResolutionScale_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_DistanceFieldReplacementMesh = { "DistanceFieldReplacementMesh", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInterchangeGenericMeshPipeline, DistanceFieldReplacementMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DistanceFieldReplacementMesh_MetaData), NewProp_DistanceFieldReplacementMesh_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_MaxLumenMeshCards = { "MaxLumenMeshCards", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInterchangeGenericMeshPipeline, MaxLumenMeshCards), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxLumenMeshCards_MetaData), NewProp_MaxLumenMeshCards_MetaData) };
void Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_bImportSkeletalMeshes_SetBit(void* Obj)
{
	((UInterchangeGenericMeshPipeline*)Obj)->bImportSkeletalMeshes = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_bImportSkeletalMeshes = { "bImportSkeletalMeshes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UInterchangeGenericMeshPipeline), &Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_bImportSkeletalMeshes_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bImportSkeletalMeshes_MetaData), NewProp_bImportSkeletalMeshes_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_SkeletalMeshImportContentType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_SkeletalMeshImportContentType = { "SkeletalMeshImportContentType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInterchangeGenericMeshPipeline, SkeletalMeshImportContentType), Z_Construct_UEnum_InterchangeFactoryNodes_EInterchangeSkeletalMeshContentType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkeletalMeshImportContentType_MetaData), NewProp_SkeletalMeshImportContentType_MetaData) }; // 2051819744
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_LastSkeletalMeshImportContentType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_LastSkeletalMeshImportContentType = { "LastSkeletalMeshImportContentType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInterchangeGenericMeshPipeline, LastSkeletalMeshImportContentType), Z_Construct_UEnum_InterchangeFactoryNodes_EInterchangeSkeletalMeshContentType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastSkeletalMeshImportContentType_MetaData), NewProp_LastSkeletalMeshImportContentType_MetaData) }; // 2051819744
void Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_bCombineSkeletalMeshes_SetBit(void* Obj)
{
	((UInterchangeGenericMeshPipeline*)Obj)->bCombineSkeletalMeshes_DEPRECATED = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_bCombineSkeletalMeshes = { "bCombineSkeletalMeshes", nullptr, (EPropertyFlags)0x0010000020000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UInterchangeGenericMeshPipeline), &Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_bCombineSkeletalMeshes_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCombineSkeletalMeshes_MetaData), NewProp_bCombineSkeletalMeshes_MetaData) };
void Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_bImportMorphTargets_SetBit(void* Obj)
{
	((UInterchangeGenericMeshPipeline*)Obj)->bImportMorphTargets = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_bImportMorphTargets = { "bImportMorphTargets", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UInterchangeGenericMeshPipeline), &Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_bImportMorphTargets_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bImportMorphTargets_MetaData), NewProp_bImportMorphTargets_MetaData) };
void Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_bMergeMorphTargetsWithSameName_SetBit(void* Obj)
{
	((UInterchangeGenericMeshPipeline*)Obj)->bMergeMorphTargetsWithSameName = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_bMergeMorphTargetsWithSameName = { "bMergeMorphTargetsWithSameName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UInterchangeGenericMeshPipeline), &Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_bMergeMorphTargetsWithSameName_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMergeMorphTargetsWithSameName_MetaData), NewProp_bMergeMorphTargetsWithSameName_MetaData) };
void Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_bImportVertexAttributes_SetBit(void* Obj)
{
	((UInterchangeGenericMeshPipeline*)Obj)->bImportVertexAttributes = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_bImportVertexAttributes = { "bImportVertexAttributes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UInterchangeGenericMeshPipeline), &Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_bImportVertexAttributes_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bImportVertexAttributes_MetaData), NewProp_bImportVertexAttributes_MetaData) };
void Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_bUpdateSkeletonReferencePose_SetBit(void* Obj)
{
	((UInterchangeGenericMeshPipeline*)Obj)->bUpdateSkeletonReferencePose = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_bUpdateSkeletonReferencePose = { "bUpdateSkeletonReferencePose", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UInterchangeGenericMeshPipeline), &Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_bUpdateSkeletonReferencePose_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUpdateSkeletonReferencePose_MetaData), NewProp_bUpdateSkeletonReferencePose_MetaData) };
void Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_bCreatePhysicsAsset_SetBit(void* Obj)
{
	((UInterchangeGenericMeshPipeline*)Obj)->bCreatePhysicsAsset = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_bCreatePhysicsAsset = { "bCreatePhysicsAsset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UInterchangeGenericMeshPipeline), &Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_bCreatePhysicsAsset_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCreatePhysicsAsset_MetaData), NewProp_bCreatePhysicsAsset_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_PhysicsAsset = { "PhysicsAsset", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInterchangeGenericMeshPipeline, PhysicsAsset), Z_Construct_UClass_UPhysicsAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PhysicsAsset_MetaData), NewProp_PhysicsAsset_MetaData) };
void Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_bUseHighPrecisionSkinWeights_SetBit(void* Obj)
{
	((UInterchangeGenericMeshPipeline*)Obj)->bUseHighPrecisionSkinWeights = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_bUseHighPrecisionSkinWeights = { "bUseHighPrecisionSkinWeights", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UInterchangeGenericMeshPipeline), &Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_bUseHighPrecisionSkinWeights_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseHighPrecisionSkinWeights_MetaData), NewProp_bUseHighPrecisionSkinWeights_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_ThresholdPosition = { "ThresholdPosition", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInterchangeGenericMeshPipeline, ThresholdPosition), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThresholdPosition_MetaData), NewProp_ThresholdPosition_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_ThresholdTangentNormal = { "ThresholdTangentNormal", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInterchangeGenericMeshPipeline, ThresholdTangentNormal), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThresholdTangentNormal_MetaData), NewProp_ThresholdTangentNormal_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_ThresholdUV = { "ThresholdUV", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInterchangeGenericMeshPipeline, ThresholdUV), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThresholdUV_MetaData), NewProp_ThresholdUV_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_MorphThresholdPosition = { "MorphThresholdPosition", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInterchangeGenericMeshPipeline, MorphThresholdPosition), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MorphThresholdPosition_MetaData), NewProp_MorphThresholdPosition_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_BoneInfluenceLimit = { "BoneInfluenceLimit", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInterchangeGenericMeshPipeline, BoneInfluenceLimit), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoneInfluenceLimit_MetaData), NewProp_BoneInfluenceLimit_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_CommonMeshesProperties,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_CommonSkeletalMeshesAndAnimationsProperties,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_bImportStaticMeshes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_bCombineStaticMeshes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_LodGroup,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_bAutoComputeLODScreenSizes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_LODScreenSizes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_LODScreenSizes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_bImportCollision,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_bCollision,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_bImportCollisionAccordingToMeshName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_bOneConvexHullPerUCX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_Collision_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_Collision,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_bBuildNanite,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_bBuildReversedIndexBuffer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_bGenerateLightmapUVs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_bGenerateDistanceFieldAsIfTwoSided,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_bSupportFaceRemap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_MinLightmapResolution,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_SrcLightmapIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_DstLightmapIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_BuildScale3D,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_DistanceFieldResolutionScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_DistanceFieldReplacementMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_MaxLumenMeshCards,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_bImportSkeletalMeshes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_SkeletalMeshImportContentType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_SkeletalMeshImportContentType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_LastSkeletalMeshImportContentType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_LastSkeletalMeshImportContentType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_bCombineSkeletalMeshes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_bImportMorphTargets,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_bMergeMorphTargetsWithSameName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_bImportVertexAttributes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_bUpdateSkeletonReferencePose,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_bCreatePhysicsAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_PhysicsAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_bUseHighPrecisionSkinWeights,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_ThresholdPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_ThresholdTangentNormal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_ThresholdUV,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_MorphThresholdPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_BoneInfluenceLimit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterchangePipelineBase,
	(UObject* (*)())Z_Construct_UPackage__Script_InterchangePipelines,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::ClassParams = {
	&UInterchangeGenericMeshPipeline::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::PropPointers),
	0,
	0x041010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::Class_MetaDataParams), Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInterchangeGenericMeshPipeline()
{
	if (!Z_Registration_Info_UClass_UInterchangeGenericMeshPipeline.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeGenericMeshPipeline.OuterSingleton, Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInterchangeGenericMeshPipeline.OuterSingleton;
}
template<> INTERCHANGEPIPELINES_API UClass* StaticClass<UInterchangeGenericMeshPipeline>()
{
	return UInterchangeGenericMeshPipeline::StaticClass();
}
UInterchangeGenericMeshPipeline::UInterchangeGenericMeshPipeline(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeGenericMeshPipeline);
UInterchangeGenericMeshPipeline::~UInterchangeGenericMeshPipeline() {}
// End Class UInterchangeGenericMeshPipeline

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeGenericMeshPipeline_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInterchangeGenericMeshPipeline, UInterchangeGenericMeshPipeline::StaticClass, TEXT("UInterchangeGenericMeshPipeline"), &Z_Registration_Info_UClass_UInterchangeGenericMeshPipeline, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeGenericMeshPipeline), 3456256643U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeGenericMeshPipeline_h_2193218274(TEXT("/Script/InterchangePipelines"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeGenericMeshPipeline_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeGenericMeshPipeline_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
