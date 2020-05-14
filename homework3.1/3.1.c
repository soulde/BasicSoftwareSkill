#include"Node.h"



int main()
{
	//creat linklist
	Node* p;
	p = creatLinklist();

	//insert data
	for (int i = 0; i < 30; i++)
	{
		addNode(p, i, i + 1, 0);
	}

	//to show
	iter(p, printNum,0);

	//delete number divided by 3
	iter(p, homeworkFunction,0);

	printf_s("\n");
	//show data
	iter(p, printNum,0);

	//clear
	clear(p);

	return 0;

}