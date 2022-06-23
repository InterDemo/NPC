// Fill out your copyright notice in the Description page of Project Settings.


#include "TalkingNPCCharacter.h"
#include "OVRLipSyncPlaybackActorComponent.h"

// Sets default values
ATalkingNPCCharacter::ATalkingNPCCharacter()
{
	OVRLipSyncPlaybackComponent = CreateDefaultSubobject<UOVRLipSyncPlaybackActorComponent>(TEXT("LipSync"));
}

void ATalkingNPCCharacter::BeginPlay()
{
	Super::BeginPlay();
}

void ATalkingNPCCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
