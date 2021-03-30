// Fill out your copyright notice in the Description page of Project Settings.


#include "NewObject.h"

UNewObject::UNewObject()
{
	MyFloat = 0.f;


};

void UNewObject::MyFunction()
{
	UE_LOG(LogTemp, Warning, TEXT("This is our warnng text"));
}