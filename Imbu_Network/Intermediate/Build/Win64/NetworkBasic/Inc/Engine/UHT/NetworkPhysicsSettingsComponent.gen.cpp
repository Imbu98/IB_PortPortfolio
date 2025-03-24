// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/Physics/NetworkPhysicsSettingsComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNetworkPhysicsSettingsComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_UNetworkPhysicsSettingsComponent();
ENGINE_API UClass* Z_Construct_UClass_UNetworkPhysicsSettingsComponent_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EPhysicsReplicationMode();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FNetworkPhysicsSettings();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FNetworkPhysicsSettingsDefaultReplication();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FNetworkPhysicsSettingsNetworkPhysicsComponent();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulation();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin ScriptStruct FNetworkPhysicsSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NetworkPhysicsSettings;
class UScriptStruct* FNetworkPhysicsSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NetworkPhysicsSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NetworkPhysicsSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNetworkPhysicsSettings, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("NetworkPhysicsSettings"));
	}
	return Z_Registration_Info_UScriptStruct_NetworkPhysicsSettings.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FNetworkPhysicsSettings>()
{
	return FNetworkPhysicsSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNetworkPhysicsSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Physics/NetworkPhysicsSettingsComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideSimProxyRepMode_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Physics/NetworkPhysicsSettingsComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SimProxyRepMode_MetaData[] = {
		{ "Category", "Overrides" },
		{ "Comment", "// Override the EPhysicsReplicationMode for Actors with ENetRole::ROLE_SimulatedProxy.\n" },
		{ "EditCondition", "bOverrideSimProxyRepMode" },
		{ "ModuleRelativePath", "Public/Physics/NetworkPhysicsSettingsComponent.h" },
		{ "ToolTip", "Override the EPhysicsReplicationMode for Actors with ENetRole::ROLE_SimulatedProxy." },
	};
#endif // WITH_METADATA
	static void NewProp_bOverrideSimProxyRepMode_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideSimProxyRepMode;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SimProxyRepMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SimProxyRepMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNetworkPhysicsSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FNetworkPhysicsSettings_Statics::NewProp_bOverrideSimProxyRepMode_SetBit(void* Obj)
{
	((FNetworkPhysicsSettings*)Obj)->bOverrideSimProxyRepMode = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNetworkPhysicsSettings_Statics::NewProp_bOverrideSimProxyRepMode = { "bOverrideSimProxyRepMode", nullptr, (EPropertyFlags)0x0010000000014001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FNetworkPhysicsSettings), &Z_Construct_UScriptStruct_FNetworkPhysicsSettings_Statics::NewProp_bOverrideSimProxyRepMode_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideSimProxyRepMode_MetaData), NewProp_bOverrideSimProxyRepMode_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FNetworkPhysicsSettings_Statics::NewProp_SimProxyRepMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FNetworkPhysicsSettings_Statics::NewProp_SimProxyRepMode = { "SimProxyRepMode", nullptr, (EPropertyFlags)0x0010000000014001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNetworkPhysicsSettings, SimProxyRepMode), Z_Construct_UEnum_Engine_EPhysicsReplicationMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SimProxyRepMode_MetaData), NewProp_SimProxyRepMode_MetaData) }; // 1461121912
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNetworkPhysicsSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetworkPhysicsSettings_Statics::NewProp_bOverrideSimProxyRepMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetworkPhysicsSettings_Statics::NewProp_SimProxyRepMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetworkPhysicsSettings_Statics::NewProp_SimProxyRepMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetworkPhysicsSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNetworkPhysicsSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"NetworkPhysicsSettings",
	Z_Construct_UScriptStruct_FNetworkPhysicsSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetworkPhysicsSettings_Statics::PropPointers),
	sizeof(FNetworkPhysicsSettings),
	alignof(FNetworkPhysicsSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetworkPhysicsSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNetworkPhysicsSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNetworkPhysicsSettings()
{
	if (!Z_Registration_Info_UScriptStruct_NetworkPhysicsSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NetworkPhysicsSettings.InnerSingleton, Z_Construct_UScriptStruct_FNetworkPhysicsSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NetworkPhysicsSettings.InnerSingleton;
}
// End ScriptStruct FNetworkPhysicsSettings

// Begin ScriptStruct FNetworkPhysicsSettingsDefaultReplication
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NetworkPhysicsSettingsDefaultReplication;
class UScriptStruct* FNetworkPhysicsSettingsDefaultReplication::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NetworkPhysicsSettingsDefaultReplication.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NetworkPhysicsSettingsDefaultReplication.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNetworkPhysicsSettingsDefaultReplication, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("NetworkPhysicsSettingsDefaultReplication"));
	}
	return Z_Registration_Info_UScriptStruct_NetworkPhysicsSettingsDefaultReplication.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FNetworkPhysicsSettingsDefaultReplication>()
{
	return FNetworkPhysicsSettingsDefaultReplication::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNetworkPhysicsSettingsDefaultReplication_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Physics/NetworkPhysicsSettingsComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideMaxLinearHardSnapDistance_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Physics/NetworkPhysicsSettingsComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxLinearHardSnapDistance_MetaData[] = {
		{ "Category", "Overrides" },
		{ "Comment", "// Overrides CVar: p.MaxLinearHardSnapDistance -- Hardsnap if distance between current position and extrapolated target position is larger than this value.\n" },
		{ "EditCondition", "bOverrideMaxLinearHardSnapDistance" },
		{ "ModuleRelativePath", "Public/Physics/NetworkPhysicsSettingsComponent.h" },
		{ "ToolTip", "Overrides CVar: p.MaxLinearHardSnapDistance -- Hardsnap if distance between current position and extrapolated target position is larger than this value." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideDefaultLegacyHardsnapInPT_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Physics/NetworkPhysicsSettingsComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHardsnapInPhysicsThread_MetaData[] = {
		{ "Category", "Overrides" },
		{ "Comment", "// Overrides CVar: p.DefaultReplication.Legacy.HardsnapInPT -- If default replication is used and it's running the legacy flow through Game Thread, allow hardsnapping to be performed on Physics Thread if async physics is enabled.\n" },
		{ "EditCondition", "bOverrideDefaultLegacyHardsnapInPT" },
		{ "ModuleRelativePath", "Public/Physics/NetworkPhysicsSettingsComponent.h" },
		{ "ToolTip", "Overrides CVar: p.DefaultReplication.Legacy.HardsnapInPT -- If default replication is used and it's running the legacy flow through Game Thread, allow hardsnapping to be performed on Physics Thread if async physics is enabled." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideCorrectConnectedBodies_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Physics/NetworkPhysicsSettingsComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCorrectConnectedBodies_MetaData[] = {
		{ "Category", "Overrides" },
		{ "Comment", "// Overrides CVar: p.DefaultReplication.CorrectConnectedBodies -- When true, transform corrections will also apply to any connected physics object.\n" },
		{ "EditCondition", "bOverrideCorrectConnectedBodies" },
		{ "ModuleRelativePath", "Public/Physics/NetworkPhysicsSettingsComponent.h" },
		{ "ToolTip", "Overrides CVar: p.DefaultReplication.CorrectConnectedBodies -- When true, transform corrections will also apply to any connected physics object." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideCorrectConnectedBodiesFriction_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Physics/NetworkPhysicsSettingsComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCorrectConnectedBodiesFriction_MetaData[] = {
		{ "Category", "Overrides" },
		{ "Comment", "// Overrides CVar: p.DefaultReplication.CorrectConnectedBodiesFriction -- When true, transform correction on any connected physics object will also recalculate their friction.\n" },
		{ "EditCondition", "bOverrideCorrectConnectedBodiesFriction" },
		{ "ModuleRelativePath", "Public/Physics/NetworkPhysicsSettingsComponent.h" },
		{ "ToolTip", "Overrides CVar: p.DefaultReplication.CorrectConnectedBodiesFriction -- When true, transform correction on any connected physics object will also recalculate their friction." },
	};
#endif // WITH_METADATA
	static void NewProp_bOverrideMaxLinearHardSnapDistance_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideMaxLinearHardSnapDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxLinearHardSnapDistance;
	static void NewProp_bOverrideDefaultLegacyHardsnapInPT_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideDefaultLegacyHardsnapInPT;
	static void NewProp_bHardsnapInPhysicsThread_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHardsnapInPhysicsThread;
	static void NewProp_bOverrideCorrectConnectedBodies_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideCorrectConnectedBodies;
	static void NewProp_bCorrectConnectedBodies_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCorrectConnectedBodies;
	static void NewProp_bOverrideCorrectConnectedBodiesFriction_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideCorrectConnectedBodiesFriction;
	static void NewProp_bCorrectConnectedBodiesFriction_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCorrectConnectedBodiesFriction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNetworkPhysicsSettingsDefaultReplication>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FNetworkPhysicsSettingsDefaultReplication_Statics::NewProp_bOverrideMaxLinearHardSnapDistance_SetBit(void* Obj)
{
	((FNetworkPhysicsSettingsDefaultReplication*)Obj)->bOverrideMaxLinearHardSnapDistance = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNetworkPhysicsSettingsDefaultReplication_Statics::NewProp_bOverrideMaxLinearHardSnapDistance = { "bOverrideMaxLinearHardSnapDistance", nullptr, (EPropertyFlags)0x0010000000014001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FNetworkPhysicsSettingsDefaultReplication), &Z_Construct_UScriptStruct_FNetworkPhysicsSettingsDefaultReplication_Statics::NewProp_bOverrideMaxLinearHardSnapDistance_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideMaxLinearHardSnapDistance_MetaData), NewProp_bOverrideMaxLinearHardSnapDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNetworkPhysicsSettingsDefaultReplication_Statics::NewProp_MaxLinearHardSnapDistance = { "MaxLinearHardSnapDistance", nullptr, (EPropertyFlags)0x0010000000014001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNetworkPhysicsSettingsDefaultReplication, MaxLinearHardSnapDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxLinearHardSnapDistance_MetaData), NewProp_MaxLinearHardSnapDistance_MetaData) };
void Z_Construct_UScriptStruct_FNetworkPhysicsSettingsDefaultReplication_Statics::NewProp_bOverrideDefaultLegacyHardsnapInPT_SetBit(void* Obj)
{
	((FNetworkPhysicsSettingsDefaultReplication*)Obj)->bOverrideDefaultLegacyHardsnapInPT = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNetworkPhysicsSettingsDefaultReplication_Statics::NewProp_bOverrideDefaultLegacyHardsnapInPT = { "bOverrideDefaultLegacyHardsnapInPT", nullptr, (EPropertyFlags)0x0010000000014001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FNetworkPhysicsSettingsDefaultReplication), &Z_Construct_UScriptStruct_FNetworkPhysicsSettingsDefaultReplication_Statics::NewProp_bOverrideDefaultLegacyHardsnapInPT_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideDefaultLegacyHardsnapInPT_MetaData), NewProp_bOverrideDefaultLegacyHardsnapInPT_MetaData) };
void Z_Construct_UScriptStruct_FNetworkPhysicsSettingsDefaultReplication_Statics::NewProp_bHardsnapInPhysicsThread_SetBit(void* Obj)
{
	((FNetworkPhysicsSettingsDefaultReplication*)Obj)->bHardsnapInPhysicsThread = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNetworkPhysicsSettingsDefaultReplication_Statics::NewProp_bHardsnapInPhysicsThread = { "bHardsnapInPhysicsThread", nullptr, (EPropertyFlags)0x0010000000014001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FNetworkPhysicsSettingsDefaultReplication), &Z_Construct_UScriptStruct_FNetworkPhysicsSettingsDefaultReplication_Statics::NewProp_bHardsnapInPhysicsThread_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHardsnapInPhysicsThread_MetaData), NewProp_bHardsnapInPhysicsThread_MetaData) };
void Z_Construct_UScriptStruct_FNetworkPhysicsSettingsDefaultReplication_Statics::NewProp_bOverrideCorrectConnectedBodies_SetBit(void* Obj)
{
	((FNetworkPhysicsSettingsDefaultReplication*)Obj)->bOverrideCorrectConnectedBodies = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNetworkPhysicsSettingsDefaultReplication_Statics::NewProp_bOverrideCorrectConnectedBodies = { "bOverrideCorrectConnectedBodies", nullptr, (EPropertyFlags)0x0010000000014001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FNetworkPhysicsSettingsDefaultReplication), &Z_Construct_UScriptStruct_FNetworkPhysicsSettingsDefaultReplication_Statics::NewProp_bOverrideCorrectConnectedBodies_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideCorrectConnectedBodies_MetaData), NewProp_bOverrideCorrectConnectedBodies_MetaData) };
void Z_Construct_UScriptStruct_FNetworkPhysicsSettingsDefaultReplication_Statics::NewProp_bCorrectConnectedBodies_SetBit(void* Obj)
{
	((FNetworkPhysicsSettingsDefaultReplication*)Obj)->bCorrectConnectedBodies = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNetworkPhysicsSettingsDefaultReplication_Statics::NewProp_bCorrectConnectedBodies = { "bCorrectConnectedBodies", nullptr, (EPropertyFlags)0x0010000000014001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FNetworkPhysicsSettingsDefaultReplication), &Z_Construct_UScriptStruct_FNetworkPhysicsSettingsDefaultReplication_Statics::NewProp_bCorrectConnectedBodies_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCorrectConnectedBodies_MetaData), NewProp_bCorrectConnectedBodies_MetaData) };
void Z_Construct_UScriptStruct_FNetworkPhysicsSettingsDefaultReplication_Statics::NewProp_bOverrideCorrectConnectedBodiesFriction_SetBit(void* Obj)
{
	((FNetworkPhysicsSettingsDefaultReplication*)Obj)->bOverrideCorrectConnectedBodiesFriction = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNetworkPhysicsSettingsDefaultReplication_Statics::NewProp_bOverrideCorrectConnectedBodiesFriction = { "bOverrideCorrectConnectedBodiesFriction", nullptr, (EPropertyFlags)0x0010000000014001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FNetworkPhysicsSettingsDefaultReplication), &Z_Construct_UScriptStruct_FNetworkPhysicsSettingsDefaultReplication_Statics::NewProp_bOverrideCorrectConnectedBodiesFriction_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideCorrectConnectedBodiesFriction_MetaData), NewProp_bOverrideCorrectConnectedBodiesFriction_MetaData) };
