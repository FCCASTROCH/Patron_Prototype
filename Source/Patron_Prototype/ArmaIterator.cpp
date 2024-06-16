// Fill out your copyright notice in the Description page of Project Settings.


#include "ArmaIterator.h"
#include "IColeccion.h"
#include "ArmaBase.h"
#include "coleccion.h"
// Sets default values
AArmaIterator::AArmaIterator()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
    indiceActual = 0;
}

// Called when the game starts or when spawned
void AArmaIterator::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AArmaIterator::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AArmaIterator::SetColeccion(Acoleccion* NuevaColeccion)
{
    coleccion = NuevaColeccion;
    PrimerArma(); // Reinicia la posición del iterador
}

void AArmaIterator::PrimerArma()
{
    indiceActual = 0;
}

void AArmaIterator::SiguienteArma()
{
    if (HayMasArmas())
    {
        indiceActual++;
    }
}

bool AArmaIterator::HayMasArmas()
{
    return coleccion && indiceActual < coleccion->NumeroDeArmas();
}

AArmaBase* AArmaIterator::ArmaActual()
{
    if (coleccion && indiceActual < coleccion->NumeroDeArmas())
    {
        return coleccion->ObtenerArma(indiceActual);
    }
    return nullptr;
}
