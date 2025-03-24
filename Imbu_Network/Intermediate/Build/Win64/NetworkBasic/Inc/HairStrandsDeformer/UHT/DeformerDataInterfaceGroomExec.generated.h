// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DeformerDataInterfaceGroomExec.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HAIRSTRANDSDEFORMER_DeformerDataInterfaceGroomExec_generated_h
#error "DeformerDataInterfaceGroomExec.generated.h already included, missing '#pragma once' in DeformerDataInterfaceGroomExec.h"
#endif
#define HAIRSTRANDSDEFORMER_DeformerDataInterfaceGroomExec_generated_h

#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsDeformer_Private_DeformerDataInterfaceGroomExec_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOptimusGroomExecDataInterface(); \
	friend struct Z_Construct_UClass_UOptimusGroomExecDataInterface_Statics; \
public: \
	DECLARE_CLASS(UOptimusGroomExecDataInterface, UOptimusComputeDataInterface, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HairStrandsDeformer"), NO_API) \
	DECLARE_SERIALIZER(UOptimusGroomExecDataInterface) \
	virtual UObject* _getUObject() const override { return const_cast<UOptimusGroomExecDataInterface*>(this); }


#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsDeformer_Private_DeformerDataInterfaceGroomExec_h_30_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOptimusGroomExecDataInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UOptimusGroomExecDataInterface(UOptimusGroomExecDataInterface&&); \
	UOptimusGroomExecDataInterface(const UOptimusGroomExecDataInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOptimusGroomExecDataInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOptimusGroomExecDataInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOptimusGroomExecDataInterface) \
	NO_API virtual ~UOptimusGroomExecDataInterface();


#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsDeformer_Private_DeformerDataInterfaceGroomExec_h_25_PROLOG
#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsDeformer_Private_DeformerDataInterfaceGroomExec_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsDeformer_Private_DeformerDataInterfaceGroomExec_h_30_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsDeformer_Private_DeformerDataInterfaceGroomExec_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HAIRSTRANDSDEFORMER_API UClass* StaticClass<class UOptimusGroomExecDataInterface>();

#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsDeformer_Private_DeformerDataInterfaceGroomExec_h_67_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOptimusGroomExecDataProvider(); \
	friend struct Z_Construct_UClass_UOptimusGroomExecDataProvider_Statics; \
public: \
	DECLARE_CLASS(UOptimusGroomExecDataProvider, UComputeDataProvider, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HairStrandsDeformer"), NO_API) \
	DECLARE_SERIALIZER(UOptimusGroomExecDataProvider)


#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsDeformer_Private_DeformerDataInterfaceGroomExec_h_67_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOptimusGroomExecDataProvider(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UOptimusGroomExecDataProvider(UOptimusGroomExecDataProvider&&); \
	UOptimusGroomExecDataProvider(const UOptimusGroomExecDataProvider&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOptimusGroomExecDataProvider); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOptimusGroomExecDataProvider); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOptimusGroomExecDataProvider) \
	NO_API virtual ~UOptimusGroomExecDataProvider();


#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsDeformer_Private_DeformerDataInterfaceGroomExec_h_64_PROLOG
#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsDeformer_Private_DeformerDataInterfaceGroomExec_h_67_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsDeformer_Private_DeformerDataInterfaceGroomExec_h_67_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsDeformer_Private_DeformerDataInterfaceGroomExec_h_67_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HAIRSTRANDSDEFORMER_API UClass* StaticClass<class UOptimusGroomExecDataProvider>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsDeformer_Private_DeformerDataInterfaceGroomExec_h


#define FOREACH_ENUM_EOPTIMUSGROOMEXECDOMAIN(op) \
	op(EOptimusGroomExecDomain::None) \
	op(EOptimusGroomExecDomain::ControlPoint) \
	op(EOptimusGroomExecDomain::Curve) 

enum class EOptimusGroomExecDomain : uint8;
template<> struct TIsUEnumClass<EOptimusGroomExecDomain> { enum { Value = true }; };
template<> HAIRSTRANDSDEFORMER_API UEnum* StaticEnum<EOptimusGroomExecDomain>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
