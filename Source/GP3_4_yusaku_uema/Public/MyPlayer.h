// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "MyPlayer.generated.h"

UCLASS()
class GP3_4_YUSAKU_UEMA_API AMyPlayer : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AMyPlayer();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

public:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components/Collision")
		UCapsuleComponent* capsule_collision;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components/Mesh")
		USkeletalMeshComponent* skeletal_mesh;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components/Camera")
		USpringArmComponent* spring_arm;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components/Camera")
		UCameraComponent* camera;



};
