#include "main.h"

/**
 * palindromeChecker - Checks the string.
 * @str: the string to be checked.
 * @len: the length of the string.
 * @i: the incrementor, starts at 0.
 *
 * Return: i if it's a palindrome, 0 if it's not.
 *
 */

int palindromeChecker(char *str, int len, int i)
{
	if (i < len && str[i] == str[len])
		return (palindromeChecker(str, len - 1, i + 1));
	if (str[i] != str[len])
		return (0);
	return (1);
}

/**
 * _strlen_recursion - returns the length of a string
 * @s: the string to check the length of
 *
 * Return: an integer that displays the length of a string
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (1 + _strlen_recursion(s + 1));

	return (0);
}

/**
 * is_palindrome - checks to see if a string is a palindrome.
 * @s: the string to be checked.
 * Return: 1 if its a palindrome, 2 if it is not a palindrome.
 */

int is_palindrome(char *s)
{
	int i = 0;
	int length = _strlen_recursion(s) - 1;

	return (palindromeChecker(s, length, i));
}
