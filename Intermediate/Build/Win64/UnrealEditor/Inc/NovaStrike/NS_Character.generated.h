// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAnimMontage;
struct FAttack;
class ANS_Character;
class UPrimitiveComponent;
class AActor;
struct FHitResult;
enum class ECombatState : uint8;
#ifdef NOVASTRIKE_NS_Character_generated_h
#error "NS_Character.generated.h already included, missing '#pragma once' in NS_Character.h"
#endif
#define NOVASTRIKE_NS_Character_generated_h

#define FID_NovaStrike_Source_NovaStrike_NS_Character_h_16_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAttack_Statics; \
	NOVASTRIKE_API static class UScriptStruct* StaticStruct();


template<> NOVASTRIKE_API UScriptStruct* StaticStruct<struct FAttack>();

#define FID_NovaStrike_Source_NovaStrike_NS_Character_h_58_SPARSE_DATA
#define FID_NovaStrike_Source_NovaStrike_NS_Character_h_58_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execTryBeginTargetting); \
	DECLARE_FUNCTION(execSetInvincible); \
	DECLARE_FUNCTION(execResetSteering); \
	DECLARE_FUNCTION(execEnableSteering); \
	DECLARE_FUNCTION(execEnterNovaMode); \
	DECLARE_FUNCTION(execTakeDamage); \
	DECLARE_FUNCTION(execResetCombo); \
	DECLARE_FUNCTION(execContinueCombat); \
	DECLARE_FUNCTION(execGetCurrentAttack); \
	DECLARE_FUNCTION(execEndCombat); \
	DECLARE_FUNCTION(execAttack); \
	DECLARE_FUNCTION(execGetNearestCharacter); \
	DECLARE_FUNCTION(execSphereTraceForCharacters); \
	DECLARE_FUNCTION(execStopSprint); \
	DECLARE_FUNCTION(execSprint); \
	DECLARE_FUNCTION(execAttackBoxOverlapBegin); \
	DECLARE_FUNCTION(execSetCurrentCombatState);


#define FID_NovaStrike_Source_NovaStrike_NS_Character_h_58_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execTryBeginTargetting); \
	DECLARE_FUNCTION(execSetInvincible); \
	DECLARE_FUNCTION(execResetSteering); \
	DECLARE_FUNCTION(execEnableSteering); \
	DECLARE_FUNCTION(execEnterNovaMode); \
	DECLARE_FUNCTION(execTakeDamage); \
	DECLARE_FUNCTION(execResetCombo); \
	DECLARE_FUNCTION(execContinueCombat); \
	DECLARE_FUNCTION(execGetCurrentAttack); \
	DECLARE_FUNCTION(execEndCombat); \
	DECLARE_FUNCTION(execAttack); \
	DECLARE_FUNCTION(execGetNearestCharacter); \
	DECLARE_FUNCTION(execSphereTraceForCharacters); \
	DECLARE_FUNCTION(execStopSprint); \
	DECLARE_FUNCTION(execSprint); \
	DECLARE_FUNCTION(execAttackBoxOverlapBegin); \
	DECLARE_FUNCTION(execSetCurrentCombatState);


#define FID_NovaStrike_Source_NovaStrike_NS_Character_h_58_EVENT_PARMS \
	struct NS_Character_eventZoomCamera_Parms \
	{ \
		float DesiredArmLength; \
	};


#define FID_NovaStrike_Source_NovaStrike_NS_Character_h_58_CALLBACK_WRAPPERS
#define FID_NovaStrike_Source_NovaStrike_NS_Character_h_58_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANS_Character(); \
	friend struct Z_Construct_UClass_ANS_Character_Statics; \
public: \
	DECLARE_CLASS(ANS_Character, ANovaStrikeCharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NovaStrike"), NO_API) \
	DECLARE_SERIALIZER(ANS_Character)


#define FID_NovaStrike_Source_NovaStrike_NS_Character_h_58_INCLASS \
private: \
	static void StaticRegisterNativesANS_Character(); \
	friend struct Z_Construct_UClass_ANS_Character_Statics; \
public: \
	DECLARE_CLASS(ANS_Character, ANovaStrikeCharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NovaStrike"), NO_API) \
	DECLARE_SERIALIZER(ANS_Character)


#define FID_NovaStrike_Source_NovaStrike_NS_Character_h_58_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ANS_Character(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ANS_Character) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANS_Character); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANS_Character); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANS_Character(ANS_Character&&); \
	NO_API ANS_Character(const ANS_Character&); \
public:


#define FID_NovaStrike_Source_NovaStrike_NS_Character_h_58_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANS_Character(ANS_Character&&); \
	NO_API ANS_Character(const ANS_Character&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANS_Character); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANS_Character); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ANS_Character)


#define FID_NovaStrike_Source_NovaStrike_NS_Character_h_55_PROLOG \
	FID_NovaStrike_Source_NovaStrike_NS_Character_h_58_EVENT_PARMS


#define FID_NovaStrike_Source_NovaStrike_NS_Character_h_58_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_NovaStrike_Source_NovaStrike_NS_Character_h_58_SPARSE_DATA \
	FID_NovaStrike_Source_NovaStrike_NS_Character_h_58_RPC_WRAPPERS \
	FID_NovaStrike_Source_NovaStrike_NS_Character_h_58_CALLBACK_WRAPPERS \
	FID_NovaStrike_Source_NovaStrike_NS_Character_h_58_INCLASS \
	FID_NovaStrike_Source_NovaStrike_NS_Character_h_58_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_NovaStrike_Source_NovaStrike_NS_Character_h_58_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_NovaStrike_Source_NovaStrike_NS_Character_h_58_SPARSE_DATA \
	FID_NovaStrike_Source_NovaStrike_NS_Character_h_58_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_NovaStrike_Source_NovaStrike_NS_Character_h_58_CALLBACK_WRAPPERS \
	FID_NovaStrike_Source_NovaStrike_NS_Character_h_58_INCLASS_NO_PURE_DECLS \
	FID_NovaStrike_Source_NovaStrike_NS_Character_h_58_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NOVASTRIKE_API UClass* StaticClass<class ANS_Character>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_NovaStrike_Source_NovaStrike_NS_Character_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
