// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/GameFramework/AsyncActionHandleSaveGame.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAsyncActionHandleSaveGame() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAsyncActionHandleSaveGame();
ENGINE_API UClass* Z_Construct_UClass_UAsyncActionHandleSaveGame_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
ENGINE_API UClass* Z_Construct_UClass_USaveGame_NoRegister();
ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_OnAsyncHandleSaveGame__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Delegate FOnAsyncHandleSaveGame
struct Z_Construct_UDelegateFunction_Engine_OnAsyncHandleSaveGame__DelegateSignature_Statics
{
	struct _Script_Engine_eventOnAsyncHandleSaveGame_Parms
	{
		USaveGame* SaveGame;
		bool bSuccess;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/AsyncActionHandleSaveGame.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SaveGame;
	static void NewProp_bSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Engine_OnAsyncHandleSaveGame__DelegateSignature_Statics::NewProp_SaveGame = { "SaveGame", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Engine_eventOnAsyncHandleSaveGame_Parms, SaveGame), Z_Construct_UClass_USaveGame_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UDelegateFunction_Engine_OnAsyncHandleSaveGame__DelegateSignature_Statics::NewProp_bSuccess_SetBit(void* Obj)
{
	((_Script_Engine_eventOnAsyncHandleSaveGame_Parms*)Obj)->bSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_Engine_OnAsyncHandleSaveGame__DelegateSignature_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_Engine_eventOnAsyncHandleSaveGame_Parms), &Z_Construct_UDelegateFunction_Engine_OnAsyncHandleSaveGame__DelegateSignature_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Engine_OnAsyncHandleSaveGame__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_OnAsyncHandleSaveGame__DelegateSignature_Statics::NewProp_SaveGame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_OnAsyncHandleSaveGame__DelegateSignature_Statics::NewProp_bSuccess,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnAsyncHandleSaveGame__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Engine_OnAsyncHandleSaveGame__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, nullptr, "OnAsyncHandleSaveGame__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_Engine_OnAsyncHandleSaveGame__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnAsyncHandleSaveGame__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Engine_OnAsyncHandleSaveGame__DelegateSignature_Statics::_Script_Engine_eventOnAsyncHandleSaveGame_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnAsyncHandleSaveGame__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Engine_OnAsyncHandleSaveGame__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_Engine_OnAsyncHandleSaveGame__DelegateSignature_Statics::_Script_Engine_eventOnAsyncHandleSaveGame_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_Engine_OnAsyncHandleSaveGame__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Engine_OnAsyncHandleSaveGame__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnAsyncHandleSaveGame_DelegateWrapper(const FMulticastScriptDelegate& OnAsyncHandleSaveGame, USaveGame* SaveGame, bool bSuccess)
{
	struct _Script_Engine_eventOnAsyncHandleSaveGame_Parms
	{
		USaveGame* SaveGame;
		bool bSuccess;
	};
	_Script_Engine_eventOnAsyncHandleSaveGame_Parms Parms;
	Parms.SaveGame=SaveGame;
	Parms.bSuccess=bSuccess ? true : false;
	OnAsyncHandleSaveGame.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnAsyncHandleSaveGame

// Begin Class UAsyncActionHandleSaveGame Function AsyncLoadGameFromSlot
struct Z_Construct_UFunction_UAsyncActionHandleSaveGame_AsyncLoadGameFromSlot_Statics
{
	struct AsyncActionHandleSaveGame_eventAsyncLoadGameFromSlot_Parms
	{
		UObject* WorldContextObject;
		FString SlotName;
		int32 UserIndex;
		UAsyncActionHandleSaveGame* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SaveGame" },
		{ "Comment", "/**\n\x09 * Schedule an async load of a specific slot. UGameplayStatics::AsyncLoadGameFromSlot is the native version of this.\n\x09 * When the load has succeeded or failed, the completed pin is activated with success/failure and the newly loaded save game object if valid.\n\x09 * Keep in mind that some platforms may not support trying to load and save at the same time.\n\x09 *\n\x09 * @param SlotName\x09\x09\x09Name of the save game slot to load from.\n\x09 * @param UserIndex\x09\x09\x09The platform user index that identifies the user doing the saving, ignored on some platforms.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/AsyncActionHandleSaveGame.h" },
		{ "ToolTip", "Schedule an async load of a specific slot. UGameplayStatics::AsyncLoadGameFromSlot is the native version of this.\nWhen the load has succeeded or failed, the completed pin is activated with success/failure and the newly loaded save game object if valid.\nKeep in mind that some platforms may not support trying to load and save at the same time.\n\n@param SlotName                      Name of the save game slot to load from.\n@param UserIndex                     The platform user index that identifies the user doing the saving, ignored on some platforms." },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlotName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SlotName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_UserIndex;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncActionHandleSaveGame_AsyncLoadGameFromSlot_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncActionHandleSaveGame_eventAsyncLoadGameFromSlot_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAsyncActionHandleSaveGame_AsyncLoadGameFromSlot_Statics::NewProp_SlotName = { "SlotName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncActionHandleSaveGame_eventAsyncLoadGameFromSlot_Parms, SlotName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlotName_MetaData), NewProp_SlotName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAsyncActionHandleSaveGame_AsyncLoadGameFromSlot_Statics::NewProp_UserIndex = { "UserIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncActionHandleSaveGame_eventAsyncLoadGameFromSlot_Parms, UserIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserIndex_MetaData), NewProp_UserIndex_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncActionHandleSaveGame_AsyncLoadGameFromSlot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncActionHandleSaveGame_eventAsyncLoadGameFromSlot_Parms, ReturnValue), Z_Construct_UClass_UAsyncActionHandleSaveGame_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncActionHandleSaveGame_AsyncLoadGameFromSlot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncActionHandleSaveGame_AsyncLoadGameFromSlot_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncActionHandleSaveGame_AsyncLoadGameFromSlot_Statics::NewProp_SlotName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncActionHandleSaveGame_AsyncLoadGameFromSlot_Statics::NewProp_UserIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncActionHandleSaveGame_AsyncLoadGameFromSlot_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncActionHandleSaveGame_AsyncLoadGameFromSlot_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncActionHandleSaveGame_AsyncLoadGameFromSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAsyncActionHandleSaveGame, nullptr, "AsyncLoadGameFromSlot", nullptr, nullptr, Z_Construct_UFunction_UAsyncActionHandleSaveGame_AsyncLoadGameFromSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncActionHandleSaveGame_AsyncLoadGameFromSlot_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAsyncActionHandleSaveGame_AsyncLoadGameFromSlot_Statics::AsyncActionHandleSaveGame_eventAsyncLoadGameFromSlot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncActionHandleSaveGame_AsyncLoadGameFromSlot_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAsyncActionHandleSaveGame_AsyncLoadGameFromSlot_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAsyncActionHandleSaveGame_AsyncLoadGameFromSlot_Statics::AsyncActionHandleSaveGame_eventAsyncLoadGameFromSlot_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAsyncActionHandleSaveGame_AsyncLoadGameFromSlot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncActionHandleSaveGame_AsyncLoadGameFromSlot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAsyncActionHandleSaveGame::execAsyncLoadGameFromSlot)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_SlotName);
	P_GET_PROPERTY(FIntProperty,Z_Param_UserIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAsyncActionHandleSaveGame**)Z_Param__Result=UAsyncActionHandleSaveGame::AsyncLoadGameFromSlot(Z_Param_WorldContextObject,Z_Param_SlotName,Z_Param_UserIndex);
	P_NATIVE_END;
}
// End Class UAsyncActionHandleSaveGame Function AsyncLoadGameFromSlot

// Begin Class UAsyncActionHandleSaveGame Function AsyncSaveGameToSlot
struct Z_Construct_UFunction_UAsyncActionHandleSaveGame_AsyncSaveGameToSlot_Statics
{
	struct AsyncActionHandleSaveGame_eventAsyncSaveGameToSlot_Parms
	{
		UObject* WorldContextObject;
		USaveGame* SaveGameObject;
		FString SlotName;
		int32 UserIndex;
		UAsyncActionHandleSaveGame* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SaveGame" },
		{ "Comment", "/**\n\x09 * Schedule an async save to a specific slot. UGameplayStatics::AsyncSaveGameToSlot is the native version of this.\n\x09 * When the save has succeeded or failed, the completed pin is activated with success/failure and the save game object.\n\x09 * Keep in mind that some platforms may not support trying to load and save at the same time.\n\x09 *\n\x09 * @param SaveGameObject\x09Object that contains data about the save game that we want to write out.\n\x09 * @param SlotName\x09\x09\x09Name of the save game slot to load from.\n\x09 * @param UserIndex\x09\x09\x09The platform user index that identifies the user doing the saving, ignored on some platforms.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/AsyncActionHandleSaveGame.h" },
		{ "ToolTip", "Schedule an async save to a specific slot. UGameplayStatics::AsyncSaveGameToSlot is the native version of this.\nWhen the save has succeeded or failed, the completed pin is activated with success/failure and the save game object.\nKeep in mind that some platforms may not support trying to load and save at the same time.\n\n@param SaveGameObject        Object that contains data about the save game that we want to write out.\n@param SlotName                      Name of the save game slot to load from.\n@param UserIndex                     The platform user index that identifies the user doing the saving, ignored on some platforms." },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlotName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SaveGameObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SlotName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_UserIndex;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncActionHandleSaveGame_AsyncSaveGameToSlot_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncActionHandleSaveGame_eventAsyncSaveGameToSlot_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncActionHandleSaveGame_AsyncSaveGameToSlot_Statics::NewProp_SaveGameObject = { "SaveGameObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncActionHandleSaveGame_eventAsyncSaveGameToSlot_Parms, SaveGameObject), Z_Construct_UClass_USaveGame_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAsyncActionHandleSaveGame_AsyncSaveGameToSlot_Statics::NewProp_SlotName = { "SlotName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncActionHandleSaveGame_eventAsyncSaveGameToSlot_Parms, SlotName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlotName_MetaData), NewProp_SlotName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAsyncActionHandleSaveGame_AsyncSaveGameToSlot_Statics::NewProp_UserIndex = { "UserIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncActionHandleSaveGame_eventAsyncSaveGameToSlot_Parms, UserIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserIndex_MetaData), NewProp_UserIndex_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncActionHandleSaveGame_AsyncSaveGameToSlot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncActionHandleSaveGame_eventAsyncSaveGameToSlot_Parms, ReturnValue), Z_Construct_UClass_UAsyncActionHandleSaveGame_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncActionHandleSaveGame_AsyncSaveGameToSlot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncActionHandleSaveGame_AsyncSaveGameToSlot_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncActionHandleSaveGame_AsyncSaveGameToSlot_Statics::NewProp_SaveGameObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncActionHandleSaveGame_AsyncSaveGameToSlot_Statics::NewProp_SlotName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncActionHandleSaveGame_AsyncSaveGameToSlot_Statics::NewProp_UserIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncActionHandleSaveGame_AsyncSaveGameToSlot_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncActionHandleSaveGame_AsyncSaveGameToSlot_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncActionHandleSaveGame_AsyncSaveGameToSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAsyncActionHandleSaveGame, nullptr, "AsyncSaveGameToSlot", nullptr, nullptr, Z_Construct_UFunction_UAsyncActionHandleSaveGame_AsyncSaveGameToSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncActionHandleSaveGame_AsyncSaveGameToSlot_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAsyncActionHandleSaveGame_AsyncSaveGameToSlot_Statics::AsyncActionHandleSaveGame_eventAsyncSaveGameToSlot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncActionHandleSaveGame_AsyncSaveGameToSlot_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAsyncActionHandleSaveGame_AsyncSaveGameToSlot_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAsyncActionHandleSaveGame_AsyncSaveGameToSlot_Statics::AsyncActionHandleSaveGame_eventAsyncSaveGameToSlot_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAsyncActionHandleSaveGame_AsyncSaveGameToSlot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncActionHandleSaveGame_AsyncSaveGameToSlot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAsyncActionHandleSaveGame::execAsyncSaveGameToSlot)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(USaveGame,Z_Param_SaveGameObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_SlotName);
	P_GET_PROPERTY(FIntProperty,Z_Param_UserIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAsyncActionHandleSaveGame**)Z_Param__Result=UAsyncActionHandleSaveGame::AsyncSaveGameToSlot(Z_Param_WorldContextObject,Z_Param_SaveGameObject,Z_Param_SlotName,Z_Param_UserIndex);
	P_NATIVE_END;
}
// End Class UAsyncActionHandleSaveGame Function AsyncSaveGameToSlot

// Begin Class UAsyncActionHandleSaveGame
void UAsyncActionHandleSaveGame::StaticRegisterNativesUAsyncActionHandleSaveGame()
{
	UClass* Class = UAsyncActionHandleSaveGame::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AsyncLoadGameFromSlot", &UAsyncActionHandleSaveGame::execAsyncLoadGameFromSlot },
		{ "AsyncSaveGameToSlot", &UAsyncActionHandleSaveGame::execAsyncSaveGameToSlot },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAsyncActionHandleSaveGame);
UClass* Z_Construct_UClass_UAsyncActionHandleSaveGame_NoRegister()
{
	return UAsyncActionHandleSaveGame::StaticClass();
}
struct Z_Construct_UClass_UAsyncActionHandleSaveGame_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** Async action to handle async load/save of a USaveGame. This can be subclassed by a specific game */" },
		{ "IncludePath", "GameFramework/AsyncActionHandleSaveGame.h" },
		{ "ModuleRelativePath", "Classes/GameFramework/AsyncActionHandleSaveGame.h" },
		{ "ToolTip", "Async action to handle async load/save of a USaveGame. This can be subclassed by a specific game" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Completed_MetaData[] = {
		{ "Comment", "/** Delegate called when the save/load completes */" },
		{ "ModuleRelativePath", "Classes/GameFramework/AsyncActionHandleSaveGame.h" },
		{ "ToolTip", "Delegate called when the save/load completes" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SaveGameObject_MetaData[] = {
		{ "Comment", "/** The object that was either saved or loaded */" },
		{ "ModuleRelativePath", "Classes/GameFramework/AsyncActionHandleSaveGame.h" },
		{ "ToolTip", "The object that was either saved or loaded" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_Completed;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SaveGameObject;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAsyncActionHandleSaveGame_AsyncLoadGameFromSlot, "AsyncLoadGameFromSlot" }, // 964144561
		{ &Z_Construct_UFunction_UAsyncActionHandleSaveGame_AsyncSaveGameToSlot, "AsyncSaveGameToSlot" }, // 3563190560
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAsyncActionHandleSaveGame>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAsyncActionHandleSaveGame_Statics::NewProp_Completed = { "Completed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAsyncActionHandleSaveGame, Completed), Z_Construct_UDelegateFunction_Engine_OnAsyncHandleSaveGame__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Completed_MetaData), NewProp_Completed_MetaData) }; // 609546791
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAsyncActionHandleSaveGame_Statics::NewProp_SaveGameObject = { "SaveGameObject", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAsyncActionHandleSaveGame, SaveGameObject), Z_Construct_UClass_USaveGame_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SaveGameObject_MetaData), NewProp_SaveGameObject_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAsyncActionHandleSaveGame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncActionHandleSaveGame_Statics::NewProp_Completed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncActionHandleSaveGame_Statics::NewProp_SaveGameObject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncActionHandleSaveGame_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAsyncActionHandleSaveGame_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncActionHandleSaveGame_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAsyncActionHandleSaveGame_Statics::ClassParams = {
	&UAsyncActionHandleSaveGame::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAsyncActionHandleSaveGame_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncActionHandleSaveGame_Statics::PropPointers),
	0,
	0x008800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncActionHandleSaveGame_Statics::Class_MetaDataParams), Z_Construct_UClass_UAsyncActionHandleSaveGame_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAsyncActionHandleSaveGame()
{
	if (!Z_Registration_Info_UClass_UAsyncActionHandleSaveGame.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAsyncActionHandleSaveGame.OuterSingleton, Z_Construct_UClass_UAsyncActionHandleSaveGame_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAsyncActionHandleSaveGame.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UAsyncActionHandleSaveGame>()
{
	return UAsyncActionHandleSaveGame::StaticClass();
}
UAsyncActionHandleSaveGame::UAsyncActionHandleSaveGame(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAsyncActionHandleSaveGame);
UAsyncActionHandleSaveGame::~UAsyncActionHandleSaveGame() {}
// End Class UAsyncActionHandleSaveGame

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_AsyncActionHandleSaveGame_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAsyncActionHandleSaveGame, UAsyncActionHandleSaveGame::StaticClass, TEXT("UAsyncActionHandleSaveGame"), &Z_Registration_Info_UClass_UAsyncActionHandleSaveGame, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAsyncActionHandleSaveGame), 3740535868U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_AsyncActionHandleSaveGame_h_740881535(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_AsyncActionHandleSaveGame_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_AsyncActionHandleSaveGame_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
