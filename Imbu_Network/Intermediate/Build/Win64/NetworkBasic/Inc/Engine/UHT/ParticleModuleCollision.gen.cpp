// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Particles/Collision/ParticleModuleCollision.h"
#include "Runtime/Engine/Classes/Distributions/DistributionFloat.h"
#include "Runtime/Engine/Classes/Distributions/DistributionVector.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleCollision() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleCollision();
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleCollision_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleCollisionBase();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EObjectTypeQuery();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EParticleCollisionComplete();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionFloat();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionVector();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UParticleModuleCollision
void UParticleModuleCollision::StaticRegisterNativesUParticleModuleCollision()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UParticleModuleCollision);
UClass* Z_Construct_UClass_UParticleModuleCollision_NoRegister()
{
	return UParticleModuleCollision::StaticClass();
}
struct Z_Construct_UClass_UParticleModuleCollision_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Actor Collision" },
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Particles/Collision/ParticleModuleCollision.h" },
		{ "ModuleRelativePath", "Classes/Particles/Collision/ParticleModuleCollision.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DampingFactor_MetaData[] = {
		{ "Category", "Collision" },
		{ "Comment", "/**\n\x09 *\x09How much to `slow' the velocity of the particle after a collision.\n\x09 *\x09Value is obtained using the EmitterTime at particle spawn.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/Collision/ParticleModuleCollision.h" },
		{ "ToolTip", "How much to `slow' the velocity of the particle after a collision.\nValue is obtained using the EmitterTime at particle spawn." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DampingFactorRotation_MetaData[] = {
		{ "Category", "Collision" },
		{ "Comment", "/**\n\x09 *\x09How much to `slow' the rotation of the particle after a collision.\n\x09 *\x09Value is obtained using the EmitterTime at particle spawn.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/Collision/ParticleModuleCollision.h" },
		{ "ToolTip", "How much to `slow' the rotation of the particle after a collision.\nValue is obtained using the EmitterTime at particle spawn." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxCollisions_MetaData[] = {
		{ "Category", "Collision" },
		{ "Comment", "/**\n\x09 *\x09The maximum number of collisions a particle can have. \n\x09 *  Value is obtained using the EmitterTime at particle spawn. \n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/Collision/ParticleModuleCollision.h" },
		{ "ToolTip", "The maximum number of collisions a particle can have.\nValue is obtained using the EmitterTime at particle spawn." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionCompletionOption_MetaData[] = {
		{ "Category", "Collision" },
		{ "Comment", "/**\n\x09 *\x09What to do once a particles MaxCollisions is reached.\n\x09 *\x09One of the following:\n\x09 *\x09""EPCC_Kill\n\x09 *\x09\x09Kill the particle when MaxCollisions is reached\n\x09 *\x09""EPCC_Freeze\n\x09 *\x09\x09""Freeze in place, NO MORE UPDATES\n\x09 *\x09""EPCC_HaltCollisions,\n\x09 *\x09\x09Stop collision checks, keep updating everything\n\x09 *\x09""EPCC_FreezeTranslation,\n\x09 *\x09\x09Stop translations, keep updating everything else\n\x09 *\x09""EPCC_FreezeRotation,\n\x09 *\x09\x09Stop rotations, keep updating everything else\n\x09 *\x09""EPCC_FreezeMovement\n\x09 *\x09\x09Stop all movement, keep updating\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/Collision/ParticleModuleCollision.h" },
		{ "ToolTip", "What to do once a particles MaxCollisions is reached.\nOne of the following:\nEPCC_Kill\n        Kill the particle when MaxCollisions is reached\nEPCC_Freeze\n        Freeze in place, NO MORE UPDATES\nEPCC_HaltCollisions,\n        Stop collision checks, keep updating everything\nEPCC_FreezeTranslation,\n        Stop translations, keep updating everything else\nEPCC_FreezeRotation,\n        Stop rotations, keep updating everything else\nEPCC_FreezeMovement\n        Stop all movement, keep updating" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionTypes_MetaData[] = {
		{ "Category", "Collision" },
		{ "Comment", "/**\n\x09 * Which ObjectTypes to collide with\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/Collision/ParticleModuleCollision.h" },
		{ "ToolTip", "Which ObjectTypes to collide with" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bApplyPhysics_MetaData[] = {
		{ "Category", "Collision" },
		{ "Comment", "/** \n\x09 *\x09If true, physic will be applied between a particle and the \n\x09 *\x09object it collides with. \n\x09 *\x09This is one-way - particle --> object. The particle does \n\x09 *\x09not have physics applied to it - it just generates an \n\x09 *\x09impulse applied to the object it collides with. \n\x09 * NOTE: having this on prevents the code from running off the game thread.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/Collision/ParticleModuleCollision.h" },
		{ "ToolTip", "If true, physic will be applied between a particle and the\nobject it collides with.\nThis is one-way - particle --> object. The particle does\nnot have physics applied to it - it just generates an\nimpulse applied to the object it collides with.\nNOTE: having this on prevents the code from running off the game thread." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreTriggerVolumes_MetaData[] = {
		{ "Category", "Collision" },
		{ "Comment", "/** Any trigger volumes that are hit will be ignored. NOTE: This can be turned off if the TrigerVolume physics object type is not in the CollisionTypes array.\n\x09* Turning this off is strongly recommended as having it on prevents the code from running off the game thread.*/" },
		{ "ModuleRelativePath", "Classes/Particles/Collision/ParticleModuleCollision.h" },
		{ "ToolTip", "Any trigger volumes that are hit will be ignored. NOTE: This can be turned off if the TrigerVolume physics object type is not in the CollisionTypes array.\nTurning this off is strongly recommended as having it on prevents the code from running off the game thread." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParticleMass_MetaData[] = {
		{ "Category", "Collision" },
		{ "Comment", "/** \n\x09 *\x09The mass of the particle - for use when bApplyPhysics is true. \n\x09 *\x09Value is obtained using the EmitterTime at particle spawn. \n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/Collision/ParticleModuleCollision.h" },
		{ "ToolTip", "The mass of the particle - for use when bApplyPhysics is true.\nValue is obtained using the EmitterTime at particle spawn." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DirScalar_MetaData[] = {
		{ "Category", "Collision" },
		{ "Comment", "/**\n\x09 *\x09The directional scalar value - used to scale the bounds to \n\x09 *\x09'assist' in avoiding inter-penetration or large gaps.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/Collision/ParticleModuleCollision.h" },
		{ "ToolTip", "The directional scalar value - used to scale the bounds to\n'assist' in avoiding inter-penetration or large gaps." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPawnsDoNotDecrementCount_MetaData[] = {
		{ "Category", "Collision" },
		{ "Comment", "/**\n\x09 *\x09If true, then collisions with Pawns will still react, but \n\x09 *\x09the UsedMaxCollisions count will not be decremented. \n\x09 *\x09(ie., They don't 'count' as collisions)\n\x09 * NOTE: Having this on prevents the code from running in parallel.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/Collision/ParticleModuleCollision.h" },
		{ "ToolTip", "If true, then collisions with Pawns will still react, but\nthe UsedMaxCollisions count will not be decremented.\n(ie., They don't 'count' as collisions)\nNOTE: Having this on prevents the code from running in parallel." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOnlyVerticalNormalsDecrementCount_MetaData[] = {
		{ "Category", "Collision" },
		{ "Comment", "/**\n\x09 *\x09If true, then collisions that do not have a vertical hit \n\x09 *\x09normal will still react, but UsedMaxCollisions count will \n\x09 *\x09not be decremented. (ie., They don't 'count' as collisions)\n\x09 *\x09Useful for having particles come to rest on floors.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/Collision/ParticleModuleCollision.h" },
		{ "ToolTip", "If true, then collisions that do not have a vertical hit\nnormal will still react, but UsedMaxCollisions count will\nnot be decremented. (ie., They don't 'count' as collisions)\nUseful for having particles come to rest on floors." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VerticalFudgeFactor_MetaData[] = {
		{ "Category", "Collision" },
		{ "Comment", "/**\n\x09 *\x09The fudge factor to use to determine vertical.\n\x09 *\x09True vertical will have a Hit.Normal.Z == 1.0\n\x09 *\x09This will allow for Z components in the range of\n\x09 *\x09[1.0-VerticalFudgeFactor..1.0]\n\x09 *\x09to count as vertical collisions.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/Collision/ParticleModuleCollision.h" },
		{ "ToolTip", "The fudge factor to use to determine vertical.\nTrue vertical will have a Hit.Normal.Z == 1.0\nThis will allow for Z components in the range of\n[1.0-VerticalFudgeFactor..1.0]\nto count as vertical collisions." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DelayAmount_MetaData[] = {
		{ "Category", "Collision" },
		{ "Comment", "/**\n\x09 *\x09How long to delay before checking a particle for collisions.\n\x09 *\x09Value is retrieved using the EmitterTime.\n\x09 *\x09""During update, the particle flag IgnoreCollisions will be \n\x09 *\x09set until the particle RelativeTime has surpassed the \n\x09 *\x09""DelayAmount.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/Collision/ParticleModuleCollision.h" },
		{ "ToolTip", "How long to delay before checking a particle for collisions.\nValue is retrieved using the EmitterTime.\nDuring update, the particle flag IgnoreCollisions will be\nset until the particle RelativeTime has surpassed the\nDelayAmount." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDropDetail_MetaData[] = {
		{ "Category", "Performance" },
		{ "Comment", "/**\x09If true, when the World->bDropDetail flag is set, the module will be ignored. */" },
		{ "ModuleRelativePath", "Classes/Particles/Collision/ParticleModuleCollision.h" },
		{ "ToolTip", "If true, when the World->bDropDetail flag is set, the module will be ignored." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCollideOnlyIfVisible_MetaData[] = {
		{ "Category", "Performance" },
		{ "Comment", "/** If true, Particle collision only if particle system is currently being rendered. */" },
		{ "ModuleRelativePath", "Classes/Particles/Collision/ParticleModuleCollision.h" },
		{ "ToolTip", "If true, Particle collision only if particle system is currently being rendered." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreSourceActor_MetaData[] = {
		{ "Category", "Collision" },
		{ "Comment", "/**\n\x09 *\x09If true, then the source actor is ignored in collision checks.\n\x09 *\x09""Defaults to true.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/Collision/ParticleModuleCollision.h" },
		{ "ToolTip", "If true, then the source actor is ignored in collision checks.\nDefaults to true." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxCollisionDistance_MetaData[] = {
		{ "Category", "Performance" },
		{ "Comment", "/** Max distance at which particle collision will occur. */" },
		{ "ModuleRelativePath", "Classes/Particles/Collision/ParticleModuleCollision.h" },
		{ "ToolTip", "Max distance at which particle collision will occur." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DampingFactor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DampingFactorRotation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaxCollisions;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CollisionCompletionOption;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CollisionTypes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CollisionTypes;
	static void NewProp_bApplyPhysics_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplyPhysics;
	static void NewProp_bIgnoreTriggerVolumes_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreTriggerVolumes;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ParticleMass;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DirScalar;
	static void NewProp_bPawnsDoNotDecrementCount_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPawnsDoNotDecrementCount;
	static void NewProp_bOnlyVerticalNormalsDecrementCount_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOnlyVerticalNormalsDecrementCount;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_VerticalFudgeFactor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DelayAmount;
	static void NewProp_bDropDetail_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDropDetail;
	static void NewProp_bCollideOnlyIfVisible_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCollideOnlyIfVisible;
	static void NewProp_bIgnoreSourceActor_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreSourceActor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxCollisionDistance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleCollision>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleCollision_Statics::NewProp_DampingFactor = { "DampingFactor", nullptr, (EPropertyFlags)0x0010008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleModuleCollision, DampingFactor), Z_Construct_UScriptStruct_FRawDistributionVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DampingFactor_MetaData), NewProp_DampingFactor_MetaData) }; // 1238237137
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleCollision_Statics::NewProp_DampingFactorRotation = { "DampingFactorRotation", nullptr, (EPropertyFlags)0x0010008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleModuleCollision, DampingFactorRotation), Z_Construct_UScriptStruct_FRawDistributionVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DampingFactorRotation_MetaData), NewProp_DampingFactorRotation_MetaData) }; // 1238237137
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleCollision_Statics::NewProp_MaxCollisions = { "MaxCollisions", nullptr, (EPropertyFlags)0x0010008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleModuleCollision, MaxCollisions), Z_Construct_UScriptStruct_FRawDistributionFloat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxCollisions_MetaData), NewProp_MaxCollisions_MetaData) }; // 3711494764
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UParticleModuleCollision_Statics::NewProp_CollisionCompletionOption = { "CollisionCompletionOption", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleModuleCollision, CollisionCompletionOption), Z_Construct_UEnum_Engine_EParticleCollisionComplete, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionCompletionOption_MetaData), NewProp_CollisionCompletionOption_MetaData) }; // 3451696458
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UParticleModuleCollision_Statics::NewProp_CollisionTypes_Inner = { "CollisionTypes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_Engine_EObjectTypeQuery, METADATA_PARAMS(0, nullptr) }; // 1798967895
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UParticleModuleCollision_Statics::NewProp_CollisionTypes = { "CollisionTypes", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleModuleCollision, CollisionTypes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionTypes_MetaData), NewProp_CollisionTypes_MetaData) }; // 1798967895
void Z_Construct_UClass_UParticleModuleCollision_Statics::NewProp_bApplyPhysics_SetBit(void* Obj)
{
	((UParticleModuleCollision*)Obj)->bApplyPhysics = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleCollision_Statics::NewProp_bApplyPhysics = { "bApplyPhysics", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UParticleModuleCollision), &Z_Construct_UClass_UParticleModuleCollision_Statics::NewProp_bApplyPhysics_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bApplyPhysics_MetaData), NewProp_bApplyPhysics_MetaData) };
void Z_Construct_UClass_UParticleModuleCollision_Statics::NewProp_bIgnoreTriggerVolumes_SetBit(void* Obj)
{
	((UParticleModuleCollision*)Obj)->bIgnoreTriggerVolumes = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleCollision_Statics::NewProp_bIgnoreTriggerVolumes = { "bIgnoreTriggerVolumes", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UParticleModuleCollision), &Z_Construct_UClass_UParticleModuleCollision_Statics::NewProp_bIgnoreTriggerVolumes_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIgnoreTriggerVolumes_MetaData), NewProp_bIgnoreTriggerVolumes_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleCollision_Statics::NewProp_ParticleMass = { "ParticleMass", nullptr, (EPropertyFlags)0x0010008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleModuleCollision, ParticleMass), Z_Construct_UScriptStruct_FRawDistributionFloat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParticleMass_MetaData), NewProp_ParticleMass_MetaData) }; // 3711494764
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParticleModuleCollision_Statics::NewProp_DirScalar = { "DirScalar", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleModuleCollision, DirScalar), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DirScalar_MetaData), NewProp_DirScalar_MetaData) };
void Z_Construct_UClass_UParticleModuleCollision_Statics::NewProp_bPawnsDoNotDecrementCount_SetBit(void* Obj)
{
	((UParticleModuleCollision*)Obj)->bPawnsDoNotDecrementCount = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleCollision_Statics::NewProp_bPawnsDoNotDecrementCount = { "bPawnsDoNotDecrementCount", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UParticleModuleCollision), &Z_Construct_UClass_UParticleModuleCollision_Statics::NewProp_bPawnsDoNotDecrementCount_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPawnsDoNotDecrementCount_MetaData), NewProp_bPawnsDoNotDecrementCount_MetaData) };
void Z_Construct_UClass_UParticleModuleCollision_Statics::NewProp_bOnlyVerticalNormalsDecrementCount_SetBit(void* Obj)
{
	((UParticleModuleCollision*)Obj)->bOnlyVerticalNormalsDecrementCount = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleCollision_Statics::NewProp_bOnlyVerticalNormalsDecrementCount = { "bOnlyVerticalNormalsDecrementCount", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UParticleModuleCollision), &Z_Construct_UClass_UParticleModuleCollision_Statics::NewProp_bOnlyVerticalNormalsDecrementCount_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOnlyVerticalNormalsDecrementCount_MetaData), NewProp_bOnlyVerticalNormalsDecrementCount_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParticleModuleCollision_Statics::NewProp_VerticalFudgeFactor = { "VerticalFudgeFactor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleModuleCollision, VerticalFudgeFactor), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VerticalFudgeFactor_MetaData), NewProp_VerticalFudgeFactor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleCollision_Statics::NewProp_DelayAmount = { "DelayAmount", nullptr, (EPropertyFlags)0x0010008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleModuleCollision, DelayAmount), Z_Construct_UScriptStruct_FRawDistributionFloat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DelayAmount_MetaData), NewProp_DelayAmount_MetaData) }; // 3711494764
void Z_Construct_UClass_UParticleModuleCollision_Statics::NewProp_bDropDetail_SetBit(void* Obj)
{
	((UParticleModuleCollision*)Obj)->bDropDetail = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleCollision_Statics::NewProp_bDropDetail = { "bDropDetail", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UParticleModuleCollision), &Z_Construct_UClass_UParticleModuleCollision_Statics::NewProp_bDropDetail_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDropDetail_MetaData), NewProp_bDropDetail_MetaData) };
void Z_Construct_UClass_UParticleModuleCollision_Statics::NewProp_bCollideOnlyIfVisible_SetBit(void* Obj)
{
	((UParticleModuleCollision*)Obj)->bCollideOnlyIfVisible = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleCollision_Statics::NewProp_bCollideOnlyIfVisible = { "bCollideOnlyIfVisible", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UParticleModuleCollision), &Z_Construct_UClass_UParticleModuleCollision_Statics::NewProp_bCollideOnlyIfVisible_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCollideOnlyIfVisible_MetaData), NewProp_bCollideOnlyIfVisible_MetaData) };
void Z_Construct_UClass_UParticleModuleCollision_Statics::NewProp_bIgnoreSourceActor_SetBit(void* Obj)
{
	((UParticleModuleCollision*)Obj)->bIgnoreSourceActor = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleCollision_Statics::NewProp_bIgnoreSourceActor = { "bIgnoreSourceActor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UParticleModuleCollision), &Z_Construct_UClass_UParticleModuleCollision_Statics::NewProp_bIgnoreSourceActor_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIgnoreSourceActor_MetaData), NewProp_bIgnoreSourceActor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParticleModuleCollision_Statics::NewProp_MaxCollisionDistance = { "MaxCollisionDistance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleModuleCollision, MaxCollisionDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxCollisionDistance_MetaData), NewProp_MaxCollisionDistance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleModuleCollision_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleCollision_Statics::NewProp_DampingFactor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleCollision_Statics::NewProp_DampingFactorRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleCollision_Statics::NewProp_MaxCollisions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleCollision_Statics::NewProp_CollisionCompletionOption,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleCollision_Statics::NewProp_CollisionTypes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleCollision_Statics::NewProp_CollisionTypes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleCollision_Statics::NewProp_bApplyPhysics,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleCollision_Statics::NewProp_bIgnoreTriggerVolumes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleCollision_Statics::NewProp_ParticleMass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleCollision_Statics::NewProp_DirScalar,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleCollision_Statics::NewProp_bPawnsDoNotDecrementCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleCollision_Statics::NewProp_bOnlyVerticalNormalsDecrementCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleCollision_Statics::NewProp_VerticalFudgeFactor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleCollision_Statics::NewProp_DelayAmount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleCollision_Statics::NewProp_bDropDetail,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleCollision_Statics::NewProp_bCollideOnlyIfVisible,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleCollision_Statics::NewProp_bIgnoreSourceActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleCollision_Statics::NewProp_MaxCollisionDistance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleCollision_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UParticleModuleCollision_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UParticleModuleCollisionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleCollision_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleCollision_Statics::ClassParams = {
	&UParticleModuleCollision::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UParticleModuleCollision_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleCollision_Statics::PropPointers),
	0,
	0x008810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleCollision_Statics::Class_MetaDataParams), Z_Construct_UClass_UParticleModuleCollision_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UParticleModuleCollision()
{
	if (!Z_Registration_Info_UClass_UParticleModuleCollision.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UParticleModuleCollision.OuterSingleton, Z_Construct_UClass_UParticleModuleCollision_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UParticleModuleCollision.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UParticleModuleCollision>()
{
	return UParticleModuleCollision::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleCollision);
UParticleModuleCollision::~UParticleModuleCollision() {}
// End Class UParticleModuleCollision

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Collision_ParticleModuleCollision_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UParticleModuleCollision, UParticleModuleCollision::StaticClass, TEXT("UParticleModuleCollision"), &Z_Registration_Info_UClass_UParticleModuleCollision, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UParticleModuleCollision), 1285207595U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Collision_ParticleModuleCollision_h_138378642(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Collision_ParticleModuleCollision_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Collision_ParticleModuleCollision_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
