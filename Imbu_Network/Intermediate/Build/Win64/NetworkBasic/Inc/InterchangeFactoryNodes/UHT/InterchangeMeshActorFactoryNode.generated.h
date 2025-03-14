// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InterchangeMeshActorFactoryNode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
 
#ifdef INTERCHANGEFACTORYNODES_InterchangeMeshActorFactoryNode_generated_h
#error "InterchangeMeshActorFactoryNode.generated.h already included, missing '#pragma once' in InterchangeMeshActorFactoryNode.h"
#endif
#define INTERCHANGEFACTORYNODES_InterchangeMeshActorFactoryNode_generated_h

#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeMeshActorFactoryNode_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetCustomGeometricTransform); \
	DECLARE_FUNCTION(execGetCustomGeometricTransform); \
	DECLARE_FUNCTION(execGetCustomAnimationAssetUidToPlay); \
	DECLARE_FUNCTION(execSetCustomAnimationAssetUidToPlay); \
	DECLARE_FUNCTION(execRemoveSlotMaterialDependencyUid); \
	DECLARE_FUNCTION(execSetSlotMaterialDependencyUid); \
	DECLARE_FUNCTION(execGetSlotMaterialDependencyUid); \
	DECLARE_FUNCTION(execGetSlotMaterialDependencies);


#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeMeshActorFactoryNode_h_12_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UInterchangeMeshActorFactoryNode, NO_API)


#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeMeshActorFactoryNode_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeMeshActorFactoryNode(); \
	friend struct Z_Construct_UClass_UInterchangeMeshActorFactoryNode_Statics; \
public: \
	DECLARE_CLASS(UInterchangeMeshActorFactoryNode, UInterchangeActorFactoryNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeFactoryNodes"), NO_API) \
	DECLARE_SERIALIZER(UInterchangeMeshActorFactoryNode) \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeMeshActorFactoryNode_h_12_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeMeshActorFactoryNode_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInterchangeMeshActorFactoryNode(UInterchangeMeshActorFactoryNode&&); \
	UInterchangeMeshActorFactoryNode(const UInterchangeMeshActorFactoryNode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInterchangeMeshActorFactoryNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeMeshActorFactoryNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInterchangeMeshActorFactoryNode) \
	NO_API virtual ~UInterchangeMeshActorFactoryNode();


#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeMeshActorFactoryNode_h_9_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeMeshActorFactoryNode_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeMeshActorFactoryNode_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeMeshActorFactoryNode_h_12_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeMeshActorFactoryNode_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTERCHANGEFACTORYNODES_API UClass* StaticClass<class UInterchangeMeshActorFactoryNode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeMeshActorFactoryNode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
