// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Person.h"
#include "UObject/NoExportTypes.h"
#include "Student.generated.h"
/**
 * 
 */
UCLASS()
class UNREALOBJECT_API UStudent : public UPerson
{
	GENERATED_BODY()
	
public :
	UStudent();

	void GetNotification(const FString& School, const FString& NewCourseInfo);
private:

	
};
