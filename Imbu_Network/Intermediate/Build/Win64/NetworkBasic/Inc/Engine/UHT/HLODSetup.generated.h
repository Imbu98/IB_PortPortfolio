// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HLOD/HLODSetup.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_HLODSetup_generated_h
#error "HLODSetup.generated.h already included, missing '#pragma once' in HLODSetup.h"
#endif
#define ENGINE_HLODSetup_generated_h

#define FID_Engine_Source_Runtime_Engine_Public_HLOD_HLODSetup_h_24_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FHierarchicalSimplification>();

#define FID_Engine_Source_Runtime_Engine_Public_HLOD_HLODSetup_h_107_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHierarchicalLODSetup(); \
	friend struct Z_Construct_UClass_UHierarchicalLODSetup_Statics; \
public: \
	DECLARE_CLASS(UHierarchicalLODSetup, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UHierarchicalLODSetup)


#define FID_Engine_Source_Runtime_Engine_Public_HLOD_HLODSetup_h_107_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UHierarchicalLODSetup(UHierarchicalLODSetup&&); \
	UHierarchicalLODSetup(const UHierarchicalLODSetup&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UHierarchicalLODSetup); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHierarchicalLODSetup); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UHierarchicalLODSetup) \
	ENGINE_API virtual ~UHierarchicalLODSetup();


#define FID_Engine_Source_Runtime_Engine_Public_HLOD_HLODSetup_h_104_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_HLOD_HLODSetup_h_107_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_HLOD_HLODSetup_h_107_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_HLOD_HLODSetup_h_107_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UHierarchicalLODSetup>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_HLOD_HLODSetup_h


#define FOREACH_ENUM_EHIERARCHICALSIMPLIFICATIONMETHOD(op) \
	op(EHierarchicalSimplificationMethod::None) \
	op(EHierarchicalSimplificationMethod::Merge) \
	op(EHierarchicalSimplificationMethod::Simplify) \
	op(EHierarchicalSimplificationMethod::Approximate) 

enum class EHierarchicalSimplificationMethod : uint8;
template<> struct TIsUEnumClass<EHierarchicalSimplificationMethod> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<EHierarchicalSimplificationMethod>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
