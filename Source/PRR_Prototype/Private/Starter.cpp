// Fill out your copyright notice in the Description page of Project Settings.


#include "Starter.h"
#include "KismetRenderingLibrary.h"

// Sets default values for this component's properties
UStarter::UStarter()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


ENGINE_API TArray<FLinearColor> UKismetRenderingLibrary::ReadRenderTargetRawPixelArea(UObject* WorldContextObject, UTextureRenderTarget2D* TextureRenderTarget, int32 MinX, int32 MinY, int32 MaxX, int32 MaxY, bool bNormalize /*= true*/)
{
	TArray<FColor> Samples;
	TArray<FLinearColor> LinearSamples;

	switch (ReadRenderTargetHelper(Samples, LinearSamples, WorldContextObject, TextureRenderTarget, MinX, MinY, MaxX, MaxY, bNormalize))
	{ //Blue 8 Green 8 Red 8 Alpha 8 Below me
	case PF_B8G8R8A8: 
		check(Samples.Num() > 0 && LinearSamples.Num() == 0);
		LinearSamples.SetNum(Samples.Num());
		for (int Idx = 0; Idx < Samples.Num(); Idx++) //Makes an array of samples to return
		{
			LinearSamples[Idx] = FLinearColor(float(Samples[Idx].R), float(Samples[Idx].G), float(Samples[Idx].B), float(Samples[Idx].A));
		}
		return LinearSamples;

	case PF_FloatRGBA:
		check(Samples.Num() == 0 && LinearSamples.Num() > 0);
		return LinearSamples;

	case PF_Unknown:

	default:
		return TArray<FLinearColor>();
	}
}





// Called when the game starts
void UStarter::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UStarter::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

