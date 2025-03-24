// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayCameras/Public/Core/ObjectTreeGraphObject.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObjectTreeGraphObject() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UObjectTreeGraphObject();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UObjectTreeGraphObject_NoRegister();
UPackage* Z_Construct_UPackage__Script_GameplayCameras();
// End Cross Module References

// Begin Interface UObjectTreeGraphObject
void UObjectTreeGraphObject::StaticRegisterNativesUObjectTreeGraphObject()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UObjectTreeGraphObject);
UClass* Z_Construct_UClass_UObjectTreeGraphObject_NoRegister()
{
	return UObjectTreeGraphObject::StaticClass();
}
struct Z_Construct_UClass_UObjectTreeGraphObject_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/ObjectTreeGraphObject.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IObjectTreeGraphObject>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UObjectTreeGraphObject_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayCameras,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UObjectTreeGraphObject_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UObjectTreeGraphObject_Statics::ClassParams = {
	&UObjectTreeGraphObject::StaticClass,
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
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UObjectTreeGraphObject_Statics::Class_MetaDataParams), Z_Construct_UClass_UObjectTreeGraphObject_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UObjectTreeGraphObject()
{
	if (!Z_Registration_Info_UClass_UObjectTreeGraphObject.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UObjectTreeGraphObject.OuterSingleton, Z_Construct_UClass_UObjectTreeGraphObject_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UObjectTreeGraphObject.OuterSingleton;
}
template<> GAMEPLAYCAMERAS_API UClass* StaticClass<UObjectTreeGraphObject>()
{
	return UObjectTreeGraphObject::StaticClass();
}
UObjectTreeGraphObject::UObjectTreeGraphObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UObjectTreeGraphObject);
UObjectTreeGraphObject::~UObjectTreeGraphObject() {}
// End Interface UObjectTreeGraphObject

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_ObjectTreeGraphObject_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UObjectTreeGraphObject, UObjectTreeGraphObject::StaticClass, TEXT("UObjectTreeGraphObject"), &Z_Registration_Info_UClass_UObjectTreeGraphObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UObjectTreeGraphObject), 1612724473U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_ObjectTreeGraphObject_h_3362794977(TEXT("/Script/GameplayCameras"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_ObjectTreeGraphObject_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_ObjectTreeGraphObject_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
