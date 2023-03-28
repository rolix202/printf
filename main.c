#include "main.h"
#include <stdio.h>
/* gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format *.c */

int main()
{
	int len;
    int len2;

	len = _printf("Let's try to printf simple sentence.\n");
    len2 = printf("Let's try to printf simple sentence.\n");
	_printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
	len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    _printf("%d\n", len);
    printf("%d\n", len2);
	puts("\n");

	_printf("my printf %c %s %c %s %s %% %c %%\n", 'g', "sentence", 't', "another", "word", 'a');
	puts("\n");
	printf("std printf %c %s %c %s %s %% %c %%\n", 'g', "sentence", 't', "another", "word", 'a');
	return (0);
}
