// Fill out your copyright notice in the Description page of Project Settings.

#include "EnemyPawn.h"
#include "MyFloatingPawnMovement.h"

// ����R���|�[�l���g�쐬
AEnemyPawn::AEnemyPawn(const class FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer.SetDefaultSubobjectClass<UMyFloatingPawnMovement>(ADefaultPawn::MovementComponentName))
{
	// �C���X�^���X����
	movement = Cast<UMyFloatingPawnMovement>(GetDefaultSubobjectByName(ADefaultPawn::MovementComponentName));
}

// ���g��FloatingPawnMovement��Ԃ�
class UMyFloatingPawnMovement* AEnemyPawn::GetFloatingMovement() const
{
	return movement;
}
