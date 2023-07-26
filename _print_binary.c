#include "main.h"
/**
* _print_binary - print an integer in binary format
* @num: the integer to print
* Return: the number of characters printed
*/
int _print_binary(int num)
{
	int i, count = 0;
	unsigned int mask = 1 << (sizeof(unsigned int) * 8 - 1);

	for (i = 0; i < sizeof(unsigned int) * 8; i++)
	{
		_putchar((num & mask) ? '1' : '0');
		num <<= 1;
		count++;
	}
	return (count);
}
