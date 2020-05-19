#include"LinearList.h"

Data* creatLinearList()
{

	Data* p = (Data*)calloc(DLEN, MAXLEN+1);

	//first numData has the number
	p->numData = 0;
	return p;
}

int push(Data* p,int num,char letter)
{
	int size = p->numData;

	if (size != MAXLEN)
	{
		(p + size + 1)->charData = letter;
		(p + size + 1)->numData = num;

		p->numData++;

		return 0;
	}
	else
		return -1;
}

int pop(Data* p,Data* result)
{
	int size = p->numData;

	if (size != 0)
	{
		result->charData = (p + size)->charData;
		result->numData = (p + size)->numData;

		(p + size)->charData = 0;
		(p + size)->numData = 1e6*(rand()%5)-1e6;

		p->numData--;

		return 0;
	}
	else
		return -1;
}

void printAll(Data* head)
{

	for (int i = head->numData; i > 0; i--)
	{
		printf_s("%d", (head + i)->numData);
		if ((head + i)->charData != 0)
		{
			printf_s("%c", (head + i)->charData);
		}
	}
}


