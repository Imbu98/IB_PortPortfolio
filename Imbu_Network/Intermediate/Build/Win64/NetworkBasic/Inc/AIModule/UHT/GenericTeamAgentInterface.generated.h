// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GenericTeamAgentInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AIMODULE_GenericTeamAgentInterface_generated_h
#error "GenericTeamAgentInterface.generated.h already included, missing '#pragma once' in GenericTeamAgentInterface.h"
#endif
#define AIMODULE_GenericTeamAgentInterface_generated_h

#define FID_Engine_Source_Runtime_AIModule_Classes_GenericTeamAgentInterface_h_25_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGenericTeamId_Statics; \
	AIMODULE_API static class UScriptStruct* StaticStruct();


template<> AIMODULE_API UScriptStruct* StaticStruct<struct FGenericTeamId>();

#define FID_Engine_Source_Runtime_AIModule_Classes_GenericTeamAgentInterface_h_78_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AIMODULE_API UGenericTeamAgentInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGenericTeamAgentInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AIMODULE_API, UGenericTeamAgentInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGenericTeamAgentInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGenericTeamAgentInterface(UGenericTeamAgentInterface&&); \
	UGenericTeamAgentInterface(const UGenericTeamAgentInterface&); \
public: \
	AIMODULE_API virtual ~UGenericTeamAgentInterface();


#define FID_Engine_Source_Runtime_AIModule_Classes_GenericTeamAgentInterface_h_78_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUGenericTeamAgentInterface(); \
	friend struct Z_Construct_UClass_UGenericTeamAgentInterface_Statics; \
public: \
	DECLARE_CLASS(UGenericTeamAgentInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/AIModule"), AIMODULE_API) \
	DECLARE_SERIALIZER(UGenericTeamAgentInterface)


#define FID_Engine_Source_Runtime_AIModule_Classes_GenericTeamAgentInterface_h_78_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_AIModule_Classes_GenericTeamAgentInterface_h_78_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_AIModule_Classes_GenericTeamAgentInterface_h_78_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_AIModule_Classes_GenericTeamAgentInterface_h_78_INCLASS_IINTERFACE \
protected: \
	virtual ~IGenericTeamAgentInterface() {} \
public: \
	typedef UGenericTeamAgentInterface UClassType; \
	typedef IGenericTeamAgentInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_AIModule_Classes_GenericTeamAgentInterface_h_75_PROLOG
#define FID_Engine_Source_Runtime_AIModule_Classes_GenericTeamAgentInterface_h_83_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_GenericTeamAgentInterface_h_78_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AIMODULE_API UClass* StaticClass<class UGenericTeamAgentInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AIModule_Classes_GenericTeamAgentInterface_h


#define FOREACH_ENUM_ETEAMATTITUDE(op) \
	op(ETeamAttitude::Friendly) \
	op(ETeamAttitude::Neutral) \
	op(ETeamAttitude::Hostile) 

namespace ETeamAttitude { enum Type : int; }
template<> AIMODULE_API UEnum* StaticEnum<ETeamAttitude::Type>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
