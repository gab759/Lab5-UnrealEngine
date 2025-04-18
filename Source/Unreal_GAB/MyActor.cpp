// Fill out your copyright notice in the Description page of Project Settings.


#include "MyActor.h"
#include "Components/PointLightComponent.h"
#include "Components/AudioComponent.h"
#include "Sound/SoundBase.h"

// Sets default values
AMyActor::AMyActor()
{
	PrimaryActorTick.bCanEverTick = true;
	MyNumber = 10;

	MyPointLight = CreateDefaultSubobject<UPointLightComponent>(TEXT("MyPointLight"));
	MyPointLight->SetupAttachment(RootComponent);
	MyPointLight->SetIntensity(3000.0f);
	MyPointLight->SetLightColor(FColor::White);

	// CREACIÓN DEL COMPONENTE DE SONIDO
	MyAudioComponent = CreateDefaultSubobject<UAudioComponent>(TEXT("MyAudioComponent"));
	MyAudioComponent->SetupAttachment(RootComponent);
	MyAudioComponent->bAutoActivate = false;
}

int AMyActor::AddNumbers(int A, int B)
{
	return A + B;
}

void AMyActor::ToggleLight()
{
	if (MyPointLight)
	{
		bool bIsVisible = MyPointLight->IsVisible();
		MyPointLight->SetVisibility(!bIsVisible);
	}
}

// FUNCIÓN PARA REPRODUCIR EL SONIDO
void AMyActor::PlaySound() // <-- NUEVO
{
	if (MyAudioComponent && !MyAudioComponent->IsPlaying())
	{
		MyAudioComponent->Play();
	}
}