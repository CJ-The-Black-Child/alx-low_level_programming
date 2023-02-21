/*
 * File: 4-isalpha.c
 */

#include "main.h"

/**
 * _isalpha - Checks if a character is alphabetic
 * @c: The character thats to be checked.
 *
 * Return: 1 if the character is letter, lowercase or uppercase, otherwise.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') ||
			(c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
