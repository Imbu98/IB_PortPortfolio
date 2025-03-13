// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HairStrandsCore/Public/GroomBlueprintLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGroomBlueprintLibrary() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
GEOMETRYCACHE_API UClass* Z_Construct_UClass_UGeometryCache_NoRegister();
HAIRSTRANDSCORE_API UClass* Z_Construct_UClass_UGroomAsset_NoRegister();
HAIRSTRANDSCORE_API UClass* Z_Construct_UClass_UGroomBindingAsset_NoRegister();
HAIRSTRANDSCORE_API UClass* Z_Construct_UClass_UGroomBlueprintLibrary();
HAIRSTRANDSCORE_API UClass* Z_Construct_UClass_UGroomBlueprintLibrary_NoRegister();
UPackage* Z_Construct_UPackage__Script_HairStrandsCore();
// End Cross Module References

// Begin Class UGroomBlueprintLibrary Function CreateNewGeometryCacheGroomBindingAsset
struct Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGeometryCacheGroomBindingAsset_Statics
{
	struct GroomBlueprintLibrary_eventCreateNewGeometryCacheGroomBindingAsset_Parms
	{
		UGroomAsset* GroomAsset;
		UGeometryCache* GeometryCache;
		int32 NumInterpolationPoints;
		UGeometryCache* SourceGeometryCacheForTransfer;
		int32 MatchingSection;
		UGroomBindingAsset* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Groom" },
		{ "Comment", "/**\n\x09 * Create a new groom binding asset within the contents space of the project. The asset name will be auto generated based on the groom asset name and the skeletal asset name\n\x09 * @param GroomAsset Groom asset for binding\n\x09 * @param SkeletalMesh Skeletal mesh on which the groom should be bound to\n\x09 * @param NumInterpolationPoints (Optional) Number of point used for RBF constraint\n\x09 * @param SourceSkeletalMeshForTransfer  (Optional) Skeletal mesh on which the groom was authored. This should be used only if the skeletal mesh on which the groom is attached to, does not match the rest pose of the groom\n\x09 */" },
		{ "CPP_Default_MatchingSection", "0" },
		{ "CPP_Default_NumInterpolationPoints", "100" },
		{ "CPP_Default_SourceGeometryCacheForTransfer", "None" },
		{ "ModuleRelativePath", "Public/GroomBlueprintLibrary.h" },
		{ "ToolTip", "Create a new groom binding asset within the contents space of the project. The asset name will be auto generated based on the groom asset name and the skeletal asset name\n@param GroomAsset Groom asset for binding\n@param SkeletalMesh Skeletal mesh on which the groom should be bound to\n@param NumInterpolationPoints (Optional) Number of point used for RBF constraint\n@param SourceSkeletalMeshForTransfer  (Optional) Skeletal mesh on which the groom was authored. This should be used only if the skeletal mesh on which the groom is attached to, does not match the rest pose of the groom" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GroomAsset;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GeometryCache;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumInterpolationPoints;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceGeometryCacheForTransfer;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MatchingSection;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGeometryCacheGroomBindingAsset_Statics::NewProp_GroomAsset = { "GroomAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GroomBlueprintLibrary_eventCreateNewGeometryCacheGroomBindingAsset_Parms, GroomAsset), Z_Construct_UClass_UGroomAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGeometryCacheGroomBindingAsset_Statics::NewProp_GeometryCache = { "GeometryCache", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GroomBlueprintLibrary_eventCreateNewGeometryCacheGroomBindingAsset_Parms, GeometryCache), Z_Construct_UClass_UGeometryCache_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGeometryCacheGroomBindingAsset_Statics::NewProp_NumInterpolationPoints = { "NumInterpolationPoints", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GroomBlueprintLibrary_eventCreateNewGeometryCacheGroomBindingAsset_Parms, NumInterpolationPoints), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGeometryCacheGroomBindingAsset_Statics::NewProp_SourceGeometryCacheForTransfer = { "SourceGeometryCacheForTransfer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GroomBlueprintLibrary_eventCreateNewGeometryCacheGroomBindingAsset_Parms, SourceGeometryCacheForTransfer), Z_Construct_UClass_UGeometryCache_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGeometryCacheGroomBindingAsset_Statics::NewProp_MatchingSection = { "MatchingSection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GroomBlueprintLibrary_eventCreateNewGeometryCacheGroomBindingAsset_Parms, MatchingSection), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGeometryCacheGroomBindingAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GroomBlueprintLibrary_eventCreateNewGeometryCacheGroomBindingAsset_Parms, ReturnValue), Z_Construct_UClass_UGroomBindingAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGeometryCacheGroomBindingAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGeometryCacheGroomBindingAsset_Statics::NewProp_GroomAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGeometryCacheGroomBindingAsset_Statics::NewProp_GeometryCache,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGeometryCacheGroomBindingAsset_Statics::NewProp_NumInterpolationPoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGeometryCacheGroomBindingAsset_Statics::NewProp_SourceGeometryCacheForTransfer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGeometryCacheGroomBindingAsset_Statics::NewProp_MatchingSection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGeometryCacheGroomBindingAsset_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGeometryCacheGroomBindingAsset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGeometryCacheGroomBindingAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGroomBlueprintLibrary, nullptr, "CreateNewGeometryCacheGroomBindingAsset", nullptr, nullptr, Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGeometryCacheGroomBindingAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGeometryCacheGroomBindingAsset_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGeometryCacheGroomBindingAsset_Statics::GroomBlueprintLibrary_eventCreateNewGeometryCacheGroomBindingAsset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGeometryCacheGroomBindingAsset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGeometryCacheGroomBindingAsset_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGeometryCacheGroomBindingAsset_Statics::GroomBlueprintLibrary_eventCreateNewGeometryCacheGroomBindingAsset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGeometryCacheGroomBindingAsset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGeometryCacheGroomBindingAsset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGroomBlueprintLibrary::execCreateNewGeometryCacheGroomBindingAsset)
{
	P_GET_OBJECT(UGroomAsset,Z_Param_GroomAsset);
	P_GET_OBJECT(UGeometryCache,Z_Param_GeometryCache);
	P_GET_PROPERTY(FIntProperty,Z_Param_NumInterpolationPoints);
	P_GET_OBJECT(UGeometryCache,Z_Param_SourceGeometryCacheForTransfer);
	P_GET_PROPERTY(FIntProperty,Z_Param_MatchingSection);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UGroomBindingAsset**)Z_Param__Result=UGroomBlueprintLibrary::CreateNewGeometryCacheGroomBindingAsset(Z_Param_GroomAsset,Z_Param_GeometryCache,Z_Param_NumInterpolationPoints,Z_Param_SourceGeometryCacheForTransfer,Z_Param_MatchingSection);
	P_NATIVE_END;
}
// End Class UGroomBlueprintLibrary Function CreateNewGeometryCacheGroomBindingAsset

// Begin Class UGroomBlueprintLibrary Function CreateNewGeometryCacheGroomBindingAssetWithPath
struct Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGeometryCacheGroomBindingAssetWithPath_Statics
{
	struct GroomBlueprintLibrary_eventCreateNewGeometryCacheGroomBindingAssetWithPath_Parms
	{
		FString DesiredPackagePath;
		UGroomAsset* GroomAsset;
		UGeometryCache* GeometryCache;
		int32 NumInterpolationPoints;
		UGeometryCache* SourceGeometryCacheForTransfer;
		int32 MatchingSection;
		UGroomBindingAsset* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Groom" },
		{ "Comment", "/**\n\x09 * Create a new groom binding asset within the contents space of the project.\n\x09 * @param DesiredPackagePath The package path to use for the groom binding\n\x09 * @param GroomAsset Groom asset for binding\n\x09 * @param SkeletalMesh Skeletal mesh on which the groom should be bound to\n\x09 * @param NumInterpolationPoints Number of point used for RBF constraint (if used)\n\x09 * @param SourceSkeletalMeshForTransfer Skeletal mesh on which the groom was authored. This should be used only if the skeletal mesh on which the groom is attached to, does not match the rest pose of the groom\n\x09 */" },
		{ "CPP_Default_MatchingSection", "0" },
		{ "CPP_Default_NumInterpolationPoints", "100" },
		{ "CPP_Default_SourceGeometryCacheForTransfer", "None" },
		{ "ModuleRelativePath", "Public/GroomBlueprintLibrary.h" },
		{ "ToolTip", "Create a new groom binding asset within the contents space of the project.\n@param DesiredPackagePath The package path to use for the groom binding\n@param GroomAsset Groom asset for binding\n@param SkeletalMesh Skeletal mesh on which the groom should be bound to\n@param NumInterpolationPoints Number of point used for RBF constraint (if used)\n@param SourceSkeletalMeshForTransfer Skeletal mesh on which the groom was authored. This should be used only if the skeletal mesh on which the groom is attached to, does not match the rest pose of the groom" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DesiredPackagePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_DesiredPackagePath;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GroomAsset;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GeometryCache;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumInterpolationPoints;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceGeometryCacheForTransfer;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MatchingSection;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGeometryCacheGroomBindingAssetWithPath_Statics::NewProp_DesiredPackagePath = { "DesiredPackagePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GroomBlueprintLibrary_eventCreateNewGeometryCacheGroomBindingAssetWithPath_Parms, DesiredPackagePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DesiredPackagePath_MetaData), NewProp_DesiredPackagePath_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGeometryCacheGroomBindingAssetWithPath_Statics::NewProp_GroomAsset = { "GroomAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GroomBlueprintLibrary_eventCreateNewGeometryCacheGroomBindingAssetWithPath_Parms, GroomAsset), Z_Construct_UClass_UGroomAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGeometryCacheGroomBindingAssetWithPath_Statics::NewProp_GeometryCache = { "GeometryCache", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GroomBlueprintLibrary_eventCreateNewGeometryCacheGroomBindingAssetWithPath_Parms, GeometryCache), Z_Construct_UClass_UGeometryCache_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGeometryCacheGroomBindingAssetWithPath_Statics::NewProp_NumInterpolationPoints = { "NumInterpolationPoints", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GroomBlueprintLibrary_eventCreateNewGeometryCacheGroomBindingAssetWithPath_Parms, NumInterpolationPoints), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGeometryCacheGroomBindingAssetWithPath_Statics::NewProp_SourceGeometryCacheForTransfer = { "SourceGeometryCacheForTransfer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GroomBlueprintLibrary_eventCreateNewGeometryCacheGroomBindingAssetWithPath_Parms, SourceGeometryCacheForTransfer), Z_Construct_UClass_UGeometryCache_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGeometryCacheGroomBindingAssetWithPath_Statics::NewProp_MatchingSection = { "MatchingSection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GroomBlueprintLibrary_eventCreateNewGeometryCacheGroomBindingAssetWithPath_Parms, MatchingSection), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGeometryCacheGroomBindingAssetWithPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GroomBlueprintLibrary_eventCreateNewGeometryCacheGroomBindingAssetWithPath_Parms, ReturnValue), Z_Construct_UClass_UGroomBindingAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGeometryCacheGroomBindingAssetWithPath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGeometryCacheGroomBindingAssetWithPath_Statics::NewProp_DesiredPackagePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGeometryCacheGroomBindingAssetWithPath_Statics::NewProp_GroomAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGeometryCacheGroomBindingAssetWithPath_Statics::NewProp_GeometryCache,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGeometryCacheGroomBindingAssetWithPath_Statics::NewProp_NumInterpolationPoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGeometryCacheGroomBindingAssetWithPath_Statics::NewProp_SourceGeometryCacheForTransfer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGeometryCacheGroomBindingAssetWithPath_Statics::NewProp_MatchingSection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGeometryCacheGroomBindingAssetWithPath_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGeometryCacheGroomBindingAssetWithPath_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGeometryCacheGroomBindingAssetWithPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGroomBlueprintLibrary, nullptr, "CreateNewGeometryCacheGroomBindingAssetWithPath", nullptr, nullptr, Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGeometryCacheGroomBindingAssetWithPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGeometryCacheGroomBindingAssetWithPath_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGeometryCacheGroomBindingAssetWithPath_Statics::GroomBlueprintLibrary_eventCreateNewGeometryCacheGroomBindingAssetWithPath_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGeometryCacheGroomBindingAssetWithPath_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGeometryCacheGroomBindingAssetWithPath_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGeometryCacheGroomBindingAssetWithPath_Statics::GroomBlueprintLibrary_eventCreateNewGeometryCacheGroomBindingAssetWithPath_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGeometryCacheGroomBindingAssetWithPath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGeometryCacheGroomBindingAssetWithPath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGroomBlueprintLibrary::execCreateNewGeometryCacheGroomBindingAssetWithPath)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_DesiredPackagePath);
	P_GET_OBJECT(UGroomAsset,Z_Param_GroomAsset);
	P_GET_OBJECT(UGeometryCache,Z_Param_GeometryCache);
	P_GET_PROPERTY(FIntProperty,Z_Param_NumInterpolationPoints);
	P_GET_OBJECT(UGeometryCache,Z_Param_SourceGeometryCacheForTransfer);
	P_GET_PROPERTY(FIntProperty,Z_Param_MatchingSection);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UGroomBindingAsset**)Z_Param__Result=UGroomBlueprintLibrary::CreateNewGeometryCacheGroomBindingAssetWithPath(Z_Param_DesiredPackagePath,Z_Param_GroomAsset,Z_Param_GeometryCache,Z_Param_NumInterpolationPoints,Z_Param_SourceGeometryCacheForTransfer,Z_Param_MatchingSection);
	P_NATIVE_END;
}
// End Class UGroomBlueprintLibrary Function CreateNewGeometryCacheGroomBindingAssetWithPath

// Begin Class UGroomBlueprintLibrary Function CreateNewGroomBindingAsset
struct Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGroomBindingAsset_Statics
{
	struct GroomBlueprintLibrary_eventCreateNewGroomBindingAsset_Parms
	{
		UGroomAsset* InGroomAsset;
		USkeletalMesh* InSkeletalMesh;
		int32 InNumInterpolationPoints;
		USkeletalMesh* InSourceSkeletalMeshForTransfer;
		int32 InMatchingSection;
		UGroomBindingAsset* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Groom" },
		{ "Comment", "/**\n\x09 * Create a new groom binding asset within the contents space of the project. The asset name will be auto generated based on the groom asset name and the skeletal asset name\n\x09 * @param InGroomAsset Groom asset for binding\n\x09 * @param InSkeletalMesh Skeletal mesh on which the groom should be bound to\n\x09 * @param InNumInterpolationPoints (Optional) Number of point used for RBF constraint\n\x09 * @param InSourceSkeletalMeshForTransfer  (Optional) Skeletal mesh on which the groom was authored. This should be used only if the skeletal mesh on which the groom is attached to, does not match the rest pose of the groom\n\x09 */" },
		{ "CPP_Default_InMatchingSection", "0" },
		{ "CPP_Default_InNumInterpolationPoints", "100" },
		{ "CPP_Default_InSourceSkeletalMeshForTransfer", "None" },
		{ "ModuleRelativePath", "Public/GroomBlueprintLibrary.h" },
		{ "ToolTip", "Create a new groom binding asset within the contents space of the project. The asset name will be auto generated based on the groom asset name and the skeletal asset name\n@param InGroomAsset Groom asset for binding\n@param InSkeletalMesh Skeletal mesh on which the groom should be bound to\n@param InNumInterpolationPoints (Optional) Number of point used for RBF constraint\n@param InSourceSkeletalMeshForTransfer  (Optional) Skeletal mesh on which the groom was authored. This should be used only if the skeletal mesh on which the groom is attached to, does not match the rest pose of the groom" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InGroomAsset;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InSkeletalMesh;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InNumInterpolationPoints;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InSourceSkeletalMeshForTransfer;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InMatchingSection;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGroomBindingAsset_Statics::NewProp_InGroomAsset = { "InGroomAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GroomBlueprintLibrary_eventCreateNewGroomBindingAsset_Parms, InGroomAsset), Z_Construct_UClass_UGroomAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGroomBindingAsset_Statics::NewProp_InSkeletalMesh = { "InSkeletalMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GroomBlueprintLibrary_eventCreateNewGroomBindingAsset_Parms, InSkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGroomBindingAsset_Statics::NewProp_InNumInterpolationPoints = { "InNumInterpolationPoints", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GroomBlueprintLibrary_eventCreateNewGroomBindingAsset_Parms, InNumInterpolationPoints), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGroomBindingAsset_Statics::NewProp_InSourceSkeletalMeshForTransfer = { "InSourceSkeletalMeshForTransfer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GroomBlueprintLibrary_eventCreateNewGroomBindingAsset_Parms, InSourceSkeletalMeshForTransfer), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGroomBindingAsset_Statics::NewProp_InMatchingSection = { "InMatchingSection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GroomBlueprintLibrary_eventCreateNewGroomBindingAsset_Parms, InMatchingSection), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGroomBindingAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GroomBlueprintLibrary_eventCreateNewGroomBindingAsset_Parms, ReturnValue), Z_Construct_UClass_UGroomBindingAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGroomBindingAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGroomBindingAsset_Statics::NewProp_InGroomAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGroomBindingAsset_Statics::NewProp_InSkeletalMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGroomBindingAsset_Statics::NewProp_InNumInterpolationPoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGroomBindingAsset_Statics::NewProp_InSourceSkeletalMeshForTransfer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGroomBindingAsset_Statics::NewProp_InMatchingSection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGroomBindingAsset_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGroomBindingAsset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGroomBindingAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGroomBlueprintLibrary, nullptr, "CreateNewGroomBindingAsset", nullptr, nullptr, Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGroomBindingAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGroomBindingAsset_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGroomBindingAsset_Statics::GroomBlueprintLibrary_eventCreateNewGroomBindingAsset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGroomBindingAsset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGroomBindingAsset_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGroomBindingAsset_Statics::GroomBlueprintLibrary_eventCreateNewGroomBindingAsset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGroomBindingAsset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGroomBindingAsset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGroomBlueprintLibrary::execCreateNewGroomBindingAsset)
{
	P_GET_OBJECT(UGroomAsset,Z_Param_InGroomAsset);
	P_GET_OBJECT(USkeletalMesh,Z_Param_InSkeletalMesh);
	P_GET_PROPERTY(FIntProperty,Z_Param_InNumInterpolationPoints);
	P_GET_OBJECT(USkeletalMesh,Z_Param_InSourceSkeletalMeshForTransfer);
	P_GET_PROPERTY(FIntProperty,Z_Param_InMatchingSection);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UGroomBindingAsset**)Z_Param__Result=UGroomBlueprintLibrary::CreateNewGroomBindingAsset(Z_Param_InGroomAsset,Z_Param_InSkeletalMesh,Z_Param_InNumInterpolationPoints,Z_Param_InSourceSkeletalMeshForTransfer,Z_Param_InMatchingSection);
	P_NATIVE_END;
}
// End Class UGroomBlueprintLibrary Function CreateNewGroomBindingAsset

// Begin Class UGroomBlueprintLibrary Function CreateNewGroomBindingAssetWithPath
struct Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGroomBindingAssetWithPath_Statics
{
	struct GroomBlueprintLibrary_eventCreateNewGroomBindingAssetWithPath_Parms
	{
		FString InDesiredPackagePath;
		UGroomAsset* InGroomAsset;
		USkeletalMesh* InSkeletalMesh;
		int32 InNumInterpolationPoints;
		USkeletalMesh* InSourceSkeletalMeshForTransfer;
		int32 InMatchingSection;
		UGroomBindingAsset* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Groom" },
		{ "Comment", "/**\n\x09 * Create a new groom binding asset within the contents space of the project.\n\x09 * @param InDesiredPackagePath The package path to use for the groom binding\n\x09 * @param InGroomAsset Groom asset for binding\n\x09 * @param InSkeletalMesh Skeletal mesh on which the groom should be bound to\n\x09 * @param InNumInterpolationPoints Number of point used for RBF constraint (if used)\n\x09 * @param InSourceSkeletalMeshForTransfer Skeletal mesh on which the groom was authored. This should be used only if the skeletal mesh on which the groom is attached to, does not match the rest pose of the groom\n\x09 */" },
		{ "CPP_Default_InMatchingSection", "0" },
		{ "CPP_Default_InNumInterpolationPoints", "100" },
		{ "CPP_Default_InSourceSkeletalMeshForTransfer", "None" },
		{ "ModuleRelativePath", "Public/GroomBlueprintLibrary.h" },
		{ "ToolTip", "Create a new groom binding asset within the contents space of the project.\n@param InDesiredPackagePath The package path to use for the groom binding\n@param InGroomAsset Groom asset for binding\n@param InSkeletalMesh Skeletal mesh on which the groom should be bound to\n@param InNumInterpolationPoints Number of point used for RBF constraint (if used)\n@param InSourceSkeletalMeshForTransfer Skeletal mesh on which the groom was authored. This should be used only if the skeletal mesh on which the groom is attached to, does not match the rest pose of the groom" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InDesiredPackagePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InDesiredPackagePath;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InGroomAsset;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InSkeletalMesh;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InNumInterpolationPoints;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InSourceSkeletalMeshForTransfer;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InMatchingSection;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGroomBindingAssetWithPath_Statics::NewProp_InDesiredPackagePath = { "InDesiredPackagePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GroomBlueprintLibrary_eventCreateNewGroomBindingAssetWithPath_Parms, InDesiredPackagePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InDesiredPackagePath_MetaData), NewProp_InDesiredPackagePath_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGroomBindingAssetWithPath_Statics::NewProp_InGroomAsset = { "InGroomAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GroomBlueprintLibrary_eventCreateNewGroomBindingAssetWithPath_Parms, InGroomAsset), Z_Construct_UClass_UGroomAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGroomBindingAssetWithPath_Statics::NewProp_InSkeletalMesh = { "InSkeletalMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GroomBlueprintLibrary_eventCreateNewGroomBindingAssetWithPath_Parms, InSkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGroomBindingAssetWithPath_Statics::NewProp_InNumInterpolationPoints = { "InNumInterpolationPoints", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GroomBlueprintLibrary_eventCreateNewGroomBindingAssetWithPath_Parms, InNumInterpolationPoints), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGroomBindingAssetWithPath_Statics::NewProp_InSourceSkeletalMeshForTransfer = { "InSourceSkeletalMeshForTransfer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GroomBlueprintLibrary_eventCreateNewGroomBindingAssetWithPath_Parms, InSourceSkeletalMeshForTransfer), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGroomBindingAssetWithPath_Statics::NewProp_InMatchingSection = { "InMatchingSection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GroomBlueprintLibrary_eventCreateNewGroomBindingAssetWithPath_Parms, InMatchingSection), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGroomBindingAssetWithPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GroomBlueprintLibrary_eventCreateNewGroomBindingAssetWithPath_Parms, ReturnValue), Z_Construct_UClass_UGroomBindingAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGroomBindingAssetWithPath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGroomBindingAssetWithPath_Statics::NewProp_InDesiredPackagePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGroomBindingAssetWithPath_Statics::NewProp_InGroomAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGroomBindingAssetWithPath_Statics::NewProp_InSkeletalMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGroomBindingAssetWithPath_Statics::NewProp_InNumInterpolationPoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGroomBindingAssetWithPath_Statics::NewProp_InSourceSkeletalMeshForTransfer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGroomBindingAssetWithPath_Statics::NewProp_InMatchingSection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGroomBindingAssetWithPath_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGroomBindingAssetWithPath_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGroomBindingAssetWithPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGroomBlueprintLibrary, nullptr, "CreateNewGroomBindingAssetWithPath", nullptr, nullptr, Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGroomBindingAssetWithPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGroomBindingAssetWithPath_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGroomBindingAssetWithPath_Statics::GroomBlueprintLibrary_eventCreateNewGroomBindingAssetWithPath_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGroomBindingAssetWithPath_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGroomBindingAssetWithPath_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGroomBindingAssetWithPath_Statics::GroomBlueprintLibrary_eventCreateNewGroomBindingAssetWithPath_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGroomBindingAssetWithPath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGroomBindingAssetWithPath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGroomBlueprintLibrary::execCreateNewGroomBindingAssetWithPath)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InDesiredPackagePath);
	P_GET_OBJECT(UGroomAsset,Z_Param_InGroomAsset);
	P_GET_OBJECT(USkeletalMesh,Z_Param_InSkeletalMesh);
	P_GET_PROPERTY(FIntProperty,Z_Param_InNumInterpolationPoints);
	P_GET_OBJECT(USkeletalMesh,Z_Param_InSourceSkeletalMeshForTransfer);
	P_GET_PROPERTY(FIntProperty,Z_Param_InMatchingSection);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UGroomBindingAsset**)Z_Param__Result=UGroomBlueprintLibrary::CreateNewGroomBindingAssetWithPath(Z_Param_InDesiredPackagePath,Z_Param_InGroomAsset,Z_Param_InSkeletalMesh,Z_Param_InNumInterpolationPoints,Z_Param_InSourceSkeletalMeshForTransfer,Z_Param_InMatchingSection);
	P_NATIVE_END;
}
// End Class UGroomBlueprintLibrary Function CreateNewGroomBindingAssetWithPath

// Begin Class UGroomBlueprintLibrary Function IsHairStrandsSupportedInWorld
struct Z_Construct_UFunction_UGroomBlueprintLibrary_IsHairStrandsSupportedInWorld_Statics
{
	struct GroomBlueprintLibrary_eventIsHairStrandsSupportedInWorld_Parms
	{
		const UObject* WorldContextObject;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Groom" },
		{ "Comment", "/**\n\x09 * Check for strands support in the world of a given Actor Component\n\x09 * @param InWorld The world to check\n\x09 * @return true if strands are going to be rendered for the world's scene and false otherwise\n\x09 */" },
		{ "ModuleRelativePath", "Public/GroomBlueprintLibrary.h" },
		{ "ToolTip", "Check for strands support in the world of a given Actor Component\n@param InWorld The world to check\n@return true if strands are going to be rendered for the world's scene and false otherwise" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGroomBlueprintLibrary_IsHairStrandsSupportedInWorld_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GroomBlueprintLibrary_eventIsHairStrandsSupportedInWorld_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
void Z_Construct_UFunction_UGroomBlueprintLibrary_IsHairStrandsSupportedInWorld_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((GroomBlueprintLibrary_eventIsHairStrandsSupportedInWorld_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGroomBlueprintLibrary_IsHairStrandsSupportedInWorld_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GroomBlueprintLibrary_eventIsHairStrandsSupportedInWorld_Parms), &Z_Construct_UFunction_UGroomBlueprintLibrary_IsHairStrandsSupportedInWorld_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGroomBlueprintLibrary_IsHairStrandsSupportedInWorld_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGroomBlueprintLibrary_IsHairStrandsSupportedInWorld_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGroomBlueprintLibrary_IsHairStrandsSupportedInWorld_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomBlueprintLibrary_IsHairStrandsSupportedInWorld_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGroomBlueprintLibrary_IsHairStrandsSupportedInWorld_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGroomBlueprintLibrary, nullptr, "IsHairStrandsSupportedInWorld", nullptr, nullptr, Z_Construct_UFunction_UGroomBlueprintLibrary_IsHairStrandsSupportedInWorld_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomBlueprintLibrary_IsHairStrandsSupportedInWorld_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGroomBlueprintLibrary_IsHairStrandsSupportedInWorld_Statics::GroomBlueprintLibrary_eventIsHairStrandsSupportedInWorld_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomBlueprintLibrary_IsHairStrandsSupportedInWorld_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGroomBlueprintLibrary_IsHairStrandsSupportedInWorld_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGroomBlueprintLibrary_IsHairStrandsSupportedInWorld_Statics::GroomBlueprintLibrary_eventIsHairStrandsSupportedInWorld_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGroomBlueprintLibrary_IsHairStrandsSupportedInWorld()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGroomBlueprintLibrary_IsHairStrandsSupportedInWorld_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGroomBlueprintLibrary::execIsHairStrandsSupportedInWorld)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UGroomBlueprintLibrary::IsHairStrandsSupportedInWorld(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// End Class UGroomBlueprintLibrary Function IsHairStrandsSupportedInWorld

// Begin Class UGroomBlueprintLibrary
void UGroomBlueprintLibrary::StaticRegisterNativesUGroomBlueprintLibrary()
{
	UClass* Class = UGroomBlueprintLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CreateNewGeometryCacheGroomBindingAsset", &UGroomBlueprintLibrary::execCreateNewGeometryCacheGroomBindingAsset },
		{ "CreateNewGeometryCacheGroomBindingAssetWithPath", &UGroomBlueprintLibrary::execCreateNewGeometryCacheGroomBindingAssetWithPath },
		{ "CreateNewGroomBindingAsset", &UGroomBlueprintLibrary::execCreateNewGroomBindingAsset },
		{ "CreateNewGroomBindingAssetWithPath", &UGroomBlueprintLibrary::execCreateNewGroomBindingAssetWithPath },
		{ "IsHairStrandsSupportedInWorld", &UGroomBlueprintLibrary::execIsHairStrandsSupportedInWorld },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGroomBlueprintLibrary);
UClass* Z_Construct_UClass_UGroomBlueprintLibrary_NoRegister()
{
	return UGroomBlueprintLibrary::StaticClass();
}
struct Z_Construct_UClass_UGroomBlueprintLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "GroomBlueprintLibrary.h" },
		{ "ModuleRelativePath", "Public/GroomBlueprintLibrary.h" },
		{ "ScriptName", "GroomLibrary" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGeometryCacheGroomBindingAsset, "CreateNewGeometryCacheGroomBindingAsset" }, // 2197459350
		{ &Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGeometryCacheGroomBindingAssetWithPath, "CreateNewGeometryCacheGroomBindingAssetWithPath" }, // 1079492781
		{ &Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGroomBindingAsset, "CreateNewGroomBindingAsset" }, // 2612959412
		{ &Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGroomBindingAssetWithPath, "CreateNewGroomBindingAssetWithPath" }, // 1453567322
		{ &Z_Construct_UFunction_UGroomBlueprintLibrary_IsHairStrandsSupportedInWorld, "IsHairStrandsSupportedInWorld" }, // 1007166106
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGroomBlueprintLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGroomBlueprintLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_HairStrandsCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGroomBlueprintLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGroomBlueprintLibrary_Statics::ClassParams = {
	&UGroomBlueprintLibrary::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGroomBlueprintLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UGroomBlueprintLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGroomBlueprintLibrary()
{
	if (!Z_Registration_Info_UClass_UGroomBlueprintLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGroomBlueprintLibrary.OuterSingleton, Z_Construct_UClass_UGroomBlueprintLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGroomBlueprintLibrary.OuterSingleton;
}
template<> HAIRSTRANDSCORE_API UClass* StaticClass<UGroomBlueprintLibrary>()
{
	return UGroomBlueprintLibrary::StaticClass();
}
UGroomBlueprintLibrary::UGroomBlueprintLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGroomBlueprintLibrary);
UGroomBlueprintLibrary::~UGroomBlueprintLibrary() {}
// End Class UGroomBlueprintLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomBlueprintLibrary_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGroomBlueprintLibrary, UGroomBlueprintLibrary::StaticClass, TEXT("UGroomBlueprintLibrary"), &Z_Registration_Info_UClass_UGroomBlueprintLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGroomBlueprintLibrary), 4130711106U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomBlueprintLibrary_h_790584747(TEXT("/Script/HairStrandsCore"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomBlueprintLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomBlueprintLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
