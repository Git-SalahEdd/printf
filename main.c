#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int i = 0;
	int len1;
	char *s = NULL;

	len1 = _printf("Let's try to printf a %d simple sentence.\n", i);
	printf("%d" ,len1);
	len1 = _printf("%\n");
	printf("%d\n" ,len1);
	len1 = _printf("%s", s);
	printf("%d\n" ,len1);
	len1 = _printf("hi %c", 'x');
	printf("%d\n" ,len1);
	len1 = printf("%s", s);
	printf("%d\n" ,len1);
	len1 = printf("hi %c", 'x');
	printf("%d\n" ,len1);
	return (0);
}
