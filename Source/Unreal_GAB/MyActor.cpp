// Fill out your copyright notice in the Description page of Project Settings.


#include "MyActor.h"
#include "Components/PointLightComponent.h"
// Sets default values
AMyActor::AMyActor()
{
	PrimaryActorTick.bCanEverTick = true;
	MyNumber = 10;

	MyPointLight = CreateDefaultSubobject<UPointLightComponent>(TEXT("MyPointLight"));
	MyPointLight->SetupAttachment(RootComponent);
	MyPointLight->SetIntensity(3000.0f);
	MyPointLight->SetLightColor(FColor::White);
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