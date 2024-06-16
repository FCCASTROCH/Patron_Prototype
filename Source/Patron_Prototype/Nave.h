// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "IPrototype.h"
#include "Nave.generated.h"

UCLASS()
class PATRON_PROTOTYPE_API ANave : public AActor, public IIPrototype
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ANave();
	UStaticMeshComponent* NaveMesh;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	float Vida;
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	AActor* Clonar() override;

	float MovementSpeed;

	class AArmaRifle* ArmaRifle;
	class AArmaRifle* ArmaRifleClon;

	class AArmaLazer* ArmaLaser;
	class AArmaLazer* ArmaLaserClon;

	FVector PJugador;
	float TiempoDisparo;
	bool bCanFire;
	int NumberFired;
	int MaxProjectile;
	int timer;
	void DisminuirVida(float Cantidad);
	void Disparar();
	void Mover(float DeltaTime);
	void ResetCanFire();
	class AEscudo* Escud;
	class AEscudo* EscudClon;
	FTimerHandle TimerHandle;
};
