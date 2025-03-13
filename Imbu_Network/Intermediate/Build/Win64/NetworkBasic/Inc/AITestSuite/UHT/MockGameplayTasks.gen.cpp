// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Developer/AITestSuite/Classes/MockGameplayTasks.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMockGameplayTasks() {}

// Begin Cross Module References
AITESTSUITE_API UClass* Z_Construct_UClass_UMockGameplayTaskOwner();
AITESTSUITE_API UClass* Z_Construct_UClass_UMockGameplayTaskOwner_NoRegister();
AITESTSUITE_API UClass* Z_Construct_UClass_UMockGameplayTasksComponent();
AITESTSUITE_API UClass* Z_Construct_UClass_UMockGameplayTasksComponent_NoRegister();
AITESTSUITE_API UClass* Z_Construct_UClass_UMockTask_Log();
AITESTSUITE_API UClass* Z_Construct_UClass_UMockTask_Log_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
GAMEPLAYTASKS_API UClass* Z_Construct_UClass_UGameplayTask();
GAMEPLAYTASKS_API UClass* Z_Construct_UClass_UGameplayTaskOwnerInterface_NoRegister();
GAMEPLAYTASKS_API UClass* Z_Construct_UClass_UGameplayTasksComponent();
GAMEPLAYTASKS_API UClass* Z_Construct_UClass_UGameplayTasksComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_AITestSuite();
// End Cross Module References

