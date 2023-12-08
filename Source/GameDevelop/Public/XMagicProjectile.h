// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "XProjectileBase.h"
#include "GameFramework/Actor.h"
#include "XMagicProjectile.generated.h"

class USphereComponent;
class UProjectileMovementComponent;
class UParticleSystemComponent;

UCLASS()
class GAMEDEVELOP_API AXMagicProjectile : public AXProjectileBase
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AXMagicProjectile();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UFUNCTION()
	void OnActorOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult);

public:
	USphereComponent* GetSphere();
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};
