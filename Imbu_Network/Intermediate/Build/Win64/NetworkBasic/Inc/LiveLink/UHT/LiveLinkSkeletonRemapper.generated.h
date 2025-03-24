// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Remapper/LiveLinkSkeletonRemapper.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LIVELINK_LiveLinkSkeletonRemapper_generated_h
#error "LiveLinkSkeletonRemapper.generated.h already included, missing '#pragma once' in LiveLinkSkeletonRemapper.h"
#endif
#define LIVELINK_LiveLinkSkeletonRemapper_generated_h

#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_Remapper_LiveLinkSkeletonRemapper_h_61_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULiveLinkSkeletonRemapper(); \
	friend struct Z_Construct_UClass_ULiveLinkSkeletonRemapper_Statics; \
public: \
	DECLARE_CLASS(ULiveLinkSkeletonRemapper, ULiveLinkSubjectRemapper, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/LiveLink"), NO_API) \
	DECLARE_SERIALIZER(ULiveLinkSkeletonRemapper)


#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_Remapper_LiveLinkSkeletonRemapper_h_61_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULiveLinkSkeletonRemapper(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULiveLinkSkeletonRemapper(ULiveLinkSkeletonRemapper&&); \
	ULiveLinkSkeletonRemapper(const ULiveLinkSkeletonRemapper&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULiveLinkSkeletonRemapper); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULiveLinkSkeletonRemapper); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULiveLinkSkeletonRemapper) \
	NO_API virtual ~ULiveLinkSkeletonRemapper();


#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_Remapper_LiveLinkSkeletonRemapper_h_57_PROLOG
#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_Remapper_LiveLinkSkeletonRemapper_h_61_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_Remapper_LiveLinkSkeletonRemapper_h_61_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_Remapper_LiveLinkSkeletonRemapper_h_61_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LIVELINK_API UClass* StaticClass<class ULiveLinkSkeletonRemapper>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_Remapper_LiveLinkSkeletonRemapper_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
