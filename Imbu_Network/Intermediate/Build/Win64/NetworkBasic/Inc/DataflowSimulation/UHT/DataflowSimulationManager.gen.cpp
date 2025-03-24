// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Experimental/Dataflow/Simulation/Public/Dataflow/DataflowSimulationManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDataflowSimulationManager() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
DATAFLOWSIMULATION_API UClass* Z_Construct_UClass_UDataflowSimulationActor();
DATAFLOWSIMULATION_API UClass* Z_Construct_UClass_UDataflowSimulationActor_NoRegister();
DATAFLOWSIMULATION_API UClass* Z_Construct_UClass_UDataflowSimulationManager();
DATAFLOWSIMULATION_API UClass* Z_Construct_UClass_UDataflowSimulationManager_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTickableWorldSubsystem();
UPackage* Z_Construct_UPackage__Script_DataflowSimulation();
// End Cross Module References

// Begin Class UDataflowSimulationManager
void UDataflowSimulationManager::StaticRegisterNativesUDataflowSimulationManager()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDataflowSimulationManager);
UClass* Z_Construct_UClass_UDataflowSimulationManager_NoRegister()
{
	return UDataflowSimulationManager::StaticClass();
}
struct Z_Construct_UClass_UDataflowSimulationManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Dataflow/DataflowSimulationManager.h" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowSimulationManager.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDataflowSimulationManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDataflowSimulationManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UTickableWorldSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_DataflowSimulation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDataflowSimulationManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDataflowSimulationManager_Statics::ClassParams = {
	&UDataflowSimulationManager::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDataflowSimulationManager_Statics::Class_MetaDataParams), Z_Construct_UClass_UDataflowSimulationManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDataflowSimulationManager()
{
	if (!Z_Registration_Info_UClass_UDataflowSimulationManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDataflowSimulationManager.OuterSingleton, Z_Construct_UClass_UDataflowSimulationManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDataflowSimulationManager.OuterSingleton;
}
template<> DATAFLOWSIMULATION_API UClass* StaticClass<UDataflowSimulationManager>()
{
	return UDataflowSimulationManager::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDataflowSimulationManager);
// End Class UDataflowSimulationManager

// Begin Interface UDataflowSimulationActor Function PostDataflowSimulationTick
struct DataflowSimulationActor_eventPostDataflowSimulationTick_Parms
{
	float SimulationTime;
	float DeltaTime;
};
void IDataflowSimulationActor::PostDataflowSimulationTick(const float SimulationTime, const float DeltaTime)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_PostDataflowSimulationTick instead.");
}
static FName NAME_UDataflowSimulationActor_PostDataflowSimulationTick = FName(TEXT("PostDataflowSimulationTick"));
void IDataflowSimulationActor::Execute_PostDataflowSimulationTick(UObject* O, const float SimulationTime, const float DeltaTime)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UDataflowSimulationActor::StaticClass()));
	DataflowSimulationActor_eventPostDataflowSimulationTick_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UDataflowSimulationActor_PostDataflowSimulationTick);
	if (Func)
	{
		Parms.SimulationTime=SimulationTime;
		Parms.DeltaTime=DeltaTime;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IDataflowSimulationActor*)(O->GetNativeInterfaceAddress(UDataflowSimulationActor::StaticClass())))
	{
		I->PostDataflowSimulationTick_Implementation(SimulationTime,DeltaTime);
	}
}
struct Z_Construct_UFunction_UDataflowSimulationActor_PostDataflowSimulationTick_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dataflow" },
		{ "Comment", "/** Post simulation callback function that can be implemented in C++ or Blueprint. */" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowSimulationManager.h" },
		{ "ToolTip", "Post simulation callback function that can be implemented in C++ or Blueprint." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SimulationTime_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeltaTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SimulationTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDataflowSimulationActor_PostDataflowSimulationTick_Statics::NewProp_SimulationTime = { "SimulationTime", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DataflowSimulationActor_eventPostDataflowSimulationTick_Parms, SimulationTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SimulationTime_MetaData), NewProp_SimulationTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDataflowSimulationActor_PostDataflowSimulationTick_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DataflowSimulationActor_eventPostDataflowSimulationTick_Parms, DeltaTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeltaTime_MetaData), NewProp_DeltaTime_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataflowSimulationActor_PostDataflowSimulationTick_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataflowSimulationActor_PostDataflowSimulationTick_Statics::NewProp_SimulationTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataflowSimulationActor_PostDataflowSimulationTick_Statics::NewProp_DeltaTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDataflowSimulationActor_PostDataflowSimulationTick_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataflowSimulationActor_PostDataflowSimulationTick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataflowSimulationActor, nullptr, "PostDataflowSimulationTick", nullptr, nullptr, Z_Construct_UFunction_UDataflowSimulationActor_PostDataflowSimulationTick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataflowSimulationActor_PostDataflowSimulationTick_Statics::PropPointers), sizeof(DataflowSimulationActor_eventPostDataflowSimulationTick_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDataflowSimulationActor_PostDataflowSimulationTick_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDataflowSimulationActor_PostDataflowSimulationTick_Statics::Function_MetaDataParams) };