void Z_Construct_UScriptStruct_FNetworkPhysicsSettingsDefaultReplication_Statics::NewProp_bCorrectConnectedBodiesFriction_SetBit(void* Obj)
{
	((FNetworkPhysicsSettingsDefaultReplication*)Obj)->bCorrectConnectedBodiesFriction = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNetworkPhysicsSettingsDefaultReplication_Statics::NewProp_bCorrectConnectedBodiesFriction = { "bCorrectConnectedBodiesFriction", nullptr, (EPropertyFlags)0x0010000000014001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FNetworkPhysicsSettingsDefaultReplication), &Z_Construct_UScriptStruct_FNetworkPhysicsSettingsDefaultReplication_Statics::NewProp_bCorrectConnectedBodiesFriction_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCorrectConnectedBodiesFriction_MetaData), NewProp_bCorrectConnectedBodiesFriction_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNetworkPhysicsSettingsDefaultReplication_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetworkPhysicsSettingsDefaultReplication_Statics::NewProp_bOverrideMaxLinearHardSnapDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetworkPhysicsSettingsDefaultReplication_Statics::NewProp_MaxLinearHardSnapDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetworkPhysicsSettingsDefaultReplication_Statics::NewProp_bOverrideDefaultLegacyHardsnapInPT,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetworkPhysicsSettingsDefaultReplication_Statics::NewProp_bHardsnapInPhysicsThread,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetworkPhysicsSettingsDefaultReplication_Statics::NewProp_bOverrideCorrectConnectedBodies,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetworkPhysicsSettingsDefaultReplication_Statics::NewProp_bCorrectConnectedBodies,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetworkPhysicsSettingsDefaultReplication_Statics::NewProp_bOverrideCorrectConnectedBodiesFriction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetworkPhysicsSettingsDefaultReplication_Statics::NewProp_bCorrectConnectedBodiesFriction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetworkPhysicsSettingsDefaultReplication_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNetworkPhysicsSettingsDefaultReplication_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"NetworkPhysicsSettingsDefaultReplication",
	Z_Construct_UScriptStruct_FNetworkPhysicsSettingsDefaultReplication_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetworkPhysicsSettingsDefaultReplication_Statics::PropPointers),
	sizeof(FNetworkPhysicsSettingsDefaultReplication),
	alignof(FNetworkPhysicsSettingsDefaultReplication),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetworkPhysicsSettingsDefaultReplication_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNetworkPhysicsSettingsDefaultReplication_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNetworkPhysicsSettingsDefaultReplication()
{
	if (!Z_Registration_Info_UScriptStruct_NetworkPhysicsSettingsDefaultReplication.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NetworkPhysicsSettingsDefaultReplication.InnerSingleton, Z_Construct_UScriptStruct_FNetworkPhysicsSettingsDefaultReplication_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NetworkPhysicsSettingsDefaultReplication.InnerSingleton;
}
// End ScriptStruct FNetworkPhysicsSettingsDefaultReplication

// Begin ScriptStruct FNetworkPhysicsSettingsPredictiveInterpolation
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NetworkPhysicsSettingsPredictiveInterpolation;
class UScriptStruct* FNetworkPhysicsSettingsPredictiveInterpolation::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NetworkPhysicsSettingsPredictiveInterpolation.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NetworkPhysicsSettingsPredictiveInterpolation.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("NetworkPhysicsSettingsPredictiveInterpolation"));
	}
	return Z_Registration_Info_UScriptStruct_NetworkPhysicsSettingsPredictiveInterpolation.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FNetworkPhysicsSettingsPredictiveInterpolation>()
{
	return FNetworkPhysicsSettingsPredictiveInterpolation::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Physics/NetworkPhysicsSettingsComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverridePosCorrectionTimeBase_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Physics/NetworkPhysicsSettingsComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PosCorrectionTimeBase_MetaData[] = {
		{ "Category", "Overrides" },
		{ "Comment", "// Overrides CVar: np2.PredictiveInterpolation.PosCorrectionTimeBase -- Base time to correct positional offset over. RoundTripTime * PosCorrectionTimeMultiplier is added on top of this.\n" },
		{ "EditCondition", "bOverridePosCorrectionTimeBase" },
		{ "ModuleRelativePath", "Public/Physics/NetworkPhysicsSettingsComponent.h" },
		{ "ToolTip", "Overrides CVar: np2.PredictiveInterpolation.PosCorrectionTimeBase -- Base time to correct positional offset over. RoundTripTime * PosCorrectionTimeMultiplier is added on top of this." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverridePosCorrectionTimeMin_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Physics/NetworkPhysicsSettingsComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PosCorrectionTimeMin_MetaData[] = {
		{ "Category", "Overrides" },
		{ "Comment", "// Overrides CVar: np2.PredictiveInterpolation.PosCorrectionTimeMin -- Min time to correct positional offset over. DeltaSeconds is added on top of this.\n" },
		{ "EditCondition", "bOverridePosCorrectionTimeMin" },
		{ "ModuleRelativePath", "Public/Physics/NetworkPhysicsSettingsComponent.h" },
		{ "ToolTip", "Overrides CVar: np2.PredictiveInterpolation.PosCorrectionTimeMin -- Min time to correct positional offset over. DeltaSeconds is added on top of this." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverridePosCorrectionTimeMultiplier_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Physics/NetworkPhysicsSettingsComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PosCorrectionTimeMultiplier_MetaData[] = {
		{ "Category", "Overrides" },
		{ "Comment", "// Overrides CVar: np2.PredictiveInterpolation.PosCorrectionTimeMultiplier -- Multiplier to adjust how much of RoundTripTime to add to positional offset correction.\n" },
		{ "EditCondition", "bOverridePosCorrectionTimeMultiplier" },
		{ "ModuleRelativePath", "Public/Physics/NetworkPhysicsSettingsComponent.h" },
		{ "ToolTip", "Overrides CVar: np2.PredictiveInterpolation.PosCorrectionTimeMultiplier -- Multiplier to adjust how much of RoundTripTime to add to positional offset correction." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideRotCorrectionTimeBase_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Physics/NetworkPhysicsSettingsComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotCorrectionTimeBase_MetaData[] = {
		{ "Category", "Overrides" },
		{ "Comment", "// Overrides CVar: np2.PredictiveInterpolation.RotCorrectionTimeBase -- Base time to correct rotational offset over. RoundTripTime * RotCorrectionTimeMultiplier is added on top of this.\n" },
		{ "EditCondition", "bOverrideRotCorrectionTimeBase" },
		{ "ModuleRelativePath", "Public/Physics/NetworkPhysicsSettingsComponent.h" },
		{ "ToolTip", "Overrides CVar: np2.PredictiveInterpolation.RotCorrectionTimeBase -- Base time to correct rotational offset over. RoundTripTime * RotCorrectionTimeMultiplier is added on top of this." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideRotCorrectionTimeMin_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Physics/NetworkPhysicsSettingsComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotCorrectionTimeMin_MetaData[] = {
		{ "Category", "Overrides" },
		{ "Comment", "// Overrides CVar: np2.PredictiveInterpolation.RotCorrectionTimeMin -- Min time to correct rotational offset over. DeltaSeconds is added on top of this.\n" },
		{ "EditCondition", "bOverrideRotCorrectionTimeMin" },
		{ "ModuleRelativePath", "Public/Physics/NetworkPhysicsSettingsComponent.h" },
		{ "ToolTip", "Overrides CVar: np2.PredictiveInterpolation.RotCorrectionTimeMin -- Min time to correct rotational offset over. DeltaSeconds is added on top of this." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideRotCorrectionTimeMultiplier_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Physics/NetworkPhysicsSettingsComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotCorrectionTimeMultiplier_MetaData[] = {
		{ "Category", "Overrides" },
		{ "Comment", "// Overrides CVar: np2.PredictiveInterpolation.RotCorrectionTimeMultiplier -- Multiplier to adjust how much of RoundTripTime to add to rotational offset correction.\n" },
		{ "EditCondition", "bOverrideRotCorrectionTimeMultiplier" },
		{ "ModuleRelativePath", "Public/Physics/NetworkPhysicsSettingsComponent.h" },
		{ "ToolTip", "Overrides CVar: np2.PredictiveInterpolation.RotCorrectionTimeMultiplier -- Multiplier to adjust how much of RoundTripTime to add to rotational offset correction." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverridePosInterpolationTimeMultiplier_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Physics/NetworkPhysicsSettingsComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PosInterpolationTimeMultiplier_MetaData[] = {
		{ "Category", "Overrides" },
		{ "Comment", "// Overrides CVar: np2.PredictiveInterpolation.InterpolationTimeMultiplier -- Multiplier to adjust the interpolation time which is based on the sendrate of state data from the server.\n" },
		{ "EditCondition", "bOverridePosInterpolationTimeMultiplier" },
		{ "ModuleRelativePath", "Public/Physics/NetworkPhysicsSettingsComponent.h" },
		{ "ToolTip", "Overrides CVar: np2.PredictiveInterpolation.InterpolationTimeMultiplier -- Multiplier to adjust the interpolation time which is based on the sendrate of state data from the server." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideRotInterpolationTimeMultiplier_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Physics/NetworkPhysicsSettingsComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotInterpolationTimeMultiplier_MetaData[] = {
		{ "Category", "Overrides" },
		{ "Comment", "// Overrides CVar: np2.PredictiveInterpolation.RotInterpolationTimeMultiplier -- Multiplier to adjust the rotational interpolation time which is based on the sendrate of state data from the server.\n" },
		{ "EditCondition", "bOverrideRotInterpolationTimeMultiplier" },
		{ "ModuleRelativePath", "Public/Physics/NetworkPhysicsSettingsComponent.h" },
		{ "ToolTip", "Overrides CVar: np2.PredictiveInterpolation.RotInterpolationTimeMultiplier -- Multiplier to adjust the rotational interpolation time which is based on the sendrate of state data from the server." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideSoftSnapPosStrength_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Physics/NetworkPhysicsSettingsComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SoftSnapPosStrength_MetaData[] = {
		{ "Category", "Overrides" },
		{ "Comment", "// Overrides CVar: np2.PredictiveInterpolation.SoftSnapPosStrength -- Value in percent between 0.0 - 1.0 representing how much to softsnap each tick of the remaining positional distance.\n" },
		{ "EditCondition", "bOverrideSoftSnapPosStrength" },
		{ "ModuleRelativePath", "Public/Physics/NetworkPhysicsSettingsComponent.h" },
		{ "ToolTip", "Overrides CVar: np2.PredictiveInterpolation.SoftSnapPosStrength -- Value in percent between 0.0 - 1.0 representing how much to softsnap each tick of the remaining positional distance." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideSoftSnapRotStrength_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Physics/NetworkPhysicsSettingsComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SoftSnapRotStrength_MetaData[] = {
		{ "Category", "Overrides" },
		{ "Comment", "// Overrides CVar: np2.PredictiveInterpolation.SoftSnapRotStrength -- Value in percent between 0.0 - 1.0 representing how much to softsnap each tick of the remaining rotational distance.\n" },
		{ "EditCondition", "bOverrideSoftSnapRotStrength" },
		{ "ModuleRelativePath", "Public/Physics/NetworkPhysicsSettingsComponent.h" },
		{ "ToolTip", "Overrides CVar: np2.PredictiveInterpolation.SoftSnapRotStrength -- Value in percent between 0.0 - 1.0 representing how much to softsnap each tick of the remaining rotational distance." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideSoftSnapToSource_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Physics/NetworkPhysicsSettingsComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSoftSnapToSource_MetaData[] = {
		{ "Category", "Overrides" },
		{ "Comment", "// Overrides CVar: np2.PredictiveInterpolation.SoftSnapToSource -- If true, softsnap will be performed towards the source state of the current target instead of the predicted state of the current target.\n" },
		{ "EditCondition", "bOverrideSoftSnapToSource" },
		{ "ModuleRelativePath", "Public/Physics/NetworkPhysicsSettingsComponent.h" },
		{ "ToolTip", "Overrides CVar: np2.PredictiveInterpolation.SoftSnapToSource -- If true, softsnap will be performed towards the source state of the current target instead of the predicted state of the current target." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideDisableSoftSnap_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Physics/NetworkPhysicsSettingsComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDisableSoftSnap_MetaData[] = {
		{ "Category", "Overrides" },
		{ "Comment", "// Overrides CVar: np2.PredictiveInterpolation.DisableSoftSnap -- When true, predictive interpolation will not use softsnap to correct the replication with when velocity fails. Hardsnap will still eventually kick in if replication can't reach the target.\n" },
		{ "EditCondition", "bOverrideDisableSoftSnap" },
		{ "ModuleRelativePath", "Public/Physics/NetworkPhysicsSettingsComponent.h" },
		{ "ToolTip", "Overrides CVar: np2.PredictiveInterpolation.DisableSoftSnap -- When true, predictive interpolation will not use softsnap to correct the replication with when velocity fails. Hardsnap will still eventually kick in if replication can't reach the target." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideSkipVelocityRepOnPosEarlyOut_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Physics/NetworkPhysicsSettingsComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSkipVelocityRepOnPosEarlyOut_MetaData[] = {
		{ "Category", "Overrides" },
		{ "Comment", "// Overrides CVar: np2.PredictiveInterpolation.SkipVelocityRepOnPosEarlyOut -- If true, don't run linear velocity replication if position can early out but angular can't early out.\n" },
		{ "EditCondition", "bOverrideSkipVelocityRepOnPosEarlyOut" },
		{ "ModuleRelativePath", "Public/Physics/NetworkPhysicsSettingsComponent.h" },
		{ "ToolTip", "Overrides CVar: np2.PredictiveInterpolation.SkipVelocityRepOnPosEarlyOut -- If true, don't run linear velocity replication if position can early out but angular can't early out." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverridePostResimWaitForUpdate_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Physics/NetworkPhysicsSettingsComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPostResimWaitForUpdate_MetaData[] = {
		{ "Category", "Overrides" },
		{ "Comment", "// Overrides CVar: np2.PredictiveInterpolation.PostResimWaitForUpdate -- After a resimulation, wait for replicated states that correspond to post-resim state before processing replication again.\n" },
		{ "EditCondition", "bOverridePostResimWaitForUpdate" },
		{ "ModuleRelativePath", "Public/Physics/NetworkPhysicsSettingsComponent.h" },
		{ "ToolTip", "Overrides CVar: np2.PredictiveInterpolation.PostResimWaitForUpdate -- After a resimulation, wait for replicated states that correspond to post-resim state before processing replication again." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideCorrectConnectedBodies_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Physics/NetworkPhysicsSettingsComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCorrectConnectedBodies_MetaData[] = {
		{ "Category", "Overrides" },
		{ "Comment", "// Overrides CVar: np2.PredictiveInterpolation.CorrectConnectedBodies -- When true, transform corrections will also apply to any connected physics object.\n" },
		{ "EditCondition", "bOverrideCorrectConnectedBodies" },
		{ "ModuleRelativePath", "Public/Physics/NetworkPhysicsSettingsComponent.h" },
		{ "ToolTip", "Overrides CVar: np2.PredictiveInterpolation.CorrectConnectedBodies -- When true, transform corrections will also apply to any connected physics object." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideCorrectConnectedBodiesFriction_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Physics/NetworkPhysicsSettingsComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCorrectConnectedBodiesFriction_MetaData[] = {
		{ "Category", "Overrides" },
		{ "Comment", "// Overrides CVar: np2.PredictiveInterpolation.CorrectConnectedBodiesFriction -- When true, transform correction on any connected physics object will also recalculate their friction.\n" },
		{ "EditCondition", "bOverrideCorrectConnectedBodiesFriction" },
		{ "ModuleRelativePath", "Public/Physics/NetworkPhysicsSettingsComponent.h" },
		{ "ToolTip", "Overrides CVar: np2.PredictiveInterpolation.CorrectConnectedBodiesFriction -- When true, transform correction on any connected physics object will also recalculate their friction." },
	};
#endif // WITH_METADATA
	static void NewProp_bOverridePosCorrectionTimeBase_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverridePosCorrectionTimeBase;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PosCorrectionTimeBase;
	static void NewProp_bOverridePosCorrectionTimeMin_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverridePosCorrectionTimeMin;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PosCorrectionTimeMin;
	static void NewProp_bOverridePosCorrectionTimeMultiplier_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverridePosCorrectionTimeMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PosCorrectionTimeMultiplier;
	static void NewProp_bOverrideRotCorrectionTimeBase_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideRotCorrectionTimeBase;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RotCorrectionTimeBase;
	static void NewProp_bOverrideRotCorrectionTimeMin_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideRotCorrectionTimeMin;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RotCorrectionTimeMin;
	static void NewProp_bOverrideRotCorrectionTimeMultiplier_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideRotCorrectionTimeMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RotCorrectionTimeMultiplier;
	static void NewProp_bOverridePosInterpolationTimeMultiplier_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverridePosInterpolationTimeMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PosInterpolationTimeMultiplier;
	static void NewProp_bOverrideRotInterpolationTimeMultiplier_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideRotInterpolationTimeMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RotInterpolationTimeMultiplier;
	static void NewProp_bOverrideSoftSnapPosStrength_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideSoftSnapPosStrength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SoftSnapPosStrength;
	static void NewProp_bOverrideSoftSnapRotStrength_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideSoftSnapRotStrength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SoftSnapRotStrength;
	static void NewProp_bOverrideSoftSnapToSource_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideSoftSnapToSource;
	static void NewProp_bSoftSnapToSource_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSoftSnapToSource;
	static void NewProp_bOverrideDisableSoftSnap_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideDisableSoftSnap;
	static void NewProp_bDisableSoftSnap_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisableSoftSnap;
	static void NewProp_bOverrideSkipVelocityRepOnPosEarlyOut_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideSkipVelocityRepOnPosEarlyOut;
	static void NewProp_bSkipVelocityRepOnPosEarlyOut_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSkipVelocityRepOnPosEarlyOut;
	static void NewProp_bOverridePostResimWaitForUpdate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverridePostResimWaitForUpdate;
	static void NewProp_bPostResimWaitForUpdate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPostResimWaitForUpdate;
	static void NewProp_bOverrideCorrectConnectedBodies_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideCorrectConnectedBodies;
	static void NewProp_bCorrectConnectedBodies_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCorrectConnectedBodies;
	static void NewProp_bOverrideCorrectConnectedBodiesFriction_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideCorrectConnectedBodiesFriction;
	static void NewProp_bCorrectConnectedBodiesFriction_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCorrectConnectedBodiesFriction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNetworkPhysicsSettingsPredictiveInterpolation>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::NewProp_bOverridePosCorrectionTimeBase_SetBit(void* Obj)
{
	((FNetworkPhysicsSettingsPredictiveInterpolation*)Obj)->bOverridePosCorrectionTimeBase = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::NewProp_bOverridePosCorrectionTimeBase = { "bOverridePosCorrectionTimeBase", nullptr, (EPropertyFlags)0x0010000000014001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FNetworkPhysicsSettingsPredictiveInterpolation), &Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::NewProp_bOverridePosCorrectionTimeBase_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverridePosCorrectionTimeBase_MetaData), NewProp_bOverridePosCorrectionTimeBase_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::NewProp_PosCorrectionTimeBase = { "PosCorrectionTimeBase", nullptr, (EPropertyFlags)0x0010000000014001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNetworkPhysicsSettingsPredictiveInterpolation, PosCorrectionTimeBase), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PosCorrectionTimeBase_MetaData), NewProp_PosCorrectionTimeBase_MetaData) };
void Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::NewProp_bOverridePosCorrectionTimeMin_SetBit(void* Obj)
{
	((FNetworkPhysicsSettingsPredictiveInterpolation*)Obj)->bOverridePosCorrectionTimeMin = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::NewProp_bOverridePosCorrectionTimeMin = { "bOverridePosCorrectionTimeMin", nullptr, (EPropertyFlags)0x0010000000014001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FNetworkPhysicsSettingsPredictiveInterpolation), &Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::NewProp_bOverridePosCorrectionTimeMin_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverridePosCorrectionTimeMin_MetaData), NewProp_bOverridePosCorrectionTimeMin_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::NewProp_PosCorrectionTimeMin = { "PosCorrectionTimeMin", nullptr, (EPropertyFlags)0x0010000000014001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNetworkPhysicsSettingsPredictiveInterpolation, PosCorrectionTimeMin), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PosCorrectionTimeMin_MetaData), NewProp_PosCorrectionTimeMin_MetaData) };
void Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::NewProp_bOverridePosCorrectionTimeMultiplier_SetBit(void* Obj)
{
	((FNetworkPhysicsSettingsPredictiveInterpolation*)Obj)->bOverridePosCorrectionTimeMultiplier = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::NewProp_bOverridePosCorrectionTimeMultiplier = { "bOverridePosCorrectionTimeMultiplier", nullptr, (EPropertyFlags)0x0010000000014001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FNetworkPhysicsSettingsPredictiveInterpolation), &Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::NewProp_bOverridePosCorrectionTimeMultiplier_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverridePosCorrectionTimeMultiplier_MetaData), NewProp_bOverridePosCorrectionTimeMultiplier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::NewProp_PosCorrectionTimeMultiplier = { "PosCorrectionTimeMultiplier", nullptr, (EPropertyFlags)0x0010000000014001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNetworkPhysicsSettingsPredictiveInterpolation, PosCorrectionTimeMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PosCorrectionTimeMultiplier_MetaData), NewProp_PosCorrectionTimeMultiplier_MetaData) };
void Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::NewProp_bOverrideRotCorrectionTimeBase_SetBit(void* Obj)
{
	((FNetworkPhysicsSettingsPredictiveInterpolation*)Obj)->bOverrideRotCorrectionTimeBase = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::NewProp_bOverrideRotCorrectionTimeBase = { "bOverrideRotCorrectionTimeBase", nullptr, (EPropertyFlags)0x0010000000014001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FNetworkPhysicsSettingsPredictiveInterpolation), &Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::NewProp_bOverrideRotCorrectionTimeBase_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideRotCorrectionTimeBase_MetaData), NewProp_bOverrideRotCorrectionTimeBase_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::NewProp_RotCorrectionTimeBase = { "RotCorrectionTimeBase", nullptr, (EPropertyFlags)0x0010000000014001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNetworkPhysicsSettingsPredictiveInterpolation, RotCorrectionTimeBase), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotCorrectionTimeBase_MetaData), NewProp_RotCorrectionTimeBase_MetaData) };
void Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::NewProp_bOverrideRotCorrectionTimeMin_SetBit(void* Obj)
{
	((FNetworkPhysicsSettingsPredictiveInterpolation*)Obj)->bOverrideRotCorrectionTimeMin = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::NewProp_bOverrideRotCorrectionTimeMin = { "bOverrideRotCorrectionTimeMin", nullptr, (EPropertyFlags)0x0010000000014001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FNetworkPhysicsSettingsPredictiveInterpolation), &Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::NewProp_bOverrideRotCorrectionTimeMin_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideRotCorrectionTimeMin_MetaData), NewProp_bOverrideRotCorrectionTimeMin_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::NewProp_RotCorrectionTimeMin = { "RotCorrectionTimeMin", nullptr, (EPropertyFlags)0x0010000000014001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNetworkPhysicsSettingsPredictiveInterpolation, RotCorrectionTimeMin), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotCorrectionTimeMin_MetaData), NewProp_RotCorrectionTimeMin_MetaData) };
void Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::NewProp_bOverrideRotCorrectionTimeMultiplier_SetBit(void* Obj)
{
	((FNetworkPhysicsSettingsPredictiveInterpolation*)Obj)->bOverrideRotCorrectionTimeMultiplier = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::NewProp_bOverrideRotCorrectionTimeMultiplier = { "bOverrideRotCorrectionTimeMultiplier", nullptr, (EPropertyFlags)0x0010000000014001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FNetworkPhysicsSettingsPredictiveInterpolation), &Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::NewProp_bOverrideRotCorrectionTimeMultiplier_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideRotCorrectionTimeMultiplier_MetaData), NewProp_bOverrideRotCorrectionTimeMultiplier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::NewProp_RotCorrectionTimeMultiplier = { "RotCorrectionTimeMultiplier", nullptr, (EPropertyFlags)0x0010000000014001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNetworkPhysicsSettingsPredictiveInterpolation, RotCorrectionTimeMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotCorrectionTimeMultiplier_MetaData), NewProp_RotCorrectionTimeMultiplier_MetaData) };
void Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::NewProp_bOverridePosInterpolationTimeMultiplier_SetBit(void* Obj)
{
	((FNetworkPhysicsSettingsPredictiveInterpolation*)Obj)->bOverridePosInterpolationTimeMultiplier = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::NewProp_bOverridePosInterpolationTimeMultiplier = { "bOverridePosInterpolationTimeMultiplier", nullptr, (EPropertyFlags)0x0010000000014001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FNetworkPhysicsSettingsPredictiveInterpolation), &Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::NewProp_bOverridePosInterpolationTimeMultiplier_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverridePosInterpolationTimeMultiplier_MetaData), NewProp_bOverridePosInterpolationTimeMultiplier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::NewProp_PosInterpolationTimeMultiplier = { "PosInterpolationTimeMultiplier", nullptr, (EPropertyFlags)0x0010000000014001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNetworkPhysicsSettingsPredictiveInterpolation, PosInterpolationTimeMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PosInterpolationTimeMultiplier_MetaData), NewProp_PosInterpolationTimeMultiplier_MetaData) };
void Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::NewProp_bOverrideRotInterpolationTimeMultiplier_SetBit(void* Obj)
{
	((FNetworkPhysicsSettingsPredictiveInterpolation*)Obj)->bOverrideRotInterpolationTimeMultiplier = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::NewProp_bOverrideRotInterpolationTimeMultiplier = { "bOverrideRotInterpolationTimeMultiplier", nullptr, (EPropertyFlags)0x0010000000014001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FNetworkPhysicsSettingsPredictiveInterpolation), &Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::NewProp_bOverrideRotInterpolationTimeMultiplier_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideRotInterpolationTimeMultiplier_MetaData), NewProp_bOverrideRotInterpolationTimeMultiplier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::NewProp_RotInterpolationTimeMultiplier = { "RotInterpolationTimeMultiplier", nullptr, (EPropertyFlags)0x0010000000014001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNetworkPhysicsSettingsPredictiveInterpolation, RotInterpolationTimeMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotInterpolationTimeMultiplier_MetaData), NewProp_RotInterpolationTimeMultiplier_MetaData) };
void Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::NewProp_bOverrideSoftSnapPosStrength_SetBit(void* Obj)
{
	((FNetworkPhysicsSettingsPredictiveInterpolation*)Obj)->bOverrideSoftSnapPosStrength = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::NewProp_bOverrideSoftSnapPosStrength = { "bOverrideSoftSnapPosStrength", nullptr, (EPropertyFlags)0x0010000000014001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FNetworkPhysicsSettingsPredictiveInterpolation), &Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::NewProp_bOverrideSoftSnapPosStrength_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideSoftSnapPosStrength_MetaData), NewProp_bOverrideSoftSnapPosStrength_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::NewProp_SoftSnapPosStrength = { "SoftSnapPosStrength", nullptr, (EPropertyFlags)0x0010000000014001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNetworkPhysicsSettingsPredictiveInterpolation, SoftSnapPosStrength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SoftSnapPosStrength_MetaData), NewProp_SoftSnapPosStrength_MetaData) };
void Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::NewProp_bOverrideSoftSnapRotStrength_SetBit(void* Obj)
{
	((FNetworkPhysicsSettingsPredictiveInterpolation*)Obj)->bOverrideSoftSnapRotStrength = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::NewProp_bOverrideSoftSnapRotStrength = { "bOverrideSoftSnapRotStrength", nullptr, (EPropertyFlags)0x0010000000014001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FNetworkPhysicsSettingsPredictiveInterpolation), &Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::NewProp_bOverrideSoftSnapRotStrength_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideSoftSnapRotStrength_MetaData), NewProp_bOverrideSoftSnapRotStrength_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::NewProp_SoftSnapRotStrength = { "SoftSnapRotStrength", nullptr, (EPropertyFlags)0x0010000000014001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNetworkPhysicsSettingsPredictiveInterpolation, SoftSnapRotStrength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SoftSnapRotStrength_MetaData), NewProp_SoftSnapRotStrength_MetaData) };
void Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::NewProp_bOverrideSoftSnapToSource_SetBit(void* Obj)
{
	((FNetworkPhysicsSettingsPredictiveInterpolation*)Obj)->bOverrideSoftSnapToSource = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::NewProp_bOverrideSoftSnapToSource = { "bOverrideSoftSnapToSource", nullptr, (EPropertyFlags)0x0010000000014001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FNetworkPhysicsSettingsPredictiveInterpolation), &Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::NewProp_bOverrideSoftSnapToSource_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideSoftSnapToSource_MetaData), NewProp_bOverrideSoftSnapToSource_MetaData) };
void Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::NewProp_bSoftSnapToSource_SetBit(void* Obj)
{
	((FNetworkPhysicsSettingsPredictiveInterpolation*)Obj)->bSoftSnapToSource = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::NewProp_bSoftSnapToSource = { "bSoftSnapToSource", nullptr, (EPropertyFlags)0x0010000000014001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FNetworkPhysicsSettingsPredictiveInterpolation), &Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::NewProp_bSoftSnapToSource_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSoftSnapToSource_MetaData), NewProp_bSoftSnapToSource_MetaData) };
void Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::NewProp_bOverrideDisableSoftSnap_SetBit(void* Obj)
{
	((FNetworkPhysicsSettingsPredictiveInterpolation*)Obj)->bOverrideDisableSoftSnap = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::NewProp_bOverrideDisableSoftSnap = { "bOverrideDisableSoftSnap", nullptr, (EPropertyFlags)0x0010000000014001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FNetworkPhysicsSettingsPredictiveInterpolation), &Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::NewProp_bOverrideDisableSoftSnap_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideDisableSoftSnap_MetaData), NewProp_bOverrideDisableSoftSnap_MetaData) };
void Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::NewProp_bDisableSoftSnap_SetBit(void* Obj)
{
	((FNetworkPhysicsSettingsPredictiveInterpolation*)Obj)->bDisableSoftSnap = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::NewProp_bDisableSoftSnap = { "bDisableSoftSnap", nullptr, (EPropertyFlags)0x0010000000014001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FNetworkPhysicsSettingsPredictiveInterpolation), &Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::NewProp_bDisableSoftSnap_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDisableSoftSnap_MetaData), NewProp_bDisableSoftSnap_MetaData) };
void Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::NewProp_bOverrideSkipVelocityRepOnPosEarlyOut_SetBit(void* Obj)
{
	((FNetworkPhysicsSettingsPredictiveInterpolation*)Obj)->bOverrideSkipVelocityRepOnPosEarlyOut = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::NewProp_bOverrideSkipVelocityRepOnPosEarlyOut = { "bOverrideSkipVelocityRepOnPosEarlyOut", nullptr, (EPropertyFlags)0x0010000000014001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FNetworkPhysicsSettingsPredictiveInterpolation), &Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::NewProp_bOverrideSkipVelocityRepOnPosEarlyOut_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideSkipVelocityRepOnPosEarlyOut_MetaData), NewProp_bOverrideSkipVelocityRepOnPosEarlyOut_MetaData) };
void Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::NewProp_bSkipVelocityRepOnPosEarlyOut_SetBit(void* Obj)
{
	((FNetworkPhysicsSettingsPredictiveInterpolation*)Obj)->bSkipVelocityRepOnPosEarlyOut = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::NewProp_bSkipVelocityRepOnPosEarlyOut = { "bSkipVelocityRepOnPosEarlyOut", nullptr, (EPropertyFlags)0x0010000000014001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FNetworkPhysicsSettingsPredictiveInterpolation), &Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::NewProp_bSkipVelocityRepOnPosEarlyOut_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSkipVelocityRepOnPosEarlyOut_MetaData), NewProp_bSkipVelocityRepOnPosEarlyOut_MetaData) };
void Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::NewProp_bOverridePostResimWaitForUpdate_SetBit(void* Obj)
{
	((FNetworkPhysicsSettingsPredictiveInterpolation*)Obj)->bOverridePostResimWaitForUpdate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::NewProp_bOverridePostResimWaitForUpdate = { "bOverridePostResimWaitForUpdate", nullptr, (EPropertyFlags)0x0010000000014001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FNetworkPhysicsSettingsPredictiveInterpolation), &Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::NewProp_bOverridePostResimWaitForUpdate_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverridePostResimWaitForUpdate_MetaData), NewProp_bOverridePostResimWaitForUpdate_MetaData) };
void Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::NewProp_bPostResimWaitForUpdate_SetBit(void* Obj)
{
	((FNetworkPhysicsSettingsPredictiveInterpolation*)Obj)->bPostResimWaitForUpdate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::NewProp_bPostResimWaitForUpdate = { "bPostResimWaitForUpdate", nullptr, (EPropertyFlags)0x0010000000014001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FNetworkPhysicsSettingsPredictiveInterpolation), &Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::NewProp_bPostResimWaitForUpdate_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPostResimWaitForUpdate_MetaData), NewProp_bPostResimWaitForUpdate_MetaData) };
void Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::NewProp_bOverrideCorrectConnectedBodies_SetBit(void* Obj)
{
	((FNetworkPhysicsSettingsPredictiveInterpolation*)Obj)->bOverrideCorrectConnectedBodies = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::NewProp_bOverrideCorrectConnectedBodies = { "bOverrideCorrectConnectedBodies", nullptr, (EPropertyFlags)0x0010000000014001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FNetworkPhysicsSettingsPredictiveInterpolation), &Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::NewProp_bOverrideCorrectConnectedBodies_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideCorrectConnectedBodies_MetaData), NewProp_bOverrideCorrectConnectedBodies_MetaData) };
void Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::NewProp_bCorrectConnectedBodies_SetBit(void* Obj)
{
	((FNetworkPhysicsSettingsPredictiveInterpolation*)Obj)->bCorrectConnectedBodies = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::NewProp_bCorrectConnectedBodies = { "bCorrectConnectedBodies", nullptr, (EPropertyFlags)0x0010000000014001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FNetworkPhysicsSettingsPredictiveInterpolation), &Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::NewProp_bCorrectConnectedBodies_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCorrectConnectedBodies_MetaData), NewProp_bCorrectConnectedBodies_MetaData) };
void Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::NewProp_bOverrideCorrectConnectedBodiesFriction_SetBit(void* Obj)
{
	((FNetworkPhysicsSettingsPredictiveInterpolation*)Obj)->bOverrideCorrectConnectedBodiesFriction = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::NewProp_bOverrideCorrectConnectedBodiesFriction = { "bOverrideCorrectConnectedBodiesFriction", nullptr, (EPropertyFlags)0x0010000000014001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FNetworkPhysicsSettingsPredictiveInterpolation), &Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::NewProp_bOverrideCorrectConnectedBodiesFriction_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideCorrectConnectedBodiesFriction_MetaData), NewProp_bOverrideCorrectConnectedBodiesFriction_MetaData) };
void Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::NewProp_bCorrectConnectedBodiesFriction_SetBit(void* Obj)
{
	((FNetworkPhysicsSettingsPredictiveInterpolation*)Obj)->bCorrectConnectedBodiesFriction = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::NewProp_bCorrectConnectedBodiesFriction = { "bCorrectConnectedBodiesFriction", nullptr, (EPropertyFlags)0x0010000000014001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FNetworkPhysicsSettingsPredictiveInterpolation), &Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::NewProp_bCorrectConnectedBodiesFriction_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCorrectConnectedBodiesFriction_MetaData), NewProp_bCorrectConnectedBodiesFriction_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::NewProp_bOverridePosCorrectionTimeBase,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::NewProp_PosCorrectionTimeBase,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::NewProp_bOverridePosCorrectionTimeMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::NewProp_PosCorrectionTimeMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::NewProp_bOverridePosCorrectionTimeMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::NewProp_PosCorrectionTimeMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::NewProp_bOverrideRotCorrectionTimeBase,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::NewProp_RotCorrectionTimeBase,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::NewProp_bOverrideRotCorrectionTimeMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::NewProp_RotCorrectionTimeMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::NewProp_bOverrideRotCorrectionTimeMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::NewProp_RotCorrectionTimeMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::NewProp_bOverridePosInterpolationTimeMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::NewProp_PosInterpolationTimeMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::NewProp_bOverrideRotInterpolationTimeMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::NewProp_RotInterpolationTimeMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::NewProp_bOverrideSoftSnapPosStrength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::NewProp_SoftSnapPosStrength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::NewProp_bOverrideSoftSnapRotStrength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::NewProp_SoftSnapRotStrength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::NewProp_bOverrideSoftSnapToSource,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::NewProp_bSoftSnapToSource,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::NewProp_bOverrideDisableSoftSnap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::NewProp_bDisableSoftSnap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::NewProp_bOverrideSkipVelocityRepOnPosEarlyOut,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::NewProp_bSkipVelocityRepOnPosEarlyOut,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::NewProp_bOverridePostResimWaitForUpdate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::NewProp_bPostResimWaitForUpdate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::NewProp_bOverrideCorrectConnectedBodies,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::NewProp_bCorrectConnectedBodies,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::NewProp_bOverrideCorrectConnectedBodiesFriction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::NewProp_bCorrectConnectedBodiesFriction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"NetworkPhysicsSettingsPredictiveInterpolation",
	Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::PropPointers),
	sizeof(FNetworkPhysicsSettingsPredictiveInterpolation),
	alignof(FNetworkPhysicsSettingsPredictiveInterpolation),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation()
{
	if (!Z_Registration_Info_UScriptStruct_NetworkPhysicsSettingsPredictiveInterpolation.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NetworkPhysicsSettingsPredictiveInterpolation.InnerSingleton, Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NetworkPhysicsSettingsPredictiveInterpolation.InnerSingleton;
}
// End ScriptStruct FNetworkPhysicsSettingsPredictiveInterpolation

// Begin ScriptStruct FNetworkPhysicsSettingsResimulation
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NetworkPhysicsSettingsResimulation;
class UScriptStruct* FNetworkPhysicsSettingsResimulation::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NetworkPhysicsSettingsResimulation.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NetworkPhysicsSettingsResimulation.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulation, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("NetworkPhysicsSettingsResimulation"));
	}
	return Z_Registration_Info_UScriptStruct_NetworkPhysicsSettingsResimulation.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FNetworkPhysicsSettingsResimulation>()
{
	return FNetworkPhysicsSettingsResimulation::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Physics/NetworkPhysicsSettingsComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideResimulationErrorThreshold_MetaData[] = {
		{ "Comment", "/** Deprecated UE 5.5 - bOverrideResimulationErrorThreshold has been renamed, please use bOverrideResimulationErrorPositionThreshold*/" },
		{ "ModuleRelativePath", "Public/Physics/NetworkPhysicsSettingsComponent.h" },
		{ "ToolTip", "Deprecated UE 5.5 - bOverrideResimulationErrorThreshold has been renamed, please use bOverrideResimulationErrorPositionThreshold" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResimulationErrorThreshold_MetaData[] = {
		{ "Comment", "/** Deprecated UE 5.5 - ResimulationErrorThreshold has been renamed, please use ResimulationErrorPositionThreshold */" },
		{ "ModuleRelativePath", "Public/Physics/NetworkPhysicsSettingsComponent.h" },
		{ "ToolTip", "Deprecated UE 5.5 - ResimulationErrorThreshold has been renamed, please use ResimulationErrorPositionThreshold" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideResimulationErrorPositionThreshold_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Physics/NetworkPhysicsSettingsComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResimulationErrorPositionThreshold_MetaData[] = {
		{ "Category", "Overrides" },
		{ "Comment", "// Overrides Project Settings -> Physics -> Replication -> Physics Prediction -> Resimulation Error Position Threshold -- Distance that the object is allowed to desync from the server before triggering a resimulation, within this threshold runtime correction can be performed if RuntimeCorrectionEnabled is true.\n" },
		{ "EditCondition", "bOverrideResimulationErrorPositionThreshold" },
		{ "ModuleRelativePath", "Public/Physics/NetworkPhysicsSettingsComponent.h" },
		{ "ToolTip", "Overrides Project Settings -> Physics -> Replication -> Physics Prediction -> Resimulation Error Position Threshold -- Distance that the object is allowed to desync from the server before triggering a resimulation, within this threshold runtime correction can be performed if RuntimeCorrectionEnabled is true." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideResimulationErrorRotationThreshold_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Physics/NetworkPhysicsSettingsComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResimulationErrorRotationThreshold_MetaData[] = {
		{ "Category", "Overrides" },
		{ "Comment", "// Overrides Project Settings -> Physics -> Replication -> Physics Prediction -> Resimulation Error Rotation Threshold -- Rotation difference in degrees that the object is allowed to desync from the server before triggering a resimulation, within this threshold runtime correction can be performed if RuntimeCorrectionEnabled is true.\n" },
		{ "EditCondition", "bOverrideResimulationErrorRotationThreshold" },
		{ "ModuleRelativePath", "Public/Physics/NetworkPhysicsSettingsComponent.h" },
		{ "ToolTip", "Overrides Project Settings -> Physics -> Replication -> Physics Prediction -> Resimulation Error Rotation Threshold -- Rotation difference in degrees that the object is allowed to desync from the server before triggering a resimulation, within this threshold runtime correction can be performed if RuntimeCorrectionEnabled is true." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideResimulationErrorLinearVelocityThreshold_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Physics/NetworkPhysicsSettingsComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResimulationErrorLinearVelocityThreshold_MetaData[] = {
		{ "Category", "Overrides" },
		{ "Comment", "// Overrides Project Settings -> Physics -> Replication -> Physics Prediction -> Resimulation Error Linear Velocity Threshold -- Velocity difference in centimeters / second that the object is allowed to desync from the server before triggering a resimulation, within this threshold runtime correction can be performed if RuntimeCorrectionEnabled is true.\n" },
		{ "EditCondition", "bOverrideResimulationErrorLinearVelocityThreshold" },
		{ "ModuleRelativePath", "Public/Physics/NetworkPhysicsSettingsComponent.h" },
		{ "ToolTip", "Overrides Project Settings -> Physics -> Replication -> Physics Prediction -> Resimulation Error Linear Velocity Threshold -- Velocity difference in centimeters / second that the object is allowed to desync from the server before triggering a resimulation, within this threshold runtime correction can be performed if RuntimeCorrectionEnabled is true." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideResimulationErrorAngularVelocityThreshold_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Physics/NetworkPhysicsSettingsComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResimulationErrorAngularVelocityThreshold_MetaData[] = {
		{ "Category", "Overrides" },
		{ "Comment", "// Overrides Project Settings -> Physics -> Replication -> Physics Prediction -> Resimulation Error Angular Velocity Threshold -- Degrees / second that the object is allowed to desync from the server before triggering a resimulation, within this threshold runtime correction can be performed if RuntimeCorrectionEnabled is true.\n" },
		{ "EditCondition", "bOverrideResimulationErrorAngularVelocityThreshold" },
		{ "ModuleRelativePath", "Public/Physics/NetworkPhysicsSettingsComponent.h" },
		{ "ToolTip", "Overrides Project Settings -> Physics -> Replication -> Physics Prediction -> Resimulation Error Angular Velocity Threshold -- Degrees / second that the object is allowed to desync from the server before triggering a resimulation, within this threshold runtime correction can be performed if RuntimeCorrectionEnabled is true." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideRuntimeCorrectionEnabled_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Physics/NetworkPhysicsSettingsComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRuntimeCorrectionEnabled_MetaData[] = {
		{ "Category", "Overrides" },
		{ "Comment", "// Overrides CVar: np2.Resim.RuntimeCorrectionEnabled -- Apply positional and rotational runtime corrections while within resim trigger distance.\n" },
		{ "EditCondition", "bOverrideRuntimeCorrectionEnabled" },
		{ "ModuleRelativePath", "Public/Physics/NetworkPhysicsSettingsComponent.h" },
		{ "ToolTip", "Overrides CVar: np2.Resim.RuntimeCorrectionEnabled -- Apply positional and rotational runtime corrections while within resim trigger distance." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideRuntimeVelocityCorrection_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Physics/NetworkPhysicsSettingsComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRuntimeVelocityCorrection_MetaData[] = {
		{ "Category", "Overrides" },
		{ "Comment", "// Overrides CVar: np2.Resim.RuntimeVelocityCorrection -- Apply linear and angular velocity corrections in runtime while within resim trigger distance. Used if RuntimeCorrectionEnabled is true.\n" },
		{ "EditCondition", "bOverrideRuntimeVelocityCorrection" },
		{ "ModuleRelativePath", "Public/Physics/NetworkPhysicsSettingsComponent.h" },
		{ "ToolTip", "Overrides CVar: np2.Resim.RuntimeVelocityCorrection -- Apply linear and angular velocity corrections in runtime while within resim trigger distance. Used if RuntimeCorrectionEnabled is true." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideRuntimeCorrectConnectedBodies_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Physics/NetworkPhysicsSettingsComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRuntimeCorrectConnectedBodies_MetaData[] = {
		{ "Category", "Overrides" },
		{ "Comment", "// Overrides CVar: np2.Resim.RuntimeCorrectConnectedBodies -- If true runtime position and rotation correction will also shift transform of any connected physics objects. Used if RuntimeCorrectionEnabled is true.\n" },
		{ "EditCondition", "bOverrideRuntimeCorrectConnectedBodies" },
		{ "ModuleRelativePath", "Public/Physics/NetworkPhysicsSettingsComponent.h" },
		{ "ToolTip", "Overrides CVar: np2.Resim.RuntimeCorrectConnectedBodies -- If true runtime position and rotation correction will also shift transform of any connected physics objects. Used if RuntimeCorrectionEnabled is true." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverridePosStabilityMultiplier_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Physics/NetworkPhysicsSettingsComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PosStabilityMultiplier_MetaData[] = {
		{ "Category", "Overrides" },
		{ "Comment", "// Overrides CVar: np2.Resim.PosStabilityMultiplier -- Recommended range between 0.0-1.0. Lower value means more stable positional corrections.\n" },
		{ "EditCondition", "bOverridePosStabilityMultiplier" },
		{ "ModuleRelativePath", "Public/Physics/NetworkPhysicsSettingsComponent.h" },
		{ "ToolTip", "Overrides CVar: np2.Resim.PosStabilityMultiplier -- Recommended range between 0.0-1.0. Lower value means more stable positional corrections." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideRotStabilityMultiplier_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Physics/NetworkPhysicsSettingsComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotStabilityMultiplier_MetaData[] = {
		{ "Category", "Overrides" },
		{ "Comment", "// Overrides CVar: np2.Resim.RotStabilityMultiplier -- Recommended range between 0.0-1.0. Lower value means more stable rotational corrections.\n" },
		{ "EditCondition", "bOverrideRotStabilityMultiplier" },
		{ "ModuleRelativePath", "Public/Physics/NetworkPhysicsSettingsComponent.h" },
		{ "ToolTip", "Overrides CVar: np2.Resim.RotStabilityMultiplier -- Recommended range between 0.0-1.0. Lower value means more stable rotational corrections." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideVelStabilityMultiplier_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Physics/NetworkPhysicsSettingsComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VelStabilityMultiplier_MetaData[] = {
		{ "Category", "Overrides" },
		{ "Comment", "// Overrides CVar: np2.Resim.VelStabilityMultiplier -- Recommended range between 0.0-1.0. Lower value means more stable linear velocity corrections.\n" },
		{ "EditCondition", "bOverrideVelStabilityMultiplier" },
		{ "ModuleRelativePath", "Public/Physics/NetworkPhysicsSettingsComponent.h" },
		{ "ToolTip", "Overrides CVar: np2.Resim.VelStabilityMultiplier -- Recommended range between 0.0-1.0. Lower value means more stable linear velocity corrections." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideAngVelStabilityMultiplier_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Physics/NetworkPhysicsSettingsComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AngVelStabilityMultiplier_MetaData[] = {
		{ "Category", "Overrides" },
		{ "Comment", "// Overrides CVar: np2.Resim.AngVelStabilityMultiplier -- Recommended range between 0.0-1.0. Lower value means more stable angular velocity corrections.\n" },
		{ "EditCondition", "bOverrideAngVelStabilityMultiplier" },
		{ "ModuleRelativePath", "Public/Physics/NetworkPhysicsSettingsComponent.h" },
		{ "ToolTip", "Overrides CVar: np2.Resim.AngVelStabilityMultiplier -- Recommended range between 0.0-1.0. Lower value means more stable angular velocity corrections." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_bOverrideResimulationErrorThreshold;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_ResimulationErrorThreshold;
	static void NewProp_bOverrideResimulationErrorPositionThreshold_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideResimulationErrorPositionThreshold;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ResimulationErrorPositionThreshold;
	static void NewProp_bOverrideResimulationErrorRotationThreshold_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideResimulationErrorRotationThreshold;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ResimulationErrorRotationThreshold;
	static void NewProp_bOverrideResimulationErrorLinearVelocityThreshold_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideResimulationErrorLinearVelocityThreshold;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ResimulationErrorLinearVelocityThreshold;
	static void NewProp_bOverrideResimulationErrorAngularVelocityThreshold_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideResimulationErrorAngularVelocityThreshold;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ResimulationErrorAngularVelocityThreshold;
	static void NewProp_bOverrideRuntimeCorrectionEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideRuntimeCorrectionEnabled;
	static void NewProp_bRuntimeCorrectionEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRuntimeCorrectionEnabled;
	static void NewProp_bOverrideRuntimeVelocityCorrection_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideRuntimeVelocityCorrection;
	static void NewProp_bRuntimeVelocityCorrection_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRuntimeVelocityCorrection;
	static void NewProp_bOverrideRuntimeCorrectConnectedBodies_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideRuntimeCorrectConnectedBodies;
	static void NewProp_bRuntimeCorrectConnectedBodies_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRuntimeCorrectConnectedBodies;
	static void NewProp_bOverridePosStabilityMultiplier_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverridePosStabilityMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PosStabilityMultiplier;
	static void NewProp_bOverrideRotStabilityMultiplier_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideRotStabilityMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RotStabilityMultiplier;
	static void NewProp_bOverrideVelStabilityMultiplier_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideVelStabilityMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_VelStabilityMultiplier;
	static void NewProp_bOverrideAngVelStabilityMultiplier_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideAngVelStabilityMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AngVelStabilityMultiplier;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNetworkPhysicsSettingsResimulation>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulation_Statics::NewProp_bOverrideResimulationErrorThreshold = { "bOverrideResimulationErrorThreshold", nullptr, (EPropertyFlags)0x0010000020004000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNetworkPhysicsSettingsResimulation, bOverrideResimulationErrorThreshold_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideResimulationErrorThreshold_MetaData), NewProp_bOverrideResimulationErrorThreshold_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulation_Statics::NewProp_ResimulationErrorThreshold = { "ResimulationErrorThreshold", nullptr, (EPropertyFlags)0x0010000020004000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNetworkPhysicsSettingsResimulation, ResimulationErrorThreshold_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResimulationErrorThreshold_MetaData), NewProp_ResimulationErrorThreshold_MetaData) };
void Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulation_Statics::NewProp_bOverrideResimulationErrorPositionThreshold_SetBit(void* Obj)
{
	((FNetworkPhysicsSettingsResimulation*)Obj)->bOverrideResimulationErrorPositionThreshold = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulation_Statics::NewProp_bOverrideResimulationErrorPositionThreshold = { "bOverrideResimulationErrorPositionThreshold", nullptr, (EPropertyFlags)0x0010000000014001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FNetworkPhysicsSettingsResimulation), &Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulation_Statics::NewProp_bOverrideResimulationErrorPositionThreshold_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideResimulationErrorPositionThreshold_MetaData), NewProp_bOverrideResimulationErrorPositionThreshold_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulation_Statics::NewProp_ResimulationErrorPositionThreshold = { "ResimulationErrorPositionThreshold", nullptr, (EPropertyFlags)0x0010000000014001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNetworkPhysicsSettingsResimulation, ResimulationErrorPositionThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResimulationErrorPositionThreshold_MetaData), NewProp_ResimulationErrorPositionThreshold_MetaData) };
void Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulation_Statics::NewProp_bOverrideResimulationErrorRotationThreshold_SetBit(void* Obj)
{
	((FNetworkPhysicsSettingsResimulation*)Obj)->bOverrideResimulationErrorRotationThreshold = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulation_Statics::NewProp_bOverrideResimulationErrorRotationThreshold = { "bOverrideResimulationErrorRotationThreshold", nullptr, (EPropertyFlags)0x0010000000014001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FNetworkPhysicsSettingsResimulation), &Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulation_Statics::NewProp_bOverrideResimulationErrorRotationThreshold_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideResimulationErrorRotationThreshold_MetaData), NewProp_bOverrideResimulationErrorRotationThreshold_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulation_Statics::NewProp_ResimulationErrorRotationThreshold = { "ResimulationErrorRotationThreshold", nullptr, (EPropertyFlags)0x0010000000014001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNetworkPhysicsSettingsResimulation, ResimulationErrorRotationThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResimulationErrorRotationThreshold_MetaData), NewProp_ResimulationErrorRotationThreshold_MetaData) };
void Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulation_Statics::NewProp_bOverrideResimulationErrorLinearVelocityThreshold_SetBit(void* Obj)
{
	((FNetworkPhysicsSettingsResimulation*)Obj)->bOverrideResimulationErrorLinearVelocityThreshold = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulation_Statics::NewProp_bOverrideResimulationErrorLinearVelocityThreshold = { "bOverrideResimulationErrorLinearVelocityThreshold", nullptr, (EPropertyFlags)0x0010000000014001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FNetworkPhysicsSettingsResimulation), &Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulation_Statics::NewProp_bOverrideResimulationErrorLinearVelocityThreshold_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideResimulationErrorLinearVelocityThreshold_MetaData), NewProp_bOverrideResimulationErrorLinearVelocityThreshold_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulation_Statics::NewProp_ResimulationErrorLinearVelocityThreshold = { "ResimulationErrorLinearVelocityThreshold", nullptr, (EPropertyFlags)0x0010000000014001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNetworkPhysicsSettingsResimulation, ResimulationErrorLinearVelocityThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResimulationErrorLinearVelocityThreshold_MetaData), NewProp_ResimulationErrorLinearVelocityThreshold_MetaData) };
void Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulation_Statics::NewProp_bOverrideResimulationErrorAngularVelocityThreshold_SetBit(void* Obj)
{
	((FNetworkPhysicsSettingsResimulation*)Obj)->bOverrideResimulationErrorAngularVelocityThreshold = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulation_Statics::NewProp_bOverrideResimulationErrorAngularVelocityThreshold = { "bOverrideResimulationErrorAngularVelocityThreshold", nullptr, (EPropertyFlags)0x0010000000014001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FNetworkPhysicsSettingsResimulation), &Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulation_Statics::NewProp_bOverrideResimulationErrorAngularVelocityThreshold_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideResimulationErrorAngularVelocityThreshold_MetaData), NewProp_bOverrideResimulationErrorAngularVelocityThreshold_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulation_Statics::NewProp_ResimulationErrorAngularVelocityThreshold = { "ResimulationErrorAngularVelocityThreshold", nullptr, (EPropertyFlags)0x0010000000014001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNetworkPhysicsSettingsResimulation, ResimulationErrorAngularVelocityThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResimulationErrorAngularVelocityThreshold_MetaData), NewProp_ResimulationErrorAngularVelocityThreshold_MetaData) };
void Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulation_Statics::NewProp_bOverrideRuntimeCorrectionEnabled_SetBit(void* Obj)
{
	((FNetworkPhysicsSettingsResimulation*)Obj)->bOverrideRuntimeCorrectionEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulation_Statics::NewProp_bOverrideRuntimeCorrectionEnabled = { "bOverrideRuntimeCorrectionEnabled", nullptr, (EPropertyFlags)0x0010000000014001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FNetworkPhysicsSettingsResimulation), &Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulation_Statics::NewProp_bOverrideRuntimeCorrectionEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideRuntimeCorrectionEnabled_MetaData), NewProp_bOverrideRuntimeCorrectionEnabled_MetaData) };
void Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulation_Statics::NewProp_bRuntimeCorrectionEnabled_SetBit(void* Obj)
{
	((FNetworkPhysicsSettingsResimulation*)Obj)->bRuntimeCorrectionEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulation_Statics::NewProp_bRuntimeCorrectionEnabled = { "bRuntimeCorrectionEnabled", nullptr, (EPropertyFlags)0x0010000000014001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FNetworkPhysicsSettingsResimulation), &Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulation_Statics::NewProp_bRuntimeCorrectionEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRuntimeCorrectionEnabled_MetaData), NewProp_bRuntimeCorrectionEnabled_MetaData) };
void Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulation_Statics::NewProp_bOverrideRuntimeVelocityCorrection_SetBit(void* Obj)
{
	((FNetworkPhysicsSettingsResimulation*)Obj)->bOverrideRuntimeVelocityCorrection = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulation_Statics::NewProp_bOverrideRuntimeVelocityCorrection = { "bOverrideRuntimeVelocityCorrection", nullptr, (EPropertyFlags)0x0010000000014001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FNetworkPhysicsSettingsResimulation), &Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulation_Statics::NewProp_bOverrideRuntimeVelocityCorrection_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideRuntimeVelocityCorrection_MetaData), NewProp_bOverrideRuntimeVelocityCorrection_MetaData) };
void Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulation_Statics::NewProp_bRuntimeVelocityCorrection_SetBit(void* Obj)
{
	((FNetworkPhysicsSettingsResimulation*)Obj)->bRuntimeVelocityCorrection = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulation_Statics::NewProp_bRuntimeVelocityCorrection = { "bRuntimeVelocityCorrection", nullptr, (EPropertyFlags)0x0010000000014001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FNetworkPhysicsSettingsResimulation), &Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulation_Statics::NewProp_bRuntimeVelocityCorrection_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRuntimeVelocityCorrection_MetaData), NewProp_bRuntimeVelocityCorrection_MetaData) };
void Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulation_Statics::NewProp_bOverrideRuntimeCorrectConnectedBodies_SetBit(void* Obj)
{
	((FNetworkPhysicsSettingsResimulation*)Obj)->bOverrideRuntimeCorrectConnectedBodies = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulation_Statics::NewProp_bOverrideRuntimeCorrectConnectedBodies = { "bOverrideRuntimeCorrectConnectedBodies", nullptr, (EPropertyFlags)0x0010000000014001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FNetworkPhysicsSettingsResimulation), &Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulation_Statics::NewProp_bOverrideRuntimeCorrectConnectedBodies_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideRuntimeCorrectConnectedBodies_MetaData), NewProp_bOverrideRuntimeCorrectConnectedBodies_MetaData) };
void Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulation_Statics::NewProp_bRuntimeCorrectConnectedBodies_SetBit(void* Obj)
{
	((FNetworkPhysicsSettingsResimulation*)Obj)->bRuntimeCorrectConnectedBodies = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulation_Statics::NewProp_bRuntimeCorrectConnectedBodies = { "bRuntimeCorrectConnectedBodies", nullptr, (EPropertyFlags)0x0010000000014001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FNetworkPhysicsSettingsResimulation), &Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulation_Statics::NewProp_bRuntimeCorrectConnectedBodies_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRuntimeCorrectConnectedBodies_MetaData), NewProp_bRuntimeCorrectConnectedBodies_MetaData) };
void Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulation_Statics::NewProp_bOverridePosStabilityMultiplier_SetBit(void* Obj)
{
	((FNetworkPhysicsSettingsResimulation*)Obj)->bOverridePosStabilityMultiplier = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulation_Statics::NewProp_bOverridePosStabilityMultiplier = { "bOverridePosStabilityMultiplier", nullptr, (EPropertyFlags)0x0010000000014001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FNetworkPhysicsSettingsResimulation), &Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulation_Statics::NewProp_bOverridePosStabilityMultiplier_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverridePosStabilityMultiplier_MetaData), NewProp_bOverridePosStabilityMultiplier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulation_Statics::NewProp_PosStabilityMultiplier = { "PosStabilityMultiplier", nullptr, (EPropertyFlags)0x0010000000014001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNetworkPhysicsSettingsResimulation, PosStabilityMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PosStabilityMultiplier_MetaData), NewProp_PosStabilityMultiplier_MetaData) };
void Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulation_Statics::NewProp_bOverrideRotStabilityMultiplier_SetBit(void* Obj)
{
	((FNetworkPhysicsSettingsResimulation*)Obj)->bOverrideRotStabilityMultiplier = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulation_Statics::NewProp_bOverrideRotStabilityMultiplier = { "bOverrideRotStabilityMultiplier", nullptr, (EPropertyFlags)0x0010000000014001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FNetworkPhysicsSettingsResimulation), &Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulation_Statics::NewProp_bOverrideRotStabilityMultiplier_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideRotStabilityMultiplier_MetaData), NewProp_bOverrideRotStabilityMultiplier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulation_Statics::NewProp_RotStabilityMultiplier = { "RotStabilityMultiplier", nullptr, (EPropertyFlags)0x0010000000014001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNetworkPhysicsSettingsResimulation, RotStabilityMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotStabilityMultiplier_MetaData), NewProp_RotStabilityMultiplier_MetaData) };
void Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulation_Statics::NewProp_bOverrideVelStabilityMultiplier_SetBit(void* Obj)
{
	((FNetworkPhysicsSettingsResimulation*)Obj)->bOverrideVelStabilityMultiplier = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulation_Statics::NewProp_bOverrideVelStabilityMultiplier = { "bOverrideVelStabilityMultiplier", nullptr, (EPropertyFlags)0x0010000000014001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FNetworkPhysicsSettingsResimulation), &Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulation_Statics::NewProp_bOverrideVelStabilityMultiplier_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideVelStabilityMultiplier_MetaData), NewProp_bOverrideVelStabilityMultiplier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulation_Statics::NewProp_VelStabilityMultiplier = { "VelStabilityMultiplier", nullptr, (EPropertyFlags)0x0010000000014001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNetworkPhysicsSettingsResimulation, VelStabilityMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VelStabilityMultiplier_MetaData), NewProp_VelStabilityMultiplier_MetaData) };
void Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulation_Statics::NewProp_bOverrideAngVelStabilityMultiplier_SetBit(void* Obj)
{
	((FNetworkPhysicsSettingsResimulation*)Obj)->bOverrideAngVelStabilityMultiplier = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulation_Statics::NewProp_bOverrideAngVelStabilityMultiplier = { "bOverrideAngVelStabilityMultiplier", nullptr, (EPropertyFlags)0x0010000000014001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FNetworkPhysicsSettingsResimulation), &Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulation_Statics::NewProp_bOverrideAngVelStabilityMultiplier_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideAngVelStabilityMultiplier_MetaData), NewProp_bOverrideAngVelStabilityMultiplier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulation_Statics::NewProp_AngVelStabilityMultiplier = { "AngVelStabilityMultiplier", nullptr, (EPropertyFlags)0x0010000000014001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNetworkPhysicsSettingsResimulation, AngVelStabilityMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AngVelStabilityMultiplier_MetaData), NewProp_AngVelStabilityMultiplier_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulation_Statics::NewProp_bOverrideResimulationErrorThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulation_Statics::NewProp_ResimulationErrorThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulation_Statics::NewProp_bOverrideResimulationErrorPositionThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulation_Statics::NewProp_ResimulationErrorPositionThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulation_Statics::NewProp_bOverrideResimulationErrorRotationThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulation_Statics::NewProp_ResimulationErrorRotationThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulation_Statics::NewProp_bOverrideResimulationErrorLinearVelocityThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulation_Statics::NewProp_ResimulationErrorLinearVelocityThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulation_Statics::NewProp_bOverrideResimulationErrorAngularVelocityThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulation_Statics::NewProp_ResimulationErrorAngularVelocityThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulation_Statics::NewProp_bOverrideRuntimeCorrectionEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulation_Statics::NewProp_bRuntimeCorrectionEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulation_Statics::NewProp_bOverrideRuntimeVelocityCorrection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulation_Statics::NewProp_bRuntimeVelocityCorrection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulation_Statics::NewProp_bOverrideRuntimeCorrectConnectedBodies,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulation_Statics::NewProp_bRuntimeCorrectConnectedBodies,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulation_Statics::NewProp_bOverridePosStabilityMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulation_Statics::NewProp_PosStabilityMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulation_Statics::NewProp_bOverrideRotStabilityMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulation_Statics::NewProp_RotStabilityMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulation_Statics::NewProp_bOverrideVelStabilityMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulation_Statics::NewProp_VelStabilityMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulation_Statics::NewProp_bOverrideAngVelStabilityMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulation_Statics::NewProp_AngVelStabilityMultiplier,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulation_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"NetworkPhysicsSettingsResimulation",
	Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulation_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulation_Statics::PropPointers),
	sizeof(FNetworkPhysicsSettingsResimulation),
	alignof(FNetworkPhysicsSettingsResimulation),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulation_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulation_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulation()
{
	if (!Z_Registration_Info_UScriptStruct_NetworkPhysicsSettingsResimulation.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NetworkPhysicsSettingsResimulation.InnerSingleton, Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulation_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NetworkPhysicsSettingsResimulation.InnerSingleton;
}
// End ScriptStruct FNetworkPhysicsSettingsResimulation

// Begin ScriptStruct FNetworkPhysicsSettingsNetworkPhysicsComponent
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NetworkPhysicsSettingsNetworkPhysicsComponent;
class UScriptStruct* FNetworkPhysicsSettingsNetworkPhysicsComponent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NetworkPhysicsSettingsNetworkPhysicsComponent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NetworkPhysicsSettingsNetworkPhysicsComponent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNetworkPhysicsSettingsNetworkPhysicsComponent, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("NetworkPhysicsSettingsNetworkPhysicsComponent"));
	}
	return Z_Registration_Info_UScriptStruct_NetworkPhysicsSettingsNetworkPhysicsComponent.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FNetworkPhysicsSettingsNetworkPhysicsComponent>()
{
	return FNetworkPhysicsSettingsNetworkPhysicsComponent::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNetworkPhysicsSettingsNetworkPhysicsComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Physics/NetworkPhysicsSettingsComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideRedundantInputs_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Physics/NetworkPhysicsSettingsComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RedundantInputs_MetaData[] = {
		{ "Category", "Overrides" },
		{ "Comment", "// Overrides CVar: np2.Resim.RedundantInputs -- How many extra inputs to send with each unreliable network message, to account for packetloss.\n" },
		{ "EditCondition", "bOverrideRedundantInputs" },
		{ "ModuleRelativePath", "Public/Physics/NetworkPhysicsSettingsComponent.h" },
		{ "ToolTip", "Overrides CVar: np2.Resim.RedundantInputs -- How many extra inputs to send with each unreliable network message, to account for packetloss." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideRedundantStates_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Physics/NetworkPhysicsSettingsComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RedundantStates_MetaData[] = {
		{ "Category", "Overrides" },
		{ "Comment", "// Overrides CVar: np2.Resim.RedundantStates -- How many extra states to send with each unreliable network message, to account for packetloss.\n" },
		{ "EditCondition", "bOverrideRedundantStates" },
		{ "ModuleRelativePath", "Public/Physics/NetworkPhysicsSettingsComponent.h" },
		{ "ToolTip", "Overrides CVar: np2.Resim.RedundantStates -- How many extra states to send with each unreliable network message, to account for packetloss." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideCompareStateToTriggerRewind_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Physics/NetworkPhysicsSettingsComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCompareStateToTriggerRewind_MetaData[] = {
		{ "Category", "Overrides" },
		{ "Comment", "// Overrides CVar: np2.Resim.CompareStateToTriggerRewind -- When true, cache local players custom state struct in rewind history and compare the predicted state with incoming server state to trigger resimulations if they differ, comparison done through FNetworkPhysicsData::CompareData.\n" },
		{ "EditCondition", "bOverrideCompareStateToTriggerRewind" },
		{ "ModuleRelativePath", "Public/Physics/NetworkPhysicsSettingsComponent.h" },
		{ "ToolTip", "Overrides CVar: np2.Resim.CompareStateToTriggerRewind -- When true, cache local players custom state struct in rewind history and compare the predicted state with incoming server state to trigger resimulations if they differ, comparison done through FNetworkPhysicsData::CompareData." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideCompareInputToTriggerRewind_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Physics/NetworkPhysicsSettingsComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCompareInputToTriggerRewind_MetaData[] = {
		{ "Category", "Overrides" },
		{ "Comment", "// Overrides CVar: np2.Resim.CompareInputToTriggerRewind -- When true, compare local players predicted inputs with incoming server inputs to trigger resimulations if they differ, comparison done through FNetworkPhysicsData::CompareData.\n" },
		{ "EditCondition", "bOverrideCompareInputToTriggerRewind" },
		{ "ModuleRelativePath", "Public/Physics/NetworkPhysicsSettingsComponent.h" },
		{ "ToolTip", "Overrides CVar: np2.Resim.CompareInputToTriggerRewind -- When true, compare local players predicted inputs with incoming server inputs to trigger resimulations if they differ, comparison done through FNetworkPhysicsData::CompareData." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideEnableUnreliableFlow_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Physics/NetworkPhysicsSettingsComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableUnreliableFlow_MetaData[] = {
		{ "Category", "Overrides" },
		{ "Comment", "// Overrides CVar: np2.Resim.EnableUnreliableFlow -- When true, allow data to be sent unreliably. Also sends FNetworkPhysicsData not marked with FNetworkPhysicsData::bimportant unreliably over the network.\n" },
		{ "EditCondition", "bOverrideEnableUnreliableFlow" },
		{ "ModuleRelativePath", "Public/Physics/NetworkPhysicsSettingsComponent.h" },
		{ "ToolTip", "Overrides CVar: np2.Resim.EnableUnreliableFlow -- When true, allow data to be sent unreliably. Also sends FNetworkPhysicsData not marked with FNetworkPhysicsData::bimportant unreliably over the network." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideEnableReliableFlow_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Physics/NetworkPhysicsSettingsComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableReliableFlow_MetaData[] = {
		{ "Category", "Overrides" },
		{ "Comment", "// Overrides CVar: np2.Resim.EnableReliableFlow -- EXPERIMENTAL -- When true, allow data to be sent reliably. Also send FNetworkPhysicsData marked with FNetworkPhysicsData::bimportant reliably over the network.\n" },
		{ "EditCondition", "bOverrideEnableReliableFlow" },
		{ "ModuleRelativePath", "Public/Physics/NetworkPhysicsSettingsComponent.h" },
		{ "ToolTip", "Overrides CVar: np2.Resim.EnableReliableFlow -- EXPERIMENTAL -- When true, allow data to be sent reliably. Also send FNetworkPhysicsData marked with FNetworkPhysicsData::bimportant reliably over the network." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideApplyDataInsteadOfMergeData_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Physics/NetworkPhysicsSettingsComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bApplyDataInsteadOfMergeData_MetaData[] = {
		{ "Category", "Overrides" },
		{ "Comment", "// Overrides CVar: np2.Resim.ApplyDataInsteadOfMergeData -- When true, call ApplyData for each data instead of MergeData when having to use multiple data entries in one frame.\n" },
		{ "EditCondition", "bOverrideApplyDataInsteadOfMergeData" },
		{ "ModuleRelativePath", "Public/Physics/NetworkPhysicsSettingsComponent.h" },
		{ "ToolTip", "Overrides CVar: np2.Resim.ApplyDataInsteadOfMergeData -- When true, call ApplyData for each data instead of MergeData when having to use multiple data entries in one frame." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideAllowInputExtrapolation_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Physics/NetworkPhysicsSettingsComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllowInputExtrapolation_MetaData[] = {
		{ "Category", "Overrides" },
		{ "Comment", "// Overrides CVar: np2.Resim.AllowInputExtrapolation -- When true and not locally controlled, allow inputs to be extrapolated from last known and if there is a gap allow interpolation between two known inputs.\n" },
		{ "EditCondition", "bOverrideAllowInputExtrapolation" },
		{ "ModuleRelativePath", "Public/Physics/NetworkPhysicsSettingsComponent.h" },
		{ "ToolTip", "Overrides CVar: np2.Resim.AllowInputExtrapolation -- When true and not locally controlled, allow inputs to be extrapolated from last known and if there is a gap allow interpolation between two known inputs." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideValidateDataOnGameThread_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Physics/NetworkPhysicsSettingsComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bValidateDataOnGameThread_MetaData[] = {
		{ "Category", "Overrides" },
		{ "Comment", "// Overrides CVar: np2.Resim.ValidateDataOnGameThread -- When true, perform server-side input validation through FNetworkPhysicsData::ValidateData on the Game Thread. If false, perform the call on the Physics Thread.\n" },
		{ "EditCondition", "bOverrideValidateDataOnGameThread" },
		{ "ModuleRelativePath", "Public/Physics/NetworkPhysicsSettingsComponent.h" },
		{ "ToolTip", "Overrides CVar: np2.Resim.ValidateDataOnGameThread -- When true, perform server-side input validation through FNetworkPhysicsData::ValidateData on the Game Thread. If false, perform the call on the Physics Thread." },
	};
#endif // WITH_METADATA
	static void NewProp_bOverrideRedundantInputs_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideRedundantInputs;
	static const UECodeGen_Private::FUInt16PropertyParams NewProp_RedundantInputs;
	static void NewProp_bOverrideRedundantStates_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideRedundantStates;
	static const UECodeGen_Private::FUInt16PropertyParams NewProp_RedundantStates;
	static void NewProp_bOverrideCompareStateToTriggerRewind_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideCompareStateToTriggerRewind;
	static void NewProp_bCompareStateToTriggerRewind_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCompareStateToTriggerRewind;
	static void NewProp_bOverrideCompareInputToTriggerRewind_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideCompareInputToTriggerRewind;
	static void NewProp_bCompareInputToTriggerRewind_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCompareInputToTriggerRewind;
	static void NewProp_bOverrideEnableUnreliableFlow_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideEnableUnreliableFlow;
	static void NewProp_bEnableUnreliableFlow_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableUnreliableFlow;
	static void NewProp_bOverrideEnableReliableFlow_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideEnableReliableFlow;
	static void NewProp_bEnableReliableFlow_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableReliableFlow;
	static void NewProp_bOverrideApplyDataInsteadOfMergeData_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideApplyDataInsteadOfMergeData;
	static void NewProp_bApplyDataInsteadOfMergeData_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplyDataInsteadOfMergeData;
	static void NewProp_bOverrideAllowInputExtrapolation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideAllowInputExtrapolation;
	static void NewProp_bAllowInputExtrapolation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowInputExtrapolation;
	static void NewProp_bOverrideValidateDataOnGameThread_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideValidateDataOnGameThread;
	static void NewProp_bValidateDataOnGameThread_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bValidateDataOnGameThread;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNetworkPhysicsSettingsNetworkPhysicsComponent>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FNetworkPhysicsSettingsNetworkPhysicsComponent_Statics::NewProp_bOverrideRedundantInputs_SetBit(void* Obj)
{
	((FNetworkPhysicsSettingsNetworkPhysicsComponent*)Obj)->bOverrideRedundantInputs = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNetworkPhysicsSettingsNetworkPhysicsComponent_Statics::NewProp_bOverrideRedundantInputs = { "bOverrideRedundantInputs", nullptr, (EPropertyFlags)0x0010000000014001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FNetworkPhysicsSettingsNetworkPhysicsComponent), &Z_Construct_UScriptStruct_FNetworkPhysicsSettingsNetworkPhysicsComponent_Statics::NewProp_bOverrideRedundantInputs_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideRedundantInputs_MetaData), NewProp_bOverrideRedundantInputs_MetaData) };
const UECodeGen_Private::FUInt16PropertyParams Z_Construct_UScriptStruct_FNetworkPhysicsSettingsNetworkPhysicsComponent_Statics::NewProp_RedundantInputs = { "RedundantInputs", nullptr, (EPropertyFlags)0x0010000000014001, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNetworkPhysicsSettingsNetworkPhysicsComponent, RedundantInputs), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RedundantInputs_MetaData), NewProp_RedundantInputs_MetaData) };
void Z_Construct_UScriptStruct_FNetworkPhysicsSettingsNetworkPhysicsComponent_Statics::NewProp_bOverrideRedundantStates_SetBit(void* Obj)
{
	((FNetworkPhysicsSettingsNetworkPhysicsComponent*)Obj)->bOverrideRedundantStates = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNetworkPhysicsSettingsNetworkPhysicsComponent_Statics::NewProp_bOverrideRedundantStates = { "bOverrideRedundantStates", nullptr, (EPropertyFlags)0x0010000000014001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FNetworkPhysicsSettingsNetworkPhysicsComponent), &Z_Construct_UScriptStruct_FNetworkPhysicsSettingsNetworkPhysicsComponent_Statics::NewProp_bOverrideRedundantStates_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideRedundantStates_MetaData), NewProp_bOverrideRedundantStates_MetaData) };
const UECodeGen_Private::FUInt16PropertyParams Z_Construct_UScriptStruct_FNetworkPhysicsSettingsNetworkPhysicsComponent_Statics::NewProp_RedundantStates = { "RedundantStates", nullptr, (EPropertyFlags)0x0010000000014001, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNetworkPhysicsSettingsNetworkPhysicsComponent, RedundantStates), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RedundantStates_MetaData), NewProp_RedundantStates_MetaData) };
void Z_Construct_UScriptStruct_FNetworkPhysicsSettingsNetworkPhysicsComponent_Statics::NewProp_bOverrideCompareStateToTriggerRewind_SetBit(void* Obj)
{
	((FNetworkPhysicsSettingsNetworkPhysicsComponent*)Obj)->bOverrideCompareStateToTriggerRewind = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNetworkPhysicsSettingsNetworkPhysicsComponent_Statics::NewProp_bOverrideCompareStateToTriggerRewind = { "bOverrideCompareStateToTriggerRewind", nullptr, (EPropertyFlags)0x0010000000014001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FNetworkPhysicsSettingsNetworkPhysicsComponent), &Z_Construct_UScriptStruct_FNetworkPhysicsSettingsNetworkPhysicsComponent_Statics::NewProp_bOverrideCompareStateToTriggerRewind_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideCompareStateToTriggerRewind_MetaData), NewProp_bOverrideCompareStateToTriggerRewind_MetaData) };
void Z_Construct_UScriptStruct_FNetworkPhysicsSettingsNetworkPhysicsComponent_Statics::NewProp_bCompareStateToTriggerRewind_SetBit(void* Obj)
{
	((FNetworkPhysicsSettingsNetworkPhysicsComponent*)Obj)->bCompareStateToTriggerRewind = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNetworkPhysicsSettingsNetworkPhysicsComponent_Statics::NewProp_bCompareStateToTriggerRewind = { "bCompareStateToTriggerRewind", nullptr, (EPropertyFlags)0x0010000000014001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FNetworkPhysicsSettingsNetworkPhysicsComponent), &Z_Construct_UScriptStruct_FNetworkPhysicsSettingsNetworkPhysicsComponent_Statics::NewProp_bCompareStateToTriggerRewind_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCompareStateToTriggerRewind_MetaData), NewProp_bCompareStateToTriggerRewind_MetaData) };
void Z_Construct_UScriptStruct_FNetworkPhysicsSettingsNetworkPhysicsComponent_Statics::NewProp_bOverrideCompareInputToTriggerRewind_SetBit(void* Obj)
{
	((FNetworkPhysicsSettingsNetworkPhysicsComponent*)Obj)->bOverrideCompareInputToTriggerRewind = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNetworkPhysicsSettingsNetworkPhysicsComponent_Statics::NewProp_bOverrideCompareInputToTriggerRewind = { "bOverrideCompareInputToTriggerRewind", nullptr, (EPropertyFlags)0x0010000000014001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FNetworkPhysicsSettingsNetworkPhysicsComponent), &Z_Construct_UScriptStruct_FNetworkPhysicsSettingsNetworkPhysicsComponent_Statics::NewProp_bOverrideCompareInputToTriggerRewind_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideCompareInputToTriggerRewind_MetaData), NewProp_bOverrideCompareInputToTriggerRewind_MetaData) };
void Z_Construct_UScriptStruct_FNetworkPhysicsSettingsNetworkPhysicsComponent_Statics::NewProp_bCompareInputToTriggerRewind_SetBit(void* Obj)
{
	((FNetworkPhysicsSettingsNetworkPhysicsComponent*)Obj)->bCompareInputToTriggerRewind = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNetworkPhysicsSettingsNetworkPhysicsComponent_Statics::NewProp_bCompareInputToTriggerRewind = { "bCompareInputToTriggerRewind", nullptr, (EPropertyFlags)0x0010000000014001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FNetworkPhysicsSettingsNetworkPhysicsComponent), &Z_Construct_UScriptStruct_FNetworkPhysicsSettingsNetworkPhysicsComponent_Statics::NewProp_bCompareInputToTriggerRewind_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCompareInputToTriggerRewind_MetaData), NewProp_bCompareInputToTriggerRewind_MetaData) };
