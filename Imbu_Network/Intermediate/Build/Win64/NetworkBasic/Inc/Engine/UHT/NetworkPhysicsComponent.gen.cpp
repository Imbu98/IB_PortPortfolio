// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/Physics/NetworkPhysicsComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNetworkPhysicsComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_UNetworkPhysicsComponent();
ENGINE_API UClass* Z_Construct_UClass_UNetworkPhysicsComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UNetworkPhysicsSystem();
ENGINE_API UClass* Z_Construct_UClass_UNetworkPhysicsSystem_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UWorldSubsystem();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FNetworkPhysicsData();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FNetworkPhysicsDatas();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FNetworkPhysicsRewindDataImportantInputProxy();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FNetworkPhysicsRewindDataImportantStateProxy();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FNetworkPhysicsRewindDataInputProxy();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FNetworkPhysicsRewindDataProxy();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FNetworkPhysicsRewindDataStateProxy();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin ScriptStruct FNetworkPhysicsRewindDataProxy
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NetworkPhysicsRewindDataProxy;
class UScriptStruct* FNetworkPhysicsRewindDataProxy::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NetworkPhysicsRewindDataProxy.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NetworkPhysicsRewindDataProxy.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNetworkPhysicsRewindDataProxy, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("NetworkPhysicsRewindDataProxy"));
	}
	return Z_Registration_Info_UScriptStruct_NetworkPhysicsRewindDataProxy.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FNetworkPhysicsRewindDataProxy>()
{
	return FNetworkPhysicsRewindDataProxy::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNetworkPhysicsRewindDataProxy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Base struct for replicated rewind history properties\n */" },
		{ "ModuleRelativePath", "Public/Physics/NetworkPhysicsComponent.h" },
		{ "ToolTip", "Base struct for replicated rewind history properties" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Owner_MetaData[] = {
		{ "Comment", "/** Component that utilizes this data */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Physics/NetworkPhysicsComponent.h" },
		{ "ToolTip", "Component that utilizes this data" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Owner;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNetworkPhysicsRewindDataProxy>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FNetworkPhysicsRewindDataProxy_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0114000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNetworkPhysicsRewindDataProxy, Owner), Z_Construct_UClass_UNetworkPhysicsComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Owner_MetaData), NewProp_Owner_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNetworkPhysicsRewindDataProxy_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetworkPhysicsRewindDataProxy_Statics::NewProp_Owner,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetworkPhysicsRewindDataProxy_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNetworkPhysicsRewindDataProxy_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"NetworkPhysicsRewindDataProxy",
	Z_Construct_UScriptStruct_FNetworkPhysicsRewindDataProxy_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetworkPhysicsRewindDataProxy_Statics::PropPointers),
	sizeof(FNetworkPhysicsRewindDataProxy),
	alignof(FNetworkPhysicsRewindDataProxy),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetworkPhysicsRewindDataProxy_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNetworkPhysicsRewindDataProxy_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNetworkPhysicsRewindDataProxy()
{
	if (!Z_Registration_Info_UScriptStruct_NetworkPhysicsRewindDataProxy.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NetworkPhysicsRewindDataProxy.InnerSingleton, Z_Construct_UScriptStruct_FNetworkPhysicsRewindDataProxy_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NetworkPhysicsRewindDataProxy.InnerSingleton;
}
// End ScriptStruct FNetworkPhysicsRewindDataProxy

// Begin ScriptStruct FNetworkPhysicsRewindDataInputProxy
static_assert(std::is_polymorphic<FNetworkPhysicsRewindDataInputProxy>() == std::is_polymorphic<FNetworkPhysicsRewindDataProxy>(), "USTRUCT FNetworkPhysicsRewindDataInputProxy cannot be polymorphic unless super FNetworkPhysicsRewindDataProxy is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NetworkPhysicsRewindDataInputProxy;
class UScriptStruct* FNetworkPhysicsRewindDataInputProxy::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NetworkPhysicsRewindDataInputProxy.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NetworkPhysicsRewindDataInputProxy.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNetworkPhysicsRewindDataInputProxy, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("NetworkPhysicsRewindDataInputProxy"));
	}
	return Z_Registration_Info_UScriptStruct_NetworkPhysicsRewindDataInputProxy.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FNetworkPhysicsRewindDataInputProxy>()
{
	return FNetworkPhysicsRewindDataInputProxy::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNetworkPhysicsRewindDataInputProxy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Struct suitable for use as a replicated property to replicate input rewind history\n */" },
		{ "ModuleRelativePath", "Public/Physics/NetworkPhysicsComponent.h" },
		{ "ToolTip", "Struct suitable for use as a replicated property to replicate input rewind history" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNetworkPhysicsRewindDataInputProxy>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNetworkPhysicsRewindDataInputProxy_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	Z_Construct_UScriptStruct_FNetworkPhysicsRewindDataProxy,
	&NewStructOps,
	"NetworkPhysicsRewindDataInputProxy",
	nullptr,
	0,
	sizeof(FNetworkPhysicsRewindDataInputProxy),
	alignof(FNetworkPhysicsRewindDataInputProxy),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetworkPhysicsRewindDataInputProxy_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNetworkPhysicsRewindDataInputProxy_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNetworkPhysicsRewindDataInputProxy()
{
	if (!Z_Registration_Info_UScriptStruct_NetworkPhysicsRewindDataInputProxy.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NetworkPhysicsRewindDataInputProxy.InnerSingleton, Z_Construct_UScriptStruct_FNetworkPhysicsRewindDataInputProxy_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NetworkPhysicsRewindDataInputProxy.InnerSingleton;
}
// End ScriptStruct FNetworkPhysicsRewindDataInputProxy

// Begin ScriptStruct FNetworkPhysicsRewindDataStateProxy
static_assert(std::is_polymorphic<FNetworkPhysicsRewindDataStateProxy>() == std::is_polymorphic<FNetworkPhysicsRewindDataProxy>(), "USTRUCT FNetworkPhysicsRewindDataStateProxy cannot be polymorphic unless super FNetworkPhysicsRewindDataProxy is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NetworkPhysicsRewindDataStateProxy;
class UScriptStruct* FNetworkPhysicsRewindDataStateProxy::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NetworkPhysicsRewindDataStateProxy.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NetworkPhysicsRewindDataStateProxy.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNetworkPhysicsRewindDataStateProxy, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("NetworkPhysicsRewindDataStateProxy"));
	}
	return Z_Registration_Info_UScriptStruct_NetworkPhysicsRewindDataStateProxy.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FNetworkPhysicsRewindDataStateProxy>()
{
	return FNetworkPhysicsRewindDataStateProxy::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNetworkPhysicsRewindDataStateProxy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Struct suitable for use as a replicated property to replicate state rewind history\n */" },
		{ "ModuleRelativePath", "Public/Physics/NetworkPhysicsComponent.h" },
		{ "ToolTip", "Struct suitable for use as a replicated property to replicate state rewind history" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNetworkPhysicsRewindDataStateProxy>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNetworkPhysicsRewindDataStateProxy_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	Z_Construct_UScriptStruct_FNetworkPhysicsRewindDataProxy,
	&NewStructOps,
	"NetworkPhysicsRewindDataStateProxy",
	nullptr,
	0,
	sizeof(FNetworkPhysicsRewindDataStateProxy),
	alignof(FNetworkPhysicsRewindDataStateProxy),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetworkPhysicsRewindDataStateProxy_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNetworkPhysicsRewindDataStateProxy_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNetworkPhysicsRewindDataStateProxy()
{
	if (!Z_Registration_Info_UScriptStruct_NetworkPhysicsRewindDataStateProxy.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NetworkPhysicsRewindDataStateProxy.InnerSingleton, Z_Construct_UScriptStruct_FNetworkPhysicsRewindDataStateProxy_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NetworkPhysicsRewindDataStateProxy.InnerSingleton;
}
// End ScriptStruct FNetworkPhysicsRewindDataStateProxy

// Begin ScriptStruct FNetworkPhysicsRewindDataImportantInputProxy
static_assert(std::is_polymorphic<FNetworkPhysicsRewindDataImportantInputProxy>() == std::is_polymorphic<FNetworkPhysicsRewindDataProxy>(), "USTRUCT FNetworkPhysicsRewindDataImportantInputProxy cannot be polymorphic unless super FNetworkPhysicsRewindDataProxy is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NetworkPhysicsRewindDataImportantInputProxy;
class UScriptStruct* FNetworkPhysicsRewindDataImportantInputProxy::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NetworkPhysicsRewindDataImportantInputProxy.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NetworkPhysicsRewindDataImportantInputProxy.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNetworkPhysicsRewindDataImportantInputProxy, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("NetworkPhysicsRewindDataImportantInputProxy"));
	}
	return Z_Registration_Info_UScriptStruct_NetworkPhysicsRewindDataImportantInputProxy.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FNetworkPhysicsRewindDataImportantInputProxy>()
{
	return FNetworkPhysicsRewindDataImportantInputProxy::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNetworkPhysicsRewindDataImportantInputProxy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Struct suitable for use as a replicated property to replicate input rewind history\n */" },
		{ "ModuleRelativePath", "Public/Physics/NetworkPhysicsComponent.h" },
		{ "ToolTip", "Struct suitable for use as a replicated property to replicate input rewind history" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNetworkPhysicsRewindDataImportantInputProxy>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNetworkPhysicsRewindDataImportantInputProxy_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	Z_Construct_UScriptStruct_FNetworkPhysicsRewindDataProxy,
	&NewStructOps,
	"NetworkPhysicsRewindDataImportantInputProxy",
	nullptr,
	0,
	sizeof(FNetworkPhysicsRewindDataImportantInputProxy),
	alignof(FNetworkPhysicsRewindDataImportantInputProxy),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetworkPhysicsRewindDataImportantInputProxy_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNetworkPhysicsRewindDataImportantInputProxy_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNetworkPhysicsRewindDataImportantInputProxy()
{
	if (!Z_Registration_Info_UScriptStruct_NetworkPhysicsRewindDataImportantInputProxy.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NetworkPhysicsRewindDataImportantInputProxy.InnerSingleton, Z_Construct_UScriptStruct_FNetworkPhysicsRewindDataImportantInputProxy_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NetworkPhysicsRewindDataImportantInputProxy.InnerSingleton;
}
// End ScriptStruct FNetworkPhysicsRewindDataImportantInputProxy

// Begin ScriptStruct FNetworkPhysicsRewindDataImportantStateProxy
static_assert(std::is_polymorphic<FNetworkPhysicsRewindDataImportantStateProxy>() == std::is_polymorphic<FNetworkPhysicsRewindDataProxy>(), "USTRUCT FNetworkPhysicsRewindDataImportantStateProxy cannot be polymorphic unless super FNetworkPhysicsRewindDataProxy is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NetworkPhysicsRewindDataImportantStateProxy;
class UScriptStruct* FNetworkPhysicsRewindDataImportantStateProxy::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NetworkPhysicsRewindDataImportantStateProxy.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NetworkPhysicsRewindDataImportantStateProxy.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNetworkPhysicsRewindDataImportantStateProxy, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("NetworkPhysicsRewindDataImportantStateProxy"));
	}
	return Z_Registration_Info_UScriptStruct_NetworkPhysicsRewindDataImportantStateProxy.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FNetworkPhysicsRewindDataImportantStateProxy>()
{
	return FNetworkPhysicsRewindDataImportantStateProxy::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNetworkPhysicsRewindDataImportantStateProxy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Struct suitable for use as a replicated property to replicate state rewind history\n */" },
		{ "ModuleRelativePath", "Public/Physics/NetworkPhysicsComponent.h" },
		{ "ToolTip", "Struct suitable for use as a replicated property to replicate state rewind history" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNetworkPhysicsRewindDataImportantStateProxy>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNetworkPhysicsRewindDataImportantStateProxy_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	Z_Construct_UScriptStruct_FNetworkPhysicsRewindDataProxy,
	&NewStructOps,
	"NetworkPhysicsRewindDataImportantStateProxy",
	nullptr,
	0,
	sizeof(FNetworkPhysicsRewindDataImportantStateProxy),
	alignof(FNetworkPhysicsRewindDataImportantStateProxy),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetworkPhysicsRewindDataImportantStateProxy_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNetworkPhysicsRewindDataImportantStateProxy_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNetworkPhysicsRewindDataImportantStateProxy()
{
	if (!Z_Registration_Info_UScriptStruct_NetworkPhysicsRewindDataImportantStateProxy.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NetworkPhysicsRewindDataImportantStateProxy.InnerSingleton, Z_Construct_UScriptStruct_FNetworkPhysicsRewindDataImportantStateProxy_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NetworkPhysicsRewindDataImportantStateProxy.InnerSingleton;
}
// End ScriptStruct FNetworkPhysicsRewindDataImportantStateProxy

// Begin Class UNetworkPhysicsSystem
void UNetworkPhysicsSystem::StaticRegisterNativesUNetworkPhysicsSystem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNetworkPhysicsSystem);
UClass* Z_Construct_UClass_UNetworkPhysicsSystem_NoRegister()
{
	return UNetworkPhysicsSystem::StaticClass();
}
struct Z_Construct_UClass_UNetworkPhysicsSystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Network physics manager to initialize data required for rewind/resim\n */" },
		{ "IncludePath", "Physics/NetworkPhysicsComponent.h" },
		{ "ModuleRelativePath", "Public/Physics/NetworkPhysicsComponent.h" },
		{ "ToolTip", "Network physics manager to initialize data required for rewind/resim" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNetworkPhysicsSystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNetworkPhysicsSystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWorldSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNetworkPhysicsSystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNetworkPhysicsSystem_Statics::ClassParams = {
	&UNetworkPhysicsSystem::StaticClass,
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
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNetworkPhysicsSystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UNetworkPhysicsSystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNetworkPhysicsSystem()
{
	if (!Z_Registration_Info_UClass_UNetworkPhysicsSystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNetworkPhysicsSystem.OuterSingleton, Z_Construct_UClass_UNetworkPhysicsSystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNetworkPhysicsSystem.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UNetworkPhysicsSystem>()
{
	return UNetworkPhysicsSystem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNetworkPhysicsSystem);
UNetworkPhysicsSystem::~UNetworkPhysicsSystem() {}
// End Class UNetworkPhysicsSystem

// Begin ScriptStruct FNetworkPhysicsData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NetworkPhysicsData;
class UScriptStruct* FNetworkPhysicsData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NetworkPhysicsData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NetworkPhysicsData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNetworkPhysicsData, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("NetworkPhysicsData"));
	}
	return Z_Registration_Info_UScriptStruct_NetworkPhysicsData.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FNetworkPhysicsData>()
{
	return FNetworkPhysicsData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNetworkPhysicsData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Base network physics data that will be used by physics\n */" },
		{ "ModuleRelativePath", "Public/Physics/NetworkPhysicsComponent.h" },
		{ "ToolTip", "Base network physics data that will be used by physics" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ServerFrame_MetaData[] = {
		{ "Comment", "// Server frame at which this data has been generated\n" },
		{ "ModuleRelativePath", "Public/Physics/NetworkPhysicsComponent.h" },
		{ "ToolTip", "Server frame at which this data has been generated" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalFrame_MetaData[] = {
		{ "Comment", "// Local frame at which this data has been generated\n" },
		{ "ModuleRelativePath", "Public/Physics/NetworkPhysicsComponent.h" },
		{ "ToolTip", "Local frame at which this data has been generated" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputFrame_MetaData[] = {
		{ "Comment", "// Input frame used to generate the network data\n" },
		{ "ModuleRelativePath", "Public/Physics/NetworkPhysicsComponent.h" },
		{ "ToolTip", "Input frame used to generate the network data" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ServerFrame;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LocalFrame;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InputFrame;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNetworkPhysicsData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNetworkPhysicsData_Statics::NewProp_ServerFrame = { "ServerFrame", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNetworkPhysicsData, ServerFrame), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ServerFrame_MetaData), NewProp_ServerFrame_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNetworkPhysicsData_Statics::NewProp_LocalFrame = { "LocalFrame", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNetworkPhysicsData, LocalFrame), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalFrame_MetaData), NewProp_LocalFrame_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNetworkPhysicsData_Statics::NewProp_InputFrame = { "InputFrame", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNetworkPhysicsData, InputFrame), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputFrame_MetaData), NewProp_InputFrame_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNetworkPhysicsData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetworkPhysicsData_Statics::NewProp_ServerFrame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetworkPhysicsData_Statics::NewProp_LocalFrame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetworkPhysicsData_Statics::NewProp_InputFrame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetworkPhysicsData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNetworkPhysicsData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"NetworkPhysicsData",
	Z_Construct_UScriptStruct_FNetworkPhysicsData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetworkPhysicsData_Statics::PropPointers),
	sizeof(FNetworkPhysicsData),
	alignof(FNetworkPhysicsData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetworkPhysicsData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNetworkPhysicsData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNetworkPhysicsData()
{
	if (!Z_Registration_Info_UScriptStruct_NetworkPhysicsData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NetworkPhysicsData.InnerSingleton, Z_Construct_UScriptStruct_FNetworkPhysicsData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NetworkPhysicsData.InnerSingleton;
}
// End ScriptStruct FNetworkPhysicsData

// Begin ScriptStruct FNetworkPhysicsDatas
static_assert(std::is_polymorphic<FNetworkPhysicsDatas>() == std::is_polymorphic<FNetworkPhysicsData>(), "USTRUCT FNetworkPhysicsDatas cannot be polymorphic unless super FNetworkPhysicsData is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NetworkPhysicsDatas;
class UScriptStruct* FNetworkPhysicsDatas::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NetworkPhysicsDatas.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NetworkPhysicsDatas.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNetworkPhysicsDatas, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("NetworkPhysicsDatas"));
	}
	return Z_Registration_Info_UScriptStruct_NetworkPhysicsDatas.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FNetworkPhysicsDatas>()
{
	return FNetworkPhysicsDatas::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNetworkPhysicsDatas_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Physics/NetworkPhysicsComponent.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNetworkPhysicsDatas>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNetworkPhysicsDatas_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	Z_Construct_UScriptStruct_FNetworkPhysicsData,
	&NewStructOps,
	"NetworkPhysicsDatas",
	nullptr,
	0,
	sizeof(FNetworkPhysicsDatas),
	alignof(FNetworkPhysicsDatas),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetworkPhysicsDatas_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNetworkPhysicsDatas_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNetworkPhysicsDatas()
{
	if (!Z_Registration_Info_UScriptStruct_NetworkPhysicsDatas.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NetworkPhysicsDatas.InnerSingleton, Z_Construct_UScriptStruct_FNetworkPhysicsDatas_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NetworkPhysicsDatas.InnerSingleton;
}
// End ScriptStruct FNetworkPhysicsDatas

// Begin Class UNetworkPhysicsComponent Function MulticastReceiveImportantInputData
struct NetworkPhysicsComponent_eventMulticastReceiveImportantInputData_Parms
{
	FNetworkPhysicsRewindDataImportantInputProxy ServerInputs;
};
static const FName NAME_UNetworkPhysicsComponent_MulticastReceiveImportantInputData = FName(TEXT("MulticastReceiveImportantInputData"));
void UNetworkPhysicsComponent::MulticastReceiveImportantInputData(FNetworkPhysicsRewindDataImportantInputProxy const& ServerInputs)
{
	NetworkPhysicsComponent_eventMulticastReceiveImportantInputData_Parms Parms;
	Parms.ServerInputs=ServerInputs;
	UFunction* Func = FindFunctionChecked(NAME_UNetworkPhysicsComponent_MulticastReceiveImportantInputData);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UNetworkPhysicsComponent_MulticastReceiveImportantInputData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "// Client RPC to receive important inputs from server\n" },
		{ "ModuleRelativePath", "Public/Physics/NetworkPhysicsComponent.h" },
		{ "ToolTip", "Client RPC to receive important inputs from server" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ServerInputs_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ServerInputs;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNetworkPhysicsComponent_MulticastReceiveImportantInputData_Statics::NewProp_ServerInputs = { "ServerInputs", nullptr, (EPropertyFlags)0x0010008008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NetworkPhysicsComponent_eventMulticastReceiveImportantInputData_Parms, ServerInputs), Z_Construct_UScriptStruct_FNetworkPhysicsRewindDataImportantInputProxy, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ServerInputs_MetaData), NewProp_ServerInputs_MetaData) }; // 375247947
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNetworkPhysicsComponent_MulticastReceiveImportantInputData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNetworkPhysicsComponent_MulticastReceiveImportantInputData_Statics::NewProp_ServerInputs,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNetworkPhysicsComponent_MulticastReceiveImportantInputData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNetworkPhysicsComponent_MulticastReceiveImportantInputData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNetworkPhysicsComponent, nullptr, "MulticastReceiveImportantInputData", nullptr, nullptr, Z_Construct_UFunction_UNetworkPhysicsComponent_MulticastReceiveImportantInputData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNetworkPhysicsComponent_MulticastReceiveImportantInputData_Statics::PropPointers), sizeof(NetworkPhysicsComponent_eventMulticastReceiveImportantInputData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00084CC2, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNetworkPhysicsComponent_MulticastReceiveImportantInputData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNetworkPhysicsComponent_MulticastReceiveImportantInputData_Statics::Function_MetaDataParams) };
static_assert(sizeof(NetworkPhysicsComponent_eventMulticastReceiveImportantInputData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNetworkPhysicsComponent_MulticastReceiveImportantInputData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNetworkPhysicsComponent_MulticastReceiveImportantInputData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNetworkPhysicsComponent::execMulticastReceiveImportantInputData)
{
	P_GET_STRUCT(FNetworkPhysicsRewindDataImportantInputProxy,Z_Param_ServerInputs);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MulticastReceiveImportantInputData_Implementation(Z_Param_ServerInputs);
	P_NATIVE_END;
}
// End Class UNetworkPhysicsComponent Function MulticastReceiveImportantInputData

// Begin Class UNetworkPhysicsComponent Function MulticastReceiveImportantStateData
struct NetworkPhysicsComponent_eventMulticastReceiveImportantStateData_Parms
{
	FNetworkPhysicsRewindDataImportantStateProxy ServerStates;
};
static const FName NAME_UNetworkPhysicsComponent_MulticastReceiveImportantStateData = FName(TEXT("MulticastReceiveImportantStateData"));
void UNetworkPhysicsComponent::MulticastReceiveImportantStateData(FNetworkPhysicsRewindDataImportantStateProxy const& ServerStates)
{
	NetworkPhysicsComponent_eventMulticastReceiveImportantStateData_Parms Parms;
	Parms.ServerStates=ServerStates;
	UFunction* Func = FindFunctionChecked(NAME_UNetworkPhysicsComponent_MulticastReceiveImportantStateData);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UNetworkPhysicsComponent_MulticastReceiveImportantStateData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "// Client RPC to receive important states from server\n" },
		{ "ModuleRelativePath", "Public/Physics/NetworkPhysicsComponent.h" },
		{ "ToolTip", "Client RPC to receive important states from server" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ServerStates_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ServerStates;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNetworkPhysicsComponent_MulticastReceiveImportantStateData_Statics::NewProp_ServerStates = { "ServerStates", nullptr, (EPropertyFlags)0x0010008008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NetworkPhysicsComponent_eventMulticastReceiveImportantStateData_Parms, ServerStates), Z_Construct_UScriptStruct_FNetworkPhysicsRewindDataImportantStateProxy, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ServerStates_MetaData), NewProp_ServerStates_MetaData) }; // 3904299927
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNetworkPhysicsComponent_MulticastReceiveImportantStateData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNetworkPhysicsComponent_MulticastReceiveImportantStateData_Statics::NewProp_ServerStates,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNetworkPhysicsComponent_MulticastReceiveImportantStateData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNetworkPhysicsComponent_MulticastReceiveImportantStateData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNetworkPhysicsComponent, nullptr, "MulticastReceiveImportantStateData", nullptr, nullptr, Z_Construct_UFunction_UNetworkPhysicsComponent_MulticastReceiveImportantStateData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNetworkPhysicsComponent_MulticastReceiveImportantStateData_Statics::PropPointers), sizeof(NetworkPhysicsComponent_eventMulticastReceiveImportantStateData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00084CC2, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNetworkPhysicsComponent_MulticastReceiveImportantStateData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNetworkPhysicsComponent_MulticastReceiveImportantStateData_Statics::Function_MetaDataParams) };
static_assert(sizeof(NetworkPhysicsComponent_eventMulticastReceiveImportantStateData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNetworkPhysicsComponent_MulticastReceiveImportantStateData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNetworkPhysicsComponent_MulticastReceiveImportantStateData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNetworkPhysicsComponent::execMulticastReceiveImportantStateData)
{
	P_GET_STRUCT(FNetworkPhysicsRewindDataImportantStateProxy,Z_Param_ServerStates);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MulticastReceiveImportantStateData_Implementation(Z_Param_ServerStates);
	P_NATIVE_END;
}
// End Class UNetworkPhysicsComponent Function MulticastReceiveImportantStateData

// Begin Class UNetworkPhysicsComponent Function OnRep_SetReplicatedInputs
struct Z_Construct_UFunction_UNetworkPhysicsComponent_OnRep_SetReplicatedInputs_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "// repnotify for the inputs on the client\n" },
		{ "ModuleRelativePath", "Public/Physics/NetworkPhysicsComponent.h" },
		{ "ToolTip", "repnotify for the inputs on the client" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNetworkPhysicsComponent_OnRep_SetReplicatedInputs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNetworkPhysicsComponent, nullptr, "OnRep_SetReplicatedInputs", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNetworkPhysicsComponent_OnRep_SetReplicatedInputs_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNetworkPhysicsComponent_OnRep_SetReplicatedInputs_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UNetworkPhysicsComponent_OnRep_SetReplicatedInputs()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNetworkPhysicsComponent_OnRep_SetReplicatedInputs_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNetworkPhysicsComponent::execOnRep_SetReplicatedInputs)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_SetReplicatedInputs();
	P_NATIVE_END;
}
// End Class UNetworkPhysicsComponent Function OnRep_SetReplicatedInputs

// Begin Class UNetworkPhysicsComponent Function OnRep_SetReplicatedStates
struct Z_Construct_UFunction_UNetworkPhysicsComponent_OnRep_SetReplicatedStates_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "// repnotify for the states on the client\n" },
		{ "ModuleRelativePath", "Public/Physics/NetworkPhysicsComponent.h" },
		{ "ToolTip", "repnotify for the states on the client" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNetworkPhysicsComponent_OnRep_SetReplicatedStates_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNetworkPhysicsComponent, nullptr, "OnRep_SetReplicatedStates", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNetworkPhysicsComponent_OnRep_SetReplicatedStates_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNetworkPhysicsComponent_OnRep_SetReplicatedStates_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UNetworkPhysicsComponent_OnRep_SetReplicatedStates()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNetworkPhysicsComponent_OnRep_SetReplicatedStates_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNetworkPhysicsComponent::execOnRep_SetReplicatedStates)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_SetReplicatedStates();
	P_NATIVE_END;
}
// End Class UNetworkPhysicsComponent Function OnRep_SetReplicatedStates

// Begin Class UNetworkPhysicsComponent Function ServerReceiveImportantInputData
struct NetworkPhysicsComponent_eventServerReceiveImportantInputData_Parms
{
	FNetworkPhysicsRewindDataImportantInputProxy ClientInputs;
};
static const FName NAME_UNetworkPhysicsComponent_ServerReceiveImportantInputData = FName(TEXT("ServerReceiveImportantInputData"));
void UNetworkPhysicsComponent::ServerReceiveImportantInputData(FNetworkPhysicsRewindDataImportantInputProxy const& ClientInputs)
{
	NetworkPhysicsComponent_eventServerReceiveImportantInputData_Parms Parms;
	Parms.ClientInputs=ClientInputs;
	UFunction* Func = FindFunctionChecked(NAME_UNetworkPhysicsComponent_ServerReceiveImportantInputData);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UNetworkPhysicsComponent_ServerReceiveImportantInputData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "// Server RPC to receive important inputs from client\n" },
		{ "ModuleRelativePath", "Public/Physics/NetworkPhysicsComponent.h" },
		{ "ToolTip", "Server RPC to receive important inputs from client" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClientInputs_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ClientInputs;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNetworkPhysicsComponent_ServerReceiveImportantInputData_Statics::NewProp_ClientInputs = { "ClientInputs", nullptr, (EPropertyFlags)0x0010008008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NetworkPhysicsComponent_eventServerReceiveImportantInputData_Parms, ClientInputs), Z_Construct_UScriptStruct_FNetworkPhysicsRewindDataImportantInputProxy, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClientInputs_MetaData), NewProp_ClientInputs_MetaData) }; // 375247947
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNetworkPhysicsComponent_ServerReceiveImportantInputData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNetworkPhysicsComponent_ServerReceiveImportantInputData_Statics::NewProp_ClientInputs,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNetworkPhysicsComponent_ServerReceiveImportantInputData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNetworkPhysicsComponent_ServerReceiveImportantInputData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNetworkPhysicsComponent, nullptr, "ServerReceiveImportantInputData", nullptr, nullptr, Z_Construct_UFunction_UNetworkPhysicsComponent_ServerReceiveImportantInputData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNetworkPhysicsComponent_ServerReceiveImportantInputData_Statics::PropPointers), sizeof(NetworkPhysicsComponent_eventServerReceiveImportantInputData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280CC2, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNetworkPhysicsComponent_ServerReceiveImportantInputData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNetworkPhysicsComponent_ServerReceiveImportantInputData_Statics::Function_MetaDataParams) };
static_assert(sizeof(NetworkPhysicsComponent_eventServerReceiveImportantInputData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNetworkPhysicsComponent_ServerReceiveImportantInputData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNetworkPhysicsComponent_ServerReceiveImportantInputData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNetworkPhysicsComponent::execServerReceiveImportantInputData)
{
	P_GET_STRUCT(FNetworkPhysicsRewindDataImportantInputProxy,Z_Param_ClientInputs);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerReceiveImportantInputData_Implementation(Z_Param_ClientInputs);
	P_NATIVE_END;
}
// End Class UNetworkPhysicsComponent Function ServerReceiveImportantInputData

// Begin Class UNetworkPhysicsComponent Function ServerReceiveInputData
struct NetworkPhysicsComponent_eventServerReceiveInputData_Parms
{
	FNetworkPhysicsRewindDataInputProxy ClientInputs;
};
static const FName NAME_UNetworkPhysicsComponent_ServerReceiveInputData = FName(TEXT("ServerReceiveInputData"));
void UNetworkPhysicsComponent::ServerReceiveInputData(FNetworkPhysicsRewindDataInputProxy const& ClientInputs)
{
	NetworkPhysicsComponent_eventServerReceiveInputData_Parms Parms;
	Parms.ClientInputs=ClientInputs;
	UFunction* Func = FindFunctionChecked(NAME_UNetworkPhysicsComponent_ServerReceiveInputData);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UNetworkPhysicsComponent_ServerReceiveInputData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "// Server RPC to receive inputs from client\n" },
		{ "ModuleRelativePath", "Public/Physics/NetworkPhysicsComponent.h" },
		{ "ToolTip", "Server RPC to receive inputs from client" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClientInputs_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ClientInputs;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNetworkPhysicsComponent_ServerReceiveInputData_Statics::NewProp_ClientInputs = { "ClientInputs", nullptr, (EPropertyFlags)0x0010008008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NetworkPhysicsComponent_eventServerReceiveInputData_Parms, ClientInputs), Z_Construct_UScriptStruct_FNetworkPhysicsRewindDataInputProxy, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClientInputs_MetaData), NewProp_ClientInputs_MetaData) }; // 3858099244
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNetworkPhysicsComponent_ServerReceiveInputData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNetworkPhysicsComponent_ServerReceiveInputData_Statics::NewProp_ClientInputs,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNetworkPhysicsComponent_ServerReceiveInputData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNetworkPhysicsComponent_ServerReceiveInputData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNetworkPhysicsComponent, nullptr, "ServerReceiveInputData", nullptr, nullptr, Z_Construct_UFunction_UNetworkPhysicsComponent_ServerReceiveInputData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNetworkPhysicsComponent_ServerReceiveInputData_Statics::PropPointers), sizeof(NetworkPhysicsComponent_eventServerReceiveInputData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280C42, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNetworkPhysicsComponent_ServerReceiveInputData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNetworkPhysicsComponent_ServerReceiveInputData_Statics::Function_MetaDataParams) };
static_assert(sizeof(NetworkPhysicsComponent_eventServerReceiveInputData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNetworkPhysicsComponent_ServerReceiveInputData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNetworkPhysicsComponent_ServerReceiveInputData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNetworkPhysicsComponent::execServerReceiveInputData)
{
	P_GET_STRUCT(FNetworkPhysicsRewindDataInputProxy,Z_Param_ClientInputs);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerReceiveInputData_Implementation(Z_Param_ClientInputs);
	P_NATIVE_END;
}
// End Class UNetworkPhysicsComponent Function ServerReceiveInputData

// Begin Class UNetworkPhysicsComponent Function ServerReceiveInputsDatas
struct NetworkPhysicsComponent_eventServerReceiveInputsDatas_Parms
{
	FNetworkPhysicsRewindDataInputProxy ClientInputs;
};
static const FName NAME_UNetworkPhysicsComponent_ServerReceiveInputsDatas = FName(TEXT("ServerReceiveInputsDatas"));
void UNetworkPhysicsComponent::ServerReceiveInputsDatas(FNetworkPhysicsRewindDataInputProxy const& ClientInputs)
{
	NetworkPhysicsComponent_eventServerReceiveInputsDatas_Parms Parms;
	Parms.ClientInputs=ClientInputs;
	UFunction* Func = FindFunctionChecked(NAME_UNetworkPhysicsComponent_ServerReceiveInputsDatas);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UNetworkPhysicsComponent_ServerReceiveInputsDatas_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "ServerReceiveInputsDatas has been deprecated. Use ServerReceiveInputData instead." },
		{ "ModuleRelativePath", "Public/Physics/NetworkPhysicsComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClientInputs_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ClientInputs;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNetworkPhysicsComponent_ServerReceiveInputsDatas_Statics::NewProp_ClientInputs = { "ClientInputs", nullptr, (EPropertyFlags)0x0010008008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NetworkPhysicsComponent_eventServerReceiveInputsDatas_Parms, ClientInputs), Z_Construct_UScriptStruct_FNetworkPhysicsRewindDataInputProxy, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClientInputs_MetaData), NewProp_ClientInputs_MetaData) }; // 3858099244
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNetworkPhysicsComponent_ServerReceiveInputsDatas_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNetworkPhysicsComponent_ServerReceiveInputsDatas_Statics::NewProp_ClientInputs,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNetworkPhysicsComponent_ServerReceiveInputsDatas_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNetworkPhysicsComponent_ServerReceiveInputsDatas_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNetworkPhysicsComponent, nullptr, "ServerReceiveInputsDatas", nullptr, nullptr, Z_Construct_UFunction_UNetworkPhysicsComponent_ServerReceiveInputsDatas_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNetworkPhysicsComponent_ServerReceiveInputsDatas_Statics::PropPointers), sizeof(NetworkPhysicsComponent_eventServerReceiveInputsDatas_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220C42, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNetworkPhysicsComponent_ServerReceiveInputsDatas_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNetworkPhysicsComponent_ServerReceiveInputsDatas_Statics::Function_MetaDataParams) };
static_assert(sizeof(NetworkPhysicsComponent_eventServerReceiveInputsDatas_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNetworkPhysicsComponent_ServerReceiveInputsDatas()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNetworkPhysicsComponent_ServerReceiveInputsDatas_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNetworkPhysicsComponent::execServerReceiveInputsDatas)
{
	P_GET_STRUCT(FNetworkPhysicsRewindDataInputProxy,Z_Param_ClientInputs);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerReceiveInputsDatas_Implementation(Z_Param_ClientInputs);
	P_NATIVE_END;
}
// End Class UNetworkPhysicsComponent Function ServerReceiveInputsDatas

// Begin Class UNetworkPhysicsComponent
void UNetworkPhysicsComponent::StaticRegisterNativesUNetworkPhysicsComponent()
{
	UClass* Class = UNetworkPhysicsComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "MulticastReceiveImportantInputData", &UNetworkPhysicsComponent::execMulticastReceiveImportantInputData },
		{ "MulticastReceiveImportantStateData", &UNetworkPhysicsComponent::execMulticastReceiveImportantStateData },
		{ "OnRep_SetReplicatedInputs", &UNetworkPhysicsComponent::execOnRep_SetReplicatedInputs },
		{ "OnRep_SetReplicatedStates", &UNetworkPhysicsComponent::execOnRep_SetReplicatedStates },
		{ "ServerReceiveImportantInputData", &UNetworkPhysicsComponent::execServerReceiveImportantInputData },
		{ "ServerReceiveInputData", &UNetworkPhysicsComponent::execServerReceiveInputData },
		{ "ServerReceiveInputsDatas", &UNetworkPhysicsComponent::execServerReceiveInputsDatas },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNetworkPhysicsComponent);
UClass* Z_Construct_UClass_UNetworkPhysicsComponent_NoRegister()
{
	return UNetworkPhysicsComponent::StaticClass();
}
struct Z_Construct_UClass_UNetworkPhysicsComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Network physics component to add to actors or pawns that control their physic simulation through applying inputs,\n * and should support networking through physics resimulation.\n */" },
		{ "IncludePath", "Physics/NetworkPhysicsComponent.h" },
		{ "ModuleRelativePath", "Public/Physics/NetworkPhysicsComponent.h" },
		{ "ToolTip", "Network physics component to add to actors or pawns that control their physic simulation through applying inputs,\nand should support networking through physics resimulation." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReplicatedImportantInput_MetaData[] = {
		{ "Comment", "// replicated important physics input\n" },
		{ "ModuleRelativePath", "Public/Physics/NetworkPhysicsComponent.h" },
		{ "ToolTip", "replicated important physics input" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReplicatedImportantState_MetaData[] = {
		{ "Comment", "// replicated important physics state\n" },
		{ "ModuleRelativePath", "Public/Physics/NetworkPhysicsComponent.h" },
		{ "ToolTip", "replicated important physics state" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReplicatedInputs_MetaData[] = {
		{ "Comment", "// replicated physics inputs\n" },
		{ "ModuleRelativePath", "Public/Physics/NetworkPhysicsComponent.h" },
		{ "ToolTip", "replicated physics inputs" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReplicatedStates_MetaData[] = {
		{ "Comment", "// replicated physics states \n" },
		{ "ModuleRelativePath", "Public/Physics/NetworkPhysicsComponent.h" },
		{ "ToolTip", "replicated physics states" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReplicatedImportantInput;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReplicatedImportantState;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReplicatedInputs;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReplicatedStates;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNetworkPhysicsComponent_MulticastReceiveImportantInputData, "MulticastReceiveImportantInputData" }, // 893201078
		{ &Z_Construct_UFunction_UNetworkPhysicsComponent_MulticastReceiveImportantStateData, "MulticastReceiveImportantStateData" }, // 809751284
		{ &Z_Construct_UFunction_UNetworkPhysicsComponent_OnRep_SetReplicatedInputs, "OnRep_SetReplicatedInputs" }, // 1043935227
		{ &Z_Construct_UFunction_UNetworkPhysicsComponent_OnRep_SetReplicatedStates, "OnRep_SetReplicatedStates" }, // 2066928337
		{ &Z_Construct_UFunction_UNetworkPhysicsComponent_ServerReceiveImportantInputData, "ServerReceiveImportantInputData" }, // 1948664898
		{ &Z_Construct_UFunction_UNetworkPhysicsComponent_ServerReceiveInputData, "ServerReceiveInputData" }, // 4172732810
		{ &Z_Construct_UFunction_UNetworkPhysicsComponent_ServerReceiveInputsDatas, "ServerReceiveInputsDatas" }, // 952006424
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNetworkPhysicsComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNetworkPhysicsComponent_Statics::NewProp_ReplicatedImportantInput = { "ReplicatedImportantInput", nullptr, (EPropertyFlags)0x0020088000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNetworkPhysicsComponent, ReplicatedImportantInput), Z_Construct_UScriptStruct_FNetworkPhysicsRewindDataImportantInputProxy, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReplicatedImportantInput_MetaData), NewProp_ReplicatedImportantInput_MetaData) }; // 375247947
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNetworkPhysicsComponent_Statics::NewProp_ReplicatedImportantState = { "ReplicatedImportantState", nullptr, (EPropertyFlags)0x0020088000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNetworkPhysicsComponent, ReplicatedImportantState), Z_Construct_UScriptStruct_FNetworkPhysicsRewindDataImportantStateProxy, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReplicatedImportantState_MetaData), NewProp_ReplicatedImportantState_MetaData) }; // 3904299927
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNetworkPhysicsComponent_Statics::NewProp_ReplicatedInputs = { "ReplicatedInputs", "OnRep_SetReplicatedInputs", (EPropertyFlags)0x0020088100002020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNetworkPhysicsComponent, ReplicatedInputs), Z_Construct_UScriptStruct_FNetworkPhysicsRewindDataInputProxy, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReplicatedInputs_MetaData), NewProp_ReplicatedInputs_MetaData) }; // 3858099244
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNetworkPhysicsComponent_Statics::NewProp_ReplicatedStates = { "ReplicatedStates", "OnRep_SetReplicatedStates", (EPropertyFlags)0x0020088100002020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNetworkPhysicsComponent, ReplicatedStates), Z_Construct_UScriptStruct_FNetworkPhysicsRewindDataStateProxy, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReplicatedStates_MetaData), NewProp_ReplicatedStates_MetaData) }; // 482757464
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNetworkPhysicsComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetworkPhysicsComponent_Statics::NewProp_ReplicatedImportantInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetworkPhysicsComponent_Statics::NewProp_ReplicatedImportantState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetworkPhysicsComponent_Statics::NewProp_ReplicatedInputs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetworkPhysicsComponent_Statics::NewProp_ReplicatedStates,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNetworkPhysicsComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNetworkPhysicsComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNetworkPhysicsComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNetworkPhysicsComponent_Statics::ClassParams = {
	&UNetworkPhysicsComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UNetworkPhysicsComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UNetworkPhysicsComponent_Statics::PropPointers),
	0,
	0x00A800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNetworkPhysicsComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UNetworkPhysicsComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNetworkPhysicsComponent()
{
	if (!Z_Registration_Info_UClass_UNetworkPhysicsComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNetworkPhysicsComponent.OuterSingleton, Z_Construct_UClass_UNetworkPhysicsComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNetworkPhysicsComponent.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UNetworkPhysicsComponent>()
{
	return UNetworkPhysicsComponent::StaticClass();
}
void UNetworkPhysicsComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_ReplicatedInputs(TEXT("ReplicatedInputs"));
	static const FName Name_ReplicatedStates(TEXT("ReplicatedStates"));
	const bool bIsValid = true
		&& Name_ReplicatedInputs == ClassReps[(int32)ENetFields_Private::ReplicatedInputs].Property->GetFName()
		&& Name_ReplicatedStates == ClassReps[(int32)ENetFields_Private::ReplicatedStates].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UNetworkPhysicsComponent"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNetworkPhysicsComponent);
UNetworkPhysicsComponent::~UNetworkPhysicsComponent() {}
// End Class UNetworkPhysicsComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Physics_NetworkPhysicsComponent_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FNetworkPhysicsRewindDataProxy::StaticStruct, Z_Construct_UScriptStruct_FNetworkPhysicsRewindDataProxy_Statics::NewStructOps, TEXT("NetworkPhysicsRewindDataProxy"), &Z_Registration_Info_UScriptStruct_NetworkPhysicsRewindDataProxy, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNetworkPhysicsRewindDataProxy), 2468968552U) },
		{ FNetworkPhysicsRewindDataInputProxy::StaticStruct, Z_Construct_UScriptStruct_FNetworkPhysicsRewindDataInputProxy_Statics::NewStructOps, TEXT("NetworkPhysicsRewindDataInputProxy"), &Z_Registration_Info_UScriptStruct_NetworkPhysicsRewindDataInputProxy, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNetworkPhysicsRewindDataInputProxy), 3858099244U) },
		{ FNetworkPhysicsRewindDataStateProxy::StaticStruct, Z_Construct_UScriptStruct_FNetworkPhysicsRewindDataStateProxy_Statics::NewStructOps, TEXT("NetworkPhysicsRewindDataStateProxy"), &Z_Registration_Info_UScriptStruct_NetworkPhysicsRewindDataStateProxy, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNetworkPhysicsRewindDataStateProxy), 482757464U) },
		{ FNetworkPhysicsRewindDataImportantInputProxy::StaticStruct, Z_Construct_UScriptStruct_FNetworkPhysicsRewindDataImportantInputProxy_Statics::NewStructOps, TEXT("NetworkPhysicsRewindDataImportantInputProxy"), &Z_Registration_Info_UScriptStruct_NetworkPhysicsRewindDataImportantInputProxy, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNetworkPhysicsRewindDataImportantInputProxy), 375247947U) },
		{ FNetworkPhysicsRewindDataImportantStateProxy::StaticStruct, Z_Construct_UScriptStruct_FNetworkPhysicsRewindDataImportantStateProxy_Statics::NewStructOps, TEXT("NetworkPhysicsRewindDataImportantStateProxy"), &Z_Registration_Info_UScriptStruct_NetworkPhysicsRewindDataImportantStateProxy, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNetworkPhysicsRewindDataImportantStateProxy), 3904299927U) },
		{ FNetworkPhysicsData::StaticStruct, Z_Construct_UScriptStruct_FNetworkPhysicsData_Statics::NewStructOps, TEXT("NetworkPhysicsData"), &Z_Registration_Info_UScriptStruct_NetworkPhysicsData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNetworkPhysicsData), 3143257009U) },
		{ FNetworkPhysicsDatas::StaticStruct, Z_Construct_UScriptStruct_FNetworkPhysicsDatas_Statics::NewStructOps, TEXT("NetworkPhysicsDatas"), &Z_Registration_Info_UScriptStruct_NetworkPhysicsDatas, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNetworkPhysicsDatas), 719173296U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNetworkPhysicsSystem, UNetworkPhysicsSystem::StaticClass, TEXT("UNetworkPhysicsSystem"), &Z_Registration_Info_UClass_UNetworkPhysicsSystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNetworkPhysicsSystem), 3679104693U) },
		{ Z_Construct_UClass_UNetworkPhysicsComponent, UNetworkPhysicsComponent::StaticClass, TEXT("UNetworkPhysicsComponent"), &Z_Registration_Info_UClass_UNetworkPhysicsComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNetworkPhysicsComponent), 1767536082U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Physics_NetworkPhysicsComponent_h_2967437955(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Physics_NetworkPhysicsComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Physics_NetworkPhysicsComponent_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Physics_NetworkPhysicsComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Physics_NetworkPhysicsComponent_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