static_assert(sizeof(DataflowSimulationActor_eventPostDataflowSimulationTick_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDataflowSimulationActor_PostDataflowSimulationTick()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataflowSimulationActor_PostDataflowSimulationTick_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IDataflowSimulationActor::execPostDataflowSimulationTick)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_SimulationTime);
	P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PostDataflowSimulationTick_Implementation(Z_Param_SimulationTime,Z_Param_DeltaTime);
	P_NATIVE_END;
}
// End Interface UDataflowSimulationActor Function PostDataflowSimulationTick

// Begin Interface UDataflowSimulationActor Function PreDataflowSimulationTick
struct DataflowSimulationActor_eventPreDataflowSimulationTick_Parms
{
	float SimulationTime;
	float DeltaTime;
};
void IDataflowSimulationActor::PreDataflowSimulationTick(const float SimulationTime, const float DeltaTime)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_PreDataflowSimulationTick instead.");
}
static FName NAME_UDataflowSimulationActor_PreDataflowSimulationTick = FName(TEXT("PreDataflowSimulationTick"));
void IDataflowSimulationActor::Execute_PreDataflowSimulationTick(UObject* O, const float SimulationTime, const float DeltaTime)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UDataflowSimulationActor::StaticClass()));
	DataflowSimulationActor_eventPreDataflowSimulationTick_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UDataflowSimulationActor_PreDataflowSimulationTick);
	if (Func)
	{
		Parms.SimulationTime=SimulationTime;
		Parms.DeltaTime=DeltaTime;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IDataflowSimulationActor*)(O->GetNativeInterfaceAddress(UDataflowSimulationActor::StaticClass())))
	{
		I->PreDataflowSimulationTick_Implementation(SimulationTime,DeltaTime);
	}
}
struct Z_Construct_UFunction_UDataflowSimulationActor_PreDataflowSimulationTick_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dataflow" },
		{ "Comment", "/** Pre simulation callback function that can be implemented in C++ or Blueprint. */" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowSimulationManager.h" },
		{ "ToolTip", "Pre simulation callback function that can be implemented in C++ or Blueprint." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SimulationTime_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeltaTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SimulationTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDataflowSimulationActor_PreDataflowSimulationTick_Statics::NewProp_SimulationTime = { "SimulationTime", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DataflowSimulationActor_eventPreDataflowSimulationTick_Parms, SimulationTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SimulationTime_MetaData), NewProp_SimulationTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDataflowSimulationActor_PreDataflowSimulationTick_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DataflowSimulationActor_eventPreDataflowSimulationTick_Parms, DeltaTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeltaTime_MetaData), NewProp_DeltaTime_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataflowSimulationActor_PreDataflowSimulationTick_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataflowSimulationActor_PreDataflowSimulationTick_Statics::NewProp_SimulationTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataflowSimulationActor_PreDataflowSimulationTick_Statics::NewProp_DeltaTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDataflowSimulationActor_PreDataflowSimulationTick_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataflowSimulationActor_PreDataflowSimulationTick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataflowSimulationActor, nullptr, "PreDataflowSimulationTick", nullptr, nullptr, Z_Construct_UFunction_UDataflowSimulationActor_PreDataflowSimulationTick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataflowSimulationActor_PreDataflowSimulationTick_Statics::PropPointers), sizeof(DataflowSimulationActor_eventPreDataflowSimulationTick_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDataflowSimulationActor_PreDataflowSimulationTick_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDataflowSimulationActor_PreDataflowSimulationTick_Statics::Function_MetaDataParams) };
