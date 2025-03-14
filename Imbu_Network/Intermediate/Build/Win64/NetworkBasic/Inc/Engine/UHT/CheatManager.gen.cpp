// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/GameFramework/CheatManager.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerController.h"
#include "UObject/CoreNet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCheatManager() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ADebugCameraController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCheatManager();
ENGINE_API UClass* Z_Construct_UClass_UCheatManager_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCheatManagerExtension();
ENGINE_API UClass* Z_Construct_UClass_UCheatManagerExtension_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EEndPlayReason();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UCheatManagerExtension Function AddedToCheatManager
static const FName NAME_UCheatManagerExtension_AddedToCheatManager = FName(TEXT("AddedToCheatManager"));
void UCheatManagerExtension::AddedToCheatManager()
{
	UFunction* Func = FindFunctionChecked(NAME_UCheatManagerExtension_AddedToCheatManager);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		AddedToCheatManager_Implementation();
	}
}
struct Z_Construct_UFunction_UCheatManagerExtension_AddedToCheatManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "DisplayName", "Added To Cheat Manager" },
		{ "Keywords", "Begin Play" },
		{ "ModuleRelativePath", "Classes/GameFramework/CheatManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCheatManagerExtension_AddedToCheatManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCheatManagerExtension, nullptr, "AddedToCheatManager", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C02, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCheatManagerExtension_AddedToCheatManager_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCheatManagerExtension_AddedToCheatManager_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UCheatManagerExtension_AddedToCheatManager()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCheatManagerExtension_AddedToCheatManager_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCheatManagerExtension::execAddedToCheatManager)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddedToCheatManager_Implementation();
	P_NATIVE_END;
}
// End Class UCheatManagerExtension Function AddedToCheatManager

// Begin Class UCheatManagerExtension Function GetPlayerController
struct Z_Construct_UFunction_UCheatManagerExtension_GetPlayerController_Statics
{
	struct CheatManagerExtension_eventGetPlayerController_Parms
	{
		APlayerController* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Cheat Manager" },
		{ "ModuleRelativePath", "Classes/GameFramework/CheatManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCheatManagerExtension_GetPlayerController_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CheatManagerExtension_eventGetPlayerController_Parms, ReturnValue), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCheatManagerExtension_GetPlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCheatManagerExtension_GetPlayerController_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCheatManagerExtension_GetPlayerController_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCheatManagerExtension_GetPlayerController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCheatManagerExtension, nullptr, "GetPlayerController", nullptr, nullptr, Z_Construct_UFunction_UCheatManagerExtension_GetPlayerController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCheatManagerExtension_GetPlayerController_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCheatManagerExtension_GetPlayerController_Statics::CheatManagerExtension_eventGetPlayerController_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCheatManagerExtension_GetPlayerController_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCheatManagerExtension_GetPlayerController_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCheatManagerExtension_GetPlayerController_Statics::CheatManagerExtension_eventGetPlayerController_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCheatManagerExtension_GetPlayerController()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCheatManagerExtension_GetPlayerController_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCheatManagerExtension::execGetPlayerController)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(APlayerController**)Z_Param__Result=P_THIS->GetPlayerController();
	P_NATIVE_END;
}
// End Class UCheatManagerExtension Function GetPlayerController

// Begin Class UCheatManagerExtension Function RemovedFromCheatManager
static const FName NAME_UCheatManagerExtension_RemovedFromCheatManager = FName(TEXT("RemovedFromCheatManager"));
void UCheatManagerExtension::RemovedFromCheatManager()
{
	UFunction* Func = FindFunctionChecked(NAME_UCheatManagerExtension_RemovedFromCheatManager);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		RemovedFromCheatManager_Implementation();
	}
}
struct Z_Construct_UFunction_UCheatManagerExtension_RemovedFromCheatManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "DisplayName", "Removed From Cheat Manager" },
		{ "Keywords", "End Play" },
		{ "ModuleRelativePath", "Classes/GameFramework/CheatManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCheatManagerExtension_RemovedFromCheatManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCheatManagerExtension, nullptr, "RemovedFromCheatManager", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C02, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCheatManagerExtension_RemovedFromCheatManager_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCheatManagerExtension_RemovedFromCheatManager_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UCheatManagerExtension_RemovedFromCheatManager()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCheatManagerExtension_RemovedFromCheatManager_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCheatManagerExtension::execRemovedFromCheatManager)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemovedFromCheatManager_Implementation();
	P_NATIVE_END;
}
// End Class UCheatManagerExtension Function RemovedFromCheatManager

// Begin Class UCheatManagerExtension
void UCheatManagerExtension::StaticRegisterNativesUCheatManagerExtension()
{
	UClass* Class = UCheatManagerExtension::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddedToCheatManager", &UCheatManagerExtension::execAddedToCheatManager },
		{ "GetPlayerController", &UCheatManagerExtension::execGetPlayerController },
		{ "RemovedFromCheatManager", &UCheatManagerExtension::execRemovedFromCheatManager },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCheatManagerExtension);
UClass* Z_Construct_UClass_UCheatManagerExtension_NoRegister()
{
	return UCheatManagerExtension::StaticClass();
}
struct Z_Construct_UClass_UCheatManagerExtension_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** A cheat manager extension can extend the main cheat manager in a modular way, being enabled or disabled when the system associated with the cheats is enabled or disabled */" },
		{ "IncludePath", "GameFramework/CheatManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/GameFramework/CheatManager.h" },
		{ "ToolTip", "A cheat manager extension can extend the main cheat manager in a modular way, being enabled or disabled when the system associated with the cheats is enabled or disabled" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCheatManagerExtension_AddedToCheatManager, "AddedToCheatManager" }, // 619247539
		{ &Z_Construct_UFunction_UCheatManagerExtension_GetPlayerController, "GetPlayerController" }, // 734092094
		{ &Z_Construct_UFunction_UCheatManagerExtension_RemovedFromCheatManager, "RemovedFromCheatManager" }, // 2934365676
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCheatManagerExtension>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCheatManagerExtension_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCheatManagerExtension_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCheatManagerExtension_Statics::ClassParams = {
	&UCheatManagerExtension::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCheatManagerExtension_Statics::Class_MetaDataParams), Z_Construct_UClass_UCheatManagerExtension_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCheatManagerExtension()
{
	if (!Z_Registration_Info_UClass_UCheatManagerExtension.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCheatManagerExtension.OuterSingleton, Z_Construct_UClass_UCheatManagerExtension_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCheatManagerExtension.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UCheatManagerExtension>()
{
	return UCheatManagerExtension::StaticClass();
}
UCheatManagerExtension::UCheatManagerExtension(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCheatManagerExtension);
UCheatManagerExtension::~UCheatManagerExtension() {}
// End Class UCheatManagerExtension

// Begin Class UCheatManager Function BugIt
struct Z_Construct_UFunction_UCheatManager_BugIt_Statics
{
	struct CheatManager_eventBugIt_Parms
	{
		FString ScreenShotDescription;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09* This function is used to print out the BugIt location.  It prints out copy and paste versions for both IMing someone to type in\n\x09* and also a gameinfo ?options version so that you can append it to your launching url and be taken to the correct place.\n\x09* Additionally, it will take a screen shot so reporting bugs is a one command action!\n\x09*\n\x09**/" },
		{ "CPP_Default_ScreenShotDescription", "" },
		{ "ModuleRelativePath", "Classes/GameFramework/CheatManager.h" },
		{ "ToolTip", "This function is used to print out the BugIt location.  It prints out copy and paste versions for both IMing someone to type in\nand also a gameinfo ?options version so that you can append it to your launching url and be taken to the correct place.\nAdditionally, it will take a screen shot so reporting bugs is a one command action!" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScreenShotDescription_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ScreenShotDescription;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCheatManager_BugIt_Statics::NewProp_ScreenShotDescription = { "ScreenShotDescription", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CheatManager_eventBugIt_Parms, ScreenShotDescription), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScreenShotDescription_MetaData), NewProp_ScreenShotDescription_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCheatManager_BugIt_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCheatManager_BugIt_Statics::NewProp_ScreenShotDescription,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCheatManager_BugIt_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCheatManager_BugIt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCheatManager, nullptr, "BugIt", nullptr, nullptr, Z_Construct_UFunction_UCheatManager_BugIt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCheatManager_BugIt_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCheatManager_BugIt_Statics::CheatManager_eventBugIt_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020602, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCheatManager_BugIt_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCheatManager_BugIt_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCheatManager_BugIt_Statics::CheatManager_eventBugIt_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCheatManager_BugIt()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCheatManager_BugIt_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCheatManager::execBugIt)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_ScreenShotDescription);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BugIt(Z_Param_ScreenShotDescription);
	P_NATIVE_END;
}
// End Class UCheatManager Function BugIt

// Begin Class UCheatManager Function BugItGo
struct Z_Construct_UFunction_UCheatManager_BugItGo_Statics
{
	struct CheatManager_eventBugItGo_Parms
	{
		float X;
		float Y;
		float Z;
		float Pitch;
		float Yaw;
		float Roll;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * This will move the player and set their rotation to the passed in values.\n\x09 * We have this version of the BugIt family as it is easier to type in just raw numbers in the console.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/CheatManager.h" },
		{ "ToolTip", "This will move the player and set their rotation to the passed in values.\nWe have this version of the BugIt family as it is easier to type in just raw numbers in the console." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_X;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Y;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Z;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Pitch;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Yaw;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Roll;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCheatManager_BugItGo_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CheatManager_eventBugItGo_Parms, X), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCheatManager_BugItGo_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CheatManager_eventBugItGo_Parms, Y), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCheatManager_BugItGo_Statics::NewProp_Z = { "Z", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CheatManager_eventBugItGo_Parms, Z), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCheatManager_BugItGo_Statics::NewProp_Pitch = { "Pitch", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CheatManager_eventBugItGo_Parms, Pitch), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCheatManager_BugItGo_Statics::NewProp_Yaw = { "Yaw", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CheatManager_eventBugItGo_Parms, Yaw), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCheatManager_BugItGo_Statics::NewProp_Roll = { "Roll", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CheatManager_eventBugItGo_Parms, Roll), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCheatManager_BugItGo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCheatManager_BugItGo_Statics::NewProp_X,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCheatManager_BugItGo_Statics::NewProp_Y,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCheatManager_BugItGo_Statics::NewProp_Z,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCheatManager_BugItGo_Statics::NewProp_Pitch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCheatManager_BugItGo_Statics::NewProp_Yaw,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCheatManager_BugItGo_Statics::NewProp_Roll,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCheatManager_BugItGo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCheatManager_BugItGo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCheatManager, nullptr, "BugItGo", nullptr, nullptr, Z_Construct_UFunction_UCheatManager_BugItGo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCheatManager_BugItGo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCheatManager_BugItGo_Statics::CheatManager_eventBugItGo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020602, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCheatManager_BugItGo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCheatManager_BugItGo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCheatManager_BugItGo_Statics::CheatManager_eventBugItGo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCheatManager_BugItGo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCheatManager_BugItGo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCheatManager::execBugItGo)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_X);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Y);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Z);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Pitch);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Yaw);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Roll);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BugItGo(Z_Param_X,Z_Param_Y,Z_Param_Z,Z_Param_Pitch,Z_Param_Yaw,Z_Param_Roll);
	P_NATIVE_END;
}
// End Class UCheatManager Function BugItGo

