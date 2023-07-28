#include "main.h"

/**
*ptr_num - 40line issue ptr num
*@num: ptrm int
*Return: result
*/

int ptr_num(int num)
{
	int i = 0, temp = 0, count = 0;

	if (num < 0)
	{ 
		i += _putchar('-');
		num = -num; 
	}
	temp = num;
	count = 1;
	while (temp / 10 > 0)
	{ 
		temp /= 10;
		count *= 10; 
	}
	while (count > 0)
	{
		i += _putchar(((unsigned int) (num / count)) % 10 + '0');
		count /= 10; 
	}
	return (i);
}
