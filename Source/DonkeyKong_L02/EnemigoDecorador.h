// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Enemigo.h" // Include the header file for the Enemigo class
#include "EnemigoDecorador.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UEnemigoDecorador : public UInterface
{
	GENERATED_BODY()
};

/**
 *
 */
class DONKEYKONG_L02_API IEnemigoDecorador
{
	GENERATED_BODY()

public:
	AEnemigo* Enemigo;

	// Abstract method for vigilance
	virtual void Vigilar() = 0;
};
