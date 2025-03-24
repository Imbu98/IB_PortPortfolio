// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Nodes/Input/AutoRotateInput2DCameraNode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAMEPLAYCAMERAS_AutoRotateInput2DCameraNode_generated_h
#error "AutoRotateInput2DCameraNode.generated.h already included, missing '#pragma once' in AutoRotateInput2DCameraNode.h"
#endif
#define GAMEPLAYCAMERAS_AutoRotateInput2DCameraNode_generated_h

#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Input_AutoRotateInput2DCameraNode_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAutoRotateInput2DCameraNode(); \
	friend struct Z_Construct_UClass_UAutoRotateInput2DCameraNode_Statics; \
public: \
	DECLARE_CLASS(UAutoRotateInput2DCameraNode, UInput2DCameraNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameplayCameras"), GAMEPLAYCAMERAS_API) \
	DECLARE_SERIALIZER(UAutoRotateInput2DCameraNode)


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Input_AutoRotateInput2DCameraNode_h_30_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAutoRotateInput2DCameraNode(UAutoRotateInput2DCameraNode&&); \
	UAutoRotateInput2DCameraNode(const UAutoRotateInput2DCameraNode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYCAMERAS_API, UAutoRotateInput2DCameraNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAutoRotateInput2DCameraNode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAutoRotateInput2DCameraNode) \
	GAMEPLAYCAMERAS_API virtual ~UAutoRotateInput2DCameraNode();


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Input_AutoRotateInput2DCameraNode_h_27_PROLOG
#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Input_AutoRotateInput2DCameraNode_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Input_AutoRotateInput2DCameraNode_h_30_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Input_AutoRotateInput2DCameraNode_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEPLAYCAMERAS_API UClass* StaticClass<class UAutoRotateInput2DCameraNode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Input_AutoRotateInput2DCameraNode_h


#define FOREACH_ENUM_ECAMERAAUTOROTATEDIRECTION(op) \
	op(ECameraAutoRotateDirection::Facing) \
	op(ECameraAutoRotateDirection::Movement) 

enum class ECameraAutoRotateDirection;
template<> struct TIsUEnumClass<ECameraAutoRotateDirection> { enum { Value = true }; };
template<> GAMEPLAYCAMERAS_API UEnum* StaticEnum<ECameraAutoRotateDirection>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
