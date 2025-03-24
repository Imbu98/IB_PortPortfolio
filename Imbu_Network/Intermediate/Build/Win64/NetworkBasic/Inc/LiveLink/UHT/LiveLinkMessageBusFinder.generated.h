// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LiveLinkMessageBusFinder.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ULiveLinkMessageBusFinder;
class UObject;
struct FLatentActionInfo;
struct FLiveLinkSourceHandle;
struct FProviderPollResult;
#ifdef LIVELINK_LiveLinkMessageBusFinder_generated_h
#error "LiveLinkMessageBusFinder.generated.h already included, missing '#pragma once' in LiveLinkMessageBusFinder.h"
#endif
#define LIVELINK_LiveLinkMessageBusFinder_generated_h

#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkMessageBusFinder_h_25_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FProviderPollResult_Statics; \
	LIVELINK_API static class UScriptStruct* StaticStruct();


template<> LIVELINK_API UScriptStruct* StaticStruct<struct FProviderPollResult>();

#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkMessageBusFinder_h_85_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execConstructMessageBusFinder); \
	DECLARE_FUNCTION(execConnectToProvider); \
	DECLARE_FUNCTION(execGetAvailableProviders);


#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkMessageBusFinder_h_85_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULiveLinkMessageBusFinder(); \
	friend struct Z_Construct_UClass_ULiveLinkMessageBusFinder_Statics; \
public: \
	DECLARE_CLASS(ULiveLinkMessageBusFinder, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LiveLink"), NO_API) \
	DECLARE_SERIALIZER(ULiveLinkMessageBusFinder)


#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkMessageBusFinder_h_85_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULiveLinkMessageBusFinder(ULiveLinkMessageBusFinder&&); \
	ULiveLinkMessageBusFinder(const ULiveLinkMessageBusFinder&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULiveLinkMessageBusFinder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULiveLinkMessageBusFinder); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULiveLinkMessageBusFinder) \
	NO_API virtual ~ULiveLinkMessageBusFinder();


#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkMessageBusFinder_h_81_PROLOG
#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkMessageBusFinder_h_85_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkMessageBusFinder_h_85_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkMessageBusFinder_h_85_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkMessageBusFinder_h_85_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LIVELINK_API UClass* StaticClass<class ULiveLinkMessageBusFinder>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkMessageBusFinder_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
