// Fill out your copyright notice in the Description page of Project Settings.


#include "IntToStringResource.h"
#include "..\Public\IntToStringResource.h"

// Sets default values for this component's properties
UIntToStringResource::UIntToStringResource()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}








FString UIntToStringResource::RequestBitmapFSTRING(int32 IntToConvert)
{
	//Uses UIntToStringResource to return a standard c++ string
	FString ReturnFString;
	//Convers returned value by intToBinaryString using the .c_str modififier that. std::string -> Fstring
	ReturnFString = (intToBinaryString(IntToConvert).c_str());
	return FString(ReturnFString);
}


//Building block for converting standard(Exposed) int32 to a c++ string.   (Note: C++ string is not equal to a unreal string- use FString for unreal)
std::string UIntToStringResource::intToBinaryString(int32 InputNumber)
{

	std::string StringBinaryCon;

	StringBinaryCon = std::bitset<32>(InputNumber).to_string();

	return std::string(StringBinaryCon);
}

// Called when the game starts
void UIntToStringResource::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UIntToStringResource::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

