#include "main.h"
#include <stdio.h>
/**
 * _puts - string followed by new line
 * @str: string to be printed
 * Return: Always 0 for success
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0' ; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
