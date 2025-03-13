// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Developer/AITestSuite/Classes/BehaviorTree/TestBTService_Log.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTestBTService_Log() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBTService();
AITESTSUITE_API UClass* Z_Construct_UClass_UTestBTService_Log();
AITESTSUITE_API UClass* Z_Construct_UClass_UTestBTService_Log_NoRegister();
UPackage* Z_Construct_UPackage__Script_AITestSuite();
// End Cross Module References

// Begin Class UTestBTService_Log
void UTestBTService_Log::StaticRegisterNativesUTestBTService_Log()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTestBTService_Log);
UClass* Z_Construct_UClass_UTestBTService_Log_NoRegister()
{
	return UTestBTService_Log::StaticClass();
}
struct Z_Construct_UClass_UTestBTService_Log_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HiddenNode", "" },
		{ "IncludePath", "BehaviorTree/TestBTService_Log.h" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/TestBTService_Log.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LogActivation_MetaData[] = {
		{ "ModuleRelativePath", "Classes/BehaviorTree/TestBTService_Log.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LogDeactivation_MetaData[] = {
		{ "ModuleRelativePath", "Classes/BehaviorTree/TestBTService_Log.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KeyNameTick_MetaData[] = {
		{ "ModuleRelativePath", "Classes/BehaviorTree/TestBTService_Log.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KeyNameBecomeRelevant_MetaData[] = {
		{ "ModuleRelativePath", "Classes/BehaviorTree/TestBTService_Log.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KeyNameCeaseRelevant_MetaData[] = {
		{ "ModuleRelativePath", "Classes/BehaviorTree/TestBTService_Log.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LogTick_MetaData[] = {
		{ "ModuleRelativePath", "Classes/BehaviorTree/TestBTService_Log.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TicksDelaySetKeyNameTick_MetaData[] = {
		{ "ModuleRelativePath", "Classes/BehaviorTree/TestBTService_Log.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumTicks_MetaData[] = {
		{ "ModuleRelativePath", "Classes/BehaviorTree/TestBTService_Log.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bToggleValue_MetaData[] = {
		{ "ModuleRelativePath", "Classes/BehaviorTree/TestBTService_Log.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_LogActivation;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LogDeactivation;
	static const UECodeGen_Private::FNamePropertyParams NewProp_KeyNameTick;
	static const UECodeGen_Private::FNamePropertyParams NewProp_KeyNameBecomeRelevant;
	static const UECodeGen_Private::FNamePropertyParams NewProp_KeyNameCeaseRelevant;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LogTick;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TicksDelaySetKeyNameTick;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumTicks;
	static void NewProp_bToggleValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bToggleValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTestBTService_Log>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTestBTService_Log_Statics::NewProp_LogActivation = { "LogActivation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTestBTService_Log, LogActivation), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LogActivation_MetaData), NewProp_LogActivation_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTestBTService_Log_Statics::NewProp_LogDeactivation = { "LogDeactivation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTestBTService_Log, LogDeactivation), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LogDeactivation_MetaData), NewProp_LogDeactivation_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UTestBTService_Log_Statics::NewProp_KeyNameTick = { "KeyNameTick", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTestBTService_Log, KeyNameTick), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KeyNameTick_MetaData), NewProp_KeyNameTick_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UTestBTService_Log_Statics::NewProp_KeyNameBecomeRelevant = { "KeyNameBecomeRelevant", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTestBTService_Log, KeyNameBecomeRelevant), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KeyNameBecomeRelevant_MetaData), NewProp_KeyNameBecomeRelevant_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UTestBTService_Log_Statics::NewProp_KeyNameCeaseRelevant = { "KeyNameCeaseRelevant", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTestBTService_Log, KeyNameCeaseRelevant), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KeyNameCeaseRelevant_MetaData), NewProp_KeyNameCeaseRelevant_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTestBTService_Log_Statics::NewProp_LogTick = { "LogTick", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTestBTService_Log, LogTick), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LogTick_MetaData), NewProp_LogTick_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTestBTService_Log_Statics::NewProp_TicksDelaySetKeyNameTick = { "TicksDelaySetKeyNameTick", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTestBTService_Log, TicksDelaySetKeyNameTick), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TicksDelaySetKeyNameTick_MetaData), NewProp_TicksDelaySetKeyNameTick_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTestBTService_Log_Statics::NewProp_NumTicks = { "NumTicks", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTestBTService_Log, NumTicks), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumTicks_MetaData), NewProp_NumTicks_MetaData) };
void Z_Construct_UClass_UTestBTService_Log_Statics::NewProp_bToggleValue_SetBit(void* Obj)
{
	((UTestBTService_Log*)Obj)->bToggleValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTestBTService_Log_Statics::NewProp_bToggleValue = { "bToggleValue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UTestBTService_Log), &Z_Construct_UClass_UTestBTService_Log_Statics::NewProp_bToggleValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bToggleValue_MetaData), NewProp_bToggleValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTestBTService_Log_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestBTService_Log_Statics::NewProp_LogActivation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestBTService_Log_Statics::NewProp_LogDeactivation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestBTService_Log_Statics::NewProp_KeyNameTick,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestBTService_Log_Statics::NewProp_KeyNameBecomeRelevant,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestBTService_Log_Statics::NewProp_KeyNameCeaseRelevant,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestBTService_Log_Statics::NewProp_LogTick,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestBTService_Log_Statics::NewProp_TicksDelaySetKeyNameTick,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestBTService_Log_Statics::NewProp_NumTicks,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestBTService_Log_Statics::NewProp_bToggleValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTestBTService_Log_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UTestBTService_Log_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTService,
	(UObject* (*)())Z_Construct_UPackage__Script_AITestSuite,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTestBTService_Log_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTestBTService_Log_Statics::ClassParams = {
	&UTestBTService_Log::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UTestBTService_Log_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UTestBTService_Log_Statics::PropPointers),
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTestBTService_Log_Statics::Class_MetaDataParams), Z_Construct_UClass_UTestBTService_Log_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTestBTService_Log()
{
	if (!Z_Registration_Info_UClass_UTestBTService_Log.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTestBTService_Log.OuterSingleton, Z_Construct_UClass_UTestBTService_Log_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTestBTService_Log.OuterSingleton;
}
template<> AITESTSUITE_API UClass* StaticClass<UTestBTService_Log>()
{
	return UTestBTService_Log::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTestBTService_Log);
UTestBTService_Log::~UTestBTService_Log() {}
// End Class UTestBTService_Log

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Developer_AITestSuite_Classes_BehaviorTree_TestBTService_Log_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTestBTService_Log, UTestBTService_Log::StaticClass, TEXT("UTestBTService_Log"), &Z_Registration_Info_UClass_UTestBTService_Log, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTestBTService_Log), 2565868293U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_AITestSuite_Classes_BehaviorTree_TestBTService_Log_h_1637378359(TEXT("/Script/AITestSuite"),
	Z_CompiledInDeferFile_FID_Engine_Source_Developer_AITestSuite_Classes_BehaviorTree_TestBTService_Log_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_AITestSuite_Classes_BehaviorTree_TestBTService_Log_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
