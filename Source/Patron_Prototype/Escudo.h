// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "IPrototype.h"
#include "Escudo.generated.h"

UCLASS()
class PATRON_PROTOTYPE_API AEscudo : public AActor, public IIPrototype
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEscudo();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* EscudoMesh;
	AActor* Clonar() override;
	void MoverAlrededordeNave(float DeltaTime);
	float VelocidadOrbita;
	void SetNave(class ANave* Nave) { NaveR = Nave; }

	float RadioOrbita;
	float AnguloOrbitaActual;
	class ANave* NaveR;
};
