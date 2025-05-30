// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/Actor/ActorElementWorldInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_ActorElementWorldInterface_generated_h
#error "ActorElementWorldInterface.generated.h already included, missing '#pragma once' in ActorElementWorldInterface.h"
#endif
#define ENGINE_ActorElementWorldInterface_generated_h

#define FID_Engine_Source_Runtime_Engine_Public_Elements_Actor_ActorElementWorldInterface_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUActorElementWorldInterface(); \
	friend struct Z_Construct_UClass_UActorElementWorldInterface_Statics; \
public: \
	DECLARE_CLASS(UActorElementWorldInterface, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UActorElementWorldInterface) \
	virtual UObject* _getUObject() const override { return const_cast<UActorElementWorldInterface*>(this); }


#define FID_Engine_Source_Runtime_Engine_Public_Elements_Actor_ActorElementWorldInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UActorElementWorldInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UActorElementWorldInterface(UActorElementWorldInterface&&); \
	UActorElementWorldInterface(const UActorElementWorldInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UActorElementWorldInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActorElementWorldInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UActorElementWorldInterface) \
	ENGINE_API virtual ~UActorElementWorldInterface();


#define FID_Engine_Source_Runtime_Engine_Public_Elements_Actor_ActorElementWorldInterface_h_10_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Elements_Actor_ActorElementWorldInterface_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Elements_Actor_ActorElementWorldInterface_h_13_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Elements_Actor_ActorElementWorldInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UActorElementWorldInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Elements_Actor_ActorElementWorldInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
