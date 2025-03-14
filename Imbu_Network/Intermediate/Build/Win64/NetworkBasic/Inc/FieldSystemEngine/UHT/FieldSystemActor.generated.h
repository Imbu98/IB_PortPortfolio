// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Field/FieldSystemActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FIELDSYSTEMENGINE_FieldSystemActor_generated_h
#error "FieldSystemActor.generated.h already included, missing '#pragma once' in FieldSystemActor.h"
#endif
#define FIELDSYSTEMENGINE_FieldSystemActor_generated_h

#define FID_Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemActor_h_23_INCLASS \
private: \
	static void StaticRegisterNativesAFieldSystemActor(); \
	friend struct Z_Construct_UClass_AFieldSystemActor_Statics; \
public: \
	DECLARE_CLASS(AFieldSystemActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FieldSystemEngine"), FIELDSYSTEMENGINE_API) \
	DECLARE_SERIALIZER(AFieldSystemActor)


#define FID_Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemActor_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	FIELDSYSTEMENGINE_API AFieldSystemActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFieldSystemActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(FIELDSYSTEMENGINE_API, AFieldSystemActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFieldSystemActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AFieldSystemActor(AFieldSystemActor&&); \
	AFieldSystemActor(const AFieldSystemActor&); \
public: \
	FIELDSYSTEMENGINE_API virtual ~AFieldSystemActor();


#define FID_Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemActor_h_20_PROLOG
#define FID_Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemActor_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemActor_h_23_INCLASS \
	FID_Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemActor_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIELDSYSTEMENGINE_API UClass* StaticClass<class AFieldSystemActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
