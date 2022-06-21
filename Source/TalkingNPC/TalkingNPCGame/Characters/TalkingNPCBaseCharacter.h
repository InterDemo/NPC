// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "TalkingNPCBaseCharacter.generated.h"

UCLASS()
class TALKINGNPC_API ATalkingNPCBaseCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ATalkingNPCBaseCharacter();

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = ReadyPlayerMe, meta = (ExposeFunctionCategories = "Ready Player Me", AllowPrivateAccess = "true"))
		class UReadyPlayerMeActorComponent* ReadyPlayerMeComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = ReadyPlayerMe, meta = (ExposeFunctionCategories = "LipSync", AllowPrivateAccess = "true"))
		class UOVRLipSyncPlaybackActorComponent* OVRLipSyncPlaybackComponent;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
