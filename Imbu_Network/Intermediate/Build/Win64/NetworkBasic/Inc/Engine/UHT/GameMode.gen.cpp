// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/GameFramework/GameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameMode() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AGameMode();
ENGINE_API UClass* Z_Construct_UClass_AGameMode_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
ENGINE_API UClass* Z_Construct_UClass_APlayerState_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ULocalMessage_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class AGameMode Function AbortMatch
struct Z_Construct_UFunction_AGameMode_AbortMatch_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Game" },
		{ "Comment", "/** Report that a match has failed due to unrecoverable error */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameMode.h" },
		{ "ToolTip", "Report that a match has failed due to unrecoverable error" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameMode_AbortMatch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameMode, nullptr, "AbortMatch", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGameMode_AbortMatch_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGameMode_AbortMatch_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AGameMode_AbortMatch()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGameMode_AbortMatch_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGameMode::execAbortMatch)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AbortMatch();
	P_NATIVE_END;
}
// End Class AGameMode Function AbortMatch

// Begin Class AGameMode Function EndMatch
struct Z_Construct_UFunction_AGameMode_EndMatch_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Game" },
		{ "Comment", "/** Transition from InProgress to WaitingPostMatch. You can call this manually, will also get called if ReadyToEndMatch returns true */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameMode.h" },
		{ "ToolTip", "Transition from InProgress to WaitingPostMatch. You can call this manually, will also get called if ReadyToEndMatch returns true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameMode_EndMatch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameMode, nullptr, "EndMatch", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGameMode_EndMatch_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGameMode_EndMatch_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AGameMode_EndMatch()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGameMode_EndMatch_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGameMode::execEndMatch)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EndMatch();
	P_NATIVE_END;
}
// End Class AGameMode Function EndMatch

// Begin Class AGameMode Function GetMatchState
struct Z_Construct_UFunction_AGameMode_GetMatchState_Statics
{
	struct GameMode_eventGetMatchState_Parms
	{
		FName ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Game" },
		{ "Comment", "/** Returns the current match state, this is an accessor to protect the state machine flow */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameMode.h" },
		{ "ToolTip", "Returns the current match state, this is an accessor to protect the state machine flow" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AGameMode_GetMatchState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameMode_eventGetMatchState_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameMode_GetMatchState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameMode_GetMatchState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGameMode_GetMatchState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameMode_GetMatchState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameMode, nullptr, "GetMatchState", nullptr, nullptr, Z_Construct_UFunction_AGameMode_GetMatchState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameMode_GetMatchState_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGameMode_GetMatchState_Statics::GameMode_eventGetMatchState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGameMode_GetMatchState_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGameMode_GetMatchState_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AGameMode_GetMatchState_Statics::GameMode_eventGetMatchState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGameMode_GetMatchState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGameMode_GetMatchState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGameMode::execGetMatchState)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FName*)Z_Param__Result=P_THIS->GetMatchState();
	P_NATIVE_END;
}
// End Class AGameMode Function GetMatchState

