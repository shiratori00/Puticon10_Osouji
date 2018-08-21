// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GundamMovementComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class PUTICON10_OSOUJI_API UGundamMovementComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UGundamMovementComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

public:
	//MemberValues
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GundamMovement")
		float speed;

public:
	//MemberFunctions
	UFUNCTION(BlueprintCallable, Category = "GundamMovement")
		void Move();
};
