// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "IColeccion.h"
#include "coleccion.generated.h"

UCLASS()
class PATRON_PROTOTYPE_API Acoleccion : public AActor, public IIColeccion
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	Acoleccion();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	virtual class IIIterator* CrearIterator() override;
	virtual int32 NumeroDeArmas() override;
	virtual class AArmaBase* ObtenerArma(int indice) override;

	void AgregarArma(AArmaBase* NuevaArma);

	TArray<AArmaBase*> armas;


};
