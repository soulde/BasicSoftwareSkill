#include"Q.h"


int main()
{
	Queue* head = createQueue();
	Queue result;

	for (int i = 9; i >= 6; i--)
	{
		enQueue(head, i);
	}

	for (int i = 0; i < 2; i++)
	{
		deQueue(head, &result);
		printf_s("%d\n", result.numData);
	}

	free(head);

	return 0;
}