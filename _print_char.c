#include "main.h"
#include <stdio.h>

/**
 * _print_char - prints character pulled from va_arg
 * @arg: variadic arg
 * Return: 1 when char is printed
 */
int _print_char(va_list arg)
{
	char c = va_arg(arg, int);

	if (c == '\0')
		return (0);
	_putchar(c);
	return (1);
}
