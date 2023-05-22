#include <unistd.h>

/**
 * _putchar -  Writes the character c to stdout
 *
 * Description: On error, -1 is returned, and error is set appropriately.
 *
 * @c: The character to print
 *
 * Return: On success 1.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
