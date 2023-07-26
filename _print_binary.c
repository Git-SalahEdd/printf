#include "main.h"
/**
* _print_binary - print an integer in binary format
* @num: the integer to print
* Return: the number of characters printed
*/
int _print_binary(int num)
{
	int count = 0;
	
	if (num >= 2)
		count += _print_binary(num / 2);
	putchar('0' + num % 2);
	count++;
	return (count);
}
