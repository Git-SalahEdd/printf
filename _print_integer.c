#include "main.h"
/**
* _print_integer - print an integer in decimal format
* @num: the integer to print
* @base: the base for formatting the number
* @uppercase: flag indicating uppercase (1) or lowercase (0) for hexadecimal numbers
* Return: the number of characters printed
*/
int _print_integer(unsigned int num, int base, int uppercase)
{
	char buffer[32];
	int count = 0;
	int i = 0;

	if (num == 0)
	{
		putchar('0');
		return 1;
	}
	while (num != 0)
	{
		int rem = num % base;

		buffer[i++] = (rem < 10) ? ('0' + rem) : (uppercase ? 'A' + rem - 10 : 'a' + rem - 10);
		num /= base;
	}
	for (int j = i - 1; j >= 0; j--)
	{
		putchar(buffer[j]);
		count++;
	}
	return count;
}
