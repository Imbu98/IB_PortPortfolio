// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Nodes/Collision/CollisionPushCameraNode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAMEPLAYCAMERAS_CollisionPushCameraNode_generated_h
#error "CollisionPushCameraNode.generated.h already included, missing '#pragma once' in CollisionPushCameraNode.h"
#endif
#define GAMEPLAYCAMERAS_CollisionPushCameraNode_generated_h

#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Collision_CollisionPushCameraNode_h_68_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCollisionPushCameraNode(); \
	friend struct Z_Construct_UClass_UCollisionPushCameraNode_Statics; \
public: \
	DECLARE_CLASS(UCollisionPushCameraNode, UCameraNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameplayCameras"), GAMEPLAYCAMERAS_API) \
	DECLARE_SERIALIZER(UCollisionPushCameraNode)


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Collision_CollisionPushCameraNode_h_68_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCollisionPushCameraNode(UCollisionPushCameraNode&&); \
	UCollisionPushCameraNode(const UCollisionPushCameraNode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYCAMERAS_API, UCollisionPushCameraNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCollisionPushCameraNode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCollisionPushCameraNode) \
	GAMEPLAYCAMERAS_API virtual ~UCollisionPushCameraNode();


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Collision_CollisionPushCameraNode_h_65_PROLOG
#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Collision_CollisionPushCameraNode_h_68_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Collision_CollisionPushCameraNode_h_68_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Collision_CollisionPushCameraNode_h_68_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEPLAYCAMERAS_API UClass* StaticClass<class UCollisionPushCameraNode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Collision_CollisionPushCameraNode_h


#define FOREACH_ENUM_ECOLLISIONSAFEPOSITION(op) \
	op(ECollisionSafePosition::ActiveContext) \
	op(ECollisionSafePosition::OwningContext) \
	op(ECollisionSafePosition::Pivot) \
	op(ECollisionSafePosition::Pawn) 

enum class ECollisionSafePosition : uint8;
template<> struct TIsUEnumClass<ECollisionSafePosition> { enum { Value = true }; };
template<> GAMEPLAYCAMERAS_API UEnum* StaticEnum<ECollisionSafePosition>();

#define FOREACH_ENUM_ECOLLISIONSAFEPOSITIONOFFSETSPACE(op) \
	op(ECollisionSafePositionOffsetSpace::ActiveContext) \
	op(ECollisionSafePositionOffsetSpace::OwningContext) \
	op(ECollisionSafePositionOffsetSpace::Pivot) \
	op(ECollisionSafePositionOffsetSpace::CameraPose) \
	op(ECollisionSafePositionOffsetSpace::Pawn) 

enum class ECollisionSafePositionOffsetSpace : uint8;
template<> struct TIsUEnumClass<ECollisionSafePositionOffsetSpace> { enum { Value = true }; };
template<> GAMEPLAYCAMERAS_API UEnum* StaticEnum<ECollisionSafePositionOffsetSpace>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
