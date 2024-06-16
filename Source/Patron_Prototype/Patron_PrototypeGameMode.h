// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Patron_PrototypeGameMode.generated.h"

UCLASS(MinimalAPI)
class APatron_PrototypeGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	APatron_PrototypeGameMode();
protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;

protected:
	UPROPERTY(VisibleAnywhere, Category = "Game Mode")
	class AArmaBase* ArmaA;
	UPROPERTY(VisibleAnywhere,Category ="Game Mode")
	class AArmaBase* ArmaBas;
	UPROPERTY(VisibleAnywhere, Category = "Game Mode")
	class AArmaLazer* LazerBase;

	UPROPERTY(VisibleAnywhere, Category = "Game Mode")
	class AArmaLazer* Lazer;

	UPROPERTY(VisibleAnywhere, Category = "Game Mode")
	class AArmaRifle* RifleBase;

	UPROPERTY(VisibleAnywhere, Category = "Game Mode")
	class AArmaRifle* Rifle;

	UPROPERTY(VisibleAnywhere, Category = "Game Mode")
	class Acoleccion* ColeccionDeArmas;


	class ANave* nave;
	class ANave* naveClon;

	void ClonarYAgregarArmas();
	void NaveDispara();
	//pruebas
	void TestCrearIterator();
	void TestPrimerArma();
	void TestSiguienteArma();
	void TestArmaActual();
	void TestIntegracion();


};



