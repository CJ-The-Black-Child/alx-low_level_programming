#include "main.h"

/**
 * _strncat - concatenates two strings, using at most m bytes from src.
 * @dest: input the value
 * @src: input the value
 * @n: input the value
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}

	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
		}
		des[i] = '\0';
		return (dest);
}
