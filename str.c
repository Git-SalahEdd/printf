#include "main.h"

/**
*str - print str
*@s: str
*Return: final res
*/

int str(const char *s)
{
	int i = 0;
	char buffer[BUFFER_SIZE];

	while (*s != '\0')
	{
		i = _strncpy(buffer, s, BUFFER_SIZE);
		write(1, buffer, i);
		s += i;
	}
	return (i);
}