// Begin Class AGameMode Function IsMatchInProgress
struct Z_Construct_UFunction_AGameMode_IsMatchInProgress_Statics
{
	struct GameMode_eventIsMatchInProgress_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Game" },
		{ "Comment", "/** Returns true if the match state is InProgress or other gameplay state */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameMode.h" },
		{ "ToolTip", "Returns true if the match state is InProgress or other gameplay state" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AGameMode_IsMatchInProgress_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((GameMode_eventIsMatchInProgress_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGameMode_IsMatchInProgress_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GameMode_eventIsMatchInProgress_Parms), &Z_Construct_UFunction_AGameMode_IsMatchInProgress_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameMode_IsMatchInProgress_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameMode_IsMatchInProgress_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGameMode_IsMatchInProgress_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameMode_IsMatchInProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameMode, nullptr, "IsMatchInProgress", nullptr, nullptr, Z_Construct_UFunction_AGameMode_IsMatchInProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameMode_IsMatchInProgress_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGameMode_IsMatchInProgress_Statics::GameMode_eventIsMatchInProgress_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGameMode_IsMatchInProgress_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGameMode_IsMatchInProgress_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AGameMode_IsMatchInProgress_Statics::GameMode_eventIsMatchInProgress_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGameMode_IsMatchInProgress()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGameMode_IsMatchInProgress_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGameMode::execIsMatchInProgress)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsMatchInProgress();
	P_NATIVE_END;
}
// End Class AGameMode Function IsMatchInProgress

// Begin Class AGameMode Function K2_OnSetMatchState
struct GameMode_eventK2_OnSetMatchState_Parms
{
	FName NewState;
};
static const FName NAME_AGameMode_K2_OnSetMatchState = FName(TEXT("K2_OnSetMatchState"));
void AGameMode::K2_OnSetMatchState(FName NewState)
{
	GameMode_eventK2_OnSetMatchState_Parms Parms;
	Parms.NewState=NewState;
	UFunction* Func = FindFunctionChecked(NAME_AGameMode_K2_OnSetMatchState);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AGameMode_K2_OnSetMatchState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Game" },
		{ "Comment", "/** Implementable event to respond to match state changes */" },
		{ "DisplayName", "OnSetMatchState" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameMode.h" },
		{ "ScriptName", "OnSetMatchState" },
		{ "ToolTip", "Implementable event to respond to match state changes" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_NewState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AGameMode_K2_OnSetMatchState_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameMode_eventK2_OnSetMatchState_Parms, NewState), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameMode_K2_OnSetMatchState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameMode_K2_OnSetMatchState_Statics::NewProp_NewState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGameMode_K2_OnSetMatchState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameMode_K2_OnSetMatchState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameMode, nullptr, "K2_OnSetMatchState", nullptr, nullptr, Z_Construct_UFunction_AGameMode_K2_OnSetMatchState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameMode_K2_OnSetMatchState_Statics::PropPointers), sizeof(GameMode_eventK2_OnSetMatchState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080802, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGameMode_K2_OnSetMatchState_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGameMode_K2_OnSetMatchState_Statics::Function_MetaDataParams) };
static_assert(sizeof(GameMode_eventK2_OnSetMatchState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGameMode_K2_OnSetMatchState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGameMode_K2_OnSetMatchState_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AGameMode Function K2_OnSetMatchState

// Begin Class AGameMode Function ReadyToEndMatch
struct GameMode_eventReadyToEndMatch_Parms
{
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	GameMode_eventReadyToEndMatch_Parms()
		: ReturnValue(false)
	{
	}
};
static const FName NAME_AGameMode_ReadyToEndMatch = FName(TEXT("ReadyToEndMatch"));
bool AGameMode::ReadyToEndMatch()
{
	UFunction* Func = FindFunctionChecked(NAME_AGameMode_ReadyToEndMatch);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		GameMode_eventReadyToEndMatch_Parms Parms;
	ProcessEvent(Func,&Parms);
		return !!Parms.ReturnValue;
	}
	else
	{
		return ReadyToEndMatch_Implementation();
	}
}
struct Z_Construct_UFunction_AGameMode_ReadyToEndMatch_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Game" },
		{ "Comment", "/** Returns true if ready to End Match. Games should override this */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameMode.h" },
		{ "ToolTip", "Returns true if ready to End Match. Games should override this" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AGameMode_ReadyToEndMatch_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((GameMode_eventReadyToEndMatch_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGameMode_ReadyToEndMatch_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GameMode_eventReadyToEndMatch_Parms), &Z_Construct_UFunction_AGameMode_ReadyToEndMatch_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameMode_ReadyToEndMatch_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameMode_ReadyToEndMatch_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGameMode_ReadyToEndMatch_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameMode_ReadyToEndMatch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameMode, nullptr, "ReadyToEndMatch", nullptr, nullptr, Z_Construct_UFunction_AGameMode_ReadyToEndMatch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameMode_ReadyToEndMatch_Statics::PropPointers), sizeof(GameMode_eventReadyToEndMatch_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C02, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGameMode_ReadyToEndMatch_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGameMode_ReadyToEndMatch_Statics::Function_MetaDataParams) };
static_assert(sizeof(GameMode_eventReadyToEndMatch_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGameMode_ReadyToEndMatch()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGameMode_ReadyToEndMatch_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGameMode::execReadyToEndMatch)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ReadyToEndMatch_Implementation();
	P_NATIVE_END;
}
// End Class AGameMode Function ReadyToEndMatch

// Begin Class AGameMode Function ReadyToStartMatch
struct GameMode_eventReadyToStartMatch_Parms
{
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	GameMode_eventReadyToStartMatch_Parms()
		: ReturnValue(false)
	{
	}
};
static const FName NAME_AGameMode_ReadyToStartMatch = FName(TEXT("ReadyToStartMatch"));
bool AGameMode::ReadyToStartMatch()
{
	UFunction* Func = FindFunctionChecked(NAME_AGameMode_ReadyToStartMatch);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		GameMode_eventReadyToStartMatch_Parms Parms;
	ProcessEvent(Func,&Parms);
		return !!Parms.ReturnValue;
	}
	else
	{
		return ReadyToStartMatch_Implementation();
	}
}
struct Z_Construct_UFunction_AGameMode_ReadyToStartMatch_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Game" },
		{ "Comment", "/** Returns true if ready to Start Match. Games should override this */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameMode.h" },
		{ "ToolTip", "Returns true if ready to Start Match. Games should override this" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AGameMode_ReadyToStartMatch_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((GameMode_eventReadyToStartMatch_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGameMode_ReadyToStartMatch_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GameMode_eventReadyToStartMatch_Parms), &Z_Construct_UFunction_AGameMode_ReadyToStartMatch_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameMode_ReadyToStartMatch_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameMode_ReadyToStartMatch_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGameMode_ReadyToStartMatch_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameMode_ReadyToStartMatch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameMode, nullptr, "ReadyToStartMatch", nullptr, nullptr, Z_Construct_UFunction_AGameMode_ReadyToStartMatch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameMode_ReadyToStartMatch_Statics::PropPointers), sizeof(GameMode_eventReadyToStartMatch_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C02, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGameMode_ReadyToStartMatch_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGameMode_ReadyToStartMatch_Statics::Function_MetaDataParams) };
static_assert(sizeof(GameMode_eventReadyToStartMatch_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGameMode_ReadyToStartMatch()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGameMode_ReadyToStartMatch_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGameMode::execReadyToStartMatch)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ReadyToStartMatch_Implementation();
	P_NATIVE_END;
}
// End Class AGameMode Function ReadyToStartMatch

// Begin Class AGameMode Function RestartGame
struct Z_Construct_UFunction_AGameMode_RestartGame_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Game" },
		{ "Comment", "/** Restart the game, by default travel to the current map */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameMode.h" },
		{ "ToolTip", "Restart the game, by default travel to the current map" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameMode_RestartGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameMode, nullptr, "RestartGame", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGameMode_RestartGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGameMode_RestartGame_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AGameMode_RestartGame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGameMode_RestartGame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGameMode::execRestartGame)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RestartGame();
	P_NATIVE_END;
}
// End Class AGameMode Function RestartGame

