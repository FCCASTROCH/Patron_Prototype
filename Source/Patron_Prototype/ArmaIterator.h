// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "IIterator.h"
#include "ArmaIterator.generated.h"

UCLASS()
class PATRON_PROTOTYPE_API AArmaIterator : public AActor,public IIIterator
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AArmaIterator();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	virtual void SetColeccion(class Acoleccion* NuevaColeccion) override;

	virtual void PrimerArma() override;
	virtual void SiguienteArma() override;
	virtual bool HayMasArmas() override;
	virtual AArmaBase* ArmaActual() override;

	class Acoleccion* coleccion;
	class IIColeccion* Coleccion;
	int indiceActual;
};
