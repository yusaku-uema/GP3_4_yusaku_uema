// Fill out your copyright notice in the Description page of Project Settings.


#include "MyPlayer.h"

// Sets default values
AMyPlayer::AMyPlayer()
{

	//このPawnが操作対象になるようにする
	AutoPossessPlayer = EAutoReceiveInput::Player0;

 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//カプセルコンポーネント作成
	capsule_collision = CreateDefaultSubobject<UCapsuleComponent>(TEXT("CapsuleCollision"));

	//サイズ設定
	capsule_collision->InitCapsuleSize(40.0f, 90.0f);

	//親クラスの設定
	RootComponent = capsule_collision;

	// スプリングアーム作成
	spring_arm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArmComponent"));

	// カメラの位置、回転の指定
	spring_arm->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, 30.0f), FRotator(0.0f, 0.0f, 0.0f));

	// メッシュとカメラの距離を設定
	spring_arm->TargetArmLength = 10.0f;

	// カメラの追従に遅延（追跡速度）なし。
	spring_arm->bEnableCameraLag = false;

	// コントローラーの回転を参照する
	spring_arm->bUsePawnControlRotation = false;

	// 親コンポーネントを設定
	spring_arm->SetupAttachment(RootComponent);

	// カメラの作成
	camera = CreateDefaultSubobject<UCameraComponent>(TEXT("CameraComponent"));

	// 親クラスの設定
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

