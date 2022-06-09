// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

/**
 * 
 */
UENUM()

enum class ECombatState : uint8 {
	Neutral,
	InCombat
};

class NOVASTRIKE_API NS_Enum
{
public:
	NS_Enum();
	~NS_Enum();
};
