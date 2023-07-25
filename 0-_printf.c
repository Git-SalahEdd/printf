#include "main.h"
#include <stdarg.h>

/**
chk - check format*/

int chk(const char *format)
{
	if (!format || (format[0] == '%' && !format[1]))
	{
		return (-1);
	}
	if (format[0] == '%' && format[1] == ' ' && !format[2])
	{
		return (-1);
	}
	return(0);
}

/**
*_printf - that produces output according to a format
*@format: requested format
*Return: 0 for always sucess
*/

int _printf(const char *format, ...)
{
	int i = 0, j = 0;
	char *s;
	va_list list;

	va_start(list, format);
	if (format)
	{
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			switch (*format)
			{
				case 'c':
					_putchar(va_arg(list, int));
					i++;
					break;
				case 's':
					s = va_arg(list, char *);
					while (s[j] != '\0')
					{
						_putchar(s[j]);
						j++;
						i++;
					}
					break;
				case '%':
					_putchar('%');
					i++;
					break;
				default:
					_putchar(*format);
					format++;
					break;
			}
		}
		_putchar(*format);
	format++;
	}
	}
	else
	{
	chk(format);
	}
	va_end(list);
	return (i);
}
