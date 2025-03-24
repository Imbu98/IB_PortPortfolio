// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LandscapeEditLayer.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LANDSCAPE_LandscapeEditLayer_generated_h
#error "LandscapeEditLayer.generated.h already included, missing '#pragma once' in LandscapeEditLayer.h"
#endif
#define LANDSCAPE_LandscapeEditLayer_generated_h

#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeEditLayer_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULandscapeEditLayerBase(); \
	friend struct Z_Construct_UClass_ULandscapeEditLayerBase_Statics; \
public: \
	DECLARE_CLASS(ULandscapeEditLayerBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Landscape"), LANDSCAPE_API) \
	DECLARE_SERIALIZER(ULandscapeEditLayerBase)


#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeEditLayer_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LANDSCAPE_API ULandscapeEditLayerBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULandscapeEditLayerBase(ULandscapeEditLayerBase&&); \
	ULandscapeEditLayerBase(const ULandscapeEditLayerBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LANDSCAPE_API, ULandscapeEditLayerBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULandscapeEditLayerBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULandscapeEditLayerBase) \
	LANDSCAPE_API virtual ~ULandscapeEditLayerBase();


#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeEditLayer_h_18_PROLOG
#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeEditLayer_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Landscape_Classes_LandscapeEditLayer_h_24_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Landscape_Classes_LandscapeEditLayer_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LANDSCAPE_API UClass* StaticClass<class ULandscapeEditLayerBase>();

#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeEditLayer_h_190_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULandscapeEditLayerPersistent(); \
	friend struct Z_Construct_UClass_ULandscapeEditLayerPersistent_Statics; \
public: \
	DECLARE_CLASS(ULandscapeEditLayerPersistent, ULandscapeEditLayerBase, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Landscape"), LANDSCAPE_API) \
	DECLARE_SERIALIZER(ULandscapeEditLayerPersistent) \
	virtual UObject* _getUObject() const override { return const_cast<ULandscapeEditLayerPersistent*>(this); }


#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeEditLayer_h_190_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LANDSCAPE_API ULandscapeEditLayerPersistent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULandscapeEditLayerPersistent(ULandscapeEditLayerPersistent&&); \
	ULandscapeEditLayerPersistent(const ULandscapeEditLayerPersistent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LANDSCAPE_API, ULandscapeEditLayerPersistent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULandscapeEditLayerPersistent); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULandscapeEditLayerPersistent) \
	LANDSCAPE_API virtual ~ULandscapeEditLayerPersistent();


#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeEditLayer_h_186_PROLOG
#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeEditLayer_h_190_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Landscape_Classes_LandscapeEditLayer_h_190_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Landscape_Classes_LandscapeEditLayer_h_190_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LANDSCAPE_API UClass* StaticClass<class ULandscapeEditLayerPersistent>();

#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeEditLayer_h_219_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULandscapeEditLayer(); \
	friend struct Z_Construct_UClass_ULandscapeEditLayer_Statics; \
public: \
	DECLARE_CLASS(ULandscapeEditLayer, ULandscapeEditLayerPersistent, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Landscape"), LANDSCAPE_API) \
	DECLARE_SERIALIZER(ULandscapeEditLayer)


#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeEditLayer_h_219_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LANDSCAPE_API ULandscapeEditLayer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULandscapeEditLayer(ULandscapeEditLayer&&); \
	ULandscapeEditLayer(const ULandscapeEditLayer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LANDSCAPE_API, ULandscapeEditLayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULandscapeEditLayer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULandscapeEditLayer) \
	LANDSCAPE_API virtual ~ULandscapeEditLayer();


#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeEditLayer_h_216_PROLOG
#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeEditLayer_h_219_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Landscape_Classes_LandscapeEditLayer_h_219_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Landscape_Classes_LandscapeEditLayer_h_219_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LANDSCAPE_API UClass* StaticClass<class ULandscapeEditLayer>();

#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeEditLayer_h_240_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULandscapeEditLayerProcedural(); \
	friend struct Z_Construct_UClass_ULandscapeEditLayerProcedural_Statics; \
public: \
	DECLARE_CLASS(ULandscapeEditLayerProcedural, ULandscapeEditLayerBase, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Landscape"), LANDSCAPE_API) \
	DECLARE_SERIALIZER(ULandscapeEditLayerProcedural)


#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeEditLayer_h_240_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LANDSCAPE_API ULandscapeEditLayerProcedural(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULandscapeEditLayerProcedural(ULandscapeEditLayerProcedural&&); \
	ULandscapeEditLayerProcedural(const ULandscapeEditLayerProcedural&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LANDSCAPE_API, ULandscapeEditLayerProcedural); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULandscapeEditLayerProcedural); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULandscapeEditLayerProcedural) \
	LANDSCAPE_API virtual ~ULandscapeEditLayerProcedural();


#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeEditLayer_h_237_PROLOG
#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeEditLayer_h_240_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Landscape_Classes_LandscapeEditLayer_h_240_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Landscape_Classes_LandscapeEditLayer_h_240_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LANDSCAPE_API UClass* StaticClass<class ULandscapeEditLayerProcedural>();

#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeEditLayer_h_256_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULandscapeEditLayerSplines(); \
	friend struct Z_Construct_UClass_ULandscapeEditLayerSplines_Statics; \
public: \
	DECLARE_CLASS(ULandscapeEditLayerSplines, ULandscapeEditLayerPersistent, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Landscape"), LANDSCAPE_API) \
	DECLARE_SERIALIZER(ULandscapeEditLayerSplines)


#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeEditLayer_h_256_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LANDSCAPE_API ULandscapeEditLayerSplines(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULandscapeEditLayerSplines(ULandscapeEditLayerSplines&&); \
	ULandscapeEditLayerSplines(const ULandscapeEditLayerSplines&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LANDSCAPE_API, ULandscapeEditLayerSplines); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULandscapeEditLayerSplines); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULandscapeEditLayerSplines) \
	LANDSCAPE_API virtual ~ULandscapeEditLayerSplines();


#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeEditLayer_h_253_PROLOG
#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeEditLayer_h_256_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Landscape_Classes_LandscapeEditLayer_h_256_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Landscape_Classes_LandscapeEditLayer_h_256_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LANDSCAPE_API UClass* StaticClass<class ULandscapeEditLayerSplines>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Landscape_Classes_LandscapeEditLayer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
