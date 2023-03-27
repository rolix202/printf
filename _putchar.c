#include <unistd.h>

/**
 * _putchar - write char to stdout
 * @c: char to write
 */
int _putchar(char *c)
{
	return (write(1, &c, 1));
}
