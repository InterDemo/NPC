// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NPCBaseCharacter.h"
#include "TalkingNPCCharacter.generated.h"

/**
 * 
 */
UCLASS()
class TALKINGNPC_API ATalkingNPCCharacter : public ANPCBaseCharacter
{
	GENERATED_BODY()

public:
	ATalkingNPCCharacter();

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = ReadyPlayerMe, meta = (ExposeFunctionCategories = "LipSync", AllowPrivateAccess = "true"))
		class UOVRLipSyncPlaybackActorComponent* OVRLipSyncPlaybackComponent;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
};