// Begin Class UMockTask_Log
void UMockTask_Log::StaticRegisterNativesUMockTask_Log()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMockTask_Log);
UClass* Z_Construct_UClass_UMockTask_Log_NoRegister()
{
	return UMockTask_Log::StaticClass();
}
struct Z_Construct_UClass_UMockTask_Log_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MockGameplayTasks.h" },
		{ "ModuleRelativePath", "Classes/MockGameplayTasks.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMockTask_Log>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMockTask_Log_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameplayTask,
	(UObject* (*)())Z_Construct_UPackage__Script_AITestSuite,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMockTask_Log_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMockTask_Log_Statics::ClassParams = {
	&UMockTask_Log::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMockTask_Log_Statics::Class_MetaDataParams), Z_Construct_UClass_UMockTask_Log_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMockTask_Log()
{
	if (!Z_Registration_Info_UClass_UMockTask_Log.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMockTask_Log.OuterSingleton, Z_Construct_UClass_UMockTask_Log_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMockTask_Log.OuterSingleton;
}
template<> AITESTSUITE_API UClass* StaticClass<UMockTask_Log>()
{
	return UMockTask_Log::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMockTask_Log);
UMockTask_Log::~UMockTask_Log() {}
// End Class UMockTask_Log

// Begin Class UMockGameplayTasksComponent
void UMockGameplayTasksComponent::StaticRegisterNativesUMockGameplayTasksComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMockGameplayTasksComponent);
UClass* Z_Construct_UClass_UMockGameplayTasksComponent_NoRegister()
{
	return UMockGameplayTasksComponent::StaticClass();
}
struct Z_Construct_UClass_UMockGameplayTasksComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "//\n// a Testing-time component that is a way to access UGameplayTasksComponent's protected properties\n//\n" },
		{ "HideCategories", "Object LOD Lighting Transform Sockets TextureStreaming" },
		{ "IncludePath", "MockGameplayTasks.h" },
		{ "ModuleRelativePath", "Classes/MockGameplayTasks.h" },
		{ "ToolTip", "a Testing-time component that is a way to access UGameplayTasksComponent's protected properties" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMockGameplayTasksComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMockGameplayTasksComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameplayTasksComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_AITestSuite,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMockGameplayTasksComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMockGameplayTasksComponent_Statics::ClassParams = {
	&UMockGameplayTasksComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x00A010A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMockGameplayTasksComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UMockGameplayTasksComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMockGameplayTasksComponent()
{
	if (!Z_Registration_Info_UClass_UMockGameplayTasksComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMockGameplayTasksComponent.OuterSingleton, Z_Construct_UClass_UMockGameplayTasksComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMockGameplayTasksComponent.OuterSingleton;
}
template<> AITESTSUITE_API UClass* StaticClass<UMockGameplayTasksComponent>()
{
	return UMockGameplayTasksComponent::StaticClass();
}
UMockGameplayTasksComponent::UMockGameplayTasksComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMockGameplayTasksComponent);
UMockGameplayTasksComponent::~UMockGameplayTasksComponent() {}
// End Class UMockGameplayTasksComponent

// Begin Class UMockGameplayTaskOwner
void UMockGameplayTaskOwner::StaticRegisterNativesUMockGameplayTaskOwner()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMockGameplayTaskOwner);
UClass* Z_Construct_UClass_UMockGameplayTaskOwner_NoRegister()
{
	return UMockGameplayTaskOwner::StaticClass();
}
struct Z_Construct_UClass_UMockGameplayTaskOwner_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MockGameplayTasks.h" },
		{ "ModuleRelativePath", "Classes/MockGameplayTasks.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GTComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/MockGameplayTasks.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GTComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMockGameplayTaskOwner>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMockGameplayTaskOwner_Statics::NewProp_GTComponent = { "GTComponent", nullptr, (EPropertyFlags)0x0114000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMockGameplayTaskOwner, GTComponent), Z_Construct_UClass_UGameplayTasksComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GTComponent_MetaData), NewProp_GTComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMockGameplayTaskOwner_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMockGameplayTaskOwner_Statics::NewProp_GTComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMockGameplayTaskOwner_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMockGameplayTaskOwner_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_AITestSuite,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMockGameplayTaskOwner_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UMockGameplayTaskOwner_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UGameplayTaskOwnerInterface_NoRegister, (int32)VTABLE_OFFSET(UMockGameplayTaskOwner, IGameplayTaskOwnerInterface), false },  // 1243777696
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMockGameplayTaskOwner_Statics::ClassParams = {
	&UMockGameplayTaskOwner::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMockGameplayTaskOwner_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMockGameplayTaskOwner_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x008000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMockGameplayTaskOwner_Statics::Class_MetaDataParams), Z_Construct_UClass_UMockGameplayTaskOwner_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMockGameplayTaskOwner()
{
	if (!Z_Registration_Info_UClass_UMockGameplayTaskOwner.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMockGameplayTaskOwner.OuterSingleton, Z_Construct_UClass_UMockGameplayTaskOwner_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMockGameplayTaskOwner.OuterSingleton;
}
template<> AITESTSUITE_API UClass* StaticClass<UMockGameplayTaskOwner>()
{
	return UMockGameplayTaskOwner::StaticClass();
}
UMockGameplayTaskOwner::UMockGameplayTaskOwner(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMockGameplayTaskOwner);
UMockGameplayTaskOwner::~UMockGameplayTaskOwner() {}
// End Class UMockGameplayTaskOwner

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Developer_AITestSuite_Classes_MockGameplayTasks_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMockTask_Log, UMockTask_Log::StaticClass, TEXT("UMockTask_Log"), &Z_Registration_Info_UClass_UMockTask_Log, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMockTask_Log), 10066420U) },
		{ Z_Construct_UClass_UMockGameplayTasksComponent, UMockGameplayTasksComponent::StaticClass, TEXT("UMockGameplayTasksComponent"), &Z_Registration_Info_UClass_UMockGameplayTasksComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMockGameplayTasksComponent), 2680858279U) },
		{ Z_Construct_UClass_UMockGameplayTaskOwner, UMockGameplayTaskOwner::StaticClass, TEXT("UMockGameplayTaskOwner"), &Z_Registration_Info_UClass_UMockGameplayTaskOwner, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMockGameplayTaskOwner), 1642138339U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_AITestSuite_Classes_MockGameplayTasks_h_1139865128(TEXT("/Script/AITestSuite"),
	Z_CompiledInDeferFile_FID_Engine_Source_Developer_AITestSuite_Classes_MockGameplayTasks_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_AITestSuite_Classes_MockGameplayTasks_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
