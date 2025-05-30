// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/Material.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_Material_generated_h
#error "Material.generated.h already included, missing '#pragma once' in Material.h"
#endif
#define ENGINE_Material_generated_h

#define FID_Engine_Source_Runtime_Engine_Public_Materials_Material_h_280_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FParameterGroupData_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FParameterGroupData>();

#define FID_Engine_Source_Runtime_Engine_Public_Materials_Material_h_309_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMaterialEditorOnlyData(); \
	friend struct Z_Construct_UClass_UMaterialEditorOnlyData_Statics; \
public: \
	DECLARE_CLASS(UMaterialEditorOnlyData, UMaterialInterfaceEditorOnlyData, COMPILED_IN_FLAGS(0 | CLASS_Optional), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UMaterialEditorOnlyData)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_Material_h_309_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMaterialEditorOnlyData(UMaterialEditorOnlyData&&); \
	UMaterialEditorOnlyData(const UMaterialEditorOnlyData&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialEditorOnlyData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialEditorOnlyData); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMaterialEditorOnlyData) \
	ENGINE_API virtual ~UMaterialEditorOnlyData();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_Material_h_306_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_Material_h_309_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_Material_h_309_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_Material_h_309_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UMaterialEditorOnlyData>();

#define FID_Engine_Source_Runtime_Engine_Public_Materials_Material_h_421_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UMaterial, ENGINE_API)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_Material_h_421_INCLASS \
private: \
	static void StaticRegisterNativesUMaterial(); \
	friend struct Z_Construct_UClass_UMaterial_Statics; \
public: \
	DECLARE_CLASS(UMaterial, UMaterialInterface, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UMaterial) \
	FID_Engine_Source_Runtime_Engine_Public_Materials_Material_h_421_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Public_Materials_Material_h_421_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterial(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterial) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterial); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterial); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMaterial(UMaterial&&); \
	UMaterial(const UMaterial&); \
public: \
	ENGINE_API virtual ~UMaterial();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_Material_h_418_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_Material_h_421_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_Material_h_421_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_Material_h_421_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UMaterial>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_Material_h


#define FOREACH_ENUM_EDECALBLENDMODE(op) \
	op(DBM_Translucent) \
	op(DBM_Stain) \
	op(DBM_Normal) \
	op(DBM_Emissive) \
	op(DBM_DBuffer_ColorNormalRoughness) \
	op(DBM_DBuffer_Color) \
	op(DBM_DBuffer_ColorNormal) \
	op(DBM_DBuffer_ColorRoughness) \
	op(DBM_DBuffer_Normal) \
	op(DBM_DBuffer_NormalRoughness) \
	op(DBM_DBuffer_Roughness) \
	op(DBM_DBuffer_Emissive) \
	op(DBM_DBuffer_AlphaComposite) \
	op(DBM_DBuffer_EmissiveAlphaComposite) \
	op(DBM_Volumetric_DistanceFunction) \
	op(DBM_AlphaComposite) \
	op(DBM_AmbientOcclusion) 

enum EDecalBlendMode : int;
template<> ENGINE_API UEnum* StaticEnum<EDecalBlendMode>();

#define FOREACH_ENUM_EMATERIALDECALRESPONSE(op) \
	op(MDR_None) \
	op(MDR_ColorNormalRoughness) \
	op(MDR_Color) \
	op(MDR_ColorNormal) \
	op(MDR_ColorRoughness) \
	op(MDR_Normal) \
	op(MDR_NormalRoughness) \
	op(MDR_Roughness) 

enum EMaterialDecalResponse : int;
template<> ENGINE_API UEnum* StaticEnum<EMaterialDecalResponse>();

#define FOREACH_ENUM_EMATERIALTRANSLUCENCYPASS(op) \
	op(MTP_BeforeDOF) \
	op(MTP_AfterDOF) \
	op(MTP_AfterMotionBlur) 

enum EMaterialTranslucencyPass : int;
template<> ENGINE_API UEnum* StaticEnum<EMaterialTranslucencyPass>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
