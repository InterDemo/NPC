// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "NPCBaseCharacter.generated.h"

UCLASS()
class TALKINGNPC_API ANPCBaseCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ANPCBaseCharacter();

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = ReadyPlayerMe, meta = (ExposeFunctionCategories = "Ready Player Me", AllowPrivateAccess = "true"))
		class UReadyPlayerMeActorComponent* ReadyPlayerMeComponent;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
