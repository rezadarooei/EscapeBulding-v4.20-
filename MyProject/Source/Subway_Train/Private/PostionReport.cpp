// Fill out your copyright notice in the Description page of Project Settings.

#include "PostionReport.h"


// Sets default values for this component's properties
UPostionReport::UPostionReport()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UPostionReport::BeginPlay()
{
	Super::BeginPlay();
	AActor* Owner = GetOwner();
	FVector Transform = Owner->GetActorTransform().GetLocation();
	GEngine->AddOnScreenDebugMessage(-1, 4, FColor::Red, FString::Printf(TEXT("It is  %s at %s"),*Owner->GetName(),*Transform.ToString()),true);
	
}


// Called every frame
void UPostionReport::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

