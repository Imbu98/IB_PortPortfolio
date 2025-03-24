// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Dataflow/GeometryCollectionTransferVertexAttributeNode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GEOMETRYCOLLECTIONNODES_GeometryCollectionTransferVertexAttributeNode_generated_h
#error "GeometryCollectionTransferVertexAttributeNode.generated.h already included, missing '#pragma once' in GeometryCollectionTransferVertexAttributeNode.h"
#endif
#define GEOMETRYCOLLECTIONNODES_GeometryCollectionTransferVertexAttributeNode_generated_h

#define FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionTransferVertexAttributeNode_h_73_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGeometryCollectionTransferVertexAttributeNode_Statics; \
	GEOMETRYCOLLECTIONNODES_API static class UScriptStruct* StaticStruct(); \
	typedef FDataflowNode Super;


template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<struct FGeometryCollectionTransferVertexAttributeNode>();

#define FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionTransferVertexAttributeNode_h_139_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGeometryCollectionTransferVertexSkinWeightsNode_Statics; \
	GEOMETRYCOLLECTIONNODES_API static class UScriptStruct* StaticStruct(); \
	typedef FDataflowNode Super;


template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<struct FGeometryCollectionTransferVertexSkinWeightsNode>();

#define FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionTransferVertexAttributeNode_h_198_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGeometryCollectionSetKinematicVertexSelectionNode_Statics; \
	GEOMETRYCOLLECTIONNODES_API static class UScriptStruct* StaticStruct(); \
	typedef FDataflowNode Super;


template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<struct FGeometryCollectionSetKinematicVertexSelectionNode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionTransferVertexAttributeNode_h


#define FOREACH_ENUM_EDATAFLOWTRANSFERVERTEXATTRIBUTENODEFALLOFF(op) \
	op(EDataflowTransferVertexAttributeNodeFalloff::Squared) \
	op(EDataflowTransferVertexAttributeNodeFalloff::Linear) \
	op(EDataflowTransferVertexAttributeNodeFalloff::None) \
	op(EDataflowTransferVertexAttributeNodeFalloff::Dataflow_Max) 

enum class EDataflowTransferVertexAttributeNodeFalloff : uint8;
template<> struct TIsUEnumClass<EDataflowTransferVertexAttributeNodeFalloff> { enum { Value = true }; };
template<> GEOMETRYCOLLECTIONNODES_API UEnum* StaticEnum<EDataflowTransferVertexAttributeNodeFalloff>();

#define FOREACH_ENUM_EDATAFLOWTRANSFERVERTEXATTRIBUTENODESOURCESCALE(op) \
	op(EDataflowTransferVertexAttributeNodeSourceScale::Component_Edge) \
	op(EDataflowTransferVertexAttributeNodeSourceScale::Asset_Edge) \
	op(EDataflowTransferVertexAttributeNodeSourceScale::Asset_Bound) \
	op(EDataflowTransferVertexAttributeNodeSourceScale::Dataflow_Max) 

enum class EDataflowTransferVertexAttributeNodeSourceScale : uint8;
template<> struct TIsUEnumClass<EDataflowTransferVertexAttributeNodeSourceScale> { enum { Value = true }; };
template<> GEOMETRYCOLLECTIONNODES_API UEnum* StaticEnum<EDataflowTransferVertexAttributeNodeSourceScale>();

#define FOREACH_ENUM_EDATAFLOWTRANSFERVERTEXATTRIBUTENODEBOUNDINGVOLUME(op) \
	op(EDataflowTransferVertexAttributeNodeBoundingVolume::Vertex) \
	op(EDataflowTransferVertexAttributeNodeBoundingVolume::Triangle) \
	op(EDataflowTransferVertexAttributeNodeBoundingVolume::Dataflow_Max) 

enum class EDataflowTransferVertexAttributeNodeBoundingVolume : uint8;
template<> struct TIsUEnumClass<EDataflowTransferVertexAttributeNodeBoundingVolume> { enum { Value = true }; };
template<> GEOMETRYCOLLECTIONNODES_API UEnum* StaticEnum<EDataflowTransferVertexAttributeNodeBoundingVolume>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
