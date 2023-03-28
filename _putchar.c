#include <unistd.h>

/**
 * _putchar - write char to stdout
 * @c: char to write
 * Return: chars written
 */
int _putchar(char *c)
{
	return (write(1, &c, 1));
}
