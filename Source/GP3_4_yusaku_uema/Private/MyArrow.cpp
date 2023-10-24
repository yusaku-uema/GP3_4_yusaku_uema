// Fill out your copyright notice in the Description page of Project Settings.


#include "MyArrow.h"

// Sets default values
AMyArrow::AMyArrow()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//カプセルコリジョン作成
	capsule_collision = CreateDefaultSubobject<UCapsuleComponent>(TEXT("CapsuleCollision"));

	//コリジョンのサイズ設定
	capsule_collision -> InitCapsuleSize(1, 1);

	//オーバーラップイベントの有効化(何かに当たったら何をする)
	capsule_collision->SetGenerateOverlapEvents(true);

	//親子付け
	RootComponent = capsule_collision;

	//物理機能を切る（オンにすると、重力を付けてくれたりする）
	capsule_collision->SetSimulatePhysics(false);

	//メッシュ作成
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

