#include "main.h"

int _printf(const char *format, ...)
{
    int i = 0, j = 0;
    char *s;

    va_list list;
    va_start(list, format);

    if (!format || (format[0] == '%' && !format[1]))
    {
        return -1;
    }
    if (format[0] == '%' && format[1] == ' ' && !format[2])
    {
        return -1;
    }

    while (format[i])
    {
        if (format[i] == '%')
        {
            i++;
            switch (format[i])
            {
                case 'c':
                    _putchar(va_arg(list, int));
                    break;
                case 's':
                    s = va_arg(list, char *);
                    while (s[j] != '\0')
                    {
                        _putchar(s[j]);
                        j++;
                    }
                    break;
                case '%':
                    _putchar('%');
                    break;
                default:
                    _putchar('?');
                    break;
            }
        }
        else
        {
            _putchar(format[i]);
        }

        i++;
    }

    va_end(list);
    return 0;
}
