// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Dataflow/GeometryCollectionTransferVertexScalarAttributeDepNode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GEOMETRYCOLLECTIONDEPNODES_GeometryCollectionTransferVertexScalarAttributeDepNode_generated_h
#error "GeometryCollectionTransferVertexScalarAttributeDepNode.generated.h already included, missing '#pragma once' in GeometryCollectionTransferVertexScalarAttributeDepNode.h"
#endif
#define GEOMETRYCOLLECTIONDEPNODES_GeometryCollectionTransferVertexScalarAttributeDepNode_generated_h

#define FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionDepNodes_Private_Dataflow_GeometryCollectionTransferVertexScalarAttributeDepNode_h_73_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGeometryCollectionTransferVertexScalarAttributeNode_Statics; \
	GEOMETRYCOLLECTIONDEPNODES_API static class UScriptStruct* StaticStruct(); \
	typedef FDataflowNode Super;


template<> GEOMETRYCOLLECTIONDEPNODES_API UScriptStruct* StaticStruct<struct FGeometryCollectionTransferVertexScalarAttributeNode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionDepNodes_Private_Dataflow_GeometryCollectionTransferVertexScalarAttributeDepNode_h


#define FOREACH_ENUM_EDATAFLOWTRANSFERNODEFALLOFF(op) \
	op(EDataflowTransferNodeFalloff::Dataflow_Transfer_Squared) \
	op(EDataflowTransferNodeFalloff::Dataflow_Transfer_Linear) \
	op(EDataflowTransferNodeFalloff::Dataflow_Transfer_None) \
	op(EDataflowTransferNodeFalloff::Dataflow_Transfer_Dataflow_Max) 

enum class EDataflowTransferNodeFalloff : uint8;
template<> struct TIsUEnumClass<EDataflowTransferNodeFalloff> { enum { Value = true }; };
template<> GEOMETRYCOLLECTIONDEPNODES_API UEnum* StaticEnum<EDataflowTransferNodeFalloff>();

#define FOREACH_ENUM_EDATAFLOWTRANSFERNODESAMPLESCALE(op) \
	op(EDataflowTransferNodeSampleScale::Dataflow_Transfer_Component_Edge) \
	op(EDataflowTransferNodeSampleScale::Dataflow_Transfer_Asset_Edge) \
	op(EDataflowTransferNodeSampleScale::Dataflow_Transfer_Asset_Bound) \
	op(EDataflowTransferNodeSampleScale::Dataflow_Transfer_Dataflow_Max) 

enum class EDataflowTransferNodeSampleScale : uint8;
template<> struct TIsUEnumClass<EDataflowTransferNodeSampleScale> { enum { Value = true }; };
template<> GEOMETRYCOLLECTIONDEPNODES_API UEnum* StaticEnum<EDataflowTransferNodeSampleScale>();

#define FOREACH_ENUM_EDATAFLOWTRANSFERNODEBOUNDINGVOLUME(op) \
	op(EDataflowTransferNodeBoundingVolume::Dataflow_Transfer_Vertex) \
	op(EDataflowTransferNodeBoundingVolume::Dataflow_Transfer_Triangle) \
	op(EDataflowTransferNodeBoundingVolume::Dataflow_Transfer_Dataflow_Max) 

enum class EDataflowTransferNodeBoundingVolume : uint8;
template<> struct TIsUEnumClass<EDataflowTransferNodeBoundingVolume> { enum { Value = true }; };
template<> GEOMETRYCOLLECTIONDEPNODES_API UEnum* StaticEnum<EDataflowTransferNodeBoundingVolume>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
