// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "Enemy_BTTask_IncrementPathIndex.generated.h"

/**
 * 
 */
UCLASS()
class API_PROJECT_API UEnemy_BTTask_IncrementPathIndex : public UBTTask_BlackboardBase
{
	GENERATED_BODY()
	
public:
	explicit UEnemy_BTTask_IncrementPathIndex(FObjectInitializer const& ObjectInitializer);
	virtual EBTNodeResult::Type ExecuteTasK(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory);

private:

	enum class EDirectionType {Forward, Reverse};

	EDirectionType Direction = EDirectionType::Forward;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI", meta = (AllowPrivateAccess = "true"))
	bool bBiDirectional = false;
};
