// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "IPrototype.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "ArmaBase.generated.h"

UCLASS()
class PATRON_PROTOTYPE_API AArmaBase : public AActor, public IIPrototype
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AArmaBase();
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Projectile, meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* NaveEnemigoMesh;
	void DisminuirVida(float Cantidad);
	float VidaMaxima;
public:
	//Funcion de la interfaz
	AActor* Clonar() override;


	//Funcion para establecer las propiedades del arma
	virtual void PropiedadesArma(FName Name);
	virtual void Mover(float DeltaTime);
	void SetUltimaPosicionJugador(FVector Posicion);

private:
	float velocidad;
	FVector UltimaPosicionJugador;
	FVector Direction;
	bool bInitialized;
};
