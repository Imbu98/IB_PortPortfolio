// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InterchangeLevelInstanceActorFactoryNode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef INTERCHANGEFACTORYNODES_InterchangeLevelInstanceActorFactoryNode_generated_h
#error "InterchangeLevelInstanceActorFactoryNode.generated.h already included, missing '#pragma once' in InterchangeLevelInstanceActorFactoryNode.h"
#endif
#define INTERCHANGEFACTORYNODES_InterchangeLevelInstanceActorFactoryNode_generated_h

#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeLevelInstanceActorFactoryNode_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetCustomLevelReference); \
	DECLARE_FUNCTION(execGetCustomLevelReference);


#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeLevelInstanceActorFactoryNode_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeLevelInstanceActorFactoryNode(); \
	friend struct Z_Construct_UClass_UInterchangeLevelInstanceActorFactoryNode_Statics; \
public: \
	DECLARE_CLASS(UInterchangeLevelInstanceActorFactoryNode, UInterchangeActorFactoryNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeFactoryNodes"), NO_API) \
	DECLARE_SERIALIZER(UInterchangeLevelInstanceActorFactoryNode)


#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeLevelInstanceActorFactoryNode_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInterchangeLevelInstanceActorFactoryNode(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInterchangeLevelInstanceActorFactoryNode(UInterchangeLevelInstanceActorFactoryNode&&); \
	UInterchangeLevelInstanceActorFactoryNode(const UInterchangeLevelInstanceActorFactoryNode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInterchangeLevelInstanceActorFactoryNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeLevelInstanceActorFactoryNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInterchangeLevelInstanceActorFactoryNode) \
	NO_API virtual ~UInterchangeLevelInstanceActorFactoryNode();


#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeLevelInstanceActorFactoryNode_h_12_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeLevelInstanceActorFactoryNode_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeLevelInstanceActorFactoryNode_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeLevelInstanceActorFactoryNode_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeLevelInstanceActorFactoryNode_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTERCHANGEFACTORYNODES_API UClass* StaticClass<class UInterchangeLevelInstanceActorFactoryNode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeLevelInstanceActorFactoryNode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
