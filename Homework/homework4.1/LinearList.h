#pragma once

#include<stdlib.h>
#include<stdio.h>

#define DLEN sizeof(Data)
#define MAXLEN 10

typedef struct Data
{
	int numData;
	char charData;

}Data;


Data* creatLinearList();

int push(Data* p, int num, char letter);

int pop(Data* p, Data* result);

void printAll(Data* head);

