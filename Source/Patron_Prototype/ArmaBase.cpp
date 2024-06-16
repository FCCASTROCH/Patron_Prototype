// Fill out your copyright notice in the Description page of Project Settings.


#include "ArmaBase.h"
#include "Engine/World.h"
// Sets default values
AArmaBase::AArmaBase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> NaveEnemigoMeshAsset(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Sphere.Shape_Sphere'"));
	NaveEnemigoMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShipMesh"));
	NaveEnemigoMesh->SetupAttachment(RootComponent);
	NaveEnemigoMesh->SetStaticMesh(NaveEnemigoMeshAsset.Object);
	RootComponent = NaveEnemigoMesh;
	VidaMaxima = 100.f;
	bInitialized = false;
	velocidad = 600.0f;
}

// Called when the game starts or when spawned
void AArmaBase::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AArmaBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Mover(DeltaTime);
	//GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Red, FString::Printf(TEXT("Vida: %f"), VidaMaxima));
}

AActor* AArmaBase::Clonar()
{
	//Engendramos un clon del arma
	AArmaBase* Clon = GetWorld()->SpawnActor<AArmaBase>(GetClass());
	if (Clon)
	{
		
	/*	Clon->SetActorTransform(GetActorTransform());
		Clon->PropiedadesArma(GetFName());
		Clon->SetUltimaPosicionJugador(UltimaPosicionJugador);
		Clon->VidaMaxima = VidaMaxima;
		Clon->velocidad = velocidad;*/
		
	}
	return Clon;
}

void AArmaBase::PropiedadesArma(FName Name)
{
	SetActorLabel(Name.ToString());
}

void AArmaBase::DisminuirVida(float Cantidad)
{
	// Disminuir la vida actual
	VidaMaxima -= Cantidad;

	// Verificar si la vida actual es menor o igual a cero
	if (VidaMaxima <= 0.0f)
	{
		// Destruir la nave enemiga si su vida es igual o menor a cero
		Destroy();
	}
}
void AArmaBase::Mover(float DeltaTime)
{
	if (!bInitialized)
	{
		FVector StartLocation = FVector(GetActorLocation().X,GetActorLocation().Y,214.0f);
		FVector EndLocation = UltimaPosicionJugador;
		
		Direction = (EndLocation - StartLocation).GetSafeNormal();
		bInitialized = true;
	}
	FVector NewLocation = GetActorLocation() + Direction * velocidad * DeltaTime;
	SetActorLocation(NewLocation);
}
void AArmaBase::SetUltimaPosicionJugador(FVector Posicion)
{
	UltimaPosicionJugador = Posicion;
}


