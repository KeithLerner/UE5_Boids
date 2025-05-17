// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BoidManager.generated.h"

UCLASS()
class BOIDS_API ABoidManager : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABoidManager();

	// The number of boids to spawn
	UPROPERTY(Config, EditAnywhere, BlueprintReadWrite, Category = "System")
		int spawnCount = 1000;

	// The bounds for boids to simulate within
	UPROPERTY(Config, EditAnywhere, BlueprintReadWrite, Category = "System")
		FBox simulationBoundsCenter;

	// Spawn a boid actor from blueprints
	UFUNCTION(BlueprintCallable, Category = "Boids")
		void SpawnBoid();

	


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
