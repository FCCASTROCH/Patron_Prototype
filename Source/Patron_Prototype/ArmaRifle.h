// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ArmaBase.h"
#include "ArmaRifle.generated.h"

/**
 * 
 */
UCLASS()
class PATRON_PROTOTYPE_API AArmaRifle : public AArmaBase
{
	GENERATED_BODY()

public:
    // Sets default values for this actor's properties
    AArmaRifle();
    UStaticMeshComponent* Mesh;
protected:
    // Called when the game starts or when spawned
    virtual void BeginPlay() override;

public:
    // Called every frame
    virtual void Tick(float DeltaTime) override;

protected:

    //Propiedades del arma
    float Danio;
    int32 Municion;

};
