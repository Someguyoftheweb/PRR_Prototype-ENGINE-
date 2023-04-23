// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include <string>
#include <bitset>
#include "Chaos/Pair.h"
#include "Components/ActorComponent.h"
#include "IntToStringResource.generated.h"



UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class PRR_PROTOTYPE_API UIntToStringResource : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UIntToStringResource();


	UFUNCTION(BlueprintCallable, Category = "Binary")
		FString RequestBitmapFSTRING(int32 IntToConvert);



	UFUNCTION(BlueprintCallable, Category = "Binary")
		std::pair<int, int> RequestSplitBitmap(int32 IntToConvert);



	//Shared function for receiving a c++ string from an exposed c++ int32 (That also works in bp)
	std::string intToBinaryString(int32 InputNumber);


protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