void Z_Construct_UScriptStruct_FNetworkPhysicsSettingsNetworkPhysicsComponent_Statics::NewProp_bOverrideEnableUnreliableFlow_SetBit(void* Obj)
{
	((FNetworkPhysicsSettingsNetworkPhysicsComponent*)Obj)->bOverrideEnableUnreliableFlow = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNetworkPhysicsSettingsNetworkPhysicsComponent_Statics::NewProp_bOverrideEnableUnreliableFlow = { "bOverrideEnableUnreliableFlow", nullptr, (EPropertyFlags)0x0010000000014001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FNetworkPhysicsSettingsNetworkPhysicsComponent), &Z_Construct_UScriptStruct_FNetworkPhysicsSettingsNetworkPhysicsComponent_Statics::NewProp_bOverrideEnableUnreliableFlow_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideEnableUnreliableFlow_MetaData), NewProp_bOverrideEnableUnreliableFlow_MetaData) };
void Z_Construct_UScriptStruct_FNetworkPhysicsSettingsNetworkPhysicsComponent_Statics::NewProp_bEnableUnreliableFlow_SetBit(void* Obj)
{
	((FNetworkPhysicsSettingsNetworkPhysicsComponent*)Obj)->bEnableUnreliableFlow = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNetworkPhysicsSettingsNetworkPhysicsComponent_Statics::NewProp_bEnableUnreliableFlow = { "bEnableUnreliableFlow", nullptr, (EPropertyFlags)0x0010000000014001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FNetworkPhysicsSettingsNetworkPhysicsComponent), &Z_Construct_UScriptStruct_FNetworkPhysicsSettingsNetworkPhysicsComponent_Statics::NewProp_bEnableUnreliableFlow_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableUnreliableFlow_MetaData), NewProp_bEnableUnreliableFlow_MetaData) };
void Z_Construct_UScriptStruct_FNetworkPhysicsSettingsNetworkPhysicsComponent_Statics::NewProp_bOverrideEnableReliableFlow_SetBit(void* Obj)
{
	((FNetworkPhysicsSettingsNetworkPhysicsComponent*)Obj)->bOverrideEnableReliableFlow = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNetworkPhysicsSettingsNetworkPhysicsComponent_Statics::NewProp_bOverrideEnableReliableFlow = { "bOverrideEnableReliableFlow", nullptr, (EPropertyFlags)0x0010000000014001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FNetworkPhysicsSettingsNetworkPhysicsComponent), &Z_Construct_UScriptStruct_FNetworkPhysicsSettingsNetworkPhysicsComponent_Statics::NewProp_bOverrideEnableReliableFlow_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideEnableReliableFlow_MetaData), NewProp_bOverrideEnableReliableFlow_MetaData) };
void Z_Construct_UScriptStruct_FNetworkPhysicsSettingsNetworkPhysicsComponent_Statics::NewProp_bEnableReliableFlow_SetBit(void* Obj)
{
	((FNetworkPhysicsSettingsNetworkPhysicsComponent*)Obj)->bEnableReliableFlow = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNetworkPhysicsSettingsNetworkPhysicsComponent_Statics::NewProp_bEnableReliableFlow = { "bEnableReliableFlow", nullptr, (EPropertyFlags)0x0010000000014001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FNetworkPhysicsSettingsNetworkPhysicsComponent), &Z_Construct_UScriptStruct_FNetworkPhysicsSettingsNetworkPhysicsComponent_Statics::NewProp_bEnableReliableFlow_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableReliableFlow_MetaData), NewProp_bEnableReliableFlow_MetaData) };
void Z_Construct_UScriptStruct_FNetworkPhysicsSettingsNetworkPhysicsComponent_Statics::NewProp_bOverrideApplyDataInsteadOfMergeData_SetBit(void* Obj)
{
	((FNetworkPhysicsSettingsNetworkPhysicsComponent*)Obj)->bOverrideApplyDataInsteadOfMergeData = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNetworkPhysicsSettingsNetworkPhysicsComponent_Statics::NewProp_bOverrideApplyDataInsteadOfMergeData = { "bOverrideApplyDataInsteadOfMergeData", nullptr, (EPropertyFlags)0x0010000000014001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FNetworkPhysicsSettingsNetworkPhysicsComponent), &Z_Construct_UScriptStruct_FNetworkPhysicsSettingsNetworkPhysicsComponent_Statics::NewProp_bOverrideApplyDataInsteadOfMergeData_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideApplyDataInsteadOfMergeData_MetaData), NewProp_bOverrideApplyDataInsteadOfMergeData_MetaData) };
void Z_Construct_UScriptStruct_FNetworkPhysicsSettingsNetworkPhysicsComponent_Statics::NewProp_bApplyDataInsteadOfMergeData_SetBit(void* Obj)
{
	((FNetworkPhysicsSettingsNetworkPhysicsComponent*)Obj)->bApplyDataInsteadOfMergeData = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNetworkPhysicsSettingsNetworkPhysicsComponent_Statics::NewProp_bApplyDataInsteadOfMergeData = { "bApplyDataInsteadOfMergeData", nullptr, (EPropertyFlags)0x0010000000014001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FNetworkPhysicsSettingsNetworkPhysicsComponent), &Z_Construct_UScriptStruct_FNetworkPhysicsSettingsNetworkPhysicsComponent_Statics::NewProp_bApplyDataInsteadOfMergeData_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bApplyDataInsteadOfMergeData_MetaData), NewProp_bApplyDataInsteadOfMergeData_MetaData) };
