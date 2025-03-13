// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Net/Iris/ReplicationSystem/NetActorFactory.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_NetActorFactory_generated_h
#error "NetActorFactory.generated.h already included, missing '#pragma once' in NetActorFactory.h"
#endif
#define ENGINE_NetActorFactory_generated_h

#define FID_Engine_Source_Runtime_Engine_Public_Net_Iris_ReplicationSystem_NetActorFactory_h_107_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNetActorFactory(); \
	friend struct Z_Construct_UClass_UNetActorFactory_Statics; \
public: \
	DECLARE_CLASS(UNetActorFactory, UNetObjectFactory, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UNetActorFactory)


#define FID_Engine_Source_Runtime_Engine_Public_Net_Iris_ReplicationSystem_NetActorFactory_h_107_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNetActorFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNetActorFactory(UNetActorFactory&&); \
	UNetActorFactory(const UNetActorFactory&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNetActorFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNetActorFactory); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNetActorFactory) \
	NO_API virtual ~UNetActorFactory();


#define FID_Engine_Source_Runtime_Engine_Public_Net_Iris_ReplicationSystem_NetActorFactory_h_104_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Net_Iris_ReplicationSystem_NetActorFactory_h_107_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Net_Iris_ReplicationSystem_NetActorFactory_h_107_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Net_Iris_ReplicationSystem_NetActorFactory_h_107_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UNetActorFactory>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Net_Iris_ReplicationSystem_NetActorFactory_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
