// Copyright Epic Games, Inc. All Rights Reserved.

#include "Patron_PrototypeGameMode.h"
#include "Patron_PrototypePawn.h"
#include "ArmaLazer.h"
#include "ArmaRifle.h"
#include "coleccion.h"
#include "ArmaIterator.h"
#include "ArmaBase.h"
#include "Nave.h"
#include "Engine/World.h"

APatron_PrototypeGameMode::APatron_PrototypeGameMode()
{
	// set default pawn class to our character class
	DefaultPawnClass = APatron_PrototypePawn::StaticClass();

}

void APatron_PrototypeGameMode::BeginPlay()
{
	Super::BeginPlay();

	nave = GetWorld()->SpawnActor<ANave>(ANave::StaticClass());
	nave->SetActorLocation(FVector(0.0f, -600.0f, 214.0f));
	nave->SetActorRelativeScale3D(FVector(1.5f, 2.5f, 1.5f));

	for(int i = 0; i < 1; i++)
	{
		naveClon = Cast<ANave>(nave->Clonar());
		if (naveClon)
		{
			naveClon->SetActorLocation(FVector(0.0f, 200.0f + i*800.0f, 214.0f));
			naveClon->SetActorRelativeScale3D(FVector(1.0f, 1.0f, 1.0f));
		}
	}


}

void APatron_PrototypeGameMode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void APatron_PrototypeGameMode::ClonarYAgregarArmas()
{
	for (int32 i = 0; i < 2; i++)
	{
		ArmaBas->Clonar();
		if (ArmaBas)
		{
			ArmaBas->SetActorLocation(FVector(500.0f, 0.0f + i * 200.0f, 214.0f));

			//ArmaA->PropiedadesArma(FName(*FString::Printf(TEXT("ArmaLazer_%d"), i + 1)));
			//ColeccionDeArmas->AgregarArma(ArmaA);
		}
	}


	for (int32 i = 0; i < 2; i++)
	{

		Lazer = Cast<AArmaLazer>(LazerBase->Clonar());
		if (Lazer)
		{
			Lazer->SetActorLocation(FVector(-400.0f, 0.0f + i * 300.0f, 214.0f));
			Lazer->PropiedadesArma(FName(*FString::Printf(TEXT("ArmaLazer_%d"), i + 1)));
			//ColeccionDeArmas->AgregarArma(Lazer);
		}
	}

	for (int32 i = 0; i < 2; i++)
	{
		Rifle = Cast<AArmaRifle>(RifleBase->Clonar());
		if (Rifle)
		{
			Rifle->SetActorLocation(FVector(200.0f, 0.0f + i * 200.0f, 214.0f));
			Rifle->PropiedadesArma(FName(*FString::Printf(TEXT("ArmaRifle_%d"), i + 1)));
			//ColeccionDeArmas->AgregarArma(Rifle);
		}
	}

	// Crear e iterar a través de las armas
	IIIterator* ArmaIterator = ColeccionDeArmas->CrearIterator();
	ArmaIterator->SetColeccion(ColeccionDeArmas);

	for (ArmaIterator->PrimerArma(); ArmaIterator->HayMasArmas(); ArmaIterator->SiguienteArma())
	{
		AArmaBase* ArmaActual = ArmaIterator->ArmaActual();
		if (ArmaActual)
		{
			GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Green, ArmaActual->GetActorLabel());
		}
	}
}

void APatron_PrototypeGameMode::NaveDispara()
{

}

void APatron_PrototypeGameMode::TestCrearIterator()
{
	if (ColeccionDeArmas)
	{
		IIIterator* ArmaIterator = ColeccionDeArmas->CrearIterator();
		if (ArmaIterator)
		{
			GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Green, TEXT("Iterator creado correctamente."));
		}
		else
		{
			GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Red, TEXT("Error al crear el iterator."));
		}
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Red, TEXT("ColeccionDeArmas no existe."));
	}
}

void APatron_PrototypeGameMode::TestPrimerArma()
{
	if (ColeccionDeArmas)
	{
		IIIterator* ArmaIterator = ColeccionDeArmas->CrearIterator();
		ArmaIterator->SetColeccion(ColeccionDeArmas);
		ArmaIterator->PrimerArma();

		AArmaBase* ArmaActual = ArmaIterator->ArmaActual();
		if (ArmaActual)
		{
			GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Green, FString::Printf(TEXT("Primera arma: %s"), *ArmaActual->GetActorLabel()));
		}
		else
		{
			GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Red, TEXT("Error al acceder a la primera arma."));
		}
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Red, TEXT("ColeccionDeArmas no existe."));
	}
}

void APatron_PrototypeGameMode::TestSiguienteArma()
{
	if (ColeccionDeArmas)
	{
		IIIterator* ArmaIterator = ColeccionDeArmas->CrearIterator();
		ArmaIterator->SetColeccion(ColeccionDeArmas);
		ArmaIterator->PrimerArma();
		ArmaIterator->SiguienteArma();

		AArmaBase* ArmaActual = ArmaIterator->ArmaActual();
		ArmaActual->SetActorRelativeScale3D(FVector(2.0f,2.0f,2.0f));
		if (ArmaActual)
		{
			GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Green, FString::Printf(TEXT("Siguiente arma: %s"), *ArmaActual->GetActorLabel()));
		}
		else
		{
			GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Red, TEXT("Error al acceder a la siguiente arma."));
		}
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Red, TEXT("ColeccionDeArmas no existe."));
	}
}

void APatron_PrototypeGameMode::TestArmaActual()
{
	if (ColeccionDeArmas)
	{
		IIIterator* ArmaIterator = ColeccionDeArmas->CrearIterator();
		ArmaIterator->SetColeccion(ColeccionDeArmas);
		ArmaIterator->PrimerArma();

		AArmaBase* ArmaActual = ArmaIterator->ArmaActual();
		//ArmaActual->SetActorRelativeScale3D(FVector(3.5f, 3.5f, 3.5f));
		if (ArmaActual)
		{
			GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Green, FString::Printf(TEXT("Arma actual: %s"), *ArmaActual->GetActorLabel()));
		}
		else
		{
			GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Red, TEXT("Error al obtener el arma actual."));
		}
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Red, TEXT("ColeccionDeArmas no existe."));
	}
}

void APatron_PrototypeGameMode::TestIntegracion()
{
	if (ColeccionDeArmas)
	{
		IIIterator* ArmaIterator = ColeccionDeArmas->CrearIterator();
		ArmaIterator->SetColeccion(ColeccionDeArmas);
		GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Yellow, TEXT("Iniciando prueba de integración del iterador:"));
		for (ArmaIterator->PrimerArma(); ArmaIterator->HayMasArmas(); ArmaIterator->SiguienteArma())
		{
			AArmaBase* ArmaActual = ArmaIterator->ArmaActual();
			//ArmaActual->SetActorRelativeScale3D(FVector(3.5f, 3.5f, 3.5f));
			if (ArmaActual)
			{
				
				GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Green, FString::Printf(TEXT("Iterando arma: %s"), *ArmaActual->GetActorLabel()));
			}
			else
			{
				
				//GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Red, TEXT("Error al iterar la arma actual."));
			}

		}
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Red, TEXT("Coleccion De Armas no existe."));
	}
}

