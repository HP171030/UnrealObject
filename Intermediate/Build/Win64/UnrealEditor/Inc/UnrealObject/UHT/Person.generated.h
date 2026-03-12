// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Person.h"

#ifdef UNREALOBJECT_Person_generated_h
#error "Person.generated.h already included, missing '#pragma once' in Person.h"
#endif
#define UNREALOBJECT_Person_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPerson ******************************************************************
UNREALOBJECT_API UClass* Z_Construct_UClass_UPerson_NoRegister();

#define FID_Users_lhp_Documents_Unreal_Projects_UnrealObject_Source_UnrealObject_Person_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPerson(); \
	friend struct Z_Construct_UClass_UPerson_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALOBJECT_API UClass* Z_Construct_UClass_UPerson_NoRegister(); \
public: \
	DECLARE_CLASS2(UPerson, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealObject"), Z_Construct_UClass_UPerson_NoRegister) \
	DECLARE_SERIALIZER(UPerson)


#define FID_Users_lhp_Documents_Unreal_Projects_UnrealObject_Source_UnrealObject_Person_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPerson(UPerson&&) = delete; \
	UPerson(const UPerson&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPerson); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPerson); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPerson) \
	NO_API virtual ~UPerson();


#define FID_Users_lhp_Documents_Unreal_Projects_UnrealObject_Source_UnrealObject_Person_h_12_PROLOG
#define FID_Users_lhp_Documents_Unreal_Projects_UnrealObject_Source_UnrealObject_Person_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_lhp_Documents_Unreal_Projects_UnrealObject_Source_UnrealObject_Person_h_15_INCLASS_NO_PURE_DECLS \
	FID_Users_lhp_Documents_Unreal_Projects_UnrealObject_Source_UnrealObject_Person_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPerson;

// ********** End Class UPerson ********************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_lhp_Documents_Unreal_Projects_UnrealObject_Source_UnrealObject_Person_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
