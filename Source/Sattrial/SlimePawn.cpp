// Fill out your copyright notice in the Description page of Project Settings.


#include "SlimePawn.h"
#include "PaperFlipbookComponent.h"
#include "PaperFlipbook.h"
#include "UObject/ConstructorHelpers.h"

// Sets default values
ASlimePawn::ASlimePawn(const FObjectInitializer& PCIP)
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
	SlimeAnimation = ConstructorStatics.playerAsset.Get();
	SlimeComponent = PCIP.CreateOptionalDefaultSubobject<UPaperFlipbookComponent>(this, TEXT("slimecomponent"));
	SlimeComponent->SetFlipbook(SlimeAnimation);
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	//PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ASlimePawn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASlimePawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ASlimePawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

