#include"LinearList.h"

int main()
{

	Data* head = creatLinearList();
	Data result ;
	for (int i = 1; i < 6; i++)
	{
		push(head, i, 0);
	}
	for (int i = 0; i < 2; i++)
	{
		pop(head, &result);
		printf_s("%d", result.numData);
	}

	printAll(head);

	free(head);

	return 0;
}