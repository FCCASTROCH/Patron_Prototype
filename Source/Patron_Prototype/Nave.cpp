// Fill out your copyright notice in the Description page of Project Settings.


#include "Nave.h"
#include "ArmaBase.h"
#include "ArmaRifle.h"
#include "ArmaLazer.h"
//#include "ProyectilE.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/World.h"
#include "Escudo.h"
// Sets default values
ANave::ANave()
{
    // Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
    PrimaryActorTick.bCanEverTick = true;
    static ConstructorHelpers::FObjectFinder<UStaticMesh> NaveMeshAsset(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Torus.Shape_Torus'"));
    if (NaveMeshAsset.Succeeded())
    {
        NaveMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("NaveMesh"));
        NaveMesh->SetStaticMesh(NaveMeshAsset.Object);
    }
    RootComponent = NaveMesh;
    Vida = 100.f;
    bCanFire = true;
    TiempoDisparo = 2.0f;
    NumberFired = 0;
    MaxProjectile = 18;
    timer = 0;
    MovementSpeed= 110.0f;
}

AActor* ANave::Clonar()
{
    ANave* Clon = GetWorld()->SpawnActor<ANave>(GetClass());
    if (Clon)
    {
        // Copiamos las propiedades que necesitemos al clon
        Clon->SetActorTransform(GetActorTransform());
        // Copiar otras propiedades si es necesario
    }
    return Clon;
}

// Called when the game starts or when spawned
void ANave::BeginPlay()
{
    Super::BeginPlay();
    ArmaRifle = GetWorld()->SpawnActor<AArmaRifle>(AArmaRifle::StaticClass());
    ArmaLaser = GetWorld()->SpawnActor<AArmaLazer>(AArmaLazer::StaticClass());
    Escud = GetWorld()->SpawnActor<AEscudo>(AEscudo::StaticClass());
}

// Called every frame
void ANave::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
    Disparar();
    Mover(DeltaTime);
}

void ANave::DisminuirVida(float Cantidad)
{
    // Disminuir la vida actual
    Vida -= Cantidad;

    if (Vida == 50) {
        for (int i = 0; i < 1; i++) {
            EscudClon = Cast<AEscudo>(Escud->Clonar());
            if (EscudClon)
            {

                EscudClon->SetActorLocation(FVector(GetActorLocation().X + 100, GetActorLocation().Y + 100, 214.0f));
             
                EscudClon->SetActorRelativeScale3D(FVector(1.0f, 1.0f, 1.0f));
            }
        }
    }
    if (Vida <= 0)
    {
        
        Destroy();
    }
}

void ANave::Disparar()
{
    if (bCanFire && NumberFired < MaxProjectile)
    {
        bCanFire = false;

        APawn* PlayerPawn = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);
        if (PlayerPawn)
        {
            PJugador = PlayerPawn->GetActorLocation();
        }

        UWorld* const World = GetWorld();
        if (World != NULL)
        {

            FRotator Rotation = GetActorRotation();
            for (int i = 0; i < 1; i++){
                ArmaRifleClon = Cast<AArmaRifle>(ArmaRifle->Clonar());
            
                if (ArmaRifleClon)
                {

                ArmaRifleClon->SetActorLocation(FVector(GetActorLocation().X+200.0f, GetActorLocation().Y+i*200.0f, 214.0f));
                ArmaRifleClon->SetActorRotation(Rotation);
                ArmaRifleClon->SetUltimaPosicionJugador(PJugador);
                ArmaRifleClon->SetActorRelativeScale3D(FVector(1.0f, 1.0f, 1.0f));
            }

        }
           
            for (int i = 0; i < 2; i++) {
                ArmaLaserClon = Cast<AArmaLazer>(ArmaLaser->Clonar());

                if (ArmaLaserClon)
                {
                    ArmaLaserClon->SetActorLocation(FVector(GetActorLocation().X-200.0f, GetActorLocation().Y+i*200.0f, 214.0f));
                    ArmaLaserClon->SetActorRotation(Rotation);
                    ArmaLaserClon->SetUltimaPosicionJugador(PJugador);
                    ArmaLaserClon->SetActorRelativeScale3D(FVector(1.0f, 1.0f, 1.0f));
                }
            }
          
           
            GetWorldTimerManager().SetTimer(TimerHandle, this, &ANave::ResetCanFire, TiempoDisparo, false); // Cambiar cada cuanto habrán bombas
        }
    }
}

void ANave::Mover(float DeltaTime)
{

        // Calculate the movement direction
        FVector MovementDirection = GetActorForwardVector();

        // Calculate the new location
        FVector NewLocation = GetActorLocation() + (MovementDirection * DeltaTime * MovementSpeed);

        // Update the actor's location
        SetActorLocation(NewLocation);
}


void ANave::ResetCanFire()
{
    bCanFire = true;
}
