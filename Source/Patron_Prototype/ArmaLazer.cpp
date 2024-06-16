// Fill out your copyright notice in the Description page of Project Settings.


#include "ArmaLazer.h"
#include "Components/staticMeshComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "Engine/StaticMesh.h"
AArmaLazer::AArmaLazer()
{
	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshNaveEnemigocaza1(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cone.Shape_Cone'"));
	NaveEnemigoMesh->SetStaticMesh(MeshNaveEnemigocaza1.Object);

	DistanciaLazer = 10.0f;
	Municion = 100;
}

void AArmaLazer::BeginPlay()
{
	Super::BeginPlay();
	GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Red, FString::Printf(TEXT("Distancia lazer: %f"), DistanciaLazer));
	GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Red, FString::Printf(TEXT("Municion: %d"), Municion));
}

void AArmaLazer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

