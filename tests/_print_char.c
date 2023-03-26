#include "main.h"

/**
 * 
 */
int _print_char(va_list arg)
{
	char c = va_arg(arg, int);
	
	_putchar(c);
	return (1);
}
