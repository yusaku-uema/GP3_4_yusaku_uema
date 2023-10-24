// Fill out your copyright notice in the Description page of Project Settings.


#include "MyPlayer.h"

// Sets default values
AMyPlayer::AMyPlayer()
{

	//����Pawn������ΏۂɂȂ�悤�ɂ���
	AutoPossessPlayer = EAutoReceiveInput::Player0;

 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//�J�v�Z���R���|�[�l���g�쐬
	capsule_collision = CreateDefaultSubobject<UCapsuleComponent>(TEXT("CapsuleCollision"));

	//�T�C�Y�ݒ�
	capsule_collision->InitCapsuleSize(40.0f, 90.0f);

	//�e�N���X�̐ݒ�
	RootComponent = capsule_collision;

	// �X�v�����O�A�[���쐬
	spring_arm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArmComponent"));

	// �J�����̈ʒu�A��]�̎w��
	spring_arm->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, 30.0f), FRotator(0.0f, 0.0f, 0.0f));

	// ���b�V���ƃJ�����̋�����ݒ�
	spring_arm->TargetArmLength = 10.0f;

	// �J�����̒Ǐ]�ɒx���i�ǐՑ��x�j�Ȃ��B
	spring_arm->bEnableCameraLag = false;

	// �R���g���[���[�̉�]���Q�Ƃ���
	spring_arm->bUsePawnControlRotation = false;

	// �e�R���|�[�l���g��ݒ�
	spring_arm->SetupAttachment(RootComponent);

	// �J�����̍쐬
	camera = CreateDefaultSubobject<UCameraComponent>(TEXT("CameraComponent"));

	// �e�N���X�̐ݒ�
	camera->SetupAttachment(spring_arm);

}

// Called when the game starts or when spawned
void AMyPlayer::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyPlayer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AMyPlayer::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

