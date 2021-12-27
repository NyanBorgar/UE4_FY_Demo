// Fill out your copyright notice in the Description page of Project Settings.


#include "SlimeActor.h"

#include "PaperFlipbookComponent.h"
#include "PaperFlipbook.h"


// Sets default values
ASlimeActor::ASlimeActor(const FObjectInitializer& PCIP)
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

	SlimeComponent = PCIP.CreateDefaultSubobject<UPaperFlipbookComponent>(this, TEXT("slimecomponent"));
	SlimeComponent->SetFlipbook(SlimeAnimation);

 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	//PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ASlimeActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASlimeActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

