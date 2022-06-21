// Fill out your copyright notice in the Description page of Project Settings.


#include "TalkingNPCBaseCharacter.h"
#include "ReadyPlayerMeActorComponent.h"
#include "OVRLipSyncPlaybackActorComponent.h"

// Sets default values
ATalkingNPCBaseCharacter::ATalkingNPCBaseCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	ReadyPlayerMeComponent = CreateDefaultSubobject<UReadyPlayerMeActorComponent>(TEXT("ReadyPlayerMe"));
	OVRLipSyncPlaybackComponent = CreateDefaultSubobject<UOVRLipSyncPlaybackActorComponent>(TEXT("LipSync"));
}

// Called when the game starts or when spawned
void ATalkingNPCBaseCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATalkingNPCBaseCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ATalkingNPCBaseCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

