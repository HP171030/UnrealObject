// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Student.h"

#ifdef UNREALOBJECT_Student_generated_h
#error "Student.generated.h already included, missing '#pragma once' in Student.h"
#endif
#define UNREALOBJECT_Student_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UStudent *****************************************************************
UNREALOBJECT_API UClass* Z_Construct_UClass_UStudent_NoRegister();

#define FID_Users_lhp_Documents_Unreal_Projects_UnrealObject_Source_UnrealObject_Student_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStudent(); \
	friend struct Z_Construct_UClass_UStudent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALOBJECT_API UClass* Z_Construct_UClass_UStudent_NoRegister(); \
public: \
	DECLARE_CLASS2(UStudent, UPerson, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealObject"), Z_Construct_UClass_UStudent_NoRegister) \
	DECLARE_SERIALIZER(UStudent)


#define FID_Users_lhp_Documents_Unreal_Projects_UnrealObject_Source_UnrealObject_Student_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UStudent(UStudent&&) = delete; \
	UStudent(const UStudent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStudent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStudent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UStudent) \
	NO_API virtual ~UStudent();


#define FID_Users_lhp_Documents_Unreal_Projects_UnrealObject_Source_UnrealObject_Student_h_12_PROLOG
#define FID_Users_lhp_Documents_Unreal_Projects_UnrealObject_Source_UnrealObject_Student_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_lhp_Documents_Unreal_Projects_UnrealObject_Source_UnrealObject_Student_h_15_INCLASS_NO_PURE_DECLS \
	FID_Users_lhp_Documents_Unreal_Projects_UnrealObject_Source_UnrealObject_Student_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UStudent;

// ********** End Class UStudent *******************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_lhp_Documents_Unreal_Projects_UnrealObject_Source_UnrealObject_Student_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
