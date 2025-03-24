// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayCameras/Public/Core/ObjectTreeGraphRootObject.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObjectTreeGraphRootObject() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UObjectTreeGraphRootObject();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UObjectTreeGraphRootObject_NoRegister();
UPackage* Z_Construct_UPackage__Script_GameplayCameras();
// End Cross Module References

// Begin Interface UObjectTreeGraphRootObject
void UObjectTreeGraphRootObject::StaticRegisterNativesUObjectTreeGraphRootObject()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UObjectTreeGraphRootObject);
UClass* Z_Construct_UClass_UObjectTreeGraphRootObject_NoRegister()
{
	return UObjectTreeGraphRootObject::StaticClass();
}
struct Z_Construct_UClass_UObjectTreeGraphRootObject_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/ObjectTreeGraphRootObject.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IObjectTreeGraphRootObject>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UObjectTreeGraphRootObject_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayCameras,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UObjectTreeGraphRootObject_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UObjectTreeGraphRootObject_Statics::ClassParams = {
	&UObjectTreeGraphRootObject::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UObjectTreeGraphRootObject_Statics::Class_MetaDataParams), Z_Construct_UClass_UObjectTreeGraphRootObject_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UObjectTreeGraphRootObject()
{
	if (!Z_Registration_Info_UClass_UObjectTreeGraphRootObject.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UObjectTreeGraphRootObject.OuterSingleton, Z_Construct_UClass_UObjectTreeGraphRootObject_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UObjectTreeGraphRootObject.OuterSingleton;
}
template<> GAMEPLAYCAMERAS_API UClass* StaticClass<UObjectTreeGraphRootObject>()
{
	return UObjectTreeGraphRootObject::StaticClass();
}
UObjectTreeGraphRootObject::UObjectTreeGraphRootObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UObjectTreeGraphRootObject);
UObjectTreeGraphRootObject::~UObjectTreeGraphRootObject() {}
// End Interface UObjectTreeGraphRootObject

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_ObjectTreeGraphRootObject_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UObjectTreeGraphRootObject, UObjectTreeGraphRootObject::StaticClass, TEXT("UObjectTreeGraphRootObject"), &Z_Registration_Info_UClass_UObjectTreeGraphRootObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UObjectTreeGraphRootObject), 2327080302U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_ObjectTreeGraphRootObject_h_1844069336(TEXT("/Script/GameplayCameras"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_ObjectTreeGraphRootObject_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_ObjectTreeGraphRootObject_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
