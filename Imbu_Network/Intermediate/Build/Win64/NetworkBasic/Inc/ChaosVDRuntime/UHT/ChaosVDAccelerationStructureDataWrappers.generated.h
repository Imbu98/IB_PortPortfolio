// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DataWrappers/ChaosVDAccelerationStructureDataWrappers.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CHAOSVDRUNTIME_ChaosVDAccelerationStructureDataWrappers_generated_h
#error "ChaosVDAccelerationStructureDataWrappers.generated.h already included, missing '#pragma once' in ChaosVDAccelerationStructureDataWrappers.h"
#endif
#define CHAOSVDRUNTIME_ChaosVDAccelerationStructureDataWrappers_generated_h

#define FID_Engine_Source_Runtime_Experimental_ChaosVisualDebugger_Public_DataWrappers_ChaosVDAccelerationStructureDataWrappers_h_32_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FChaosVDAccelerationStructureBase_Statics; \
	CHAOSVDRUNTIME_API static class UScriptStruct* StaticStruct(); \
	typedef FChaosVDWrapperDataBase Super;


template<> CHAOSVDRUNTIME_API UScriptStruct* StaticStruct<struct FChaosVDAccelerationStructureBase>();

#define FID_Engine_Source_Runtime_Experimental_ChaosVisualDebugger_Public_DataWrappers_ChaosVDAccelerationStructureDataWrappers_h_44_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FChaosVDBVCellElementDataWrapper_Statics; \
	CHAOSVDRUNTIME_API static class UScriptStruct* StaticStruct(); \
	typedef FChaosVDWrapperDataBase Super;


template<> CHAOSVDRUNTIME_API UScriptStruct* StaticStruct<struct FChaosVDBVCellElementDataWrapper>();

#define FID_Engine_Source_Runtime_Experimental_ChaosVisualDebugger_Public_DataWrappers_ChaosVDAccelerationStructureDataWrappers_h_66_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FChaosVDBoundingVolumeDataWrapper_Statics; \
	CHAOSVDRUNTIME_API static class UScriptStruct* StaticStruct(); \
	typedef FChaosVDAccelerationStructureBase Super;


template<> CHAOSVDRUNTIME_API UScriptStruct* StaticStruct<struct FChaosVDBoundingVolumeDataWrapper>();

#define FID_Engine_Source_Runtime_Experimental_ChaosVisualDebugger_Public_DataWrappers_ChaosVDAccelerationStructureDataWrappers_h_86_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FChaosVDAABBTreeNodeDataWrapper_Statics; \
	CHAOSVDRUNTIME_API static class UScriptStruct* StaticStruct(); \
	typedef FChaosVDWrapperDataBase Super;


template<> CHAOSVDRUNTIME_API UScriptStruct* StaticStruct<struct FChaosVDAABBTreeNodeDataWrapper>();

#define FID_Engine_Source_Runtime_Experimental_ChaosVisualDebugger_Public_DataWrappers_ChaosVDAccelerationStructureDataWrappers_h_110_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FChaosVDAABBTreePayloadBoundsElement_Statics; \
	CHAOSVDRUNTIME_API static class UScriptStruct* StaticStruct(); \
	typedef FChaosVDWrapperDataBase Super;


template<> CHAOSVDRUNTIME_API UScriptStruct* StaticStruct<struct FChaosVDAABBTreePayloadBoundsElement>();

#define FID_Engine_Source_Runtime_Experimental_ChaosVisualDebugger_Public_DataWrappers_ChaosVDAccelerationStructureDataWrappers_h_134_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FChaosVDAABBTreeLeafDataWrapper_Statics; \
	CHAOSVDRUNTIME_API static class UScriptStruct* StaticStruct(); \
	typedef FChaosVDWrapperDataBase Super;


template<> CHAOSVDRUNTIME_API UScriptStruct* StaticStruct<struct FChaosVDAABBTreeLeafDataWrapper>();

#define FID_Engine_Source_Runtime_Experimental_ChaosVisualDebugger_Public_DataWrappers_ChaosVDAccelerationStructureDataWrappers_h_153_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FChaosVDAABBTreeDataWrapper_Statics; \
	CHAOSVDRUNTIME_API static class UScriptStruct* StaticStruct(); \
	typedef FChaosVDAccelerationStructureBase Super;


template<> CHAOSVDRUNTIME_API UScriptStruct* StaticStruct<struct FChaosVDAABBTreeDataWrapper>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Experimental_ChaosVisualDebugger_Public_DataWrappers_ChaosVDAccelerationStructureDataWrappers_h


#define FOREACH_ENUM_ECHAOSVDAABBTREENODEFLAGS(op) \
	op(EChaosVDAABBTreeNodeFlags::None) \
	op(EChaosVDAABBTreeNodeFlags::IsLeaf) \
	op(EChaosVDAABBTreeNodeFlags::IsDirty) 

enum class EChaosVDAABBTreeNodeFlags : uint8;
template<> struct TIsUEnumClass<EChaosVDAABBTreeNodeFlags> { enum { Value = true }; };
template<> CHAOSVDRUNTIME_API UEnum* StaticEnum<EChaosVDAABBTreeNodeFlags>();

#define FOREACH_ENUM_ECHAOSVDACCELERATIONSTRUCTURETYPE(op) \
	op(EChaosVDAccelerationStructureType::BoundingVolume) \
	op(EChaosVDAccelerationStructureType::AABBTree) \
	op(EChaosVDAccelerationStructureType::AABBTreeBV) \
	op(EChaosVDAccelerationStructureType::Collection) \
	op(EChaosVDAccelerationStructureType::Unknown) 

enum class EChaosVDAccelerationStructureType : uint32;
template<> struct TIsUEnumClass<EChaosVDAccelerationStructureType> { enum { Value = true }; };
template<> CHAOSVDRUNTIME_API UEnum* StaticEnum<EChaosVDAccelerationStructureType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
