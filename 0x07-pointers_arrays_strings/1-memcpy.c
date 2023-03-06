#include "main.h"

/**
 * _memcpy - Copies memory area
 *
 * @dest: Where to cpoy the memory to.
 * @n: The number of bytes
 * @src: The memory area to copy from
 *
 * Return: A pointer to @dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
