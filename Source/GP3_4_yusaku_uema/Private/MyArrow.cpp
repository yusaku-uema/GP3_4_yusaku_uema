// Fill out your copyright notice in the Description page of Project Settings.


#include "MyArrow.h"

// Sets default values
AMyArrow::AMyArrow()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//�J�v�Z���R���W�����쐬
	capsule_collision = CreateDefaultSubobject<UCapsuleComponent>(TEXT("CapsuleCollision"));

	//�R���W�����̃T�C�Y�ݒ�
	capsule_collision -> InitCapsuleSize(1, 1);

	//�I�[�o�[���b�v�C�x���g�̗L����(�����ɓ��������牽������)
	capsule_collision->SetGenerateOverlapEvents(true);

	//�e�q�t��
	RootComponent = capsule_collision;

	//�����@�\��؂�i�I���ɂ���ƁA�d�͂�t���Ă��ꂽ�肷��j
	capsule_collision->SetSimulatePhysics(false);

	//���b�V���쐬
	skeletal_mesh=CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Mesh"));
}

// Called when the game starts or when spawned
void AMyArrow::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyArrow::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

