#include "main.h"

/**
 * sqrt_check - Checks for the square root of c
 * @g: guess at sqrt.
 * @c: number to find sqrt of.
 *
 * Return: -1 or sqrt of c.
 */

int sqrt_check(int g, int c)
{
	if (g * g == c)
		return (g);
	if (g * g > c)
		return (-1);
	return (sqrt_check(g + 1, c));
}

/**
 * _sqrt_recursion - returns the natural sqrt of a number
 * @n: integer to find sqrt of.
 *
 * Return: natural square rootor -1
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (sqrt_check(1, n));
}
