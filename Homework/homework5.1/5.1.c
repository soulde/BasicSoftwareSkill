#include"LinkStack.h"

int main()
{
	//create stack
	Node* head = creatLinklist();

	//push 10, 20, 30, 40, 50
	for (int i = 0; i < 5; i++)
	{
		push(head, (i + 1) * 10, 0);
	}

	//pop twice
	for (int i = 0; i < 2; i++)
	{
		pop(head);
	}

	//print number remained
	iter(head, printNum, 0);

	return 0;
}