/*
 * File: 6-abs.c
 */
#include "main.h"
/**
 * _abs - computes the absolute values of an integer.
 * @t: The integer to be computed.
 *
 * Return: The absolute value of the integer.
 */
int _abs(int t)
{
	if (t >= 0)
		return (t);
	else
		return (-t);
}
