#include "main.h"

/**
*chk - check format
*@format: char ptr
*Return: 0 for sucess
*/
int chk(const char *format)
{
	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);
	return (0);
}

/**
 * print_binary - Convert unsigned integer to binary and print.
 * @num: The unsigned integer to convert and print.
 * Return: The number of characters printed.
 */
int print_binary(unsigned int num)
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

/**
*_printf - that produces output according to a format
*@format: requested format
*Return: 0 for always sucess
*/

int _printf(const char *format, ...)
{
	int i = 0, num, temp, count;
	const char *s;
	va_list list;

	va_start(list, format);
	if (chk(format) == -1)
	{ return (-1); }
	if (format)
	{
		while (*format)
		{
			if (*format == '%')
		{ format++;
			switch (*format)
			{ case 'c':
				i += _putchar(va_arg(list, int));
					break;
				case 's':
					s = va_arg(list, char *);
					if (!(s))
					{ s = "(null)"; }
					i += str(s);
					break;
				case 'd':
				case 'i':
					num = va_arg(list, int);
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
						i += _putchar((num / count) % 10 + '0');
						count /= 10;
					}
					break;
				case '%':
					i += _putchar('%');
					break;
				case 'b':
					i += print_binary(va_arg(list, unsigned int));
					break;
				default:
					i += _putchar('%');
					i += _putchar(*format);
					break; } }
		else
		{ i += _putchar(*format); }
	       format++; } }
	va_end(list);
	return (i);
}
