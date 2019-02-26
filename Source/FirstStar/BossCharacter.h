// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "BossCharacter.generated.h"

UCLASS()
class FIRSTSTAR_API ABossCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ABossCharacter();

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "BossParam")
	float MaxHP;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "BossParam")
	float CurrentHP;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "BossParam")
	float ShortRangePower;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "BossParam")
	float LongRangePower;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "BossParam")
	float MoveSpeed;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};

// çUåÇÇÃéÌóﬁ
UENUM(BlueprintType)
enum class EAttackType : uint8
{
	AT_SHORTRANGE UMETA(DisplayName = "ShortRange"),
	AT_RONGRANGE   UMETA(DisplayName = "LongRange")
};
