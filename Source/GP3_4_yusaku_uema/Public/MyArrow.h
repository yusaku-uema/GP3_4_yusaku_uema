// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/CapsuleComponent.h"
#include "MyArrow.generated.h"

UCLASS()
class GP3_4_YUSAKU_UEMA_API AMyArrow : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyArrow();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:

	// �u���[�v�����g�ł��ҏW�\���@�@�����o�ϐ��̕\���@�A�J�e�S���[�g
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components/Collision")
		UCapsuleComponent* capsule_collision;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components/Mesh") 
		USkeletalMeshComponent* skeletal_mesh;

};
