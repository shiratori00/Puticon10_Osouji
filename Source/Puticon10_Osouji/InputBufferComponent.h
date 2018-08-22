// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "InputBufferComponent.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FInputBufferEvent);

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class PUTICON10_OSOUJI_API UInputBufferComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UInputBufferComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "InputBuffer")
		TArray<FString> InputBufferArray;

public:
	UFUNCTION(BlueprintCallable, Category = "InputBuffer")
		void AddInputBuffer(const FString input);


	
};
