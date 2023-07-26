#include "main.h"

/**
*str - print str
*@s: str
*Return: final res
*/

int str(const char *s)
{
	int i = 0;

	while (*s)
	{
		_putchar(*s);
		s++;
		i++;
	}
	return (i);
}
