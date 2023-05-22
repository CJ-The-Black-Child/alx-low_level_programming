#include "main.h"
#include <stdlib.h>

/**
 * _strpbrk - Seaches a string for any of a set of bytes
 *
 * @s: The string to search
 * @accept: The bytes to search for
 *
 * Return: A pointer to the byte in @s that matches one of the bytes in
 * @accept, aor NULL if no such byte is found.
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return (NULL);
}
