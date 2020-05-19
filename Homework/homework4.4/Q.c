#include"Q.h"

Queue* createQueue()
{
	Queue* head = (Queue*)calloc(QLEN, MAXLEN + 1);

	head->numData = 0;
	head->front = 1;

}

int enQueue(Queue* head, int number)
{
	if (head||head->numData ==MAXLEN)
	{
		(head + head->front + head->numData)->numData = number;
		head->numData++;
		return 0;
	}
	else
		return -1;
}

int deQueue(Queue* head, Queue* result)
{
	int front = head->front;
	int size = head->numData;
	if (head || size == 0)
	{
		result->numData = (head + front)->numData;
		(head + front)->numData = 1e15;

		head->front++;
		head->numData--;

		return 0;
	}
	else
		return -1;
}

void printAll(Queue* head)
{
	for (int i = head->front + head->numData - 1; i >= head->front; i--)
	{
		printf_s("%d", (head + i)->numData);
	}
}