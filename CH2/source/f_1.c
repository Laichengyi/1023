#include <stdlib.h>
#include <stdio.h>

int han_xin_1()
{
	char sign = 'X';
	char sign2 = '-';
	int i, j;
	int temp;
	int temp2;
	//===========================================
	printf("(1)\n");

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if ((i == 0) || (i == 9) || (j == 0) || (j == 9))
			{
				printf("%c", sign);
			}
			else
			{
				printf("%c", sign2);
			}
		}
		printf("\n");
	}
}