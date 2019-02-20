// Fill out your copyright notice in the Description page of Project Settings.

#include "EnemyPawn.h"
#include "MyFloatingPawnMovement.h"

// 自作コンポーネント作成
AEnemyPawn::AEnemyPawn(const class FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer.SetDefaultSubobjectClass<UMyFloatingPawnMovement>(ADefaultPawn::MovementComponentName))
{
	// インスタンス生成
	movement = Cast<UMyFloatingPawnMovement>(GetDefaultSubobjectByName(ADefaultPawn::MovementComponentName));
}

// 自身のFloatingPawnMovementを返す
class UMyFloatingPawnMovement* AEnemyPawn::GetFloatingMovement() const
{
	return movement;
}
