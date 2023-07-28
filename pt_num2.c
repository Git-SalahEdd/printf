#include "main.h"

/**
*ptr_num2 - 40line issue ptr num
*@num: ptrm int
*Return: result
*/

int ptr_num2(int num)
{
	int num_d = num;
	int z = 0;

	if (num_d < 0)
	{
		putchar('-');
		num_d = num_d;
		z++;
	}
	if (num_d / 10)
		z += ptr_num2((unsigned int) num_d / 10);
	putchar(((unsigned int) num_d % 10) + '0');
	z++;
	return (z);
}
