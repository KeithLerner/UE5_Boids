// Fill out your copyright notice in the Description page of Project Settings.


#include "BoidActor.h"
#include "Math/MathFwd.h"

// Sets default values
ABoidActor::ABoidActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABoidActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABoidActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}