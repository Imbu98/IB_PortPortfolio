// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AndroidPermissionCallbackProxy.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ANDROIDPERMISSION_AndroidPermissionCallbackProxy_generated_h
#error "AndroidPermissionCallbackProxy.generated.h already included, missing '#pragma once' in AndroidPermissionCallbackProxy.h"
#endif
#define ANDROIDPERMISSION_AndroidPermissionCallbackProxy_generated_h

#define FID_Engine_Plugins_Runtime_AndroidPermission_Source_AndroidPermission_Classes_AndroidPermissionCallbackProxy_h_7_DELEGATE \
ANDROIDPERMISSION_API void FAndroidPermissionDynamicDelegate_DelegateWrapper(const FMulticastScriptDelegate& AndroidPermissionDynamicDelegate, TArray<FString> const& Permissions, TArray<bool> const& GrantResults);


#define FID_Engine_Plugins_Runtime_AndroidPermission_Source_AndroidPermission_Classes_AndroidPermissionCallbackProxy_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAndroidPermissionCallbackProxy(); \
	friend struct Z_Construct_UClass_UAndroidPermissionCallbackProxy_Statics; \
public: \
	DECLARE_CLASS(UAndroidPermissionCallbackProxy, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AndroidPermission"), NO_API) \
	DECLARE_SERIALIZER(UAndroidPermissionCallbackProxy)


#define FID_Engine_Plugins_Runtime_AndroidPermission_Source_AndroidPermission_Classes_AndroidPermissionCallbackProxy_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAndroidPermissionCallbackProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAndroidPermissionCallbackProxy(UAndroidPermissionCallbackProxy&&); \
	UAndroidPermissionCallbackProxy(const UAndroidPermissionCallbackProxy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAndroidPermissionCallbackProxy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAndroidPermissionCallbackProxy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAndroidPermissionCallbackProxy) \
	NO_API virtual ~UAndroidPermissionCallbackProxy();


#define FID_Engine_Plugins_Runtime_AndroidPermission_Source_AndroidPermission_Classes_AndroidPermissionCallbackProxy_h_10_PROLOG
#define FID_Engine_Plugins_Runtime_AndroidPermission_Source_AndroidPermission_Classes_AndroidPermissionCallbackProxy_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_AndroidPermission_Source_AndroidPermission_Classes_AndroidPermissionCallbackProxy_h_13_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_AndroidPermission_Source_AndroidPermission_Classes_AndroidPermissionCallbackProxy_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ANDROIDPERMISSION_API UClass* StaticClass<class UAndroidPermissionCallbackProxy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_AndroidPermission_Source_AndroidPermission_Classes_AndroidPermissionCallbackProxy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
