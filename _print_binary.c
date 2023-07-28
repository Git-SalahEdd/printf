#include "main.h"
/**
* _print_binary - print an integer in binary format
* @num: the integer to print
* Return: the number of characters printed
*/
int _print_binary(int num)
{
	unsigned int bin;
	int y = 0, z, result[32];

	while (bin == 0)
	{
		_putchar('0');
		return (1);
	}
	while (bin != 0)
	{
		result[y] = bin % 2;
		bin /= 2;
		y++;
	}
	z = y - 1;
	while (z >= 0)
	{
		_putchar(result[z] + '0');
		z--;
	}
	return (y);
}
