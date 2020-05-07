#include<stdio.h>


int main()
{
	int a = 1e12;
	int b = 1;
	int c = -1e12;
	printf_s("%d\t%d\n", a + b + c, a + c + b);

	////////////////////////////////////////////
	/*
	question 1 rabbits and chicken in the same cage
	*/

	int chicken = 0;
	int rabbits = 0;

	for (; rabbits < (90 / 4); rabbits++)
	{
		chicken = 35 - rabbits;
		if (chicken + 2 * rabbits == 45)
			printf_s("chicken:%d\trabbit:%d\n", chicken, rabbits);
	}


	
	return 0;
}