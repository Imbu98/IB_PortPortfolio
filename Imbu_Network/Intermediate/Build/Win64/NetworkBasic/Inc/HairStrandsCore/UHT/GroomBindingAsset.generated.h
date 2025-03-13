// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GroomBindingAsset.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UGeometryCache;
class UGroomAsset;
class USkeletalMesh;
enum class EGroomBindingMeshType : uint8;
struct FGoomBindingGroupInfo;
#ifdef HAIRSTRANDSCORE_GroomBindingAsset_generated_h
#error "GroomBindingAsset.generated.h already included, missing '#pragma once' in GroomBindingAsset.h"
#endif
#define HAIRSTRANDSCORE_GroomBindingAsset_generated_h

#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomBindingAsset_h_27_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGoomBindingGroupInfo_Statics; \
	static class UScriptStruct* StaticStruct();


template<> HAIRSTRANDSCORE_API UScriptStruct* StaticStruct<struct FGoomBindingGroupInfo>();

#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomBindingAsset_h_156_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetGroupInfos); \
	DECLARE_FUNCTION(execGetGroupInfos); \
	DECLARE_FUNCTION(execSetMatchingSection); \
	DECLARE_FUNCTION(execGetMatchingSection); \
	DECLARE_FUNCTION(execSetNumInterpolationPoints); \
	DECLARE_FUNCTION(execGetNumInterpolationPoints); \
	DECLARE_FUNCTION(execSetTargetGeometryCache); \
	DECLARE_FUNCTION(execGetTargetGeometryCache); \
	DECLARE_FUNCTION(execSetSourceGeometryCache); \
	DECLARE_FUNCTION(execGetSourceGeometryCache); \
	DECLARE_FUNCTION(execSetTargetSkeletalMesh); \
	DECLARE_FUNCTION(execGetTargetSkeletalMesh); \
	DECLARE_FUNCTION(execSetSourceSkeletalMesh); \
	DECLARE_FUNCTION(execGetSourceSkeletalMesh); \
	DECLARE_FUNCTION(execSetGroom); \
	DECLARE_FUNCTION(execGetGroom); \
	DECLARE_FUNCTION(execSetGroomBindingType); \
	DECLARE_FUNCTION(execGetGroomBindingType);


#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomBindingAsset_h_156_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UGroomBindingAsset, NO_API)


#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomBindingAsset_h_156_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGroomBindingAsset(); \
	friend struct Z_Construct_UClass_UGroomBindingAsset_Statics; \
public: \
	DECLARE_CLASS(UGroomBindingAsset, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HairStrandsCore"), NO_API) \
	DECLARE_SERIALIZER(UGroomBindingAsset) \
	FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomBindingAsset_h_156_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<UGroomBindingAsset*>(this); }


#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomBindingAsset_h_156_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGroomBindingAsset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGroomBindingAsset(UGroomBindingAsset&&); \
	UGroomBindingAsset(const UGroomBindingAsset&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGroomBindingAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGroomBindingAsset); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGroomBindingAsset) \
	NO_API virtual ~UGroomBindingAsset();


#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomBindingAsset_h_153_PROLOG
#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomBindingAsset_h_156_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomBindingAsset_h_156_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomBindingAsset_h_156_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomBindingAsset_h_156_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HAIRSTRANDSCORE_API UClass* StaticClass<class UGroomBindingAsset>();

#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomBindingAsset_h_486_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGroomBindingAssetList(); \
	friend struct Z_Construct_UClass_UGroomBindingAssetList_Statics; \
public: \
	DECLARE_CLASS(UGroomBindingAssetList, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HairStrandsCore"), NO_API) \
	DECLARE_SERIALIZER(UGroomBindingAssetList)


#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomBindingAsset_h_486_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGroomBindingAssetList(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGroomBindingAssetList(UGroomBindingAssetList&&); \
	UGroomBindingAssetList(const UGroomBindingAssetList&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGroomBindingAssetList); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGroomBindingAssetList); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGroomBindingAssetList) \
	NO_API virtual ~UGroomBindingAssetList();


#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomBindingAsset_h_483_PROLOG
#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomBindingAsset_h_486_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomBindingAsset_h_486_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomBindingAsset_h_486_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HAIRSTRANDSCORE_API UClass* StaticClass<class UGroomBindingAssetList>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomBindingAsset_h


#define FOREACH_ENUM_EGROOMBINDINGMESHTYPE(op) \
	op(EGroomBindingMeshType::SkeletalMesh) \
	op(EGroomBindingMeshType::GeometryCache) 

enum class EGroomBindingMeshType : uint8;
template<> struct TIsUEnumClass<EGroomBindingMeshType> { enum { Value = true }; };
template<> HAIRSTRANDSCORE_API UEnum* StaticEnum<EGroomBindingMeshType>();

#define FOREACH_ENUM_EGROOMBINDINGASYNCPROPERTIES(op) \
	op(EGroomBindingAsyncProperties::None) \
	op(EGroomBindingAsyncProperties::GroomBindingType) \
	op(EGroomBindingAsyncProperties::Groom) \
	op(EGroomBindingAsyncProperties::SourceSkeletalMesh) \
	op(EGroomBindingAsyncProperties::TargetSkeletalMesh) \
	op(EGroomBindingAsyncProperties::SourceGeometryCache) \
	op(EGroomBindingAsyncProperties::TargetGeometryCache) \
	op(EGroomBindingAsyncProperties::NumInterpolationPoints) \
	op(EGroomBindingAsyncProperties::MatchingSection) \
	op(EGroomBindingAsyncProperties::GroupInfos) \
	op(EGroomBindingAsyncProperties::HairGroupResources) \
	op(EGroomBindingAsyncProperties::HairGroupPlatformData) \
	op(EGroomBindingAsyncProperties::All) 

enum class EGroomBindingAsyncProperties : uint64;
template<> struct TIsUEnumClass<EGroomBindingAsyncProperties> { enum { Value = true }; };
template<> HAIRSTRANDSCORE_API UEnum* StaticEnum<EGroomBindingAsyncProperties>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
