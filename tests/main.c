#include "main.h"
#include <stdio.h>
/* gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format *.c */

int main()
{
	int i;
	char arr[6] = "hello";
	char c = 'g';
	
	i = printf("Tis a %s sen\n", arr);
	printf("%d\n", i);
	i = _printf("Tis a %s sen\n", arr);/* doesnt work when nothing is passed */
	printf("%d\n\n", i);

	i = printf("Tis a sen %c %c\n",c);
	printf("%d\n", i);
	i = _printf("Tis a sen %c %c\n", 48);
	printf("%d\n\n", i);

	i = printf("%%\n");
	printf("%d\n", i);
	i = _printf("%%\n"); /* calls va_arg and sets next arg without using it - i think */
	printf("%d\n\n", i);
	return (0);
}
