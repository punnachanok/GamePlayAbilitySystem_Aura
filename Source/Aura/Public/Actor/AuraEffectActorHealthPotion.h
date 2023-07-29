// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Actor/AuraEffectActor.h"
#include "AuraEffectActorHealthPotion.generated.h"

/**
 * 
 */
UCLASS()
class AURA_API AAuraEffectActorHealthPotion : public AAuraEffectActor
{
	GENERATED_BODY()
public:
	virtual void OnOverlap(UPrimitiveComponent* OverlapComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) override;

};
