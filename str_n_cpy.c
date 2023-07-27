#include "main.h"

/**
*char *_strncpy -  function that copies a string
*@dest:parameter receving string from src
*@src:parameter string to be copied to dest
*@n:n time
*Return:final nbr cpy char
*/

int _strncpy(char *dest, const char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	return (i);
}
