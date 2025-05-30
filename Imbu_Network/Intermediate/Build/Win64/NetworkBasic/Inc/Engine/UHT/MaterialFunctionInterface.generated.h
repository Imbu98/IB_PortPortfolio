// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialFunctionInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_MaterialFunctionInterface_generated_h
#error "MaterialFunctionInterface.generated.h already included, missing '#pragma once' in MaterialFunctionInterface.h"
#endif
#define ENGINE_MaterialFunctionInterface_generated_h

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialFunctionInterface_h_47_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UMaterialFunctionInterfaceEditorOnlyData, NO_API)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialFunctionInterface_h_47_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMaterialFunctionInterfaceEditorOnlyData(); \
	friend struct Z_Construct_UClass_UMaterialFunctionInterfaceEditorOnlyData_Statics; \
public: \
	DECLARE_CLASS(UMaterialFunctionInterfaceEditorOnlyData, UObject, COMPILED_IN_FLAGS(0 | CLASS_Optional), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UMaterialFunctionInterfaceEditorOnlyData) \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialFunctionInterface_h_47_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialFunctionInterface_h_47_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMaterialFunctionInterfaceEditorOnlyData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMaterialFunctionInterfaceEditorOnlyData(UMaterialFunctionInterfaceEditorOnlyData&&); \
	UMaterialFunctionInterfaceEditorOnlyData(const UMaterialFunctionInterfaceEditorOnlyData&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMaterialFunctionInterfaceEditorOnlyData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialFunctionInterfaceEditorOnlyData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialFunctionInterfaceEditorOnlyData) \
	NO_API virtual ~UMaterialFunctionInterfaceEditorOnlyData();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialFunctionInterface_h_44_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialFunctionInterface_h_47_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialFunctionInterface_h_47_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialFunctionInterface_h_47_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UMaterialFunctionInterfaceEditorOnlyData>();

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialFunctionInterface_h_61_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialFunctionInterface(); \
	friend struct Z_Construct_UClass_UMaterialFunctionInterface_Statics; \
public: \
	DECLARE_CLASS(UMaterialFunctionInterface, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UMaterialFunctionInterface)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialFunctionInterface_h_61_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialFunctionInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialFunctionInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialFunctionInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialFunctionInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMaterialFunctionInterface(UMaterialFunctionInterface&&); \
	UMaterialFunctionInterface(const UMaterialFunctionInterface&); \
public: \
	ENGINE_API virtual ~UMaterialFunctionInterface();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialFunctionInterface_h_58_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialFunctionInterface_h_61_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialFunctionInterface_h_61_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialFunctionInterface_h_61_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UMaterialFunctionInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialFunctionInterface_h


#define FOREACH_ENUM_EMATERIALFUNCTIONUSAGE(op) \
	op(EMaterialFunctionUsage::Default) \
	op(EMaterialFunctionUsage::MaterialLayer) \
	op(EMaterialFunctionUsage::MaterialLayerBlend) 

enum class EMaterialFunctionUsage : uint8;
template<> struct TIsUEnumClass<EMaterialFunctionUsage> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<EMaterialFunctionUsage>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
