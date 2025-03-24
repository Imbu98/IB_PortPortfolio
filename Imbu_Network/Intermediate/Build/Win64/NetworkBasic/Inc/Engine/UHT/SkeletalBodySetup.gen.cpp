// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/PhysicsEngine/SkeletalBodySetup.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicalAnimationComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSkeletalBodySetup() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBodySetup();
ENGINE_API UClass* Z_Construct_UClass_USkeletalBodySetup();
ENGINE_API UClass* Z_Construct_UClass_USkeletalBodySetup_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPhysicalAnimationData();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPhysicalAnimationProfile();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin ScriptStruct FPhysicalAnimationProfile
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PhysicalAnimationProfile;
class UScriptStruct* FPhysicalAnimationProfile::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PhysicalAnimationProfile.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PhysicalAnimationProfile.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPhysicalAnimationProfile, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("PhysicalAnimationProfile"));
	}
	return Z_Registration_Info_UScriptStruct_PhysicalAnimationProfile.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FPhysicalAnimationProfile>()
{
	return FPhysicalAnimationProfile::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPhysicalAnimationProfile_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/SkeletalBodySetup.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProfileName_MetaData[] = {
		{ "Comment", "/** Profile name used to identify set of physical animation parameters */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/SkeletalBodySetup.h" },
		{ "ToolTip", "Profile name used to identify set of physical animation parameters" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PhysicalAnimationData_MetaData[] = {
		{ "Category", "PhysicalAnimation" },
		{ "Comment", "/** Physical animation parameters used to drive animation */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/SkeletalBodySetup.h" },
		{ "ToolTip", "Physical animation parameters used to drive animation" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ProfileName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PhysicalAnimationData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPhysicalAnimationProfile>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPhysicalAnimationProfile_Statics::NewProp_ProfileName = { "ProfileName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPhysicalAnimationProfile, ProfileName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProfileName_MetaData), NewProp_ProfileName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPhysicalAnimationProfile_Statics::NewProp_PhysicalAnimationData = { "PhysicalAnimationData", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPhysicalAnimationProfile, PhysicalAnimationData), Z_Construct_UScriptStruct_FPhysicalAnimationData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PhysicalAnimationData_MetaData), NewProp_PhysicalAnimationData_MetaData) }; // 3508551601
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPhysicalAnimationProfile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicalAnimationProfile_Statics::NewProp_ProfileName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicalAnimationProfile_Statics::NewProp_PhysicalAnimationData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicalAnimationProfile_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPhysicalAnimationProfile_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"PhysicalAnimationProfile",
	Z_Construct_UScriptStruct_FPhysicalAnimationProfile_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicalAnimationProfile_Statics::PropPointers),
	sizeof(FPhysicalAnimationProfile),
	alignof(FPhysicalAnimationProfile),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicalAnimationProfile_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPhysicalAnimationProfile_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPhysicalAnimationProfile()
{
	if (!Z_Registration_Info_UScriptStruct_PhysicalAnimationProfile.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PhysicalAnimationProfile.InnerSingleton, Z_Construct_UScriptStruct_FPhysicalAnimationProfile_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PhysicalAnimationProfile.InnerSingleton;
}
// End ScriptStruct FPhysicalAnimationProfile

// Begin Class USkeletalBodySetup
void USkeletalBodySetup::StaticRegisterNativesUSkeletalBodySetup()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USkeletalBodySetup);
UClass* Z_Construct_UClass_USkeletalBodySetup_NoRegister()
{
	return USkeletalBodySetup::StaticClass();
}
struct Z_Construct_UClass_USkeletalBodySetup_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "PhysicsEngine/SkeletalBodySetup.h" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/SkeletalBodySetup.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentPhysicalAnimationProfile_MetaData[] = {
		{ "Category", "PhysicalAnimation" },
		{ "Comment", "//dummy place for customization inside phat. Profiles are ordered dynamically and we need a static place for detail customization\n" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/SkeletalBodySetup.h" },
		{ "ToolTip", "dummy place for customization inside phat. Profiles are ordered dynamically and we need a static place for detail customization" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSkipScaleFromAnimation_MetaData[] = {
		{ "Category", "BodySetup" },
		{ "Comment", "/** If true we ignore scale changes from animation. This is useful for subtle scale animations like breathing where the physics collision should remain unchanged*/" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/SkeletalBodySetup.h" },
		{ "ToolTip", "If true we ignore scale changes from animation. This is useful for subtle scale animations like breathing where the physics collision should remain unchanged" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PhysicalAnimationData_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/SkeletalBodySetup.h" },
	};
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentPhysicalAnimationProfile;
#endif // WITH_EDITORONLY_DATA
	static void NewProp_bSkipScaleFromAnimation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSkipScaleFromAnimation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PhysicalAnimationData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PhysicalAnimationData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USkeletalBodySetup>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkeletalBodySetup_Statics::NewProp_CurrentPhysicalAnimationProfile = { "CurrentPhysicalAnimationProfile", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USkeletalBodySetup, CurrentPhysicalAnimationProfile), Z_Construct_UScriptStruct_FPhysicalAnimationProfile, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentPhysicalAnimationProfile_MetaData), NewProp_CurrentPhysicalAnimationProfile_MetaData) }; // 2052862193
#endif // WITH_EDITORONLY_DATA
void Z_Construct_UClass_USkeletalBodySetup_Statics::NewProp_bSkipScaleFromAnimation_SetBit(void* Obj)
{
	((USkeletalBodySetup*)Obj)->bSkipScaleFromAnimation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USkeletalBodySetup_Statics::NewProp_bSkipScaleFromAnimation = { "bSkipScaleFromAnimation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USkeletalBodySetup), &Z_Construct_UClass_USkeletalBodySetup_Statics::NewProp_bSkipScaleFromAnimation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSkipScaleFromAnimation_MetaData), NewProp_bSkipScaleFromAnimation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkeletalBodySetup_Statics::NewProp_PhysicalAnimationData_Inner = { "PhysicalAnimationData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPhysicalAnimationProfile, METADATA_PARAMS(0, nullptr) }; // 2052862193
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USkeletalBodySetup_Statics::NewProp_PhysicalAnimationData = { "PhysicalAnimationData", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USkeletalBodySetup, PhysicalAnimationData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PhysicalAnimationData_MetaData), NewProp_PhysicalAnimationData_MetaData) }; // 2052862193
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USkeletalBodySetup_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalBodySetup_Statics::NewProp_CurrentPhysicalAnimationProfile,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalBodySetup_Statics::NewProp_bSkipScaleFromAnimation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalBodySetup_Statics::NewProp_PhysicalAnimationData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalBodySetup_Statics::NewProp_PhysicalAnimationData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalBodySetup_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USkeletalBodySetup_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBodySetup,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalBodySetup_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USkeletalBodySetup_Statics::ClassParams = {
	&USkeletalBodySetup::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USkeletalBodySetup_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalBodySetup_Statics::PropPointers),
	0,
	0x000820A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalBodySetup_Statics::Class_MetaDataParams), Z_Construct_UClass_USkeletalBodySetup_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USkeletalBodySetup()
{
	if (!Z_Registration_Info_UClass_USkeletalBodySetup.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USkeletalBodySetup.OuterSingleton, Z_Construct_UClass_USkeletalBodySetup_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USkeletalBodySetup.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<USkeletalBodySetup>()
{
	return USkeletalBodySetup::StaticClass();
}
USkeletalBodySetup::USkeletalBodySetup(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USkeletalBodySetup);
USkeletalBodySetup::~USkeletalBodySetup() {}
// End Class USkeletalBodySetup

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_SkeletalBodySetup_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPhysicalAnimationProfile::StaticStruct, Z_Construct_UScriptStruct_FPhysicalAnimationProfile_Statics::NewStructOps, TEXT("PhysicalAnimationProfile"), &Z_Registration_Info_UScriptStruct_PhysicalAnimationProfile, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPhysicalAnimationProfile), 2052862193U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USkeletalBodySetup, USkeletalBodySetup::StaticClass, TEXT("USkeletalBodySetup"), &Z_Registration_Info_UClass_USkeletalBodySetup, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USkeletalBodySetup), 1051248912U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_SkeletalBodySetup_h_2021296927(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_SkeletalBodySetup_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_SkeletalBodySetup_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_SkeletalBodySetup_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_SkeletalBodySetup_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