void Z_Construct_UScriptStruct_FNetworkPhysicsSettingsNetworkPhysicsComponent_Statics::NewProp_bOverrideAllowInputExtrapolation_SetBit(void* Obj)
{
	((FNetworkPhysicsSettingsNetworkPhysicsComponent*)Obj)->bOverrideAllowInputExtrapolation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNetworkPhysicsSettingsNetworkPhysicsComponent_Statics::NewProp_bOverrideAllowInputExtrapolation = { "bOverrideAllowInputExtrapolation", nullptr, (EPropertyFlags)0x0010000000014001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FNetworkPhysicsSettingsNetworkPhysicsComponent), &Z_Construct_UScriptStruct_FNetworkPhysicsSettingsNetworkPhysicsComponent_Statics::NewProp_bOverrideAllowInputExtrapolation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideAllowInputExtrapolation_MetaData), NewProp_bOverrideAllowInputExtrapolation_MetaData) };
void Z_Construct_UScriptStruct_FNetworkPhysicsSettingsNetworkPhysicsComponent_Statics::NewProp_bAllowInputExtrapolation_SetBit(void* Obj)
{
	((FNetworkPhysicsSettingsNetworkPhysicsComponent*)Obj)->bAllowInputExtrapolation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNetworkPhysicsSettingsNetworkPhysicsComponent_Statics::NewProp_bAllowInputExtrapolation = { "bAllowInputExtrapolation", nullptr, (EPropertyFlags)0x0010000000014001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FNetworkPhysicsSettingsNetworkPhysicsComponent), &Z_Construct_UScriptStruct_FNetworkPhysicsSettingsNetworkPhysicsComponent_Statics::NewProp_bAllowInputExtrapolation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllowInputExtrapolation_MetaData), NewProp_bAllowInputExtrapolation_MetaData) };
void Z_Construct_UScriptStruct_FNetworkPhysicsSettingsNetworkPhysicsComponent_Statics::NewProp_bOverrideValidateDataOnGameThread_SetBit(void* Obj)
{
	((FNetworkPhysicsSettingsNetworkPhysicsComponent*)Obj)->bOverrideValidateDataOnGameThread = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNetworkPhysicsSettingsNetworkPhysicsComponent_Statics::NewProp_bOverrideValidateDataOnGameThread = { "bOverrideValidateDataOnGameThread", nullptr, (EPropertyFlags)0x0010000000014001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FNetworkPhysicsSettingsNetworkPhysicsComponent), &Z_Construct_UScriptStruct_FNetworkPhysicsSettingsNetworkPhysicsComponent_Statics::NewProp_bOverrideValidateDataOnGameThread_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideValidateDataOnGameThread_MetaData), NewProp_bOverrideValidateDataOnGameThread_MetaData) };
void Z_Construct_UScriptStruct_FNetworkPhysicsSettingsNetworkPhysicsComponent_Statics::NewProp_bValidateDataOnGameThread_SetBit(void* Obj)
{
	((FNetworkPhysicsSettingsNetworkPhysicsComponent*)Obj)->bValidateDataOnGameThread = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNetworkPhysicsSettingsNetworkPhysicsComponent_Statics::NewProp_bValidateDataOnGameThread = { "bValidateDataOnGameThread", nullptr, (EPropertyFlags)0x0010000000014001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FNetworkPhysicsSettingsNetworkPhysicsComponent), &Z_Construct_UScriptStruct_FNetworkPhysicsSettingsNetworkPhysicsComponent_Statics::NewProp_bValidateDataOnGameThread_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bValidateDataOnGameThread_MetaData), NewProp_bValidateDataOnGameThread_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNetworkPhysicsSettingsNetworkPhysicsComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetworkPhysicsSettingsNetworkPhysicsComponent_Statics::NewProp_bOverrideRedundantInputs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetworkPhysicsSettingsNetworkPhysicsComponent_Statics::NewProp_RedundantInputs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetworkPhysicsSettingsNetworkPhysicsComponent_Statics::NewProp_bOverrideRedundantStates,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetworkPhysicsSettingsNetworkPhysicsComponent_Statics::NewProp_RedundantStates,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetworkPhysicsSettingsNetworkPhysicsComponent_Statics::NewProp_bOverrideCompareStateToTriggerRewind,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetworkPhysicsSettingsNetworkPhysicsComponent_Statics::NewProp_bCompareStateToTriggerRewind,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetworkPhysicsSettingsNetworkPhysicsComponent_Statics::NewProp_bOverrideCompareInputToTriggerRewind,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetworkPhysicsSettingsNetworkPhysicsComponent_Statics::NewProp_bCompareInputToTriggerRewind,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetworkPhysicsSettingsNetworkPhysicsComponent_Statics::NewProp_bOverrideEnableUnreliableFlow,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetworkPhysicsSettingsNetworkPhysicsComponent_Statics::NewProp_bEnableUnreliableFlow,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetworkPhysicsSettingsNetworkPhysicsComponent_Statics::NewProp_bOverrideEnableReliableFlow,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetworkPhysicsSettingsNetworkPhysicsComponent_Statics::NewProp_bEnableReliableFlow,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetworkPhysicsSettingsNetworkPhysicsComponent_Statics::NewProp_bOverrideApplyDataInsteadOfMergeData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetworkPhysicsSettingsNetworkPhysicsComponent_Statics::NewProp_bApplyDataInsteadOfMergeData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetworkPhysicsSettingsNetworkPhysicsComponent_Statics::NewProp_bOverrideAllowInputExtrapolation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetworkPhysicsSettingsNetworkPhysicsComponent_Statics::NewProp_bAllowInputExtrapolation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetworkPhysicsSettingsNetworkPhysicsComponent_Statics::NewProp_bOverrideValidateDataOnGameThread,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetworkPhysicsSettingsNetworkPhysicsComponent_Statics::NewProp_bValidateDataOnGameThread,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetworkPhysicsSettingsNetworkPhysicsComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNetworkPhysicsSettingsNetworkPhysicsComponent_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"NetworkPhysicsSettingsNetworkPhysicsComponent",
	Z_Construct_UScriptStruct_FNetworkPhysicsSettingsNetworkPhysicsComponent_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetworkPhysicsSettingsNetworkPhysicsComponent_Statics::PropPointers),
	sizeof(FNetworkPhysicsSettingsNetworkPhysicsComponent),
	alignof(FNetworkPhysicsSettingsNetworkPhysicsComponent),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetworkPhysicsSettingsNetworkPhysicsComponent_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNetworkPhysicsSettingsNetworkPhysicsComponent_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNetworkPhysicsSettingsNetworkPhysicsComponent()
{
	if (!Z_Registration_Info_UScriptStruct_NetworkPhysicsSettingsNetworkPhysicsComponent.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NetworkPhysicsSettingsNetworkPhysicsComponent.InnerSingleton, Z_Construct_UScriptStruct_FNetworkPhysicsSettingsNetworkPhysicsComponent_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NetworkPhysicsSettingsNetworkPhysicsComponent.InnerSingleton;
}
// End ScriptStruct FNetworkPhysicsSettingsNetworkPhysicsComponent

// Begin Class UNetworkPhysicsSettingsComponent
void UNetworkPhysicsSettingsComponent::StaticRegisterNativesUNetworkPhysicsSettingsComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNetworkPhysicsSettingsComponent);
UClass* Z_Construct_UClass_UNetworkPhysicsSettingsComponent_NoRegister()
{
	return UNetworkPhysicsSettingsComponent::StaticClass();
}
struct Z_Construct_UClass_UNetworkPhysicsSettingsComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "Comment", "/** Settings Component for network replicated physics actors\n* Overrides default settings, CVar settings and project settings. */" },
		{ "IncludePath", "Physics/NetworkPhysicsSettingsComponent.h" },
		{ "ModuleRelativePath", "Public/Physics/NetworkPhysicsSettingsComponent.h" },
		{ "ToolTip", "Settings Component for network replicated physics actors\nOverrides default settings, CVar settings and project settings." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GeneralSettings_MetaData[] = {
		{ "Category", "Networked Physics Settings" },
		{ "ModuleRelativePath", "Public/Physics/NetworkPhysicsSettingsComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultReplicationSettings_MetaData[] = {
		{ "Category", "Networked Physics Settings" },
		{ "ModuleRelativePath", "Public/Physics/NetworkPhysicsSettingsComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PredictiveInterpolationSettings_MetaData[] = {
		{ "Category", "Networked Physics Settings" },
		{ "ModuleRelativePath", "Public/Physics/NetworkPhysicsSettingsComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResimulationSettings_MetaData[] = {
		{ "Category", "Networked Physics Settings" },
		{ "ModuleRelativePath", "Public/Physics/NetworkPhysicsSettingsComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NetworkPhysicsComponentSettings_MetaData[] = {
		{ "Category", "Networked Physics Settings" },
		{ "ModuleRelativePath", "Public/Physics/NetworkPhysicsSettingsComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_GeneralSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultReplicationSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PredictiveInterpolationSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ResimulationSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NetworkPhysicsComponentSettings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNetworkPhysicsSettingsComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNetworkPhysicsSettingsComponent_Statics::NewProp_GeneralSettings = { "GeneralSettings", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNetworkPhysicsSettingsComponent, GeneralSettings), Z_Construct_UScriptStruct_FNetworkPhysicsSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GeneralSettings_MetaData), NewProp_GeneralSettings_MetaData) }; // 652324821
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNetworkPhysicsSettingsComponent_Statics::NewProp_DefaultReplicationSettings = { "DefaultReplicationSettings", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNetworkPhysicsSettingsComponent, DefaultReplicationSettings), Z_Construct_UScriptStruct_FNetworkPhysicsSettingsDefaultReplication, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultReplicationSettings_MetaData), NewProp_DefaultReplicationSettings_MetaData) }; // 2589416832
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNetworkPhysicsSettingsComponent_Statics::NewProp_PredictiveInterpolationSettings = { "PredictiveInterpolationSettings", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNetworkPhysicsSettingsComponent, PredictiveInterpolationSettings), Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PredictiveInterpolationSettings_MetaData), NewProp_PredictiveInterpolationSettings_MetaData) }; // 3970937600
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNetworkPhysicsSettingsComponent_Statics::NewProp_ResimulationSettings = { "ResimulationSettings", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNetworkPhysicsSettingsComponent, ResimulationSettings), Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulation, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResimulationSettings_MetaData), NewProp_ResimulationSettings_MetaData) }; // 2036208850
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNetworkPhysicsSettingsComponent_Statics::NewProp_NetworkPhysicsComponentSettings = { "NetworkPhysicsComponentSettings", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNetworkPhysicsSettingsComponent, NetworkPhysicsComponentSettings), Z_Construct_UScriptStruct_FNetworkPhysicsSettingsNetworkPhysicsComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NetworkPhysicsComponentSettings_MetaData), NewProp_NetworkPhysicsComponentSettings_MetaData) }; // 3598352175
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNetworkPhysicsSettingsComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetworkPhysicsSettingsComponent_Statics::NewProp_GeneralSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetworkPhysicsSettingsComponent_Statics::NewProp_DefaultReplicationSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetworkPhysicsSettingsComponent_Statics::NewProp_PredictiveInterpolationSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetworkPhysicsSettingsComponent_Statics::NewProp_ResimulationSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetworkPhysicsSettingsComponent_Statics::NewProp_NetworkPhysicsComponentSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNetworkPhysicsSettingsComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNetworkPhysicsSettingsComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNetworkPhysicsSettingsComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNetworkPhysicsSettingsComponent_Statics::ClassParams = {
	&UNetworkPhysicsSettingsComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UNetworkPhysicsSettingsComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UNetworkPhysicsSettingsComponent_Statics::PropPointers),
	0,
	0x00A800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNetworkPhysicsSettingsComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UNetworkPhysicsSettingsComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNetworkPhysicsSettingsComponent()
{
	if (!Z_Registration_Info_UClass_UNetworkPhysicsSettingsComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNetworkPhysicsSettingsComponent.OuterSingleton, Z_Construct_UClass_UNetworkPhysicsSettingsComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNetworkPhysicsSettingsComponent.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UNetworkPhysicsSettingsComponent>()
{
	return UNetworkPhysicsSettingsComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNetworkPhysicsSettingsComponent);
UNetworkPhysicsSettingsComponent::~UNetworkPhysicsSettingsComponent() {}
// End Class UNetworkPhysicsSettingsComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Physics_NetworkPhysicsSettingsComponent_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FNetworkPhysicsSettings::StaticStruct, Z_Construct_UScriptStruct_FNetworkPhysicsSettings_Statics::NewStructOps, TEXT("NetworkPhysicsSettings"), &Z_Registration_Info_UScriptStruct_NetworkPhysicsSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNetworkPhysicsSettings), 652324821U) },
		{ FNetworkPhysicsSettingsDefaultReplication::StaticStruct, Z_Construct_UScriptStruct_FNetworkPhysicsSettingsDefaultReplication_Statics::NewStructOps, TEXT("NetworkPhysicsSettingsDefaultReplication"), &Z_Registration_Info_UScriptStruct_NetworkPhysicsSettingsDefaultReplication, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNetworkPhysicsSettingsDefaultReplication), 2589416832U) },
		{ FNetworkPhysicsSettingsPredictiveInterpolation::StaticStruct, Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::NewStructOps, TEXT("NetworkPhysicsSettingsPredictiveInterpolation"), &Z_Registration_Info_UScriptStruct_NetworkPhysicsSettingsPredictiveInterpolation, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNetworkPhysicsSettingsPredictiveInterpolation), 3970937600U) },
		{ FNetworkPhysicsSettingsResimulation::StaticStruct, Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulation_Statics::NewStructOps, TEXT("NetworkPhysicsSettingsResimulation"), &Z_Registration_Info_UScriptStruct_NetworkPhysicsSettingsResimulation, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNetworkPhysicsSettingsResimulation), 2036208850U) },
		{ FNetworkPhysicsSettingsNetworkPhysicsComponent::StaticStruct, Z_Construct_UScriptStruct_FNetworkPhysicsSettingsNetworkPhysicsComponent_Statics::NewStructOps, TEXT("NetworkPhysicsSettingsNetworkPhysicsComponent"), &Z_Registration_Info_UScriptStruct_NetworkPhysicsSettingsNetworkPhysicsComponent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNetworkPhysicsSettingsNetworkPhysicsComponent), 3598352175U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNetworkPhysicsSettingsComponent, UNetworkPhysicsSettingsComponent::StaticClass, TEXT("UNetworkPhysicsSettingsComponent"), &Z_Registration_Info_UClass_UNetworkPhysicsSettingsComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNetworkPhysicsSettingsComponent), 3404475650U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Physics_NetworkPhysicsSettingsComponent_h_2214588085(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Physics_NetworkPhysicsSettingsComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Physics_NetworkPhysicsSettingsComponent_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Physics_NetworkPhysicsSettingsComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Physics_NetworkPhysicsSettingsComponent_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
