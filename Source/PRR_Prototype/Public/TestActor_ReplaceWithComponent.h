// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/Texture2D.h"
#include "Engine/TextureRenderTarget2D.h"
#include "TestActor_ReplaceWithComponent.generated.h"


UCLASS()
class PRR_PROTOTYPE_API ATestActor_ReplaceWithComponent : public AActor
{
	
	GENERATED_BODY()
	

public:	
	// Sets default values for this actor's properties
	ATestActor_ReplaceWithComponent();


	// INSTEAD OF REPLACING WITH A COMPONENT, REPLACE IT WITH AN INTERFACE!!!!! :D

	UFUNCTION(BlueprintCallable, Category = "Displacement")
	UTexture2D* ObjectAndActor (UPARAM(ref) UTextureRenderTarget2D*& InputTxt);


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
};
