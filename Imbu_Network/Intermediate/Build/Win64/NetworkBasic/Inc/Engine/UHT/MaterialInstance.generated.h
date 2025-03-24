// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialInstance.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_MaterialInstance_generated_h
#error "MaterialInstance.generated.h already included, missing '#pragma once' in MaterialInstance.h"
#endif
#define ENGINE_MaterialInstance_generated_h

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialInstance_h_33_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FScalarParameterAtlasInstanceData_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FScalarParameterAtlasInstanceData>();

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialInstance_h_65_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FScalarParameterValue_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FScalarParameterValue>();

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialInstance_h_127_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVectorParameterValue_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FVectorParameterValue>();

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialInstance_h_180_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDoubleVectorParameterValue_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FDoubleVectorParameterValue>();

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialInstance_h_229_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTextureParameterValue_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FTextureParameterValue>();

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialInstance_h_282_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTextureCollectionParameterValue_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FTextureCollectionParameterValue>();

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialInstance_h_330_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRuntimeVirtualTextureParameterValue_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FRuntimeVirtualTextureParameterValue>();

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialInstance_h_378_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSparseVolumeTextureParameterValue_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FSparseVolumeTextureParameterValue>();

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialInstance_h_426_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFontParameterValue_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FFontParameterValue>();

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialInstance_h_482_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FUserSceneTextureOverride_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FUserSceneTextureOverride>();

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialInstance_h_521_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMaterialInstanceCachedData_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FMaterialInstanceCachedData>();

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialInstance_h_580_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMaterialInstanceEditorOnlyData(); \
	friend struct Z_Construct_UClass_UMaterialInstanceEditorOnlyData_Statics; \
public: \
	DECLARE_CLASS(UMaterialInstanceEditorOnlyData, UMaterialInterfaceEditorOnlyData, COMPILED_IN_FLAGS(0 | CLASS_Optional), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UMaterialInstanceEditorOnlyData)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialInstance_h_580_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialInstanceEditorOnlyData(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMaterialInstanceEditorOnlyData(UMaterialInstanceEditorOnlyData&&); \
	UMaterialInstanceEditorOnlyData(const UMaterialInstanceEditorOnlyData&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialInstanceEditorOnlyData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialInstanceEditorOnlyData); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMaterialInstanceEditorOnlyData) \
	ENGINE_API virtual ~UMaterialInstanceEditorOnlyData();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialInstance_h_577_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialInstance_h_580_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialInstance_h_580_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialInstance_h_580_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UMaterialInstanceEditorOnlyData>();

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialInstance_h_589_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UMaterialInstance, ENGINE_API)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialInstance_h_589_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialInstance(); \
	friend struct Z_Construct_UClass_UMaterialInstance_Statics; \
public: \
	DECLARE_CLASS(UMaterialInstance, UMaterialInterface, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UMaterialInstance) \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialInstance_h_589_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialInstance_h_589_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMaterialInstance(UMaterialInstance&&); \
	UMaterialInstance(const UMaterialInstance&); \
public:


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialInstance_h_586_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialInstance_h_589_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialInstance_h_589_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialInstance_h_589_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UMaterialInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
