#include "main.h"

/**
*chk - check format
*@format: char ptr
*Return : finalt result
*/

void chk(const char *format)
{
	if (!format || (format[0] == '%' && !format[1]))
	{
		exit(-1);
	}
	if (format[0] == '%' && format[1] == ' ' && !format[2])
	{
		exit(-1);
	}
	EXIT_SUCCESS;
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
					i += _putchar(va_arg(list, int));
					break;
				case 's':
					s = va_arg(list, char *);
					while (s[j] != '\0')
					{
						i += _putchar(s[j]);
						j++;
					}
					break;
				case '%':
					i += _putchar('%');
					break;
				default:
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
		va_end(list);
		return (i);
	}
	chk(format);
	va_end(list);
	return (i - 1);
}