// Begin Class AGameMode Function Say
struct Z_Construct_UFunction_AGameMode_Say_Statics
{
	struct GameMode_eventSay_Parms
	{
		FString Msg;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI" },
		{ "Comment", "/** Exec command to broadcast a string to all players */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameMode.h" },
		{ "ToolTip", "Exec command to broadcast a string to all players" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Msg_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Msg;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AGameMode_Say_Statics::NewProp_Msg = { "Msg", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameMode_eventSay_Parms, Msg), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Msg_MetaData), NewProp_Msg_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameMode_Say_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameMode_Say_Statics::NewProp_Msg,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGameMode_Say_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameMode_Say_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameMode, nullptr, "Say", nullptr, nullptr, Z_Construct_UFunction_AGameMode_Say_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameMode_Say_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGameMode_Say_Statics::GameMode_eventSay_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020602, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGameMode_Say_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGameMode_Say_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AGameMode_Say_Statics::GameMode_eventSay_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGameMode_Say()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGameMode_Say_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGameMode::execSay)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Msg);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Say(Z_Param_Msg);
	P_NATIVE_END;
}
// End Class AGameMode Function Say

// Begin Class AGameMode Function StartMatch
struct Z_Construct_UFunction_AGameMode_StartMatch_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Game" },
		{ "Comment", "/** Transition from WaitingToStart to InProgress. You can call this manually, will also get called if ReadyToStartMatch returns true */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameMode.h" },
		{ "ToolTip", "Transition from WaitingToStart to InProgress. You can call this manually, will also get called if ReadyToStartMatch returns true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameMode_StartMatch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameMode, nullptr, "StartMatch", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGameMode_StartMatch_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGameMode_StartMatch_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AGameMode_StartMatch()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGameMode_StartMatch_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGameMode::execStartMatch)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartMatch();
	P_NATIVE_END;
}
// End Class AGameMode Function StartMatch

