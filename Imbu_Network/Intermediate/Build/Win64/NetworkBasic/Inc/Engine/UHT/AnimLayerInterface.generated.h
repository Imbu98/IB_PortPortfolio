// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Animation/AnimLayerInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_AnimLayerInterface_generated_h
#error "AnimLayerInterface.generated.h already included, missing '#pragma once' in AnimLayerInterface.h"
#endif
#define ENGINE_AnimLayerInterface_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimLayerInterface_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UAnimLayerInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAnimLayerInterface(UAnimLayerInterface&&); \
	UAnimLayerInterface(const UAnimLayerInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UAnimLayerInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimLayerInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimLayerInterface) \
	ENGINE_API virtual ~UAnimLayerInterface();


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimLayerInterface_h_14_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUAnimLayerInterface(); \
	friend struct Z_Construct_UClass_UAnimLayerInterface_Statics; \
public: \
	DECLARE_CLASS(UAnimLayerInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UAnimLayerInterface)


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimLayerInterface_h_14_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimLayerInterface_h_14_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimLayerInterface_h_14_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimLayerInterface_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IAnimLayerInterface() {} \
public: \
	typedef UAnimLayerInterface UClassType; \
	typedef IAnimLayerInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimLayerInterface_h_11_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimLayerInterface_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimLayerInterface_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UAnimLayerInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimLayerInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
