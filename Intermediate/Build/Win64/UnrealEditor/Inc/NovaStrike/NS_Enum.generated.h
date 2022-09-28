// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NOVASTRIKE_NS_Enum_generated_h
#error "NS_Enum.generated.h already included, missing '#pragma once' in NS_Enum.h"
#endif
#define NOVASTRIKE_NS_Enum_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_NovaStrike_Source_NovaStrike_NS_Enum_h


#define FOREACH_ENUM_ECOMBATSTATE(op) \
	op(ECombatState::Neutral) \
	op(ECombatState::InCombat) 

enum class ECombatState : uint8;
template<> NOVASTRIKE_API UEnum* StaticEnum<ECombatState>();

#define FOREACH_ENUM_ECOMBATTYPE(op) \
	op(ECombatType::Normal) \
	op(ECombatType::Nova) 

enum class ECombatType : uint8;
template<> NOVASTRIKE_API UEnum* StaticEnum<ECombatType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
