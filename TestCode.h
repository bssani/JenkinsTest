// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "CalendarTest.generated.h"

/**
 * 
 */
UCLASS()
class MYPROJECT2_API UCalendarTest : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	

	UFUNCTION(BlueprintCallable)
    static bool isLeapYear(int year);
	
	UFUNCTION(BlueprintCallable)
	static int lastDay(int year, int month);

	UFUNCTION(BlueprintCallable)
	static int totalDay(int year, int month, int day);

	UFUNCTION(BlueprintCallable)
	static int weekDay(int year, int month, int day);

	UFUNCTION(BlueprintCallable)
	static int startDay(int year, int month);
};
