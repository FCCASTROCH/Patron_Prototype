// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "IColeccion.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UIColeccion : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class PATRON_PROTOTYPE_API IIColeccion
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	virtual class IIIterator* CrearIterator() = 0;
	virtual int32 NumeroDeArmas() = 0;
	virtual class AArmaBase* ObtenerArma(int indice) = 0;
};
