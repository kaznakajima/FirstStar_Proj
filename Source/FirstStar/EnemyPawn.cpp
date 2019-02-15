// Fill out your copyright notice in the Description page of Project Settings.

#include "EnemyPawn.h"
#include "MyFloatingPawnMovement.h"

AEnemyPawn::AEnemyPawn(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UMyFloatingPawnMovement>(ADefaultPawn::MovementComponentName))
{

}