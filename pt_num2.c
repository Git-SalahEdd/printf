#include "main.h"

/**
*ptr_num2 - 40line issue ptr num
*@num: ptrm int
*Return: result
*/

int ptr_num2(int num)
{
	int z = 0, i;
	
	if (num == INT_MAX)
	{
		const char maxIntStr[] = "2147483647";
		for (i = 0; maxIntStr[i] != '\0'; i++)
		{
			z += _putchar(maxIntStr[i]);
		}
		return (z);
	}
	if (num == INT_MIN)
	{
		const char minIntStr[] = "-2147483648";
		for (i = 0; minIntStr[i] != '\0'; i++)
		{
			z += _putchar(minIntStr[i]);
		}
		return (z);
	}
	if (num == 0)
	{
		z += _putchar('0');
		return (z);
	}
	if (num < 0)
	{
		putchar('-');
		num = -num;
		z++;
	}
	if (num / 10 != 0)
		z += ptr_num2((unsigned int) num / 10);
	z += putchar('0' + (num % 10));
	return (z);
}
