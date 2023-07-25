#include "main.h"
#include <stdarg.h>

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
	if (!format || (format[0] == '%' && !format[1]))
	{
		return (i);
	}
	if (format[0] == '%' && format[1] == ' ' && !format[2])
	{
		return (i);
	}
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
					format++;
					break;
			}
		}
		else
		{
		_putchar(*format);
		}
	format++;
	}
	va_end(list);
	return (i);
}
