#include "main.h"

/**
 * _strchr - Locates a character in a string
 * 
 * @s: The string to check
 * @c: The character we're looking for
 *
 * Return: A pointer to the first occurance of the character @c in the string
 * @s. Return Null if the character isn't found
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);
	return (NULL);
}
