// Fill out your copyright notice in the Description page of Project Settings.


#include "Escudo.h"
#include "Nave.h"
#include "Engine/World.h"
// Sets default values
AEscudo::AEscudo()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> EscudoMeshAsset(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Wedge_B.Shape_Wedge_B'"));
	if (EscudoMeshAsset.Succeeded())
	{
		EscudoMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("EscudoMesh"));
		EscudoMesh->SetStaticMesh(EscudoMeshAsset.Object);
	}
	RootComponent = EscudoMesh;
	VelocidadOrbita = 10.0f;
	RadioOrbita = 150.0f;
	AnguloOrbitaActual = 0.0f;

}

// Called when the game starts or when spawned
void AEscudo::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEscudo::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	MoverAlrededordeNave(DeltaTime);
}

AActor* AEscudo::Clonar()
{
	AEscudo* Clon = GetWorld()->SpawnActor<AEscudo>(GetClass());
	if (Clon)
	{
		// Copiamos las propiedades que necesitemos al clon
		Clon->SetActorLocation(FVector(GetActorLocation().X + 100, GetActorLocation().Y + 100, 214.0f));
		Clon->SetActorTransform(GetActorTransform());
		Clon->SetNave(NaveR);
		// Copiar otras propiedades si es necesario
	}
	return Clon;
}

void AEscudo::MoverAlrededordeNave(float DeltaTime)
{
	if (NaveR)
	{
		FVector NavePos = NaveR->GetActorLocation();
		float AnguloOrbita = AnguloOrbitaActual + VelocidadOrbita * DeltaTime;
		FVector OffsetOrbita = FVector(FMath::Sin(AnguloOrbita) * RadioOrbita, FMath::Cos(AnguloOrbita) * RadioOrbita, 0.0f);
		FVector NuevaPos = NavePos + OffsetOrbita;
		SetActorLocation(NuevaPos, true, nullptr, ETeleportType::None);
		AnguloOrbitaActual = AnguloOrbita;
	}
}