// Begin Class AGameMode
void AGameMode::StaticRegisterNativesAGameMode()
{
	UClass* Class = AGameMode::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AbortMatch", &AGameMode::execAbortMatch },
		{ "EndMatch", &AGameMode::execEndMatch },
		{ "GetMatchState", &AGameMode::execGetMatchState },
		{ "IsMatchInProgress", &AGameMode::execIsMatchInProgress },
		{ "ReadyToEndMatch", &AGameMode::execReadyToEndMatch },
		{ "ReadyToStartMatch", &AGameMode::execReadyToStartMatch },
		{ "RestartGame", &AGameMode::execRestartGame },
		{ "Say", &AGameMode::execSay },
		{ "StartMatch", &AGameMode::execStartMatch },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGameMode);
UClass* Z_Construct_UClass_AGameMode_NoRegister()
{
	return AGameMode::StaticClass();
}
struct Z_Construct_UClass_AGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * GameMode is a subclass of GameModeBase that behaves like a multiplayer match-based game.\n * It has default behavior for picking spawn points and match state.\n * If you want a simpler base, inherit from GameModeBase instead.\n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "GameFramework/GameMode.h" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "GameMode is a subclass of GameModeBase that behaves like a multiplayer match-based game.\nIt has default behavior for picking spawn points and match state.\nIf you want a simpler base, inherit from GameModeBase instead." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MatchState_MetaData[] = {
		{ "Comment", "/** What match state we are currently in */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameMode.h" },
		{ "ToolTip", "What match state we are currently in" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDelayedStart_MetaData[] = {
		{ "Category", "GameMode" },
		{ "Comment", "/** Whether the game should immediately start when the first player logs in. Affects the default behavior of ReadyToStartMatch */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameMode.h" },
		{ "ToolTip", "Whether the game should immediately start when the first player logs in. Affects the default behavior of ReadyToStartMatch" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumSpectators_MetaData[] = {
		{ "Category", "GameMode" },
		{ "Comment", "/** Current number of spectators. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameMode.h" },
		{ "ToolTip", "Current number of spectators." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumPlayers_MetaData[] = {
		{ "Category", "GameMode" },
		{ "Comment", "/** Current number of human players. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameMode.h" },
		{ "ToolTip", "Current number of human players." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumBots_MetaData[] = {
		{ "Category", "GameMode" },
		{ "Comment", "/** number of non-human players (AI controlled but participating as a player). */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameMode.h" },
		{ "ToolTip", "number of non-human players (AI controlled but participating as a player)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinRespawnDelay_MetaData[] = {
		{ "Category", "GameMode" },
		{ "Comment", "/** Minimum time before player can respawn after dying. */" },
		{ "DisplayName", "Minimum Respawn Delay" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameMode.h" },
		{ "ToolTip", "Minimum time before player can respawn after dying." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumTravellingPlayers_MetaData[] = {
		{ "Category", "GameMode" },
		{ "Comment", "/** Number of players that are still traveling from a previous map */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameMode.h" },
		{ "ToolTip", "Number of players that are still traveling from a previous map" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EngineMessageClass_MetaData[] = {
		{ "Comment", "/** Contains strings describing localized game agnostic messages. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameMode.h" },
		{ "ToolTip", "Contains strings describing localized game agnostic messages." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InactivePlayerArray_MetaData[] = {
		{ "Comment", "/** PlayerStates of players who have disconnected from the server (saved in case they reconnect) */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameMode.h" },
		{ "ToolTip", "PlayerStates of players who have disconnected from the server (saved in case they reconnect)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InactivePlayerStateLifeSpan_MetaData[] = {
		{ "Category", "GameMode" },
		{ "Comment", "/** Time a playerstate will stick around in an inactive state after a player logout */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameMode.h" },
		{ "ToolTip", "Time a playerstate will stick around in an inactive state after a player logout" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxInactivePlayers_MetaData[] = {
		{ "Category", "GameMode" },
		{ "Comment", "/** The maximum number of inactive players before we kick the oldest ones out */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameMode.h" },
		{ "ToolTip", "The maximum number of inactive players before we kick the oldest ones out" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHandleDedicatedServerReplays_MetaData[] = {
		{ "Comment", "/** If true, dedicated servers will record replays when HandleMatchHasStarted/HandleMatchHasStopped is called */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameMode.h" },
		{ "ToolTip", "If true, dedicated servers will record replays when HandleMatchHasStarted/HandleMatchHasStopped is called" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_MatchState;
	static void NewProp_bDelayedStart_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDelayedStart;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumSpectators;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumPlayers;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumBots;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinRespawnDelay;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumTravellingPlayers;
	static const UECodeGen_Private::FClassPropertyParams NewProp_EngineMessageClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InactivePlayerArray_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InactivePlayerArray;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InactivePlayerStateLifeSpan;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxInactivePlayers;
	static void NewProp_bHandleDedicatedServerReplays_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHandleDedicatedServerReplays;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AGameMode_AbortMatch, "AbortMatch" }, // 4093305405
		{ &Z_Construct_UFunction_AGameMode_EndMatch, "EndMatch" }, // 3741625964
		{ &Z_Construct_UFunction_AGameMode_GetMatchState, "GetMatchState" }, // 220903704
		{ &Z_Construct_UFunction_AGameMode_IsMatchInProgress, "IsMatchInProgress" }, // 2232111614
		{ &Z_Construct_UFunction_AGameMode_K2_OnSetMatchState, "K2_OnSetMatchState" }, // 1247340655
		{ &Z_Construct_UFunction_AGameMode_ReadyToEndMatch, "ReadyToEndMatch" }, // 326942556
		{ &Z_Construct_UFunction_AGameMode_ReadyToStartMatch, "ReadyToStartMatch" }, // 160235244
		{ &Z_Construct_UFunction_AGameMode_RestartGame, "RestartGame" }, // 2278112275
		{ &Z_Construct_UFunction_AGameMode_Say, "Say" }, // 2437130053
		{ &Z_Construct_UFunction_AGameMode_StartMatch, "StartMatch" }, // 1822465565
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AGameMode_Statics::NewProp_MatchState = { "MatchState", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameMode, MatchState), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MatchState_MetaData), NewProp_MatchState_MetaData) };
void Z_Construct_UClass_AGameMode_Statics::NewProp_bDelayedStart_SetBit(void* Obj)
{
	((AGameMode*)Obj)->bDelayedStart = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGameMode_Statics::NewProp_bDelayedStart = { "bDelayedStart", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(AGameMode), &Z_Construct_UClass_AGameMode_Statics::NewProp_bDelayedStart_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDelayedStart_MetaData), NewProp_bDelayedStart_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AGameMode_Statics::NewProp_NumSpectators = { "NumSpectators", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameMode, NumSpectators), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumSpectators_MetaData), NewProp_NumSpectators_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AGameMode_Statics::NewProp_NumPlayers = { "NumPlayers", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameMode, NumPlayers), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumPlayers_MetaData), NewProp_NumPlayers_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AGameMode_Statics::NewProp_NumBots = { "NumBots", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameMode, NumBots), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumBots_MetaData), NewProp_NumBots_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGameMode_Statics::NewProp_MinRespawnDelay = { "MinRespawnDelay", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameMode, MinRespawnDelay), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinRespawnDelay_MetaData), NewProp_MinRespawnDelay_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AGameMode_Statics::NewProp_NumTravellingPlayers = { "NumTravellingPlayers", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameMode, NumTravellingPlayers), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumTravellingPlayers_MetaData), NewProp_NumTravellingPlayers_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AGameMode_Statics::NewProp_EngineMessageClass = { "EngineMessageClass", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameMode, EngineMessageClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ULocalMessage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EngineMessageClass_MetaData), NewProp_EngineMessageClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGameMode_Statics::NewProp_InactivePlayerArray_Inner = { "InactivePlayerArray", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AGameMode_Statics::NewProp_InactivePlayerArray = { "InactivePlayerArray", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameMode, InactivePlayerArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InactivePlayerArray_MetaData), NewProp_InactivePlayerArray_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGameMode_Statics::NewProp_InactivePlayerStateLifeSpan = { "InactivePlayerStateLifeSpan", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameMode, InactivePlayerStateLifeSpan), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InactivePlayerStateLifeSpan_MetaData), NewProp_InactivePlayerStateLifeSpan_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AGameMode_Statics::NewProp_MaxInactivePlayers = { "MaxInactivePlayers", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameMode, MaxInactivePlayers), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxInactivePlayers_MetaData), NewProp_MaxInactivePlayers_MetaData) };
void Z_Construct_UClass_AGameMode_Statics::NewProp_bHandleDedicatedServerReplays_SetBit(void* Obj)
{
	((AGameMode*)Obj)->bHandleDedicatedServerReplays = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGameMode_Statics::NewProp_bHandleDedicatedServerReplays = { "bHandleDedicatedServerReplays", nullptr, (EPropertyFlags)0x0020080000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGameMode), &Z_Construct_UClass_AGameMode_Statics::NewProp_bHandleDedicatedServerReplays_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHandleDedicatedServerReplays_MetaData), NewProp_bHandleDedicatedServerReplays_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGameMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameMode_Statics::NewProp_MatchState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameMode_Statics::NewProp_bDelayedStart,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameMode_Statics::NewProp_NumSpectators,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameMode_Statics::NewProp_NumPlayers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameMode_Statics::NewProp_NumBots,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameMode_Statics::NewProp_MinRespawnDelay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameMode_Statics::NewProp_NumTravellingPlayers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameMode_Statics::NewProp_EngineMessageClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameMode_Statics::NewProp_InactivePlayerArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameMode_Statics::NewProp_InactivePlayerArray,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameMode_Statics::NewProp_InactivePlayerStateLifeSpan,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameMode_Statics::NewProp_MaxInactivePlayers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameMode_Statics::NewProp_bHandleDedicatedServerReplays,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGameMode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGameMode_Statics::ClassParams = {
	&AGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AGameMode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AGameMode_Statics::PropPointers),
	0,
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AGameMode()
{
	if (!Z_Registration_Info_UClass_AGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGameMode.OuterSingleton, Z_Construct_UClass_AGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGameMode.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<AGameMode>()
{
	return AGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AGameMode);
AGameMode::~AGameMode() {}
// End Class AGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_GameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGameMode, AGameMode::StaticClass, TEXT("AGameMode"), &Z_Registration_Info_UClass_AGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGameMode), 2274667135U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_GameMode_h_4043804042(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_GameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_GameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
