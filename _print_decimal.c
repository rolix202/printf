#include "main.h"

/**
 * _print_decimal - prints a decimal integer to stdout
 * @arg: va_list containing the integer to print
 * Return: number of characters printed
 */

int _print_decimal(va_list arg)
{
	int n = va_arg(arg, int);
	int rev_num = 0;
	int len = 0;

	if (n == 0)
	{
		_putchar('0');
		len++;
	}
	else if (n < 0)
	{
		_putchar('-');
		len++;
		n = -n;
	}
	while (n > 0)
	{
		rev_num = rev_num * 10 + n % 10;
		n /= 10;
	}
	while (rev_num > 0)
	{
		char digit = rev_num % 10 + '0';

		_putchar(digit);
		len++;
		rev_num /= 10;
	}
	return (len);
}
