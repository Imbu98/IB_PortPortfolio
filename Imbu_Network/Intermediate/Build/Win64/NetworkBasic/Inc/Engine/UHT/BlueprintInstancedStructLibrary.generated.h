// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Kismet/BlueprintInstancedStructLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UScriptStruct;
enum class EStructUtilsResult : uint8;
struct FInstancedStruct;
#ifdef ENGINE_BlueprintInstancedStructLibrary_generated_h
#error "BlueprintInstancedStructLibrary.generated.h already included, missing '#pragma once' in BlueprintInstancedStructLibrary.h"
#endif
#define ENGINE_BlueprintInstancedStructLibrary_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintInstancedStructLibrary_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIsValid_InstancedStruct); \
	DECLARE_FUNCTION(execNotEqual_InstancedStruct); \
	DECLARE_FUNCTION(execEqualEqual_InstancedStruct); \
	DECLARE_FUNCTION(execIsInstancedStructValid); \
	DECLARE_FUNCTION(execReset);


#define FID_Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintInstancedStructLibrary_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBlueprintInstancedStructLibrary(); \
	friend struct Z_Construct_UClass_UBlueprintInstancedStructLibrary_Statics; \
public: \
	DECLARE_CLASS(UBlueprintInstancedStructLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UBlueprintInstancedStructLibrary)


#define FID_Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintInstancedStructLibrary_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UBlueprintInstancedStructLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UBlueprintInstancedStructLibrary(UBlueprintInstancedStructLibrary&&); \
	UBlueprintInstancedStructLibrary(const UBlueprintInstancedStructLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UBlueprintInstancedStructLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlueprintInstancedStructLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlueprintInstancedStructLibrary) \
	ENGINE_API virtual ~UBlueprintInstancedStructLibrary();


#define FID_Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintInstancedStructLibrary_h_18_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintInstancedStructLibrary_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintInstancedStructLibrary_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintInstancedStructLibrary_h_21_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintInstancedStructLibrary_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UBlueprintInstancedStructLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintInstancedStructLibrary_h


#define FOREACH_ENUM_ESTRUCTUTILSRESULT(op) \
	op(EStructUtilsResult::Valid) \
	op(EStructUtilsResult::NotValid) 

enum class EStructUtilsResult : uint8;
template<> struct TIsUEnumClass<EStructUtilsResult> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<EStructUtilsResult>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
