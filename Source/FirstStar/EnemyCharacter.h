// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "EnemyCharacter.generated.h"

UCLASS()
class FIRSTSTAR_API AEnemyCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AEnemyCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};

// “G‚ÌŽí—Þ
UENUM(BlueprintType)
enum class EEnemyType : uint8
{
	ET_RED         UMETA(DisplayName = "RED"),
	ET_ORANGE  UMETA(DisplayName = "ORANGE"),
	ET_YELLOW  UMETA(DisplayName = "YELLOW"),
	ET_WHITE    UMETA(DisplayName = "WHITE"),
	ET_BLUE      UMETA(DisplayName = "BLUE")
};
