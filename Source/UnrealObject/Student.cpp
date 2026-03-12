// Fill out your copyright notice in the Description page of Project Settings.


#include "Student.h"




UStudent::UStudent()
{
}

void UStudent::GetNotification(const FString& School, const FString& NewCourseInfo)
{
	UE_LOG(LogTemp, Log, TEXT("Student [%s] 알림 받음 :: 학교 이름 : %s , 코스정보 : %s"),*Name, *School, *NewCourseInfo);
}
