// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionTextureObjectFromCollection.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_MaterialExpressionTextureObjectFromCollection_generated_h
#error "MaterialExpressionTextureObjectFromCollection.generated.h already included, missing '#pragma once' in MaterialExpressionTextureObjectFromCollection.h"
#endif
#define ENGINE_MaterialExpressionTextureObjectFromCollection_generated_h

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionTextureObjectFromCollection_h_39_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionTextureObjectFromCollection(); \
	friend struct Z_Construct_UClass_UMaterialExpressionTextureObjectFromCollection_Statics; \
public: \
	DECLARE_CLASS(UMaterialExpressionTextureObjectFromCollection, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UMaterialExpressionTextureObjectFromCollection)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionTextureObjectFromCollection_h_39_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionTextureObjectFromCollection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionTextureObjectFromCollection) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionTextureObjectFromCollection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionTextureObjectFromCollection); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMaterialExpressionTextureObjectFromCollection(UMaterialExpressionTextureObjectFromCollection&&); \
	UMaterialExpressionTextureObjectFromCollection(const UMaterialExpressionTextureObjectFromCollection&); \
public: \
	ENGINE_API virtual ~UMaterialExpressionTextureObjectFromCollection();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionTextureObjectFromCollection_h_36_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionTextureObjectFromCollection_h_39_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionTextureObjectFromCollection_h_39_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionTextureObjectFromCollection_h_39_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UMaterialExpressionTextureObjectFromCollection>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionTextureObjectFromCollection_h


#define FOREACH_ENUM_ETEXTURECOLLECTIONMEMBERTYPE(op) \
	op(ETextureCollectionMemberType::Texture2D) \
	op(ETextureCollectionMemberType::TextureCube) \
	op(ETextureCollectionMemberType::Texture2DArray) \
	op(ETextureCollectionMemberType::TextureCubeArray) \
	op(ETextureCollectionMemberType::TextureVolume) \
	op(ETextureCollectionMemberType::Max) 

enum class ETextureCollectionMemberType : uint8;
template<> struct TIsUEnumClass<ETextureCollectionMemberType> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<ETextureCollectionMemberType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
