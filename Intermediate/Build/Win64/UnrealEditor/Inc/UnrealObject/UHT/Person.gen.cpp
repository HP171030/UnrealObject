// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealObject/Person.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodePerson() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UNREALOBJECT_API UClass* Z_Construct_UClass_UPerson();
UNREALOBJECT_API UClass* Z_Construct_UClass_UPerson_NoRegister();
UPackage* Z_Construct_UPackage__Script_UnrealObject();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPerson ******************************************************************
void UPerson::StaticRegisterNativesUPerson()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UPerson;
UClass* UPerson::GetPrivateStaticClass()
{
	using TClass = UPerson;
	if (!Z_Registration_Info_UClass_UPerson.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("Person"),
			Z_Registration_Info_UClass_UPerson.InnerSingleton,
			StaticRegisterNativesUPerson,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UPerson.InnerSingleton;
}
UClass* Z_Construct_UClass_UPerson_NoRegister()
{
	return UPerson::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPerson_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Person.h" },
		{ "ModuleRelativePath", "Person.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "ModuleRelativePath", "Person.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPerson>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPerson_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPerson, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPerson_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPerson_Statics::NewProp_Name,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPerson_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPerson_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_UnrealObject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPerson_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPerson_Statics::ClassParams = {
	&UPerson::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPerson_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPerson_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPerson_Statics::Class_MetaDataParams), Z_Construct_UClass_UPerson_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPerson()
{
	if (!Z_Registration_Info_UClass_UPerson.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPerson.OuterSingleton, Z_Construct_UClass_UPerson_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPerson.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPerson);
UPerson::~UPerson() {}
// ********** End Class UPerson ********************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_lhp_Documents_Unreal_Projects_UnrealObject_Source_UnrealObject_Person_h__Script_UnrealObject_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPerson, UPerson::StaticClass, TEXT("UPerson"), &Z_Registration_Info_UClass_UPerson, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPerson), 3326164031U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_lhp_Documents_Unreal_Projects_UnrealObject_Source_UnrealObject_Person_h__Script_UnrealObject_2798385001(TEXT("/Script/UnrealObject"),
	Z_CompiledInDeferFile_FID_Users_lhp_Documents_Unreal_Projects_UnrealObject_Source_UnrealObject_Person_h__Script_UnrealObject_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_lhp_Documents_Unreal_Projects_UnrealObject_Source_UnrealObject_Person_h__Script_UnrealObject_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
