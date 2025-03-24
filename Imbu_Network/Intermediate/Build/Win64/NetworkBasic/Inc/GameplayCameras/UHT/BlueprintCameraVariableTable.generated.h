// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameFramework/BlueprintCameraVariableTable.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UBooleanCameraVariable;
class UDoubleCameraVariable;
class UFloatCameraVariable;
class UInteger32CameraVariable;
class URotator3dCameraVariable;
class UTransform3dCameraVariable;
class UVector2dCameraVariable;
class UVector3dCameraVariable;
class UVector4dCameraVariable;
struct FBlueprintCameraVariableTable;
#ifdef GAMEPLAYCAMERAS_BlueprintCameraVariableTable_generated_h
#error "BlueprintCameraVariableTable.generated.h already included, missing '#pragma once' in BlueprintCameraVariableTable.h"
#endif
#define GAMEPLAYCAMERAS_BlueprintCameraVariableTable_generated_h

#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_BlueprintCameraVariableTable_h_34_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBlueprintCameraVariableTable_Statics; \
	static class UScriptStruct* StaticStruct();


template<> GAMEPLAYCAMERAS_API UScriptStruct* StaticStruct<struct FBlueprintCameraVariableTable>();

#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_BlueprintCameraVariableTable_h_63_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetTransformCameraVariable); \
	DECLARE_FUNCTION(execSetRotatorCameraVariable); \
	DECLARE_FUNCTION(execSetVector4CameraVariable); \
	DECLARE_FUNCTION(execSetVector3CameraVariable); \
	DECLARE_FUNCTION(execSetVector2CameraVariable); \
	DECLARE_FUNCTION(execSetDoubleCameraVariable); \
	DECLARE_FUNCTION(execSetFloatCameraVariable); \
	DECLARE_FUNCTION(execSetInteger32CameraVariable); \
	DECLARE_FUNCTION(execSetBooleanCameraVariable); \
	DECLARE_FUNCTION(execGetTransformCameraVariable); \
	DECLARE_FUNCTION(execGetRotatorCameraVariable); \
	DECLARE_FUNCTION(execGetVector4CameraVariable); \
	DECLARE_FUNCTION(execGetVector3CameraVariable); \
	DECLARE_FUNCTION(execGetVector2CameraVariable); \
	DECLARE_FUNCTION(execGetDoubleCameraVariable); \
	DECLARE_FUNCTION(execGetFloatCameraVariable); \
	DECLARE_FUNCTION(execGetInteger32CameraVariable); \
	DECLARE_FUNCTION(execGetBooleanCameraVariable);


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_BlueprintCameraVariableTable_h_63_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBlueprintCameraVariableTableFunctionLibrary(); \
	friend struct Z_Construct_UClass_UBlueprintCameraVariableTableFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UBlueprintCameraVariableTableFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameplayCameras"), NO_API) \
	DECLARE_SERIALIZER(UBlueprintCameraVariableTableFunctionLibrary)


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_BlueprintCameraVariableTable_h_63_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBlueprintCameraVariableTableFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UBlueprintCameraVariableTableFunctionLibrary(UBlueprintCameraVariableTableFunctionLibrary&&); \
	UBlueprintCameraVariableTableFunctionLibrary(const UBlueprintCameraVariableTableFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBlueprintCameraVariableTableFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlueprintCameraVariableTableFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlueprintCameraVariableTableFunctionLibrary) \
	NO_API virtual ~UBlueprintCameraVariableTableFunctionLibrary();


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_BlueprintCameraVariableTable_h_60_PROLOG
#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_BlueprintCameraVariableTable_h_63_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_BlueprintCameraVariableTable_h_63_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_BlueprintCameraVariableTable_h_63_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_BlueprintCameraVariableTable_h_63_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEPLAYCAMERAS_API UClass* StaticClass<class UBlueprintCameraVariableTableFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_BlueprintCameraVariableTable_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
