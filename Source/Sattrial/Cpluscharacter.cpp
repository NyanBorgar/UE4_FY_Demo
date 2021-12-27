// Fill out your copyright notice in the Description page of Project Settings.


#include "Cpluscharacter.h"
#include "PaperFlipbookComponent.h"
#include "PaperFlipbook.h"
#include "UObject/ConstructorHelpers.h"

// Sets default values
ACpluscharacter::ACpluscharacter(const FObjectInitializer& PCIP)
	: Super(PCIP)
{
	struct FConstructorStatics
	{
		ConstructorHelpers::FObjectFinderOptional<UPaperFlipbook> playerAsset;
		FConstructorStatics()
			: playerAsset(TEXT("PaperFlipbook'/Game/2DSideScrollerCPP/Textures/Slime_1.Slime_1'"))
		{
		}
	};

	static FConstructorStatics ConstructorStatics;
	PlayerAnimation = ConstructorStatics.playerAsset.Get();

	PlayerComponent = PCIP.CreateDefaultSubobject<UPaperFlipbookComponent>(this, TEXT("playercomponent"));
	PlayerComponent->SetFlipbook(PlayerAnimation);


 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	//PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACpluscharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACpluscharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ACpluscharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

