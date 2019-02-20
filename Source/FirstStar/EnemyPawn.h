// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/DefaultPawn.h"
#include "EnemyPawn.generated.h"

/**
 * 
 */
UCLASS()
class FIRSTSTAR_API AEnemyPawn : public ADefaultPawn
{
	GENERATED_BODY()

	// �R���X�g���N�^
	AEnemyPawn(const FObjectInitializer& ObjectInitializer);

public:
	// �C���X�^���X
	class UMyFloatingPawnMovement* movement;

	// ���g��FloatingPawnMovement��Ԃ�
	UFUNCTION(BlueprintCallable)
		class UMyFloatingPawnMovement* GetFloatingMovement() const;
};

// �G�̎��
UENUM(BlueprintType)
enum class EType : uint8
{
	ET_RED         UMETA(DisplayName = "RED"),
	ET_ORANGE  UMETA(DisplayName = "ORANGE"),
	ET_YELLOW  UMETA(DisplayName = "YELLOW"),
	ET_WHITE    UMETA(DisplayName = "WHITE"),
	ET_BLUE      UMETA(DisplayName = "BLUE")
};
