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
		_putchar('-');
		num_d = -num_d;
		z++; }
	if (num_d / 10)
		z += ptr_num2(num_d / 10);
	_putchar((num_d % 10) + '0');
	z++;
	return (z);
}
