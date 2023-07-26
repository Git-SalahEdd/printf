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
*_printf - that produces output according to a format
*@format: requested format
*Return: 0 for always sucess
*/

int _printf(const char *format, ...)
{
	int i = 0;
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
					i += ptr_num(va_arg(list, int));
					break;
				case '%':
					i += _putchar('%');
					break;
				default:
					i += _putchar('%');
					i += _putchar(*format);
					break; } }
			else { i += _putchar(*format);}
			format++; } }
	va_end(list);
	return (i); }
