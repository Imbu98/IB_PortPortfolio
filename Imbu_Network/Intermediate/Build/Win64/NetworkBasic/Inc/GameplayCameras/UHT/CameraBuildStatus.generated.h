// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Core/CameraBuildStatus.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAMEPLAYCAMERAS_CameraBuildStatus_generated_h
#error "CameraBuildStatus.generated.h already included, missing '#pragma once' in CameraBuildStatus.h"
#endif
#define GAMEPLAYCAMERAS_CameraBuildStatus_generated_h

#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraBuildStatus_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEPLAYCAMERAS_API UHasCameraBuildStatus(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UHasCameraBuildStatus(UHasCameraBuildStatus&&); \
	UHasCameraBuildStatus(const UHasCameraBuildStatus&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYCAMERAS_API, UHasCameraBuildStatus); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHasCameraBuildStatus); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHasCameraBuildStatus) \
	GAMEPLAYCAMERAS_API virtual ~UHasCameraBuildStatus();


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraBuildStatus_h_25_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUHasCameraBuildStatus(); \
	friend struct Z_Construct_UClass_UHasCameraBuildStatus_Statics; \
public: \
	DECLARE_CLASS(UHasCameraBuildStatus, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/GameplayCameras"), GAMEPLAYCAMERAS_API) \
	DECLARE_SERIALIZER(UHasCameraBuildStatus)


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraBuildStatus_h_25_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraBuildStatus_h_25_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraBuildStatus_h_25_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraBuildStatus_h_25_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IHasCameraBuildStatus() {} \
public: \
	typedef UHasCameraBuildStatus UClassType; \
	typedef IHasCameraBuildStatus ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraBuildStatus_h_22_PROLOG
#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraBuildStatus_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraBuildStatus_h_25_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEPLAYCAMERAS_API UClass* StaticClass<class UHasCameraBuildStatus>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraBuildStatus_h


#define FOREACH_ENUM_ECAMERABUILDSTATUS(op) \
	op(ECameraBuildStatus::Clean) \
	op(ECameraBuildStatus::CleanWithWarnings) \
	op(ECameraBuildStatus::WithErrors) \
	op(ECameraBuildStatus::Dirty) 

enum class ECameraBuildStatus : uint8;
template<> struct TIsUEnumClass<ECameraBuildStatus> { enum { Value = true }; };
template<> GAMEPLAYCAMERAS_API UEnum* StaticEnum<ECameraBuildStatus>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
