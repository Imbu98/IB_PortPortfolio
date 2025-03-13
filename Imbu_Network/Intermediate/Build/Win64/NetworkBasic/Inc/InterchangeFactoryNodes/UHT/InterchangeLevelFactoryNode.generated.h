// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InterchangeLevelFactoryNode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
#ifdef INTERCHANGEFACTORYNODES_InterchangeLevelFactoryNode_generated_h
#error "InterchangeLevelFactoryNode.generated.h already included, missing '#pragma once' in InterchangeLevelFactoryNode.h"
#endif
#define INTERCHANGEFACTORYNODES_InterchangeLevelFactoryNode_generated_h

#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeLevelFactoryNode_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetCustomCreateWorldPartitionLevel); \
	DECLARE_FUNCTION(execGetCustomCreateWorldPartitionLevel); \
	DECLARE_FUNCTION(execSetCustomShouldCreateLevel); \
	DECLARE_FUNCTION(execGetCustomShouldCreateLevel); \
	DECLARE_FUNCTION(execSetCustomSceneImportAssetFactoryNodeUid); \
	DECLARE_FUNCTION(execGetCustomSceneImportAssetFactoryNodeUid); \
	DECLARE_FUNCTION(execRemoveCustomActorFactoryNodeUid); \
	DECLARE_FUNCTION(execAddCustomActorFactoryNodeUid); \
	DECLARE_FUNCTION(execGetCustomActorFactoryNodeUid); \
	DECLARE_FUNCTION(execGetCustomActorFactoryNodeUids); \
	DECLARE_FUNCTION(execGetCustomActorFactoryNodeUidCount); \
	DECLARE_FUNCTION(execGetObjectClass);


#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeLevelFactoryNode_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeLevelFactoryNode(); \
	friend struct Z_Construct_UClass_UInterchangeLevelFactoryNode_Statics; \
public: \
	DECLARE_CLASS(UInterchangeLevelFactoryNode, UInterchangeFactoryBaseNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeFactoryNodes"), NO_API) \
	DECLARE_SERIALIZER(UInterchangeLevelFactoryNode)


#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeLevelFactoryNode_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInterchangeLevelFactoryNode(UInterchangeLevelFactoryNode&&); \
	UInterchangeLevelFactoryNode(const UInterchangeLevelFactoryNode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInterchangeLevelFactoryNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeLevelFactoryNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInterchangeLevelFactoryNode) \
	NO_API virtual ~UInterchangeLevelFactoryNode();


#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeLevelFactoryNode_h_10_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeLevelFactoryNode_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeLevelFactoryNode_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeLevelFactoryNode_h_13_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeLevelFactoryNode_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTERCHANGEFACTORYNODES_API UClass* StaticClass<class UInterchangeLevelFactoryNode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeLevelFactoryNode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
