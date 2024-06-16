// Fill out your copyright notice in the Description page of Project Settings.


#include "coleccion.h"
#include "ArmaBase.h"
#include "ArmaRifle.h"
#include "ArmaLazer.h"
#include "ArmaIterator.h"
// Sets default values
Acoleccion::Acoleccion()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void Acoleccion::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void Acoleccion::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

IIIterator* Acoleccion::CrearIterator()
{

	return GetWorld()->SpawnActor<AArmaIterator>(AArmaIterator::StaticClass());

}

int Acoleccion::NumeroDeArmas()
{
	return armas.Num();
}

AArmaBase* Acoleccion::ObtenerArma(int indice)
{
	if (indice >= 0 && indice < armas.Num())
	{
		return armas[indice];
	}
	return nullptr;
}

void Acoleccion::AgregarArma(AArmaBase* NuevaArma)
{
	armas.Add(NuevaArma);
}

