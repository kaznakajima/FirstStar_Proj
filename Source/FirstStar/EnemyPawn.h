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

	// コンストラクタ
	AEnemyPawn(const FObjectInitializer& ObjectInitializer);

public:
	// インスタンス
	class UMyFloatingPawnMovement* movement;

	// 自身のFloatingPawnMovementを返す
	UFUNCTION(BlueprintCallable)
		class UMyFloatingPawnMovement* GetFloatingMovement() const;
};

// 敵の種類
UENUM(BlueprintType)
enum class EType : uint8
{
	ET_RED         UMETA(DisplayName = "RED"),
	ET_ORANGE  UMETA(DisplayName = "ORANGE"),
	ET_YELLOW  UMETA(DisplayName = "YELLOW"),
	ET_WHITE    UMETA(DisplayName = "WHITE"),
	ET_BLUE      UMETA(DisplayName = "BLUE")
};
