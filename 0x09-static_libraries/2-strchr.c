#include "main.h"

/**
 * _strchr - Entry point
 * @s: as input
 * @c: as input
 * Return: Always return 0 for sucess
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