static_assert(sizeof(DataflowSimulationActor_eventPreDataflowSimulationTick_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDataflowSimulationActor_PreDataflowSimulationTick()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataflowSimulationActor_PreDataflowSimulationTick_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IDataflowSimulationActor::execPreDataflowSimulationTick)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_SimulationTime);
	P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PreDataflowSimulationTick_Implementation(Z_Param_SimulationTime,Z_Param_DeltaTime);
	P_NATIVE_END;
}
// End Interface UDataflowSimulationActor Function PreDataflowSimulationTick

// Begin Interface UDataflowSimulationActor
void UDataflowSimulationActor::StaticRegisterNativesUDataflowSimulationActor()
{
	UClass* Class = UDataflowSimulationActor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "PostDataflowSimulationTick", &IDataflowSimulationActor::execPostDataflowSimulationTick },
		{ "PreDataflowSimulationTick", &IDataflowSimulationActor::execPreDataflowSimulationTick },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDataflowSimulationActor);
UClass* Z_Construct_UClass_UDataflowSimulationActor_NoRegister()
{
	return UDataflowSimulationActor::StaticClass();
}
struct Z_Construct_UClass_UDataflowSimulationActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowSimulationManager.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UDataflowSimulationActor_PostDataflowSimulationTick, "PostDataflowSimulationTick" }, // 3816356440
		{ &Z_Construct_UFunction_UDataflowSimulationActor_PreDataflowSimulationTick, "PreDataflowSimulationTick" }, // 997161201
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IDataflowSimulationActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDataflowSimulationActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_DataflowSimulation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDataflowSimulationActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDataflowSimulationActor_Statics::ClassParams = {
	&UDataflowSimulationActor::StaticClass,
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
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDataflowSimulationActor_Statics::Class_MetaDataParams), Z_Construct_UClass_UDataflowSimulationActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDataflowSimulationActor()
{
	if (!Z_Registration_Info_UClass_UDataflowSimulationActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDataflowSimulationActor.OuterSingleton, Z_Construct_UClass_UDataflowSimulationActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDataflowSimulationActor.OuterSingleton;
}
template<> DATAFLOWSIMULATION_API UClass* StaticClass<UDataflowSimulationActor>()
{
	return UDataflowSimulationActor::StaticClass();
}
UDataflowSimulationActor::UDataflowSimulationActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDataflowSimulationActor);
UDataflowSimulationActor::~UDataflowSimulationActor() {}
// End Interface UDataflowSimulationActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Simulation_Public_Dataflow_DataflowSimulationManager_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDataflowSimulationManager, UDataflowSimulationManager::StaticClass, TEXT("UDataflowSimulationManager"), &Z_Registration_Info_UClass_UDataflowSimulationManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDataflowSimulationManager), 2070194362U) },
		{ Z_Construct_UClass_UDataflowSimulationActor, UDataflowSimulationActor::StaticClass, TEXT("UDataflowSimulationActor"), &Z_Registration_Info_UClass_UDataflowSimulationActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDataflowSimulationActor), 1989783771U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Simulation_Public_Dataflow_DataflowSimulationManager_h_1083141303(TEXT("/Script/DataflowSimulation"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Simulation_Public_Dataflow_DataflowSimulationManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Simulation_Public_Dataflow_DataflowSimulationManager_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
