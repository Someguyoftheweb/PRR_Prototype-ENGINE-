// Fill out your copyright notice in the Description page of Project Settings.


#include "TestActor_ReplaceWithComponent.h"
#include "Engine/TextureRenderTarget2D.h"
#include "..\Public\TestActor_ReplaceWithComponent.h"


// Sets default values
ATestActor_ReplaceWithComponent::ATestActor_ReplaceWithComponent()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}
	


UTexture2D* ATestActor_ReplaceWithComponent::ObjectAndActor(UPARAM(ref)UTextureRenderTarget2D*& InputTxt)
{
	UTexture2D* outputTexture2D; 

	outputTexture2D = InputTxt->ConstructTexture2D(this,"2dTextureOutput", EObjectFlags::RF_NoFlags, CTF_Default) ;

	return outputTexture2D;
}



// Called when the game starts or when spawned
void ATestActor_ReplaceWithComponent::BeginPlay()
{
	Super::BeginPlay(); 
	
}


// Called every frame
void ATestActor_ReplaceWithComponent::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

