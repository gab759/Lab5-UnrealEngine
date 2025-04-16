// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "Components/PointLightComponent.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyActor.generated.h"

UCLASS()
class UNREAL_GAB_API AMyActor : public AActor
{
	GENERATED_BODY()

public:
	AMyActor();

	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Custom1")
	int MyNumber;

	UFUNCTION(BlueprintCallable, Category = "Custom1")
	int AddNumbers(int A, int B);

	// Componente de luz visible en el editor
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Custom1")
	UPointLightComponent* MyPointLight;

	// Función que puedes llamar desde Blueprint para encender/apagar la luz
	UFUNCTION(BlueprintCallable, Category = "Custom1")
	void ToggleLight();
};