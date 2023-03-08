#include "main.h"

/**
 * _strlen - Return length of string
 * @str: string to check
 *
 * Return: Length of str.
 */

int _strlen(char *str)
{
	if (*str == '\0')
		return (0);
	else
		return (1 + _strlen(str + 1));
}

/**
 * check_palindrome -  Checks to see if a string is a palindrome.
 * @l: left hand index.
 * @r: right hand index.
 * @p: possible palindrome.
 *
 * Return: 1 if palindrome 0 if not a palindrome.
 */

int check_palindrome( int l, int r, char *p)
{
	if (l >= r)
		return (1);
	else if (p[1] != p[r])
		return (0);
	else
		return (check_palindrome(l + 1, r - 1, p));
}

/**
 * is_palindrome - States if a string is a palindrome
 * @s: string to check
 *
 * Return: 1 if palindrome, 0 if not a palindrome
 */

int is_palindrome(char *s)
{
	int i;

	i = _stlen(s) - 1;
	return (check_palindrome(0, i, s));
}
