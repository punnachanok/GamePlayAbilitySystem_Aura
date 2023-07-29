// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Actor/AuraEffectActor.h"
#include "AuraEffectActorManaPotion.generated.h"

/**
 * 
 */
UCLASS()
class AURA_API AAuraEffectActorManaPotion : public AAuraEffectActor
{
	GENERATED_BODY()
public:
	virtual void OnOverlap(UPrimitiveComponent* OverlapComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) override;

};
