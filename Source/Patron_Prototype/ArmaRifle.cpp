// Fill out your copyright notice in the Description page of Project Settings.


#include "ArmaRifle.h"

AArmaRifle::AArmaRifle()
{
    PrimaryActorTick.bCanEverTick = true;
    static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshNaveEnemigocaza1(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));
    NaveEnemigoMesh->SetStaticMesh(MeshNaveEnemigocaza1.Object);

    // Initialize rifle-specific properties
    Danio = 50.0f;
    Municion = 30;
}

void AArmaRifle::BeginPlay()
{
    Super::BeginPlay();
    GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Cyan, FString::Printf(TEXT("Daño: %f"), Danio));
    GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Cyan, FString::Printf(TEXT("Municion: %d"), Municion));
}

void AArmaRifle::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}


