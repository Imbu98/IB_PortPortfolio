// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InterchangeActorFactoryNode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef INTERCHANGEFACTORYNODES_InterchangeActorFactoryNode_generated_h
#error "InterchangeActorFactoryNode.generated.h already included, missing '#pragma once' in InterchangeActorFactoryNode.h"
#endif
#define INTERCHANGEFACTORYNODES_InterchangeActorFactoryNode_generated_h

#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeActorFactoryNode_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetCustomMobility); \
	DECLARE_FUNCTION(execGetCustomMobility); \
	DECLARE_FUNCTION(execSetCustomActorClassName); \
	DECLARE_FUNCTION(execGetCustomActorClassName); \
	DECLARE_FUNCTION(execSetCustomLocalTransform); \
	DECLARE_FUNCTION(execGetCustomLocalTransform); \
	DECLARE_FUNCTION(execSetCustomGlobalTransform); \
	DECLARE_FUNCTION(execGetCustomGlobalTransform);


#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeActorFactoryNode_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeActorFactoryNode(); \
	friend struct Z_Construct_UClass_UInterchangeActorFactoryNode_Statics; \
public: \
	DECLARE_CLASS(UInterchangeActorFactoryNode, UInterchangeFactoryBaseNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeFactoryNodes"), NO_API) \
	DECLARE_SERIALIZER(UInterchangeActorFactoryNode)


#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeActorFactoryNode_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInterchangeActorFactoryNode(UInterchangeActorFactoryNode&&); \
	UInterchangeActorFactoryNode(const UInterchangeActorFactoryNode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInterchangeActorFactoryNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeActorFactoryNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInterchangeActorFactoryNode) \
	NO_API virtual ~UInterchangeActorFactoryNode();


#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeActorFactoryNode_h_9_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeActorFactoryNode_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeActorFactoryNode_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeActorFactoryNode_h_12_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeActorFactoryNode_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTERCHANGEFACTORYNODES_API UClass* StaticClass<class UInterchangeActorFactoryNode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeActorFactoryNode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
