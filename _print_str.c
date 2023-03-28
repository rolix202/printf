#include "main.h"

/**
 * _print_str - print string from va_list arg
 * @arg: variadic arg
 * Return: num of chars printed
 */
int _print_str(va_list arg)
{
	int i = 0;
	char *s = va_arg(arg, char *);

	if (s == NULL)
		return (i);

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
	return (i);
}
