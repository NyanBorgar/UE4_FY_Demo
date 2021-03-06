// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Cpluscharacter.generated.h"

UCLASS()
class SATTRIAL_API ACpluscharacter : public ACharacter
{
	GENERATED_UCLASS_BODY()

		UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = paper)
		class UPaperFlipbookComponent* PlayerComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = paper)
		class UPaperFlipbook* PlayerAnimation;

public:
	// Sets default values for this character's properties
	ACpluscharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
