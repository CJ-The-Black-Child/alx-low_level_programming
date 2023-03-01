#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest:A pointer to a character that is going to be changed.
 * @src: A pointer to a character that will be also changed as well.
 * Return: Always return dest.
 */

char *_strcat(char *dest, char *src)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
