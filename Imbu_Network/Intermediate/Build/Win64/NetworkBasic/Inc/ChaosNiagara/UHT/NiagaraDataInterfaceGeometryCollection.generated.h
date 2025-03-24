// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NiagaraDataInterfaceGeometryCollection.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CHAOSNIAGARA_NiagaraDataInterfaceGeometryCollection_generated_h
#error "NiagaraDataInterfaceGeometryCollection.generated.h already included, missing '#pragma once' in NiagaraDataInterfaceGeometryCollection.h"
#endif
#define CHAOSNIAGARA_NiagaraDataInterfaceGeometryCollection_generated_h

#define FID_Engine_Plugins_Experimental_ChaosNiagara_Source_ChaosNiagara_Public_NiagaraDataInterfaceGeometryCollection_h_187_INCLASS \
private: \
	static void StaticRegisterNativesUNiagaraDataInterfaceGeometryCollection(); \
	friend struct Z_Construct_UClass_UNiagaraDataInterfaceGeometryCollection_Statics; \
public: \
	DECLARE_CLASS(UNiagaraDataInterfaceGeometryCollection, UNiagaraDataInterface, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ChaosNiagara"), CHAOSNIAGARA_API) \
	DECLARE_SERIALIZER(UNiagaraDataInterfaceGeometryCollection)


#define FID_Engine_Plugins_Experimental_ChaosNiagara_Source_ChaosNiagara_Public_NiagaraDataInterfaceGeometryCollection_h_187_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CHAOSNIAGARA_API UNiagaraDataInterfaceGeometryCollection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraDataInterfaceGeometryCollection) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CHAOSNIAGARA_API, UNiagaraDataInterfaceGeometryCollection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraDataInterfaceGeometryCollection); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNiagaraDataInterfaceGeometryCollection(UNiagaraDataInterfaceGeometryCollection&&); \
	UNiagaraDataInterfaceGeometryCollection(const UNiagaraDataInterfaceGeometryCollection&); \
public: \
	CHAOSNIAGARA_API virtual ~UNiagaraDataInterfaceGeometryCollection();


#define FID_Engine_Plugins_Experimental_ChaosNiagara_Source_ChaosNiagara_Public_NiagaraDataInterfaceGeometryCollection_h_184_PROLOG
#define FID_Engine_Plugins_Experimental_ChaosNiagara_Source_ChaosNiagara_Public_NiagaraDataInterfaceGeometryCollection_h_187_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ChaosNiagara_Source_ChaosNiagara_Public_NiagaraDataInterfaceGeometryCollection_h_187_INCLASS \
	FID_Engine_Plugins_Experimental_ChaosNiagara_Source_ChaosNiagara_Public_NiagaraDataInterfaceGeometryCollection_h_187_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CHAOSNIAGARA_API UClass* StaticClass<class UNiagaraDataInterfaceGeometryCollection>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_ChaosNiagara_Source_ChaosNiagara_Public_NiagaraDataInterfaceGeometryCollection_h


#define FOREACH_ENUM_ENDIGEOMETRYCOLLECTION_SOURCEMODE(op) \
	op(ENDIGeometryCollection_SourceMode::Default) \
	op(ENDIGeometryCollection_SourceMode::Source) \
	op(ENDIGeometryCollection_SourceMode::AttachParent) \
	op(ENDIGeometryCollection_SourceMode::DefaultCollectionOnly) \
	op(ENDIGeometryCollection_SourceMode::ParameterBinding) 

enum class ENDIGeometryCollection_SourceMode : uint8;
template<> struct TIsUEnumClass<ENDIGeometryCollection_SourceMode> { enum { Value = true }; };
template<> CHAOSNIAGARA_API UEnum* StaticEnum<ENDIGeometryCollection_SourceMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
