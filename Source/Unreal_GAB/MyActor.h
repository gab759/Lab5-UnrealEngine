// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/PointLightComponent.h"
#include "Components/AudioComponent.h"
#include "Sound/SoundBase.h"

#include "MyActor.generated.h"

UCLASS()
class UNREAL_GAB_API AMyActor : public AActor
{
	GENERATED_BODY()

public:
	AMyActor();

	// Número visible en Blueprint
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Custom1")
	int MyNumber;

	// Luz
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Custom1")
	UPointLightComponent* MyPointLight;

	// Componente de sonido (Audio)
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Sound")
	UAudioComponent* MyAudioComponent;

	// Funciones Blueprint
	UFUNCTION(BlueprintCallable, Category = "Custom1")
	int AddNumbers(int A, int B);

	UFUNCTION(BlueprintCallable, Category = "Custom1")
	void ToggleLight();

	// Nueva función para reproducir sonido
	UFUNCTION(BlueprintCallable, Category = "Sound")
	void PlaySound();
};
