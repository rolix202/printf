#include "main.h"

/**
 * _print_int - prints an integer to stdout
 * @arg: va_list containing the integer to print
 * Return: number of characters printed
 */
int _print_int(va_list arg)
{
    int n = va_arg(arg, int);
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

    int rev_num = 0;
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

    return len;
}
