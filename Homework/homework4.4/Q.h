#pragma once

#include<stdlib.h>
#include<stdio.h>

#define QLEN sizeof(Queue)
#define MAXLEN 100

typedef struct Queue
{
	int numData;
	int front;

}Queue;

Queue* createQueue();

int enQueue(Queue* head, int number);

int deQueue(Queue* head, Queue* result);

void printAll(Queue* head);
