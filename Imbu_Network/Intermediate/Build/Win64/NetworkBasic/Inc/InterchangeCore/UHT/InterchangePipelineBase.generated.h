// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InterchangePipelineBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UInterchangeBaseNodeContainer;
class UInterchangeSourceData;
class UObject;
struct FInterchangePipelinePropertyStates;
#ifdef INTERCHANGECORE_InterchangePipelineBase_generated_h
#error "InterchangePipelineBase.generated.h already included, missing '#pragma once' in InterchangePipelineBase.h"
#endif
#define INTERCHANGECORE_InterchangePipelineBase_generated_h

#define FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangePipelineBase_h_61_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInterchangePipelineContextParams_Statics; \
	INTERCHANGECORE_API static class UScriptStruct* StaticStruct();


template<> INTERCHANGECORE_API UScriptStruct* StaticStruct<struct FInterchangePipelineContextParams>();

#define FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangePipelineBase_h_73_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInterchangePipelinePropertyStatePerContext_Statics; \
	INTERCHANGECORE_API static class UScriptStruct* StaticStruct();


template<> INTERCHANGECORE_API UScriptStruct* StaticStruct<struct FInterchangePipelinePropertyStatePerContext>();

#define FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangePipelineBase_h_83_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInterchangePipelinePropertyStates_Statics; \
	INTERCHANGECORE_API static class UScriptStruct* StaticStruct();


template<> INTERCHANGECORE_API UScriptStruct* StaticStruct<struct FInterchangePipelinePropertyStates>();

#define FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangePipelineBase_h_206_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execFindOrAddPropertyStates); \
	DECLARE_FUNCTION(execDoesPropertyStatesExist); \
	DECLARE_FUNCTION(execScriptedSetReimportSourceIndex); \
	DECLARE_FUNCTION(execScriptedExecuteExportPipeline); \
	DECLARE_FUNCTION(execScriptedExecutePostBroadcastPipeline); \
	DECLARE_FUNCTION(execScriptedExecutePostImportPipeline); \
	DECLARE_FUNCTION(execScriptedExecutePostFactoryPipeline); \
	DECLARE_FUNCTION(execScriptedExecutePipeline); \
	DECLARE_FUNCTION(execScriptedGetPipelineDisplayName);


#define FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangePipelineBase_h_206_CALLBACK_WRAPPERS
#define FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangePipelineBase_h_206_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangePipelineBase(); \
	friend struct Z_Construct_UClass_UInterchangePipelineBase_Statics; \
public: \
	DECLARE_CLASS(UInterchangePipelineBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/InterchangeCore"), INTERCHANGECORE_API) \
	DECLARE_SERIALIZER(UInterchangePipelineBase)


#define FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangePipelineBase_h_206_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERCHANGECORE_API UInterchangePipelineBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInterchangePipelineBase(UInterchangePipelineBase&&); \
	UInterchangePipelineBase(const UInterchangePipelineBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERCHANGECORE_API, UInterchangePipelineBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangePipelineBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterchangePipelineBase) \
	INTERCHANGECORE_API virtual ~UInterchangePipelineBase();


#define FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangePipelineBase_h_203_PROLOG
#define FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangePipelineBase_h_206_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangePipelineBase_h_206_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangePipelineBase_h_206_CALLBACK_WRAPPERS \
	FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangePipelineBase_h_206_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangePipelineBase_h_206_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTERCHANGECORE_API UClass* StaticClass<class UInterchangePipelineBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangePipelineBase_h


#define FOREACH_ENUM_EINTERCHANGEPIPELINETASK(op) \
	op(EInterchangePipelineTask::PostTranslator) \
	op(EInterchangePipelineTask::PostFactory) \
	op(EInterchangePipelineTask::PostImport) \
	op(EInterchangePipelineTask::Export) 

enum class EInterchangePipelineTask : uint8;
template<> struct TIsUEnumClass<EInterchangePipelineTask> { enum { Value = true }; };
template<> INTERCHANGECORE_API UEnum* StaticEnum<EInterchangePipelineTask>();

#define FOREACH_ENUM_EINTERCHANGEPIPELINECONTEXT(op) \
	op(EInterchangePipelineContext::None) \
	op(EInterchangePipelineContext::AssetImport) \
	op(EInterchangePipelineContext::AssetReimport) \
	op(EInterchangePipelineContext::SceneImport) \
	op(EInterchangePipelineContext::SceneReimport) \
	op(EInterchangePipelineContext::AssetCustomLODImport) \
	op(EInterchangePipelineContext::AssetCustomLODReimport) \
	op(EInterchangePipelineContext::AssetAlternateSkinningImport) \
	op(EInterchangePipelineContext::AssetAlternateSkinningReimport) \
	op(EInterchangePipelineContext::AssetCustomMorphTargetImport) \
	op(EInterchangePipelineContext::AssetCustomMorphTargetReImport) 

enum class EInterchangePipelineContext : uint8;
template<> struct TIsUEnumClass<EInterchangePipelineContext> { enum { Value = true }; };
template<> INTERCHANGECORE_API UEnum* StaticEnum<EInterchangePipelineContext>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
