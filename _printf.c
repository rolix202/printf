#include "main.h"

/**
 * _printf - prints formatted string to stdout
 * @format: format specifier for var
 * Return: num of chars written except null char
*/
int _printf(const char *format, ...)
{
	f_specs specs[] = {
		{"%c", _print_char},
		{"%s", _print_str},
		{"%%", _print_mod},
		{"%d", _print_decimal},
		{"%i", _print_int},
		{NULL, NULL}
	};

	va_list arg;
	int i = 0, j, len = 0;

	va_start(arg, format);

	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			for (j = 0; specs[j].c != NULL; j++)
			{
				if (specs[j].c[0] == format[i] && specs[j].c[1] == format[i + 1])
				{
					len += specs[j].f(arg);
					i += 2;
				}
			}
		}
		_putchar(format[i]);
		len++;
		i++;
	}
	va_end(arg);
	return (len);
}
