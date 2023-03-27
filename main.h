#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>

/**
 * struct format_specs - structure for printf
 * @c: char reference for spec
 * @f: function pointer for func to use
*/
typedef struct format_specs
{
    char *c;
    int (*f)(va_list);
} f_specs;

void _putchar(char c);
int _printf(const char *format, ...);

int _print_str(va_list);
int _print_char(va_list);
int _print_mod(__attribute__((unused))va_list arg);

#endif
