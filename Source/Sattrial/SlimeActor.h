// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SlimeActor.generated.h"



UCLASS()
class SATTRIAL_API ASlimeActor : public AActor
{
	GENERATED_UCLASS_BODY()
		UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = paper)
		class UPaperFlipbookComponent* SlimeComponent;

		UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = paper)
		class UPaperFlipbook* SlimeAnimation;
	
public:	
	// Sets default values for this actor's properties
	ASlimeActor();

protected:
	//ASlimeActor(const FObjectInitializer& PCIP);
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
