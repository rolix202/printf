#include "main.h"

int _print_str(va_list arg)
{
	int i = 0;
	char *s = va_arg(arg, char *);

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
	return (i);
}