// Begin Class UCheatManager Function BugItStringCreator
struct Z_Construct_UFunction_UCheatManager_BugItStringCreator_Statics
{
	struct CheatManager_eventBugItStringCreator_Parms
	{
		FVector ViewLocation;
		FRotator ViewRotation;
		FString GoString;
		FString LocString;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** This will create a BugItGo string for us.  Nice for calling form c++ where you just want the string and no Screenshots **/" },
		{ "ModuleRelativePath", "Classes/GameFramework/CheatManager.h" },
		{ "ToolTip", "This will create a BugItGo string for us.  Nice for calling form c++ where you just want the string and no Screenshots *" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ViewLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ViewRotation;
	static const UECodeGen_Private::FStrPropertyParams NewProp_GoString;
	static const UECodeGen_Private::FStrPropertyParams NewProp_LocString;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCheatManager_BugItStringCreator_Statics::NewProp_ViewLocation = { "ViewLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CheatManager_eventBugItStringCreator_Parms, ViewLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCheatManager_BugItStringCreator_Statics::NewProp_ViewRotation = { "ViewRotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CheatManager_eventBugItStringCreator_Parms, ViewRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCheatManager_BugItStringCreator_Statics::NewProp_GoString = { "GoString", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CheatManager_eventBugItStringCreator_Parms, GoString), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCheatManager_BugItStringCreator_Statics::NewProp_LocString = { "LocString", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CheatManager_eventBugItStringCreator_Parms, LocString), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCheatManager_BugItStringCreator_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCheatManager_BugItStringCreator_Statics::NewProp_ViewLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCheatManager_BugItStringCreator_Statics::NewProp_ViewRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCheatManager_BugItStringCreator_Statics::NewProp_GoString,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCheatManager_BugItStringCreator_Statics::NewProp_LocString,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCheatManager_BugItStringCreator_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCheatManager_BugItStringCreator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCheatManager, nullptr, "BugItStringCreator", nullptr, nullptr, Z_Construct_UFunction_UCheatManager_BugItStringCreator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCheatManager_BugItStringCreator_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCheatManager_BugItStringCreator_Statics::CheatManager_eventBugItStringCreator_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C20602, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCheatManager_BugItStringCreator_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCheatManager_BugItStringCreator_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCheatManager_BugItStringCreator_Statics::CheatManager_eventBugItStringCreator_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCheatManager_BugItStringCreator()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCheatManager_BugItStringCreator_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCheatManager::execBugItStringCreator)
{
	P_GET_STRUCT(FVector,Z_Param_ViewLocation);
	P_GET_STRUCT(FRotator,Z_Param_ViewRotation);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_GoString);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_LocString);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BugItStringCreator(Z_Param_ViewLocation,Z_Param_ViewRotation,Z_Param_Out_GoString,Z_Param_Out_LocString);
	P_NATIVE_END;
}
// End Class UCheatManager Function BugItStringCreator

// Begin Class UCheatManager Function ChangeSize
struct Z_Construct_UFunction_UCheatManager_ChangeSize_Statics
{
	struct CheatManager_eventChangeSize_Parms
	{
		float F;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Cheat Manager" },
		{ "Comment", "/* Scale the player's size to be F * default size. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/CheatManager.h" },
		{ "ToolTip", "Scale the player's size to be F * default size." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_F;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCheatManager_ChangeSize_Statics::NewProp_F = { "F", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CheatManager_eventChangeSize_Parms, F), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCheatManager_ChangeSize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCheatManager_ChangeSize_Statics::NewProp_F,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCheatManager_ChangeSize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCheatManager_ChangeSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCheatManager, nullptr, "ChangeSize", nullptr, nullptr, Z_Construct_UFunction_UCheatManager_ChangeSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCheatManager_ChangeSize_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCheatManager_ChangeSize_Statics::CheatManager_eventChangeSize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020602, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCheatManager_ChangeSize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCheatManager_ChangeSize_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCheatManager_ChangeSize_Statics::CheatManager_eventChangeSize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCheatManager_ChangeSize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCheatManager_ChangeSize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCheatManager::execChangeSize)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_F);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ChangeSize(Z_Param_F);
	P_NATIVE_END;
}
// End Class UCheatManager Function ChangeSize

// Begin Class UCheatManager Function CheatScript
struct Z_Construct_UFunction_UCheatManager_CheatScript_Statics
{
	struct CheatManager_eventCheatScript_Parms
	{
		FString ScriptName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** Executes commands listed in CheatScript.ScriptName ini section of DefaultGame.ini */" },
		{ "ModuleRelativePath", "Classes/GameFramework/CheatManager.h" },
		{ "ToolTip", "Executes commands listed in CheatScript.ScriptName ini section of DefaultGame.ini" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ScriptName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCheatManager_CheatScript_Statics::NewProp_ScriptName = { "ScriptName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CheatManager_eventCheatScript_Parms, ScriptName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCheatManager_CheatScript_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCheatManager_CheatScript_Statics::NewProp_ScriptName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCheatManager_CheatScript_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCheatManager_CheatScript_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCheatManager, nullptr, "CheatScript", nullptr, nullptr, Z_Construct_UFunction_UCheatManager_CheatScript_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCheatManager_CheatScript_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCheatManager_CheatScript_Statics::CheatManager_eventCheatScript_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020603, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCheatManager_CheatScript_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCheatManager_CheatScript_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCheatManager_CheatScript_Statics::CheatManager_eventCheatScript_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCheatManager_CheatScript()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCheatManager_CheatScript_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCheatManager::execCheatScript)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_ScriptName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CheatScript(Z_Param_ScriptName);
	P_NATIVE_END;
}
// End Class UCheatManager Function CheatScript

// Begin Class UCheatManager Function DamageTarget
struct Z_Construct_UFunction_UCheatManager_DamageTarget_Statics
{
	struct CheatManager_eventDamageTarget_Parms
	{
		float DamageAmount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Cheat Manager" },
		{ "Comment", "/** Damage the actor you're looking at (sourced from the player). */" },
		{ "ModuleRelativePath", "Classes/GameFramework/CheatManager.h" },
		{ "ToolTip", "Damage the actor you're looking at (sourced from the player)." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DamageAmount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCheatManager_DamageTarget_Statics::NewProp_DamageAmount = { "DamageAmount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CheatManager_eventDamageTarget_Parms, DamageAmount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCheatManager_DamageTarget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCheatManager_DamageTarget_Statics::NewProp_DamageAmount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCheatManager_DamageTarget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCheatManager_DamageTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCheatManager, nullptr, "DamageTarget", nullptr, nullptr, Z_Construct_UFunction_UCheatManager_DamageTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCheatManager_DamageTarget_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCheatManager_DamageTarget_Statics::CheatManager_eventDamageTarget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020602, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCheatManager_DamageTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCheatManager_DamageTarget_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCheatManager_DamageTarget_Statics::CheatManager_eventDamageTarget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCheatManager_DamageTarget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCheatManager_DamageTarget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCheatManager::execDamageTarget)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_DamageAmount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DamageTarget(Z_Param_DamageAmount);
	P_NATIVE_END;
}
// End Class UCheatManager Function DamageTarget

// Begin Class UCheatManager Function DebugCapsuleSweep
struct Z_Construct_UFunction_UCheatManager_DebugCapsuleSweep_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** Toggle capsule trace debugging. Will trace a capsule from current view point and show where it hits the world */" },
		{ "ModuleRelativePath", "Classes/GameFramework/CheatManager.h" },
		{ "ToolTip", "Toggle capsule trace debugging. Will trace a capsule from current view point and show where it hits the world" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCheatManager_DebugCapsuleSweep_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCheatManager, nullptr, "DebugCapsuleSweep", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020602, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCheatManager_DebugCapsuleSweep_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCheatManager_DebugCapsuleSweep_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UCheatManager_DebugCapsuleSweep()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCheatManager_DebugCapsuleSweep_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCheatManager::execDebugCapsuleSweep)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DebugCapsuleSweep();
	P_NATIVE_END;
}
// End Class UCheatManager Function DebugCapsuleSweep

// Begin Class UCheatManager Function DebugCapsuleSweepCapture
struct Z_Construct_UFunction_UCheatManager_DebugCapsuleSweepCapture_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** Capture current trace and add to persistent list **/" },
		{ "ModuleRelativePath", "Classes/GameFramework/CheatManager.h" },
		{ "ToolTip", "Capture current trace and add to persistent list *" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCheatManager_DebugCapsuleSweepCapture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCheatManager, nullptr, "DebugCapsuleSweepCapture", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020602, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCheatManager_DebugCapsuleSweepCapture_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCheatManager_DebugCapsuleSweepCapture_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UCheatManager_DebugCapsuleSweepCapture()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCheatManager_DebugCapsuleSweepCapture_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCheatManager::execDebugCapsuleSweepCapture)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DebugCapsuleSweepCapture();
	P_NATIVE_END;
}
// End Class UCheatManager Function DebugCapsuleSweepCapture

// Begin Class UCheatManager Function DebugCapsuleSweepChannel
struct Z_Construct_UFunction_UCheatManager_DebugCapsuleSweepChannel_Statics
{
	struct CheatManager_eventDebugCapsuleSweepChannel_Parms
	{
		TEnumAsByte<ECollisionChannel> Channel;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** Change Trace Channel **/" },
		{ "ModuleRelativePath", "Classes/GameFramework/CheatManager.h" },
		{ "ToolTip", "Change Trace Channel *" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Channel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCheatManager_DebugCapsuleSweepChannel_Statics::NewProp_Channel = { "Channel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CheatManager_eventDebugCapsuleSweepChannel_Parms, Channel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(0, nullptr) }; // 756624936
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCheatManager_DebugCapsuleSweepChannel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCheatManager_DebugCapsuleSweepChannel_Statics::NewProp_Channel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCheatManager_DebugCapsuleSweepChannel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCheatManager_DebugCapsuleSweepChannel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCheatManager, nullptr, "DebugCapsuleSweepChannel", nullptr, nullptr, Z_Construct_UFunction_UCheatManager_DebugCapsuleSweepChannel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCheatManager_DebugCapsuleSweepChannel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCheatManager_DebugCapsuleSweepChannel_Statics::CheatManager_eventDebugCapsuleSweepChannel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020602, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCheatManager_DebugCapsuleSweepChannel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCheatManager_DebugCapsuleSweepChannel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCheatManager_DebugCapsuleSweepChannel_Statics::CheatManager_eventDebugCapsuleSweepChannel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCheatManager_DebugCapsuleSweepChannel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCheatManager_DebugCapsuleSweepChannel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCheatManager::execDebugCapsuleSweepChannel)
{
	P_GET_PROPERTY(FByteProperty,Z_Param_Channel);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DebugCapsuleSweepChannel(ECollisionChannel(Z_Param_Channel));
	P_NATIVE_END;
}
// End Class UCheatManager Function DebugCapsuleSweepChannel

// Begin Class UCheatManager Function DebugCapsuleSweepClear
struct Z_Construct_UFunction_UCheatManager_DebugCapsuleSweepClear_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** Clear persistent list for trace capture **/" },
		{ "ModuleRelativePath", "Classes/GameFramework/CheatManager.h" },
		{ "ToolTip", "Clear persistent list for trace capture *" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCheatManager_DebugCapsuleSweepClear_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCheatManager, nullptr, "DebugCapsuleSweepClear", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020602, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCheatManager_DebugCapsuleSweepClear_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCheatManager_DebugCapsuleSweepClear_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UCheatManager_DebugCapsuleSweepClear()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCheatManager_DebugCapsuleSweepClear_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCheatManager::execDebugCapsuleSweepClear)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DebugCapsuleSweepClear();
	P_NATIVE_END;
}
// End Class UCheatManager Function DebugCapsuleSweepClear

// Begin Class UCheatManager Function DebugCapsuleSweepComplex
struct Z_Construct_UFunction_UCheatManager_DebugCapsuleSweepComplex_Statics
{
	struct CheatManager_eventDebugCapsuleSweepComplex_Parms
	{
		bool bTraceComplex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** Change Trace Complex setting **/" },
		{ "ModuleRelativePath", "Classes/GameFramework/CheatManager.h" },
		{ "ToolTip", "Change Trace Complex setting *" },
	};
#endif // WITH_METADATA
	static void NewProp_bTraceComplex_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTraceComplex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UCheatManager_DebugCapsuleSweepComplex_Statics::NewProp_bTraceComplex_SetBit(void* Obj)
{
	((CheatManager_eventDebugCapsuleSweepComplex_Parms*)Obj)->bTraceComplex = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCheatManager_DebugCapsuleSweepComplex_Statics::NewProp_bTraceComplex = { "bTraceComplex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CheatManager_eventDebugCapsuleSweepComplex_Parms), &Z_Construct_UFunction_UCheatManager_DebugCapsuleSweepComplex_Statics::NewProp_bTraceComplex_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCheatManager_DebugCapsuleSweepComplex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCheatManager_DebugCapsuleSweepComplex_Statics::NewProp_bTraceComplex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCheatManager_DebugCapsuleSweepComplex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCheatManager_DebugCapsuleSweepComplex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCheatManager, nullptr, "DebugCapsuleSweepComplex", nullptr, nullptr, Z_Construct_UFunction_UCheatManager_DebugCapsuleSweepComplex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCheatManager_DebugCapsuleSweepComplex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCheatManager_DebugCapsuleSweepComplex_Statics::CheatManager_eventDebugCapsuleSweepComplex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020602, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCheatManager_DebugCapsuleSweepComplex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCheatManager_DebugCapsuleSweepComplex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCheatManager_DebugCapsuleSweepComplex_Statics::CheatManager_eventDebugCapsuleSweepComplex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCheatManager_DebugCapsuleSweepComplex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCheatManager_DebugCapsuleSweepComplex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCheatManager::execDebugCapsuleSweepComplex)
{
	P_GET_UBOOL(Z_Param_bTraceComplex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DebugCapsuleSweepComplex(Z_Param_bTraceComplex);
	P_NATIVE_END;
}
// End Class UCheatManager Function DebugCapsuleSweepComplex

// Begin Class UCheatManager Function DebugCapsuleSweepPawn
struct Z_Construct_UFunction_UCheatManager_DebugCapsuleSweepPawn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** Capture current local PC's pawn's location and add to persistent list **/" },
		{ "ModuleRelativePath", "Classes/GameFramework/CheatManager.h" },
		{ "ToolTip", "Capture current local PC's pawn's location and add to persistent list *" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCheatManager_DebugCapsuleSweepPawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCheatManager, nullptr, "DebugCapsuleSweepPawn", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020602, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCheatManager_DebugCapsuleSweepPawn_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCheatManager_DebugCapsuleSweepPawn_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UCheatManager_DebugCapsuleSweepPawn()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCheatManager_DebugCapsuleSweepPawn_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCheatManager::execDebugCapsuleSweepPawn)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DebugCapsuleSweepPawn();
	P_NATIVE_END;
}
// End Class UCheatManager Function DebugCapsuleSweepPawn

// Begin Class UCheatManager Function DebugCapsuleSweepSize
struct Z_Construct_UFunction_UCheatManager_DebugCapsuleSweepSize_Statics
{
	struct CheatManager_eventDebugCapsuleSweepSize_Parms
	{
		float HalfHeight;
		float Radius;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** Change Trace capsule size **/" },
		{ "ModuleRelativePath", "Classes/GameFramework/CheatManager.h" },
		{ "ToolTip", "Change Trace capsule size *" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HalfHeight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCheatManager_DebugCapsuleSweepSize_Statics::NewProp_HalfHeight = { "HalfHeight", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CheatManager_eventDebugCapsuleSweepSize_Parms, HalfHeight), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCheatManager_DebugCapsuleSweepSize_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CheatManager_eventDebugCapsuleSweepSize_Parms, Radius), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCheatManager_DebugCapsuleSweepSize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCheatManager_DebugCapsuleSweepSize_Statics::NewProp_HalfHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCheatManager_DebugCapsuleSweepSize_Statics::NewProp_Radius,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCheatManager_DebugCapsuleSweepSize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCheatManager_DebugCapsuleSweepSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCheatManager, nullptr, "DebugCapsuleSweepSize", nullptr, nullptr, Z_Construct_UFunction_UCheatManager_DebugCapsuleSweepSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCheatManager_DebugCapsuleSweepSize_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCheatManager_DebugCapsuleSweepSize_Statics::CheatManager_eventDebugCapsuleSweepSize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020602, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCheatManager_DebugCapsuleSweepSize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCheatManager_DebugCapsuleSweepSize_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCheatManager_DebugCapsuleSweepSize_Statics::CheatManager_eventDebugCapsuleSweepSize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCheatManager_DebugCapsuleSweepSize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCheatManager_DebugCapsuleSweepSize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCheatManager::execDebugCapsuleSweepSize)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_HalfHeight);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DebugCapsuleSweepSize(Z_Param_HalfHeight,Z_Param_Radius);
	P_NATIVE_END;
}
// End Class UCheatManager Function DebugCapsuleSweepSize

// Begin Class UCheatManager Function DestroyAll
struct Z_Construct_UFunction_UCheatManager_DestroyAll_Statics
{
	struct CheatManager_eventDestroyAll_Parms
	{
		TSubclassOf<AActor> aClass;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** Destroy all actors of class aClass */" },
		{ "ModuleRelativePath", "Classes/GameFramework/CheatManager.h" },
		{ "ToolTip", "Destroy all actors of class aClass" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_aClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UCheatManager_DestroyAll_Statics::NewProp_aClass = { "aClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CheatManager_eventDestroyAll_Parms, aClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCheatManager_DestroyAll_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCheatManager_DestroyAll_Statics::NewProp_aClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCheatManager_DestroyAll_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCheatManager_DestroyAll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCheatManager, nullptr, "DestroyAll", nullptr, nullptr, Z_Construct_UFunction_UCheatManager_DestroyAll_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCheatManager_DestroyAll_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCheatManager_DestroyAll_Statics::CheatManager_eventDestroyAll_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020602, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCheatManager_DestroyAll_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCheatManager_DestroyAll_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCheatManager_DestroyAll_Statics::CheatManager_eventDestroyAll_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCheatManager_DestroyAll()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCheatManager_DestroyAll_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCheatManager::execDestroyAll)
{
	P_GET_OBJECT(UClass,Z_Param_aClass);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DestroyAll(Z_Param_aClass);
	P_NATIVE_END;
}
// End Class UCheatManager Function DestroyAll

// Begin Class UCheatManager Function DestroyAllPawnsExceptTarget
struct Z_Construct_UFunction_UCheatManager_DestroyAllPawnsExceptTarget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** Destroy all pawns except for the (pawn) target.  If no (pawn) target is found we don't destroy anything. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/CheatManager.h" },
		{ "ToolTip", "Destroy all pawns except for the (pawn) target.  If no (pawn) target is found we don't destroy anything." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCheatManager_DestroyAllPawnsExceptTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCheatManager, nullptr, "DestroyAllPawnsExceptTarget", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020602, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCheatManager_DestroyAllPawnsExceptTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCheatManager_DestroyAllPawnsExceptTarget_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UCheatManager_DestroyAllPawnsExceptTarget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCheatManager_DestroyAllPawnsExceptTarget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCheatManager::execDestroyAllPawnsExceptTarget)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DestroyAllPawnsExceptTarget();
	P_NATIVE_END;
}
// End Class UCheatManager Function DestroyAllPawnsExceptTarget

// Begin Class UCheatManager Function DestroyPawns
struct Z_Construct_UFunction_UCheatManager_DestroyPawns_Statics
{
	struct CheatManager_eventDestroyPawns_Parms
	{
		TSubclassOf<APawn> aClass;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** Destroys (by calling destroy directly) all non-player pawns of class aClass in the level */" },
		{ "ModuleRelativePath", "Classes/GameFramework/CheatManager.h" },
		{ "ToolTip", "Destroys (by calling destroy directly) all non-player pawns of class aClass in the level" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_aClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UCheatManager_DestroyPawns_Statics::NewProp_aClass = { "aClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CheatManager_eventDestroyPawns_Parms, aClass), Z_Construct_UClass_UClass, Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCheatManager_DestroyPawns_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCheatManager_DestroyPawns_Statics::NewProp_aClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCheatManager_DestroyPawns_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCheatManager_DestroyPawns_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCheatManager, nullptr, "DestroyPawns", nullptr, nullptr, Z_Construct_UFunction_UCheatManager_DestroyPawns_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCheatManager_DestroyPawns_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCheatManager_DestroyPawns_Statics::CheatManager_eventDestroyPawns_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020602, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCheatManager_DestroyPawns_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCheatManager_DestroyPawns_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCheatManager_DestroyPawns_Statics::CheatManager_eventDestroyPawns_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCheatManager_DestroyPawns()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCheatManager_DestroyPawns_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCheatManager::execDestroyPawns)
{
	P_GET_OBJECT(UClass,Z_Param_aClass);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DestroyPawns(Z_Param_aClass);
	P_NATIVE_END;
}
// End Class UCheatManager Function DestroyPawns

// Begin Class UCheatManager Function DestroyServerStatReplicator
struct Z_Construct_UFunction_UCheatManager_DestroyServerStatReplicator_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/CheatManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCheatManager_DestroyServerStatReplicator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCheatManager, nullptr, "DestroyServerStatReplicator", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020603, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCheatManager_DestroyServerStatReplicator_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCheatManager_DestroyServerStatReplicator_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UCheatManager_DestroyServerStatReplicator()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCheatManager_DestroyServerStatReplicator_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCheatManager::execDestroyServerStatReplicator)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DestroyServerStatReplicator();
	P_NATIVE_END;
}
// End Class UCheatManager Function DestroyServerStatReplicator

// Begin Class UCheatManager Function DestroyTarget
struct Z_Construct_UFunction_UCheatManager_DestroyTarget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Cheat Manager" },
		{ "Comment", "/** Destroy the actor you're looking at. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/CheatManager.h" },
		{ "ToolTip", "Destroy the actor you're looking at." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCheatManager_DestroyTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCheatManager, nullptr, "DestroyTarget", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020602, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCheatManager_DestroyTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCheatManager_DestroyTarget_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UCheatManager_DestroyTarget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCheatManager_DestroyTarget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCheatManager::execDestroyTarget)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DestroyTarget();
	P_NATIVE_END;
}
// End Class UCheatManager Function DestroyTarget

// Begin Class UCheatManager Function DisableDebugCamera
struct Z_Construct_UFunction_UCheatManager_DisableDebugCamera_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Cheat Manager" },
		{ "Comment", "/** Switch controller from debug camera back to normal controller */" },
		{ "ModuleRelativePath", "Classes/GameFramework/CheatManager.h" },
		{ "ToolTip", "Switch controller from debug camera back to normal controller" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCheatManager_DisableDebugCamera_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCheatManager, nullptr, "DisableDebugCamera", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCheatManager_DisableDebugCamera_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCheatManager_DisableDebugCamera_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UCheatManager_DisableDebugCamera()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCheatManager_DisableDebugCamera_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCheatManager::execDisableDebugCamera)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DisableDebugCamera();
	P_NATIVE_END;
}
// End Class UCheatManager Function DisableDebugCamera

// Begin Class UCheatManager Function DumpChatState
struct Z_Construct_UFunction_UCheatManager_DumpChatState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** Dump known chat information */" },
		{ "ModuleRelativePath", "Classes/GameFramework/CheatManager.h" },
		{ "ToolTip", "Dump known chat information" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCheatManager_DumpChatState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCheatManager, nullptr, "DumpChatState", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020602, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCheatManager_DumpChatState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCheatManager_DumpChatState_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UCheatManager_DumpChatState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCheatManager_DumpChatState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCheatManager::execDumpChatState)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DumpChatState();
	P_NATIVE_END;
}
// End Class UCheatManager Function DumpChatState

// Begin Class UCheatManager Function DumpOnlineSessionState
struct Z_Construct_UFunction_UCheatManager_DumpOnlineSessionState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** Dump online session information */" },
		{ "ModuleRelativePath", "Classes/GameFramework/CheatManager.h" },
		{ "ToolTip", "Dump online session information" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCheatManager_DumpOnlineSessionState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCheatManager, nullptr, "DumpOnlineSessionState", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020602, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCheatManager_DumpOnlineSessionState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCheatManager_DumpOnlineSessionState_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UCheatManager_DumpOnlineSessionState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCheatManager_DumpOnlineSessionState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCheatManager::execDumpOnlineSessionState)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DumpOnlineSessionState();
	P_NATIVE_END;
}
// End Class UCheatManager Function DumpOnlineSessionState

// Begin Class UCheatManager Function DumpPartyState
struct Z_Construct_UFunction_UCheatManager_DumpPartyState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** Dump known party information */" },
		{ "ModuleRelativePath", "Classes/GameFramework/CheatManager.h" },
		{ "ToolTip", "Dump known party information" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCheatManager_DumpPartyState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCheatManager, nullptr, "DumpPartyState", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020602, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCheatManager_DumpPartyState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCheatManager_DumpPartyState_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UCheatManager_DumpPartyState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCheatManager_DumpPartyState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCheatManager::execDumpPartyState)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DumpPartyState();
	P_NATIVE_END;
}
// End Class UCheatManager Function DumpPartyState

// Begin Class UCheatManager Function DumpVoiceMutingState
struct Z_Construct_UFunction_UCheatManager_DumpVoiceMutingState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** Dump current state of voice chat */" },
		{ "ModuleRelativePath", "Classes/GameFramework/CheatManager.h" },
		{ "ToolTip", "Dump current state of voice chat" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCheatManager_DumpVoiceMutingState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCheatManager, nullptr, "DumpVoiceMutingState", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020602, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCheatManager_DumpVoiceMutingState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCheatManager_DumpVoiceMutingState_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UCheatManager_DumpVoiceMutingState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCheatManager_DumpVoiceMutingState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCheatManager::execDumpVoiceMutingState)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DumpVoiceMutingState();
	P_NATIVE_END;
}
// End Class UCheatManager Function DumpVoiceMutingState

// Begin Class UCheatManager Function EnableDebugCamera
struct Z_Construct_UFunction_UCheatManager_EnableDebugCamera_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Cheat Manager" },
		{ "Comment", "/** Switch controller to debug camera without locking gameplay and with locking local player controller input */" },
		{ "ModuleRelativePath", "Classes/GameFramework/CheatManager.h" },
		{ "ToolTip", "Switch controller to debug camera without locking gameplay and with locking local player controller input" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCheatManager_EnableDebugCamera_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCheatManager, nullptr, "EnableDebugCamera", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCheatManager_EnableDebugCamera_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCheatManager_EnableDebugCamera_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UCheatManager_EnableDebugCamera()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCheatManager_EnableDebugCamera_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCheatManager::execEnableDebugCamera)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EnableDebugCamera();
	P_NATIVE_END;
}
// End Class UCheatManager Function EnableDebugCamera

// Begin Class UCheatManager Function FlushLog
struct Z_Construct_UFunction_UCheatManager_FlushLog_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** This will force a flush of the output log to file*/" },
		{ "ModuleRelativePath", "Classes/GameFramework/CheatManager.h" },
		{ "ToolTip", "This will force a flush of the output log to file" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCheatManager_FlushLog_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCheatManager, nullptr, "FlushLog", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020602, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCheatManager_FlushLog_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCheatManager_FlushLog_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UCheatManager_FlushLog()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCheatManager_FlushLog_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCheatManager::execFlushLog)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->FlushLog();
	P_NATIVE_END;
}
// End Class UCheatManager Function FlushLog

// Begin Class UCheatManager Function Fly
struct Z_Construct_UFunction_UCheatManager_Fly_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Cheat Manager" },
		{ "Comment", "/** Pawn can fly. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/CheatManager.h" },
		{ "ToolTip", "Pawn can fly." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCheatManager_Fly_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCheatManager, nullptr, "Fly", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020602, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCheatManager_Fly_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCheatManager_Fly_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UCheatManager_Fly()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCheatManager_Fly_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCheatManager::execFly)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Fly();
	P_NATIVE_END;
}
// End Class UCheatManager Function Fly

// Begin Class UCheatManager Function FreezeFrame
struct Z_Construct_UFunction_UCheatManager_FreezeFrame_Statics
{
	struct CheatManager_eventFreezeFrame_Parms
	{
		float Delay;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Cheat Manager" },
		{ "Comment", "/** Pause the game for Delay seconds. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/CheatManager.h" },
		{ "ToolTip", "Pause the game for Delay seconds." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Delay;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCheatManager_FreezeFrame_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CheatManager_eventFreezeFrame_Parms, Delay), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCheatManager_FreezeFrame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCheatManager_FreezeFrame_Statics::NewProp_Delay,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCheatManager_FreezeFrame_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCheatManager_FreezeFrame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCheatManager, nullptr, "FreezeFrame", nullptr, nullptr, Z_Construct_UFunction_UCheatManager_FreezeFrame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCheatManager_FreezeFrame_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCheatManager_FreezeFrame_Statics::CheatManager_eventFreezeFrame_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020602, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCheatManager_FreezeFrame_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCheatManager_FreezeFrame_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCheatManager_FreezeFrame_Statics::CheatManager_eventFreezeFrame_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCheatManager_FreezeFrame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCheatManager_FreezeFrame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCheatManager::execFreezeFrame)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Delay);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->FreezeFrame(Z_Param_Delay);
	P_NATIVE_END;
}
// End Class UCheatManager Function FreezeFrame

// Begin Class UCheatManager Function GetPlayerController
struct Z_Construct_UFunction_UCheatManager_GetPlayerController_Statics
{
	struct CheatManager_eventGetPlayerController_Parms
	{
		APlayerController* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Cheat Manager" },
		{ "ModuleRelativePath", "Classes/GameFramework/CheatManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCheatManager_GetPlayerController_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CheatManager_eventGetPlayerController_Parms, ReturnValue), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCheatManager_GetPlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCheatManager_GetPlayerController_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCheatManager_GetPlayerController_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCheatManager_GetPlayerController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCheatManager, nullptr, "GetPlayerController", nullptr, nullptr, Z_Construct_UFunction_UCheatManager_GetPlayerController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCheatManager_GetPlayerController_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCheatManager_GetPlayerController_Statics::CheatManager_eventGetPlayerController_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCheatManager_GetPlayerController_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCheatManager_GetPlayerController_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCheatManager_GetPlayerController_Statics::CheatManager_eventGetPlayerController_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCheatManager_GetPlayerController()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCheatManager_GetPlayerController_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCheatManager::execGetPlayerController)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(APlayerController**)Z_Param__Result=P_THIS->GetPlayerController();
	P_NATIVE_END;
}
// End Class UCheatManager Function GetPlayerController

// Begin Class UCheatManager Function Ghost
struct Z_Construct_UFunction_UCheatManager_Ghost_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Cheat Manager" },
		{ "Comment", "/** Pawn no longer collides with the world, and can fly */" },
		{ "ModuleRelativePath", "Classes/GameFramework/CheatManager.h" },
		{ "ToolTip", "Pawn no longer collides with the world, and can fly" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCheatManager_Ghost_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCheatManager, nullptr, "Ghost", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020602, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCheatManager_Ghost_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCheatManager_Ghost_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UCheatManager_Ghost()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCheatManager_Ghost_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCheatManager::execGhost)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Ghost();
	P_NATIVE_END;
}
// End Class UCheatManager Function Ghost

// Begin Class UCheatManager Function God
struct Z_Construct_UFunction_UCheatManager_God_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Cheat Manager" },
		{ "Comment", "/** Invulnerability cheat. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/CheatManager.h" },
		{ "ToolTip", "Invulnerability cheat." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCheatManager_God_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCheatManager, nullptr, "God", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020602, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCheatManager_God_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCheatManager_God_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UCheatManager_God()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCheatManager_God_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCheatManager::execGod)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->God();
	P_NATIVE_END;
}
// End Class UCheatManager Function God

// Begin Class UCheatManager Function InvertMouse
struct Z_Construct_UFunction_UCheatManager_InvertMouse_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** Backwards compatibility exec function for people used to it instead of using InvertAxisKey */" },
		{ "ModuleRelativePath", "Classes/GameFramework/CheatManager.h" },
		{ "ToolTip", "Backwards compatibility exec function for people used to it instead of using InvertAxisKey" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCheatManager_InvertMouse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCheatManager, nullptr, "InvertMouse", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020602, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCheatManager_InvertMouse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCheatManager_InvertMouse_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UCheatManager_InvertMouse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCheatManager_InvertMouse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCheatManager::execInvertMouse)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InvertMouse();
	P_NATIVE_END;
}
// End Class UCheatManager Function InvertMouse

// Begin Class UCheatManager Function LogLoc
struct Z_Construct_UFunction_UCheatManager_LogLoc_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** Logs the current location in bugit format without taking screenshot and further routing. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/CheatManager.h" },
		{ "ToolTip", "Logs the current location in bugit format without taking screenshot and further routing." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCheatManager_LogLoc_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCheatManager, nullptr, "LogLoc", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020602, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCheatManager_LogLoc_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCheatManager_LogLoc_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UCheatManager_LogLoc()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCheatManager_LogLoc_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCheatManager::execLogLoc)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LogLoc();
	P_NATIVE_END;
}
// End Class UCheatManager Function LogLoc

// Begin Class UCheatManager Function OnlyLoadLevel
struct Z_Construct_UFunction_UCheatManager_OnlyLoadLevel_Statics
{
	struct CheatManager_eventOnlyLoadLevel_Parms
	{
		FName PackageName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** Load the given level. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/CheatManager.h" },
		{ "ToolTip", "Load the given level." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_PackageName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UCheatManager_OnlyLoadLevel_Statics::NewProp_PackageName = { "PackageName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CheatManager_eventOnlyLoadLevel_Parms, PackageName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCheatManager_OnlyLoadLevel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCheatManager_OnlyLoadLevel_Statics::NewProp_PackageName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCheatManager_OnlyLoadLevel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCheatManager_OnlyLoadLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCheatManager, nullptr, "OnlyLoadLevel", nullptr, nullptr, Z_Construct_UFunction_UCheatManager_OnlyLoadLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCheatManager_OnlyLoadLevel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCheatManager_OnlyLoadLevel_Statics::CheatManager_eventOnlyLoadLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020602, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCheatManager_OnlyLoadLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCheatManager_OnlyLoadLevel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCheatManager_OnlyLoadLevel_Statics::CheatManager_eventOnlyLoadLevel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCheatManager_OnlyLoadLevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCheatManager_OnlyLoadLevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCheatManager::execOnlyLoadLevel)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_PackageName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnlyLoadLevel(Z_Param_PackageName);
	P_NATIVE_END;
}
// End Class UCheatManager Function OnlyLoadLevel

// Begin Class UCheatManager Function OnPlayerEndPlayed
struct Z_Construct_UFunction_UCheatManager_OnPlayerEndPlayed_Statics
{
	struct CheatManager_eventOnPlayerEndPlayed_Parms
	{
		AActor* Player;
		TEnumAsByte<EEndPlayReason::Type> EndPlayReason;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/CheatManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Player;
	static const UECodeGen_Private::FBytePropertyParams NewProp_EndPlayReason;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCheatManager_OnPlayerEndPlayed_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CheatManager_eventOnPlayerEndPlayed_Parms, Player), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCheatManager_OnPlayerEndPlayed_Statics::NewProp_EndPlayReason = { "EndPlayReason", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CheatManager_eventOnPlayerEndPlayed_Parms, EndPlayReason), Z_Construct_UEnum_Engine_EEndPlayReason, METADATA_PARAMS(0, nullptr) }; // 2448981352
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCheatManager_OnPlayerEndPlayed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCheatManager_OnPlayerEndPlayed_Statics::NewProp_Player,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCheatManager_OnPlayerEndPlayed_Statics::NewProp_EndPlayReason,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCheatManager_OnPlayerEndPlayed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCheatManager_OnPlayerEndPlayed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCheatManager, nullptr, "OnPlayerEndPlayed", nullptr, nullptr, Z_Construct_UFunction_UCheatManager_OnPlayerEndPlayed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCheatManager_OnPlayerEndPlayed_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCheatManager_OnPlayerEndPlayed_Statics::CheatManager_eventOnPlayerEndPlayed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCheatManager_OnPlayerEndPlayed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCheatManager_OnPlayerEndPlayed_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCheatManager_OnPlayerEndPlayed_Statics::CheatManager_eventOnPlayerEndPlayed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCheatManager_OnPlayerEndPlayed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCheatManager_OnPlayerEndPlayed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCheatManager::execOnPlayerEndPlayed)
{
	P_GET_OBJECT(AActor,Z_Param_Player);
	P_GET_PROPERTY(FByteProperty,Z_Param_EndPlayReason);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnPlayerEndPlayed(Z_Param_Player,EEndPlayReason::Type(Z_Param_EndPlayReason));
	P_NATIVE_END;
}
// End Class UCheatManager Function OnPlayerEndPlayed

// Begin Class UCheatManager Function PlayersOnly
struct Z_Construct_UFunction_UCheatManager_PlayersOnly_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Cheat Manager" },
		{ "Comment", "/** Freeze everything in the level except for players. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/CheatManager.h" },
		{ "ToolTip", "Freeze everything in the level except for players." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCheatManager_PlayersOnly_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCheatManager, nullptr, "PlayersOnly", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020602, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCheatManager_PlayersOnly_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCheatManager_PlayersOnly_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UCheatManager_PlayersOnly()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCheatManager_PlayersOnly_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCheatManager::execPlayersOnly)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PlayersOnly();
	P_NATIVE_END;
}
// End Class UCheatManager Function PlayersOnly

// Begin Class UCheatManager Function ReceiveEndPlay
static const FName NAME_UCheatManager_ReceiveEndPlay = FName(TEXT("ReceiveEndPlay"));
void UCheatManager::ReceiveEndPlay()
{
	UFunction* Func = FindFunctionChecked(NAME_UCheatManager_ReceiveEndPlay);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_UCheatManager_ReceiveEndPlay_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09* This is the End Play event for the CheatManager\n\x09*/" },
		{ "DisplayName", "Shutdown" },
		{ "keywords", "endplay" },
		{ "ModuleRelativePath", "Classes/GameFramework/CheatManager.h" },
		{ "ToolTip", "This is the End Play event for the CheatManager" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCheatManager_ReceiveEndPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCheatManager, nullptr, "ReceiveEndPlay", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020802, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCheatManager_ReceiveEndPlay_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCheatManager_ReceiveEndPlay_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UCheatManager_ReceiveEndPlay()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCheatManager_ReceiveEndPlay_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UCheatManager Function ReceiveEndPlay

// Begin Class UCheatManager Function ReceiveInitCheatManager
static const FName NAME_UCheatManager_ReceiveInitCheatManager = FName(TEXT("ReceiveInitCheatManager"));
void UCheatManager::ReceiveInitCheatManager()
{
	UFunction* Func = FindFunctionChecked(NAME_UCheatManager_ReceiveInitCheatManager);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_UCheatManager_ReceiveInitCheatManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** \n\x09* BP implementable event for when CheatManager is created to allow any needed initialization.  \n\x09*/" },
		{ "DisplayName", "Init Cheat Manager" },
		{ "Keywords", "Begin Play" },
		{ "ModuleRelativePath", "Classes/GameFramework/CheatManager.h" },
		{ "ToolTip", "BP implementable event for when CheatManager is created to allow any needed initialization." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCheatManager_ReceiveInitCheatManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCheatManager, nullptr, "ReceiveInitCheatManager", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020802, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCheatManager_ReceiveInitCheatManager_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCheatManager_ReceiveInitCheatManager_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UCheatManager_ReceiveInitCheatManager()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCheatManager_ReceiveInitCheatManager_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UCheatManager Function ReceiveInitCheatManager

// Begin Class UCheatManager Function ServerToggleAILogging
static const FName NAME_UCheatManager_ServerToggleAILogging = FName(TEXT("ServerToggleAILogging"));
void UCheatManager::ServerToggleAILogging()
{
	UFunction* Func = FindFunctionChecked(NAME_UCheatManager_ServerToggleAILogging);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_UCheatManager_ServerToggleAILogging_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/CheatManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCheatManager_ServerToggleAILogging_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCheatManager, nullptr, "ServerToggleAILogging", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC2, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCheatManager_ServerToggleAILogging_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCheatManager_ServerToggleAILogging_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UCheatManager_ServerToggleAILogging()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCheatManager_ServerToggleAILogging_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCheatManager::execServerToggleAILogging)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->ServerToggleAILogging_Validate())
	{
		RPC_ValidateFailed(TEXT("ServerToggleAILogging_Validate"));
		return;
	}
	P_THIS->ServerToggleAILogging_Implementation();
	P_NATIVE_END;
}
// End Class UCheatManager Function ServerToggleAILogging

// Begin Class UCheatManager Function SetMouseSensitivityToDefault
struct Z_Construct_UFunction_UCheatManager_SetMouseSensitivityToDefault_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** Exec function to return the mouse sensitivity to its default value */" },
		{ "ModuleRelativePath", "Classes/GameFramework/CheatManager.h" },
		{ "ToolTip", "Exec function to return the mouse sensitivity to its default value" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCheatManager_SetMouseSensitivityToDefault_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCheatManager, nullptr, "SetMouseSensitivityToDefault", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020602, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCheatManager_SetMouseSensitivityToDefault_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCheatManager_SetMouseSensitivityToDefault_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UCheatManager_SetMouseSensitivityToDefault()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCheatManager_SetMouseSensitivityToDefault_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCheatManager::execSetMouseSensitivityToDefault)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMouseSensitivityToDefault();
	P_NATIVE_END;
}
// End Class UCheatManager Function SetMouseSensitivityToDefault

// Begin Class UCheatManager Function SetWorldOrigin
struct Z_Construct_UFunction_UCheatManager_SetWorldOrigin_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** Translate world origin to this player position */" },
		{ "ModuleRelativePath", "Classes/GameFramework/CheatManager.h" },
		{ "ToolTip", "Translate world origin to this player position" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCheatManager_SetWorldOrigin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCheatManager, nullptr, "SetWorldOrigin", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020603, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCheatManager_SetWorldOrigin_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCheatManager_SetWorldOrigin_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UCheatManager_SetWorldOrigin()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCheatManager_SetWorldOrigin_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCheatManager::execSetWorldOrigin)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetWorldOrigin();
	P_NATIVE_END;
}
// End Class UCheatManager Function SetWorldOrigin

// Begin Class UCheatManager Function Slomo
struct Z_Construct_UFunction_UCheatManager_Slomo_Statics
{
	struct CheatManager_eventSlomo_Parms
	{
		float NewTimeDilation;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Cheat Manager" },
		{ "Comment", "/** Modify time dilation to change apparent speed of passage of time. e.g. \"Slomo 0.1\" makes everything move very slowly, while \"Slomo 10\" makes everything move very fast. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/CheatManager.h" },
		{ "ToolTip", "Modify time dilation to change apparent speed of passage of time. e.g. \"Slomo 0.1\" makes everything move very slowly, while \"Slomo 10\" makes everything move very fast." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewTimeDilation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCheatManager_Slomo_Statics::NewProp_NewTimeDilation = { "NewTimeDilation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CheatManager_eventSlomo_Parms, NewTimeDilation), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCheatManager_Slomo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCheatManager_Slomo_Statics::NewProp_NewTimeDilation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCheatManager_Slomo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCheatManager_Slomo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCheatManager, nullptr, "Slomo", nullptr, nullptr, Z_Construct_UFunction_UCheatManager_Slomo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCheatManager_Slomo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCheatManager_Slomo_Statics::CheatManager_eventSlomo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020602, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCheatManager_Slomo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCheatManager_Slomo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCheatManager_Slomo_Statics::CheatManager_eventSlomo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCheatManager_Slomo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCheatManager_Slomo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCheatManager::execSlomo)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewTimeDilation);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Slomo(Z_Param_NewTimeDilation);
	P_NATIVE_END;
}
// End Class UCheatManager Function Slomo

// Begin Class UCheatManager Function SpawnServerStatReplicator
struct Z_Construct_UFunction_UCheatManager_SpawnServerStatReplicator_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/CheatManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCheatManager_SpawnServerStatReplicator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCheatManager, nullptr, "SpawnServerStatReplicator", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020603, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCheatManager_SpawnServerStatReplicator_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCheatManager_SpawnServerStatReplicator_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UCheatManager_SpawnServerStatReplicator()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCheatManager_SpawnServerStatReplicator_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCheatManager::execSpawnServerStatReplicator)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SpawnServerStatReplicator();
	P_NATIVE_END;
}
// End Class UCheatManager Function SpawnServerStatReplicator

// Begin Class UCheatManager Function StreamLevelIn
struct Z_Construct_UFunction_UCheatManager_StreamLevelIn_Statics
{
	struct CheatManager_eventStreamLevelIn_Parms
	{
		FName PackageName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** Stream in the given level. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/CheatManager.h" },
		{ "ToolTip", "Stream in the given level." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_PackageName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UCheatManager_StreamLevelIn_Statics::NewProp_PackageName = { "PackageName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CheatManager_eventStreamLevelIn_Parms, PackageName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCheatManager_StreamLevelIn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCheatManager_StreamLevelIn_Statics::NewProp_PackageName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCheatManager_StreamLevelIn_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCheatManager_StreamLevelIn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCheatManager, nullptr, "StreamLevelIn", nullptr, nullptr, Z_Construct_UFunction_UCheatManager_StreamLevelIn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCheatManager_StreamLevelIn_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCheatManager_StreamLevelIn_Statics::CheatManager_eventStreamLevelIn_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020602, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCheatManager_StreamLevelIn_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCheatManager_StreamLevelIn_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCheatManager_StreamLevelIn_Statics::CheatManager_eventStreamLevelIn_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCheatManager_StreamLevelIn()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCheatManager_StreamLevelIn_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCheatManager::execStreamLevelIn)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_PackageName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StreamLevelIn(Z_Param_PackageName);
	P_NATIVE_END;
}
// End Class UCheatManager Function StreamLevelIn

// Begin Class UCheatManager Function StreamLevelOut
struct Z_Construct_UFunction_UCheatManager_StreamLevelOut_Statics
{
	struct CheatManager_eventStreamLevelOut_Parms
	{
		FName PackageName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** Stream out the given level. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/CheatManager.h" },
		{ "ToolTip", "Stream out the given level." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_PackageName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UCheatManager_StreamLevelOut_Statics::NewProp_PackageName = { "PackageName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CheatManager_eventStreamLevelOut_Parms, PackageName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCheatManager_StreamLevelOut_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCheatManager_StreamLevelOut_Statics::NewProp_PackageName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCheatManager_StreamLevelOut_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCheatManager_StreamLevelOut_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCheatManager, nullptr, "StreamLevelOut", nullptr, nullptr, Z_Construct_UFunction_UCheatManager_StreamLevelOut_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCheatManager_StreamLevelOut_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCheatManager_StreamLevelOut_Statics::CheatManager_eventStreamLevelOut_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020602, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCheatManager_StreamLevelOut_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCheatManager_StreamLevelOut_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCheatManager_StreamLevelOut_Statics::CheatManager_eventStreamLevelOut_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCheatManager_StreamLevelOut()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCheatManager_StreamLevelOut_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCheatManager::execStreamLevelOut)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_PackageName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StreamLevelOut(Z_Param_PackageName);
	P_NATIVE_END;
}
// End Class UCheatManager Function StreamLevelOut

// Begin Class UCheatManager Function Summon
struct Z_Construct_UFunction_UCheatManager_Summon_Statics
{
	struct CheatManager_eventSummon_Parms
	{
		FString ClassName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** Load Classname and spawn an actor of that class */" },
		{ "ModuleRelativePath", "Classes/GameFramework/CheatManager.h" },
		{ "ToolTip", "Load Classname and spawn an actor of that class" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClassName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ClassName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCheatManager_Summon_Statics::NewProp_ClassName = { "ClassName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CheatManager_eventSummon_Parms, ClassName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClassName_MetaData), NewProp_ClassName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCheatManager_Summon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCheatManager_Summon_Statics::NewProp_ClassName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCheatManager_Summon_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCheatManager_Summon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCheatManager, nullptr, "Summon", nullptr, nullptr, Z_Construct_UFunction_UCheatManager_Summon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCheatManager_Summon_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCheatManager_Summon_Statics::CheatManager_eventSummon_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020602, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCheatManager_Summon_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCheatManager_Summon_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCheatManager_Summon_Statics::CheatManager_eventSummon_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCheatManager_Summon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCheatManager_Summon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCheatManager::execSummon)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_ClassName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Summon(Z_Param_ClassName);
	P_NATIVE_END;
}
// End Class UCheatManager Function Summon

// Begin Class UCheatManager Function Teleport
struct Z_Construct_UFunction_UCheatManager_Teleport_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Cheat Manager" },
		{ "Comment", "/* Teleport to surface player is looking at. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/CheatManager.h" },
		{ "ToolTip", "Teleport to surface player is looking at." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCheatManager_Teleport_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCheatManager, nullptr, "Teleport", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020602, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCheatManager_Teleport_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCheatManager_Teleport_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UCheatManager_Teleport()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCheatManager_Teleport_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCheatManager::execTeleport)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Teleport();
	P_NATIVE_END;
}
// End Class UCheatManager Function Teleport

// Begin Class UCheatManager Function TestCollisionDistance
struct Z_Construct_UFunction_UCheatManager_TestCollisionDistance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** Test all volumes in the world to the player controller's view location**/" },
		{ "ModuleRelativePath", "Classes/GameFramework/CheatManager.h" },
		{ "ToolTip", "Test all volumes in the world to the player controller's view location*" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCheatManager_TestCollisionDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCheatManager, nullptr, "TestCollisionDistance", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020602, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCheatManager_TestCollisionDistance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCheatManager_TestCollisionDistance_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UCheatManager_TestCollisionDistance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCheatManager_TestCollisionDistance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCheatManager::execTestCollisionDistance)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TestCollisionDistance();
	P_NATIVE_END;
}
// End Class UCheatManager Function TestCollisionDistance

// Begin Class UCheatManager Function ToggleAILogging
struct Z_Construct_UFunction_UCheatManager_ToggleAILogging_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** toggles AI logging */" },
		{ "ModuleRelativePath", "Classes/GameFramework/CheatManager.h" },
		{ "ToolTip", "toggles AI logging" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCheatManager_ToggleAILogging_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCheatManager, nullptr, "ToggleAILogging", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020602, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCheatManager_ToggleAILogging_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCheatManager_ToggleAILogging_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UCheatManager_ToggleAILogging()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCheatManager_ToggleAILogging_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCheatManager::execToggleAILogging)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ToggleAILogging();
	P_NATIVE_END;
}
// End Class UCheatManager Function ToggleAILogging

// Begin Class UCheatManager Function ToggleDebugCamera
struct Z_Construct_UFunction_UCheatManager_ToggleDebugCamera_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** Toggle between debug camera/player camera without locking gameplay and with locking local player controller input. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/CheatManager.h" },
		{ "ToolTip", "Toggle between debug camera/player camera without locking gameplay and with locking local player controller input." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCheatManager_ToggleDebugCamera_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCheatManager, nullptr, "ToggleDebugCamera", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020602, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCheatManager_ToggleDebugCamera_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCheatManager_ToggleDebugCamera_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UCheatManager_ToggleDebugCamera()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCheatManager_ToggleDebugCamera_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCheatManager::execToggleDebugCamera)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ToggleDebugCamera();
	P_NATIVE_END;
}
// End Class UCheatManager Function ToggleDebugCamera

// Begin Class UCheatManager Function ToggleServerStatReplicatorClientOverwrite
struct Z_Construct_UFunction_UCheatManager_ToggleServerStatReplicatorClientOverwrite_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/CheatManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCheatManager_ToggleServerStatReplicatorClientOverwrite_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCheatManager, nullptr, "ToggleServerStatReplicatorClientOverwrite", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020603, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCheatManager_ToggleServerStatReplicatorClientOverwrite_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCheatManager_ToggleServerStatReplicatorClientOverwrite_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UCheatManager_ToggleServerStatReplicatorClientOverwrite()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCheatManager_ToggleServerStatReplicatorClientOverwrite_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCheatManager::execToggleServerStatReplicatorClientOverwrite)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ToggleServerStatReplicatorClientOverwrite();
	P_NATIVE_END;
}
// End Class UCheatManager Function ToggleServerStatReplicatorClientOverwrite

// Begin Class UCheatManager Function ToggleServerStatReplicatorUpdateStatNet
struct Z_Construct_UFunction_UCheatManager_ToggleServerStatReplicatorUpdateStatNet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/CheatManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCheatManager_ToggleServerStatReplicatorUpdateStatNet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCheatManager, nullptr, "ToggleServerStatReplicatorUpdateStatNet", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020603, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCheatManager_ToggleServerStatReplicatorUpdateStatNet_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCheatManager_ToggleServerStatReplicatorUpdateStatNet_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UCheatManager_ToggleServerStatReplicatorUpdateStatNet()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCheatManager_ToggleServerStatReplicatorUpdateStatNet_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCheatManager::execToggleServerStatReplicatorUpdateStatNet)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ToggleServerStatReplicatorUpdateStatNet();
	P_NATIVE_END;
}
// End Class UCheatManager Function ToggleServerStatReplicatorUpdateStatNet

// Begin Class UCheatManager Function UpdateSafeArea
struct Z_Construct_UFunction_UCheatManager_UpdateSafeArea_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/CheatManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCheatManager_UpdateSafeArea_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCheatManager, nullptr, "UpdateSafeArea", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020603, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCheatManager_UpdateSafeArea_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCheatManager_UpdateSafeArea_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UCheatManager_UpdateSafeArea()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCheatManager_UpdateSafeArea_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCheatManager::execUpdateSafeArea)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateSafeArea();
	P_NATIVE_END;
}
// End Class UCheatManager Function UpdateSafeArea

// Begin Class UCheatManager Function ViewActor
struct Z_Construct_UFunction_UCheatManager_ViewActor_Statics
{
	struct CheatManager_eventViewActor_Parms
	{
		FName ActorName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** View from the point of view of AActor with Name ActorName. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/CheatManager.h" },
		{ "ToolTip", "View from the point of view of AActor with Name ActorName." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ActorName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UCheatManager_ViewActor_Statics::NewProp_ActorName = { "ActorName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CheatManager_eventViewActor_Parms, ActorName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCheatManager_ViewActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCheatManager_ViewActor_Statics::NewProp_ActorName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCheatManager_ViewActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCheatManager_ViewActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCheatManager, nullptr, "ViewActor", nullptr, nullptr, Z_Construct_UFunction_UCheatManager_ViewActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCheatManager_ViewActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCheatManager_ViewActor_Statics::CheatManager_eventViewActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020602, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCheatManager_ViewActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCheatManager_ViewActor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCheatManager_ViewActor_Statics::CheatManager_eventViewActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCheatManager_ViewActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCheatManager_ViewActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCheatManager::execViewActor)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_ActorName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ViewActor(Z_Param_ActorName);
	P_NATIVE_END;
}
// End Class UCheatManager Function ViewActor

// Begin Class UCheatManager Function ViewClass
struct Z_Construct_UFunction_UCheatManager_ViewClass_Statics
{
	struct CheatManager_eventViewClass_Parms
	{
		TSubclassOf<AActor> DesiredClass;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** View from the point of view of an AActor of class DesiredClass.  Each subsequent ViewClass cycles through the list of actors of that class. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/CheatManager.h" },
		{ "ToolTip", "View from the point of view of an AActor of class DesiredClass.  Each subsequent ViewClass cycles through the list of actors of that class." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_DesiredClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UCheatManager_ViewClass_Statics::NewProp_DesiredClass = { "DesiredClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CheatManager_eventViewClass_Parms, DesiredClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCheatManager_ViewClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCheatManager_ViewClass_Statics::NewProp_DesiredClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCheatManager_ViewClass_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCheatManager_ViewClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCheatManager, nullptr, "ViewClass", nullptr, nullptr, Z_Construct_UFunction_UCheatManager_ViewClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCheatManager_ViewClass_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCheatManager_ViewClass_Statics::CheatManager_eventViewClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020602, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCheatManager_ViewClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCheatManager_ViewClass_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCheatManager_ViewClass_Statics::CheatManager_eventViewClass_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCheatManager_ViewClass()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCheatManager_ViewClass_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCheatManager::execViewClass)
{
	P_GET_OBJECT(UClass,Z_Param_DesiredClass);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ViewClass(Z_Param_DesiredClass);
	P_NATIVE_END;
}
// End Class UCheatManager Function ViewClass

// Begin Class UCheatManager Function ViewPlayer
struct Z_Construct_UFunction_UCheatManager_ViewPlayer_Statics
{
	struct CheatManager_eventViewPlayer_Parms
	{
		FString S;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** View from the point of view of player with PlayerName S. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/CheatManager.h" },
		{ "ToolTip", "View from the point of view of player with PlayerName S." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_S_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_S;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCheatManager_ViewPlayer_Statics::NewProp_S = { "S", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CheatManager_eventViewPlayer_Parms, S), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_S_MetaData), NewProp_S_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCheatManager_ViewPlayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCheatManager_ViewPlayer_Statics::NewProp_S,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCheatManager_ViewPlayer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCheatManager_ViewPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCheatManager, nullptr, "ViewPlayer", nullptr, nullptr, Z_Construct_UFunction_UCheatManager_ViewPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCheatManager_ViewPlayer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCheatManager_ViewPlayer_Statics::CheatManager_eventViewPlayer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020602, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCheatManager_ViewPlayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCheatManager_ViewPlayer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCheatManager_ViewPlayer_Statics::CheatManager_eventViewPlayer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCheatManager_ViewPlayer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCheatManager_ViewPlayer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCheatManager::execViewPlayer)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_S);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ViewPlayer(Z_Param_S);
	P_NATIVE_END;
}
// End Class UCheatManager Function ViewPlayer

// Begin Class UCheatManager Function ViewSelf
struct Z_Construct_UFunction_UCheatManager_ViewSelf_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** Make controlled pawn the viewtarget again. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/CheatManager.h" },
		{ "ToolTip", "Make controlled pawn the viewtarget again." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCheatManager_ViewSelf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCheatManager, nullptr, "ViewSelf", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020602, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCheatManager_ViewSelf_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCheatManager_ViewSelf_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UCheatManager_ViewSelf()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCheatManager_ViewSelf_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCheatManager::execViewSelf)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ViewSelf();
	P_NATIVE_END;
}
// End Class UCheatManager Function ViewSelf

// Begin Class UCheatManager Function Walk
struct Z_Construct_UFunction_UCheatManager_Walk_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Cheat Manager" },
		{ "Comment", "/** Return to walking movement mode from Fly or Ghost cheat. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/CheatManager.h" },
		{ "ToolTip", "Return to walking movement mode from Fly or Ghost cheat." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCheatManager_Walk_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCheatManager, nullptr, "Walk", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020602, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCheatManager_Walk_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCheatManager_Walk_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UCheatManager_Walk()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCheatManager_Walk_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCheatManager::execWalk)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Walk();
	P_NATIVE_END;
}
// End Class UCheatManager Function Walk

// Begin Class UCheatManager
void UCheatManager::StaticRegisterNativesUCheatManager()
{
	UClass* Class = UCheatManager::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "BugIt", &UCheatManager::execBugIt },
		{ "BugItGo", &UCheatManager::execBugItGo },
		{ "BugItStringCreator", &UCheatManager::execBugItStringCreator },
		{ "ChangeSize", &UCheatManager::execChangeSize },
		{ "CheatScript", &UCheatManager::execCheatScript },
		{ "DamageTarget", &UCheatManager::execDamageTarget },
		{ "DebugCapsuleSweep", &UCheatManager::execDebugCapsuleSweep },
		{ "DebugCapsuleSweepCapture", &UCheatManager::execDebugCapsuleSweepCapture },
		{ "DebugCapsuleSweepChannel", &UCheatManager::execDebugCapsuleSweepChannel },
		{ "DebugCapsuleSweepClear", &UCheatManager::execDebugCapsuleSweepClear },
		{ "DebugCapsuleSweepComplex", &UCheatManager::execDebugCapsuleSweepComplex },
		{ "DebugCapsuleSweepPawn", &UCheatManager::execDebugCapsuleSweepPawn },
		{ "DebugCapsuleSweepSize", &UCheatManager::execDebugCapsuleSweepSize },
		{ "DestroyAll", &UCheatManager::execDestroyAll },
		{ "DestroyAllPawnsExceptTarget", &UCheatManager::execDestroyAllPawnsExceptTarget },
		{ "DestroyPawns", &UCheatManager::execDestroyPawns },
		{ "DestroyServerStatReplicator", &UCheatManager::execDestroyServerStatReplicator },
		{ "DestroyTarget", &UCheatManager::execDestroyTarget },
		{ "DisableDebugCamera", &UCheatManager::execDisableDebugCamera },
		{ "DumpChatState", &UCheatManager::execDumpChatState },
		{ "DumpOnlineSessionState", &UCheatManager::execDumpOnlineSessionState },
		{ "DumpPartyState", &UCheatManager::execDumpPartyState },
		{ "DumpVoiceMutingState", &UCheatManager::execDumpVoiceMutingState },
		{ "EnableDebugCamera", &UCheatManager::execEnableDebugCamera },
		{ "FlushLog", &UCheatManager::execFlushLog },
		{ "Fly", &UCheatManager::execFly },
		{ "FreezeFrame", &UCheatManager::execFreezeFrame },
		{ "GetPlayerController", &UCheatManager::execGetPlayerController },
		{ "Ghost", &UCheatManager::execGhost },
		{ "God", &UCheatManager::execGod },
		{ "InvertMouse", &UCheatManager::execInvertMouse },
		{ "LogLoc", &UCheatManager::execLogLoc },
		{ "OnlyLoadLevel", &UCheatManager::execOnlyLoadLevel },
		{ "OnPlayerEndPlayed", &UCheatManager::execOnPlayerEndPlayed },
		{ "PlayersOnly", &UCheatManager::execPlayersOnly },
		{ "ServerToggleAILogging", &UCheatManager::execServerToggleAILogging },
		{ "SetMouseSensitivityToDefault", &UCheatManager::execSetMouseSensitivityToDefault },
		{ "SetWorldOrigin", &UCheatManager::execSetWorldOrigin },
		{ "Slomo", &UCheatManager::execSlomo },
		{ "SpawnServerStatReplicator", &UCheatManager::execSpawnServerStatReplicator },
		{ "StreamLevelIn", &UCheatManager::execStreamLevelIn },
		{ "StreamLevelOut", &UCheatManager::execStreamLevelOut },
		{ "Summon", &UCheatManager::execSummon },
		{ "Teleport", &UCheatManager::execTeleport },
		{ "TestCollisionDistance", &UCheatManager::execTestCollisionDistance },
		{ "ToggleAILogging", &UCheatManager::execToggleAILogging },
		{ "ToggleDebugCamera", &UCheatManager::execToggleDebugCamera },
		{ "ToggleServerStatReplicatorClientOverwrite", &UCheatManager::execToggleServerStatReplicatorClientOverwrite },
		{ "ToggleServerStatReplicatorUpdateStatNet", &UCheatManager::execToggleServerStatReplicatorUpdateStatNet },
		{ "UpdateSafeArea", &UCheatManager::execUpdateSafeArea },
		{ "ViewActor", &UCheatManager::execViewActor },
		{ "ViewClass", &UCheatManager::execViewClass },
		{ "ViewPlayer", &UCheatManager::execViewPlayer },
		{ "ViewSelf", &UCheatManager::execViewSelf },
		{ "Walk", &UCheatManager::execWalk },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCheatManager);
UClass* Z_Construct_UClass_UCheatManager_NoRegister()
{
	return UCheatManager::StaticClass();
}
struct Z_Construct_UClass_UCheatManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** \n\x09""Cheat Manager is a central blueprint to implement test and debug code and actions that are not to ship with the game.\n\x09""As the Cheat Manager is not instanced in shipping builds, it is for debugging purposes only\n*/" },
		{ "IncludePath", "GameFramework/CheatManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/GameFramework/CheatManager.h" },
		{ "ToolTip", "Cheat Manager is a central blueprint to implement test and debug code and actions that are not to ship with the game.\nAs the Cheat Manager is not instanced in shipping builds, it is for debugging purposes only" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugCameraControllerRef_MetaData[] = {
		{ "Comment", "/** Debug camera - used to have independent camera without stopping gameplay */" },
		{ "ModuleRelativePath", "Classes/GameFramework/CheatManager.h" },
		{ "ToolTip", "Debug camera - used to have independent camera without stopping gameplay" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugCameraControllerClass_MetaData[] = {
		{ "Category", "Debug Camera" },
		{ "Comment", "/** Debug camera - used to have independent camera without stopping gameplay */" },
		{ "ModuleRelativePath", "Classes/GameFramework/CheatManager.h" },
		{ "ToolTip", "Debug camera - used to have independent camera without stopping gameplay" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CheatManagerExtensions_MetaData[] = {
		{ "Comment", "/** List of registered cheat manager extensions */" },
		{ "ModuleRelativePath", "Classes/GameFramework/CheatManager.h" },
		{ "ToolTip", "List of registered cheat manager extensions" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DebugCameraControllerRef;
	static const UECodeGen_Private::FClassPropertyParams NewProp_DebugCameraControllerClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CheatManagerExtensions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CheatManagerExtensions;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCheatManager_BugIt, "BugIt" }, // 915014742
		{ &Z_Construct_UFunction_UCheatManager_BugItGo, "BugItGo" }, // 1103286920
		{ &Z_Construct_UFunction_UCheatManager_BugItStringCreator, "BugItStringCreator" }, // 1219026230
		{ &Z_Construct_UFunction_UCheatManager_ChangeSize, "ChangeSize" }, // 2003327995
		{ &Z_Construct_UFunction_UCheatManager_CheatScript, "CheatScript" }, // 1147270146
		{ &Z_Construct_UFunction_UCheatManager_DamageTarget, "DamageTarget" }, // 1632507288
		{ &Z_Construct_UFunction_UCheatManager_DebugCapsuleSweep, "DebugCapsuleSweep" }, // 1796953313
		{ &Z_Construct_UFunction_UCheatManager_DebugCapsuleSweepCapture, "DebugCapsuleSweepCapture" }, // 52974282
		{ &Z_Construct_UFunction_UCheatManager_DebugCapsuleSweepChannel, "DebugCapsuleSweepChannel" }, // 3736075065
		{ &Z_Construct_UFunction_UCheatManager_DebugCapsuleSweepClear, "DebugCapsuleSweepClear" }, // 2997273389
		{ &Z_Construct_UFunction_UCheatManager_DebugCapsuleSweepComplex, "DebugCapsuleSweepComplex" }, // 3145846581
		{ &Z_Construct_UFunction_UCheatManager_DebugCapsuleSweepPawn, "DebugCapsuleSweepPawn" }, // 1125717483
		{ &Z_Construct_UFunction_UCheatManager_DebugCapsuleSweepSize, "DebugCapsuleSweepSize" }, // 2948157678
		{ &Z_Construct_UFunction_UCheatManager_DestroyAll, "DestroyAll" }, // 375249552
		{ &Z_Construct_UFunction_UCheatManager_DestroyAllPawnsExceptTarget, "DestroyAllPawnsExceptTarget" }, // 1654702604
		{ &Z_Construct_UFunction_UCheatManager_DestroyPawns, "DestroyPawns" }, // 2291728668
		{ &Z_Construct_UFunction_UCheatManager_DestroyServerStatReplicator, "DestroyServerStatReplicator" }, // 2929295180
		{ &Z_Construct_UFunction_UCheatManager_DestroyTarget, "DestroyTarget" }, // 664662831
		{ &Z_Construct_UFunction_UCheatManager_DisableDebugCamera, "DisableDebugCamera" }, // 1196465020
		{ &Z_Construct_UFunction_UCheatManager_DumpChatState, "DumpChatState" }, // 2552303230
		{ &Z_Construct_UFunction_UCheatManager_DumpOnlineSessionState, "DumpOnlineSessionState" }, // 3445763081
		{ &Z_Construct_UFunction_UCheatManager_DumpPartyState, "DumpPartyState" }, // 3453804616
		{ &Z_Construct_UFunction_UCheatManager_DumpVoiceMutingState, "DumpVoiceMutingState" }, // 2352177996
		{ &Z_Construct_UFunction_UCheatManager_EnableDebugCamera, "EnableDebugCamera" }, // 376444085
		{ &Z_Construct_UFunction_UCheatManager_FlushLog, "FlushLog" }, // 3511599953
		{ &Z_Construct_UFunction_UCheatManager_Fly, "Fly" }, // 2538723032
		{ &Z_Construct_UFunction_UCheatManager_FreezeFrame, "FreezeFrame" }, // 1278585970
		{ &Z_Construct_UFunction_UCheatManager_GetPlayerController, "GetPlayerController" }, // 691329552
		{ &Z_Construct_UFunction_UCheatManager_Ghost, "Ghost" }, // 3470626748
		{ &Z_Construct_UFunction_UCheatManager_God, "God" }, // 3633723004
		{ &Z_Construct_UFunction_UCheatManager_InvertMouse, "InvertMouse" }, // 2607006412
		{ &Z_Construct_UFunction_UCheatManager_LogLoc, "LogLoc" }, // 1129965501
		{ &Z_Construct_UFunction_UCheatManager_OnlyLoadLevel, "OnlyLoadLevel" }, // 1750625485
		{ &Z_Construct_UFunction_UCheatManager_OnPlayerEndPlayed, "OnPlayerEndPlayed" }, // 643253551
		{ &Z_Construct_UFunction_UCheatManager_PlayersOnly, "PlayersOnly" }, // 3575229971
		{ &Z_Construct_UFunction_UCheatManager_ReceiveEndPlay, "ReceiveEndPlay" }, // 4025854936
		{ &Z_Construct_UFunction_UCheatManager_ReceiveInitCheatManager, "ReceiveInitCheatManager" }, // 813240077
		{ &Z_Construct_UFunction_UCheatManager_ServerToggleAILogging, "ServerToggleAILogging" }, // 4204480270
		{ &Z_Construct_UFunction_UCheatManager_SetMouseSensitivityToDefault, "SetMouseSensitivityToDefault" }, // 391465826
		{ &Z_Construct_UFunction_UCheatManager_SetWorldOrigin, "SetWorldOrigin" }, // 2131734235
		{ &Z_Construct_UFunction_UCheatManager_Slomo, "Slomo" }, // 3740430841
		{ &Z_Construct_UFunction_UCheatManager_SpawnServerStatReplicator, "SpawnServerStatReplicator" }, // 3685582794
		{ &Z_Construct_UFunction_UCheatManager_StreamLevelIn, "StreamLevelIn" }, // 31239894
		{ &Z_Construct_UFunction_UCheatManager_StreamLevelOut, "StreamLevelOut" }, // 2292303089
		{ &Z_Construct_UFunction_UCheatManager_Summon, "Summon" }, // 646627590
		{ &Z_Construct_UFunction_UCheatManager_Teleport, "Teleport" }, // 730181520
		{ &Z_Construct_UFunction_UCheatManager_TestCollisionDistance, "TestCollisionDistance" }, // 1626440231
		{ &Z_Construct_UFunction_UCheatManager_ToggleAILogging, "ToggleAILogging" }, // 653695015
		{ &Z_Construct_UFunction_UCheatManager_ToggleDebugCamera, "ToggleDebugCamera" }, // 4137186376
		{ &Z_Construct_UFunction_UCheatManager_ToggleServerStatReplicatorClientOverwrite, "ToggleServerStatReplicatorClientOverwrite" }, // 3941174244
		{ &Z_Construct_UFunction_UCheatManager_ToggleServerStatReplicatorUpdateStatNet, "ToggleServerStatReplicatorUpdateStatNet" }, // 4293828152
		{ &Z_Construct_UFunction_UCheatManager_UpdateSafeArea, "UpdateSafeArea" }, // 256382922
		{ &Z_Construct_UFunction_UCheatManager_ViewActor, "ViewActor" }, // 2055331712
		{ &Z_Construct_UFunction_UCheatManager_ViewClass, "ViewClass" }, // 4156190949
		{ &Z_Construct_UFunction_UCheatManager_ViewPlayer, "ViewPlayer" }, // 3147726115
		{ &Z_Construct_UFunction_UCheatManager_ViewSelf, "ViewSelf" }, // 1549042008
		{ &Z_Construct_UFunction_UCheatManager_Walk, "Walk" }, // 3195033113
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCheatManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCheatManager_Statics::NewProp_DebugCameraControllerRef = { "DebugCameraControllerRef", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCheatManager, DebugCameraControllerRef), Z_Construct_UClass_ADebugCameraController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugCameraControllerRef_MetaData), NewProp_DebugCameraControllerRef_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCheatManager_Statics::NewProp_DebugCameraControllerClass = { "DebugCameraControllerClass", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCheatManager, DebugCameraControllerClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ADebugCameraController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugCameraControllerClass_MetaData), NewProp_DebugCameraControllerClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCheatManager_Statics::NewProp_CheatManagerExtensions_Inner = { "CheatManagerExtensions", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UCheatManagerExtension_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCheatManager_Statics::NewProp_CheatManagerExtensions = { "CheatManagerExtensions", nullptr, (EPropertyFlags)0x0124080000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCheatManager, CheatManagerExtensions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CheatManagerExtensions_MetaData), NewProp_CheatManagerExtensions_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCheatManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCheatManager_Statics::NewProp_DebugCameraControllerRef,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCheatManager_Statics::NewProp_DebugCameraControllerClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCheatManager_Statics::NewProp_CheatManagerExtensions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCheatManager_Statics::NewProp_CheatManagerExtensions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCheatManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCheatManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCheatManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCheatManager_Statics::ClassParams = {
	&UCheatManager::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UCheatManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UCheatManager_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCheatManager_Statics::Class_MetaDataParams), Z_Construct_UClass_UCheatManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCheatManager()
{
	if (!Z_Registration_Info_UClass_UCheatManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCheatManager.OuterSingleton, Z_Construct_UClass_UCheatManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCheatManager.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UCheatManager>()
{
	return UCheatManager::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCheatManager);
UCheatManager::~UCheatManager() {}
// End Class UCheatManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_CheatManager_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCheatManagerExtension, UCheatManagerExtension::StaticClass, TEXT("UCheatManagerExtension"), &Z_Registration_Info_UClass_UCheatManagerExtension, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCheatManagerExtension), 2029289741U) },
		{ Z_Construct_UClass_UCheatManager, UCheatManager::StaticClass, TEXT("UCheatManager"), &Z_Registration_Info_UClass_UCheatManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCheatManager), 3358236130U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_CheatManager_h_3597539624(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_CheatManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_CheatManager_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
